#include "recomp.h"

/* FUN_10009265 @ 0x10169265 (53 bytes, 25 insns) */
void f_10169265(void) {
  FTRACE(0x10169265u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169265 push ebp */
  push32((uint32_t)(EBP));
  /* 10169266 mov ebp, esp */
  EBP = (ESP);
  /* 10169268 push ecx */
  push32((uint32_t)(ECX));
  /* 10169269 push esi */
  push32((uint32_t)(ESI));
  /* 1016926a wait  */
  /* wait (no observable integer/reg state) */
  /* 1016926b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 1016926e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 10169271 call 0x101692b0 */
  push32(0x10169276u); f_101692b0();
  /* 10169276 mov esi, eax */
  ESI = (EAX);
  /* 10169278 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016927b not eax */
  EAX = (~(EAX));
  /* 1016927d and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 1016927f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10169282 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10169285 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 10169287 push esi */
  push32((uint32_t)(ESI));
  /* 10169288 call 0x10169342 */
  push32(0x1016928du); f_10169342();
  /* 1016928d pop ecx */
  ECX = (pop32());
  /* 1016928e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10169291 pop ecx */
  ECX = (pop32());
  /* 10169292 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 10169295 mov eax, esi */
  EAX = (ESI);
  /* 10169297 pop esi */
  ESI = (pop32());
  /* 10169298 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169299 ret  */
  ESPCHK(0x10169265u, _esp0);
  ESP += 4; return;
}

/* FUN_1000929a @ 0x1016929a (22 bytes, 8 insns) */
void f_1016929a(void) {
  FTRACE(0x1016929au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016929a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1016929e and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101692a3 push eax */
  push32((uint32_t)(EAX));
  /* 101692a4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101692a8 call 0x10169265 */
  push32(0x101692adu); f_10169265();
  /* 101692ad pop ecx */
  ECX = (pop32());
  /* 101692ae pop ecx */
  ECX = (pop32());
  /* 101692af ret  */
  ESPCHK(0x1016929au, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x101692b0 (146 bytes, 58 insns) */
void f_101692b0(void) {
  FTRACE(0x101692b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101692b0 push ebx */
  push32((uint32_t)(EBX));
  /* 101692b1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 101692b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101692b7 push ebp */
  push32((uint32_t)(EBP));
  /* 101692b8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101692bb push edi */
  push32((uint32_t)(EDI));
  /* 101692bc je 0x101692c1 */
  if (C.zf) goto L_101692c1;
  /* 101692be push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101692c0 pop eax */
  EAX = (pop32());
L_101692c1:;
  /* 101692c1 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 101692c4 je 0x101692c8 */
  if (C.zf) goto L_101692c8;
  /* 101692c6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_101692c8:;
  /* 101692c8 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 101692cb je 0x101692cf */
  if (C.zf) goto L_101692cf;
  /* 101692cd or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_101692cf:;
  /* 101692cf test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 101692d2 je 0x101692d6 */
  if (C.zf) goto L_101692d6;
  /* 101692d4 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_101692d6:;
  /* 101692d6 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 101692d9 je 0x101692dd */
  if (C.zf) goto L_101692dd;
  /* 101692db or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_101692dd:;
  /* 101692dd test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 101692e0 je 0x101692e7 */
  if (C.zf) goto L_101692e7;
  /* 101692e2 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_101692e7:;
  /* 101692e7 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 101692ea push esi */
  push32((uint32_t)(ESI));
  /* 101692eb mov edx, ecx */
  EDX = (ECX);
  /* 101692ed mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 101692f2 mov edi, 0x300 */
  EDI = (0x300u);
  /* 101692f7 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 101692f9 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 101692fe je 0x1016931f */
  if (C.zf) goto L_1016931f;
  /* 10169300 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169306 je 0x1016931c */
  if (C.zf) goto L_1016931c;
  /* 10169308 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016930e je 0x10169318 */
  if (C.zf) goto L_10169318;
  /* 10169310 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169312 jne 0x1016931f */
  if (!C.zf) goto L_1016931f;
  /* 10169314 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10169316 jmp 0x1016931f */
  goto L_1016931f;
L_10169318:;
  /* 10169318 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 1016931a jmp 0x1016931f */
  goto L_1016931f;
L_1016931c:;
  /* 1016931c or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_1016931f:;
  /* 1016931f and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10169321 pop esi */
  ESI = (pop32());
  /* 10169322 je 0x1016932f */
  if (C.zf) goto L_1016932f;
  /* 10169324 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169326 jne 0x10169334 */
  if (!C.zf) goto L_10169334;
  /* 10169328 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 1016932d jmp 0x10169334 */
  goto L_10169334;
L_1016932f:;
  /* 1016932f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_10169334:;
  /* 10169334 pop edi */
  EDI = (pop32());
  /* 10169335 pop ebp */
  EBP = (pop32());
  /* 10169336 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 10169339 pop ebx */
  EBX = (pop32());
  /* 1016933a je 0x10169341 */
  if (C.zf) goto L_10169341;
  /* 1016933c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_10169341:;
  /* 10169341 ret  */
  ESPCHK(0x101692b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009342 @ 0x10169342 (137 bytes, 53 insns) */
void f_10169342(void) {
  FTRACE(0x10169342u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169342 push ebx */
  push32((uint32_t)(EBX));
  /* 10169343 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10169347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10169349 push esi */
  push32((uint32_t)(ESI));
  /* 1016934a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 1016934d je 0x10169352 */
  if (C.zf) goto L_10169352;
  /* 1016934f push 1 */
  push32((uint32_t)(0x1u));
  /* 10169351 pop eax */
  EAX = (pop32());
L_10169352:;
  /* 10169352 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10169355 je 0x10169359 */
  if (C.zf) goto L_10169359;
  /* 10169357 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_10169359:;
  /* 10169359 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1016935c je 0x10169360 */
  if (C.zf) goto L_10169360;
  /* 1016935e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_10169360:;
  /* 10169360 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10169363 je 0x10169367 */
  if (C.zf) goto L_10169367;
  /* 10169365 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_10169367:;
  /* 10169367 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1016936a je 0x1016936e */
  if (C.zf) goto L_1016936e;
  /* 1016936c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_1016936e:;
  /* 1016936e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 10169374 je 0x10169378 */
  if (C.zf) goto L_10169378;
  /* 10169376 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_10169378:;
  /* 10169378 mov ecx, ebx */
  ECX = (EBX);
  /* 1016937a mov edx, 0x300 */
  EDX = (0x300u);
  /* 1016937f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10169381 mov esi, 0x200 */
  ESI = (0x200u);
  /* 10169386 je 0x101693a5 */
  if (C.zf) goto L_101693a5;
  /* 10169388 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016938e je 0x101693a2 */
  if (C.zf) goto L_101693a2;
  /* 10169390 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169392 je 0x1016939d */
  if (C.zf) goto L_1016939d;
  /* 10169394 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169396 jne 0x101693a5 */
  if (!C.zf) goto L_101693a5;
  /* 10169398 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 1016939b jmp 0x101693a5 */
  goto L_101693a5;
L_1016939d:;
  /* 1016939d or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 101693a0 jmp 0x101693a5 */
  goto L_101693a5;
L_101693a2:;
  /* 101693a2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_101693a5:;
  /* 101693a5 mov ecx, ebx */
  ECX = (EBX);
  /* 101693a7 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 101693ad je 0x101693bb */
  if (C.zf) goto L_101693bb;
  /* 101693af cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101693b5 jne 0x101693bd */
  if (!C.zf) goto L_101693bd;
  /* 101693b7 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 101693b9 jmp 0x101693bd */
  goto L_101693bd;
L_101693bb:;
  /* 101693bb or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_101693bd:;
  /* 101693bd pop esi */
  ESI = (pop32());
  /* 101693be test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 101693c4 pop ebx */
  EBX = (pop32());
  /* 101693c5 je 0x101693ca */
  if (C.zf) goto L_101693ca;
  /* 101693c7 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_101693ca:;
  /* 101693ca ret  */
  ESPCHK(0x10169342u, _esp0);
  ESP += 4; return;
}

/* FUN_100093cb @ 0x101693cb (117 bytes, 46 insns) */
void f_101693cb(void) {
  FTRACE(0x101693cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101693cb push ebp */
  push32((uint32_t)(EBP));
  /* 101693cc mov ebp, esp */
  EBP = (ESP);
  /* 101693ce push ecx */
  push32((uint32_t)(ECX));
  /* 101693cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101693d2 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 101693d5 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101693db ja 0x101693e9 */
  if ((!C.cf&&!C.zf)) goto L_101693e9;
  /* 101693dd mov ecx, dword ptr [0x10170a50] */
  ECX = (r32((uint32_t)(0x10170a50)));
  /* 101693e3 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 101693e7 jmp 0x1016943b */
  goto L_1016943b;
L_101693e9:;
  /* 101693e9 mov ecx, eax */
  ECX = (EAX);
  /* 101693eb push esi */
  push32((uint32_t)(ESI));
  /* 101693ec mov esi, dword ptr [0x10170a50] */
  ESI = (r32((uint32_t)(0x10170a50)));
  /* 101693f2 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 101693f5 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 101693f8 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101693fd pop esi */
  ESI = (pop32());
  /* 101693fe je 0x1016940e */
  if (C.zf) goto L_1016940e;
  /* 10169400 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 10169404 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10169407 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 1016940a push 2 */
  push32((uint32_t)(0x2u));
  /* 1016940c jmp 0x10169417 */
  goto L_10169417;
L_1016940e:;
  /* 1016940e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10169412 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10169415 push 1 */
  push32((uint32_t)(0x1u));
L_10169417:;
  /* 10169417 pop eax */
  EAX = (pop32());
  /* 10169418 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 1016941b push 1 */
  push32((uint32_t)(0x1u));
  /* 1016941d push 0 */
  push32((uint32_t)(0x0u));
  /* 1016941f push 0 */
  push32((uint32_t)(0x0u));
  /* 10169421 push ecx */
  push32((uint32_t)(ECX));
  /* 10169422 push eax */
  push32((uint32_t)(EAX));
  /* 10169423 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10169426 push eax */
  push32((uint32_t)(EAX));
  /* 10169427 push 1 */
  push32((uint32_t)(0x1u));
  /* 10169429 call 0x1016c27d */
  push32(0x1016942eu); f_1016c27d();
  /* 1016942e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10169431 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10169433 jne 0x10169437 */
  if (!C.zf) goto L_10169437;
  /* 10169435 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169436 ret  */
  ESPCHK(0x101693cbu, _esp0);
  ESP += 4; return;
L_10169437:;
  /* 10169437 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_1016943b:;
  /* 1016943b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1016943e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016943f ret  */
  ESPCHK(0x101693cbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009440 @ 0x10169440 (111 bytes, 44 insns) */
void f_10169440(void) {
  FTRACE(0x10169440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169440 push ebx */
  push32((uint32_t)(EBX));
  /* 10169441 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10169443 cmp dword ptr [0x101768b8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101768b8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169449 jne 0x1016945e */
  if (!C.zf) goto L_1016945e;
  /* 1016944b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1016944f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169452 jl 0x101694ad */
  if ((C.sf!=C.of)) goto L_101694ad;
  /* 10169454 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169457 jg 0x101694ad */
  if ((!C.zf&&C.sf==C.of)) goto L_101694ad;
  /* 10169459 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016945c pop ebx */
  EBX = (pop32());
  /* 1016945d ret  */
  ESPCHK(0x10169440u, _esp0);
  ESP += 4; return;
L_1016945e:;
  /* 1016945e push esi */
  push32((uint32_t)(ESI));
  /* 1016945f mov esi, 0x10176a34 */
  ESI = (0x10176a34u);
  /* 10169464 push edi */
  push32((uint32_t)(EDI));
  /* 10169465 push esi */
  push32((uint32_t)(ESI));
  /* 10169466 call dword ptr [0x1016e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e090))), 0x1016946cu);
  /* 1016946c cmp dword ptr [0x10176a30], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10176a30))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169472 mov edi, dword ptr [0x1016e08c] */
  EDI = (r32((uint32_t)(0x1016e08c)));
  /* 10169478 je 0x10169488 */
  if (C.zf) goto L_10169488;
  /* 1016947a push esi */
  push32((uint32_t)(ESI));
  /* 1016947b call edi */
  call_ind((uint32_t)(EDI), 0x1016947du);
  /* 1016947d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1016947f call 0x1016a013 */
  push32(0x10169484u); f_1016a013();
  /* 10169484 pop ecx */
  ECX = (pop32());
  /* 10169485 push 1 */
  push32((uint32_t)(0x1u));
  /* 10169487 pop ebx */
  EBX = (pop32());
L_10169488:;
  /* 10169488 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1016948c call 0x101694af */
  push32(0x10169491u); f_101694af();
  /* 10169491 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10169493 pop ecx */
  ECX = (pop32());
  /* 10169494 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10169498 je 0x101694a4 */
  if (C.zf) goto L_101694a4;
  /* 1016949a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1016949c call 0x1016a074 */
  push32(0x101694a1u); f_1016a074();
  /* 101694a1 pop ecx */
  ECX = (pop32());
  /* 101694a2 jmp 0x101694a7 */
  goto L_101694a7;
L_101694a4:;
  /* 101694a4 push esi */
  push32((uint32_t)(ESI));
  /* 101694a5 call edi */
  call_ind((uint32_t)(EDI), 0x101694a7u);
L_101694a7:;
  /* 101694a7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101694ab pop edi */
  EDI = (pop32());
  /* 101694ac pop esi */
  ESI = (pop32());
L_101694ad:;
  /* 101694ad pop ebx */
  EBX = (pop32());
  /* 101694ae ret  */
  ESPCHK(0x10169440u, _esp0);
  ESP += 4; return;
}

/* FUN_100094af @ 0x101694af (203 bytes, 78 insns) */
void f_101694af(void) {
  FTRACE(0x101694afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101694af push ebp */
  push32((uint32_t)(EBP));
  /* 101694b0 mov ebp, esp */
  EBP = (ESP);
  /* 101694b2 push ecx */
  push32((uint32_t)(ECX));
  /* 101694b3 cmp dword ptr [0x101768b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101768b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101694ba push ebx */
  push32((uint32_t)(EBX));
  /* 101694bb push esi */
  push32((uint32_t)(ESI));
  /* 101694bc push edi */
  push32((uint32_t)(EDI));
  /* 101694bd jne 0x101694dc */
  if (!C.zf) goto L_101694dc;
  /* 101694bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101694c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101694c5 jl 0x10169575 */
  if ((C.sf!=C.of)) goto L_10169575;
  /* 101694cb cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101694ce jg 0x10169575 */
  if ((!C.zf&&C.sf==C.of)) goto L_10169575;
  /* 101694d4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101694d7 jmp 0x10169575 */
  goto L_10169575;
L_101694dc:;
  /* 101694dc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101694df mov edi, 0x100 */
  EDI = (0x100u);
  /* 101694e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101694e6 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101694e8 pop esi */
  ESI = (pop32());
  /* 101694e9 jge 0x10169510 */
  if ((C.sf==C.of)) goto L_10169510;
  /* 101694eb cmp dword ptr [0x10170c60], esi */
  { uint32_t _a=(r32((uint32_t)(0x10170c60))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101694f1 jle 0x101694fe */
  if ((C.zf||C.sf!=C.of)) goto L_101694fe;
  /* 101694f3 push esi */
  push32((uint32_t)(ESI));
  /* 101694f4 push ebx */
  push32((uint32_t)(EBX));
  /* 101694f5 call 0x101693cb */
  push32(0x101694fau); f_101693cb();
  /* 101694fa pop ecx */
  ECX = (pop32());
  /* 101694fb pop ecx */
  ECX = (pop32());
  /* 101694fc jmp 0x10169508 */
  goto L_10169508;
L_101694fe:;
  /* 101694fe mov eax, dword ptr [0x10170a50] */
  EAX = (r32((uint32_t)(0x10170a50)));
  /* 10169503 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 10169506 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_10169508:;
  /* 10169508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016950a jne 0x10169510 */
  if (!C.zf) goto L_10169510;
L_1016950c:;
  /* 1016950c mov eax, ebx */
  EAX = (EBX);
  /* 1016950e jmp 0x10169575 */
  goto L_10169575;
L_10169510:;
  /* 10169510 mov edx, dword ptr [0x10170a50] */
  EDX = (r32((uint32_t)(0x10170a50)));
  /* 10169516 mov eax, ebx */
  EAX = (EBX);
  /* 10169518 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1016951b movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1016951e test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10169523 je 0x10169534 */
  if (C.zf) goto L_10169534;
  /* 10169525 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 10169529 push 2 */
  push32((uint32_t)(0x2u));
  /* 1016952b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1016952e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 10169531 pop eax */
  EAX = (pop32());
  /* 10169532 jmp 0x1016953d */
  goto L_1016953d;
L_10169534:;
  /* 10169534 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 10169538 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1016953b mov eax, esi */
  EAX = (ESI);
L_1016953d:;
  /* 1016953d push esi */
  push32((uint32_t)(ESI));
  /* 1016953e push 0 */
  push32((uint32_t)(0x0u));
  /* 10169540 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10169543 push 3 */
  push32((uint32_t)(0x3u));
  /* 10169545 push ecx */
  push32((uint32_t)(ECX));
  /* 10169546 push eax */
  push32((uint32_t)(EAX));
  /* 10169547 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1016954a push eax */
  push32((uint32_t)(EAX));
  /* 1016954b push edi */
  push32((uint32_t)(EDI));
  /* 1016954c push dword ptr [0x101768b8] */
  push32((uint32_t)(r32((uint32_t)(0x101768b8))));
  /* 10169552 call 0x1016c3c6 */
  push32(0x10169557u); f_1016c3c6();
  /* 10169557 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016955a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016955c je 0x1016950c */
  if (C.zf) goto L_1016950c;
  /* 1016955e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169560 jne 0x10169568 */
  if (!C.zf) goto L_10169568;
  /* 10169562 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10169566 jmp 0x10169575 */
  goto L_10169575;
L_10169568:;
  /* 10169568 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1016956c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10169570 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10169573 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10169575:;
  /* 10169575 pop edi */
  EDI = (pop32());
  /* 10169576 pop esi */
  ESI = (pop32());
  /* 10169577 pop ebx */
  EBX = (pop32());
  /* 10169578 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169579 ret  */
  ESPCHK(0x101694afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000957a @ 0x1016957a (73 bytes, 36 insns) */
void f_1016957a(void) {
  FTRACE(0x1016957au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016957a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1016957e push esi */
  push32((uint32_t)(ESI));
  /* 1016957f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10169581 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10169582 pop ecx */
  ECX = (pop32());
  /* 10169583 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10169585 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10169587 mov esi, eax */
  ESI = (EAX);
  /* 10169589 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1016958d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1016958e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10169590 pop ecx */
  ECX = (pop32());
  /* 10169591 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10169595 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10169597 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1016959a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1016959c not edx */
  EDX = (~(EDX));
  /* 1016959e test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 101695a1 jne 0x101695bf */
  if (!C.zf) goto L_101695bf;
  /* 101695a3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101695a4 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101695a7 jge 0x101695ba */
  if ((C.sf==C.of)) goto L_101695ba;
  /* 101695a9 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_101695ac:;
  /* 101695ac cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101695af jne 0x101695bf */
  if (!C.zf) goto L_101695bf;
  /* 101695b1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101695b2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101695b5 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101695b8 jl 0x101695ac */
  if ((C.sf!=C.of)) goto L_101695ac;
L_101695ba:;
  /* 101695ba push 1 */
  push32((uint32_t)(0x1u));
  /* 101695bc pop eax */
  EAX = (pop32());
  /* 101695bd pop esi */
  ESI = (pop32());
  /* 101695be ret  */
  ESPCHK(0x1016957au, _esp0);
  ESP += 4; return;
L_101695bf:;
  /* 101695bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101695c1 pop esi */
  ESI = (pop32());
  /* 101695c2 ret  */
  ESPCHK(0x1016957au, _esp0);
  ESP += 4; return;
}

/* FUN_100095c3 @ 0x101695c3 (86 bytes, 43 insns) */
void f_101695c3(void) {
  FTRACE(0x101695c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101695c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101695c7 push ebx */
  push32((uint32_t)(EBX));
  /* 101695c8 push esi */
  push32((uint32_t)(ESI));
  /* 101695c9 push edi */
  push32((uint32_t)(EDI));
  /* 101695ca push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101695cc mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101695d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101695d1 pop ecx */
  ECX = (pop32());
  /* 101695d2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101695d4 mov esi, eax */
  ESI = (EAX);
  /* 101695d6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101695da cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101695db idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101695dd lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 101695e0 push edi */
  push32((uint32_t)(EDI));
  /* 101695e1 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101695e3 pop ecx */
  ECX = (pop32());
  /* 101695e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101695e6 pop eax */
  EAX = (pop32());
  /* 101695e7 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101695e9 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101695eb push eax */
  push32((uint32_t)(EAX));
  /* 101695ec push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 101695ee call 0x1016c615 */
  push32(0x101695f3u); f_1016c615();
  /* 101695f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101695f6 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101695f7 js 0x10169615 */
  if (C.sf) goto L_10169615;
  /* 101695f9 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_101695fc:;
  /* 101695fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101695fe je 0x10169615 */
  if (C.zf) goto L_10169615;
  /* 10169600 push edi */
  push32((uint32_t)(EDI));
  /* 10169601 push 1 */
  push32((uint32_t)(0x1u));
  /* 10169603 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 10169605 call 0x1016c615 */
  push32(0x1016960au); f_1016c615();
  /* 1016960a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016960d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1016960e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10169611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10169613 jge 0x101695fc */
  if ((C.sf==C.of)) goto L_101695fc;
L_10169615:;
  /* 10169615 pop edi */
  EDI = (pop32());
  /* 10169616 pop esi */
  ESI = (pop32());
  /* 10169617 pop ebx */
  EBX = (pop32());
  /* 10169618 ret  */
  ESPCHK(0x101695c3u, _esp0);
  ESP += 4; return;
}

/* FUN_10009619 @ 0x10169619 (140 bytes, 71 insns) */
void f_10169619(void) {
  FTRACE(0x10169619u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169619 push ebp */
  push32((uint32_t)(EBP));
  /* 1016961a mov ebp, esp */
  EBP = (ESP);
  /* 1016961c push ecx */
  push32((uint32_t)(ECX));
  /* 1016961d push ecx */
  push32((uint32_t)(ECX));
  /* 1016961e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10169621 push ebx */
  push32((uint32_t)(EBX));
  /* 10169622 push esi */
  push32((uint32_t)(ESI));
  /* 10169623 push edi */
  push32((uint32_t)(EDI));
  /* 10169624 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 10169627 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10169629 pop ecx */
  ECX = (pop32());
  /* 1016962a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016962e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 10169631 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10169633 mov eax, ebx */
  EAX = (EBX);
  /* 10169635 pop esi */
  ESI = (pop32());
  /* 10169636 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10169637 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10169639 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1016963b mov ecx, eax */
  ECX = (EAX);
  /* 1016963d mov eax, ebx */
  EAX = (EBX);
  /* 1016963f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10169640 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10169642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10169645 pop esi */
  ESI = (pop32());
  /* 10169646 push 1 */
  push32((uint32_t)(0x1u));
  /* 10169648 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1016964b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1016964e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10169651 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10169653 pop edx */
  EDX = (pop32());
  /* 10169654 mov ecx, esi */
  ECX = (ESI);
  /* 10169656 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10169658 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 1016965a je 0x1016967d */
  if (C.zf) goto L_1016967d;
  /* 1016965c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1016965d push ebx */
  push32((uint32_t)(EBX));
  /* 1016965e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10169661 call 0x1016957a */
  push32(0x10169666u); f_1016957a();
  /* 10169666 pop ecx */
  ECX = (pop32());
  /* 10169667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10169669 pop ecx */
  ECX = (pop32());
  /* 1016966a jne 0x1016967a */
  if (!C.zf) goto L_1016967a;
  /* 1016966c push edi */
  push32((uint32_t)(EDI));
  /* 1016966d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10169670 call 0x101695c3 */
  push32(0x10169675u); f_101695c3();
  /* 10169675 pop ecx */
  ECX = (pop32());
  /* 10169676 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10169679 pop ecx */
  ECX = (pop32());
L_1016967a:;
  /* 1016967a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1016967d:;
  /* 1016967d or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10169680 mov ecx, esi */
  ECX = (ESI);
  /* 10169682 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10169684 push 3 */
  push32((uint32_t)(0x3u));
  /* 10169686 pop ecx */
  ECX = (pop32());
  /* 10169687 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10169689 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1016968c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016968d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016968f jge 0x1016969d */
  if ((C.sf==C.of)) goto L_1016969d;
  /* 10169691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10169694 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10169696 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10169699 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016969b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_1016969d:;
  /* 1016969d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101696a0 pop edi */
  EDI = (pop32());
  /* 101696a1 pop esi */
  ESI = (pop32());
  /* 101696a2 pop ebx */
  EBX = (pop32());
  /* 101696a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101696a4 ret  */
  ESPCHK(0x10169619u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a5 @ 0x101696a5 (27 bytes, 13 insns) */
void f_101696a5(void) {
  FTRACE(0x101696a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101696a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101696a9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101696ad push esi */
  push32((uint32_t)(ESI));
  /* 101696ae push 3 */
  push32((uint32_t)(0x3u));
  /* 101696b0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101696b2 pop edx */
  EDX = (pop32());
L_101696b3:;
  /* 101696b3 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 101696b5 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 101696b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101696bb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101696bc jne 0x101696b3 */
  if (!C.zf) goto L_101696b3;
  /* 101696be pop esi */
  ESI = (pop32());
  /* 101696bf ret  */
  ESPCHK(0x101696a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100096c0 @ 0x101696c0 (12 bytes, 8 insns) */
void f_101696c0(void) {
  FTRACE(0x101696c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101696c0 push edi */
  push32((uint32_t)(EDI));
  /* 101696c1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 101696c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101696c7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101696c8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101696c9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101696ca pop edi */
  EDI = (pop32());
  /* 101696cb ret  */
  ESPCHK(0x101696c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096cc @ 0x101696cc (27 bytes, 13 insns) */
void f_101696cc(void) {
  FTRACE(0x101696ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101696cc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101696d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_101696d2:;
  /* 101696d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101696d5 jne 0x101696e4 */
  if (!C.zf) goto L_101696e4;
  /* 101696d7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101696d8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101696db cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101696de jl 0x101696d2 */
  if ((C.sf!=C.of)) goto L_101696d2;
  /* 101696e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101696e2 pop eax */
  EAX = (pop32());
  /* 101696e3 ret  */
  ESPCHK(0x101696ccu, _esp0);
  ESP += 4; return;
L_101696e4:;
  /* 101696e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101696e6 ret  */
  ESPCHK(0x101696ccu, _esp0);
  ESP += 4; return;
}

/* FUN_100096e7 @ 0x101696e7 (141 bytes, 64 insns) */
void f_101696e7(void) {
  FTRACE(0x101696e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101696e7 push ebp */
  push32((uint32_t)(EBP));
  /* 101696e8 mov ebp, esp */
  EBP = (ESP);
  /* 101696ea sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101696ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101696f0 push ebx */
  push32((uint32_t)(EBX));
  /* 101696f1 push esi */
  push32((uint32_t)(ESI));
  /* 101696f2 push edi */
  push32((uint32_t)(EDI));
  /* 101696f3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101696f5 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101696f8 pop ebx */
  EBX = (pop32());
  /* 101696f9 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 101696fc cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101696fd mov ecx, ebx */
  ECX = (EBX);
  /* 101696ff mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 10169706 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10169708 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1016970b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016970e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1016970f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10169711 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10169715 mov ecx, edx */
  ECX = (EDX);
  /* 10169717 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10169719 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016971b not esi */
  ESI = (~(ESI));
L_1016971d:;
  /* 1016971d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1016971f mov ecx, eax */
  ECX = (EAX);
  /* 10169721 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10169723 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10169726 mov ecx, edx */
  ECX = (EDX);
  /* 10169728 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1016972a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1016972d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1016972f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10169732 mov ecx, ebx */
  ECX = (EBX);
  /* 10169734 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10169737 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10169739 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1016973c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1016973f jne 0x1016971d */
  if (!C.zf) goto L_1016971d;
  /* 10169741 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 10169744 push 2 */
  push32((uint32_t)(0x2u));
  /* 10169746 pop ebx */
  EBX = (pop32());
  /* 10169747 mov esi, edi */
  ESI = (EDI);
  /* 10169749 push 8 */
  push32((uint32_t)(0x8u));
  /* 1016974b pop ecx */
  ECX = (pop32());
  /* 1016974c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_1016974f:;
  /* 1016974f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169751 jl 0x10169762 */
  if ((C.sf!=C.of)) goto L_10169762;
  /* 10169753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10169756 mov eax, ecx */
  EAX = (ECX);
  /* 10169758 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016975a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1016975d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 10169760 jmp 0x10169769 */
  goto L_10169769;
L_10169762:;
  /* 10169762 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10169765 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_10169769:;
  /* 10169769 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1016976a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016976d jns 0x1016974f */
  if (!C.sf) goto L_1016974f;
  /* 1016976f pop edi */
  EDI = (pop32());
  /* 10169770 pop esi */
  ESI = (pop32());
  /* 10169771 pop ebx */
  EBX = (pop32());
  /* 10169772 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169773 ret  */
  ESPCHK(0x101696e7u, _esp0);
  ESP += 4; return;
}

/* FUN_10009774 @ 0x10169774 (364 bytes, 138 insns) */
void f_10169774(void) {
  FTRACE(0x10169774u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169774 push ebp */
  push32((uint32_t)(EBP));
  /* 10169775 mov ebp, esp */
  EBP = (ESP);
  /* 10169777 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016977a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016977d push ebx */
  push32((uint32_t)(EBX));
  /* 1016977e push esi */
  push32((uint32_t)(ESI));
  /* 1016977f push edi */
  push32((uint32_t)(EDI));
  /* 10169780 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 10169784 mov ebx, ecx */
  EBX = (ECX);
  /* 10169786 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1016978c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1016978f mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 10169792 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10169795 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 10169798 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1016979b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1016979e and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 101697a4 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101697aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101697ad shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101697b0 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101697b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101697b9 jne 0x101697e1 */
  if (!C.zf) goto L_101697e1;
  /* 101697bb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101697be xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101697c0 push eax */
  push32((uint32_t)(EAX));
  /* 101697c1 call 0x101696cc */
  push32(0x101697c6u); f_101696cc();
  /* 101697c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101697c8 pop ecx */
  ECX = (pop32());
  /* 101697c9 jne 0x101698a0 */
  if (!C.zf) goto L_101698a0;
  /* 101697cf lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101697d2 push eax */
  push32((uint32_t)(EAX));
  /* 101697d3 call 0x101696c0 */
  push32(0x101697d8u); f_101696c0();
  /* 101697d8 pop ecx */
  ECX = (pop32());
L_101697d9:;
  /* 101697d9 push 2 */
  push32((uint32_t)(0x2u));
L_101697db:;
  /* 101697db pop eax */
  EAX = (pop32());
  /* 101697dc jmp 0x101698a2 */
  goto L_101698a2;
L_101697e1:;
  /* 101697e1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101697e4 push eax */
  push32((uint32_t)(EAX));
  /* 101697e5 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 101697e8 push eax */
  push32((uint32_t)(EAX));
  /* 101697e9 call 0x101696a5 */
  push32(0x101697eeu); f_101696a5();
  /* 101697ee push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 101697f1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101697f4 push eax */
  push32((uint32_t)(EAX));
  /* 101697f5 call 0x10169619 */
  push32(0x101697fau); f_10169619();
  /* 101697fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101697fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101697ff je 0x10169802 */
  if (C.zf) goto L_10169802;
  /* 10169801 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10169802:;
  /* 10169802 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 10169805 mov ecx, eax */
  ECX = (EAX);
  /* 10169807 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016980a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016980c jge 0x1016981a */
  if ((C.sf==C.of)) goto L_1016981a;
  /* 1016980e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10169811 push eax */
  push32((uint32_t)(EAX));
  /* 10169812 call 0x101696c0 */
  push32(0x10169817u); f_101696c0();
  /* 10169817 pop ecx */
  ECX = (pop32());
  /* 10169818 jmp 0x10169856 */
  goto L_10169856;
L_1016981a:;
  /* 1016981a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016981c jg 0x1016985d */
  if ((!C.zf&&C.sf==C.of)) goto L_1016985d;
  /* 1016981e sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10169820 mov esi, eax */
  ESI = (EAX);
  /* 10169822 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10169825 push eax */
  push32((uint32_t)(EAX));
  /* 10169826 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10169829 push eax */
  push32((uint32_t)(EAX));
  /* 1016982a call 0x101696a5 */
  push32(0x1016982fu); f_101696a5();
  /* 1016982f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10169832 push esi */
  push32((uint32_t)(ESI));
  /* 10169833 push eax */
  push32((uint32_t)(EAX));
  /* 10169834 call 0x101696e7 */
  push32(0x10169839u); f_101696e7();
  /* 10169839 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1016983c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1016983f push eax */
  push32((uint32_t)(EAX));
  /* 10169840 call 0x10169619 */
  push32(0x10169845u); f_10169619();
  /* 10169845 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 10169848 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10169849 push eax */
  push32((uint32_t)(EAX));
  /* 1016984a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1016984d push eax */
  push32((uint32_t)(EAX));
  /* 1016984e call 0x101696e7 */
  push32(0x10169853u); f_101696e7();
  /* 10169853 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10169856:;
  /* 10169856 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10169858 jmp 0x101697d9 */
  goto L_101697d9;
L_1016985d:;
  /* 1016985d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016985f jl 0x10169889 */
  if ((C.sf!=C.of)) goto L_10169889;
  /* 10169861 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10169864 push eax */
  push32((uint32_t)(EAX));
  /* 10169865 call 0x101696c0 */
  push32(0x1016986au); f_101696c0();
  /* 1016986a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1016986d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10169871 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10169874 push eax */
  push32((uint32_t)(EAX));
  /* 10169875 call 0x101696e7 */
  push32(0x1016987au); f_101696e7();
  /* 1016987a mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1016987d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10169880 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10169882 push 1 */
  push32((uint32_t)(0x1u));
  /* 10169884 jmp 0x101697db */
  goto L_101697db;
L_10169889:;
  /* 10169889 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1016988c mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1016988f and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10169893 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10169896 push eax */
  push32((uint32_t)(EAX));
  /* 10169897 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10169899 call 0x101696e7 */
  push32(0x1016989eu); f_101696e7();
  /* 1016989e pop ecx */
  ECX = (pop32());
  /* 1016989f pop ecx */
  ECX = (pop32());
L_101698a0:;
  /* 101698a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101698a2:;
  /* 101698a2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101698a4 pop ecx */
  ECX = (pop32());
  /* 101698a5 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101698a8 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 101698ab shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101698ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101698b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101698b2 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101698b4 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 101698ba or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 101698bc or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 101698bf cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101698c2 jne 0x101698d1 */
  if (!C.zf) goto L_101698d1;
  /* 101698c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101698c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 101698ca mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 101698cd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 101698cf jmp 0x101698db */
  goto L_101698db;
L_101698d1:;
  /* 101698d1 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101698d4 jne 0x101698db */
  if (!C.zf) goto L_101698db;
  /* 101698d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101698d9 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_101698db:;
  /* 101698db pop edi */
  EDI = (pop32());
  /* 101698dc pop esi */
  ESI = (pop32());
  /* 101698dd pop ebx */
  EBX = (pop32());
  /* 101698de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101698df ret  */
  ESPCHK(0x10169774u, _esp0);
  ESP += 4; return;
}

/* FUN_100098e0 @ 0x101698e0 (22 bytes, 6 insns) */
void f_101698e0(void) {
  FTRACE(0x101698e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101698e0 push 0x10170c70 */
  push32((uint32_t)(0x10170c70u));
  /* 101698e5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101698e9 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101698ed call 0x10169774 */
  push32(0x101698f2u); f_10169774();
  /* 101698f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101698f5 ret  */
  ESPCHK(0x101698e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098f6 @ 0x101698f6 (22 bytes, 6 insns) */
void f_101698f6(void) {
  FTRACE(0x101698f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101698f6 push 0x10170c88 */
  push32((uint32_t)(0x10170c88u));
  /* 101698fb push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101698ff push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10169903 call 0x10169774 */
  push32(0x10169908u); f_10169774();
  /* 10169908 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016990b ret  */
  ESPCHK(0x101698f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000990c @ 0x1016990c (45 bytes, 21 insns) */
void f_1016990c(void) {
  FTRACE(0x1016990cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016990c push ebp */
  push32((uint32_t)(EBP));
  /* 1016990d mov ebp, esp */
  EBP = (ESP);
  /* 1016990f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10169912 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10169914 push eax */
  push32((uint32_t)(EAX));
  /* 10169915 push eax */
  push32((uint32_t)(EAX));
  /* 10169916 push eax */
  push32((uint32_t)(EAX));
  /* 10169917 push eax */
  push32((uint32_t)(EAX));
  /* 10169918 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1016991b lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1016991e push eax */
  push32((uint32_t)(EAX));
  /* 1016991f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10169922 push eax */
  push32((uint32_t)(EAX));
  /* 10169923 call 0x1016c7b6 */
  push32(0x10169928u); f_1016c7b6();
  /* 10169928 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1016992b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1016992e push eax */
  push32((uint32_t)(EAX));
  /* 1016992f call 0x101698e0 */
  push32(0x10169934u); f_101698e0();
  /* 10169934 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10169937 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169938 ret  */
  ESPCHK(0x1016990cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009939 @ 0x10169939 (45 bytes, 21 insns) */
void f_10169939(void) {
  FTRACE(0x10169939u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169939 push ebp */
  push32((uint32_t)(EBP));
  /* 1016993a mov ebp, esp */
  EBP = (ESP);
  /* 1016993c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016993f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10169941 push eax */
  push32((uint32_t)(EAX));
  /* 10169942 push eax */
  push32((uint32_t)(EAX));
  /* 10169943 push eax */
  push32((uint32_t)(EAX));
  /* 10169944 push eax */
  push32((uint32_t)(EAX));
  /* 10169945 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10169948 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1016994b push eax */
  push32((uint32_t)(EAX));
  /* 1016994c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1016994f push eax */
  push32((uint32_t)(EAX));
  /* 10169950 call 0x1016c7b6 */
  push32(0x10169955u); f_1016c7b6();
  /* 10169955 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10169958 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1016995b push eax */
  push32((uint32_t)(EAX));
  /* 1016995c call 0x101698f6 */
  push32(0x10169961u); f_101698f6();
  /* 10169961 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10169964 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169965 ret  */
  ESPCHK(0x10169939u, _esp0);
  ESP += 4; return;
}

/* FUN_10009966 @ 0x10169966 (119 bytes, 57 insns) */
void f_10169966(void) {
  FTRACE(0x10169966u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169966 push ebp */
  push32((uint32_t)(EBP));
  /* 10169967 mov ebp, esp */
  EBP = (ESP);
  /* 10169969 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1016996c push ebx */
  push32((uint32_t)(EBX));
  /* 1016996d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10169970 push esi */
  push32((uint32_t)(ESI));
  /* 10169971 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10169974 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 10169977 push edi */
  push32((uint32_t)(EDI));
  /* 10169978 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 1016997b mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 1016997e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10169980 mov eax, edi */
  EAX = (EDI);
  /* 10169982 jle 0x101699a3 */
  if ((C.zf||C.sf!=C.of)) goto L_101699a3;
  /* 10169984 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10169987 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10169989:;
  /* 10169989 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1016998b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1016998d je 0x10169995 */
  if (C.zf) goto L_10169995;
  /* 1016998f movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 10169992 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10169993 jmp 0x10169998 */
  goto L_10169998;
L_10169995:;
  /* 10169995 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10169997 pop edx */
  EDX = (pop32());
L_10169998:;
  /* 10169998 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1016999a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016999b dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1016999e jne 0x10169989 */
  if (!C.zf) goto L_10169989;
  /* 101699a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_101699a3:;
  /* 101699a3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 101699a6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101699a8 jl 0x101699bc */
  if ((C.sf!=C.of)) goto L_101699bc;
  /* 101699aa cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101699ad jl 0x101699bc */
  if ((C.sf!=C.of)) goto L_101699bc;
L_101699af:;
  /* 101699af dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101699b0 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101699b3 jne 0x101699ba */
  if (!C.zf) goto L_101699ba;
  /* 101699b5 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 101699b8 jmp 0x101699af */
  goto L_101699af;
L_101699ba:;
  /* 101699ba inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_101699bc:;
  /* 101699bc cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101699bf jne 0x101699c6 */
  if (!C.zf) goto L_101699c6;
  /* 101699c1 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 101699c4 jmp 0x101699d8 */
  goto L_101699d8;
L_101699c6:;
  /* 101699c6 push edi */
  push32((uint32_t)(EDI));
  /* 101699c7 call 0x10169040 */
  push32(0x101699ccu); f_10169040();
  /* 101699cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101699cd push eax */
  push32((uint32_t)(EAX));
  /* 101699ce push edi */
  push32((uint32_t)(EDI));
  /* 101699cf push esi */
  push32((uint32_t)(ESI));
  /* 101699d0 call 0x10169c40 */
  push32(0x101699d5u); f_10169c40();
  /* 101699d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101699d8:;
  /* 101699d8 pop edi */
  EDI = (pop32());
  /* 101699d9 pop esi */
  ESI = (pop32());
  /* 101699da pop ebx */
  EBX = (pop32());
  /* 101699db pop ebp */
  EBP = (pop32());
  /* 101699dc ret  */
  ESPCHK(0x10169966u, _esp0);
  ESP += 4; return;
}

/* FUN_100099dd @ 0x101699dd (92 bytes, 41 insns) */
void f_101699dd(void) {
  FTRACE(0x101699ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101699dd push ebp */
  push32((uint32_t)(EBP));
  /* 101699de mov ebp, esp */
  EBP = (ESP);
  /* 101699e0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101699e3 push esi */
  push32((uint32_t)(ESI));
  /* 101699e4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101699e7 push edi */
  push32((uint32_t)(EDI));
  /* 101699e8 push eax */
  push32((uint32_t)(EAX));
  /* 101699e9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101699ec push eax */
  push32((uint32_t)(EAX));
  /* 101699ed call 0x10169a39 */
  push32(0x101699f2u); f_10169a39();
  /* 101699f2 pop ecx */
  ECX = (pop32());
  /* 101699f3 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101699f6 pop ecx */
  ECX = (pop32());
  /* 101699f7 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 101699fa push eax */
  push32((uint32_t)(EAX));
  /* 101699fb push 0 */
  push32((uint32_t)(0x0u));
  /* 101699fd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101699ff sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10169a02 mov edi, esp */
  EDI = (ESP);
  /* 10169a04 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10169a05 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10169a06 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 10169a08 call 0x1016cc87 */
  push32(0x10169a0du); f_1016cc87();
  /* 10169a0d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10169a10 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 10169a13 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10169a16 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 10169a1a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10169a1c movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 10169a20 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10169a23 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10169a26 push eax */
  push32((uint32_t)(EAX));
  /* 10169a27 push edi */
  push32((uint32_t)(EDI));
  /* 10169a28 call 0x10169af0 */
  push32(0x10169a2du); f_10169af0();
  /* 10169a2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10169a30 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 10169a33 mov eax, esi */
  EAX = (ESI);
  /* 10169a35 pop edi */
  EDI = (pop32());
  /* 10169a36 pop esi */
  ESI = (pop32());
  /* 10169a37 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169a38 ret  */
  ESPCHK(0x101699ddu, _esp0);
  ESP += 4; return;
}

/* FUN_10009a39 @ 0x10169a39 (182 bytes, 70 insns) */
void f_10169a39(void) {
  FTRACE(0x10169a39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169a39 push ebp */
  push32((uint32_t)(EBP));
  /* 10169a3a mov ebp, esp */
  EBP = (ESP);
  /* 10169a3c push ecx */
  push32((uint32_t)(ECX));
  /* 10169a3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10169a40 push ebx */
  push32((uint32_t)(EBX));
  /* 10169a41 push esi */
  push32((uint32_t)(ESI));
  /* 10169a42 push edi */
  push32((uint32_t)(EDI));
  /* 10169a43 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 10169a47 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 10169a4c mov ecx, eax */
  ECX = (EAX);
  /* 10169a4e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10169a53 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10169a56 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10169a58 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10169a5b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10169a5e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 10169a60 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 10169a63 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10169a68 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10169a6d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10169a6f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10169a72 je 0x10169a87 */
  if (C.zf) goto L_10169a87;
  /* 10169a74 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169a76 je 0x10169a80 */
  if (C.zf) goto L_10169a80;
  /* 10169a78 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 10169a7e jmp 0x10169aa8 */
  goto L_10169aa8;
L_10169a80:;
  /* 10169a80 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 10169a85 jmp 0x10169aa8 */
  goto L_10169aa8;
L_10169a87:;
  /* 10169a87 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10169a89 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169a8b jne 0x10169a9f */
  if (!C.zf) goto L_10169a9f;
  /* 10169a8d cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169a8f jne 0x10169a9f */
  if (!C.zf) goto L_10169a9f;
  /* 10169a91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10169a94 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10169a97 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 10169a99 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 10169a9d jmp 0x10169aea */
  goto L_10169aea;
L_10169a9f:;
  /* 10169a9f lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 10169aa5 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_10169aa8:;
  /* 10169aa8 mov ecx, edx */
  ECX = (EDX);
  /* 10169aaa shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 10169aad shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 10169ab0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10169ab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10169ab5 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 10169ab8 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 10169abb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10169abe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10169ac0:;
  /* 10169ac0 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 10169ac2 jne 0x10169ae1 */
  if (!C.zf) goto L_10169ae1;
  /* 10169ac4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10169ac6 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10169ac8 mov ebx, edx */
  EBX = (EDX);
  /* 10169aca shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 10169acd or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 10169acf lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 10169ad2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10169ad4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10169ad7 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10169add mov ecx, ebx */
  ECX = (EBX);
  /* 10169adf jmp 0x10169ac0 */
  goto L_10169ac0;
L_10169ae1:;
  /* 10169ae1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10169ae4 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10169ae6 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_10169aea:;
  /* 10169aea pop edi */
  EDI = (pop32());
  /* 10169aeb pop esi */
  ESI = (pop32());
  /* 10169aec pop ebx */
  EBX = (pop32());
  /* 10169aed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169aee ret  */
  ESPCHK(0x10169a39u, _esp0);
  ESP += 4; return;
}

/* FUN_10009af0 @ 0x10169af0 (7 bytes, 3 insns) */
void f_10169af0(void) {
  FTRACE(0x10169af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169af0 push edi */
  push32((uint32_t)(EDI));
  /* 10169af1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10169af5 jmp 0x10169b61 */
  jmp_ind(0x10169b61u); return;
}

/* FUN_10009b00 @ 0x10169b00 (224 bytes, 84 insns) */
void f_10169b00(void) {
  FTRACE(0x10169b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169b00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10169b04 push edi */
  push32((uint32_t)(EDI));
  /* 10169b05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10169b0b je 0x10169b1c */
  if (C.zf) goto L_10169b1c;
L_10169b0d:;
  /* 10169b0d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10169b0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10169b10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10169b12 je 0x10169b4f */
  if (C.zf) goto L_10169b4f;
  /* 10169b14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10169b1a jne 0x10169b0d */
  if (!C.zf) goto L_10169b0d;
L_10169b1c:;
  /* 10169b1c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10169b1e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10169b23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10169b25 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10169b28 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10169b2a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10169b2d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10169b32 je 0x10169b1c */
  if (C.zf) goto L_10169b1c;
  /* 10169b34 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10169b37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10169b39 je 0x10169b5e */
  if (C.zf) goto L_10169b5e;
  /* 10169b3b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10169b3d je 0x10169b59 */
  if (C.zf) goto L_10169b59;
  /* 10169b3f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10169b44 je 0x10169b54 */
  if (C.zf) goto L_10169b54;
  /* 10169b46 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10169b4b je 0x10169b4f */
  if (C.zf) goto L_10169b4f;
  /* 10169b4d jmp 0x10169b1c */
  goto L_10169b1c;
L_10169b4f:;
  /* 10169b4f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10169b52 jmp 0x10169b61 */
  goto L_10169b61;
L_10169b54:;
  /* 10169b54 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10169b57 jmp 0x10169b61 */
  goto L_10169b61;
L_10169b59:;
  /* 10169b59 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10169b5c jmp 0x10169b61 */
  goto L_10169b61;
L_10169b5e:;
  /* 10169b5e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10169b61:;
  /* 10169b61 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10169b65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10169b6b je 0x10169b86 */
  if (C.zf) goto L_10169b86;
L_10169b6d:;
  /* 10169b6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10169b6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10169b70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10169b72 je 0x10169bd8 */
  if (C.zf) goto L_10169bd8;
  /* 10169b74 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10169b76 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10169b77 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10169b7d jne 0x10169b6d */
  if (!C.zf) goto L_10169b6d;
  /* 10169b7f jmp 0x10169b86 */
  goto L_10169b86;
L_10169b81:;
  /* 10169b81 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10169b83 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10169b86:;
  /* 10169b86 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10169b8b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10169b8d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10169b8f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10169b92 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10169b94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10169b96 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10169b99 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10169b9e je 0x10169b81 */
  if (C.zf) goto L_10169b81;
  /* 10169ba0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10169ba2 je 0x10169bd8 */
  if (C.zf) goto L_10169bd8;
  /* 10169ba4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10169ba6 je 0x10169bcf */
  if (C.zf) goto L_10169bcf;
  /* 10169ba8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10169bae je 0x10169bc2 */
  if (C.zf) goto L_10169bc2;
  /* 10169bb0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10169bb6 je 0x10169bba */
  if (C.zf) goto L_10169bba;
  /* 10169bb8 jmp 0x10169b81 */
  goto L_10169b81;
L_10169bba:;
  /* 10169bba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10169bbc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10169bc0 pop edi */
  EDI = (pop32());
  /* 10169bc1 ret  */
  ESPCHK(0x10169b00u, _esp0);
  ESP += 4; return;
L_10169bc2:;
  /* 10169bc2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10169bc5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10169bc9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10169bcd pop edi */
  EDI = (pop32());
  /* 10169bce ret  */
  ESPCHK(0x10169b00u, _esp0);
  ESP += 4; return;
L_10169bcf:;
  /* 10169bcf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10169bd2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10169bd6 pop edi */
  EDI = (pop32());
  /* 10169bd7 ret  */
  ESPCHK(0x10169b00u, _esp0);
  ESP += 4; return;
L_10169bd8:;
  /* 10169bd8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10169bda mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10169bde pop edi */
  EDI = (pop32());
  /* 10169bdf ret  */
  ESPCHK(0x10169b00u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10169be0 (88 bytes, 40 insns) */
void f_10169be0(void) {
  FTRACE(0x10169be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169be0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10169be4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10169be8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10169bea je 0x10169c33 */
  if (C.zf) goto L_10169c33;
  /* 10169bec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10169bee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10169bf2 push edi */
  push32((uint32_t)(EDI));
  /* 10169bf3 mov edi, ecx */
  EDI = (ECX);
  /* 10169bf5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169bf8 jb 0x10169c27 */
  if (C.cf) goto L_10169c27;
  /* 10169bfa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10169bfc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10169bff je 0x10169c09 */
  if (C.zf) goto L_10169c09;
  /* 10169c01 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10169c03:;
  /* 10169c03 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10169c05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10169c06 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10169c07 jne 0x10169c03 */
  if (!C.zf) goto L_10169c03;
L_10169c09:;
  /* 10169c09 mov ecx, eax */
  ECX = (EAX);
  /* 10169c0b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10169c0e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10169c10 mov ecx, eax */
  ECX = (EAX);
  /* 10169c12 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10169c15 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10169c17 mov ecx, edx */
  ECX = (EDX);
  /* 10169c19 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10169c1c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10169c1f je 0x10169c27 */
  if (C.zf) goto L_10169c27;
  /* 10169c21 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10169c23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10169c25 je 0x10169c2d */
  if (C.zf) goto L_10169c2d;
L_10169c27:;
  /* 10169c27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10169c29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10169c2a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10169c2b jne 0x10169c27 */
  if (!C.zf) goto L_10169c27;
L_10169c2d:;
  /* 10169c2d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10169c31 pop edi */
  EDI = (pop32());
  /* 10169c32 ret  */
  ESPCHK(0x10169be0u, _esp0);
  ESP += 4; return;
L_10169c33:;
  /* 10169c33 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10169c37 ret  */
  ESPCHK(0x10169be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c40 @ 0x10169c40 (664 bytes, 270 insns) [15 switch table(s)] */
void f_10169c40(void) {
  FTRACE(0x10169c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10169c41 mov ebp, esp */
  EBP = (ESP);
  /* 10169c43 push edi */
  push32((uint32_t)(EDI));
  /* 10169c44 push esi */
  push32((uint32_t)(ESI));
  /* 10169c45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10169c48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10169c4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10169c4e mov eax, ecx */
  EAX = (ECX);
  /* 10169c50 mov edx, ecx */
  EDX = (ECX);
  /* 10169c52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10169c54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169c56 jbe 0x10169c60 */
  if ((C.cf||C.zf)) goto L_10169c60;
  /* 10169c58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169c5a jb 0x10169dd8 */
  if (C.cf) goto L_10169dd8;
L_10169c60:;
  /* 10169c60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10169c66 jne 0x10169c7c */
  if (!C.zf) goto L_10169c7c;
  /* 10169c68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10169c6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10169c6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169c71 jb 0x10169c9c */
  if (C.cf) goto L_10169c9c;
  /* 10169c73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10169c75 jmp dword ptr [edx*4 + 0x10169d88] */
  switch (EDX) {
    case 0: goto L_10169d98;
    case 1: goto L_10169da0;
    case 2: goto L_10169dac;
    case 3: goto L_10169dc0;
    default: x86_unimpl("switch@0x10169c75 out of table"); return;
  }
L_10169c7c:;
  /* 10169c7c mov eax, edi */
  EAX = (EDI);
  /* 10169c7e mov edx, 3 */
  EDX = (0x3u);
  /* 10169c83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10169c86 jb 0x10169c94 */
  if (C.cf) goto L_10169c94;
  /* 10169c88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10169c8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10169c8d jmp dword ptr [eax*4 + 0x10169ca0] */
  switch (EAX) {
    case 1: goto L_10169cb0;
    case 2: goto L_10169cdc;
    case 3: goto L_10169d00;
    default: x86_unimpl("switch@0x10169c8d out of table"); return;
  }
L_10169c94:;
  /* 10169c94 jmp dword ptr [ecx*4 + 0x10169d98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10169d98)))); return;
  /* 10169c9b nop  */
  /* nop */
L_10169c9c:;
  /* 10169c9c jmp dword ptr [ecx*4 + 0x10169d1c] */
  switch (ECX) {
    case 0: goto L_10169d7f;
    case 1: goto L_10169d6c;
    case 2: goto L_10169d64;
    case 3: goto L_10169d5c;
    case 4: goto L_10169d54;
    case 5: goto L_10169d4c;
    case 6: goto L_10169d44;
    case 7: goto L_10169d3c;
    default: x86_unimpl("switch@0x10169c9c out of table"); return;
  }
  /* 10169ca3 nop  */
  /* nop */
L_10169cb0:;
  /* 10169cb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10169cb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10169cb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10169cb6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10169cb9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10169cbc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10169cbf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10169cc2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10169cc5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10169cc8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10169ccb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169cce jb 0x10169c9c */
  if (C.cf) goto L_10169c9c;
  /* 10169cd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10169cd2 jmp dword ptr [edx*4 + 0x10169d88] */
  switch (EDX) {
    case 0: goto L_10169d98;
    case 1: goto L_10169da0;
    case 2: goto L_10169dac;
    case 3: goto L_10169dc0;
    default: x86_unimpl("switch@0x10169cd2 out of table"); return;
  }
  /* 10169cd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10169cdc:;
  /* 10169cdc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10169cde mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10169ce0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10169ce2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10169ce5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10169ce8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10169ceb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10169cee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10169cf1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169cf4 jb 0x10169c9c */
  if (C.cf) goto L_10169c9c;
  /* 10169cf6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10169cf8 jmp dword ptr [edx*4 + 0x10169d88] */
  switch (EDX) {
    case 0: goto L_10169d98;
    case 1: goto L_10169da0;
    case 2: goto L_10169dac;
    case 3: goto L_10169dc0;
    default: x86_unimpl("switch@0x10169cf8 out of table"); return;
  }
  /* 10169cff nop  */
  /* nop */
L_10169d00:;
  /* 10169d00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10169d02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10169d04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10169d06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10169d07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10169d0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10169d0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169d0e jb 0x10169c9c */
  if (C.cf) goto L_10169c9c;
  /* 10169d10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10169d12 jmp dword ptr [edx*4 + 0x10169d88] */
  switch (EDX) {
    case 0: goto L_10169d98;
    case 1: goto L_10169da0;
    case 2: goto L_10169dac;
    case 3: goto L_10169dc0;
    default: x86_unimpl("switch@0x10169d12 out of table"); return;
  }
  /* 10169d19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10169d3c:;
  /* 10169d3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10169d40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10169d44:;
  /* 10169d44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10169d48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10169d4c:;
  /* 10169d4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10169d50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10169d54:;
  /* 10169d54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10169d58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10169d5c:;
  /* 10169d5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10169d60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10169d64:;
  /* 10169d64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10169d68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10169d6c:;
  /* 10169d6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10169d70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10169d74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10169d7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10169d7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10169d7f:;
  /* 10169d7f jmp dword ptr [edx*4 + 0x10169d88] */
  switch (EDX) {
    case 0: goto L_10169d98;
    case 1: goto L_10169da0;
    case 2: goto L_10169dac;
    case 3: goto L_10169dc0;
    default: x86_unimpl("switch@0x10169d7f out of table"); return;
  }
  /* 10169d86 mov edi, edi */
  EDI = (EDI);
L_10169d98:;
  /* 10169d98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10169d9b pop esi */
  ESI = (pop32());
  /* 10169d9c pop edi */
  EDI = (pop32());
  /* 10169d9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169d9e ret  */
  ESPCHK(0x10169c40u, _esp0);
  ESP += 4; return;
  /* 10169d9f nop  */
  /* nop */
L_10169da0:;
  /* 10169da0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10169da2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10169da4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10169da7 pop esi */
  ESI = (pop32());
  /* 10169da8 pop edi */
  EDI = (pop32());
  /* 10169da9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169daa ret  */
  ESPCHK(0x10169c40u, _esp0);
  ESP += 4; return;
  /* 10169dab nop  */
  /* nop */
L_10169dac:;
  /* 10169dac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10169dae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10169db0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10169db3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10169db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10169db9 pop esi */
  ESI = (pop32());
  /* 10169dba pop edi */
  EDI = (pop32());
  /* 10169dbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169dbc ret  */
  ESPCHK(0x10169c40u, _esp0);
  ESP += 4; return;
  /* 10169dbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10169dc0:;
  /* 10169dc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10169dc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10169dc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10169dc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10169dca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10169dcd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10169dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10169dd3 pop esi */
  ESI = (pop32());
  /* 10169dd4 pop edi */
  EDI = (pop32());
  /* 10169dd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169dd6 ret  */
  ESPCHK(0x10169c40u, _esp0);
  ESP += 4; return;
  /* 10169dd7 nop  */
  /* nop */
L_10169dd8:;
  /* 10169dd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10169ddc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10169de0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10169de6 jne 0x10169e0c */
  if (!C.zf) goto L_10169e0c;
  /* 10169de8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10169deb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10169dee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169df1 jb 0x10169e00 */
  if (C.cf) goto L_10169e00;
  /* 10169df3 std  */
  C.df=1;
  /* 10169df4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10169df6 cld  */
  C.df=0;
  /* 10169df7 jmp dword ptr [edx*4 + 0x10169f20] */
  switch (EDX) {
    case 0: goto L_10169f30;
    case 1: goto L_10169f38;
    case 2: goto L_10169f48;
    case 3: goto L_10169f5c;
    default: x86_unimpl("switch@0x10169df7 out of table"); return;
  }
  /* 10169dfe mov edi, edi */
  EDI = (EDI);
L_10169e00:;
  /* 10169e00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10169e02 jmp dword ptr [ecx*4 + 0x10169ed0] */
  switch (ECX) {
    case 0: goto L_10169f17;
    default: x86_unimpl("switch@0x10169e02 out of table"); return;
  }
  /* 10169e09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10169e0c:;
  /* 10169e0c mov eax, edi */
  EAX = (EDI);
  /* 10169e0e mov edx, 3 */
  EDX = (0x3u);
  /* 10169e13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169e16 jb 0x10169e24 */
  if (C.cf) goto L_10169e24;
  /* 10169e18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10169e1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10169e1d jmp dword ptr [eax*4 + 0x10169e28] */
  switch (EAX) {
    case 1: goto L_10169e38;
    case 2: goto L_10169e58;
    case 3: goto L_10169e80;
    default: x86_unimpl("switch@0x10169e1d out of table"); return;
  }
L_10169e24:;
  /* 10169e24 jmp dword ptr [ecx*4 + 0x10169f20] */
  switch (ECX) {
    case 0: goto L_10169f30;
    case 1: goto L_10169f38;
    case 2: goto L_10169f48;
    case 3: goto L_10169f5c;
    default: x86_unimpl("switch@0x10169e24 out of table"); return;
  }
  /* 10169e2b nop  */
  /* nop */
L_10169e38:;
  /* 10169e38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10169e3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10169e3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10169e40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10169e41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10169e44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10169e45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169e48 jb 0x10169e00 */
  if (C.cf) goto L_10169e00;
  /* 10169e4a std  */
  C.df=1;
  /* 10169e4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10169e4d cld  */
  C.df=0;
  /* 10169e4e jmp dword ptr [edx*4 + 0x10169f20] */
  switch (EDX) {
    case 0: goto L_10169f30;
    case 1: goto L_10169f38;
    case 2: goto L_10169f48;
    case 3: goto L_10169f5c;
    default: x86_unimpl("switch@0x10169e4e out of table"); return;
  }
  /* 10169e55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10169e58:;
  /* 10169e58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10169e5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10169e5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10169e60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10169e63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10169e66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10169e69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10169e6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10169e6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169e72 jb 0x10169e00 */
  if (C.cf) goto L_10169e00;
  /* 10169e74 std  */
  C.df=1;
  /* 10169e75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10169e77 cld  */
  C.df=0;
  /* 10169e78 jmp dword ptr [edx*4 + 0x10169f20] */
  switch (EDX) {
    case 0: goto L_10169f30;
    case 1: goto L_10169f38;
    case 2: goto L_10169f48;
    case 3: goto L_10169f5c;
    default: x86_unimpl("switch@0x10169e78 out of table"); return;
  }
  /* 10169e7f nop  */
  /* nop */
L_10169e80:;
  /* 10169e80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10169e83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10169e85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10169e88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10169e8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10169e8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10169e91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10169e94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10169e97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10169e9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10169e9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169ea0 jb 0x10169e00 */
  if (C.cf) goto L_10169e00;
  /* 10169ea6 std  */
  C.df=1;
  /* 10169ea7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10169ea9 cld  */
  C.df=0;
  /* 10169eaa jmp dword ptr [edx*4 + 0x10169f20] */
  switch (EDX) {
    case 0: goto L_10169f30;
    case 1: goto L_10169f38;
    case 2: goto L_10169f48;
    case 3: goto L_10169f5c;
    default: x86_unimpl("switch@0x10169eaa out of table"); return;
  }
  /* 10169eb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10169eb4 aam 0x9e */
  x86_unimpl("aam @ 0x10169eb4");
  /* 10169eb6 push ss */
  push32((uint32_t)(C.seg_ss));
  /* 10169eb7 adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10169eb9 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10169eba push ss */
  push32((uint32_t)(C.seg_ss));
  /* 10169ebb adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10169ebd sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10169ebe push ss */
  push32((uint32_t)(C.seg_ss));
  /* 10169ebf adc ah, ch */
  { uint32_t _a=(AH),_b=(C.c.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10169ec1 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10169ec2 push ss */
  push32((uint32_t)(C.seg_ss));
  /* 10169ec3 adc ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10169ec5 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10169ec6 push ss */
  push32((uint32_t)(C.seg_ss));
  /* 10169ec7 adc ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10169ec9 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10169eca push ss */
  push32((uint32_t)(C.seg_ss));
  /* 10169ecb adc byte ptr [edi + ebx*4], al */
  { uint32_t _a=(r8((uint32_t)(EDI + EBX*4))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 10169ece push ss */
  push32((uint32_t)(C.seg_ss));
  /* 10169ed4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10169ed8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10169edc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10169ee0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10169ee4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10169ee8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10169eec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10169ef0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10169ef4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10169ef8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10169efc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10169f00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10169f04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10169f08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10169f0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10169f13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10169f15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10169f17:;
  /* 10169f17 jmp dword ptr [edx*4 + 0x10169f20] */
  switch (EDX) {
    case 0: goto L_10169f30;
    case 1: goto L_10169f38;
    case 2: goto L_10169f48;
    case 3: goto L_10169f5c;
    default: x86_unimpl("switch@0x10169f17 out of table"); return;
  }
  /* 10169f1e mov edi, edi */
  EDI = (EDI);
L_10169f30:;
  /* 10169f30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10169f33 pop esi */
  ESI = (pop32());
  /* 10169f34 pop edi */
  EDI = (pop32());
  /* 10169f35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169f36 ret  */
  ESPCHK(0x10169c40u, _esp0);
  ESP += 4; return;
  /* 10169f37 nop  */
  /* nop */
L_10169f38:;
  /* 10169f38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10169f3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10169f3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10169f41 pop esi */
  ESI = (pop32());
  /* 10169f42 pop edi */
  EDI = (pop32());
  /* 10169f43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169f44 ret  */
  ESPCHK(0x10169c40u, _esp0);
  ESP += 4; return;
  /* 10169f45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10169f48:;
  /* 10169f48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10169f4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10169f4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10169f51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10169f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10169f57 pop esi */
  ESI = (pop32());
  /* 10169f58 pop edi */
  EDI = (pop32());
  /* 10169f59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169f5a ret  */
  ESPCHK(0x10169c40u, _esp0);
  ESP += 4; return;
  /* 10169f5b nop  */
  /* nop */
L_10169f5c:;
  /* 10169f5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10169f5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10169f62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10169f65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10169f68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10169f6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10169f6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10169f71 pop esi */
  ESI = (pop32());
  /* 10169f72 pop edi */
  EDI = (pop32());
  /* 10169f73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10169f74 ret  */
  ESPCHK(0x10169c40u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10169f75 (9 bytes, 4 insns) */
void f_10169f75(void) {
  FTRACE(0x10169f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169f75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10169f77 call 0x101670b1 */
  push32(0x10169f7cu); f_101670b1();
  /* 10169f7c pop ecx */
  ECX = (pop32());
  /* 10169f7d ret  */
  ESPCHK(0x10169f75u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f7e @ 0x10169f7e (41 bytes, 12 insns) */
void f_10169f7e(void) {
  FTRACE(0x10169f7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169f7e push esi */
  push32((uint32_t)(ESI));
  /* 10169f7f mov esi, dword ptr [0x1016e094] */
  ESI = (r32((uint32_t)(0x1016e094)));
  /* 10169f85 push dword ptr [0x10170ce4] */
  push32((uint32_t)(r32((uint32_t)(0x10170ce4))));
  /* 10169f8b call esi */
  call_ind((uint32_t)(ESI), 0x10169f8du);
  /* 10169f8d push dword ptr [0x10170cd4] */
  push32((uint32_t)(r32((uint32_t)(0x10170cd4))));
  /* 10169f93 call esi */
  call_ind((uint32_t)(ESI), 0x10169f95u);
  /* 10169f95 push dword ptr [0x10170cc4] */
  push32((uint32_t)(r32((uint32_t)(0x10170cc4))));
  /* 10169f9b call esi */
  call_ind((uint32_t)(ESI), 0x10169f9du);
  /* 10169f9d push dword ptr [0x10170ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10170ca4))));
  /* 10169fa3 call esi */
  call_ind((uint32_t)(ESI), 0x10169fa5u);
  /* 10169fa5 pop esi */
  ESI = (pop32());
  /* 10169fa6 ret  */
  ESPCHK(0x10169f7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009fa7 @ 0x10169fa7 (108 bytes, 34 insns) */
void f_10169fa7(void) {
  FTRACE(0x10169fa7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10169fa7 push esi */
  push32((uint32_t)(ESI));
  /* 10169fa8 push edi */
  push32((uint32_t)(EDI));
  /* 10169fa9 mov edi, dword ptr [0x1016e050] */
  EDI = (r32((uint32_t)(0x1016e050)));
  /* 10169faf mov esi, 0x10170ca0 */
  ESI = (0x10170ca0u);
L_10169fb4:;
  /* 10169fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10169fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10169fb8 je 0x10169fe5 */
  if (C.zf) goto L_10169fe5;
  /* 10169fba cmp esi, 0x10170ce4 */
  { uint32_t _a=(ESI),_b=(0x10170ce4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169fc0 je 0x10169fe5 */
  if (C.zf) goto L_10169fe5;
  /* 10169fc2 cmp esi, 0x10170cd4 */
  { uint32_t _a=(ESI),_b=(0x10170cd4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169fc8 je 0x10169fe5 */
  if (C.zf) goto L_10169fe5;
  /* 10169fca cmp esi, 0x10170cc4 */
  { uint32_t _a=(ESI),_b=(0x10170cc4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169fd0 je 0x10169fe5 */
  if (C.zf) goto L_10169fe5;
  /* 10169fd2 cmp esi, 0x10170ca4 */
  { uint32_t _a=(ESI),_b=(0x10170ca4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169fd8 je 0x10169fe5 */
  if (C.zf) goto L_10169fe5;
  /* 10169fda push eax */
  push32((uint32_t)(EAX));
  /* 10169fdb call edi */
  call_ind((uint32_t)(EDI), 0x10169fddu);
  /* 10169fdd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10169fdf call 0x1016a1c6 */
  push32(0x10169fe4u); f_1016a1c6();
  /* 10169fe4 pop ecx */
  ECX = (pop32());
L_10169fe5:;
  /* 10169fe5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10169fe8 cmp esi, 0x10170d60 */
  { uint32_t _a=(ESI),_b=(0x10170d60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10169fee jl 0x10169fb4 */
  if ((C.sf!=C.of)) goto L_10169fb4;
  /* 10169ff0 push dword ptr [0x10170cc4] */
  push32((uint32_t)(r32((uint32_t)(0x10170cc4))));
  /* 10169ff6 call edi */
  call_ind((uint32_t)(EDI), 0x10169ff8u);
  /* 10169ff8 push dword ptr [0x10170cd4] */
  push32((uint32_t)(r32((uint32_t)(0x10170cd4))));
  /* 10169ffe call edi */
  call_ind((uint32_t)(EDI), 0x1016a000u);
  /* 1016a000 push dword ptr [0x10170ce4] */
  push32((uint32_t)(r32((uint32_t)(0x10170ce4))));
  /* 1016a006 call edi */
  call_ind((uint32_t)(EDI), 0x1016a008u);
  /* 1016a008 push dword ptr [0x10170ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10170ca4))));
  /* 1016a00e call edi */
  call_ind((uint32_t)(EDI), 0x1016a010u);
  /* 1016a010 pop edi */
  EDI = (pop32());
  /* 1016a011 pop esi */
  ESI = (pop32());
  /* 1016a012 ret  */
  ESPCHK(0x10169fa7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a013 @ 0x1016a013 (97 bytes, 37 insns) */
void f_1016a013(void) {
  FTRACE(0x1016a013u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a013 push ebp */
  push32((uint32_t)(EBP));
  /* 1016a014 mov ebp, esp */
  EBP = (ESP);
  /* 1016a016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016a019 push esi */
  push32((uint32_t)(ESI));
  /* 1016a01a cmp dword ptr [eax*4 + 0x10170ca0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10170ca0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a022 lea esi, [eax*4 + 0x10170ca0] */
  ESI = ((uint32_t)(EAX*4 + 0x10170ca0));
  /* 1016a029 jne 0x1016a069 */
  if (!C.zf) goto L_1016a069;
  /* 1016a02b push edi */
  push32((uint32_t)(EDI));
  /* 1016a02c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1016a02e call 0x1016a2af */
  push32(0x1016a033u); f_1016a2af();
  /* 1016a033 mov edi, eax */
  EDI = (EAX);
  /* 1016a035 pop ecx */
  ECX = (pop32());
  /* 1016a036 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1016a038 jne 0x1016a042 */
  if (!C.zf) goto L_1016a042;
  /* 1016a03a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1016a03c call 0x101670b1 */
  push32(0x1016a041u); f_101670b1();
  /* 1016a041 pop ecx */
  ECX = (pop32());
L_1016a042:;
  /* 1016a042 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1016a044 call 0x1016a013 */
  push32(0x1016a049u); f_1016a013();
  /* 1016a049 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a04c pop ecx */
  ECX = (pop32());
  /* 1016a04d push edi */
  push32((uint32_t)(EDI));
  /* 1016a04e jne 0x1016a05a */
  if (!C.zf) goto L_1016a05a;
  /* 1016a050 call dword ptr [0x1016e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e094))), 0x1016a056u);
  /* 1016a056 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1016a058 jmp 0x1016a060 */
  goto L_1016a060;
L_1016a05a:;
  /* 1016a05a call 0x1016a1c6 */
  push32(0x1016a05fu); f_1016a1c6();
  /* 1016a05f pop ecx */
  ECX = (pop32());
L_1016a060:;
  /* 1016a060 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1016a062 call 0x1016a074 */
  push32(0x1016a067u); f_1016a074();
  /* 1016a067 pop ecx */
  ECX = (pop32());
  /* 1016a068 pop edi */
  EDI = (pop32());
L_1016a069:;
  /* 1016a069 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1016a06b call dword ptr [0x1016e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e00c))), 0x1016a071u);
  /* 1016a071 pop esi */
  ESI = (pop32());
  /* 1016a072 pop ebp */
  EBP = (pop32());
  /* 1016a073 ret  */
  ESPCHK(0x1016a013u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a074 @ 0x1016a074 (21 bytes, 7 insns) */
void f_1016a074(void) {
  FTRACE(0x1016a074u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a074 push ebp */
  push32((uint32_t)(EBP));
  /* 1016a075 mov ebp, esp */
  EBP = (ESP);
  /* 1016a077 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016a07a push dword ptr [eax*4 + 0x10170ca0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10170ca0))));
  /* 1016a081 call dword ptr [0x1016e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e008))), 0x1016a087u);
  /* 1016a087 pop ebp */
  EBP = (pop32());
  /* 1016a088 ret  */
  ESPCHK(0x1016a074u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a089 @ 0x1016a089 (289 bytes, 98 insns) */
void f_1016a089(void) {
  FTRACE(0x1016a089u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a089 push ebp */
  push32((uint32_t)(EBP));
  /* 1016a08a mov ebp, esp */
  EBP = (ESP);
  /* 1016a08c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1016a08e push 0x1016e4d0 */
  push32((uint32_t)(0x1016e4d0u));
  /* 1016a093 push 0x1016d030 */
  push32((uint32_t)(0x1016d030u));
  /* 1016a098 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1016a09e push eax */
  push32((uint32_t)(EAX));
  /* 1016a09f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1016a0a6 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016a0a9 push ebx */
  push32((uint32_t)(EBX));
  /* 1016a0aa push esi */
  push32((uint32_t)(ESI));
  /* 1016a0ab push edi */
  push32((uint32_t)(EDI));
  /* 1016a0ac mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1016a0af imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1016a0b3 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1016a0b6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 1016a0b9 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a0bc ja 0x1016a0d2 */
  if ((!C.cf&&!C.zf)) goto L_1016a0d2;
  /* 1016a0be xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016a0c0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a0c2 jne 0x1016a0c7 */
  if (!C.zf) goto L_1016a0c7;
  /* 1016a0c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016a0c6 pop esi */
  ESI = (pop32());
L_1016a0c7:;
  /* 1016a0c7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016a0ca and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1016a0cd mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1016a0d0 jmp 0x1016a0d4 */
  goto L_1016a0d4;
L_1016a0d2:;
  /* 1016a0d2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1016a0d4:;
  /* 1016a0d4 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1016a0d7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a0da ja 0x1016a188 */
  if ((!C.cf&&!C.zf)) goto L_1016a188;
  /* 1016a0e0 mov eax, dword ptr [0x10177ca8] */
  EAX = (r32((uint32_t)(0x10177ca8)));
  /* 1016a0e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a0e8 jne 0x1016a12b */
  if (!C.zf) goto L_1016a12b;
  /* 1016a0ea mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 1016a0ed cmp edi, dword ptr [0x10176a50] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x10176a50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a0f3 ja 0x1016a171 */
  if ((!C.cf&&!C.zf)) goto L_1016a171;
  /* 1016a0f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a0f7 call 0x1016a013 */
  push32(0x1016a0fcu); f_1016a013();
  /* 1016a0fc pop ecx */
  ECX = (pop32());
  /* 1016a0fd mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1016a100 push edi */
  push32((uint32_t)(EDI));
  /* 1016a101 call 0x1016b29b */
  push32(0x1016a106u); f_1016b29b();
  /* 1016a106 pop ecx */
  ECX = (pop32());
  /* 1016a107 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1016a10a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016a10e call 0x1016a122 */
  push32(0x1016a113u); f_1016a122();
  /* 1016a113 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a116 je 0x1016a176 */
  if (C.zf) goto L_1016a176;
  /* 1016a118 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1016a11b jmp 0x1016a165 */
  goto L_1016a165;
  /* 1016a11d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016a11f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1016a122 push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a124 call 0x1016a074 */
  push32(0x1016a129u); f_1016a074();
  /* 1016a129 pop ecx */
  ECX = (pop32());
  /* 1016a12a ret  */
  ESPCHK(0x1016a089u, _esp0);
  ESP += 4; return;
L_1016a12b:;
  /* 1016a12b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a12e jne 0x1016a171 */
  if (!C.zf) goto L_1016a171;
  /* 1016a130 cmp esi, dword ptr [0x10172f04] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10172f04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a136 ja 0x1016a171 */
  if ((!C.cf&&!C.zf)) goto L_1016a171;
  /* 1016a138 push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a13a call 0x1016a013 */
  push32(0x1016a13fu); f_1016a013();
  /* 1016a13f pop ecx */
  ECX = (pop32());
  /* 1016a140 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1016a147 mov eax, esi */
  EAX = (ESI);
  /* 1016a149 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1016a14c push eax */
  push32((uint32_t)(EAX));
  /* 1016a14d call 0x1016ba48 */
  push32(0x1016a152u); f_1016ba48();
  /* 1016a152 pop ecx */
  ECX = (pop32());
  /* 1016a153 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1016a156 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016a15a call 0x1016a1ab */
  push32(0x1016a15fu); f_1016a1ab();
  /* 1016a15f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a162 je 0x1016a176 */
  if (C.zf) goto L_1016a176;
  /* 1016a164 push esi */
  push32((uint32_t)(ESI));
L_1016a165:;
  /* 1016a165 push ebx */
  push32((uint32_t)(EBX));
  /* 1016a166 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1016a169 call 0x10169be0 */
  push32(0x1016a16eu); f_10169be0();
  /* 1016a16e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016a171:;
  /* 1016a171 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a174 jne 0x1016a1b4 */
  if (!C.zf) { jmp_ind(0x1016a1b4u); return; }
L_1016a176:;
  /* 1016a176 push esi */
  push32((uint32_t)(ESI));
  /* 1016a177 push 8 */
  push32((uint32_t)(0x8u));
  /* 1016a179 push dword ptr [0x10177ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10177ca4))));
  /* 1016a17f call dword ptr [0x1016e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e098))), 0x1016a185u);
  /* 1016a185 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1016a188:;
  /* 1016a188 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a18b jne 0x1016a1b4 */
  if (!C.zf) { jmp_ind(0x1016a1b4u); return; }
  /* 1016a18d cmp dword ptr [0x101768f0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101768f0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a193 je 0x1016a1b4 */
  if (C.zf) { jmp_ind(0x1016a1b4u); return; }
  /* 1016a195 push esi */
  push32((uint32_t)(ESI));
  /* 1016a196 call 0x1016cf1a */
  push32(0x1016a19bu); f_1016cf1a();
  /* 1016a19b pop ecx */
  ECX = (pop32());
  /* 1016a19c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016a19e jne 0x1016a0d4 */
  if (!C.zf) goto L_1016a0d4;
  /* 1016a1a4 jmp 0x1016a1b7 */
  jmp_ind(0x1016a1b7u); return;
  /* 1016a1a6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a122 @ 0x1016a122 (9 bytes, 4 insns) */
void f_1016a122(void) {
  FTRACE(0x1016a122u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a122 push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a124 call 0x1016a074 */
  push32(0x1016a129u); f_1016a074();
  /* 1016a129 pop ecx */
  ECX = (pop32());
  /* 1016a12a ret  */
  ESPCHK(0x1016a122u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1ab @ 0x1016a1ab (9 bytes, 4 insns) */
void f_1016a1ab(void) {
  FTRACE(0x1016a1abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a1ab push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a1ad call 0x1016a074 */
  push32(0x1016a1b2u); f_1016a074();
  /* 1016a1b2 pop ecx */
  ECX = (pop32());
  /* 1016a1b3 ret  */
  ESPCHK(0x1016a1abu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1c6 @ 0x1016a1c6 (215 bytes, 75 insns) */
void f_1016a1c6(void) {
  FTRACE(0x1016a1c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a1c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1016a1c7 mov ebp, esp */
  EBP = (ESP);
  /* 1016a1c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1016a1cb push 0x1016e4e8 */
  push32((uint32_t)(0x1016e4e8u));
  /* 1016a1d0 push 0x1016d030 */
  push32((uint32_t)(0x1016d030u));
  /* 1016a1d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1016a1db push eax */
  push32((uint32_t)(EAX));
  /* 1016a1dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1016a1e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016a1e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1016a1e7 push esi */
  push32((uint32_t)(ESI));
  /* 1016a1e8 push edi */
  push32((uint32_t)(EDI));
  /* 1016a1e9 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1016a1ec test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1016a1ee je 0x1016a2a0 */
  if (C.zf) { jmp_ind(0x1016a2a0u); return; }
  /* 1016a1f4 mov eax, dword ptr [0x10177ca8] */
  EAX = (r32((uint32_t)(0x10177ca8)));
  /* 1016a1f9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a1fc jne 0x1016a239 */
  if (!C.zf) goto L_1016a239;
  /* 1016a1fe push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a200 call 0x1016a013 */
  push32(0x1016a205u); f_1016a013();
  /* 1016a205 pop ecx */
  ECX = (pop32());
  /* 1016a206 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016a20a push esi */
  push32((uint32_t)(ESI));
  /* 1016a20b call 0x1016af47 */
  push32(0x1016a210u); f_1016af47();
  /* 1016a210 pop ecx */
  ECX = (pop32());
  /* 1016a211 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1016a214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016a216 je 0x1016a221 */
  if (C.zf) goto L_1016a221;
  /* 1016a218 push esi */
  push32((uint32_t)(ESI));
  /* 1016a219 push eax */
  push32((uint32_t)(EAX));
  /* 1016a21a call 0x1016af72 */
  push32(0x1016a21fu); f_1016af72();
  /* 1016a21f pop ecx */
  ECX = (pop32());
  /* 1016a220 pop ecx */
  ECX = (pop32());
L_1016a221:;
  /* 1016a221 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016a225 call 0x1016a230 */
  push32(0x1016a22au); f_1016a230();
  /* 1016a22a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a22e jmp 0x1016a281 */
  goto L_1016a281;
  /* 1016a230 push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a232 call 0x1016a074 */
  push32(0x1016a237u); f_1016a074();
  /* 1016a237 pop ecx */
  ECX = (pop32());
  /* 1016a238 ret  */
  ESPCHK(0x1016a1c6u, _esp0);
  ESP += 4; return;
L_1016a239:;
  /* 1016a239 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a23c jne 0x1016a291 */
  if (!C.zf) goto L_1016a291;
  /* 1016a23e push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a240 call 0x1016a013 */
  push32(0x1016a245u); f_1016a013();
  /* 1016a245 pop ecx */
  ECX = (pop32());
  /* 1016a246 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1016a24d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1016a250 push eax */
  push32((uint32_t)(EAX));
  /* 1016a251 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1016a254 push eax */
  push32((uint32_t)(EAX));
  /* 1016a255 push esi */
  push32((uint32_t)(ESI));
  /* 1016a256 call 0x1016b9ac */
  push32(0x1016a25bu); f_1016b9ac();
  /* 1016a25b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016a25e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1016a261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016a263 je 0x1016a274 */
  if (C.zf) goto L_1016a274;
  /* 1016a265 push eax */
  push32((uint32_t)(EAX));
  /* 1016a266 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1016a269 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 1016a26c call 0x1016ba03 */
  push32(0x1016a271u); f_1016ba03();
  /* 1016a271 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016a274:;
  /* 1016a274 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016a278 call 0x1016a288 */
  push32(0x1016a27du); f_1016a288();
  /* 1016a27d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1016a281:;
  /* 1016a281 jne 0x1016a2a0 */
  if (!C.zf) { jmp_ind(0x1016a2a0u); return; }
  /* 1016a283 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1016a286 jmp 0x1016a292 */
  goto L_1016a292;
  /* 1016a288 push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a28a call 0x1016a074 */
  push32(0x1016a28fu); f_1016a074();
  /* 1016a28f pop ecx */
  ECX = (pop32());
  /* 1016a290 ret  */
  ESPCHK(0x1016a1c6u, _esp0);
  ESP += 4; return;
L_1016a291:;
  /* 1016a291 push esi */
  push32((uint32_t)(ESI));
L_1016a292:;
  /* 1016a292 push 0 */
  push32((uint32_t)(0x0u));
  /* 1016a294 push dword ptr [0x10177ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10177ca4))));
}

/* FUN_1000a230 @ 0x1016a230 (9 bytes, 4 insns) */
void f_1016a230(void) {
  FTRACE(0x1016a230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a230 push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a232 call 0x1016a074 */
  push32(0x1016a237u); f_1016a074();
  /* 1016a237 pop ecx */
  ECX = (pop32());
  /* 1016a238 ret  */
  ESPCHK(0x1016a230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a288 @ 0x1016a288 (9 bytes, 4 insns) */
void f_1016a288(void) {
  FTRACE(0x1016a288u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a288 push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a28a call 0x1016a074 */
  push32(0x1016a28fu); f_1016a074();
  /* 1016a28f pop ecx */
  ECX = (pop32());
  /* 1016a290 ret  */
  ESPCHK(0x1016a288u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1016a2af (18 bytes, 6 insns) */
void f_1016a2af(void) {
  FTRACE(0x1016a2afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a2af push dword ptr [0x101768f0] */
  push32((uint32_t)(r32((uint32_t)(0x101768f0))));
  /* 1016a2b5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1016a2b9 call 0x1016a2c1 */
  push32(0x1016a2beu); f_1016a2c1();
  /* 1016a2be pop ecx */
  ECX = (pop32());
  /* 1016a2bf pop ecx */
  ECX = (pop32());
  /* 1016a2c0 ret  */
  ESPCHK(0x1016a2afu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x1016a2c1 (44 bytes, 16 insns) */
void f_1016a2c1(void) {
  FTRACE(0x1016a2c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a2c1 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a2c6 ja 0x1016a2ea */
  if ((!C.cf&&!C.zf)) goto L_1016a2ea;
L_1016a2c8:;
  /* 1016a2c8 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1016a2cc call 0x1016a2ed */
  push32(0x1016a2d1u); f_1016a2ed();
  /* 1016a2d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016a2d3 pop ecx */
  ECX = (pop32());
  /* 1016a2d4 jne 0x1016a2ec */
  if (!C.zf) goto L_1016a2ec;
  /* 1016a2d6 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a2da je 0x1016a2ec */
  if (C.zf) goto L_1016a2ec;
  /* 1016a2dc push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1016a2e0 call 0x1016cf1a */
  push32(0x1016a2e5u); f_1016cf1a();
  /* 1016a2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016a2e7 pop ecx */
  ECX = (pop32());
  /* 1016a2e8 jne 0x1016a2c8 */
  if (!C.zf) goto L_1016a2c8;
L_1016a2ea:;
  /* 1016a2ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1016a2ec:;
  /* 1016a2ec ret  */
  ESPCHK(0x1016a2c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2ed @ 0x1016a2ed (231 bytes, 81 insns) */
void f_1016a2ed(void) {
  FTRACE(0x1016a2edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a2ed push ebp */
  push32((uint32_t)(EBP));
  /* 1016a2ee mov ebp, esp */
  EBP = (ESP);
  /* 1016a2f0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1016a2f2 push 0x1016e500 */
  push32((uint32_t)(0x1016e500u));
  /* 1016a2f7 push 0x1016d030 */
  push32((uint32_t)(0x1016d030u));
  /* 1016a2fc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1016a302 push eax */
  push32((uint32_t)(EAX));
  /* 1016a303 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1016a30a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016a30d push ebx */
  push32((uint32_t)(EBX));
  /* 1016a30e push esi */
  push32((uint32_t)(ESI));
  /* 1016a30f push edi */
  push32((uint32_t)(EDI));
  /* 1016a310 mov eax, dword ptr [0x10177ca8] */
  EAX = (r32((uint32_t)(0x10177ca8)));
  /* 1016a315 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a318 jne 0x1016a35d */
  if (!C.zf) goto L_1016a35d;
  /* 1016a31a mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1016a31d cmp esi, dword ptr [0x10176a50] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10176a50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a323 ja 0x1016a3bc */
  if ((!C.cf&&!C.zf)) goto L_1016a3bc;
  /* 1016a329 push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a32b call 0x1016a013 */
  push32(0x1016a330u); f_1016a013();
  /* 1016a330 pop ecx */
  ECX = (pop32());
  /* 1016a331 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016a335 push esi */
  push32((uint32_t)(ESI));
  /* 1016a336 call 0x1016b29b */
  push32(0x1016a33bu); f_1016b29b();
  /* 1016a33b pop ecx */
  ECX = (pop32());
  /* 1016a33c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1016a33f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016a343 call 0x1016a354 */
  push32(0x1016a348u); f_1016a354();
  /* 1016a348 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1016a34b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016a34d je 0x1016a3bc */
  if (C.zf) goto L_1016a3bc;
  /* 1016a34f jmp 0x1016a3da */
  jmp_ind(0x1016a3dau); return;
  /* 1016a354 push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a356 call 0x1016a074 */
  push32(0x1016a35bu); f_1016a074();
  /* 1016a35b pop ecx */
  ECX = (pop32());
  /* 1016a35c ret  */
  ESPCHK(0x1016a2edu, _esp0);
  ESP += 4; return;
L_1016a35d:;
  /* 1016a35d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a360 jne 0x1016a3bc */
  if (!C.zf) goto L_1016a3bc;
  /* 1016a362 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016a365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016a367 je 0x1016a371 */
  if (C.zf) goto L_1016a371;
  /* 1016a369 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 1016a36c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1016a36f jmp 0x1016a374 */
  goto L_1016a374;
L_1016a371:;
  /* 1016a371 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1016a373 pop esi */
  ESI = (pop32());
L_1016a374:;
  /* 1016a374 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 1016a377 cmp esi, dword ptr [0x10172f04] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10172f04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a37d ja 0x1016a3ad */
  if ((!C.cf&&!C.zf)) goto L_1016a3ad;
  /* 1016a37f push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a381 call 0x1016a013 */
  push32(0x1016a386u); f_1016a013();
  /* 1016a386 pop ecx */
  ECX = (pop32());
  /* 1016a387 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1016a38e mov eax, esi */
  EAX = (ESI);
  /* 1016a390 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1016a393 push eax */
  push32((uint32_t)(EAX));
  /* 1016a394 call 0x1016ba48 */
  push32(0x1016a399u); f_1016ba48();
  /* 1016a399 pop ecx */
  ECX = (pop32());
  /* 1016a39a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1016a39d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016a3a1 call 0x1016a3b3 */
  push32(0x1016a3a6u); f_1016a3b3();
  /* 1016a3a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1016a3a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016a3ab jne 0x1016a3da */
  if (!C.zf) { jmp_ind(0x1016a3dau); return; }
L_1016a3ad:;
  /* 1016a3ad push esi */
  push32((uint32_t)(ESI));
  /* 1016a3ae jmp 0x1016a3cc */
  goto L_1016a3cc;
  /* 1016a3b0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1016a3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a3b5 call 0x1016a074 */
  push32(0x1016a3bau); f_1016a074();
  /* 1016a3ba pop ecx */
  ECX = (pop32());
  /* 1016a3bb ret  */
  ESPCHK(0x1016a2edu, _esp0);
  ESP += 4; return;
L_1016a3bc:;
  /* 1016a3bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016a3bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016a3c1 jne 0x1016a3c6 */
  if (!C.zf) goto L_1016a3c6;
  /* 1016a3c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016a3c5 pop eax */
  EAX = (pop32());
L_1016a3c6:;
  /* 1016a3c6 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016a3c9 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1016a3cb push eax */
  push32((uint32_t)(EAX));
L_1016a3cc:;
  /* 1016a3cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1016a3ce push dword ptr [0x10177ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10177ca4))));
}

/* FUN_1000a354 @ 0x1016a354 (9 bytes, 4 insns) */
void f_1016a354(void) {
  FTRACE(0x1016a354u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a354 push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a356 call 0x1016a074 */
  push32(0x1016a35bu); f_1016a074();
  /* 1016a35b pop ecx */
  ECX = (pop32());
  /* 1016a35c ret  */
  ESPCHK(0x1016a354u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3b3 @ 0x1016a3b3 (9 bytes, 4 insns) */
void f_1016a3b3(void) {
  FTRACE(0x1016a3b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1016a3b5 call 0x1016a074 */
  push32(0x1016a3bau); f_1016a074();
  /* 1016a3ba pop ecx */
  ECX = (pop32());
  /* 1016a3bb ret  */
  ESPCHK(0x1016a3b3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3e9 @ 0x1016a3e9 (429 bytes, 143 insns) */
void f_1016a3e9(void) {
  FTRACE(0x1016a3e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a3e9 push ebp */
  push32((uint32_t)(EBP));
  /* 1016a3ea mov ebp, esp */
  EBP = (ESP);
  /* 1016a3ec sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016a3ef push ebx */
  push32((uint32_t)(EBX));
  /* 1016a3f0 push esi */
  push32((uint32_t)(ESI));
  /* 1016a3f1 push edi */
  push32((uint32_t)(EDI));
  /* 1016a3f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1016a3f4 call 0x1016a013 */
  push32(0x1016a3f9u); f_1016a013();
  /* 1016a3f9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1016a3fc call 0x1016a596 */
  push32(0x1016a401u); f_1016a596();
  /* 1016a401 mov ebx, eax */
  EBX = (EAX);
  /* 1016a403 pop ecx */
  ECX = (pop32());
  /* 1016a404 cmp ebx, dword ptr [0x10176a54] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10176a54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a40a pop ecx */
  ECX = (pop32());
  /* 1016a40b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1016a40e jne 0x1016a417 */
  if (!C.zf) goto L_1016a417;
L_1016a410:;
  /* 1016a410 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1016a412 jmp 0x1016a587 */
  goto L_1016a587;
L_1016a417:;
  /* 1016a417 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1016a419 je 0x1016a575 */
  if (C.zf) goto L_1016a575;
  /* 1016a41f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1016a421 mov eax, 0x10170df0 */
  EAX = (0x10170df0u);
L_1016a426:;
  /* 1016a426 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a428 je 0x1016a49e */
  if (C.zf) goto L_1016a49e;
  /* 1016a42a add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016a42d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1016a42e cmp eax, 0x10170ee0 */
  { uint32_t _a=(EAX),_b=(0x10170ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a433 jl 0x1016a426 */
  if ((C.sf!=C.of)) goto L_1016a426;
  /* 1016a435 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1016a438 push eax */
  push32((uint32_t)(EAX));
  /* 1016a439 push ebx */
  push32((uint32_t)(EBX));
  /* 1016a43a call dword ptr [0x1016e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e09c))), 0x1016a440u);
  /* 1016a440 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016a442 pop esi */
  ESI = (pop32());
  /* 1016a443 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a445 jne 0x1016a56c */
  if (!C.zf) goto L_1016a56c;
  /* 1016a44b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1016a44d and dword ptr [0x10176c84], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10176c84)))&(0x0u); w32((uint32_t)(0x10176c84), (_r)); fl_logic(_r,32); }
  /* 1016a454 pop ecx */
  ECX = (pop32());
  /* 1016a455 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016a457 mov edi, 0x10176b80 */
  EDI = (0x10176b80u);
  /* 1016a45c cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a45f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1016a461 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1016a462 mov dword ptr [0x10176a54], ebx */
  w32((uint32_t)(0x10176a54), (EBX));
  /* 1016a468 jbe 0x1016a559 */
  if ((C.cf||C.zf)) goto L_1016a559;
  /* 1016a46e cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016a472 je 0x1016a534 */
  if (C.zf) goto L_1016a534;
  /* 1016a478 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1016a47b:;
  /* 1016a47b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1016a47d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1016a47f je 0x1016a534 */
  if (C.zf) goto L_1016a534;
  /* 1016a485 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1016a489 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1016a48c:;
  /* 1016a48c cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a48e ja 0x1016a528 */
  if ((!C.cf&&!C.zf)) goto L_1016a528;
  /* 1016a494 or byte ptr [eax + 0x10176b81], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10176b81)))|(0x4u); w8((uint32_t)(EAX + 0x10176b81), (_r)); fl_logic(_r,8); }
  /* 1016a49b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016a49c jmp 0x1016a48c */
  goto L_1016a48c;
L_1016a49e:;
  /* 1016a49e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016a4a2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1016a4a4 pop ecx */
  ECX = (pop32());
  /* 1016a4a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016a4a7 mov edi, 0x10176b80 */
  EDI = (0x10176b80u);
  /* 1016a4ac lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 1016a4af rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1016a4b1 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1016a4b4 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1016a4b5 lea ebx, [esi + 0x10170e00] */
  EBX = ((uint32_t)(ESI + 0x10170e00));
L_1016a4bb:;
  /* 1016a4bb cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016a4be mov ecx, ebx */
  ECX = (EBX);
  /* 1016a4c0 je 0x1016a4ee */
  if (C.zf) goto L_1016a4ee;
L_1016a4c2:;
  /* 1016a4c2 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1016a4c5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1016a4c7 je 0x1016a4ee */
  if (C.zf) goto L_1016a4ee;
  /* 1016a4c9 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1016a4cc movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 1016a4cf cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a4d1 ja 0x1016a4e7 */
  if ((!C.cf&&!C.zf)) goto L_1016a4e7;
  /* 1016a4d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016a4d6 mov dl, byte ptr [edx + 0x10170de8] */
  DL = (r8((uint32_t)(EDX + 0x10170de8)));
L_1016a4dc:;
  /* 1016a4dc or byte ptr [eax + 0x10176b81], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10176b81)))|(DL); w8((uint32_t)(EAX + 0x10176b81), (_r)); fl_logic(_r,8); }
  /* 1016a4e2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016a4e3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a4e5 jbe 0x1016a4dc */
  if ((C.cf||C.zf)) goto L_1016a4dc;
L_1016a4e7:;
  /* 1016a4e7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1016a4e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1016a4e9 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016a4ec jne 0x1016a4c2 */
  if (!C.zf) goto L_1016a4c2;
L_1016a4ee:;
  /* 1016a4ee inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1016a4f1 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016a4f4 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a4f8 jb 0x1016a4bb */
  if (C.cf) goto L_1016a4bb;
  /* 1016a4fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016a4fd mov dword ptr [0x10176a6c], 1 */
  w32((uint32_t)(0x10176a6c), (0x1u));
  /* 1016a507 push eax */
  push32((uint32_t)(EAX));
  /* 1016a508 mov dword ptr [0x10176a54], eax */
  w32((uint32_t)(0x10176a54), (EAX));
  /* 1016a50d call 0x1016a5e0 */
  push32(0x1016a512u); f_1016a5e0();
  /* 1016a512 lea esi, [esi + 0x10170df4] */
  ESI = ((uint32_t)(ESI + 0x10170df4));
  /* 1016a518 mov edi, 0x10176a60 */
  EDI = (0x10176a60u);
  /* 1016a51d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1016a51e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1016a51f pop ecx */
  ECX = (pop32());
  /* 1016a520 mov dword ptr [0x10176c84], eax */
  w32((uint32_t)(0x10176c84), (EAX));
  /* 1016a525 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1016a526 jmp 0x1016a57a */
  goto L_1016a57a;
L_1016a528:;
  /* 1016a528 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1016a529 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1016a52a cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016a52e jne 0x1016a47b */
  if (!C.zf) goto L_1016a47b;
L_1016a534:;
  /* 1016a534 mov eax, esi */
  EAX = (ESI);
L_1016a536:;
  /* 1016a536 or byte ptr [eax + 0x10176b81], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10176b81)))|(0x8u); w8((uint32_t)(EAX + 0x10176b81), (_r)); fl_logic(_r,8); }
  /* 1016a53d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016a53e cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a543 jb 0x1016a536 */
  if (C.cf) goto L_1016a536;
  /* 1016a545 push ebx */
  push32((uint32_t)(EBX));
  /* 1016a546 call 0x1016a5e0 */
  push32(0x1016a54bu); f_1016a5e0();
  /* 1016a54b pop ecx */
  ECX = (pop32());
  /* 1016a54c mov dword ptr [0x10176c84], eax */
  w32((uint32_t)(0x10176c84), (EAX));
  /* 1016a551 mov dword ptr [0x10176a6c], esi */
  w32((uint32_t)(0x10176a6c), (ESI));
  /* 1016a557 jmp 0x1016a560 */
  goto L_1016a560;
L_1016a559:;
  /* 1016a559 and dword ptr [0x10176a6c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10176a6c)))&(0x0u); w32((uint32_t)(0x10176a6c), (_r)); fl_logic(_r,32); }
L_1016a560:;
  /* 1016a560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016a562 mov edi, 0x10176a60 */
  EDI = (0x10176a60u);
  /* 1016a567 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1016a568 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1016a569 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1016a56a jmp 0x1016a57a */
  goto L_1016a57a;
L_1016a56c:;
  /* 1016a56c cmp dword ptr [0x10176890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10176890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a573 je 0x1016a584 */
  if (C.zf) goto L_1016a584;
L_1016a575:;
  /* 1016a575 call 0x1016a613 */
  push32(0x1016a57au); f_1016a613();
L_1016a57a:;
  /* 1016a57a call 0x1016a63c */
  push32(0x1016a57fu); f_1016a63c();
  /* 1016a57f jmp 0x1016a410 */
  goto L_1016a410;
L_1016a584:;
  /* 1016a584 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1016a587:;
  /* 1016a587 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1016a589 call 0x1016a074 */
  push32(0x1016a58eu); f_1016a074();
  /* 1016a58e pop ecx */
  ECX = (pop32());
  /* 1016a58f mov eax, esi */
  EAX = (ESI);
  /* 1016a591 pop edi */
  EDI = (pop32());
  /* 1016a592 pop esi */
  ESI = (pop32());
  /* 1016a593 pop ebx */
  EBX = (pop32());
  /* 1016a594 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016a595 ret  */
  ESPCHK(0x1016a3e9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a596 @ 0x1016a596 (74 bytes, 15 insns) */
void f_1016a596(void) {
  FTRACE(0x1016a596u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a596 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016a59a and dword ptr [0x10176890], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10176890)))&(0x0u); w32((uint32_t)(0x10176890), (_r)); fl_logic(_r,32); }
  /* 1016a5a1 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a5a4 jne 0x1016a5b6 */
  if (!C.zf) goto L_1016a5b6;
  /* 1016a5a6 mov dword ptr [0x10176890], 1 */
  w32((uint32_t)(0x10176890), (0x1u));
  /* 1016a5b0 jmp dword ptr [0x1016e0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1016e0a4)))); return;
L_1016a5b6:;
  /* 1016a5b6 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a5b9 jne 0x1016a5cb */
  if (!C.zf) goto L_1016a5cb;
  /* 1016a5bb mov dword ptr [0x10176890], 1 */
  w32((uint32_t)(0x10176890), (0x1u));
  /* 1016a5c5 jmp dword ptr [0x1016e0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1016e0a0)))); return;
L_1016a5cb:;
  /* 1016a5cb cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a5ce jne 0x1016a5df */
  if (!C.zf) goto L_1016a5df;
  /* 1016a5d0 mov eax, dword ptr [0x101768c8] */
  EAX = (r32((uint32_t)(0x101768c8)));
  /* 1016a5d5 mov dword ptr [0x10176890], 1 */
  w32((uint32_t)(0x10176890), (0x1u));
L_1016a5df:;
  /* 1016a5df ret  */
  ESPCHK(0x1016a596u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5e0 @ 0x1016a5e0 (51 bytes, 19 insns) */
void f_1016a5e0(void) {
  FTRACE(0x1016a5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a5e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016a5e4 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016a5e9 je 0x1016a60d */
  if (C.zf) goto L_1016a60d;
  /* 1016a5eb sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016a5ee je 0x1016a607 */
  if (C.zf) goto L_1016a607;
  /* 1016a5f0 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016a5f3 je 0x1016a601 */
  if (C.zf) goto L_1016a601;
  /* 1016a5f5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016a5f6 je 0x1016a5fb */
  if (C.zf) goto L_1016a5fb;
  /* 1016a5f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016a5fa ret  */
  ESPCHK(0x1016a5e0u, _esp0);
  ESP += 4; return;
L_1016a5fb:;
  /* 1016a5fb mov eax, 0x404 */
  EAX = (0x404u);
  /* 1016a600 ret  */
  ESPCHK(0x1016a5e0u, _esp0);
  ESP += 4; return;
L_1016a601:;
  /* 1016a601 mov eax, 0x412 */
  EAX = (0x412u);
  /* 1016a606 ret  */
  ESPCHK(0x1016a5e0u, _esp0);
  ESP += 4; return;
L_1016a607:;
  /* 1016a607 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1016a60c ret  */
  ESPCHK(0x1016a5e0u, _esp0);
  ESP += 4; return;
L_1016a60d:;
  /* 1016a60d mov eax, 0x411 */
  EAX = (0x411u);
  /* 1016a612 ret  */
  ESPCHK(0x1016a5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a613 @ 0x1016a613 (41 bytes, 17 insns) */
void f_1016a613(void) {
  FTRACE(0x1016a613u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a613 push edi */
  push32((uint32_t)(EDI));
  /* 1016a614 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1016a616 pop ecx */
  ECX = (pop32());
  /* 1016a617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016a619 mov edi, 0x10176b80 */
  EDI = (0x10176b80u);
  /* 1016a61e rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1016a620 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1016a621 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016a623 mov edi, 0x10176a60 */
  EDI = (0x10176a60u);
  /* 1016a628 mov dword ptr [0x10176a54], eax */
  w32((uint32_t)(0x10176a54), (EAX));
  /* 1016a62d mov dword ptr [0x10176a6c], eax */
  w32((uint32_t)(0x10176a6c), (EAX));
  /* 1016a632 mov dword ptr [0x10176c84], eax */
  w32((uint32_t)(0x10176c84), (EAX));
  /* 1016a637 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1016a638 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1016a639 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1016a63a pop edi */
  EDI = (pop32());
  /* 1016a63b ret  */
  ESPCHK(0x1016a613u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a63c @ 0x1016a63c (389 bytes, 124 insns) */
void f_1016a63c(void) {
  FTRACE(0x1016a63cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a63c push ebp */
  push32((uint32_t)(EBP));
  /* 1016a63d mov ebp, esp */
  EBP = (ESP);
  /* 1016a63f sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016a645 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1016a648 push esi */
  push32((uint32_t)(ESI));
  /* 1016a649 push eax */
  push32((uint32_t)(EAX));
  /* 1016a64a push dword ptr [0x10176a54] */
  push32((uint32_t)(r32((uint32_t)(0x10176a54))));
  /* 1016a650 call dword ptr [0x1016e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e09c))), 0x1016a656u);
  /* 1016a656 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a659 jne 0x1016a775 */
  if (!C.zf) goto L_1016a775;
  /* 1016a65f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016a661 mov esi, 0x100 */
  ESI = (0x100u);
L_1016a666:;
  /* 1016a666 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1016a66d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016a66e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a670 jb 0x1016a666 */
  if (C.cf) goto L_1016a666;
  /* 1016a672 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 1016a675 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1016a67c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016a67e je 0x1016a6b7 */
  if (C.zf) goto L_1016a6b7;
  /* 1016a680 push ebx */
  push32((uint32_t)(EBX));
  /* 1016a681 push edi */
  push32((uint32_t)(EDI));
  /* 1016a682 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_1016a685:;
  /* 1016a685 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1016a688 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1016a68b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a68d ja 0x1016a6ac */
  if ((!C.cf&&!C.zf)) goto L_1016a6ac;
  /* 1016a68f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016a691 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1016a698 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1016a699 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 1016a69e mov ebx, ecx */
  EBX = (ECX);
  /* 1016a6a0 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1016a6a3 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1016a6a5 mov ecx, ebx */
  ECX = (EBX);
  /* 1016a6a7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1016a6aa rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1016a6ac:;
  /* 1016a6ac inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1016a6ad inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1016a6ae mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 1016a6b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016a6b3 jne 0x1016a685 */
  if (!C.zf) goto L_1016a685;
  /* 1016a6b5 pop edi */
  EDI = (pop32());
  /* 1016a6b6 pop ebx */
  EBX = (pop32());
L_1016a6b7:;
  /* 1016a6b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1016a6b9 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 1016a6bf push dword ptr [0x10176c84] */
  push32((uint32_t)(r32((uint32_t)(0x10176c84))));
  /* 1016a6c5 push dword ptr [0x10176a54] */
  push32((uint32_t)(r32((uint32_t)(0x10176a54))));
  /* 1016a6cb push eax */
  push32((uint32_t)(EAX));
  /* 1016a6cc lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1016a6d2 push esi */
  push32((uint32_t)(ESI));
  /* 1016a6d3 push eax */
  push32((uint32_t)(EAX));
  /* 1016a6d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016a6d6 call 0x1016c27d */
  push32(0x1016a6dbu); f_1016c27d();
  /* 1016a6db push 0 */
  push32((uint32_t)(0x0u));
  /* 1016a6dd lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 1016a6e3 push dword ptr [0x10176a54] */
  push32((uint32_t)(r32((uint32_t)(0x10176a54))));
  /* 1016a6e9 push esi */
  push32((uint32_t)(ESI));
  /* 1016a6ea push eax */
  push32((uint32_t)(EAX));
  /* 1016a6eb lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1016a6f1 push esi */
  push32((uint32_t)(ESI));
  /* 1016a6f2 push eax */
  push32((uint32_t)(EAX));
  /* 1016a6f3 push esi */
  push32((uint32_t)(ESI));
  /* 1016a6f4 push dword ptr [0x10176c84] */
  push32((uint32_t)(r32((uint32_t)(0x10176c84))));
  /* 1016a6fa call 0x1016c3c6 */
  push32(0x1016a6ffu); f_1016c3c6();
  /* 1016a6ff push 0 */
  push32((uint32_t)(0x0u));
  /* 1016a701 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 1016a707 push dword ptr [0x10176a54] */
  push32((uint32_t)(r32((uint32_t)(0x10176a54))));
  /* 1016a70d push esi */
  push32((uint32_t)(ESI));
  /* 1016a70e push eax */
  push32((uint32_t)(EAX));
  /* 1016a70f lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1016a715 push esi */
  push32((uint32_t)(ESI));
  /* 1016a716 push eax */
  push32((uint32_t)(EAX));
  /* 1016a717 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1016a71c push dword ptr [0x10176c84] */
  push32((uint32_t)(r32((uint32_t)(0x10176c84))));
  /* 1016a722 call 0x1016c3c6 */
  push32(0x1016a727u); f_1016c3c6();
  /* 1016a727 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016a72a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016a72c lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_1016a732:;
  /* 1016a732 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1016a735 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1016a738 je 0x1016a750 */
  if (C.zf) goto L_1016a750;
  /* 1016a73a or byte ptr [eax + 0x10176b81], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10176b81)))|(0x10u); w8((uint32_t)(EAX + 0x10176b81), (_r)); fl_logic(_r,8); }
  /* 1016a741 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1016a748:;
  /* 1016a748 mov byte ptr [eax + 0x10176a80], dl */
  w8((uint32_t)(EAX + 0x10176a80), (DL));
  /* 1016a74e jmp 0x1016a76c */
  goto L_1016a76c;
L_1016a750:;
  /* 1016a750 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 1016a753 je 0x1016a765 */
  if (C.zf) goto L_1016a765;
  /* 1016a755 or byte ptr [eax + 0x10176b81], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10176b81)))|(0x20u); w8((uint32_t)(EAX + 0x10176b81), (_r)); fl_logic(_r,8); }
  /* 1016a75c mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 1016a763 jmp 0x1016a748 */
  goto L_1016a748;
L_1016a765:;
  /* 1016a765 and byte ptr [eax + 0x10176a80], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10176a80)))&(0x0u); w8((uint32_t)(EAX + 0x10176a80), (_r)); fl_logic(_r,8); }
L_1016a76c:;
  /* 1016a76c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016a76d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1016a76e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1016a76f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a771 jb 0x1016a732 */
  if (C.cf) goto L_1016a732;
  /* 1016a773 jmp 0x1016a7be */
  goto L_1016a7be;
L_1016a775:;
  /* 1016a775 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016a777 mov esi, 0x100 */
  ESI = (0x100u);
L_1016a77c:;
  /* 1016a77c cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a77f jb 0x1016a79a */
  if (C.cf) goto L_1016a79a;
  /* 1016a781 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a784 ja 0x1016a79a */
  if ((!C.cf&&!C.zf)) goto L_1016a79a;
  /* 1016a786 or byte ptr [eax + 0x10176b81], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10176b81)))|(0x10u); w8((uint32_t)(EAX + 0x10176b81), (_r)); fl_logic(_r,8); }
  /* 1016a78d mov cl, al */
  CL = (AL);
  /* 1016a78f add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_1016a792:;
  /* 1016a792 mov byte ptr [eax + 0x10176a80], cl */
  w8((uint32_t)(EAX + 0x10176a80), (CL));
  /* 1016a798 jmp 0x1016a7b9 */
  goto L_1016a7b9;
L_1016a79a:;
  /* 1016a79a cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a79d jb 0x1016a7b2 */
  if (C.cf) goto L_1016a7b2;
  /* 1016a79f cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a7a2 ja 0x1016a7b2 */
  if ((!C.cf&&!C.zf)) goto L_1016a7b2;
  /* 1016a7a4 or byte ptr [eax + 0x10176b81], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10176b81)))|(0x20u); w8((uint32_t)(EAX + 0x10176b81), (_r)); fl_logic(_r,8); }
  /* 1016a7ab mov cl, al */
  CL = (AL);
  /* 1016a7ad sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1016a7b0 jmp 0x1016a792 */
  goto L_1016a792;
L_1016a7b2:;
  /* 1016a7b2 and byte ptr [eax + 0x10176a80], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10176a80)))&(0x0u); w8((uint32_t)(EAX + 0x10176a80), (_r)); fl_logic(_r,8); }
L_1016a7b9:;
  /* 1016a7b9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016a7ba cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a7bc jb 0x1016a77c */
  if (C.cf) goto L_1016a77c;
L_1016a7be:;
  /* 1016a7be pop esi */
  ESI = (pop32());
  /* 1016a7bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016a7c0 ret  */
  ESPCHK(0x1016a63cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c1 @ 0x1016a7c1 (28 bytes, 7 insns) */
void f_1016a7c1(void) {
  FTRACE(0x1016a7c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a7c1 cmp dword ptr [0x10177dc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10177dc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a7c8 jne 0x1016a7dc */
  if (!C.zf) goto L_1016a7dc;
  /* 1016a7ca push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1016a7cc call 0x1016a3e9 */
  push32(0x1016a7d1u); f_1016a3e9();
  /* 1016a7d1 pop ecx */
  ECX = (pop32());
  /* 1016a7d2 mov dword ptr [0x10177dc8], 1 */
  w32((uint32_t)(0x10177dc8), (0x1u));
L_1016a7dc:;
  /* 1016a7dc ret  */
  ESPCHK(0x1016a7c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7e0 @ 0x1016a7e0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1016a7e0(void) {
  FTRACE(0x1016a7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016a7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1016a7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1016a7e3 push edi */
  push32((uint32_t)(EDI));
  /* 1016a7e4 push esi */
  push32((uint32_t)(ESI));
  /* 1016a7e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1016a7e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1016a7eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1016a7ee mov eax, ecx */
  EAX = (ECX);
  /* 1016a7f0 mov edx, ecx */
  EDX = (ECX);
  /* 1016a7f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016a7f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a7f6 jbe 0x1016a800 */
  if ((C.cf||C.zf)) goto L_1016a800;
  /* 1016a7f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a7fa jb 0x1016a978 */
  if (C.cf) goto L_1016a978;
L_1016a800:;
  /* 1016a800 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1016a806 jne 0x1016a81c */
  if (!C.zf) goto L_1016a81c;
  /* 1016a808 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1016a80b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1016a80e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a811 jb 0x1016a83c */
  if (C.cf) goto L_1016a83c;
  /* 1016a813 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1016a815 jmp dword ptr [edx*4 + 0x1016a928] */
  switch (EDX) {
    case 0: goto L_1016a938;
    case 1: goto L_1016a940;
    case 2: goto L_1016a94c;
    case 3: goto L_1016a960;
    default: x86_unimpl("switch@0x1016a815 out of table"); return;
  }
L_1016a81c:;
  /* 1016a81c mov eax, edi */
  EAX = (EDI);
  /* 1016a81e mov edx, 3 */
  EDX = (0x3u);
  /* 1016a823 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016a826 jb 0x1016a834 */
  if (C.cf) goto L_1016a834;
  /* 1016a828 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1016a82b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016a82d jmp dword ptr [eax*4 + 0x1016a840] */
  switch (EAX) {
    case 1: goto L_1016a850;
    case 2: goto L_1016a87c;
    case 3: goto L_1016a8a0;
    default: x86_unimpl("switch@0x1016a82d out of table"); return;
  }
L_1016a834:;
  /* 1016a834 jmp dword ptr [ecx*4 + 0x1016a938] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1016a938)))); return;
  /* 1016a83b nop  */
  /* nop */
L_1016a83c:;
  /* 1016a83c jmp dword ptr [ecx*4 + 0x1016a8bc] */
  switch (ECX) {
    case 0: goto L_1016a91f;
    case 1: goto L_1016a90c;
    case 2: goto L_1016a904;
    case 3: goto L_1016a8fc;
    case 4: goto L_1016a8f4;
    case 5: goto L_1016a8ec;
    case 6: goto L_1016a8e4;
    case 7: goto L_1016a8dc;
    default: x86_unimpl("switch@0x1016a83c out of table"); return;
  }
  /* 1016a843 nop  */
  /* nop */
L_1016a850:;
  /* 1016a850 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1016a852 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016a854 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1016a856 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1016a859 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1016a85c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1016a85f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1016a862 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1016a865 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016a868 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016a86b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a86e jb 0x1016a83c */
  if (C.cf) goto L_1016a83c;
  /* 1016a870 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1016a872 jmp dword ptr [edx*4 + 0x1016a928] */
  switch (EDX) {
    case 0: goto L_1016a938;
    case 1: goto L_1016a940;
    case 2: goto L_1016a94c;
    case 3: goto L_1016a960;
    default: x86_unimpl("switch@0x1016a872 out of table"); return;
  }
  /* 1016a879 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1016a87c:;
  /* 1016a87c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1016a87e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016a880 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1016a882 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1016a885 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1016a888 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1016a88b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016a88e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016a891 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a894 jb 0x1016a83c */
  if (C.cf) goto L_1016a83c;
  /* 1016a896 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1016a898 jmp dword ptr [edx*4 + 0x1016a928] */
  switch (EDX) {
    case 0: goto L_1016a938;
    case 1: goto L_1016a940;
    case 2: goto L_1016a94c;
    case 3: goto L_1016a960;
    default: x86_unimpl("switch@0x1016a898 out of table"); return;
  }
  /* 1016a89f nop  */
  /* nop */
L_1016a8a0:;
  /* 1016a8a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1016a8a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016a8a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1016a8a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016a8a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1016a8aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016a8ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a8ae jb 0x1016a83c */
  if (C.cf) goto L_1016a83c;
  /* 1016a8b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1016a8b2 jmp dword ptr [edx*4 + 0x1016a928] */
  switch (EDX) {
    case 0: goto L_1016a938;
    case 1: goto L_1016a940;
    case 2: goto L_1016a94c;
    case 3: goto L_1016a960;
    default: x86_unimpl("switch@0x1016a8b2 out of table"); return;
  }
  /* 1016a8b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1016a8dc:;
  /* 1016a8dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1016a8e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1016a8e4:;
  /* 1016a8e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1016a8e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1016a8ec:;
  /* 1016a8ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1016a8f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1016a8f4:;
  /* 1016a8f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1016a8f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1016a8fc:;
  /* 1016a8fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1016a900 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1016a904:;
  /* 1016a904 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1016a908 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1016a90c:;
  /* 1016a90c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1016a910 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1016a914 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1016a91b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016a91d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1016a91f:;
  /* 1016a91f jmp dword ptr [edx*4 + 0x1016a928] */
  switch (EDX) {
    case 0: goto L_1016a938;
    case 1: goto L_1016a940;
    case 2: goto L_1016a94c;
    case 3: goto L_1016a960;
    default: x86_unimpl("switch@0x1016a91f out of table"); return;
  }
  /* 1016a926 mov edi, edi */
  EDI = (EDI);
L_1016a938:;
  /* 1016a938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016a93b pop esi */
  ESI = (pop32());
  /* 1016a93c pop edi */
  EDI = (pop32());
  /* 1016a93d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016a93e ret  */
  ESPCHK(0x1016a7e0u, _esp0);
  ESP += 4; return;
  /* 1016a93f nop  */
  /* nop */
L_1016a940:;
  /* 1016a940 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016a942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1016a944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016a947 pop esi */
  ESI = (pop32());
  /* 1016a948 pop edi */
  EDI = (pop32());
  /* 1016a949 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016a94a ret  */
  ESPCHK(0x1016a7e0u, _esp0);
  ESP += 4; return;
  /* 1016a94b nop  */
  /* nop */
L_1016a94c:;
  /* 1016a94c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016a94e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1016a950 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1016a953 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1016a956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016a959 pop esi */
  ESI = (pop32());
  /* 1016a95a pop edi */
  EDI = (pop32());
  /* 1016a95b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016a95c ret  */
  ESPCHK(0x1016a7e0u, _esp0);
  ESP += 4; return;
  /* 1016a95d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1016a960:;
  /* 1016a960 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016a962 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1016a964 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1016a967 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1016a96a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1016a96d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1016a970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016a973 pop esi */
  ESI = (pop32());
  /* 1016a974 pop edi */
  EDI = (pop32());
  /* 1016a975 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016a976 ret  */
  ESPCHK(0x1016a7e0u, _esp0);
  ESP += 4; return;
  /* 1016a977 nop  */
  /* nop */
L_1016a978:;
  /* 1016a978 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1016a97c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1016a980 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1016a986 jne 0x1016a9ac */
  if (!C.zf) goto L_1016a9ac;
  /* 1016a988 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1016a98b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1016a98e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a991 jb 0x1016a9a0 */
  if (C.cf) goto L_1016a9a0;
  /* 1016a993 std  */
  C.df=1;
  /* 1016a994 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1016a996 cld  */
  C.df=0;
  /* 1016a997 jmp dword ptr [edx*4 + 0x1016aac0] */
  switch (EDX) {
    case 0: goto L_1016aad0;
    case 1: goto L_1016aad8;
    case 2: goto L_1016aae8;
    case 3: goto L_1016aafc;
    default: x86_unimpl("switch@0x1016a997 out of table"); return;
  }
  /* 1016a99e mov edi, edi */
  EDI = (EDI);
L_1016a9a0:;
  /* 1016a9a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1016a9a2 jmp dword ptr [ecx*4 + 0x1016aa70] */
  switch (ECX) {
    case 0: goto L_1016aab7;
    default: x86_unimpl("switch@0x1016a9a2 out of table"); return;
  }
  /* 1016a9a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1016a9ac:;
  /* 1016a9ac mov eax, edi */
  EAX = (EDI);
  /* 1016a9ae mov edx, 3 */
  EDX = (0x3u);
  /* 1016a9b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a9b6 jb 0x1016a9c4 */
  if (C.cf) goto L_1016a9c4;
  /* 1016a9b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1016a9bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016a9bd jmp dword ptr [eax*4 + 0x1016a9c8] */
  switch (EAX) {
    case 1: goto L_1016a9d8;
    case 2: goto L_1016a9f8;
    case 3: goto L_1016aa20;
    default: x86_unimpl("switch@0x1016a9bd out of table"); return;
  }
L_1016a9c4:;
  /* 1016a9c4 jmp dword ptr [ecx*4 + 0x1016aac0] */
  switch (ECX) {
    case 0: goto L_1016aad0;
    case 1: goto L_1016aad8;
    case 2: goto L_1016aae8;
    case 3: goto L_1016aafc;
    default: x86_unimpl("switch@0x1016a9c4 out of table"); return;
  }
  /* 1016a9cb nop  */
  /* nop */
L_1016a9d8:;
  /* 1016a9d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1016a9db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1016a9dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1016a9e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1016a9e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1016a9e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1016a9e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016a9e8 jb 0x1016a9a0 */
  if (C.cf) goto L_1016a9a0;
  /* 1016a9ea std  */
  C.df=1;
  /* 1016a9eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1016a9ed cld  */
  C.df=0;
  /* 1016a9ee jmp dword ptr [edx*4 + 0x1016aac0] */
  switch (EDX) {
    case 0: goto L_1016aad0;
    case 1: goto L_1016aad8;
    case 2: goto L_1016aae8;
    case 3: goto L_1016aafc;
    default: x86_unimpl("switch@0x1016a9ee out of table"); return;
  }
  /* 1016a9f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1016a9f8:;
  /* 1016a9f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1016a9fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1016a9fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
L_1016aa00:;
  /* 1016aa00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1016aa03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1016aa06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1016aa09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016aa0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016aa0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016aa12 jb 0x1016a9a0 */
  if (C.cf) goto L_1016a9a0;
  /* 1016aa14 std  */
  C.df=1;
  /* 1016aa15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1016aa17 cld  */
  C.df=0;
  /* 1016aa18 jmp dword ptr [edx*4 + 0x1016aac0] */
  switch (EDX) {
    case 0: goto L_1016aad0;
    case 1: goto L_1016aad8;
    case 2: goto L_1016aae8;
    case 3: goto L_1016aafc;
    default: x86_unimpl("switch@0x1016aa18 out of table"); return;
  }
  /* 1016aa1f nop  */
  /* nop */
L_1016aa20:;
  /* 1016aa20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1016aa23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1016aa25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1016aa28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1016aa2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1016aa2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1016aa31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1016aa34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1016aa37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016aa3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016aa3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016aa40 jb 0x1016a9a0 */
  if (C.cf) goto L_1016a9a0;
  /* 1016aa46 std  */
  C.df=1;
  /* 1016aa47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1016aa49 cld  */
  C.df=0;
  /* 1016aa4a jmp dword ptr [edx*4 + 0x1016aac0] */
  switch (EDX) {
    case 0: goto L_1016aad0;
    case 1: goto L_1016aad8;
    case 2: goto L_1016aae8;
    case 3: goto L_1016aafc;
    default: x86_unimpl("switch@0x1016aa4a out of table"); return;
  }
  /* 1016aa51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1016aa54 je 0x1016aa00 */
  if (C.zf) goto L_1016aa00;
  /* 1016aa56 push ss */
  push32((uint32_t)(C.seg_ss));
  /* 1016aa57 adc byte ptr [edx + ebp*4 + 0x16], bh */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*4 + 0x16))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*4 + 0x16), (_r)); fl_add(_a,_b,_r,8); }
  /* 1016aa5b adc byte ptr [edx + ebp*4 - 0x5573efea], al */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*4 + -0x5573efea))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*4 + -0x5573efea), (_r)); fl_add(_a,_b,_r,8); }
  /* 1016aa62 push ss */
  push32((uint32_t)(C.seg_ss));
  /* 1016aa63 adc byte ptr [edx + ebp*4 - 0x5563efea], dl */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*4 + -0x5563efea))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*4 + -0x5563efea), (_r)); fl_add(_a,_b,_r,8); }
  /* 1016aa6a push ss */
  push32((uint32_t)(C.seg_ss));
  /* 1016aa6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1016aa6d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1016aa6e push ss */
  push32((uint32_t)(C.seg_ss));
  /* 1016aa74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1016aa78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1016aa7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1016aa80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1016aa84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1016aa88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1016aa8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1016aa90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1016aa94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1016aa98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1016aa9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1016aaa0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1016aaa4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1016aaa8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1016aaac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1016aab3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016aab5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1016aab7:;
  /* 1016aab7 jmp dword ptr [edx*4 + 0x1016aac0] */
  switch (EDX) {
    case 0: goto L_1016aad0;
    case 1: goto L_1016aad8;
    case 2: goto L_1016aae8;
    case 3: goto L_1016aafc;
    default: x86_unimpl("switch@0x1016aab7 out of table"); return;
  }
  /* 1016aabe mov edi, edi */
  EDI = (EDI);
L_1016aad0:;
  /* 1016aad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016aad3 pop esi */
  ESI = (pop32());
  /* 1016aad4 pop edi */
  EDI = (pop32());
  /* 1016aad5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016aad6 ret  */
  ESPCHK(0x1016a7e0u, _esp0);
  ESP += 4; return;
  /* 1016aad7 nop  */
  /* nop */
L_1016aad8:;
  /* 1016aad8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1016aadb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1016aade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016aae1 pop esi */
  ESI = (pop32());
  /* 1016aae2 pop edi */
  EDI = (pop32());
  /* 1016aae3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016aae4 ret  */
  ESPCHK(0x1016a7e0u, _esp0);
  ESP += 4; return;
  /* 1016aae5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1016aae8:;
  /* 1016aae8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1016aaeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1016aaee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1016aaf1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1016aaf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016aaf7 pop esi */
  ESI = (pop32());
  /* 1016aaf8 pop edi */
  EDI = (pop32());
  /* 1016aaf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016aafa ret  */
  ESPCHK(0x1016a7e0u, _esp0);
  ESP += 4; return;
  /* 1016aafb nop  */
  /* nop */
L_1016aafc:;
  /* 1016aafc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1016aaff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1016ab02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1016ab05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1016ab08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1016ab0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1016ab0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016ab11 pop esi */
  ESI = (pop32());
  /* 1016ab12 pop edi */
  EDI = (pop32());
  /* 1016ab13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016ab14 ret  */
  ESPCHK(0x1016a7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab15 @ 0x1016ab15 (23 bytes, 7 insns) */
void f_1016ab15(void) {
  FTRACE(0x1016ab15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016ab15 push 0 */
  push32((uint32_t)(0x0u));
  /* 1016ab17 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1016ab1b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1016ab1f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1016ab23 call 0x1016ab2c */
  push32(0x1016ab28u); f_1016ab2c();
  /* 1016ab28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016ab2b ret  */
  ESPCHK(0x1016ab15u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab2c @ 0x1016ab2c (517 bytes, 195 insns) */
void f_1016ab2c(void) {
  FTRACE(0x1016ab2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016ab2c push ebp */
  push32((uint32_t)(EBP));
  /* 1016ab2d mov ebp, esp */
  EBP = (ESP);
  /* 1016ab2f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016ab32 push ebx */
  push32((uint32_t)(EBX));
  /* 1016ab33 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1016ab37 push esi */
  push32((uint32_t)(ESI));
  /* 1016ab38 push edi */
  push32((uint32_t)(EDI));
  /* 1016ab39 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1016ab3c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1016ab3e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 1016ab41 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1016ab44:;
  /* 1016ab44 cmp dword ptr [0x10170c60], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10170c60))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ab4b jle 0x1016ab5c */
  if ((C.zf||C.sf!=C.of)) goto L_1016ab5c;
  /* 1016ab4d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1016ab50 push 8 */
  push32((uint32_t)(0x8u));
  /* 1016ab52 push eax */
  push32((uint32_t)(EAX));
  /* 1016ab53 call 0x101693cb */
  push32(0x1016ab58u); f_101693cb();
  /* 1016ab58 pop ecx */
  ECX = (pop32());
  /* 1016ab59 pop ecx */
  ECX = (pop32());
  /* 1016ab5a jmp 0x1016ab6b */
  goto L_1016ab6b;
L_1016ab5c:;
  /* 1016ab5c mov ecx, dword ptr [0x10170a50] */
  ECX = (r32((uint32_t)(0x10170a50)));
  /* 1016ab62 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1016ab65 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1016ab68 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_1016ab6b:;
  /* 1016ab6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016ab6d je 0x1016ab74 */
  if (C.zf) goto L_1016ab74;
  /* 1016ab6f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1016ab71 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016ab72 jmp 0x1016ab44 */
  goto L_1016ab44;
L_1016ab74:;
  /* 1016ab74 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ab77 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 1016ab7a jne 0x1016ab82 */
  if (!C.zf) goto L_1016ab82;
  /* 1016ab7c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1016ab80 jmp 0x1016ab87 */
  goto L_1016ab87;
L_1016ab82:;
  /* 1016ab82 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ab85 jne 0x1016ab8d */
  if (!C.zf) goto L_1016ab8d;
L_1016ab87:;
  /* 1016ab87 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1016ab89 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016ab8a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1016ab8d:;
  /* 1016ab8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1016ab90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016ab92 jl 0x1016ad21 */
  if ((C.sf!=C.of)) goto L_1016ad21;
  /* 1016ab98 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ab9b je 0x1016ad21 */
  if (C.zf) goto L_1016ad21;
  /* 1016aba1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016aba4 jg 0x1016ad21 */
  if ((!C.zf&&C.sf==C.of)) goto L_1016ad21;
  /* 1016abaa push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1016abac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016abae pop ecx */
  ECX = (pop32());
  /* 1016abaf jne 0x1016abd5 */
  if (!C.zf) goto L_1016abd5;
  /* 1016abb1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016abb4 je 0x1016abbf */
  if (C.zf) goto L_1016abbf;
  /* 1016abb6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 1016abbd jmp 0x1016abf1 */
  goto L_1016abf1;
L_1016abbf:;
  /* 1016abbf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016abc1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016abc3 je 0x1016abd2 */
  if (C.zf) goto L_1016abd2;
  /* 1016abc5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016abc7 je 0x1016abd2 */
  if (C.zf) goto L_1016abd2;
  /* 1016abc9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 1016abd0 jmp 0x1016abf1 */
  goto L_1016abf1;
L_1016abd2:;
  /* 1016abd2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1016abd5:;
  /* 1016abd5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016abd8 jne 0x1016abf1 */
  if (!C.zf) goto L_1016abf1;
  /* 1016abda cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016abdd jne 0x1016abf1 */
  if (!C.zf) goto L_1016abf1;
  /* 1016abdf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016abe1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016abe3 je 0x1016abe9 */
  if (C.zf) goto L_1016abe9;
  /* 1016abe5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016abe7 jne 0x1016abf1 */
  if (!C.zf) goto L_1016abf1;
L_1016abe9:;
  /* 1016abe9 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 1016abec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016abed inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016abee mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1016abf1:;
  /* 1016abf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1016abf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1016abf6 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1016abf9 mov edi, 0x103 */
  EDI = (0x103u);
  /* 1016abfe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1016ac01:;
  /* 1016ac01 cmp dword ptr [0x10170c60], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10170c60))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ac08 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1016ac0b jle 0x1016ac19 */
  if ((C.zf||C.sf!=C.of)) goto L_1016ac19;
  /* 1016ac0d push 4 */
  push32((uint32_t)(0x4u));
  /* 1016ac0f push esi */
  push32((uint32_t)(ESI));
  /* 1016ac10 call 0x101693cb */
  push32(0x1016ac15u); f_101693cb();
  /* 1016ac15 pop ecx */
  ECX = (pop32());
  /* 1016ac16 pop ecx */
  ECX = (pop32());
  /* 1016ac17 jmp 0x1016ac24 */
  goto L_1016ac24;
L_1016ac19:;
  /* 1016ac19 mov eax, dword ptr [0x10170a50] */
  EAX = (r32((uint32_t)(0x10170a50)));
  /* 1016ac1e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 1016ac21 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1016ac24:;
  /* 1016ac24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016ac26 je 0x1016ac30 */
  if (C.zf) goto L_1016ac30;
  /* 1016ac28 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1016ac2b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016ac2e jmp 0x1016ac62 */
  goto L_1016ac62;
L_1016ac30:;
  /* 1016ac30 cmp dword ptr [0x10170c60], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10170c60))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ac37 jle 0x1016ac44 */
  if ((C.zf||C.sf!=C.of)) goto L_1016ac44;
  /* 1016ac39 push edi */
  push32((uint32_t)(EDI));
  /* 1016ac3a push esi */
  push32((uint32_t)(ESI));
  /* 1016ac3b call 0x101693cb */
  push32(0x1016ac40u); f_101693cb();
  /* 1016ac40 pop ecx */
  ECX = (pop32());
  /* 1016ac41 pop ecx */
  ECX = (pop32());
  /* 1016ac42 jmp 0x1016ac4f */
  goto L_1016ac4f;
L_1016ac44:;
  /* 1016ac44 mov eax, dword ptr [0x10170a50] */
  EAX = (r32((uint32_t)(0x10170a50)));
  /* 1016ac49 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 1016ac4d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_1016ac4f:;
  /* 1016ac4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016ac51 je 0x1016ac9d */
  if (C.zf) goto L_1016ac9d;
  /* 1016ac53 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1016ac56 push eax */
  push32((uint32_t)(EAX));
  /* 1016ac57 call 0x1016d108 */
  push32(0x1016ac5cu); f_1016d108();
  /* 1016ac5c pop ecx */
  ECX = (pop32());
  /* 1016ac5d mov ecx, eax */
  ECX = (EAX);
  /* 1016ac5f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_1016ac62:;
  /* 1016ac62 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ac65 jae 0x1016ac9d */
  if (!C.cf) goto L_1016ac9d;
  /* 1016ac67 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 1016ac6a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1016ac6e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ac71 jb 0x1016ac87 */
  if (C.cf) goto L_1016ac87;
  /* 1016ac73 jne 0x1016ac81 */
  if (!C.zf) goto L_1016ac81;
  /* 1016ac75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1016ac78 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1016ac7a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1016ac7d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ac7f jbe 0x1016ac87 */
  if ((C.cf||C.zf)) goto L_1016ac87;
L_1016ac81:;
  /* 1016ac81 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1016ac85 jmp 0x1016ac90 */
  goto L_1016ac90;
L_1016ac87:;
  /* 1016ac87 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1016ac8b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016ac8d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_1016ac90:;
  /* 1016ac90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016ac93 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1016ac96 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1016ac98 jmp 0x1016ac01 */
  goto L_1016ac01;
L_1016ac9d:;
  /* 1016ac9d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1016aca0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1016aca3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016aca6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1016aca8 jne 0x1016acba */
  if (!C.zf) goto L_1016acba;
  /* 1016acaa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1016acac je 0x1016acb4 */
  if (C.zf) goto L_1016acb4;
  /* 1016acae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016acb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1016acb4:;
  /* 1016acb4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1016acb8 jmp 0x1016ad05 */
  goto L_1016ad05;
L_1016acba:;
  /* 1016acba test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 1016acbc mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 1016acc1 jne 0x1016acde */
  if (!C.zf) goto L_1016acde;
  /* 1016acc3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1016acc5 jne 0x1016ad05 */
  if (!C.zf) goto L_1016ad05;
  /* 1016acc7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1016acca je 0x1016acd5 */
  if (C.zf) goto L_1016acd5;
  /* 1016accc cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016acd3 ja 0x1016acde */
  if ((!C.cf&&!C.zf)) goto L_1016acde;
L_1016acd5:;
  /* 1016acd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016acd7 jne 0x1016ad05 */
  if (!C.zf) goto L_1016ad05;
  /* 1016acd9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016acdc jbe 0x1016ad05 */
  if ((C.cf||C.zf)) goto L_1016ad05;
L_1016acde:;
  /* 1016acde call 0x1016bf71 */
  push32(0x1016ace3u); f_1016bf71();
  /* 1016ace3 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 1016ace7 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 1016aced je 0x1016acf5 */
  if (C.zf) goto L_1016acf5;
  /* 1016acef or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1016acf3 jmp 0x1016ad05 */
  goto L_1016ad05;
L_1016acf5:;
  /* 1016acf5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1016acf8 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1016acfa neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 1016acfc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016acfe neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1016ad00 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016ad02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1016ad05:;
  /* 1016ad05 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1016ad07 je 0x1016ad0e */
  if (C.zf) goto L_1016ad0e;
  /* 1016ad09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016ad0c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_1016ad0e:;
  /* 1016ad0e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 1016ad12 je 0x1016ad1c */
  if (C.zf) goto L_1016ad1c;
  /* 1016ad14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1016ad17 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1016ad19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1016ad1c:;
  /* 1016ad1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1016ad1f jmp 0x1016ad2c */
  goto L_1016ad2c;
L_1016ad21:;
  /* 1016ad21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016ad24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016ad26 je 0x1016ad2a */
  if (C.zf) goto L_1016ad2a;
  /* 1016ad28 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_1016ad2a:;
  /* 1016ad2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1016ad2c:;
  /* 1016ad2c pop edi */
  EDI = (pop32());
  /* 1016ad2d pop esi */
  ESI = (pop32());
  /* 1016ad2e pop ebx */
  EBX = (pop32());
  /* 1016ad2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016ad30 ret  */
  ESPCHK(0x1016ab2cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x1016ad50 (193 bytes, 90 insns) */
void f_1016ad50(void) {
  FTRACE(0x1016ad50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016ad50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016ad52 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1016ad56 push ebx */
  push32((uint32_t)(EBX));
  /* 1016ad57 mov ebx, eax */
  EBX = (EAX);
  /* 1016ad59 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1016ad5c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1016ad60 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1016ad66 je 0x1016ad7b */
  if (C.zf) goto L_1016ad7b;
L_1016ad68:;
  /* 1016ad68 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1016ad6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1016ad6b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ad6d je 0x1016ad40 */
  if (C.zf) { jmp_ind(0x1016ad40u); return; }
  /* 1016ad6f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 1016ad71 je 0x1016adc4 */
  if (C.zf) goto L_1016adc4;
  /* 1016ad73 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1016ad79 jne 0x1016ad68 */
  if (!C.zf) goto L_1016ad68;
L_1016ad7b:;
  /* 1016ad7b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1016ad7d push edi */
  push32((uint32_t)(EDI));
  /* 1016ad7e mov eax, ebx */
  EAX = (EBX);
  /* 1016ad80 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 1016ad83 push esi */
  push32((uint32_t)(ESI));
  /* 1016ad84 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_1016ad86:;
  /* 1016ad86 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1016ad88 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1016ad8d mov eax, ecx */
  EAX = (ECX);
  /* 1016ad8f mov esi, edi */
  ESI = (EDI);
  /* 1016ad91 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 1016ad93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016ad95 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016ad97 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1016ad9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1016ad9d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1016ad9f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1016ada1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016ada4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1016adaa jne 0x1016adc8 */
  if (!C.zf) goto L_1016adc8;
  /* 1016adac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1016adb1 je 0x1016ad86 */
  if (C.zf) goto L_1016ad86;
  /* 1016adb3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1016adb8 jne 0x1016adc2 */
  if (!C.zf) goto L_1016adc2;
  /* 1016adba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 1016adc0 jne 0x1016ad86 */
  if (!C.zf) goto L_1016ad86;
L_1016adc2:;
  /* 1016adc2 pop esi */
  ESI = (pop32());
  /* 1016adc3 pop edi */
  EDI = (pop32());
L_1016adc4:;
  /* 1016adc4 pop ebx */
  EBX = (pop32());
  /* 1016adc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016adc7 ret  */
  ESPCHK(0x1016ad50u, _esp0);
  ESP += 4; return;
L_1016adc8:;
  /* 1016adc8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1016adcb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016adcd je 0x1016ae05 */
  if (C.zf) goto L_1016ae05;
  /* 1016adcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016add1 je 0x1016adc2 */
  if (C.zf) goto L_1016adc2;
  /* 1016add3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016add5 je 0x1016adfe */
  if (C.zf) goto L_1016adfe;
  /* 1016add7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1016add9 je 0x1016adc2 */
  if (C.zf) goto L_1016adc2;
  /* 1016addb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1016adde cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ade0 je 0x1016adf7 */
  if (C.zf) goto L_1016adf7;
  /* 1016ade2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016ade4 je 0x1016adc2 */
  if (C.zf) goto L_1016adc2;
  /* 1016ade6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ade8 je 0x1016adf0 */
  if (C.zf) goto L_1016adf0;
  /* 1016adea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1016adec je 0x1016adc2 */
  if (C.zf) goto L_1016adc2;
  /* 1016adee jmp 0x1016ad86 */
  goto L_1016ad86;
L_1016adf0:;
  /* 1016adf0 pop esi */
  ESI = (pop32());
  /* 1016adf1 pop edi */
  EDI = (pop32());
  /* 1016adf2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 1016adf5 pop ebx */
  EBX = (pop32());
  /* 1016adf6 ret  */
  ESPCHK(0x1016ad50u, _esp0);
  ESP += 4; return;
L_1016adf7:;
  /* 1016adf7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1016adfa pop esi */
  ESI = (pop32());
  /* 1016adfb pop edi */
  EDI = (pop32());
  /* 1016adfc pop ebx */
  EBX = (pop32());
  /* 1016adfd ret  */
  ESPCHK(0x1016ad50u, _esp0);
  ESP += 4; return;
L_1016adfe:;
  /* 1016adfe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 1016ae01 pop esi */
  ESI = (pop32());
  /* 1016ae02 pop edi */
  EDI = (pop32());
  /* 1016ae03 pop ebx */
  EBX = (pop32());
  /* 1016ae04 ret  */
  ESPCHK(0x1016ad50u, _esp0);
  ESP += 4; return;
L_1016ae05:;
  /* 1016ae05 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 1016ae08 pop esi */
  ESI = (pop32());
  /* 1016ae09 pop edi */
  EDI = (pop32());
  /* 1016ae0a pop ebx */
  EBX = (pop32());
  /* 1016ae0b ret  */
  ESPCHK(0x1016ad50u, _esp0);
  ESP += 4; return;
  /* 1016ae0c int3  */
  x86_unimpl("int3 @ 0x1016ae0c");
  /* 1016ae0d int3  */
  x86_unimpl("int3 @ 0x1016ae0d");
  /* 1016ae0e int3  */
  x86_unimpl("int3 @ 0x1016ae0e");
  /* 1016ae0f int3  */
  x86_unimpl("int3 @ 0x1016ae0f");
}

/* _strstr @ 0x1016ae10 (128 bytes, 66 insns) */
void f_1016ae10(void) {
  FTRACE(0x1016ae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016ae10 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1016ae14 push edi */
  push32((uint32_t)(EDI));
  /* 1016ae15 push ebx */
  push32((uint32_t)(EBX));
  /* 1016ae16 push esi */
  push32((uint32_t)(ESI));
  /* 1016ae17 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1016ae19 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1016ae1d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1016ae1f je 0x1016ae8a */
  if (C.zf) goto L_1016ae8a;
  /* 1016ae21 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 1016ae24 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1016ae26 je 0x1016ae77 */
  if (C.zf) goto L_1016ae77;
L_1016ae28:;
  /* 1016ae28 mov esi, edi */
  ESI = (EDI);
  /* 1016ae2a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1016ae2e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1016ae30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016ae31 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ae33 je 0x1016ae4a */
  if (C.zf) goto L_1016ae4a;
  /* 1016ae35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016ae37 je 0x1016ae44 */
  if (C.zf) goto L_1016ae44;
L_1016ae39:;
  /* 1016ae39 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016ae3b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1016ae3c:;
  /* 1016ae3c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ae3e je 0x1016ae4a */
  if (C.zf) goto L_1016ae4a;
  /* 1016ae40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016ae42 jne 0x1016ae39 */
  if (!C.zf) goto L_1016ae39;
L_1016ae44:;
  /* 1016ae44 pop esi */
  ESI = (pop32());
  /* 1016ae45 pop ebx */
  EBX = (pop32());
  /* 1016ae46 pop edi */
  EDI = (pop32());
  /* 1016ae47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016ae49 ret  */
  ESPCHK(0x1016ae10u, _esp0);
  ESP += 4; return;
L_1016ae4a:;
  /* 1016ae4a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016ae4c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016ae4d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ae4f jne 0x1016ae3c */
  if (!C.zf) goto L_1016ae3c;
  /* 1016ae51 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_1016ae54:;
  /* 1016ae54 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 1016ae57 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1016ae59 je 0x1016ae83 */
  if (C.zf) goto L_1016ae83;
  /* 1016ae5b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016ae5d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016ae60 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ae62 jne 0x1016ae28 */
  if (!C.zf) goto L_1016ae28;
  /* 1016ae64 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 1016ae67 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016ae69 je 0x1016ae83 */
  if (C.zf) goto L_1016ae83;
  /* 1016ae6b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 1016ae6e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016ae71 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ae73 je 0x1016ae54 */
  if (C.zf) goto L_1016ae54;
  /* 1016ae75 jmp 0x1016ae28 */
  goto L_1016ae28;
L_1016ae77:;
  /* 1016ae77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016ae79 pop esi */
  ESI = (pop32());
  /* 1016ae7a pop ebx */
  EBX = (pop32());
  /* 1016ae7b pop edi */
  EDI = (pop32());
  /* 1016ae7c mov al, dl */
  AL = (DL);
  /* 1016ae7e jmp 0x1016ad56 */
  jmp_ind(0x1016ad56u); return;
L_1016ae83:;
  /* 1016ae83 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 1016ae86 pop esi */
  ESI = (pop32());
  /* 1016ae87 pop ebx */
  EBX = (pop32());
  /* 1016ae88 pop edi */
  EDI = (pop32());
  /* 1016ae89 ret  */
  ESPCHK(0x1016ae10u, _esp0);
  ESP += 4; return;
L_1016ae8a:;
  /* 1016ae8a mov eax, edi */
  EAX = (EDI);
  /* 1016ae8c pop esi */
  ESI = (pop32());
  /* 1016ae8d pop ebx */
  EBX = (pop32());
  /* 1016ae8e pop edi */
  EDI = (pop32());
  /* 1016ae8f ret  */
  ESPCHK(0x1016ae10u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1016ae90 (56 bytes, 31 insns) */
void f_1016ae90(void) {
  FTRACE(0x1016ae90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016ae90 push ebp */
  push32((uint32_t)(EBP));
  /* 1016ae91 mov ebp, esp */
  EBP = (ESP);
  /* 1016ae93 push edi */
  push32((uint32_t)(EDI));
  /* 1016ae94 push esi */
  push32((uint32_t)(ESI));
  /* 1016ae95 push ebx */
  push32((uint32_t)(EBX));
  /* 1016ae96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1016ae99 jecxz 0x1016aec1 */
  x86_unimpl("jecxz @ 0x1016ae99");
  /* 1016ae9b mov ebx, ecx */
  EBX = (ECX);
  /* 1016ae9d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1016aea0 mov esi, edi */
  ESI = (EDI);
  /* 1016aea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016aea4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1016aea6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1016aea8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016aeaa mov edi, esi */
  EDI = (ESI);
  /* 1016aeac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1016aeaf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1016aeb1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1016aeb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1016aeb6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016aeb9 ja 0x1016aebf */
  if ((!C.cf&&!C.zf)) goto L_1016aebf;
  /* 1016aebb je 0x1016aec1 */
  if (C.zf) goto L_1016aec1;
  /* 1016aebd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1016aebe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1016aebf:;
  /* 1016aebf not ecx */
  ECX = (~(ECX));
L_1016aec1:;
  /* 1016aec1 mov eax, ecx */
  EAX = (ECX);
  /* 1016aec3 pop ebx */
  EBX = (pop32());
  /* 1016aec4 pop esi */
  ESI = (pop32());
  /* 1016aec5 pop edi */
  EDI = (pop32());
  /* 1016aec6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016aec7 ret  */
  ESPCHK(0x1016ae90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aed0 @ 0x1016aed0 (47 bytes, 17 insns) */
void f_1016aed0(void) {
  FTRACE(0x1016aed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016aed0 push ecx */
  push32((uint32_t)(ECX));
  /* 1016aed1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016aed6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1016aeda jb 0x1016aef0 */
  if (C.cf) goto L_1016aef0;
L_1016aedc:;
  /* 1016aedc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016aee2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016aee7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1016aee9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016aeee jae 0x1016aedc */
  if (!C.cf) goto L_1016aedc;
L_1016aef0:;
  /* 1016aef0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016aef2 mov eax, esp */
  EAX = (ESP);
  /* 1016aef4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1016aef6 mov esp, ecx */
  ESP = (ECX);
  /* 1016aef8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1016aefa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1016aefd push eax */
  push32((uint32_t)(EAX));
  /* 1016aefe ret  */
  ESPCHK(0x1016aed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aeff @ 0x1016aeff (72 bytes, 17 insns) */
void f_1016aeff(void) {
  FTRACE(0x1016aeffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016aeff push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1016af04 push 0 */
  push32((uint32_t)(0x0u));
  /* 1016af06 push dword ptr [0x10177ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10177ca4))));
  /* 1016af0c call dword ptr [0x1016e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e098))), 0x1016af12u);
  /* 1016af12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016af14 mov dword ptr [0x10176a4c], eax */
  w32((uint32_t)(0x10176a4c), (EAX));
  /* 1016af19 jne 0x1016af1c */
  if (!C.zf) goto L_1016af1c;
  /* 1016af1b ret  */
  ESPCHK(0x1016aeffu, _esp0);
  ESP += 4; return;
L_1016af1c:;
  /* 1016af1c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016af20 and dword ptr [0x10176a44], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10176a44)))&(0x0u); w32((uint32_t)(0x10176a44), (_r)); fl_logic(_r,32); }
  /* 1016af27 and dword ptr [0x10176a48], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10176a48)))&(0x0u); w32((uint32_t)(0x10176a48), (_r)); fl_logic(_r,32); }
  /* 1016af2e push 1 */
  push32((uint32_t)(0x1u));
  /* 1016af30 mov dword ptr [0x10176a40], eax */
  w32((uint32_t)(0x10176a40), (EAX));
  /* 1016af35 mov dword ptr [0x10176a50], ecx */
  w32((uint32_t)(0x10176a50), (ECX));
  /* 1016af3b mov dword ptr [0x10176a38], 0x10 */
  w32((uint32_t)(0x10176a38), (0x10u));
  /* 1016af45 pop eax */
  EAX = (pop32());
  /* 1016af46 ret  */
  ESPCHK(0x1016aeffu, _esp0);
  ESP += 4; return;
}

/* FUN_1000af47 @ 0x1016af47 (43 bytes, 14 insns) */
void f_1016af47(void) {
  FTRACE(0x1016af47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016af47 mov eax, dword ptr [0x10176a48] */
  EAX = (r32((uint32_t)(0x10176a48)));
  /* 1016af4c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1016af4f mov eax, dword ptr [0x10176a4c] */
  EAX = (r32((uint32_t)(0x10176a4c)));
  /* 1016af54 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_1016af57:;
  /* 1016af57 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016af59 jae 0x1016af6f */
  if (!C.cf) goto L_1016af6f;
  /* 1016af5b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016af5f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016af62 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016af68 jb 0x1016af71 */
  if (C.cf) goto L_1016af71;
  /* 1016af6a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016af6d jmp 0x1016af57 */
  goto L_1016af57;
L_1016af6f:;
  /* 1016af6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1016af71:;
  /* 1016af71 ret  */
  ESPCHK(0x1016af47u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af72 @ 0x1016af72 (809 bytes, 265 insns) */
void f_1016af72(void) {
  FTRACE(0x1016af72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016af72 push ebp */
  push32((uint32_t)(EBP));
  /* 1016af73 mov ebp, esp */
  EBP = (ESP);
  /* 1016af75 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016af78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016af7b push ebx */
  push32((uint32_t)(EBX));
  /* 1016af7c push esi */
  push32((uint32_t)(ESI));
  /* 1016af7d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1016af80 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1016af83 push edi */
  push32((uint32_t)(EDI));
  /* 1016af84 mov edi, esi */
  EDI = (ESI);
  /* 1016af86 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016af89 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016af8c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1016af8f mov ecx, edi */
  ECX = (EDI);
  /* 1016af91 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1016af97 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1016af9e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1016afa1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1016afa3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1016afa4 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 1016afa7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1016afaa jne 0x1016b296 */
  if (!C.zf) goto L_1016b296;
  /* 1016afb0 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 1016afb3 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 1016afb6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1016afb9 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 1016afbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1016afbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1016afc2 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1016afc5 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 1016afc8 jne 0x1016b048 */
  if (!C.zf) goto L_1016b048;
  /* 1016afca sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1016afcd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1016afce cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016afd1 jbe 0x1016afd6 */
  if ((C.cf||C.zf)) goto L_1016afd6;
  /* 1016afd3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1016afd5 pop edx */
  EDX = (pop32());
L_1016afd6:;
  /* 1016afd6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1016afd9 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016afdc jne 0x1016b02a */
  if (!C.zf) goto L_1016b02a;
  /* 1016afde cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016afe1 jae 0x1016b001 */
  if (!C.cf) goto L_1016b001;
  /* 1016afe3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1016afe8 mov ecx, edx */
  ECX = (EDX);
  /* 1016afea shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1016afec lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1016aff0 not ebx */
  EBX = (~(EBX));
  /* 1016aff2 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1016aff6 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1016aff8 jne 0x1016b022 */
  if (!C.zf) goto L_1016b022;
  /* 1016affa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016affd and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1016afff jmp 0x1016b022 */
  goto L_1016b022;
L_1016b001:;
  /* 1016b001 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1016b004 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1016b009 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1016b00b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1016b00f not ebx */
  EBX = (~(EBX));
  /* 1016b011 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1016b018 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1016b01a jne 0x1016b022 */
  if (!C.zf) goto L_1016b022;
  /* 1016b01c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016b01f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1016b022:;
  /* 1016b022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016b025 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016b028 jmp 0x1016b02d */
  goto L_1016b02d;
L_1016b02a:;
  /* 1016b02a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_1016b02d:;
  /* 1016b02d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 1016b030 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 1016b033 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b036 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 1016b039 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016b03c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1016b03f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 1016b042 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 1016b045 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_1016b048:;
  /* 1016b048 mov edx, ecx */
  EDX = (ECX);
  /* 1016b04a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1016b04d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1016b04e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b051 jbe 0x1016b056 */
  if ((C.cf||C.zf)) goto L_1016b056;
  /* 1016b053 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1016b055 pop edx */
  EDX = (pop32());
L_1016b056:;
  /* 1016b056 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1016b059 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 1016b05c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 1016b05f jne 0x1016b0f9 */
  if (!C.zf) goto L_1016b0f9;
  /* 1016b065 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016b068 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1016b06b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 1016b06e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1016b070 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1016b073 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1016b074 pop esi */
  ESI = (pop32());
  /* 1016b075 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b077 jbe 0x1016b07b */
  if ((C.cf||C.zf)) goto L_1016b07b;
  /* 1016b079 mov ebx, esi */
  EBX = (ESI);
L_1016b07b:;
  /* 1016b07b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b07e mov edx, ecx */
  EDX = (ECX);
  /* 1016b080 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1016b083 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1016b086 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1016b087 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b089 jbe 0x1016b08d */
  if ((C.cf||C.zf)) goto L_1016b08d;
  /* 1016b08b mov edx, esi */
  EDX = (ESI);
L_1016b08d:;
  /* 1016b08d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b08f je 0x1016b0f4 */
  if (C.zf) goto L_1016b0f4;
  /* 1016b091 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016b094 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1016b097 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b09a jne 0x1016b0dc */
  if (!C.zf) goto L_1016b0dc;
  /* 1016b09c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b09f jae 0x1016b0bd */
  if (!C.cf) goto L_1016b0bd;
  /* 1016b0a1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1016b0a6 mov ecx, ebx */
  ECX = (EBX);
  /* 1016b0a8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1016b0aa not esi */
  ESI = (~(ESI));
  /* 1016b0ac and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1016b0b0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1016b0b4 jne 0x1016b0dc */
  if (!C.zf) goto L_1016b0dc;
  /* 1016b0b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016b0b9 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1016b0bb jmp 0x1016b0dc */
  goto L_1016b0dc;
L_1016b0bd:;
  /* 1016b0bd lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 1016b0c0 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1016b0c5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1016b0c7 not esi */
  ESI = (~(ESI));
  /* 1016b0c9 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1016b0d0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1016b0d4 jne 0x1016b0dc */
  if (!C.zf) goto L_1016b0dc;
  /* 1016b0d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016b0d9 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1016b0dc:;
  /* 1016b0dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016b0df mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 1016b0e2 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1016b0e5 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 1016b0e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016b0eb mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1016b0ee mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1016b0f1 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_1016b0f4:;
  /* 1016b0f4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1016b0f7 jmp 0x1016b0fc */
  goto L_1016b0fc;
L_1016b0f9:;
  /* 1016b0f9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1016b0fc:;
  /* 1016b0fc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b100 jne 0x1016b10a */
  if (!C.zf) goto L_1016b10a;
  /* 1016b102 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b104 je 0x1016b18b */
  if (C.zf) goto L_1016b18b;
L_1016b10a:;
  /* 1016b10a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1016b10d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1016b111 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 1016b114 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 1016b117 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 1016b11a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1016b11d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1016b120 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 1016b123 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1016b126 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b129 jne 0x1016b18b */
  if (!C.zf) goto L_1016b18b;
  /* 1016b12b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 1016b12f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b132 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 1016b135 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1016b137 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 1016b13b jae 0x1016b162 */
  if (!C.cf) goto L_1016b162;
  /* 1016b13d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016b141 jne 0x1016b151 */
  if (!C.zf) goto L_1016b151;
  /* 1016b143 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1016b148 mov ecx, edx */
  ECX = (EDX);
  /* 1016b14a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1016b14c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016b14f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1016b151:;
  /* 1016b151 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1016b156 mov ecx, edx */
  ECX = (EDX);
  /* 1016b158 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1016b15a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 1016b15e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1016b160 jmp 0x1016b18b */
  goto L_1016b18b;
L_1016b162:;
  /* 1016b162 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016b166 jne 0x1016b178 */
  if (!C.zf) goto L_1016b178;
  /* 1016b168 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1016b16b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1016b170 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1016b172 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016b175 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1016b178:;
  /* 1016b178 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1016b17b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1016b180 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1016b182 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 1016b189 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_1016b18b:;
  /* 1016b18b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016b18e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1016b190 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 1016b194 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1016b197 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 1016b199 jne 0x1016b296 */
  if (!C.zf) goto L_1016b296;
  /* 1016b19f mov eax, dword ptr [0x10176a44] */
  EAX = (r32((uint32_t)(0x10176a44)));
  /* 1016b1a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016b1a6 je 0x1016b288 */
  if (C.zf) goto L_1016b288;
  /* 1016b1ac mov ecx, dword ptr [0x10176a3c] */
  ECX = (r32((uint32_t)(0x10176a3c)));
  /* 1016b1b2 mov esi, dword ptr [0x1016e07c] */
  ESI = (r32((uint32_t)(0x1016e07c)));
  /* 1016b1b8 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1016b1bb add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b1be mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1016b1c3 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1016b1c8 push ebx */
  push32((uint32_t)(EBX));
  /* 1016b1c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1016b1ca call esi */
  call_ind((uint32_t)(ESI), 0x1016b1ccu);
  /* 1016b1cc mov ecx, dword ptr [0x10176a3c] */
  ECX = (r32((uint32_t)(0x10176a3c)));
  /* 1016b1d2 mov eax, dword ptr [0x10176a44] */
  EAX = (r32((uint32_t)(0x10176a44)));
  /* 1016b1d7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1016b1dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1016b1de or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1016b1e1 mov eax, dword ptr [0x10176a44] */
  EAX = (r32((uint32_t)(0x10176a44)));
  /* 1016b1e6 mov ecx, dword ptr [0x10176a3c] */
  ECX = (r32((uint32_t)(0x10176a3c)));
  /* 1016b1ec mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1016b1ef and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1016b1f7 mov eax, dword ptr [0x10176a44] */
  EAX = (r32((uint32_t)(0x10176a44)));
  /* 1016b1fc mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1016b1ff dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1016b202 mov eax, dword ptr [0x10176a44] */
  EAX = (r32((uint32_t)(0x10176a44)));
  /* 1016b207 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1016b20a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016b20e jne 0x1016b219 */
  if (!C.zf) goto L_1016b219;
  /* 1016b210 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1016b214 mov eax, dword ptr [0x10176a44] */
  EAX = (r32((uint32_t)(0x10176a44)));
L_1016b219:;
  /* 1016b219 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b21d jne 0x1016b288 */
  if (!C.zf) goto L_1016b288;
  /* 1016b21f push ebx */
  push32((uint32_t)(EBX));
  /* 1016b220 push 0 */
  push32((uint32_t)(0x0u));
  /* 1016b222 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 1016b225 call esi */
  call_ind((uint32_t)(ESI), 0x1016b227u);
  /* 1016b227 mov eax, dword ptr [0x10176a44] */
  EAX = (r32((uint32_t)(0x10176a44)));
  /* 1016b22c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1016b22f push 0 */
  push32((uint32_t)(0x0u));
  /* 1016b231 push dword ptr [0x10177ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10177ca4))));
  /* 1016b237 call dword ptr [0x1016e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e080))), 0x1016b23du);
  /* 1016b23d mov eax, dword ptr [0x10176a48] */
  EAX = (r32((uint32_t)(0x10176a48)));
  /* 1016b242 mov edx, dword ptr [0x10176a4c] */
  EDX = (r32((uint32_t)(0x10176a4c)));
  /* 1016b248 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1016b24b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1016b24e mov ecx, eax */
  ECX = (EAX);
  /* 1016b250 mov eax, dword ptr [0x10176a44] */
  EAX = (r32((uint32_t)(0x10176a44)));
  /* 1016b255 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016b257 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 1016b25b push ecx */
  push32((uint32_t)(ECX));
  /* 1016b25c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1016b25f push ecx */
  push32((uint32_t)(ECX));
  /* 1016b260 push eax */
  push32((uint32_t)(EAX));
  /* 1016b261 call 0x10169c40 */
  push32(0x1016b266u); f_10169c40();
  /* 1016b266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016b269 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b26c dec dword ptr [0x10176a48] */
  { uint32_t _r=(r32((uint32_t)(0x10176a48)))-1; w32((uint32_t)(0x10176a48), (_r)); fl_dec(_r,32); }
  /* 1016b272 cmp eax, dword ptr [0x10176a44] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10176a44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b278 jbe 0x1016b27e */
  if ((C.cf||C.zf)) goto L_1016b27e;
  /* 1016b27a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_1016b27e:;
  /* 1016b27e mov eax, dword ptr [0x10176a4c] */
  EAX = (r32((uint32_t)(0x10176a4c)));
  /* 1016b283 mov dword ptr [0x10176a40], eax */
  w32((uint32_t)(0x10176a40), (EAX));
L_1016b288:;
  /* 1016b288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016b28b mov dword ptr [0x10176a3c], edi */
  w32((uint32_t)(0x10176a3c), (EDI));
  /* 1016b291 mov dword ptr [0x10176a44], eax */
  w32((uint32_t)(0x10176a44), (EAX));
L_1016b296:;
  /* 1016b296 pop edi */
  EDI = (pop32());
  /* 1016b297 pop esi */
  ESI = (pop32());
  /* 1016b298 pop ebx */
  EBX = (pop32());
  /* 1016b299 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016b29a ret  */
  ESPCHK(0x1016af72u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b29b @ 0x1016b29b (777 bytes, 275 insns) */
void f_1016b29b(void) {
  FTRACE(0x1016b29bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016b29b push ebp */
  push32((uint32_t)(EBP));
  /* 1016b29c mov ebp, esp */
  EBP = (ESP);
  /* 1016b29e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016b2a1 mov eax, dword ptr [0x10176a48] */
  EAX = (r32((uint32_t)(0x10176a48)));
  /* 1016b2a6 mov edx, dword ptr [0x10176a4c] */
  EDX = (r32((uint32_t)(0x10176a4c)));
  /* 1016b2ac push ebx */
  push32((uint32_t)(EBX));
  /* 1016b2ad push esi */
  push32((uint32_t)(ESI));
  /* 1016b2ae lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1016b2b1 push edi */
  push32((uint32_t)(EDI));
  /* 1016b2b2 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 1016b2b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016b2b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1016b2bb lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1016b2be and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1016b2c1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1016b2c4 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1016b2c7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1016b2c8 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b2cb jge 0x1016b2db */
  if ((C.sf==C.of)) goto L_1016b2db;
  /* 1016b2cd or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1016b2d0 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1016b2d2 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1016b2d6 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1016b2d9 jmp 0x1016b2eb */
  goto L_1016b2eb;
L_1016b2db:;
  /* 1016b2db add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b2de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1016b2e1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1016b2e3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1016b2e5 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1016b2e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1016b2eb:;
  /* 1016b2eb mov eax, dword ptr [0x10176a40] */
  EAX = (r32((uint32_t)(0x10176a40)));
  /* 1016b2f0 mov ebx, eax */
  EBX = (EAX);
  /* 1016b2f2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b2f4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1016b2f7 jae 0x1016b312 */
  if (!C.cf) goto L_1016b312;
L_1016b2f9:;
  /* 1016b2f9 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1016b2fc mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1016b2fe and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1016b301 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1016b303 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1016b305 jne 0x1016b312 */
  if (!C.zf) goto L_1016b312;
  /* 1016b307 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b30a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b30d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1016b310 jb 0x1016b2f9 */
  if (C.cf) goto L_1016b2f9;
L_1016b312:;
  /* 1016b312 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b315 jne 0x1016b390 */
  if (!C.zf) goto L_1016b390;
  /* 1016b317 mov ebx, edx */
  EBX = (EDX);
L_1016b319:;
  /* 1016b319 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b31b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1016b31e jae 0x1016b335 */
  if (!C.cf) goto L_1016b335;
  /* 1016b320 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1016b323 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1016b325 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1016b328 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1016b32a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1016b32c jne 0x1016b333 */
  if (!C.zf) goto L_1016b333;
  /* 1016b32e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b331 jmp 0x1016b319 */
  goto L_1016b319;
L_1016b333:;
  /* 1016b333 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1016b335:;
  /* 1016b335 jne 0x1016b390 */
  if (!C.zf) goto L_1016b390;
L_1016b337:;
  /* 1016b337 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b33a jae 0x1016b34d */
  if (!C.cf) goto L_1016b34d;
  /* 1016b33c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b340 jne 0x1016b34a */
  if (!C.zf) goto L_1016b34a;
  /* 1016b342 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b345 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1016b348 jmp 0x1016b337 */
  goto L_1016b337;
L_1016b34a:;
  /* 1016b34a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1016b34d:;
  /* 1016b34d jne 0x1016b375 */
  if (!C.zf) goto L_1016b375;
  /* 1016b34f mov ebx, edx */
  EBX = (EDX);
L_1016b351:;
  /* 1016b351 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b353 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1016b356 jae 0x1016b365 */
  if (!C.cf) goto L_1016b365;
  /* 1016b358 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b35c jne 0x1016b363 */
  if (!C.zf) goto L_1016b363;
  /* 1016b35e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b361 jmp 0x1016b351 */
  goto L_1016b351;
L_1016b363:;
  /* 1016b363 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1016b365:;
  /* 1016b365 jne 0x1016b375 */
  if (!C.zf) goto L_1016b375;
  /* 1016b367 call 0x1016b5a4 */
  push32(0x1016b36cu); f_1016b5a4();
  /* 1016b36c mov ebx, eax */
  EBX = (EAX);
  /* 1016b36e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1016b370 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1016b373 je 0x1016b389 */
  if (C.zf) goto L_1016b389;
L_1016b375:;
  /* 1016b375 push ebx */
  push32((uint32_t)(EBX));
  /* 1016b376 call 0x1016b655 */
  push32(0x1016b37bu); f_1016b655();
  /* 1016b37b pop ecx */
  ECX = (pop32());
  /* 1016b37c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1016b37f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1016b381 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1016b384 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b387 jne 0x1016b390 */
  if (!C.zf) goto L_1016b390;
L_1016b389:;
  /* 1016b389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016b38b jmp 0x1016b59f */
  goto L_1016b59f;
L_1016b390:;
  /* 1016b390 mov dword ptr [0x10176a40], ebx */
  w32((uint32_t)(0x10176a40), (EBX));
  /* 1016b396 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1016b399 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1016b39b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b39e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1016b3a1 je 0x1016b3b7 */
  if (C.zf) goto L_1016b3b7;
  /* 1016b3a3 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1016b3aa mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1016b3ae and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1016b3b1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1016b3b3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1016b3b5 jne 0x1016b3ee */
  if (!C.zf) goto L_1016b3ee;
L_1016b3b7:;
  /* 1016b3b7 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1016b3bd mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1016b3c0 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1016b3c3 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 1016b3c6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016b3ca lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1016b3cd or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1016b3cf mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1016b3d2 jne 0x1016b3eb */
  if (!C.zf) goto L_1016b3eb;
L_1016b3d4:;
  /* 1016b3d4 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 1016b3da inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1016b3dd and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1016b3e0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b3e3 mov edi, esi */
  EDI = (ESI);
  /* 1016b3e5 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 1016b3e7 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 1016b3e9 je 0x1016b3d4 */
  if (C.zf) goto L_1016b3d4;
L_1016b3eb:;
  /* 1016b3eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1016b3ee:;
  /* 1016b3ee mov ecx, edx */
  ECX = (EDX);
  /* 1016b3f0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1016b3f2 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1016b3f8 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1016b3ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1016b402 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1016b406 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1016b408 jne 0x1016b417 */
  if (!C.zf) goto L_1016b417;
  /* 1016b40a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1016b411 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1016b413 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1016b416 pop edi */
  EDI = (pop32());
L_1016b417:;
  /* 1016b417 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1016b419 jl 0x1016b420 */
  if ((C.sf!=C.of)) goto L_1016b420;
  /* 1016b41b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1016b41d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016b41e jmp 0x1016b417 */
  goto L_1016b417;
L_1016b420:;
  /* 1016b420 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1016b423 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 1016b427 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1016b429 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016b42c mov esi, ecx */
  ESI = (ECX);
  /* 1016b42e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1016b431 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1016b434 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1016b435 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b438 jle 0x1016b43d */
  if ((C.zf||C.sf!=C.of)) goto L_1016b43d;
  /* 1016b43a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1016b43c pop esi */
  ESI = (pop32());
L_1016b43d:;
  /* 1016b43d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b43f je 0x1016b552 */
  if (C.zf) goto L_1016b552;
  /* 1016b445 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1016b448 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b44b jne 0x1016b4ae */
  if (!C.zf) goto L_1016b4ae;
  /* 1016b44d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b450 jge 0x1016b47d */
  if ((C.sf==C.of)) goto L_1016b47d;
  /* 1016b452 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1016b457 mov ecx, edi */
  ECX = (EDI);
  /* 1016b459 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1016b45b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016b45e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1016b462 not ebx */
  EBX = (~(EBX));
  /* 1016b464 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1016b467 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 1016b46b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1016b46f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1016b471 jne 0x1016b4ab */
  if (!C.zf) goto L_1016b4ab;
  /* 1016b473 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016b476 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1016b479 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 1016b47b jmp 0x1016b4ae */
  goto L_1016b4ae;
L_1016b47d:;
  /* 1016b47d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1016b480 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1016b485 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1016b487 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016b48a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1016b48e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1016b495 not ebx */
  EBX = (~(EBX));
  /* 1016b497 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1016b499 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1016b49b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1016b49e jne 0x1016b4ab */
  if (!C.zf) goto L_1016b4ab;
  /* 1016b4a0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016b4a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1016b4a6 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1016b4a9 jmp 0x1016b4ae */
  goto L_1016b4ae;
L_1016b4ab:;
  /* 1016b4ab mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1016b4ae:;
  /* 1016b4ae mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1016b4b1 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 1016b4b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b4b8 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 1016b4bb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1016b4be mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1016b4c1 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 1016b4c4 je 0x1016b55e */
  if (C.zf) goto L_1016b55e;
  /* 1016b4ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1016b4cd mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1016b4d1 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 1016b4d4 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 1016b4d7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1016b4da mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1016b4dd mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1016b4e0 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1016b4e3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1016b4e6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b4e9 jne 0x1016b54f */
  if (!C.zf) goto L_1016b54f;
  /* 1016b4eb mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1016b4ef cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b4f2 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 1016b4f5 jge 0x1016b520 */
  if ((C.sf==C.of)) goto L_1016b520;
  /* 1016b4f7 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1016b4f9 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016b4fd mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1016b501 jne 0x1016b50e */
  if (!C.zf) goto L_1016b50e;
  /* 1016b503 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1016b508 mov ecx, esi */
  ECX = (ESI);
  /* 1016b50a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1016b50c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1016b50e:;
  /* 1016b50e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1016b513 mov ecx, esi */
  ECX = (ESI);
  /* 1016b515 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1016b517 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016b51a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1016b51e jmp 0x1016b54f */
  goto L_1016b54f;
L_1016b520:;
  /* 1016b520 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1016b522 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016b526 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1016b52a jne 0x1016b539 */
  if (!C.zf) goto L_1016b539;
  /* 1016b52c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1016b52f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1016b534 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1016b536 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_1016b539:;
  /* 1016b539 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016b53c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1016b543 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1016b546 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1016b54b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1016b54d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1016b54f:;
  /* 1016b54f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1016b552:;
  /* 1016b552 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1016b554 je 0x1016b561 */
  if (C.zf) goto L_1016b561;
  /* 1016b556 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1016b558 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1016b55c jmp 0x1016b561 */
  goto L_1016b561;
L_1016b55e:;
  /* 1016b55e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1016b561:;
  /* 1016b561 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1016b564 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b566 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 1016b569 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1016b56b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1016b56f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1016b572 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1016b574 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1016b576 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 1016b579 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1016b57b jne 0x1016b597 */
  if (!C.zf) goto L_1016b597;
  /* 1016b57d cmp ebx, dword ptr [0x10176a44] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10176a44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b583 jne 0x1016b597 */
  if (!C.zf) goto L_1016b597;
  /* 1016b585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016b588 cmp ecx, dword ptr [0x10176a3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10176a3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b58e jne 0x1016b597 */
  if (!C.zf) goto L_1016b597;
  /* 1016b590 and dword ptr [0x10176a44], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10176a44)))&(0x0u); w32((uint32_t)(0x10176a44), (_r)); fl_logic(_r,32); }
L_1016b597:;
  /* 1016b597 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016b59a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1016b59c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1016b59f:;
  /* 1016b59f pop edi */
  EDI = (pop32());
  /* 1016b5a0 pop esi */
  ESI = (pop32());
  /* 1016b5a1 pop ebx */
  EBX = (pop32());
  /* 1016b5a2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016b5a3 ret  */
  ESPCHK(0x1016b29bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5a4 @ 0x1016b5a4 (177 bytes, 53 insns) */
void f_1016b5a4(void) {
  FTRACE(0x1016b5a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016b5a4 mov eax, dword ptr [0x10176a48] */
  EAX = (r32((uint32_t)(0x10176a48)));
  /* 1016b5a9 mov ecx, dword ptr [0x10176a38] */
  ECX = (r32((uint32_t)(0x10176a38)));
  /* 1016b5af push esi */
  push32((uint32_t)(ESI));
  /* 1016b5b0 push edi */
  push32((uint32_t)(EDI));
  /* 1016b5b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1016b5b3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b5b5 jne 0x1016b5e7 */
  if (!C.zf) goto L_1016b5e7;
  /* 1016b5b7 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 1016b5bb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1016b5be push eax */
  push32((uint32_t)(EAX));
  /* 1016b5bf push dword ptr [0x10176a4c] */
  push32((uint32_t)(r32((uint32_t)(0x10176a4c))));
  /* 1016b5c5 push edi */
  push32((uint32_t)(EDI));
  /* 1016b5c6 push dword ptr [0x10177ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10177ca4))));
  /* 1016b5cc call dword ptr [0x1016e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0ac))), 0x1016b5d2u);
  /* 1016b5d2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b5d4 je 0x1016b637 */
  if (C.zf) goto L_1016b637;
  /* 1016b5d6 add dword ptr [0x10176a38], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10176a38))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10176a38), (_r)); fl_add(_a,_b,_r,32); }
  /* 1016b5dd mov dword ptr [0x10176a4c], eax */
  w32((uint32_t)(0x10176a4c), (EAX));
  /* 1016b5e2 mov eax, dword ptr [0x10176a48] */
  EAX = (r32((uint32_t)(0x10176a48)));
L_1016b5e7:;
  /* 1016b5e7 mov ecx, dword ptr [0x10176a4c] */
  ECX = (r32((uint32_t)(0x10176a4c)));
  /* 1016b5ed push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1016b5f2 push 8 */
  push32((uint32_t)(0x8u));
  /* 1016b5f4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1016b5f7 push dword ptr [0x10177ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10177ca4))));
  /* 1016b5fd lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1016b600 call dword ptr [0x1016e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e098))), 0x1016b606u);
  /* 1016b606 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b608 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 1016b60b je 0x1016b637 */
  if (C.zf) goto L_1016b637;
  /* 1016b60d push 4 */
  push32((uint32_t)(0x4u));
  /* 1016b60f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1016b614 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1016b619 push edi */
  push32((uint32_t)(EDI));
  /* 1016b61a call dword ptr [0x1016e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0a8))), 0x1016b620u);
  /* 1016b620 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b622 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1016b625 jne 0x1016b63b */
  if (!C.zf) goto L_1016b63b;
  /* 1016b627 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1016b62a push edi */
  push32((uint32_t)(EDI));
  /* 1016b62b push dword ptr [0x10177ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10177ca4))));
  /* 1016b631 call dword ptr [0x1016e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e080))), 0x1016b637u);
L_1016b637:;
  /* 1016b637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016b639 jmp 0x1016b652 */
  goto L_1016b652;
L_1016b63b:;
  /* 1016b63b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1016b63f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1016b641 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 1016b644 inc dword ptr [0x10176a48] */
  { uint32_t _r=(r32((uint32_t)(0x10176a48)))+1; w32((uint32_t)(0x10176a48), (_r)); fl_inc(_r,32); }
  /* 1016b64a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1016b64d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1016b650 mov eax, esi */
  EAX = (ESI);
L_1016b652:;
  /* 1016b652 pop edi */
  EDI = (pop32());
  /* 1016b653 pop esi */
  ESI = (pop32());
  /* 1016b654 ret  */
  ESPCHK(0x1016b5a4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b655 @ 0x1016b655 (251 bytes, 85 insns) */
void f_1016b655(void) {
  FTRACE(0x1016b655u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016b655 push ebp */
  push32((uint32_t)(EBP));
  /* 1016b656 mov ebp, esp */
  EBP = (ESP);
  /* 1016b658 push ecx */
  push32((uint32_t)(ECX));
  /* 1016b659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016b65c push ebx */
  push32((uint32_t)(EBX));
  /* 1016b65d push esi */
  push32((uint32_t)(ESI));
  /* 1016b65e push edi */
  push32((uint32_t)(EDI));
  /* 1016b65f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 1016b662 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 1016b665 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1016b667:;
  /* 1016b667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016b669 jl 0x1016b670 */
  if ((C.sf!=C.of)) goto L_1016b670;
  /* 1016b66b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1016b66d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1016b66e jmp 0x1016b667 */
  goto L_1016b667;
L_1016b670:;
  /* 1016b670 mov eax, ebx */
  EAX = (EBX);
  /* 1016b672 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1016b674 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1016b67a pop edx */
  EDX = (pop32());
  /* 1016b67b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 1016b682 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1016b685:;
  /* 1016b685 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 1016b688 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 1016b68b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b68e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1016b68f jne 0x1016b685 */
  if (!C.zf) goto L_1016b685;
  /* 1016b691 mov edi, ebx */
  EDI = (EBX);
  /* 1016b693 push 4 */
  push32((uint32_t)(0x4u));
  /* 1016b695 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1016b698 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b69b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1016b6a0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1016b6a5 push edi */
  push32((uint32_t)(EDI));
  /* 1016b6a6 call dword ptr [0x1016e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0a8))), 0x1016b6acu);
  /* 1016b6ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016b6ae jne 0x1016b6b8 */
  if (!C.zf) goto L_1016b6b8;
  /* 1016b6b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1016b6b3 jmp 0x1016b74b */
  goto L_1016b74b;
L_1016b6b8:;
  /* 1016b6b8 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1016b6be cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b6c0 ja 0x1016b6fe */
  if ((!C.cf&&!C.zf)) goto L_1016b6fe;
  /* 1016b6c2 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_1016b6c5:;
  /* 1016b6c5 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 1016b6c9 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1016b6d0 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 1016b6d6 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1016b6dd mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1016b6df lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 1016b6e5 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1016b6e8 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 1016b6f2 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b6f7 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 1016b6fa cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b6fc jbe 0x1016b6c5 */
  if ((C.cf||C.zf)) goto L_1016b6c5;
L_1016b6fe:;
  /* 1016b6fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016b701 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 1016b704 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b709 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016b70b pop edi */
  EDI = (pop32());
  /* 1016b70c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1016b70f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1016b712 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 1016b715 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1016b718 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1016b71b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1016b720 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 1016b727 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 1016b72a mov cl, al */
  CL = (AL);
  /* 1016b72c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1016b72e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016b730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016b733 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 1016b736 jne 0x1016b73b */
  if (!C.zf) goto L_1016b73b;
  /* 1016b738 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_1016b73b:;
  /* 1016b73b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1016b740 mov ecx, ebx */
  ECX = (EBX);
  /* 1016b742 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1016b744 not edx */
  EDX = (~(EDX));
  /* 1016b746 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1016b749 mov eax, ebx */
  EAX = (EBX);
L_1016b74b:;
  /* 1016b74b pop edi */
  EDI = (pop32());
  /* 1016b74c pop esi */
  ESI = (pop32());
  /* 1016b74d pop ebx */
  EBX = (pop32());
  /* 1016b74e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016b74f ret  */
  ESPCHK(0x1016b655u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x1016b750 (324 bytes, 102 insns) */
void f_1016b750(void) {
  FTRACE(0x1016b750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016b750 cmp dword ptr [0x10170ef0], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10170ef0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b757 push ebx */
  push32((uint32_t)(EBX));
  /* 1016b758 push ebp */
  push32((uint32_t)(EBP));
  /* 1016b759 push esi */
  push32((uint32_t)(ESI));
  /* 1016b75a push edi */
  push32((uint32_t)(EDI));
  /* 1016b75b jne 0x1016b764 */
  if (!C.zf) goto L_1016b764;
  /* 1016b75d mov esi, 0x10170ee0 */
  ESI = (0x10170ee0u);
  /* 1016b762 jmp 0x1016b781 */
  goto L_1016b781;
L_1016b764:;
  /* 1016b764 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 1016b769 push 0 */
  push32((uint32_t)(0x0u));
  /* 1016b76b push dword ptr [0x10177ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10177ca4))));
  /* 1016b771 call dword ptr [0x1016e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e098))), 0x1016b777u);
  /* 1016b777 mov esi, eax */
  ESI = (EAX);
  /* 1016b779 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1016b77b je 0x1016b88d */
  if (C.zf) goto L_1016b88d;
L_1016b781:;
  /* 1016b781 mov ebp, dword ptr [0x1016e0a8] */
  EBP = (r32((uint32_t)(0x1016e0a8)));
  /* 1016b787 push 4 */
  push32((uint32_t)(0x4u));
  /* 1016b789 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1016b78e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 1016b793 push 0 */
  push32((uint32_t)(0x0u));
  /* 1016b795 call ebp */
  call_ind((uint32_t)(EBP), 0x1016b797u);
  /* 1016b797 mov edi, eax */
  EDI = (EAX);
  /* 1016b799 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1016b79b je 0x1016b876 */
  if (C.zf) goto L_1016b876;
  /* 1016b7a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 1016b7a3 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 1016b7a8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1016b7ad push ebx */
  push32((uint32_t)(EBX));
  /* 1016b7ae push edi */
  push32((uint32_t)(EDI));
  /* 1016b7af call ebp */
  call_ind((uint32_t)(EBP), 0x1016b7b1u);
  /* 1016b7b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016b7b3 je 0x1016b868 */
  if (C.zf) goto L_1016b868;
  /* 1016b7b9 mov eax, 0x10170ee0 */
  EAX = (0x10170ee0u);
  /* 1016b7be cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b7c0 jne 0x1016b7e0 */
  if (!C.zf) goto L_1016b7e0;
  /* 1016b7c2 cmp dword ptr [0x10170ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10170ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b7c9 jne 0x1016b7d0 */
  if (!C.zf) goto L_1016b7d0;
  /* 1016b7cb mov dword ptr [0x10170ee0], eax */
  w32((uint32_t)(0x10170ee0), (EAX));
L_1016b7d0:;
  /* 1016b7d0 cmp dword ptr [0x10170ee4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10170ee4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b7d7 jne 0x1016b7f5 */
  if (!C.zf) goto L_1016b7f5;
  /* 1016b7d9 mov dword ptr [0x10170ee4], eax */
  w32((uint32_t)(0x10170ee4), (EAX));
  /* 1016b7de jmp 0x1016b7f5 */
  goto L_1016b7f5;
L_1016b7e0:;
  /* 1016b7e0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1016b7e2 mov eax, dword ptr [0x10170ee4] */
  EAX = (r32((uint32_t)(0x10170ee4)));
  /* 1016b7e7 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1016b7ea mov dword ptr [0x10170ee4], esi */
  w32((uint32_t)(0x10170ee4), (ESI));
  /* 1016b7f0 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1016b7f3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1016b7f5:;
  /* 1016b7f5 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 1016b7fb lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 1016b801 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 1016b804 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 1016b807 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 1016b80a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 1016b80d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1016b810 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 1016b812 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_1016b817:;
  /* 1016b817 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1016b819 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b81c setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 1016b81f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1016b820 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1016b822 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1016b823 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1016b824 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1016b826 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1016b829 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b82c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b832 jl 0x1016b817 */
  if ((C.sf!=C.of)) goto L_1016b817;
  /* 1016b834 push ebx */
  push32((uint32_t)(EBX));
  /* 1016b835 push 0 */
  push32((uint32_t)(0x0u));
  /* 1016b837 push edi */
  push32((uint32_t)(EDI));
  /* 1016b838 call 0x10169be0 */
  push32(0x1016b83du); f_10169be0();
  /* 1016b83d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016b840:;
  /* 1016b840 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1016b843 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b845 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b847 jae 0x1016b864 */
  if (!C.cf) goto L_1016b864;
  /* 1016b849 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 1016b850 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1016b853 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1016b855 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 1016b85c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b862 jmp 0x1016b840 */
  goto L_1016b840;
L_1016b864:;
  /* 1016b864 mov eax, esi */
  EAX = (ESI);
  /* 1016b866 jmp 0x1016b88f */
  goto L_1016b88f;
L_1016b868:;
  /* 1016b868 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1016b86d push 0 */
  push32((uint32_t)(0x0u));
  /* 1016b86f push edi */
  push32((uint32_t)(EDI));
  /* 1016b870 call dword ptr [0x1016e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e07c))), 0x1016b876u);
L_1016b876:;
  /* 1016b876 cmp esi, 0x10170ee0 */
  { uint32_t _a=(ESI),_b=(0x10170ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b87c je 0x1016b88d */
  if (C.zf) goto L_1016b88d;
  /* 1016b87e push esi */
  push32((uint32_t)(ESI));
  /* 1016b87f push 0 */
  push32((uint32_t)(0x0u));
  /* 1016b881 push dword ptr [0x10177ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10177ca4))));
  /* 1016b887 call dword ptr [0x1016e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e080))), 0x1016b88du);
L_1016b88d:;
  /* 1016b88d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1016b88f:;
  /* 1016b88f pop edi */
  EDI = (pop32());
  /* 1016b890 pop esi */
  ESI = (pop32());
  /* 1016b891 pop ebp */
  EBP = (pop32());
  /* 1016b892 pop ebx */
  EBX = (pop32());
  /* 1016b893 ret  */
  ESPCHK(0x1016b750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b894 @ 0x1016b894 (86 bytes, 27 insns) */
void f_1016b894(void) {
  FTRACE(0x1016b894u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016b894 push esi */
  push32((uint32_t)(ESI));
  /* 1016b895 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1016b899 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1016b89e push 0 */
  push32((uint32_t)(0x0u));
  /* 1016b8a0 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1016b8a3 call dword ptr [0x1016e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e07c))), 0x1016b8a9u);
  /* 1016b8a9 cmp dword ptr [0x10172f00], esi */
  { uint32_t _a=(r32((uint32_t)(0x10172f00))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b8af jne 0x1016b8b9 */
  if (!C.zf) goto L_1016b8b9;
  /* 1016b8b1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1016b8b4 mov dword ptr [0x10172f00], eax */
  w32((uint32_t)(0x10172f00), (EAX));
L_1016b8b9:;
  /* 1016b8b9 cmp esi, 0x10170ee0 */
  { uint32_t _a=(ESI),_b=(0x10170ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b8bf je 0x1016b8e1 */
  if (C.zf) goto L_1016b8e1;
  /* 1016b8c1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1016b8c4 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1016b8c6 push esi */
  push32((uint32_t)(ESI));
  /* 1016b8c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1016b8c9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1016b8cb mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1016b8cd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1016b8d0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1016b8d3 push dword ptr [0x10177ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10177ca4))));
  /* 1016b8d9 call dword ptr [0x1016e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e080))), 0x1016b8dfu);
  /* 1016b8df pop esi */
  ESI = (pop32());
  /* 1016b8e0 ret  */
  ESPCHK(0x1016b894u, _esp0);
  ESP += 4; return;
L_1016b8e1:;
  /* 1016b8e1 or dword ptr [0x10170ef0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10170ef0)))|(0xffffffffu); w32((uint32_t)(0x10170ef0), (_r)); fl_logic(_r,32); }
  /* 1016b8e8 pop esi */
  ESI = (pop32());
  /* 1016b8e9 ret  */
  ESPCHK(0x1016b894u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8ea @ 0x1016b8ea (194 bytes, 66 insns) */
void f_1016b8ea(void) {
  FTRACE(0x1016b8eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016b8ea push ebp */
  push32((uint32_t)(EBP));
  /* 1016b8eb mov ebp, esp */
  EBP = (ESP);
  /* 1016b8ed push ecx */
  push32((uint32_t)(ECX));
  /* 1016b8ee push ebx */
  push32((uint32_t)(EBX));
  /* 1016b8ef push esi */
  push32((uint32_t)(ESI));
  /* 1016b8f0 mov esi, dword ptr [0x10170ee4] */
  ESI = (r32((uint32_t)(0x10170ee4)));
  /* 1016b8f6 push edi */
  push32((uint32_t)(EDI));
L_1016b8f7:;
  /* 1016b8f7 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b8fb je 0x1016b995 */
  if (C.zf) goto L_1016b995;
  /* 1016b901 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016b905 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 1016b90b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_1016b910:;
  /* 1016b910 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b916 jne 0x1016b951 */
  if (!C.zf) goto L_1016b951;
  /* 1016b918 mov eax, ebx */
  EAX = (EBX);
  /* 1016b91a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1016b91f add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b922 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1016b927 push eax */
  push32((uint32_t)(EAX));
  /* 1016b928 call dword ptr [0x1016e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e07c))), 0x1016b92eu);
  /* 1016b92e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016b930 je 0x1016b951 */
  if (C.zf) goto L_1016b951;
  /* 1016b932 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 1016b935 dec dword ptr [0x10176894] */
  { uint32_t _r=(r32((uint32_t)(0x10176894)))-1; w32((uint32_t)(0x10176894), (_r)); fl_dec(_r,32); }
  /* 1016b93b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1016b93e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016b940 je 0x1016b946 */
  if (C.zf) goto L_1016b946;
  /* 1016b942 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b944 jbe 0x1016b949 */
  if ((C.cf||C.zf)) goto L_1016b949;
L_1016b946:;
  /* 1016b946 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_1016b949:;
  /* 1016b949 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1016b94c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1016b94f je 0x1016b95e */
  if (C.zf) goto L_1016b95e;
L_1016b951:;
  /* 1016b951 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016b957 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016b95a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1016b95c jge 0x1016b910 */
  if ((C.sf==C.of)) goto L_1016b910;
L_1016b95e:;
  /* 1016b95e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b962 mov ecx, esi */
  ECX = (ESI);
  /* 1016b964 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 1016b967 je 0x1016b995 */
  if (C.zf) goto L_1016b995;
  /* 1016b969 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b96d jne 0x1016b995 */
  if (!C.zf) goto L_1016b995;
  /* 1016b96f push 1 */
  push32((uint32_t)(0x1u));
  /* 1016b971 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 1016b974 pop edx */
  EDX = (pop32());
L_1016b975:;
  /* 1016b975 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b978 jne 0x1016b986 */
  if (!C.zf) goto L_1016b986;
  /* 1016b97a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1016b97b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016b97e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b984 jl 0x1016b975 */
  if ((C.sf!=C.of)) goto L_1016b975;
L_1016b986:;
  /* 1016b986 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b98c jne 0x1016b995 */
  if (!C.zf) goto L_1016b995;
  /* 1016b98e push ecx */
  push32((uint32_t)(ECX));
  /* 1016b98f call 0x1016b894 */
  push32(0x1016b994u); f_1016b894();
  /* 1016b994 pop ecx */
  ECX = (pop32());
L_1016b995:;
  /* 1016b995 cmp esi, dword ptr [0x10170ee4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10170ee4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b99b je 0x1016b9a7 */
  if (C.zf) goto L_1016b9a7;
  /* 1016b99d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b9a1 jg 0x1016b8f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1016b8f7;
L_1016b9a7:;
  /* 1016b9a7 pop edi */
  EDI = (pop32());
  /* 1016b9a8 pop esi */
  ESI = (pop32());
  /* 1016b9a9 pop ebx */
  EBX = (pop32());
  /* 1016b9aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016b9ab ret  */
  ESPCHK(0x1016b8eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9ac @ 0x1016b9ac (87 bytes, 34 insns) */
void f_1016b9ac(void) {
  FTRACE(0x1016b9acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016b9ac mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016b9b0 mov edx, 0x10170ee0 */
  EDX = (0x10170ee0u);
  /* 1016b9b5 push esi */
  push32((uint32_t)(ESI));
  /* 1016b9b6 mov ecx, edx */
  ECX = (EDX);
L_1016b9b8:;
  /* 1016b9b8 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b9bb jbe 0x1016b9c2 */
  if ((C.cf||C.zf)) goto L_1016b9c2;
  /* 1016b9bd cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b9c0 jb 0x1016b9ca */
  if (C.cf) goto L_1016b9ca;
L_1016b9c2:;
  /* 1016b9c2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1016b9c4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b9c6 je 0x1016b9ff */
  if (C.zf) goto L_1016b9ff;
  /* 1016b9c8 jmp 0x1016b9b8 */
  goto L_1016b9b8;
L_1016b9ca:;
  /* 1016b9ca test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 1016b9cc jne 0x1016b9ff */
  if (!C.zf) goto L_1016b9ff;
  /* 1016b9ce mov esi, eax */
  ESI = (EAX);
  /* 1016b9d0 mov edx, 0x100 */
  EDX = (0x100u);
  /* 1016b9d5 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 1016b9db cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016b9dd jb 0x1016b9ff */
  if (C.cf) goto L_1016b9ff;
  /* 1016b9df mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1016b9e3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1016b9e5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 1016b9e9 mov ecx, eax */
  ECX = (EAX);
  /* 1016b9eb and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 1016b9f0 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016b9f2 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1016b9f4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016b9f6 pop esi */
  ESI = (pop32());
  /* 1016b9f7 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1016b9fa lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 1016b9fe ret  */
  ESPCHK(0x1016b9acu, _esp0);
  ESP += 4; return;
L_1016b9ff:;
  /* 1016b9ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016ba01 pop esi */
  ESI = (pop32());
  /* 1016ba02 ret  */
  ESPCHK(0x1016b9acu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba03 @ 0x1016ba03 (69 bytes, 19 insns) */
void f_1016ba03(void) {
  FTRACE(0x1016ba03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016ba03 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016ba07 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1016ba0b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016ba0e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 1016ba11 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 1016ba15 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1016ba19 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1016ba1c add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1016ba1e and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1016ba21 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ba27 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 1016ba2e jne 0x1016ba47 */
  if (!C.zf) goto L_1016ba47;
  /* 1016ba30 inc dword ptr [0x10176894] */
  { uint32_t _r=(r32((uint32_t)(0x10176894)))+1; w32((uint32_t)(0x10176894), (_r)); fl_inc(_r,32); }
  /* 1016ba36 cmp dword ptr [0x10176894], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10176894))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ba3d jne 0x1016ba47 */
  if (!C.zf) goto L_1016ba47;
  /* 1016ba3f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1016ba41 call 0x1016b8ea */
  push32(0x1016ba46u); f_1016b8ea();
  /* 1016ba46 pop ecx */
  ECX = (pop32());
L_1016ba47:;
  /* 1016ba47 ret  */
  ESPCHK(0x1016ba03u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba48 @ 0x1016ba48 (520 bytes, 180 insns) */
void f_1016ba48(void) {
  FTRACE(0x1016ba48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016ba48 push ebp */
  push32((uint32_t)(EBP));
  /* 1016ba49 mov ebp, esp */
  EBP = (ESP);
  /* 1016ba4b push ecx */
  push32((uint32_t)(ECX));
  /* 1016ba4c push ecx */
  push32((uint32_t)(ECX));
  /* 1016ba4d push ebx */
  push32((uint32_t)(EBX));
  /* 1016ba4e push esi */
  push32((uint32_t)(ESI));
  /* 1016ba4f mov esi, dword ptr [0x10172f00] */
  ESI = (r32((uint32_t)(0x10172f00)));
  /* 1016ba55 push edi */
  push32((uint32_t)(EDI));
L_1016ba56:;
  /* 1016ba56 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 1016ba59 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ba5c je 0x1016bb01 */
  if (C.zf) goto L_1016bb01;
  /* 1016ba62 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 1016ba65 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1016ba6b mov eax, edi */
  EAX = (EDI);
  /* 1016ba6d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016ba6f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016ba72 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 1016ba75 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1016ba78 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016ba7a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ba7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1016ba7f jae 0x1016babb */
  if (!C.cf) goto L_1016babb;
L_1016ba81:;
  /* 1016ba81 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 1016ba83 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016ba86 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ba88 jl 0x1016baa4 */
  if ((C.sf!=C.of)) goto L_1016baa4;
  /* 1016ba8a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ba8d jbe 0x1016baa4 */
  if ((C.cf||C.zf)) goto L_1016baa4;
  /* 1016ba8f push ebx */
  push32((uint32_t)(EBX));
  /* 1016ba90 push ecx */
  push32((uint32_t)(ECX));
  /* 1016ba91 push eax */
  push32((uint32_t)(EAX));
  /* 1016ba92 call 0x1016bc50 */
  push32(0x1016ba97u); f_1016bc50();
  /* 1016ba97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016ba9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016ba9c jne 0x1016bb13 */
  if (!C.zf) goto L_1016bb13;
  /* 1016ba9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016baa1 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1016baa4:;
  /* 1016baa4 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016baa7 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1016baad add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bab2 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bab4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1016bab7 jb 0x1016ba81 */
  if (C.cf) goto L_1016ba81;
  /* 1016bab9 jmp 0x1016babe */
  goto L_1016babe;
L_1016babb:;
  /* 1016babb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1016babe:;
  /* 1016babe mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1016bac1 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 1016bac4 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 1016bac7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1016baca cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bacc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1016bacf jae 0x1016bb04 */
  if (!C.cf) goto L_1016bb04;
L_1016bad1:;
  /* 1016bad1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1016bad3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bad5 jl 0x1016baf0 */
  if ((C.sf!=C.of)) goto L_1016baf0;
  /* 1016bad7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bada jbe 0x1016baf0 */
  if ((C.cf||C.zf)) goto L_1016baf0;
  /* 1016badc push ebx */
  push32((uint32_t)(EBX));
  /* 1016badd push eax */
  push32((uint32_t)(EAX));
  /* 1016bade push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1016bae1 call 0x1016bc50 */
  push32(0x1016bae6u); f_1016bc50();
  /* 1016bae6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016baeb jne 0x1016bb13 */
  if (!C.zf) goto L_1016bb13;
  /* 1016baed mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1016baf0:;
  /* 1016baf0 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1016baf7 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bafa cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bafd jb 0x1016bad1 */
  if (C.cf) goto L_1016bad1;
  /* 1016baff jmp 0x1016bb04 */
  goto L_1016bb04;
L_1016bb01:;
  /* 1016bb01 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1016bb04:;
  /* 1016bb04 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 1016bb06 cmp esi, dword ptr [0x10172f00] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10172f00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bb0c je 0x1016bb23 */
  if (C.zf) goto L_1016bb23;
  /* 1016bb0e jmp 0x1016ba56 */
  goto L_1016ba56;
L_1016bb13:;
  /* 1016bb13 mov dword ptr [0x10172f00], esi */
  w32((uint32_t)(0x10172f00), (ESI));
  /* 1016bb19 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1016bb1b mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 1016bb1e jmp 0x1016bc4b */
  goto L_1016bc4b;
L_1016bb23:;
  /* 1016bb23 mov eax, 0x10170ee0 */
  EAX = (0x10170ee0u);
  /* 1016bb28 mov edi, eax */
  EDI = (EAX);
L_1016bb2a:;
  /* 1016bb2a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bb2e je 0x1016bb36 */
  if (C.zf) goto L_1016bb36;
  /* 1016bb30 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bb34 jne 0x1016bb42 */
  if (!C.zf) goto L_1016bb42;
L_1016bb36:;
  /* 1016bb36 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 1016bb38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bb3a je 0x1016bc17 */
  if (C.zf) goto L_1016bc17;
  /* 1016bb40 jmp 0x1016bb2a */
  goto L_1016bb2a;
L_1016bb42:;
  /* 1016bb42 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 1016bb45 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016bb49 mov esi, ebx */
  ESI = (EBX);
  /* 1016bb4b mov eax, ebx */
  EAX = (EBX);
  /* 1016bb4d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016bb4f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016bb52 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 1016bb55 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 1016bb58 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bb5b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bb5e jne 0x1016bb71 */
  if (!C.zf) goto L_1016bb71;
L_1016bb60:;
  /* 1016bb60 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bb64 jge 0x1016bb71 */
  if ((C.sf==C.of)) goto L_1016bb71;
  /* 1016bb66 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bb69 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1016bb6c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bb6f je 0x1016bb60 */
  if (C.zf) goto L_1016bb60;
L_1016bb71:;
  /* 1016bb71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016bb74 push 4 */
  push32((uint32_t)(0x4u));
  /* 1016bb76 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1016bb79 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1016bb7e push eax */
  push32((uint32_t)(EAX));
  /* 1016bb7f push esi */
  push32((uint32_t)(ESI));
  /* 1016bb80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1016bb83 call dword ptr [0x1016e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0a8))), 0x1016bb89u);
  /* 1016bb89 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bb8b jne 0x1016bc49 */
  if (!C.zf) goto L_1016bc49;
  /* 1016bb91 push 0 */
  push32((uint32_t)(0x0u));
  /* 1016bb93 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 1016bb96 push esi */
  push32((uint32_t)(ESI));
  /* 1016bb97 call 0x10169be0 */
  push32(0x1016bb9cu); f_10169be0();
  /* 1016bb9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016bb9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bba2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1016bba4 mov ecx, ebx */
  ECX = (EBX);
  /* 1016bba6 jle 0x1016bbd8 */
  if ((C.zf||C.sf!=C.of)) goto L_1016bbd8;
  /* 1016bba8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1016bbab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1016bbae:;
  /* 1016bbae or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 1016bbb5 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 1016bbb8 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 1016bbbb mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1016bbc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1016bbc2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1016bbc4 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 1016bbcb add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bbd0 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bbd3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1016bbd6 jne 0x1016bbae */
  if (!C.zf) goto L_1016bbae;
L_1016bbd8:;
  /* 1016bbd8 mov dword ptr [0x10172f00], edi */
  w32((uint32_t)(0x10172f00), (EDI));
  /* 1016bbde lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_1016bbe4:;
  /* 1016bbe4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bbe6 jae 0x1016bbf4 */
  if (!C.cf) goto L_1016bbf4;
  /* 1016bbe8 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bbeb je 0x1016bbf2 */
  if (C.zf) goto L_1016bbf2;
  /* 1016bbed add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bbf0 jmp 0x1016bbe4 */
  goto L_1016bbe4;
L_1016bbf2:;
  /* 1016bbf2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1016bbf4:;
  /* 1016bbf4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016bbf6 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1016bbf8 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 1016bbfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016bbfe mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 1016bc01 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 1016bc04 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1016bc06 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1016bc09 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 1016bc0d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 1016bc13 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1016bc15 jmp 0x1016bc4b */
  goto L_1016bc4b;
L_1016bc17:;
  /* 1016bc17 call 0x1016b750 */
  push32(0x1016bc1cu); f_1016b750();
  /* 1016bc1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016bc1e je 0x1016bc49 */
  if (C.zf) goto L_1016bc49;
  /* 1016bc20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1016bc23 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 1016bc26 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 1016bc2a mov dword ptr [0x10172f00], eax */
  w32((uint32_t)(0x10172f00), (EAX));
  /* 1016bc2f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1016bc31 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1016bc36 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016bc38 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1016bc3b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 1016bc3e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1016bc41 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 1016bc47 jmp 0x1016bc4b */
  goto L_1016bc4b;
L_1016bc49:;
  /* 1016bc49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1016bc4b:;
  /* 1016bc4b pop edi */
  EDI = (pop32());
  /* 1016bc4c pop esi */
  ESI = (pop32());
  /* 1016bc4d pop ebx */
  EBX = (pop32());
  /* 1016bc4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016bc4f ret  */
  ESPCHK(0x1016ba48u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc50 @ 0x1016bc50 (292 bytes, 125 insns) */
void f_1016bc50(void) {
  FTRACE(0x1016bc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016bc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1016bc51 mov ebp, esp */
  EBP = (ESP);
  /* 1016bc53 push ecx */
  push32((uint32_t)(ECX));
  /* 1016bc54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016bc57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1016bc5a push ebx */
  push32((uint32_t)(EBX));
  /* 1016bc5b push esi */
  push32((uint32_t)(ESI));
  /* 1016bc5c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1016bc5f push edi */
  push32((uint32_t)(EDI));
  /* 1016bc60 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 1016bc62 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 1016bc68 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bc6a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1016bc6d mov eax, edi */
  EAX = (EDI);
  /* 1016bc6f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1016bc72 jb 0x1016bc95 */
  if (C.cf) goto L_1016bc95;
  /* 1016bc74 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 1016bc77 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1016bc79 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bc7b jae 0x1016bc84 */
  if (!C.cf) goto L_1016bc84;
  /* 1016bc7d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1016bc7f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1016bc82 jmp 0x1016bc8d */
  goto L_1016bc8d;
L_1016bc84:;
  /* 1016bc84 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1016bc88 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1016bc8b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1016bc8d:;
  /* 1016bc8d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1016bc90 jmp 0x1016bd63 */
  goto L_1016bd63;
L_1016bc95:;
  /* 1016bc95 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bc97 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016bc9a je 0x1016bc9e */
  if (C.zf) goto L_1016bc9e;
  /* 1016bc9c mov eax, esi */
  EAX = (ESI);
L_1016bc9e:;
  /* 1016bc9e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1016bca1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bca3 jae 0x1016bce8 */
  if (!C.cf) goto L_1016bce8;
L_1016bca5:;
  /* 1016bca5 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1016bca7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1016bca9 jne 0x1016bcdb */
  if (!C.zf) goto L_1016bcdb;
  /* 1016bcab push 1 */
  push32((uint32_t)(0x1u));
  /* 1016bcad lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 1016bcb0 pop esi */
  ESI = (pop32());
L_1016bcb1:;
  /* 1016bcb1 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016bcb4 jne 0x1016bcba */
  if (!C.zf) goto L_1016bcba;
  /* 1016bcb6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1016bcb7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016bcb8 jmp 0x1016bcb1 */
  goto L_1016bcb1;
L_1016bcba:;
  /* 1016bcba cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bcbc jae 0x1016bd0c */
  if (!C.cf) goto L_1016bd0c;
  /* 1016bcbe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bcc1 jne 0x1016bcc8 */
  if (!C.zf) goto L_1016bcc8;
  /* 1016bcc3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1016bcc6 jmp 0x1016bcd4 */
  goto L_1016bcd4;
L_1016bcc8:;
  /* 1016bcc8 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1016bccb cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bcce jb 0x1016bd6d */
  if (C.cf) goto L_1016bd6d;
L_1016bcd4:;
  /* 1016bcd4 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 1016bcd7 mov eax, ebx */
  EAX = (EBX);
  /* 1016bcd9 jmp 0x1016bce0 */
  goto L_1016bce0;
L_1016bcdb:;
  /* 1016bcdb movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1016bcde add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1016bce0:;
  /* 1016bce0 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1016bce3 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bce6 jb 0x1016bca5 */
  if (C.cf) goto L_1016bca5;
L_1016bce8:;
  /* 1016bce8 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_1016bceb:;
  /* 1016bceb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bced jae 0x1016bd6d */
  if (!C.cf) goto L_1016bd6d;
  /* 1016bcef lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 1016bcf2 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bcf5 jae 0x1016bd6d */
  if (!C.cf) goto L_1016bd6d;
  /* 1016bcf7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016bcf9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016bcfb jne 0x1016bd3d */
  if (!C.zf) goto L_1016bd3d;
  /* 1016bcfd push 1 */
  push32((uint32_t)(0x1u));
  /* 1016bcff lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 1016bd02 pop eax */
  EAX = (pop32());
L_1016bd03:;
  /* 1016bd03 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016bd06 jne 0x1016bd2d */
  if (!C.zf) goto L_1016bd2d;
  /* 1016bd08 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1016bd09 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016bd0a jmp 0x1016bd03 */
  goto L_1016bd03;
L_1016bd0c:;
  /* 1016bd0c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 1016bd0f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bd12 jae 0x1016bd1d */
  if (!C.cf) goto L_1016bd1d;
  /* 1016bd14 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016bd16 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1016bd18 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1016bd1b jmp 0x1016bd26 */
  goto L_1016bd26;
L_1016bd1d:;
  /* 1016bd1d and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1016bd21 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 1016bd24 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1016bd26:;
  /* 1016bd26 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1016bd28 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bd2b jmp 0x1016bd63 */
  goto L_1016bd63;
L_1016bd2d:;
  /* 1016bd2d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bd2f jae 0x1016bd44 */
  if (!C.cf) goto L_1016bd44;
  /* 1016bd31 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1016bd34 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bd37 jb 0x1016bd6d */
  if (C.cf) goto L_1016bd6d;
  /* 1016bd39 mov esi, ebx */
  ESI = (EBX);
  /* 1016bd3b jmp 0x1016bceb */
  goto L_1016bceb;
L_1016bd3d:;
  /* 1016bd3d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1016bd40 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bd42 jmp 0x1016bceb */
  goto L_1016bceb;
L_1016bd44:;
  /* 1016bd44 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 1016bd47 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bd4a jae 0x1016bd55 */
  if (!C.cf) goto L_1016bd55;
  /* 1016bd4c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016bd4e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1016bd50 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1016bd53 jmp 0x1016bd5e */
  goto L_1016bd5e;
L_1016bd55:;
  /* 1016bd55 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1016bd59 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1016bd5c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1016bd5e:;
  /* 1016bd5e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1016bd60 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_1016bd63:;
  /* 1016bd63 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1016bd66 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1016bd69 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016bd6b jmp 0x1016bd6f */
  goto L_1016bd6f;
L_1016bd6d:;
  /* 1016bd6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1016bd6f:;
  /* 1016bd6f pop edi */
  EDI = (pop32());
  /* 1016bd70 pop esi */
  ESI = (pop32());
  /* 1016bd71 pop ebx */
  EBX = (pop32());
  /* 1016bd72 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016bd73 ret  */
  ESPCHK(0x1016bc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd74 @ 0x1016bd74 (137 bytes, 50 insns) */
void f_1016bd74(void) {
  FTRACE(0x1016bd74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016bd74 push ebx */
  push32((uint32_t)(EBX));
  /* 1016bd75 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016bd77 cmp dword ptr [0x10176898], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10176898))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bd7d push esi */
  push32((uint32_t)(ESI));
  /* 1016bd7e push edi */
  push32((uint32_t)(EDI));
  /* 1016bd7f jne 0x1016bdc3 */
  if (!C.zf) goto L_1016bdc3;
  /* 1016bd81 push 0x1016e548 */
  push32((uint32_t)(0x1016e548u));
  /* 1016bd86 call dword ptr [0x1016e0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0b0))), 0x1016bd8cu);
  /* 1016bd8c mov edi, eax */
  EDI = (EAX);
  /* 1016bd8e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bd90 je 0x1016bdf9 */
  if (C.zf) goto L_1016bdf9;
  /* 1016bd92 mov esi, dword ptr [0x1016e088] */
  ESI = (r32((uint32_t)(0x1016e088)));
  /* 1016bd98 push 0x1016e53c */
  push32((uint32_t)(0x1016e53cu));
  /* 1016bd9d push edi */
  push32((uint32_t)(EDI));
  /* 1016bd9e call esi */
  call_ind((uint32_t)(ESI), 0x1016bda0u);
  /* 1016bda0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016bda2 mov dword ptr [0x10176898], eax */
  w32((uint32_t)(0x10176898), (EAX));
  /* 1016bda7 je 0x1016bdf9 */
  if (C.zf) goto L_1016bdf9;
  /* 1016bda9 push 0x1016e52c */
  push32((uint32_t)(0x1016e52cu));
  /* 1016bdae push edi */
  push32((uint32_t)(EDI));
  /* 1016bdaf call esi */
  call_ind((uint32_t)(ESI), 0x1016bdb1u);
  /* 1016bdb1 push 0x1016e518 */
  push32((uint32_t)(0x1016e518u));
  /* 1016bdb6 push edi */
  push32((uint32_t)(EDI));
  /* 1016bdb7 mov dword ptr [0x1017689c], eax */
  w32((uint32_t)(0x1017689c), (EAX));
  /* 1016bdbc call esi */
  call_ind((uint32_t)(ESI), 0x1016bdbeu);
  /* 1016bdbe mov dword ptr [0x101768a0], eax */
  w32((uint32_t)(0x101768a0), (EAX));
L_1016bdc3:;
  /* 1016bdc3 mov eax, dword ptr [0x1017689c] */
  EAX = (r32((uint32_t)(0x1017689c)));
  /* 1016bdc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016bdca je 0x1016bde2 */
  if (C.zf) goto L_1016bde2;
  /* 1016bdcc call eax */
  call_ind((uint32_t)(EAX), 0x1016bdceu);
  /* 1016bdce mov ebx, eax */
  EBX = (EAX);
  /* 1016bdd0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1016bdd2 je 0x1016bde2 */
  if (C.zf) goto L_1016bde2;
  /* 1016bdd4 mov eax, dword ptr [0x101768a0] */
  EAX = (r32((uint32_t)(0x101768a0)));
  /* 1016bdd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016bddb je 0x1016bde2 */
  if (C.zf) goto L_1016bde2;
  /* 1016bddd push ebx */
  push32((uint32_t)(EBX));
  /* 1016bdde call eax */
  call_ind((uint32_t)(EAX), 0x1016bde0u);
  /* 1016bde0 mov ebx, eax */
  EBX = (EAX);
L_1016bde2:;
  /* 1016bde2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1016bde6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1016bdea push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1016bdee push ebx */
  push32((uint32_t)(EBX));
  /* 1016bdef call dword ptr [0x10176898] */
  call_ind((uint32_t)(r32((uint32_t)(0x10176898))), 0x1016bdf5u);
L_1016bdf5:;
  /* 1016bdf5 pop edi */
  EDI = (pop32());
  /* 1016bdf6 pop esi */
  ESI = (pop32());
  /* 1016bdf7 pop ebx */
  EBX = (pop32());
  /* 1016bdf8 ret  */
  ESPCHK(0x1016bd74u, _esp0);
  ESP += 4; return;
L_1016bdf9:;
  /* 1016bdf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016bdfb jmp 0x1016bdf5 */
  goto L_1016bdf5;
}

/* _strncpy @ 0x1016be00 (254 bytes, 109 insns) */
void f_1016be00(void) {
  FTRACE(0x1016be00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016be00 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1016be04 push edi */
  push32((uint32_t)(EDI));
  /* 1016be05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1016be07 je 0x1016be83 */
  if (C.zf) goto L_1016be83;
  /* 1016be09 push esi */
  push32((uint32_t)(ESI));
  /* 1016be0a push ebx */
  push32((uint32_t)(EBX));
  /* 1016be0b mov ebx, ecx */
  EBX = (ECX);
  /* 1016be0d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1016be11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1016be17 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1016be1b jne 0x1016be24 */
  if (!C.zf) goto L_1016be24;
  /* 1016be1d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1016be20 jne 0x1016be91 */
  if (!C.zf) goto L_1016be91;
  /* 1016be22 jmp 0x1016be45 */
  goto L_1016be45;
L_1016be24:;
  /* 1016be24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016be26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016be27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1016be29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016be2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1016be2b je 0x1016be52 */
  if (C.zf) goto L_1016be52;
  /* 1016be2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016be2f je 0x1016be5a */
  if (C.zf) goto L_1016be5a;
  /* 1016be31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1016be37 jne 0x1016be24 */
  if (!C.zf) goto L_1016be24;
  /* 1016be39 mov ebx, ecx */
  EBX = (ECX);
  /* 1016be3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1016be3e jne 0x1016be91 */
  if (!C.zf) goto L_1016be91;
L_1016be40:;
  /* 1016be40 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1016be43 je 0x1016be52 */
  if (C.zf) goto L_1016be52;
L_1016be45:;
  /* 1016be45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016be47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016be48 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1016be4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016be4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1016be4d je 0x1016be7e */
  if (C.zf) goto L_1016be7e;
  /* 1016be4f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1016be50 jne 0x1016be45 */
  if (!C.zf) goto L_1016be45;
L_1016be52:;
  /* 1016be52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1016be56 pop ebx */
  EBX = (pop32());
  /* 1016be57 pop esi */
  ESI = (pop32());
  /* 1016be58 pop edi */
  EDI = (pop32());
  /* 1016be59 ret  */
  ESPCHK(0x1016be00u, _esp0);
  ESP += 4; return;
L_1016be5a:;
  /* 1016be5a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1016be60 je 0x1016be74 */
  if (C.zf) goto L_1016be74;
L_1016be62:;
  /* 1016be62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1016be64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016be65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1016be66 je 0x1016bef6 */
  if (C.zf) goto L_1016bef6;
  /* 1016be6c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1016be72 jne 0x1016be62 */
  if (!C.zf) goto L_1016be62;
L_1016be74:;
  /* 1016be74 mov ebx, ecx */
  EBX = (ECX);
  /* 1016be76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1016be79 jne 0x1016bee7 */
  if (!C.zf) goto L_1016bee7;
L_1016be7b:;
  /* 1016be7b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1016be7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1016be7e:;
  /* 1016be7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1016be7f jne 0x1016be7b */
  if (!C.zf) goto L_1016be7b;
  /* 1016be81 pop ebx */
  EBX = (pop32());
  /* 1016be82 pop esi */
  ESI = (pop32());
L_1016be83:;
  /* 1016be83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1016be87 pop edi */
  EDI = (pop32());
  /* 1016be88 ret  */
  ESPCHK(0x1016be00u, _esp0);
  ESP += 4; return;
L_1016be89:;
  /* 1016be89 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1016be8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016be8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1016be8f je 0x1016be40 */
  if (C.zf) goto L_1016be40;
L_1016be91:;
  /* 1016be91 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1016be96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1016be98 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016be9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1016be9d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1016be9f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1016bea1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bea4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1016bea9 je 0x1016be89 */
  if (C.zf) goto L_1016be89;
  /* 1016beab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1016bead je 0x1016bedb */
  if (C.zf) goto L_1016bedb;
  /* 1016beaf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1016beb1 je 0x1016bed1 */
  if (C.zf) goto L_1016bed1;
  /* 1016beb3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1016beb9 je 0x1016bec7 */
  if (C.zf) goto L_1016bec7;
  /* 1016bebb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1016bec1 jne 0x1016be89 */
  if (!C.zf) goto L_1016be89;
  /* 1016bec3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1016bec5 jmp 0x1016bedf */
  goto L_1016bedf;
L_1016bec7:;
  /* 1016bec7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1016becd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1016becf jmp 0x1016bedf */
  goto L_1016bedf;
L_1016bed1:;
  /* 1016bed1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1016bed7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1016bed9 jmp 0x1016bedf */
  goto L_1016bedf;
L_1016bedb:;
  /* 1016bedb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1016bedd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1016bedf:;
  /* 1016bedf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bee2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016bee4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1016bee5 je 0x1016bef1 */
  if (C.zf) goto L_1016bef1;
L_1016bee7:;
  /* 1016bee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1016bee9:;
  /* 1016bee9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1016beeb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016beee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1016beef jne 0x1016bee9 */
  if (!C.zf) goto L_1016bee9;
L_1016bef1:;
  /* 1016bef1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1016bef4 jne 0x1016be7b */
  if (!C.zf) goto L_1016be7b;
L_1016bef6:;
  /* 1016bef6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1016befa pop ebx */
  EBX = (pop32());
  /* 1016befb pop esi */
  ESI = (pop32());
  /* 1016befc pop edi */
  EDI = (pop32());
  /* 1016befd ret  */
  ESPCHK(0x1016be00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000befe @ 0x1016befe (115 bytes, 37 insns) */
void f_1016befe(void) {
  FTRACE(0x1016befeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016befe push esi */
  push32((uint32_t)(ESI));
  /* 1016beff call 0x1016bf7a */
  push32(0x1016bf04u); f_1016bf7a();
  /* 1016bf04 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1016bf08 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1016bf0a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1016bf0c mov eax, 0x10172f10 */
  EAX = (0x10172f10u);
L_1016bf11:;
  /* 1016bf11 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bf13 je 0x1016bf37 */
  if (C.zf) goto L_1016bf37;
  /* 1016bf15 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bf18 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016bf19 cmp eax, 0x10173078 */
  { uint32_t _a=(EAX),_b=(0x10173078u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bf1e jl 0x1016bf11 */
  if ((C.sf!=C.of)) goto L_1016bf11;
  /* 1016bf20 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bf23 jb 0x1016bf47 */
  if (C.cf) goto L_1016bf47;
  /* 1016bf25 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bf28 ja 0x1016bf47 */
  if ((!C.cf&&!C.zf)) goto L_1016bf47;
  /* 1016bf2a call 0x1016bf71 */
  push32(0x1016bf2fu); f_1016bf71();
  /* 1016bf2f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1016bf35 pop esi */
  ESI = (pop32());
  /* 1016bf36 ret  */
  ESPCHK(0x1016befeu, _esp0);
  ESP += 4; return;
L_1016bf37:;
  /* 1016bf37 call 0x1016bf71 */
  push32(0x1016bf3cu); f_1016bf71();
  /* 1016bf3c mov ecx, dword ptr [esi*8 + 0x10172f14] */
  ECX = (r32((uint32_t)(ESI*8 + 0x10172f14)));
  /* 1016bf43 pop esi */
  ESI = (pop32());
  /* 1016bf44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1016bf46 ret  */
  ESPCHK(0x1016befeu, _esp0);
  ESP += 4; return;
L_1016bf47:;
  /* 1016bf47 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bf4d jb 0x1016bf64 */
  if (C.cf) goto L_1016bf64;
  /* 1016bf4f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bf55 ja 0x1016bf64 */
  if ((!C.cf&&!C.zf)) goto L_1016bf64;
  /* 1016bf57 call 0x1016bf71 */
  push32(0x1016bf5cu); f_1016bf71();
  /* 1016bf5c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1016bf62 pop esi */
  ESI = (pop32());
  /* 1016bf63 ret  */
  ESPCHK(0x1016befeu, _esp0);
  ESP += 4; return;
L_1016bf64:;
  /* 1016bf64 call 0x1016bf71 */
  push32(0x1016bf69u); f_1016bf71();
  /* 1016bf69 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1016bf6f pop esi */
  ESI = (pop32());
  /* 1016bf70 ret  */
  ESPCHK(0x1016befeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf71 @ 0x1016bf71 (9 bytes, 3 insns) */
void f_1016bf71(void) {
  FTRACE(0x1016bf71u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016bf71 call 0x10168048 */
  push32(0x1016bf76u); f_10168048();
  /* 1016bf76 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bf79 ret  */
  ESPCHK(0x1016bf71u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf7a @ 0x1016bf7a (9 bytes, 3 insns) */
void f_1016bf7a(void) {
  FTRACE(0x1016bf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016bf7a call 0x10168048 */
  push32(0x1016bf7fu); f_10168048();
  /* 1016bf7f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bf82 ret  */
  ESPCHK(0x1016bf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf83 @ 0x1016bf83 (127 bytes, 48 insns) */
void f_1016bf83(void) {
  FTRACE(0x1016bf83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016bf83 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016bf87 push esi */
  push32((uint32_t)(ESI));
  /* 1016bf88 cmp ecx, dword ptr [0x10177dc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10177dc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bf8e push edi */
  push32((uint32_t)(EDI));
  /* 1016bf8f jae 0x1016bfe9 */
  if (!C.cf) goto L_1016bfe9;
  /* 1016bf91 mov eax, ecx */
  EAX = (ECX);
  /* 1016bf93 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1016bf96 lea edi, [eax*4 + 0x10177cc0] */
  EDI = ((uint32_t)(EAX*4 + 0x10177cc0));
  /* 1016bf9d mov eax, ecx */
  EAX = (ECX);
  /* 1016bf9f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1016bfa2 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1016bfa5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1016bfa7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1016bfaa add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016bfac test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1016bfb0 je 0x1016bfe9 */
  if (C.zf) goto L_1016bfe9;
  /* 1016bfb2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bfb5 je 0x1016bfe9 */
  if (C.zf) goto L_1016bfe9;
  /* 1016bfb7 cmp dword ptr [0x101766d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101766d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016bfbe jne 0x1016bfdf */
  if (!C.zf) goto L_1016bfdf;
  /* 1016bfc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016bfc2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016bfc4 je 0x1016bfd6 */
  if (C.zf) goto L_1016bfd6;
  /* 1016bfc6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1016bfc7 je 0x1016bfd1 */
  if (C.zf) goto L_1016bfd1;
  /* 1016bfc9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1016bfca jne 0x1016bfdf */
  if (!C.zf) goto L_1016bfdf;
  /* 1016bfcc push eax */
  push32((uint32_t)(EAX));
  /* 1016bfcd push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1016bfcf jmp 0x1016bfd9 */
  goto L_1016bfd9;
L_1016bfd1:;
  /* 1016bfd1 push eax */
  push32((uint32_t)(EAX));
  /* 1016bfd2 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1016bfd4 jmp 0x1016bfd9 */
  goto L_1016bfd9;
L_1016bfd6:;
  /* 1016bfd6 push eax */
  push32((uint32_t)(EAX));
  /* 1016bfd7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_1016bfd9:;
  /* 1016bfd9 call dword ptr [0x1016e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0b4))), 0x1016bfdfu);
L_1016bfdf:;
  /* 1016bfdf mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1016bfe1 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 1016bfe5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016bfe7 jmp 0x1016bfff */
  goto L_1016bfff;
L_1016bfe9:;
  /* 1016bfe9 call 0x1016bf71 */
  push32(0x1016bfeeu); f_1016bf71();
  /* 1016bfee mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1016bff4 call 0x1016bf7a */
  push32(0x1016bff9u); f_1016bf7a();
  /* 1016bff9 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1016bffc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1016bfff:;
  /* 1016bfff pop edi */
  EDI = (pop32());
  /* 1016c000 pop esi */
  ESI = (pop32());
  /* 1016c001 ret  */
  ESPCHK(0x1016bf83u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c002 @ 0x1016c002 (66 bytes, 19 insns) */
void f_1016c002(void) {
  FTRACE(0x1016c002u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016c002 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016c006 cmp eax, dword ptr [0x10177dc0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10177dc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c00c jae 0x1016c02d */
  if (!C.cf) goto L_1016c02d;
  /* 1016c00e mov ecx, eax */
  ECX = (EAX);
  /* 1016c010 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1016c013 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1016c016 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1016c019 mov ecx, dword ptr [ecx*4 + 0x10177cc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10177cc0)));
  /* 1016c020 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1016c025 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1016c028 je 0x1016c02d */
  if (C.zf) goto L_1016c02d;
  /* 1016c02a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 1016c02c ret  */
  ESPCHK(0x1016c002u, _esp0);
  ESP += 4; return;
L_1016c02d:;
  /* 1016c02d call 0x1016bf71 */
  push32(0x1016c032u); f_1016bf71();
  /* 1016c032 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1016c038 call 0x1016bf7a */
  push32(0x1016c03du); f_1016bf7a();
  /* 1016c03d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1016c040 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1016c043 ret  */
  ESPCHK(0x1016c002u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c044 @ 0x1016c044 (95 bytes, 34 insns) */
void f_1016c044(void) {
  FTRACE(0x1016c044u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016c044 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016c048 push ebx */
  push32((uint32_t)(EBX));
  /* 1016c049 mov ecx, eax */
  ECX = (EAX);
  /* 1016c04b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1016c04e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1016c051 push esi */
  push32((uint32_t)(ESI));
  /* 1016c052 push edi */
  push32((uint32_t)(EDI));
  /* 1016c053 mov esi, dword ptr [ecx*4 + 0x10177cc0] */
  ESI = (r32((uint32_t)(ECX*4 + 0x10177cc0)));
  /* 1016c05a lea ebx, [ecx*4 + 0x10177cc0] */
  EBX = ((uint32_t)(ECX*4 + 0x10177cc0));
  /* 1016c061 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 1016c064 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 1016c067 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016c069 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c06d jne 0x1016c092 */
  if (!C.zf) goto L_1016c092;
  /* 1016c06f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1016c071 call 0x1016a013 */
  push32(0x1016c076u); f_1016a013();
  /* 1016c076 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c07a pop ecx */
  ECX = (pop32());
  /* 1016c07b jne 0x1016c08a */
  if (!C.zf) goto L_1016c08a;
  /* 1016c07d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 1016c080 push eax */
  push32((uint32_t)(EAX));
  /* 1016c081 call dword ptr [0x1016e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e094))), 0x1016c087u);
  /* 1016c087 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1016c08a:;
  /* 1016c08a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1016c08c call 0x1016a074 */
  push32(0x1016c091u); f_1016a074();
  /* 1016c091 pop ecx */
  ECX = (pop32());
L_1016c092:;
  /* 1016c092 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1016c094 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 1016c098 push eax */
  push32((uint32_t)(EAX));
  /* 1016c099 call dword ptr [0x1016e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e00c))), 0x1016c09fu);
  /* 1016c09f pop edi */
  EDI = (pop32());
  /* 1016c0a0 pop esi */
  ESI = (pop32());
  /* 1016c0a1 pop ebx */
  EBX = (pop32());
  /* 1016c0a2 ret  */
  ESPCHK(0x1016c044u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a3 @ 0x1016c0a3 (34 bytes, 10 insns) */
void f_1016c0a3(void) {
  FTRACE(0x1016c0a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016c0a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016c0a7 mov ecx, eax */
  ECX = (EAX);
  /* 1016c0a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1016c0ac sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1016c0af lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1016c0b2 mov ecx, dword ptr [ecx*4 + 0x10177cc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10177cc0)));
  /* 1016c0b9 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 1016c0bd push eax */
  push32((uint32_t)(EAX));
  /* 1016c0be call dword ptr [0x1016e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e008))), 0x1016c0c4u);
  /* 1016c0c4 ret  */
  ESPCHK(0x1016c0a3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c146 @ 0x1016c146 (46 bytes, 22 insns) */
void f_1016c146(void) {
  FTRACE(0x1016c146u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016c146 push esi */
  push32((uint32_t)(ESI));
  /* 1016c147 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1016c14b push esi */
  push32((uint32_t)(ESI));
  /* 1016c14c call 0x1016c174 */
  push32(0x1016c151u); f_1016c174();
  /* 1016c151 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016c153 pop ecx */
  ECX = (pop32());
  /* 1016c154 je 0x1016c15b */
  if (C.zf) goto L_1016c15b;
  /* 1016c156 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1016c159 pop esi */
  ESI = (pop32());
  /* 1016c15a ret  */
  ESPCHK(0x1016c146u, _esp0);
  ESP += 4; return;
L_1016c15b:;
  /* 1016c15b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 1016c15f je 0x1016c170 */
  if (C.zf) goto L_1016c170;
  /* 1016c161 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1016c164 call 0x1016d2c0 */
  push32(0x1016c169u); f_1016d2c0();
  /* 1016c169 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1016c16b pop ecx */
  ECX = (pop32());
  /* 1016c16c pop esi */
  ESI = (pop32());
  /* 1016c16d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016c16f ret  */
  ESPCHK(0x1016c146u, _esp0);
  ESP += 4; return;
L_1016c170:;
  /* 1016c170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016c172 pop esi */
  ESI = (pop32());
  /* 1016c173 ret  */
  ESPCHK(0x1016c146u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c174 @ 0x1016c174 (92 bytes, 40 insns) */
void f_1016c174(void) {
  FTRACE(0x1016c174u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016c174 push ebx */
  push32((uint32_t)(EBX));
  /* 1016c175 push esi */
  push32((uint32_t)(ESI));
  /* 1016c176 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1016c17a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016c17c push edi */
  push32((uint32_t)(EDI));
  /* 1016c17d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1016c180 mov ecx, eax */
  ECX = (EAX);
  /* 1016c182 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1016c185 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c188 jne 0x1016c1c1 */
  if (!C.zf) goto L_1016c1c1;
  /* 1016c18a test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 1016c18e je 0x1016c1c1 */
  if (C.zf) goto L_1016c1c1;
  /* 1016c190 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1016c193 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 1016c195 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016c197 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1016c199 jle 0x1016c1c1 */
  if ((C.zf||C.sf!=C.of)) goto L_1016c1c1;
  /* 1016c19b push edi */
  push32((uint32_t)(EDI));
  /* 1016c19c push eax */
  push32((uint32_t)(EAX));
  /* 1016c19d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1016c1a0 call 0x10168c75 */
  push32(0x1016c1a5u); f_10168c75();
  /* 1016c1a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016c1a8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c1aa jne 0x1016c1ba */
  if (!C.zf) goto L_1016c1ba;
  /* 1016c1ac mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1016c1af test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 1016c1b1 je 0x1016c1c1 */
  if (C.zf) goto L_1016c1c1;
  /* 1016c1b3 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 1016c1b5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1016c1b8 jmp 0x1016c1c1 */
  goto L_1016c1c1;
L_1016c1ba:;
  /* 1016c1ba or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1016c1be or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_1016c1c1:;
  /* 1016c1c1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1016c1c4 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1016c1c8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1016c1ca pop edi */
  EDI = (pop32());
  /* 1016c1cb mov eax, ebx */
  EAX = (EBX);
  /* 1016c1cd pop esi */
  ESI = (pop32());
  /* 1016c1ce pop ebx */
  EBX = (pop32());
  /* 1016c1cf ret  */
  ESPCHK(0x1016c174u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1d9 @ 0x1016c1d9 (164 bytes, 66 insns) */
void f_1016c1d9(void) {
  FTRACE(0x1016c1d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016c1d9 push ebx */
  push32((uint32_t)(EBX));
  /* 1016c1da push esi */
  push32((uint32_t)(ESI));
  /* 1016c1db push edi */
  push32((uint32_t)(EDI));
  /* 1016c1dc push 2 */
  push32((uint32_t)(0x2u));
  /* 1016c1de xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016c1e0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1016c1e2 call 0x1016a013 */
  push32(0x1016c1e7u); f_1016a013();
  /* 1016c1e7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1016c1e9 pop ecx */
  ECX = (pop32());
  /* 1016c1ea cmp dword ptr [0x10177ca0], esi */
  { uint32_t _a=(r32((uint32_t)(0x10177ca0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c1f0 jle 0x1016c266 */
  if ((C.zf||C.sf!=C.of)) goto L_1016c266;
L_1016c1f2:;
  /* 1016c1f2 mov eax, dword ptr [0x10176c88] */
  EAX = (r32((uint32_t)(0x10176c88)));
  /* 1016c1f7 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1016c1fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016c1fc je 0x1016c25d */
  if (C.zf) goto L_1016c25d;
  /* 1016c1fe test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1016c202 je 0x1016c25d */
  if (C.zf) goto L_1016c25d;
  /* 1016c204 push eax */
  push32((uint32_t)(EAX));
  /* 1016c205 push esi */
  push32((uint32_t)(ESI));
  /* 1016c206 call 0x10168fbd */
  push32(0x1016c20bu); f_10168fbd();
  /* 1016c20b mov eax, dword ptr [0x10176c88] */
  EAX = (r32((uint32_t)(0x10176c88)));
  /* 1016c210 pop ecx */
  ECX = (pop32());
  /* 1016c211 pop ecx */
  ECX = (pop32());
  /* 1016c212 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1016c215 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1016c218 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 1016c21b je 0x1016c24d */
  if (C.zf) goto L_1016c24d;
  /* 1016c21d cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c222 jne 0x1016c233 */
  if (!C.zf) goto L_1016c233;
  /* 1016c224 push eax */
  push32((uint32_t)(EAX));
  /* 1016c225 call 0x1016c146 */
  push32(0x1016c22au); f_1016c146();
  /* 1016c22a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c22d pop ecx */
  ECX = (pop32());
  /* 1016c22e je 0x1016c24d */
  if (C.zf) goto L_1016c24d;
  /* 1016c230 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1016c231 jmp 0x1016c24d */
  goto L_1016c24d;
L_1016c233:;
  /* 1016c233 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c238 jne 0x1016c24d */
  if (!C.zf) goto L_1016c24d;
  /* 1016c23a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 1016c23d je 0x1016c24d */
  if (C.zf) goto L_1016c24d;
  /* 1016c23f push eax */
  push32((uint32_t)(EAX));
  /* 1016c240 call 0x1016c146 */
  push32(0x1016c245u); f_1016c146();
  /* 1016c245 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c248 pop ecx */
  ECX = (pop32());
  /* 1016c249 jne 0x1016c24d */
  if (!C.zf) goto L_1016c24d;
  /* 1016c24b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_1016c24d:;
  /* 1016c24d mov eax, dword ptr [0x10176c88] */
  EAX = (r32((uint32_t)(0x10176c88)));
  /* 1016c252 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 1016c255 push esi */
  push32((uint32_t)(ESI));
  /* 1016c256 call 0x1016900f */
  push32(0x1016c25bu); f_1016900f();
  /* 1016c25b pop ecx */
  ECX = (pop32());
  /* 1016c25c pop ecx */
  ECX = (pop32());
L_1016c25d:;
  /* 1016c25d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016c25e cmp esi, dword ptr [0x10177ca0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10177ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c264 jl 0x1016c1f2 */
  if ((C.sf!=C.of)) goto L_1016c1f2;
L_1016c266:;
  /* 1016c266 push 2 */
  push32((uint32_t)(0x2u));
  /* 1016c268 call 0x1016a074 */
  push32(0x1016c26du); f_1016a074();
  /* 1016c26d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c272 pop ecx */
  ECX = (pop32());
  /* 1016c273 mov eax, ebx */
  EAX = (EBX);
  /* 1016c275 je 0x1016c279 */
  if (C.zf) goto L_1016c279;
  /* 1016c277 mov eax, edi */
  EAX = (EDI);
L_1016c279:;
  /* 1016c279 pop edi */
  EDI = (pop32());
  /* 1016c27a pop esi */
  ESI = (pop32());
  /* 1016c27b pop ebx */
  EBX = (pop32());
  /* 1016c27c ret  */
  ESPCHK(0x1016c1d9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c27d @ 0x1016c27d (318 bytes, 123 insns) */
void f_1016c27d(void) {
  FTRACE(0x1016c27du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016c27d push ebp */
  push32((uint32_t)(EBP));
  /* 1016c27e mov ebp, esp */
  EBP = (ESP);
  /* 1016c280 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1016c282 push 0x1016e560 */
  push32((uint32_t)(0x1016e560u));
  /* 1016c287 push 0x1016d030 */
  push32((uint32_t)(0x1016d030u));
  /* 1016c28c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1016c292 push eax */
  push32((uint32_t)(EAX));
  /* 1016c293 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1016c29a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016c29d push ebx */
  push32((uint32_t)(EBX));
  /* 1016c29e push esi */
  push32((uint32_t)(ESI));
  /* 1016c29f push edi */
  push32((uint32_t)(EDI));
  /* 1016c2a0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1016c2a3 mov eax, dword ptr [0x101768e4] */
  EAX = (r32((uint32_t)(0x101768e4)));
  /* 1016c2a8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016c2aa cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c2ac jne 0x1016c2ec */
  if (!C.zf) goto L_1016c2ec;
  /* 1016c2ae lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1016c2b1 push eax */
  push32((uint32_t)(EAX));
  /* 1016c2b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016c2b4 pop esi */
  ESI = (pop32());
  /* 1016c2b5 push esi */
  push32((uint32_t)(ESI));
  /* 1016c2b6 push 0x1016e558 */
  push32((uint32_t)(0x1016e558u));
  /* 1016c2bb push esi */
  push32((uint32_t)(ESI));
  /* 1016c2bc call dword ptr [0x1016e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0c0))), 0x1016c2c2u);
  /* 1016c2c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016c2c4 je 0x1016c2ca */
  if (C.zf) goto L_1016c2ca;
  /* 1016c2c6 mov eax, esi */
  EAX = (ESI);
  /* 1016c2c8 jmp 0x1016c2e7 */
  goto L_1016c2e7;
L_1016c2ca:;
  /* 1016c2ca lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1016c2cd push eax */
  push32((uint32_t)(EAX));
  /* 1016c2ce push esi */
  push32((uint32_t)(ESI));
  /* 1016c2cf push 0x1016e554 */
  push32((uint32_t)(0x1016e554u));
  /* 1016c2d4 push esi */
  push32((uint32_t)(ESI));
  /* 1016c2d5 push ebx */
  push32((uint32_t)(EBX));
  /* 1016c2d6 call dword ptr [0x1016e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0bc))), 0x1016c2dcu);
  /* 1016c2dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016c2de je 0x1016c3b2 */
  if (C.zf) goto L_1016c3b2;
  /* 1016c2e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1016c2e6 pop eax */
  EAX = (pop32());
L_1016c2e7:;
  /* 1016c2e7 mov dword ptr [0x101768e4], eax */
  w32((uint32_t)(0x101768e4), (EAX));
L_1016c2ec:;
  /* 1016c2ec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c2ef jne 0x1016c315 */
  if (!C.zf) goto L_1016c315;
  /* 1016c2f1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1016c2f4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c2f6 jne 0x1016c2fd */
  if (!C.zf) goto L_1016c2fd;
  /* 1016c2f8 mov eax, dword ptr [0x101768b8] */
  EAX = (r32((uint32_t)(0x101768b8)));
L_1016c2fd:;
  /* 1016c2fd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1016c300 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1016c303 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1016c306 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1016c309 push eax */
  push32((uint32_t)(EAX));
  /* 1016c30a call dword ptr [0x1016e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0bc))), 0x1016c310u);
  /* 1016c310 jmp 0x1016c3b4 */
  goto L_1016c3b4;
L_1016c315:;
  /* 1016c315 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c318 jne 0x1016c3b2 */
  if (!C.zf) goto L_1016c3b2;
  /* 1016c31e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c321 jne 0x1016c32b */
  if (!C.zf) goto L_1016c32b;
  /* 1016c323 mov eax, dword ptr [0x101768c8] */
  EAX = (r32((uint32_t)(0x101768c8)));
  /* 1016c328 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1016c32b:;
  /* 1016c32b push ebx */
  push32((uint32_t)(EBX));
  /* 1016c32c push ebx */
  push32((uint32_t)(EBX));
  /* 1016c32d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1016c330 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1016c333 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1016c336 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1016c338 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016c33a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1016c33d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016c33e push eax */
  push32((uint32_t)(EAX));
  /* 1016c33f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1016c342 call dword ptr [0x1016e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0b8))), 0x1016c348u);
  /* 1016c348 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1016c34b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c34d je 0x1016c3b2 */
  if (C.zf) goto L_1016c3b2;
  /* 1016c34f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1016c352 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1016c355 mov eax, edi */
  EAX = (EDI);
  /* 1016c357 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016c35a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1016c35c call 0x1016aed0 */
  push32(0x1016c361u); f_1016aed0();
  /* 1016c361 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1016c364 mov esi, esp */
  ESI = (ESP);
  /* 1016c366 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1016c369 push edi */
  push32((uint32_t)(EDI));
  /* 1016c36a push ebx */
  push32((uint32_t)(EBX));
  /* 1016c36b push esi */
  push32((uint32_t)(ESI));
  /* 1016c36c call 0x10169be0 */
  push32(0x1016c371u); f_10169be0();
  /* 1016c371 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016c374 jmp 0x1016c381 */
  goto L_1016c381;
  /* 1016c376 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016c378 pop eax */
  EAX = (pop32());
  /* 1016c379 ret  */
  ESPCHK(0x1016c27du, _esp0);
  ESP += 4; return;
  /* 1016c37a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1016c37d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016c37f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1016c381:;
  /* 1016c381 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016c385 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c387 je 0x1016c3b2 */
  if (C.zf) goto L_1016c3b2;
  /* 1016c389 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1016c38c push esi */
  push32((uint32_t)(ESI));
  /* 1016c38d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1016c390 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1016c393 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016c395 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1016c398 call dword ptr [0x1016e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0b8))), 0x1016c39eu);
  /* 1016c39e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c3a0 je 0x1016c3b2 */
  if (C.zf) goto L_1016c3b2;
  /* 1016c3a2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1016c3a5 push eax */
  push32((uint32_t)(EAX));
  /* 1016c3a6 push esi */
  push32((uint32_t)(ESI));
  /* 1016c3a7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1016c3aa call dword ptr [0x1016e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0c0))), 0x1016c3b0u);
  /* 1016c3b0 jmp 0x1016c3b4 */
  goto L_1016c3b4;
L_1016c3b2:;
  /* 1016c3b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1016c3b4:;
  /* 1016c3b4 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1016c3b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1016c3ba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1016c3c1 pop edi */
  EDI = (pop32());
  /* 1016c3c2 pop esi */
  ESI = (pop32());
  /* 1016c3c3 pop ebx */
  EBX = (pop32());
  /* 1016c3c4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016c3c5 ret  */
  ESPCHK(0x1016c27du, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3c6 @ 0x1016c3c6 (511 bytes, 193 insns) */
void f_1016c3c6(void) {
  FTRACE(0x1016c3c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016c3c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1016c3c7 mov ebp, esp */
  EBP = (ESP);
  /* 1016c3c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1016c3cb push 0x1016e570 */
  push32((uint32_t)(0x1016e570u));
  /* 1016c3d0 push 0x1016d030 */
  push32((uint32_t)(0x1016d030u));
  /* 1016c3d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1016c3db push eax */
  push32((uint32_t)(EAX));
  /* 1016c3dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1016c3e3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016c3e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1016c3e7 push esi */
  push32((uint32_t)(ESI));
  /* 1016c3e8 push edi */
  push32((uint32_t)(EDI));
  /* 1016c3e9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1016c3ec xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1016c3ee cmp dword ptr [0x101768e8], edi */
  { uint32_t _a=(r32((uint32_t)(0x101768e8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c3f4 jne 0x1016c43c */
  if (!C.zf) goto L_1016c43c;
  /* 1016c3f6 push edi */
  push32((uint32_t)(EDI));
  /* 1016c3f7 push edi */
  push32((uint32_t)(EDI));
  /* 1016c3f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016c3fa pop ebx */
  EBX = (pop32());
  /* 1016c3fb push ebx */
  push32((uint32_t)(EBX));
  /* 1016c3fc push 0x1016e558 */
  push32((uint32_t)(0x1016e558u));
  /* 1016c401 mov esi, 0x100 */
  ESI = (0x100u);
  /* 1016c406 push esi */
  push32((uint32_t)(ESI));
  /* 1016c407 push edi */
  push32((uint32_t)(EDI));
  /* 1016c408 call dword ptr [0x1016e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0c8))), 0x1016c40eu);
  /* 1016c40e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016c410 je 0x1016c41a */
  if (C.zf) goto L_1016c41a;
  /* 1016c412 mov dword ptr [0x101768e8], ebx */
  w32((uint32_t)(0x101768e8), (EBX));
  /* 1016c418 jmp 0x1016c43c */
  goto L_1016c43c;
L_1016c41a:;
  /* 1016c41a push edi */
  push32((uint32_t)(EDI));
  /* 1016c41b push edi */
  push32((uint32_t)(EDI));
  /* 1016c41c push ebx */
  push32((uint32_t)(EBX));
  /* 1016c41d push 0x1016e554 */
  push32((uint32_t)(0x1016e554u));
  /* 1016c422 push esi */
  push32((uint32_t)(ESI));
  /* 1016c423 push edi */
  push32((uint32_t)(EDI));
  /* 1016c424 call dword ptr [0x1016e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0c4))), 0x1016c42au);
  /* 1016c42a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016c42c je 0x1016c554 */
  if (C.zf) goto L_1016c554;
  /* 1016c432 mov dword ptr [0x101768e8], 2 */
  w32((uint32_t)(0x101768e8), (0x2u));
L_1016c43c:;
  /* 1016c43c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c43f jle 0x1016c451 */
  if ((C.zf||C.sf!=C.of)) goto L_1016c451;
  /* 1016c441 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1016c444 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1016c447 call 0x1016c5ea */
  push32(0x1016c44cu); f_1016c5ea();
  /* 1016c44c pop ecx */
  ECX = (pop32());
  /* 1016c44d pop ecx */
  ECX = (pop32());
  /* 1016c44e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1016c451:;
  /* 1016c451 mov eax, dword ptr [0x101768e8] */
  EAX = (r32((uint32_t)(0x101768e8)));
  /* 1016c456 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c459 jne 0x1016c478 */
  if (!C.zf) goto L_1016c478;
  /* 1016c45b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1016c45e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1016c461 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1016c464 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1016c467 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1016c46a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1016c46d call dword ptr [0x1016e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0c4))), 0x1016c473u);
  /* 1016c473 jmp 0x1016c556 */
  goto L_1016c556;
L_1016c478:;
  /* 1016c478 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c47b jne 0x1016c554 */
  if (!C.zf) goto L_1016c554;
  /* 1016c481 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c484 jne 0x1016c48e */
  if (!C.zf) goto L_1016c48e;
  /* 1016c486 mov eax, dword ptr [0x101768c8] */
  EAX = (r32((uint32_t)(0x101768c8)));
  /* 1016c48b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1016c48e:;
  /* 1016c48e push edi */
  push32((uint32_t)(EDI));
  /* 1016c48f push edi */
  push32((uint32_t)(EDI));
  /* 1016c490 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1016c493 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1016c496 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1016c499 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1016c49b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016c49d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1016c4a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016c4a1 push eax */
  push32((uint32_t)(EAX));
  /* 1016c4a2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1016c4a5 call dword ptr [0x1016e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0b8))), 0x1016c4abu);
  /* 1016c4ab mov ebx, eax */
  EBX = (EAX);
  /* 1016c4ad mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1016c4b0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c4b2 je 0x1016c554 */
  if (C.zf) goto L_1016c554;
  /* 1016c4b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1016c4bb lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1016c4be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016c4c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1016c4c3 call 0x1016aed0 */
  push32(0x1016c4c8u); f_1016aed0();
  /* 1016c4c8 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1016c4cb mov eax, esp */
  EAX = (ESP);
  /* 1016c4cd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1016c4d0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016c4d4 jmp 0x1016c4e9 */
  goto L_1016c4e9;
  /* 1016c4d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016c4d8 pop eax */
  EAX = (pop32());
  /* 1016c4d9 ret  */
  ESPCHK(0x1016c3c6u, _esp0);
  ESP += 4; return;
  /* 1016c4da mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1016c4dd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1016c4df mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1016c4e2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016c4e6 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_1016c4e9:;
  /* 1016c4e9 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c4ec je 0x1016c554 */
  if (C.zf) goto L_1016c554;
  /* 1016c4ee push ebx */
  push32((uint32_t)(EBX));
  /* 1016c4ef push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1016c4f2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1016c4f5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1016c4f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016c4fa push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1016c4fd call dword ptr [0x1016e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0b8))), 0x1016c503u);
  /* 1016c503 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016c505 je 0x1016c554 */
  if (C.zf) goto L_1016c554;
  /* 1016c507 push edi */
  push32((uint32_t)(EDI));
  /* 1016c508 push edi */
  push32((uint32_t)(EDI));
  /* 1016c509 push ebx */
  push32((uint32_t)(EBX));
  /* 1016c50a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1016c50d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1016c510 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1016c513 call dword ptr [0x1016e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0c8))), 0x1016c519u);
  /* 1016c519 mov esi, eax */
  ESI = (EAX);
  /* 1016c51b mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1016c51e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c520 je 0x1016c554 */
  if (C.zf) goto L_1016c554;
  /* 1016c522 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 1016c526 je 0x1016c568 */
  if (C.zf) goto L_1016c568;
  /* 1016c528 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c52b je 0x1016c5e3 */
  if (C.zf) goto L_1016c5e3;
  /* 1016c531 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c534 jg 0x1016c554 */
  if ((!C.zf&&C.sf==C.of)) goto L_1016c554;
  /* 1016c536 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1016c539 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1016c53c push ebx */
  push32((uint32_t)(EBX));
  /* 1016c53d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1016c540 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1016c543 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1016c546 call dword ptr [0x1016e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0c8))), 0x1016c54cu);
  /* 1016c54c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016c54e jne 0x1016c5e3 */
  if (!C.zf) goto L_1016c5e3;
L_1016c554:;
  /* 1016c554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1016c556:;
  /* 1016c556 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1016c559 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1016c55c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1016c563 pop edi */
  EDI = (pop32());
  /* 1016c564 pop esi */
  ESI = (pop32());
  /* 1016c565 pop ebx */
  EBX = (pop32());
  /* 1016c566 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016c567 ret  */
  ESPCHK(0x1016c3c6u, _esp0);
  ESP += 4; return;
L_1016c568:;
  /* 1016c568 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1016c56f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1016c572 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016c575 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1016c577 call 0x1016aed0 */
  push32(0x1016c57cu); f_1016aed0();
  /* 1016c57c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1016c57f mov ebx, esp */
  EBX = (ESP);
  /* 1016c581 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1016c584 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016c588 jmp 0x1016c59c */
  goto L_1016c59c;
  /* 1016c58a push 1 */
  push32((uint32_t)(0x1u));
  /* 1016c58c pop eax */
  EAX = (pop32());
  /* 1016c58d ret  */
  ESPCHK(0x1016c3c6u, _esp0);
  ESP += 4; return;
  /* 1016c58e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1016c591 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1016c593 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016c595 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016c599 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_1016c59c:;
  /* 1016c59c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c59e je 0x1016c554 */
  if (C.zf) goto L_1016c554;
  /* 1016c5a0 push esi */
  push32((uint32_t)(ESI));
  /* 1016c5a1 push ebx */
  push32((uint32_t)(EBX));
  /* 1016c5a2 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1016c5a5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1016c5a8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1016c5ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1016c5ae call dword ptr [0x1016e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0c8))), 0x1016c5b4u);
  /* 1016c5b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016c5b6 je 0x1016c554 */
  if (C.zf) goto L_1016c554;
  /* 1016c5b8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c5bb push edi */
  push32((uint32_t)(EDI));
  /* 1016c5bc push edi */
  push32((uint32_t)(EDI));
  /* 1016c5bd jne 0x1016c5c3 */
  if (!C.zf) goto L_1016c5c3;
  /* 1016c5bf push edi */
  push32((uint32_t)(EDI));
  /* 1016c5c0 push edi */
  push32((uint32_t)(EDI));
  /* 1016c5c1 jmp 0x1016c5c9 */
  goto L_1016c5c9;
L_1016c5c3:;
  /* 1016c5c3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1016c5c6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_1016c5c9:;
  /* 1016c5c9 push esi */
  push32((uint32_t)(ESI));
  /* 1016c5ca push ebx */
  push32((uint32_t)(EBX));
  /* 1016c5cb push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1016c5d0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1016c5d3 call dword ptr [0x1016e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e060))), 0x1016c5d9u);
  /* 1016c5d9 mov esi, eax */
  ESI = (EAX);
  /* 1016c5db cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c5dd je 0x1016c554 */
  if (C.zf) goto L_1016c554;
L_1016c5e3:;
  /* 1016c5e3 mov eax, esi */
  EAX = (ESI);
  /* 1016c5e5 jmp 0x1016c556 */
  goto L_1016c556;
}

/* FUN_1000c5ea @ 0x1016c5ea (43 bytes, 20 insns) */
void f_1016c5ea(void) {
  FTRACE(0x1016c5eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016c5ea mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1016c5ee mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016c5f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1016c5f4 push esi */
  push32((uint32_t)(ESI));
  /* 1016c5f5 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 1016c5f8 je 0x1016c607 */
  if (C.zf) goto L_1016c607;
L_1016c5fa:;
  /* 1016c5fa cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c5fd je 0x1016c607 */
  if (C.zf) goto L_1016c607;
  /* 1016c5ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016c600 mov esi, ecx */
  ESI = (ECX);
  /* 1016c602 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1016c603 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1016c605 jne 0x1016c5fa */
  if (!C.zf) goto L_1016c5fa;
L_1016c607:;
  /* 1016c607 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c60a pop esi */
  ESI = (pop32());
  /* 1016c60b jne 0x1016c612 */
  if (!C.zf) goto L_1016c612;
  /* 1016c60d sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016c611 ret  */
  ESPCHK(0x1016c5eau, _esp0);
  ESP += 4; return;
L_1016c612:;
  /* 1016c612 mov eax, edx */
  EAX = (EDX);
  /* 1016c614 ret  */
  ESPCHK(0x1016c5eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000c615 @ 0x1016c615 (33 bytes, 15 insns) */
void f_1016c615(void) {
  FTRACE(0x1016c615u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016c615 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016c619 push esi */
  push32((uint32_t)(ESI));
  /* 1016c61a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1016c61e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016c620 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 1016c623 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c625 jb 0x1016c62b */
  if (C.cf) goto L_1016c62b;
  /* 1016c627 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c629 jae 0x1016c62e */
  if (!C.cf) goto L_1016c62e;
L_1016c62b:;
  /* 1016c62b push 1 */
  push32((uint32_t)(0x1u));
  /* 1016c62d pop eax */
  EAX = (pop32());
L_1016c62e:;
  /* 1016c62e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1016c632 pop esi */
  ESI = (pop32());
  /* 1016c633 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1016c635 ret  */
  ESPCHK(0x1016c615u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x1016c636 (94 bytes, 38 insns) */
void f_1016c636(void) {
  FTRACE(0x1016c636u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016c636 push esi */
  push32((uint32_t)(ESI));
  /* 1016c637 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1016c63b push edi */
  push32((uint32_t)(EDI));
  /* 1016c63c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1016c640 push esi */
  push32((uint32_t)(ESI));
  /* 1016c641 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1016c643 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1016c645 call 0x1016c615 */
  push32(0x1016c64au); f_1016c615();
  /* 1016c64a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016c64d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016c64f je 0x1016c668 */
  if (C.zf) goto L_1016c668;
  /* 1016c651 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1016c654 push eax */
  push32((uint32_t)(EAX));
  /* 1016c655 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016c657 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1016c659 call 0x1016c615 */
  push32(0x1016c65eu); f_1016c615();
  /* 1016c65e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016c661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016c663 je 0x1016c668 */
  if (C.zf) goto L_1016c668;
  /* 1016c665 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1016c668:;
  /* 1016c668 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1016c66b push eax */
  push32((uint32_t)(EAX));
  /* 1016c66c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 1016c66f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1016c671 call 0x1016c615 */
  push32(0x1016c676u); f_1016c615();
  /* 1016c676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016c679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016c67b je 0x1016c680 */
  if (C.zf) goto L_1016c680;
  /* 1016c67d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1016c680:;
  /* 1016c680 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 1016c683 push eax */
  push32((uint32_t)(EAX));
  /* 1016c684 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1016c687 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1016c689 call 0x1016c615 */
  push32(0x1016c68eu); f_1016c615();
  /* 1016c68e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016c691 pop edi */
  EDI = (pop32());
  /* 1016c692 pop esi */
  ESI = (pop32());
  /* 1016c693 ret  */
  ESPCHK(0x1016c636u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c694 @ 0x1016c694 (46 bytes, 21 insns) */
void f_1016c694(void) {
  FTRACE(0x1016c694u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016c694 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016c698 push esi */
  push32((uint32_t)(ESI));
  /* 1016c699 push edi */
  push32((uint32_t)(EDI));
  /* 1016c69a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 1016c69c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 1016c69f mov ecx, esi */
  ECX = (ESI);
  /* 1016c6a1 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016c6a3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1016c6a5 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 1016c6a8 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1016c6ab or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1016c6ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1016c6b0 mov edx, edi */
  EDX = (EDI);
  /* 1016c6b2 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 1016c6b5 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 1016c6b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1016c6ba or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1016c6bc pop edi */
  EDI = (pop32());
  /* 1016c6bd mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1016c6c0 pop esi */
  ESI = (pop32());
  /* 1016c6c1 ret  */
  ESPCHK(0x1016c694u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6c2 @ 0x1016c6c2 (45 bytes, 21 insns) */
void f_1016c6c2(void) {
  FTRACE(0x1016c6c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016c6c2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1016c6c6 push esi */
  push32((uint32_t)(ESI));
  /* 1016c6c7 push edi */
  push32((uint32_t)(EDI));
  /* 1016c6c8 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 1016c6cb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1016c6ce mov esi, edx */
  ESI = (EDX);
  /* 1016c6d0 mov edi, ecx */
  EDI = (ECX);
  /* 1016c6d2 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 1016c6d5 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1016c6d7 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1016c6d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1016c6dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1016c6de shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 1016c6e1 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1016c6e3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1016c6e5 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1016c6e7 pop edi */
  EDI = (pop32());
  /* 1016c6e8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1016c6eb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1016c6ed pop esi */
  ESI = (pop32());
  /* 1016c6ee ret  */
  ESPCHK(0x1016c6c2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6ef @ 0x1016c6ef (199 bytes, 76 insns) */
void f_1016c6ef(void) {
  FTRACE(0x1016c6efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016c6ef push ebp */
  push32((uint32_t)(EBP));
  /* 1016c6f0 mov ebp, esp */
  EBP = (ESP);
  /* 1016c6f2 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016c6f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016c6f8 push ebx */
  push32((uint32_t)(EBX));
  /* 1016c6f9 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1016c6fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1016c6fe cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c700 push esi */
  push32((uint32_t)(ESI));
  /* 1016c701 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 1016c708 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 1016c70a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 1016c70d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 1016c710 jbe 0x1016c763 */
  if ((C.cf||C.zf)) goto L_1016c763;
  /* 1016c712 push edi */
  push32((uint32_t)(EDI));
  /* 1016c713 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1016c716:;
  /* 1016c716 mov esi, ebx */
  ESI = (EBX);
  /* 1016c718 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 1016c71b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1016c71c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1016c71d push ebx */
  push32((uint32_t)(EBX));
  /* 1016c71e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1016c71f call 0x1016c694 */
  push32(0x1016c724u); f_1016c694();
  /* 1016c724 push ebx */
  push32((uint32_t)(EBX));
  /* 1016c725 call 0x1016c694 */
  push32(0x1016c72au); f_1016c694();
  /* 1016c72a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1016c72d push eax */
  push32((uint32_t)(EAX));
  /* 1016c72e push ebx */
  push32((uint32_t)(EBX));
  /* 1016c72f call 0x1016c636 */
  push32(0x1016c734u); f_1016c636();
  /* 1016c734 push ebx */
  push32((uint32_t)(EBX));
  /* 1016c735 call 0x1016c694 */
  push32(0x1016c73au); f_1016c694();
  /* 1016c73a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016c73d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 1016c741 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1016c745 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1016c748 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1016c74b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1016c74e push eax */
  push32((uint32_t)(EAX));
  /* 1016c74f push ebx */
  push32((uint32_t)(EBX));
  /* 1016c750 call 0x1016c636 */
  push32(0x1016c755u); f_1016c636();
  /* 1016c755 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016c758 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1016c75b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 1016c75e jne 0x1016c716 */
  if (!C.zf) goto L_1016c716;
  /* 1016c760 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1016c762 pop edi */
  EDI = (pop32());
L_1016c763:;
  /* 1016c763 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c766 jne 0x1016c790 */
  if (!C.zf) goto L_1016c790;
  /* 1016c768 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1016c76b mov eax, ecx */
  EAX = (ECX);
  /* 1016c76d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1016c770 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 1016c773 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1016c775 mov esi, eax */
  ESI = (EAX);
  /* 1016c777 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1016c77a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 1016c77d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1016c77f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1016c782 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1016c789 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 1016c78c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1016c78e jmp 0x1016c763 */
  goto L_1016c763;
L_1016c790:;
  /* 1016c790 mov esi, 0x8000 */
  ESI = (0x8000u);
L_1016c795:;
  /* 1016c795 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 1016c798 jne 0x1016c7aa */
  if (!C.zf) goto L_1016c7aa;
  /* 1016c79a push ebx */
  push32((uint32_t)(EBX));
  /* 1016c79b call 0x1016c694 */
  push32(0x1016c7a0u); f_1016c694();
  /* 1016c7a0 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1016c7a7 pop ecx */
  ECX = (pop32());
  /* 1016c7a8 jmp 0x1016c795 */
  goto L_1016c795;
L_1016c7aa:;
  /* 1016c7aa mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1016c7ae pop esi */
  ESI = (pop32());
  /* 1016c7af mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 1016c7b3 pop ebx */
  EBX = (pop32());
  /* 1016c7b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016c7b5 ret  */
  ESPCHK(0x1016c6efu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7b6 @ 0x1016c7b6 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_1016c7b6(void) {
  FTRACE(0x1016c7b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016c7b6 push ebp */
  push32((uint32_t)(EBP));
  /* 1016c7b7 mov ebp, esp */
  EBP = (ESP);
  /* 1016c7b9 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016c7bc push ebx */
  push32((uint32_t)(EBX));
  /* 1016c7bd push esi */
  push32((uint32_t)(ESI));
  /* 1016c7be push edi */
  push32((uint32_t)(EDI));
  /* 1016c7bf mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1016c7c2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1016c7c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016c7c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1016c7ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016c7cc pop edx */
  EDX = (pop32());
  /* 1016c7cd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1016c7d0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1016c7d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1016c7d6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1016c7d9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1016c7dc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1016c7df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1016c7e2 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1016c7e5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1016c7e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1016c7eb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1016c7ee mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_1016c7f1:;
  /* 1016c7f1 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 1016c7f3 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c7f6 je 0x1016c807 */
  if (C.zf) goto L_1016c807;
  /* 1016c7f8 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c7fb je 0x1016c807 */
  if (C.zf) goto L_1016c807;
  /* 1016c7fd cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c800 je 0x1016c807 */
  if (C.zf) goto L_1016c807;
  /* 1016c802 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c805 jne 0x1016c80a */
  if (!C.zf) goto L_1016c80a;
L_1016c807:;
  /* 1016c807 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016c808 jmp 0x1016c7f1 */
  goto L_1016c7f1;
L_1016c80a:;
  /* 1016c80a push 4 */
  push32((uint32_t)(0x4u));
  /* 1016c80c pop esi */
  ESI = (pop32());
L_1016c80d:;
  /* 1016c80d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1016c80f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016c810 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c813 ja 0x1016ca90 */
  if ((!C.cf&&!C.zf)) goto L_1016ca90;
  /* 1016c819 jmp dword ptr [eax*4 + 0x1016cc57] */
  switch (EAX) {
    case 0: goto L_1016c820;
    case 1: goto L_1016c86f;
    case 2: goto L_1016c8c6;
    case 3: goto L_1016c8f0;
    case 4: goto L_1016c94b;
    case 5: goto L_1016c9c2;
    case 6: goto L_1016c9f8;
    case 7: goto L_1016ca42;
    case 8: goto L_1016ca21;
    case 9: goto L_1016caa6;
    case 10: goto L_1016ca90;
    case 11: goto L_1016ca5c;
    default: x86_unimpl("switch@0x1016c819 out of table"); return;
  }
L_1016c820:;
  /* 1016c820 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c823 jl 0x1016c831 */
  if ((C.sf!=C.of)) goto L_1016c831;
  /* 1016c825 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c828 jg 0x1016c831 */
  if ((!C.zf&&C.sf==C.of)) goto L_1016c831;
L_1016c82a:;
  /* 1016c82a push 3 */
  push32((uint32_t)(0x3u));
  /* 1016c82c jmp 0x1016ca4e */
  goto L_1016ca4e;
L_1016c831:;
  /* 1016c831 cmp bl, byte ptr [0x10170c64] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10170c64))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c837 jne 0x1016c840 */
  if (!C.zf) goto L_1016c840;
L_1016c839:;
  /* 1016c839 push 5 */
  push32((uint32_t)(0x5u));
  /* 1016c83b jmp 0x1016ca86 */
  goto L_1016ca86;
L_1016c840:;
  /* 1016c840 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1016c843 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016c846 je 0x1016c866 */
  if (C.zf) goto L_1016c866;
  /* 1016c848 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016c849 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016c84a je 0x1016c85a */
  if (C.zf) goto L_1016c85a;
  /* 1016c84c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016c84f jne 0x1016cb29 */
  if (!C.zf) goto L_1016cb29;
  /* 1016c855 jmp 0x1016c8e9 */
  goto L_1016c8e9;
L_1016c85a:;
  /* 1016c85a push 2 */
  push32((uint32_t)(0x2u));
  /* 1016c85c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 1016c863 pop eax */
  EAX = (pop32());
  /* 1016c864 jmp 0x1016c80d */
  goto L_1016c80d;
L_1016c866:;
  /* 1016c866 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 1016c86a push 2 */
  push32((uint32_t)(0x2u));
  /* 1016c86c pop eax */
  EAX = (pop32());
  /* 1016c86d jmp 0x1016c80d */
  goto L_1016c80d;
L_1016c86f:;
  /* 1016c86f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c872 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1016c875 jl 0x1016c87c */
  if ((C.sf!=C.of)) goto L_1016c87c;
  /* 1016c877 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c87a jle 0x1016c82a */
  if ((C.zf||C.sf!=C.of)) goto L_1016c82a;
L_1016c87c:;
  /* 1016c87c cmp bl, byte ptr [0x10170c64] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10170c64))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c882 je 0x1016c944 */
  if (C.zf) goto L_1016c944;
  /* 1016c888 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c88b je 0x1016c8be */
  if (C.zf) goto L_1016c8be;
  /* 1016c88d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c890 je 0x1016c8be */
  if (C.zf) goto L_1016c8be;
  /* 1016c892 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c895 je 0x1016c8e9 */
  if (C.zf) goto L_1016c8e9;
L_1016c897:;
  /* 1016c897 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c89a jle 0x1016cb29 */
  if ((C.zf||C.sf!=C.of)) goto L_1016cb29;
  /* 1016c8a0 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c8a3 jle 0x1016c8b7 */
  if ((C.zf||C.sf!=C.of)) goto L_1016c8b7;
  /* 1016c8a5 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c8a8 jle 0x1016cb29 */
  if ((C.zf||C.sf!=C.of)) goto L_1016cb29;
  /* 1016c8ae cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c8b1 jg 0x1016cb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_1016cb29;
L_1016c8b7:;
  /* 1016c8b7 push 6 */
  push32((uint32_t)(0x6u));
  /* 1016c8b9 jmp 0x1016ca86 */
  goto L_1016ca86;
L_1016c8be:;
  /* 1016c8be dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1016c8bf push 0xb */
  push32((uint32_t)(0xbu));
  /* 1016c8c1 jmp 0x1016ca86 */
  goto L_1016ca86;
L_1016c8c6:;
  /* 1016c8c6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c8c9 jl 0x1016c8d4 */
  if ((C.sf!=C.of)) goto L_1016c8d4;
  /* 1016c8cb cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c8ce jle 0x1016c82a */
  if ((C.zf||C.sf!=C.of)) goto L_1016c82a;
L_1016c8d4:;
  /* 1016c8d4 cmp bl, byte ptr [0x10170c64] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10170c64))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c8da je 0x1016c839 */
  if (C.zf) goto L_1016c839;
  /* 1016c8e0 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c8e3 jne 0x1016ca9e */
  if (!C.zf) goto L_1016ca9e;
L_1016c8e9:;
  /* 1016c8e9 mov eax, edx */
  EAX = (EDX);
  /* 1016c8eb jmp 0x1016c80d */
  goto L_1016c80d;
L_1016c8f0:;
  /* 1016c8f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1016c8f3:;
  /* 1016c8f3 cmp dword ptr [0x10170c60], edx */
  { uint32_t _a=(r32((uint32_t)(0x10170c60))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c8f9 jle 0x1016c90c */
  if ((C.zf||C.sf!=C.of)) goto L_1016c90c;
  /* 1016c8fb movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1016c8fe push esi */
  push32((uint32_t)(ESI));
  /* 1016c8ff push eax */
  push32((uint32_t)(EAX));
  /* 1016c900 call 0x101693cb */
  push32(0x1016c905u); f_101693cb();
  /* 1016c905 pop ecx */
  ECX = (pop32());
  /* 1016c906 pop ecx */
  ECX = (pop32());
  /* 1016c907 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016c909 pop edx */
  EDX = (pop32());
  /* 1016c90a jmp 0x1016c91a */
  goto L_1016c91a;
L_1016c90c:;
  /* 1016c90c mov ecx, dword ptr [0x10170a50] */
  ECX = (r32((uint32_t)(0x10170a50)));
  /* 1016c912 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1016c915 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1016c918 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1016c91a:;
  /* 1016c91a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016c91c je 0x1016c93c */
  if (C.zf) goto L_1016c93c;
  /* 1016c91e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c922 jae 0x1016c934 */
  if (!C.cf) goto L_1016c934;
  /* 1016c924 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1016c927 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1016c92a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1016c92d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1016c930 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 1016c932 jmp 0x1016c937 */
  goto L_1016c937;
L_1016c934:;
  /* 1016c934 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_1016c937:;
  /* 1016c937 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1016c939 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016c93a jmp 0x1016c8f3 */
  goto L_1016c8f3;
L_1016c93c:;
  /* 1016c93c cmp bl, byte ptr [0x10170c64] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10170c64))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c942 jne 0x1016c9ab */
  if (!C.zf) goto L_1016c9ab;
L_1016c944:;
  /* 1016c944 mov eax, esi */
  EAX = (ESI);
  /* 1016c946 jmp 0x1016c80d */
  goto L_1016c80d;
L_1016c94b:;
  /* 1016c94b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c94f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1016c952 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1016c955 jne 0x1016c964 */
  if (!C.zf) goto L_1016c964;
L_1016c957:;
  /* 1016c957 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c95a jne 0x1016c964 */
  if (!C.zf) goto L_1016c964;
  /* 1016c95c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1016c95f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1016c961 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016c962 jmp 0x1016c957 */
  goto L_1016c957;
L_1016c964:;
  /* 1016c964 cmp dword ptr [0x10170c60], edx */
  { uint32_t _a=(r32((uint32_t)(0x10170c60))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c96a jle 0x1016c97d */
  if ((C.zf||C.sf!=C.of)) goto L_1016c97d;
  /* 1016c96c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1016c96f push esi */
  push32((uint32_t)(ESI));
  /* 1016c970 push eax */
  push32((uint32_t)(EAX));
  /* 1016c971 call 0x101693cb */
  push32(0x1016c976u); f_101693cb();
  /* 1016c976 pop ecx */
  ECX = (pop32());
  /* 1016c977 pop ecx */
  ECX = (pop32());
  /* 1016c978 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016c97a pop edx */
  EDX = (pop32());
  /* 1016c97b jmp 0x1016c98b */
  goto L_1016c98b;
L_1016c97d:;
  /* 1016c97d mov ecx, dword ptr [0x10170a50] */
  ECX = (r32((uint32_t)(0x10170a50)));
  /* 1016c983 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1016c986 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1016c989 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1016c98b:;
  /* 1016c98b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016c98d je 0x1016c9ab */
  if (C.zf) goto L_1016c9ab;
  /* 1016c98f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c993 jae 0x1016c9a6 */
  if (!C.cf) goto L_1016c9a6;
  /* 1016c995 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1016c998 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1016c99b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1016c99e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1016c9a1 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1016c9a4 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_1016c9a6:;
  /* 1016c9a6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1016c9a8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016c9a9 jmp 0x1016c964 */
  goto L_1016c964;
L_1016c9ab:;
  /* 1016c9ab cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c9ae je 0x1016c8be */
  if (C.zf) goto L_1016c8be;
  /* 1016c9b4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c9b7 je 0x1016c8be */
  if (C.zf) goto L_1016c8be;
  /* 1016c9bd jmp 0x1016c897 */
  goto L_1016c897;
L_1016c9c2:;
  /* 1016c9c2 cmp dword ptr [0x10170c60], edx */
  { uint32_t _a=(r32((uint32_t)(0x10170c60))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016c9c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1016c9cb jle 0x1016c9de */
  if ((C.zf||C.sf!=C.of)) goto L_1016c9de;
  /* 1016c9cd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1016c9d0 push esi */
  push32((uint32_t)(ESI));
  /* 1016c9d1 push eax */
  push32((uint32_t)(EAX));
  /* 1016c9d2 call 0x101693cb */
  push32(0x1016c9d7u); f_101693cb();
  /* 1016c9d7 pop ecx */
  ECX = (pop32());
  /* 1016c9d8 pop ecx */
  ECX = (pop32());
  /* 1016c9d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016c9db pop edx */
  EDX = (pop32());
  /* 1016c9dc jmp 0x1016c9ec */
  goto L_1016c9ec;
L_1016c9de:;
  /* 1016c9de mov ecx, dword ptr [0x10170a50] */
  ECX = (r32((uint32_t)(0x10170a50)));
  /* 1016c9e4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1016c9e7 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1016c9ea and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1016c9ec:;
  /* 1016c9ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016c9ee je 0x1016ca9e */
  if (C.zf) goto L_1016ca9e;
  /* 1016c9f4 mov eax, esi */
  EAX = (ESI);
  /* 1016c9f6 jmp 0x1016ca4f */
  goto L_1016ca4f;
L_1016c9f8:;
  /* 1016c9f8 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 1016c9fb cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016c9fe mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1016ca01 jl 0x1016ca08 */
  if ((C.sf!=C.of)) goto L_1016ca08;
  /* 1016ca03 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ca06 jle 0x1016ca4c */
  if ((C.zf||C.sf!=C.of)) goto L_1016ca4c;
L_1016ca08:;
  /* 1016ca08 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1016ca0b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016ca0e je 0x1016ca84 */
  if (C.zf) goto L_1016ca84;
  /* 1016ca10 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016ca11 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016ca12 je 0x1016ca78 */
  if (C.zf) goto L_1016ca78;
  /* 1016ca14 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016ca17 jne 0x1016cb2c */
  if (!C.zf) goto L_1016cb2c;
L_1016ca1d:;
  /* 1016ca1d push 8 */
  push32((uint32_t)(0x8u));
  /* 1016ca1f jmp 0x1016ca86 */
  goto L_1016ca86;
L_1016ca21:;
  /* 1016ca21 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1016ca24:;
  /* 1016ca24 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ca27 jne 0x1016ca2e */
  if (!C.zf) goto L_1016ca2e;
  /* 1016ca29 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1016ca2b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016ca2c jmp 0x1016ca24 */
  goto L_1016ca24;
L_1016ca2e:;
  /* 1016ca2e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ca31 jl 0x1016cb29 */
  if ((C.sf!=C.of)) goto L_1016cb29;
  /* 1016ca37 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ca3a jg 0x1016cb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_1016cb29;
  /* 1016ca40 jmp 0x1016ca4c */
  goto L_1016ca4c;
L_1016ca42:;
  /* 1016ca42 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ca45 jl 0x1016ca55 */
  if ((C.sf!=C.of)) goto L_1016ca55;
  /* 1016ca47 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ca4a jg 0x1016ca55 */
  if ((!C.zf&&C.sf==C.of)) goto L_1016ca55;
L_1016ca4c:;
  /* 1016ca4c push 9 */
  push32((uint32_t)(0x9u));
L_1016ca4e:;
  /* 1016ca4e pop eax */
  EAX = (pop32());
L_1016ca4f:;
  /* 1016ca4f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1016ca50 jmp 0x1016c80d */
  goto L_1016c80d;
L_1016ca55:;
  /* 1016ca55 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016ca58 jne 0x1016ca9e */
  if (!C.zf) goto L_1016ca9e;
  /* 1016ca5a jmp 0x1016ca1d */
  goto L_1016ca1d;
L_1016ca5c:;
  /* 1016ca5c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ca60 je 0x1016ca8c */
  if (C.zf) goto L_1016ca8c;
  /* 1016ca62 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1016ca65 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 1016ca68 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016ca6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1016ca6e je 0x1016ca84 */
  if (C.zf) goto L_1016ca84;
  /* 1016ca70 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016ca71 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016ca72 jne 0x1016cb2c */
  if (!C.zf) goto L_1016cb2c;
L_1016ca78:;
  /* 1016ca78 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 1016ca7c push 7 */
  push32((uint32_t)(0x7u));
  /* 1016ca7e pop eax */
  EAX = (pop32());
  /* 1016ca7f jmp 0x1016c80d */
  goto L_1016c80d;
L_1016ca84:;
  /* 1016ca84 push 7 */
  push32((uint32_t)(0x7u));
L_1016ca86:;
  /* 1016ca86 pop eax */
  EAX = (pop32());
  /* 1016ca87 jmp 0x1016c80d */
  goto L_1016c80d;
L_1016ca8c:;
  /* 1016ca8c push 0xa */
  push32((uint32_t)(0xau));
  /* 1016ca8e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1016ca8f pop eax */
  EAX = (pop32());
L_1016ca90:;
  /* 1016ca90 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ca93 je 0x1016cb2e */
  if (C.zf) goto L_1016cb2e;
  /* 1016ca99 jmp 0x1016c80d */
  goto L_1016c80d;
L_1016ca9e:;
  /* 1016ca9e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1016caa1 jmp 0x1016cb2e */
  goto L_1016cb2e;
L_1016caa6:;
  /* 1016caa6 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 1016caad xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1016caaf:;
  /* 1016caaf cmp dword ptr [0x10170c60], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10170c60))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cab6 jle 0x1016cac7 */
  if ((C.zf||C.sf!=C.of)) goto L_1016cac7;
  /* 1016cab8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1016cabb push 4 */
  push32((uint32_t)(0x4u));
  /* 1016cabd push eax */
  push32((uint32_t)(EAX));
  /* 1016cabe call 0x101693cb */
  push32(0x1016cac3u); f_101693cb();
  /* 1016cac3 pop ecx */
  ECX = (pop32());
  /* 1016cac4 pop ecx */
  ECX = (pop32());
  /* 1016cac5 jmp 0x1016cad6 */
  goto L_1016cad6;
L_1016cac7:;
  /* 1016cac7 mov ecx, dword ptr [0x10170a50] */
  ECX = (r32((uint32_t)(0x10170a50)));
  /* 1016cacd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1016cad0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1016cad3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1016cad6:;
  /* 1016cad6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016cad8 je 0x1016caf6 */
  if (C.zf) goto L_1016caf6;
  /* 1016cada movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1016cadd lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 1016cae0 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1016cae4 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016caea jg 0x1016caf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1016caf1;
  /* 1016caec mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1016caee inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016caef jmp 0x1016caaf */
  goto L_1016caaf;
L_1016caf1:;
  /* 1016caf1 mov esi, 0x1451 */
  ESI = (0x1451u);
L_1016caf6:;
  /* 1016caf6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_1016caf9:;
  /* 1016caf9 cmp dword ptr [0x10170c60], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10170c60))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cb00 jle 0x1016cb11 */
  if ((C.zf||C.sf!=C.of)) goto L_1016cb11;
  /* 1016cb02 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1016cb05 push 4 */
  push32((uint32_t)(0x4u));
  /* 1016cb07 push eax */
  push32((uint32_t)(EAX));
  /* 1016cb08 call 0x101693cb */
  push32(0x1016cb0du); f_101693cb();
  /* 1016cb0d pop ecx */
  ECX = (pop32());
  /* 1016cb0e pop ecx */
  ECX = (pop32());
  /* 1016cb0f jmp 0x1016cb20 */
  goto L_1016cb20;
L_1016cb11:;
  /* 1016cb11 mov ecx, dword ptr [0x10170a50] */
  ECX = (r32((uint32_t)(0x10170a50)));
  /* 1016cb17 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1016cb1a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1016cb1d and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1016cb20:;
  /* 1016cb20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016cb22 je 0x1016cb29 */
  if (C.zf) goto L_1016cb29;
  /* 1016cb24 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1016cb26 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016cb27 jmp 0x1016caf9 */
  goto L_1016caf9;
L_1016cb29:;
  /* 1016cb29 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1016cb2a jmp 0x1016cb2e */
  goto L_1016cb2e;
L_1016cb2c:;
  /* 1016cb2c mov edi, ecx */
  EDI = (ECX);
L_1016cb2e:;
  /* 1016cb2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016cb31 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cb35 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 1016cb37 je 0x1016cc16 */
  if (C.zf) goto L_1016cc16;
  /* 1016cb3d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1016cb3f pop eax */
  EAX = (pop32());
  /* 1016cb40 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cb43 jbe 0x1016cb5a */
  if ((C.cf||C.zf)) goto L_1016cb5a;
  /* 1016cb45 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016cb49 jl 0x1016cb4e */
  if ((C.sf!=C.of)) goto L_1016cb4e;
  /* 1016cb4b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_1016cb4e:;
  /* 1016cb4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1016cb51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1016cb54 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016cb55 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1016cb58 jmp 0x1016cb5d */
  goto L_1016cb5d;
L_1016cb5a:;
  /* 1016cb5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1016cb5d:;
  /* 1016cb5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cb61 jbe 0x1016cc0c */
  if ((C.cf||C.zf)) goto L_1016cc0c;
L_1016cb67:;
  /* 1016cb67 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016cb68 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016cb6b jne 0x1016cb75 */
  if (!C.zf) goto L_1016cb75;
  /* 1016cb6d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1016cb70 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1016cb73 jmp 0x1016cb67 */
  goto L_1016cb67;
L_1016cb75:;
  /* 1016cb75 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1016cb78 push eax */
  push32((uint32_t)(EAX));
  /* 1016cb79 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1016cb7c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1016cb7f push eax */
  push32((uint32_t)(EAX));
  /* 1016cb80 call 0x1016c6ef */
  push32(0x1016cb85u); f_1016c6ef();
  /* 1016cb85 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1016cb88 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1016cb8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016cb8d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cb90 jge 0x1016cb94 */
  if ((C.sf==C.of)) goto L_1016cb94;
  /* 1016cb92 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1016cb94:;
  /* 1016cb94 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016cb97 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cb9a jne 0x1016cb9f */
  if (!C.zf) goto L_1016cb9f;
  /* 1016cb9c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1016cb9f:;
  /* 1016cb9f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cba2 jne 0x1016cba7 */
  if (!C.zf) goto L_1016cba7;
  /* 1016cba4 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1016cba7:;
  /* 1016cba7 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cbac jle 0x1016cbde */
  if ((C.zf||C.sf!=C.of)) goto L_1016cbde;
  /* 1016cbae mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_1016cbb5:;
  /* 1016cbb5 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1016cbb8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1016cbbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1016cbbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_1016cbc1:;
  /* 1016cbc1 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cbc5 je 0x1016cc27 */
  if (C.zf) goto L_1016cc27;
  /* 1016cbc7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016cbc9 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 1016cbce mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1016cbd3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1016cbd5 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 1016cbdc jmp 0x1016cc3c */
  goto L_1016cc3c;
L_1016cbde:;
  /* 1016cbde cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cbe3 jge 0x1016cbee */
  if ((C.sf==C.of)) goto L_1016cbee;
  /* 1016cbe5 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 1016cbec jmp 0x1016cbb5 */
  goto L_1016cbb5;
L_1016cbee:;
  /* 1016cbee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1016cbf1 push eax */
  push32((uint32_t)(EAX));
  /* 1016cbf2 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1016cbf5 push eax */
  push32((uint32_t)(EAX));
  /* 1016cbf6 call 0x1016d68a */
  push32(0x1016cbfbu); f_1016d68a();
  /* 1016cbfb mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1016cbfe mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 1016cc01 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 1016cc04 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 1016cc07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016cc0a jmp 0x1016cbc1 */
  goto L_1016cbc1;
L_1016cc0c:;
  /* 1016cc0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1016cc0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016cc10 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1016cc12 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016cc14 jmp 0x1016cbc1 */
  goto L_1016cbc1;
L_1016cc16:;
  /* 1016cc16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1016cc18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016cc1a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1016cc1c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016cc1e mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 1016cc25 jmp 0x1016cc3c */
  goto L_1016cc3c;
L_1016cc27:;
  /* 1016cc27 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cc2b je 0x1016cc3c */
  if (C.zf) goto L_1016cc3c;
  /* 1016cc2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1016cc2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016cc31 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1016cc33 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016cc35 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1016cc3c:;
  /* 1016cc3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016cc3f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 1016cc42 pop edi */
  EDI = (pop32());
  /* 1016cc43 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 1016cc46 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 1016cc49 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 1016cc4d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1016cc50 pop esi */
  ESI = (pop32());
  /* 1016cc51 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1016cc54 pop ebx */
  EBX = (pop32());
  /* 1016cc55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016cc56 ret  */
  ESPCHK(0x1016c7b6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc87 @ 0x1016cc87 (659 bytes, 232 insns) */
void f_1016cc87(void) {
  FTRACE(0x1016cc87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016cc87 push ebp */
  push32((uint32_t)(EBP));
  /* 1016cc88 mov ebp, esp */
  EBP = (ESP);
  /* 1016cc8a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016cc8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1016cc90 push ebx */
  push32((uint32_t)(EBX));
  /* 1016cc91 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1016cc94 push esi */
  push32((uint32_t)(ESI));
  /* 1016cc95 mov ecx, eax */
  ECX = (EAX);
  /* 1016cc97 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 1016cc9c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1016cca2 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1016cca4 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1016cca7 push edi */
  push32((uint32_t)(EDI));
  /* 1016cca8 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 1016ccac mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 1016ccb0 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 1016ccb4 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 1016ccb8 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 1016ccbc mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 1016ccc0 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 1016ccc4 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 1016ccc8 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 1016cccc mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 1016ccd0 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 1016ccd4 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 1016ccd8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1016ccdf mov edx, eax */
  EDX = (EAX);
  /* 1016cce1 je 0x1016cce9 */
  if (C.zf) goto L_1016cce9;
  /* 1016cce3 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 1016cce7 jmp 0x1016cced */
  goto L_1016cced;
L_1016cce9:;
  /* 1016cce9 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_1016cced:;
  /* 1016cced mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1016ccf0 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 1016ccf3 jne 0x1016cd13 */
  if (!C.zf) goto L_1016cd13;
  /* 1016ccf5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1016ccf7 jne 0x1016cd13 */
  if (!C.zf) goto L_1016cd13;
  /* 1016ccf9 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ccfc jne 0x1016cd13 */
  if (!C.zf) goto L_1016cd13;
L_1016ccfe:;
  /* 1016ccfe and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1016cd02 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1016cd06 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1016cd0a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 1016cd0e jmp 0x1016cf11 */
  goto L_1016cf11;
L_1016cd13:;
  /* 1016cd13 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1016cd16 jne 0x1016cd92 */
  if (!C.zf) goto L_1016cd92;
  /* 1016cd18 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1016cd1d mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 1016cd22 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cd24 jne 0x1016cd2c */
  if (!C.zf) goto L_1016cd2c;
  /* 1016cd26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cd2a je 0x1016cd3b */
  if (C.zf) goto L_1016cd3b;
L_1016cd2c:;
  /* 1016cd2c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 1016cd32 jne 0x1016cd3b */
  if (!C.zf) goto L_1016cd3b;
  /* 1016cd34 push 0x1016e5a0 */
  push32((uint32_t)(0x1016e5a0u));
  /* 1016cd39 jmp 0x1016cd81 */
  goto L_1016cd81;
L_1016cd3b:;
  /* 1016cd3b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1016cd3e je 0x1016cd55 */
  if (C.zf) goto L_1016cd55;
  /* 1016cd40 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cd46 jne 0x1016cd55 */
  if (!C.zf) goto L_1016cd55;
  /* 1016cd48 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cd4c jne 0x1016cd7c */
  if (!C.zf) goto L_1016cd7c;
  /* 1016cd4e push 0x1016e598 */
  push32((uint32_t)(0x1016e598u));
  /* 1016cd53 jmp 0x1016cd64 */
  goto L_1016cd64;
L_1016cd55:;
  /* 1016cd55 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cd57 jne 0x1016cd7c */
  if (!C.zf) goto L_1016cd7c;
  /* 1016cd59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cd5d jne 0x1016cd7c */
  if (!C.zf) goto L_1016cd7c;
  /* 1016cd5f push 0x1016e590 */
  push32((uint32_t)(0x1016e590u));
L_1016cd64:;
  /* 1016cd64 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1016cd67 push eax */
  push32((uint32_t)(EAX));
  /* 1016cd68 call 0x10169af0 */
  push32(0x1016cd6du); f_10169af0();
  /* 1016cd6d pop ecx */
  ECX = (pop32());
  /* 1016cd6e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 1016cd72 pop ecx */
  ECX = (pop32());
L_1016cd73:;
  /* 1016cd73 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1016cd77 jmp 0x1016ceea */
  goto L_1016ceea;
L_1016cd7c:;
  /* 1016cd7c push 0x1016e588 */
  push32((uint32_t)(0x1016e588u));
L_1016cd81:;
  /* 1016cd81 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1016cd84 push eax */
  push32((uint32_t)(EAX));
  /* 1016cd85 call 0x10169af0 */
  push32(0x1016cd8au); f_10169af0();
  /* 1016cd8a pop ecx */
  ECX = (pop32());
  /* 1016cd8b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 1016cd8f pop ecx */
  ECX = (pop32());
  /* 1016cd90 jmp 0x1016cd73 */
  goto L_1016cd73;
L_1016cd92:;
  /* 1016cd92 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 1016cd95 mov ecx, edi */
  ECX = (EDI);
  /* 1016cd97 mov esi, eax */
  ESI = (EAX);
  /* 1016cd99 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 1016cd9c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1016cda2 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 1016cda5 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 1016cdaa push 1 */
  push32((uint32_t)(0x1u));
  /* 1016cdac lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 1016cdaf mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 1016cdb3 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1016cdb6 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 1016cdb9 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 1016cdc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016cdc3 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1016cdc6 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 1016cdc9 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1016cdcc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1016cdce push eax */
  push32((uint32_t)(EAX));
  /* 1016cdcf lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1016cdd2 push eax */
  push32((uint32_t)(EAX));
  /* 1016cdd3 call 0x1016d68a */
  push32(0x1016cdd8u); f_1016d68a();
  /* 1016cdd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016cddb cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1016cde1 jb 0x1016cdf3 */
  if (C.cf) goto L_1016cdf3;
  /* 1016cde3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1016cde6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016cde7 push eax */
  push32((uint32_t)(EAX));
  /* 1016cde8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1016cdeb push eax */
  push32((uint32_t)(EAX));
  /* 1016cdec call 0x1016d46a */
  push32(0x1016cdf1u); f_1016d46a();
  /* 1016cdf1 pop ecx */
  ECX = (pop32());
  /* 1016cdf2 pop ecx */
  ECX = (pop32());
L_1016cdf3:;
  /* 1016cdf3 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 1016cdf7 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 1016cdfa je 0x1016ce0d */
  if (C.zf) goto L_1016ce0d;
  /* 1016cdfc mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 1016cdff movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1016ce02 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016ce04 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1016ce06 jg 0x1016ce10 */
  if ((!C.zf&&C.sf==C.of)) goto L_1016ce10;
  /* 1016ce08 jmp 0x1016ccfe */
  goto L_1016ccfe;
L_1016ce0d:;
  /* 1016ce0d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_1016ce10:;
  /* 1016ce10 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ce13 jle 0x1016ce18 */
  if ((C.zf||C.sf!=C.of)) goto L_1016ce18;
  /* 1016ce15 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1016ce17 pop edi */
  EDI = (pop32());
L_1016ce18:;
  /* 1016ce18 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 1016ce1c sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016ce22 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 1016ce27 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_1016ce2e:;
  /* 1016ce2e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1016ce31 push eax */
  push32((uint32_t)(EAX));
  /* 1016ce32 call 0x1016c694 */
  push32(0x1016ce37u); f_1016c694();
  /* 1016ce37 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 1016ce3a pop ecx */
  ECX = (pop32());
  /* 1016ce3b jne 0x1016ce2e */
  if (!C.zf) goto L_1016ce2e;
  /* 1016ce3d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1016ce3f jge 0x1016ce58 */
  if ((C.sf==C.of)) goto L_1016ce58;
  /* 1016ce41 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 1016ce43 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 1016ce49 jle 0x1016ce58 */
  if ((C.zf||C.sf!=C.of)) goto L_1016ce58;
L_1016ce4b:;
  /* 1016ce4b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1016ce4e push eax */
  push32((uint32_t)(EAX));
  /* 1016ce4f call 0x1016c6c2 */
  push32(0x1016ce54u); f_1016c6c2();
  /* 1016ce54 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1016ce55 pop ecx */
  ECX = (pop32());
  /* 1016ce56 jne 0x1016ce4b */
  if (!C.zf) goto L_1016ce4b;
L_1016ce58:;
  /* 1016ce58 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 1016ce5b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1016ce5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1016ce60 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 1016ce63 jle 0x1016ceb5 */
  if ((C.zf||C.sf!=C.of)) goto L_1016ceb5;
  /* 1016ce65 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_1016ce68:;
  /* 1016ce68 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 1016ce6b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 1016ce6e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1016ce6f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1016ce70 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1016ce73 push eax */
  push32((uint32_t)(EAX));
  /* 1016ce74 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1016ce75 call 0x1016c694 */
  push32(0x1016ce7au); f_1016c694();
  /* 1016ce7a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1016ce7d push eax */
  push32((uint32_t)(EAX));
  /* 1016ce7e call 0x1016c694 */
  push32(0x1016ce83u); f_1016c694();
  /* 1016ce83 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1016ce86 push eax */
  push32((uint32_t)(EAX));
  /* 1016ce87 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1016ce8a push eax */
  push32((uint32_t)(EAX));
  /* 1016ce8b call 0x1016c636 */
  push32(0x1016ce90u); f_1016c636();
  /* 1016ce90 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1016ce93 push eax */
  push32((uint32_t)(EAX));
  /* 1016ce94 call 0x1016c694 */
  push32(0x1016ce99u); f_1016c694();
  /* 1016ce99 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 1016ce9c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1016ce9f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 1016cea3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016cea6 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1016cea8 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 1016ceab dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 1016ceae mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1016ceb0 jne 0x1016ce68 */
  if (!C.zf) goto L_1016ce68;
  /* 1016ceb2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_1016ceb5:;
  /* 1016ceb5 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 1016ceb8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016ceb9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016ceba cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016cebd lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 1016cec0 jl 0x1016cef2 */
  if ((C.sf!=C.of)) goto L_1016cef2;
L_1016cec2:;
  /* 1016cec2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cec4 jb 0x1016ced5 */
  if (C.cf) goto L_1016ced5;
  /* 1016cec6 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016cec9 jne 0x1016ced1 */
  if (!C.zf) goto L_1016ced1;
  /* 1016cecb mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1016cece dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016cecf jmp 0x1016cec2 */
  goto L_1016cec2;
L_1016ced1:;
  /* 1016ced1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016ced3 jae 0x1016ced9 */
  if (!C.cf) goto L_1016ced9;
L_1016ced5:;
  /* 1016ced5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1016ced6 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_1016ced9:;
  /* 1016ced9 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_1016cedb:;
  /* 1016cedb sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1016cedd sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1016cedf mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 1016cee2 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1016cee5 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_1016ceea:;
  /* 1016ceea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1016ceed:;
  /* 1016ceed pop edi */
  EDI = (pop32());
  /* 1016ceee pop esi */
  ESI = (pop32());
  /* 1016ceef pop ebx */
  EBX = (pop32());
  /* 1016cef0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016cef1 ret  */
  ESPCHK(0x1016cc87u, _esp0);
  ESP += 4; return;
L_1016cef2:;
  /* 1016cef2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cef4 jb 0x1016cf02 */
  if (C.cf) goto L_1016cf02;
  /* 1016cef6 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016cef9 jne 0x1016cefe */
  if (!C.zf) goto L_1016cefe;
  /* 1016cefb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1016cefc jmp 0x1016cef2 */
  goto L_1016cef2;
L_1016cefe:;
  /* 1016cefe cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cf00 jae 0x1016cedb */
  if (!C.cf) goto L_1016cedb;
L_1016cf02:;
  /* 1016cf02 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1016cf06 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1016cf0a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1016cf0e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_1016cf11:;
  /* 1016cf11 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 1016cf15 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016cf17 pop eax */
  EAX = (pop32());
  /* 1016cf18 jmp 0x1016ceed */
  goto L_1016ceed;
}

/* FUN_1000cf1a @ 0x1016cf1a (27 bytes, 13 insns) */
void f_1016cf1a(void) {
  FTRACE(0x1016cf1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016cf1a mov eax, dword ptr [0x101768ec] */
  EAX = (r32((uint32_t)(0x101768ec)));
  /* 1016cf1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016cf21 je 0x1016cf32 */
  if (C.zf) goto L_1016cf32;
  /* 1016cf23 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1016cf27 call eax */
  call_ind((uint32_t)(EAX), 0x1016cf29u);
  /* 1016cf29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016cf2b pop ecx */
  ECX = (pop32());
  /* 1016cf2c je 0x1016cf32 */
  if (C.zf) goto L_1016cf32;
  /* 1016cf2e push 1 */
  push32((uint32_t)(0x1u));
  /* 1016cf30 pop eax */
  EAX = (pop32());
  /* 1016cf31 ret  */
  ESPCHK(0x1016cf1au, _esp0);
  ESP += 4; return;
L_1016cf32:;
  /* 1016cf32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016cf34 ret  */
  ESPCHK(0x1016cf1au, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1016cf38 (32 bytes, 18 insns) */
void f_1016cf38(void) {
  FTRACE(0x1016cf38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016cf38 push ebp */
  push32((uint32_t)(EBP));
  /* 1016cf39 mov ebp, esp */
  EBP = (ESP);
  /* 1016cf3b push ebx */
  push32((uint32_t)(EBX));
  /* 1016cf3c push esi */
  push32((uint32_t)(ESI));
  /* 1016cf3d push edi */
  push32((uint32_t)(EDI));
  /* 1016cf3e push ebp */
  push32((uint32_t)(EBP));
  /* 1016cf3f push 0 */
  push32((uint32_t)(0x0u));
  /* 1016cf41 push 0 */
  push32((uint32_t)(0x0u));
  /* 1016cf43 push 0x1016cf50 */
  push32((uint32_t)(0x1016cf50u));
  /* 1016cf48 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1016cf4b call 0x1016da34 */
  push32(0x1016cf50u); f_1016da34();
  /* 1016cf50 pop ebp */
  EBP = (pop32());
  /* 1016cf51 pop edi */
  EDI = (pop32());
  /* 1016cf52 pop esi */
  ESI = (pop32());
  /* 1016cf53 pop ebx */
  EBX = (pop32());
  /* 1016cf54 mov esp, ebp */
  ESP = (EBP);
  /* 1016cf56 pop ebp */
  EBP = (pop32());
  /* 1016cf57 ret  */
  ESPCHK(0x1016cf38u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1016cf7a (104 bytes, 33 insns) */
void f_1016cf7a(void) {
  FTRACE(0x1016cf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016cf7a push ebx */
  push32((uint32_t)(EBX));
  /* 1016cf7b push esi */
  push32((uint32_t)(ESI));
  /* 1016cf7c push edi */
  push32((uint32_t)(EDI));
  /* 1016cf7d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1016cf81 push eax */
  push32((uint32_t)(EAX));
  /* 1016cf82 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1016cf84 push 0x1016cf58 */
  push32((uint32_t)(0x1016cf58u));
  /* 1016cf89 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1016cf90 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1016cf97:;
  /* 1016cf97 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1016cf9b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1016cf9e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1016cfa1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cfa4 je 0x1016cfd4 */
  if (C.zf) goto L_1016cfd4;
  /* 1016cfa6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cfaa je 0x1016cfd4 */
  if (C.zf) goto L_1016cfd4;
  /* 1016cfac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1016cfaf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1016cfb2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1016cfb6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1016cfb9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016cfbe jne 0x1016cfd2 */
  if (!C.zf) goto L_1016cfd2;
  /* 1016cfc0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1016cfc5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1016cfc9 call 0x1016d00e */
  push32(0x1016cfceu); f_1016d00e();
  /* 1016cfce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1016cfd2u);
L_1016cfd2:;
  /* 1016cfd2 jmp 0x1016cf97 */
  goto L_1016cf97;
L_1016cfd4:;
  /* 1016cfd4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1016cfdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016cfde pop edi */
  EDI = (pop32());
  /* 1016cfdf pop esi */
  ESI = (pop32());
  /* 1016cfe0 pop ebx */
  EBX = (pop32());
  /* 1016cfe1 ret  */
  ESPCHK(0x1016cf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d00e @ 0x1016d00e (24 bytes, 10 insns) */
void f_1016d00e(void) {
  FTRACE(0x1016d00eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d00e push ebx */
  push32((uint32_t)(EBX));
  /* 1016d00f push ecx */
  push32((uint32_t)(ECX));
  /* 1016d010 mov ebx, 0x10173184 */
  EBX = (0x10173184u);
  /* 1016d015 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016d018 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1016d01b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1016d01e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1016d021 pop ecx */
  ECX = (pop32());
  /* 1016d022 pop ebx */
  EBX = (pop32());
  /* 1016d023 ret 4 */
  ESPCHK(0x1016d00eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d0ed @ 0x1016d0ed (27 bytes, 11 insns) */
void f_1016d0ed(void) {
  FTRACE(0x1016d0edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d0ed push ebp */
  push32((uint32_t)(EBP));
  /* 1016d0ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1016d0f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1016d0f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1016d0f7 push eax */
  push32((uint32_t)(EAX));
  /* 1016d0f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1016d0fb push eax */
  push32((uint32_t)(EAX));
  /* 1016d0fc call 0x1016cf7a */
  push32(0x1016d101u); f_1016cf7a();
  /* 1016d101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d104 pop ebp */
  EBP = (pop32());
  /* 1016d105 ret 4 */
  ESPCHK(0x1016d0edu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d108 @ 0x1016d108 (111 bytes, 44 insns) */
void f_1016d108(void) {
  FTRACE(0x1016d108u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d108 push ebx */
  push32((uint32_t)(EBX));
  /* 1016d109 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016d10b cmp dword ptr [0x101768b8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101768b8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d111 jne 0x1016d126 */
  if (!C.zf) goto L_1016d126;
  /* 1016d113 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1016d117 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d11a jl 0x1016d175 */
  if ((C.sf!=C.of)) goto L_1016d175;
  /* 1016d11c cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d11f jg 0x1016d175 */
  if ((!C.zf&&C.sf==C.of)) goto L_1016d175;
  /* 1016d121 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016d124 pop ebx */
  EBX = (pop32());
  /* 1016d125 ret  */
  ESPCHK(0x1016d108u, _esp0);
  ESP += 4; return;
L_1016d126:;
  /* 1016d126 push esi */
  push32((uint32_t)(ESI));
  /* 1016d127 mov esi, 0x10176a34 */
  ESI = (0x10176a34u);
  /* 1016d12c push edi */
  push32((uint32_t)(EDI));
  /* 1016d12d push esi */
  push32((uint32_t)(ESI));
  /* 1016d12e call dword ptr [0x1016e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e090))), 0x1016d134u);
  /* 1016d134 cmp dword ptr [0x10176a30], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10176a30))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d13a mov edi, dword ptr [0x1016e08c] */
  EDI = (r32((uint32_t)(0x1016e08c)));
  /* 1016d140 je 0x1016d150 */
  if (C.zf) goto L_1016d150;
  /* 1016d142 push esi */
  push32((uint32_t)(ESI));
  /* 1016d143 call edi */
  call_ind((uint32_t)(EDI), 0x1016d145u);
  /* 1016d145 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1016d147 call 0x1016a013 */
  push32(0x1016d14cu); f_1016a013();
  /* 1016d14c pop ecx */
  ECX = (pop32());
  /* 1016d14d push 1 */
  push32((uint32_t)(0x1u));
  /* 1016d14f pop ebx */
  EBX = (pop32());
L_1016d150:;
  /* 1016d150 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1016d154 call 0x1016d177 */
  push32(0x1016d159u); f_1016d177();
  /* 1016d159 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1016d15b pop ecx */
  ECX = (pop32());
  /* 1016d15c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1016d160 je 0x1016d16c */
  if (C.zf) goto L_1016d16c;
  /* 1016d162 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1016d164 call 0x1016a074 */
  push32(0x1016d169u); f_1016a074();
  /* 1016d169 pop ecx */
  ECX = (pop32());
  /* 1016d16a jmp 0x1016d16f */
  goto L_1016d16f;
L_1016d16c:;
  /* 1016d16c push esi */
  push32((uint32_t)(ESI));
  /* 1016d16d call edi */
  call_ind((uint32_t)(EDI), 0x1016d16fu);
L_1016d16f:;
  /* 1016d16f mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1016d173 pop edi */
  EDI = (pop32());
  /* 1016d174 pop esi */
  ESI = (pop32());
L_1016d175:;
  /* 1016d175 pop ebx */
  EBX = (pop32());
  /* 1016d176 ret  */
  ESPCHK(0x1016d108u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d177 @ 0x1016d177 (204 bytes, 71 insns) */
void f_1016d177(void) {
  FTRACE(0x1016d177u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d177 push ebp */
  push32((uint32_t)(EBP));
  /* 1016d178 mov ebp, esp */
  EBP = (ESP);
  /* 1016d17a push ecx */
  push32((uint32_t)(ECX));
  /* 1016d17b cmp dword ptr [0x101768b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101768b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d182 push ebx */
  push32((uint32_t)(EBX));
  /* 1016d183 jne 0x1016d1a2 */
  if (!C.zf) goto L_1016d1a2;
  /* 1016d185 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016d188 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d18b jl 0x1016d240 */
  if ((C.sf!=C.of)) goto L_1016d240;
  /* 1016d191 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d194 jg 0x1016d240 */
  if ((!C.zf&&C.sf==C.of)) goto L_1016d240;
  /* 1016d19a sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016d19d jmp 0x1016d240 */
  goto L_1016d240;
L_1016d1a2:;
  /* 1016d1a2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016d1a5 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d1ab jge 0x1016d1d5 */
  if ((C.sf==C.of)) goto L_1016d1d5;
  /* 1016d1ad cmp dword ptr [0x10170c60], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10170c60))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d1b4 jle 0x1016d1c2 */
  if ((C.zf||C.sf!=C.of)) goto L_1016d1c2;
  /* 1016d1b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1016d1b8 push ebx */
  push32((uint32_t)(EBX));
  /* 1016d1b9 call 0x101693cb */
  push32(0x1016d1beu); f_101693cb();
  /* 1016d1be pop ecx */
  ECX = (pop32());
  /* 1016d1bf pop ecx */
  ECX = (pop32());
  /* 1016d1c0 jmp 0x1016d1cd */
  goto L_1016d1cd;
L_1016d1c2:;
  /* 1016d1c2 mov eax, dword ptr [0x10170a50] */
  EAX = (r32((uint32_t)(0x10170a50)));
  /* 1016d1c7 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1016d1ca and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_1016d1cd:;
  /* 1016d1cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016d1cf jne 0x1016d1d5 */
  if (!C.zf) goto L_1016d1d5;
L_1016d1d1:;
  /* 1016d1d1 mov eax, ebx */
  EAX = (EBX);
  /* 1016d1d3 jmp 0x1016d240 */
  goto L_1016d240;
L_1016d1d5:;
  /* 1016d1d5 mov edx, dword ptr [0x10170a50] */
  EDX = (r32((uint32_t)(0x10170a50)));
  /* 1016d1db mov eax, ebx */
  EAX = (EBX);
  /* 1016d1dd sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1016d1e0 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1016d1e3 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1016d1e8 je 0x1016d1f8 */
  if (C.zf) goto L_1016d1f8;
  /* 1016d1ea and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1016d1ee mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1016d1f1 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 1016d1f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1016d1f6 jmp 0x1016d201 */
  goto L_1016d201;
L_1016d1f8:;
  /* 1016d1f8 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 1016d1fc mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1016d1ff push 1 */
  push32((uint32_t)(0x1u));
L_1016d201:;
  /* 1016d201 pop eax */
  EAX = (pop32());
  /* 1016d202 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1016d205 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016d207 push 0 */
  push32((uint32_t)(0x0u));
  /* 1016d209 push 3 */
  push32((uint32_t)(0x3u));
  /* 1016d20b push ecx */
  push32((uint32_t)(ECX));
  /* 1016d20c push eax */
  push32((uint32_t)(EAX));
  /* 1016d20d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1016d210 push eax */
  push32((uint32_t)(EAX));
  /* 1016d211 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1016d216 push dword ptr [0x101768b8] */
  push32((uint32_t)(r32((uint32_t)(0x101768b8))));
  /* 1016d21c call 0x1016c3c6 */
  push32(0x1016d221u); f_1016c3c6();
  /* 1016d221 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016d226 je 0x1016d1d1 */
  if (C.zf) goto L_1016d1d1;
  /* 1016d228 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d22b jne 0x1016d233 */
  if (!C.zf) goto L_1016d233;
  /* 1016d22d movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1016d231 jmp 0x1016d240 */
  goto L_1016d240;
L_1016d233:;
  /* 1016d233 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1016d237 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1016d23b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1016d23e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1016d240:;
  /* 1016d240 pop ebx */
  EBX = (pop32());
  /* 1016d241 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016d242 ret  */
  ESPCHK(0x1016d177u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d243 @ 0x1016d243 (49 bytes, 20 insns) */
void f_1016d243(void) {
  FTRACE(0x1016d243u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d243 push esi */
  push32((uint32_t)(ESI));
  /* 1016d244 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1016d248 push edi */
  push32((uint32_t)(EDI));
  /* 1016d249 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1016d24c test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 1016d250 je 0x1016d258 */
  if (C.zf) goto L_1016d258;
  /* 1016d252 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1016d256 jmp 0x1016d26f */
  goto L_1016d26f;
L_1016d258:;
  /* 1016d258 push esi */
  push32((uint32_t)(ESI));
  /* 1016d259 call 0x10168f8e */
  push32(0x1016d25eu); f_10168f8e();
  /* 1016d25e push esi */
  push32((uint32_t)(ESI));
  /* 1016d25f call 0x1016d274 */
  push32(0x1016d264u); f_1016d274();
  /* 1016d264 push esi */
  push32((uint32_t)(ESI));
  /* 1016d265 mov edi, eax */
  EDI = (EAX);
  /* 1016d267 call 0x10168fe0 */
  push32(0x1016d26cu); f_10168fe0();
  /* 1016d26c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016d26f:;
  /* 1016d26f mov eax, edi */
  EAX = (EDI);
  /* 1016d271 pop edi */
  EDI = (pop32());
  /* 1016d272 pop esi */
  ESI = (pop32());
  /* 1016d273 ret  */
  ESPCHK(0x1016d243u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x1016d274 (76 bytes, 30 insns) */
void f_1016d274(void) {
  FTRACE(0x1016d274u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d274 push esi */
  push32((uint32_t)(ESI));
  /* 1016d275 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1016d279 push edi */
  push32((uint32_t)(EDI));
  /* 1016d27a or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1016d27d test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1016d281 je 0x1016d2b7 */
  if (C.zf) goto L_1016d2b7;
  /* 1016d283 push esi */
  push32((uint32_t)(ESI));
  /* 1016d284 call 0x1016c174 */
  push32(0x1016d289u); f_1016c174();
  /* 1016d289 push esi */
  push32((uint32_t)(ESI));
  /* 1016d28a mov edi, eax */
  EDI = (EAX);
  /* 1016d28c call 0x1016d7e6 */
  push32(0x1016d291u); f_1016d7e6();
  /* 1016d291 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1016d294 call 0x1016d706 */
  push32(0x1016d299u); f_1016d706();
  /* 1016d299 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d29c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016d29e jge 0x1016d2a5 */
  if ((C.sf==C.of)) goto L_1016d2a5;
  /* 1016d2a0 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1016d2a3 jmp 0x1016d2b7 */
  goto L_1016d2b7;
L_1016d2a5:;
  /* 1016d2a5 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 1016d2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016d2aa je 0x1016d2b7 */
  if (C.zf) goto L_1016d2b7;
  /* 1016d2ac push eax */
  push32((uint32_t)(EAX));
  /* 1016d2ad call 0x1016a1c6 */
  push32(0x1016d2b2u); f_1016a1c6();
  /* 1016d2b2 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 1016d2b6 pop ecx */
  ECX = (pop32());
L_1016d2b7:;
  /* 1016d2b7 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1016d2bb mov eax, edi */
  EAX = (EDI);
  /* 1016d2bd pop edi */
  EDI = (pop32());
  /* 1016d2be pop esi */
  ESI = (pop32());
  /* 1016d2bf ret  */
  ESPCHK(0x1016d274u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2c0 @ 0x1016d2c0 (147 bytes, 52 insns) */
void f_1016d2c0(void) {
  FTRACE(0x1016d2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d2c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1016d2c1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 1016d2c5 cmp ebx, dword ptr [0x10177dc0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10177dc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d2cb push esi */
  push32((uint32_t)(ESI));
  /* 1016d2cc push edi */
  push32((uint32_t)(EDI));
  /* 1016d2cd jae 0x1016d341 */
  if (!C.cf) goto L_1016d341;
  /* 1016d2cf mov eax, ebx */
  EAX = (EBX);
  /* 1016d2d1 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1016d2d4 lea edi, [eax*4 + 0x10177cc0] */
  EDI = ((uint32_t)(EAX*4 + 0x10177cc0));
  /* 1016d2db mov eax, ebx */
  EAX = (EBX);
  /* 1016d2dd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1016d2e0 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1016d2e3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1016d2e5 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1016d2e8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1016d2ed je 0x1016d341 */
  if (C.zf) goto L_1016d341;
  /* 1016d2ef push ebx */
  push32((uint32_t)(EBX));
  /* 1016d2f0 call 0x1016c044 */
  push32(0x1016d2f5u); f_1016c044();
  /* 1016d2f5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1016d2f7 pop ecx */
  ECX = (pop32());
  /* 1016d2f8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1016d2fd je 0x1016d328 */
  if (C.zf) goto L_1016d328;
  /* 1016d2ff push ebx */
  push32((uint32_t)(EBX));
  /* 1016d300 call 0x1016c002 */
  push32(0x1016d305u); f_1016c002();
  /* 1016d305 pop ecx */
  ECX = (pop32());
  /* 1016d306 push eax */
  push32((uint32_t)(EAX));
  /* 1016d307 call dword ptr [0x1016e0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0d0))), 0x1016d30du);
  /* 1016d30d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016d30f jne 0x1016d31b */
  if (!C.zf) goto L_1016d31b;
  /* 1016d311 call dword ptr [0x1016e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e03c))), 0x1016d317u);
  /* 1016d317 mov esi, eax */
  ESI = (EAX);
  /* 1016d319 jmp 0x1016d31d */
  goto L_1016d31d;
L_1016d31b:;
  /* 1016d31b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1016d31d:;
  /* 1016d31d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1016d31f je 0x1016d336 */
  if (C.zf) goto L_1016d336;
  /* 1016d321 call 0x1016bf7a */
  push32(0x1016d326u); f_1016bf7a();
  /* 1016d326 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1016d328:;
  /* 1016d328 call 0x1016bf71 */
  push32(0x1016d32du); f_1016bf71();
  /* 1016d32d mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1016d333 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1016d336:;
  /* 1016d336 push ebx */
  push32((uint32_t)(EBX));
  /* 1016d337 call 0x1016c0a3 */
  push32(0x1016d33cu); f_1016c0a3();
  /* 1016d33c pop ecx */
  ECX = (pop32());
  /* 1016d33d mov eax, esi */
  EAX = (ESI);
  /* 1016d33f jmp 0x1016d34f */
  goto L_1016d34f;
L_1016d341:;
  /* 1016d341 call 0x1016bf71 */
  push32(0x1016d346u); f_1016bf71();
  /* 1016d346 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1016d34c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1016d34f:;
  /* 1016d34f pop edi */
  EDI = (pop32());
  /* 1016d350 pop esi */
  ESI = (pop32());
  /* 1016d351 pop ebx */
  EBX = (pop32());
  /* 1016d352 ret  */
  ESPCHK(0x1016d2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x1016d3f0 (62 bytes, 35 insns) */
void f_1016d3f0(void) {
  FTRACE(0x1016d3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1016d3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1016d3f3 push esi */
  push32((uint32_t)(ESI));
  /* 1016d3f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016d3f6 push eax */
  push32((uint32_t)(EAX));
  /* 1016d3f7 push eax */
  push32((uint32_t)(EAX));
  /* 1016d3f8 push eax */
  push32((uint32_t)(EAX));
  /* 1016d3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1016d3fa push eax */
  push32((uint32_t)(EAX));
  /* 1016d3fb push eax */
  push32((uint32_t)(EAX));
  /* 1016d3fc push eax */
  push32((uint32_t)(EAX));
  /* 1016d3fd push eax */
  push32((uint32_t)(EAX));
  /* 1016d3fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016d401 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1016d404:;
  /* 1016d404 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1016d406 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1016d408 je 0x1016d411 */
  if (C.zf) goto L_1016d411;
  /* 1016d40a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1016d40b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1016d40b");
  /* 1016d40f jmp 0x1016d404 */
  goto L_1016d404;
L_1016d411:;
  /* 1016d411 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1016d414 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1016d417 nop  */
  /* nop */
L_1016d418:;
  /* 1016d418 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1016d419 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016d41b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1016d41d je 0x1016d426 */
  if (C.zf) goto L_1016d426;
  /* 1016d41f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016d420 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1016d420");
  /* 1016d424 jae 0x1016d418 */
  if (!C.cf) goto L_1016d418;
L_1016d426:;
  /* 1016d426 mov eax, ecx */
  EAX = (ECX);
  /* 1016d428 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d42b pop esi */
  ESI = (pop32());
  /* 1016d42c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016d42d ret  */
  ESPCHK(0x1016d3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x1016d430 (58 bytes, 32 insns) */
void f_1016d430(void) {
  FTRACE(0x1016d430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d430 push ebp */
  push32((uint32_t)(EBP));
  /* 1016d431 mov ebp, esp */
  EBP = (ESP);
  /* 1016d433 push esi */
  push32((uint32_t)(ESI));
  /* 1016d434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016d436 push eax */
  push32((uint32_t)(EAX));
  /* 1016d437 push eax */
  push32((uint32_t)(EAX));
  /* 1016d438 push eax */
  push32((uint32_t)(EAX));
  /* 1016d439 push eax */
  push32((uint32_t)(EAX));
  /* 1016d43a push eax */
  push32((uint32_t)(EAX));
  /* 1016d43b push eax */
  push32((uint32_t)(EAX));
  /* 1016d43c push eax */
  push32((uint32_t)(EAX));
  /* 1016d43d push eax */
  push32((uint32_t)(EAX));
  /* 1016d43e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016d441 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1016d444:;
  /* 1016d444 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1016d446 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1016d448 je 0x1016d451 */
  if (C.zf) goto L_1016d451;
  /* 1016d44a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1016d44b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1016d44b");
  /* 1016d44f jmp 0x1016d444 */
  goto L_1016d444;
L_1016d451:;
  /* 1016d451 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1016d454:;
  /* 1016d454 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016d456 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1016d458 je 0x1016d464 */
  if (C.zf) goto L_1016d464;
  /* 1016d45a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016d45b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1016d45b");
  /* 1016d45f jae 0x1016d454 */
  if (!C.cf) goto L_1016d454;
  /* 1016d461 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1016d464:;
  /* 1016d464 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d467 pop esi */
  ESI = (pop32());
  /* 1016d468 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016d469 ret  */
  ESPCHK(0x1016d430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d46a @ 0x1016d46a (544 bytes, 177 insns) */
void f_1016d46a(void) {
  FTRACE(0x1016d46au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d46a push ebp */
  push32((uint32_t)(EBP));
  /* 1016d46b mov ebp, esp */
  EBP = (ESP);
  /* 1016d46d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016d470 push ebx */
  push32((uint32_t)(EBX));
  /* 1016d471 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016d474 push esi */
  push32((uint32_t)(ESI));
  /* 1016d475 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1016d478 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 1016d47c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016d47e push edi */
  push32((uint32_t)(EDI));
  /* 1016d47f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1016d482 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1016d485 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1016d488 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1016d48b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 1016d48f mov edi, ecx */
  EDI = (ECX);
  /* 1016d491 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 1016d496 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 1016d498 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1016d49a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1016d49c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 1016d4a2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1016d4a6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 1016d4a9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1016d4ac jae 0x1016d66a */
  if (!C.cf) goto L_1016d66a;
  /* 1016d4b2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1016d4b7 jae 0x1016d66a */
  if (!C.cf) goto L_1016d66a;
  /* 1016d4bd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1016d4c2 ja 0x1016d66a */
  if ((!C.cf&&!C.zf)) goto L_1016d66a;
  /* 1016d4c8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1016d4cd ja 0x1016d4d3 */
  if ((!C.cf&&!C.zf)) goto L_1016d4d3;
  /* 1016d4cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016d4d1 jmp 0x1016d50d */
  goto L_1016d50d;
L_1016d4d3:;
  /* 1016d4d3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 1016d4d6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 1016d4db jne 0x1016d4f5 */
  if (!C.zf) goto L_1016d4f5;
  /* 1016d4dd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1016d4e0 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1016d4e3 jne 0x1016d4f5 */
  if (!C.zf) goto L_1016d4f5;
  /* 1016d4e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016d4e7 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d4ea jne 0x1016d4f7 */
  if (!C.zf) goto L_1016d4f7;
  /* 1016d4ec cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d4ee jne 0x1016d4f7 */
  if (!C.zf) goto L_1016d4f7;
  /* 1016d4f0 jmp 0x1016d664 */
  goto L_1016d664;
L_1016d4f5:;
  /* 1016d4f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1016d4f7:;
  /* 1016d4f7 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1016d4fa jne 0x1016d51a */
  if (!C.zf) goto L_1016d51a;
  /* 1016d4fc inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1016d4ff test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1016d502 jne 0x1016d51a */
  if (!C.zf) goto L_1016d51a;
  /* 1016d504 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d507 jne 0x1016d51a */
  if (!C.zf) goto L_1016d51a;
  /* 1016d509 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d50b jne 0x1016d51a */
  if (!C.zf) goto L_1016d51a;
L_1016d50d:;
  /* 1016d50d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1016d510 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1016d513 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1016d515 jmp 0x1016d685 */
  goto L_1016d685;
L_1016d51a:;
  /* 1016d51a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1016d51d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1016d520 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1016d523 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_1016d52a:;
  /* 1016d52a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1016d52d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d52f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d533 jle 0x1016d57e */
  if ((C.zf||C.sf!=C.of)) goto L_1016d57e;
  /* 1016d535 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d537 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 1016d53a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1016d53d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016d540 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1016d543 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1016d546:;
  /* 1016d546 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1016d549 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1016d54c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1016d54f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 1016d552 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1016d555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016d558 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d55b push ecx */
  push32((uint32_t)(ECX));
  /* 1016d55c push eax */
  push32((uint32_t)(EAX));
  /* 1016d55d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 1016d55f call 0x1016c615 */
  push32(0x1016d564u); f_1016c615();
  /* 1016d564 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016d569 je 0x1016d571 */
  if (C.zf) goto L_1016d571;
  /* 1016d56b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1016d56e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_1016d571:;
  /* 1016d571 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1016d575 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1016d579 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 1016d57c jne 0x1016d546 */
  if (!C.zf) goto L_1016d546;
L_1016d57e:;
  /* 1016d57e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1016d582 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 1016d585 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 1016d588 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d58c jg 0x1016d52a */
  if ((!C.zf&&C.sf==C.of)) goto L_1016d52a;
  /* 1016d58e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1016d595 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1016d59a jle 0x1016d5c1 */
  if ((C.zf||C.sf!=C.of)) goto L_1016d5c1;
L_1016d59c:;
  /* 1016d59c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 1016d5a0 jne 0x1016d5ba */
  if (!C.zf) goto L_1016d5ba;
  /* 1016d5a2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1016d5a5 push eax */
  push32((uint32_t)(EAX));
  /* 1016d5a6 call 0x1016c694 */
  push32(0x1016d5abu); f_1016c694();
  /* 1016d5ab add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1016d5b2 pop ecx */
  ECX = (pop32());
  /* 1016d5b3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1016d5b8 jg 0x1016d59c */
  if ((!C.zf&&C.sf==C.of)) goto L_1016d59c;
L_1016d5ba:;
  /* 1016d5ba cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1016d5bf jg 0x1016d5fa */
  if ((!C.zf&&C.sf==C.of)) goto L_1016d5fa;
L_1016d5c1:;
  /* 1016d5c1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1016d5c8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1016d5cd jge 0x1016d5fa */
  if ((C.sf==C.of)) goto L_1016d5fa;
  /* 1016d5cf movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 1016d5d3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1016d5d5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1016d5d8 mov ebx, eax */
  EBX = (EAX);
L_1016d5da:;
  /* 1016d5da test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 1016d5de je 0x1016d5e3 */
  if (C.zf) goto L_1016d5e3;
  /* 1016d5e0 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_1016d5e3:;
  /* 1016d5e3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1016d5e6 push eax */
  push32((uint32_t)(EAX));
  /* 1016d5e7 call 0x1016c6c2 */
  push32(0x1016d5ecu); f_1016c6c2();
  /* 1016d5ec dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1016d5ed pop ecx */
  ECX = (pop32());
  /* 1016d5ee jne 0x1016d5da */
  if (!C.zf) goto L_1016d5da;
  /* 1016d5f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d5f4 je 0x1016d5fa */
  if (C.zf) goto L_1016d5fa;
  /* 1016d5f6 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_1016d5fa:;
  /* 1016d5fa cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1016d600 ja 0x1016d611 */
  if ((!C.cf&&!C.zf)) goto L_1016d611;
  /* 1016d602 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1016d605 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1016d60a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d60f jne 0x1016d646 */
  if (!C.zf) goto L_1016d646;
L_1016d611:;
  /* 1016d611 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d615 jne 0x1016d643 */
  if (!C.zf) goto L_1016d643;
  /* 1016d617 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 1016d61b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d61f jne 0x1016d63e */
  if (!C.zf) goto L_1016d63e;
  /* 1016d621 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 1016d625 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1016d62b jne 0x1016d638 */
  if (!C.zf) goto L_1016d638;
  /* 1016d62d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1016d630 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 1016d636 jmp 0x1016d646 */
  goto L_1016d646;
L_1016d638:;
  /* 1016d638 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 1016d63c jmp 0x1016d646 */
  goto L_1016d646;
L_1016d63e:;
  /* 1016d63e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 1016d641 jmp 0x1016d646 */
  goto L_1016d646;
L_1016d643:;
  /* 1016d643 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_1016d646:;
  /* 1016d646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016d649 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1016d64d jae 0x1016d66a */
  if (!C.cf) goto L_1016d66a;
  /* 1016d64f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 1016d653 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1016d655 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 1016d658 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1016d65b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 1016d65e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1016d661 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_1016d664:;
  /* 1016d664 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 1016d668 jmp 0x1016d685 */
  goto L_1016d685;
L_1016d66a:;
  /* 1016d66a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 1016d66d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016d66f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1016d673 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 1016d679 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d67f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1016d682 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_1016d685:;
  /* 1016d685 pop edi */
  EDI = (pop32());
  /* 1016d686 pop esi */
  ESI = (pop32());
  /* 1016d687 pop ebx */
  EBX = (pop32());
  /* 1016d688 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016d689 ret  */
  ESPCHK(0x1016d46au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d68a @ 0x1016d68a (124 bytes, 52 insns) */
void f_1016d68a(void) {
  FTRACE(0x1016d68au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d68a push ebp */
  push32((uint32_t)(EBP));
  /* 1016d68b mov ebp, esp */
  EBP = (ESP);
  /* 1016d68d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016d690 push ebx */
  push32((uint32_t)(EBX));
  /* 1016d691 mov ebx, 0x101732a0 */
  EBX = (0x101732a0u);
  /* 1016d696 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1016d698 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016d69b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d69e je 0x1016d703 */
  if (C.zf) goto L_1016d703;
  /* 1016d6a0 jge 0x1016d6b2 */
  if ((C.sf==C.of)) goto L_1016d6b2;
  /* 1016d6a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016d6a5 mov ebx, 0x10173400 */
  EBX = (0x10173400u);
  /* 1016d6aa neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1016d6ac mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1016d6af sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_1016d6b2:;
  /* 1016d6b2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d6b5 jne 0x1016d6bd */
  if (!C.zf) goto L_1016d6bd;
  /* 1016d6b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1016d6ba mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_1016d6bd:;
  /* 1016d6bd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d6c0 je 0x1016d703 */
  if (C.zf) goto L_1016d703;
  /* 1016d6c2 push esi */
  push32((uint32_t)(ESI));
  /* 1016d6c3 push edi */
  push32((uint32_t)(EDI));
L_1016d6c4:;
  /* 1016d6c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1016d6c7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d6ca sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 1016d6ce and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1016d6d1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d6d3 je 0x1016d6fc */
  if (C.zf) goto L_1016d6fc;
  /* 1016d6d5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 1016d6d8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1016d6de lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 1016d6e1 jb 0x1016d6ef */
  if (C.cf) goto L_1016d6ef;
  /* 1016d6e3 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 1016d6e6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1016d6e7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1016d6e8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1016d6e9 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 1016d6ec lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_1016d6ef:;
  /* 1016d6ef push esi */
  push32((uint32_t)(ESI));
  /* 1016d6f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1016d6f3 call 0x1016d46a */
  push32(0x1016d6f8u); f_1016d46a();
  /* 1016d6f8 pop ecx */
  ECX = (pop32());
  /* 1016d6f9 pop ecx */
  ECX = (pop32());
  /* 1016d6fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_1016d6fc:;
  /* 1016d6fc cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d6ff jne 0x1016d6c4 */
  if (!C.zf) goto L_1016d6c4;
  /* 1016d701 pop edi */
  EDI = (pop32());
  /* 1016d702 pop esi */
  ESI = (pop32());
L_1016d703:;
  /* 1016d703 pop ebx */
  EBX = (pop32());
  /* 1016d704 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016d705 ret  */
  ESPCHK(0x1016d68au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d706 @ 0x1016d706 (93 bytes, 32 insns) */
void f_1016d706(void) {
  FTRACE(0x1016d706u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d706 push esi */
  push32((uint32_t)(ESI));
  /* 1016d707 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1016d70b cmp esi, dword ptr [0x10177dc0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10177dc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d711 jae 0x1016d74b */
  if (!C.cf) goto L_1016d74b;
  /* 1016d713 mov ecx, esi */
  ECX = (ESI);
  /* 1016d715 mov eax, esi */
  EAX = (ESI);
  /* 1016d717 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1016d71a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1016d71d mov ecx, dword ptr [ecx*4 + 0x10177cc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10177cc0)));
  /* 1016d724 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1016d727 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1016d72c je 0x1016d74b */
  if (C.zf) goto L_1016d74b;
  /* 1016d72e push edi */
  push32((uint32_t)(EDI));
  /* 1016d72f push esi */
  push32((uint32_t)(ESI));
  /* 1016d730 call 0x1016c044 */
  push32(0x1016d735u); f_1016c044();
  /* 1016d735 push esi */
  push32((uint32_t)(ESI));
  /* 1016d736 call 0x1016d763 */
  push32(0x1016d73bu); f_1016d763();
  /* 1016d73b push esi */
  push32((uint32_t)(ESI));
  /* 1016d73c mov edi, eax */
  EDI = (EAX);
  /* 1016d73e call 0x1016c0a3 */
  push32(0x1016d743u); f_1016c0a3();
  /* 1016d743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d746 mov eax, edi */
  EAX = (EDI);
  /* 1016d748 pop edi */
  EDI = (pop32());
  /* 1016d749 pop esi */
  ESI = (pop32());
  /* 1016d74a ret  */
  ESPCHK(0x1016d706u, _esp0);
  ESP += 4; return;
L_1016d74b:;
  /* 1016d74b call 0x1016bf71 */
  push32(0x1016d750u); f_1016bf71();
  /* 1016d750 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1016d756 call 0x1016bf7a */
  push32(0x1016d75bu); f_1016bf7a();
  /* 1016d75b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1016d75e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1016d761 pop esi */
  ESI = (pop32());
  /* 1016d762 ret  */
  ESPCHK(0x1016d706u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d763 @ 0x1016d763 (131 bytes, 52 insns) */
void f_1016d763(void) {
  FTRACE(0x1016d763u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d763 push esi */
  push32((uint32_t)(ESI));
  /* 1016d764 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1016d768 push edi */
  push32((uint32_t)(EDI));
  /* 1016d769 push esi */
  push32((uint32_t)(ESI));
  /* 1016d76a call 0x1016c002 */
  push32(0x1016d76fu); f_1016c002();
  /* 1016d76f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d772 pop ecx */
  ECX = (pop32());
  /* 1016d773 je 0x1016d7b1 */
  if (C.zf) goto L_1016d7b1;
  /* 1016d775 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d778 je 0x1016d77f */
  if (C.zf) goto L_1016d77f;
  /* 1016d77a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d77d jne 0x1016d795 */
  if (!C.zf) goto L_1016d795;
L_1016d77f:;
  /* 1016d77f push 2 */
  push32((uint32_t)(0x2u));
  /* 1016d781 call 0x1016c002 */
  push32(0x1016d786u); f_1016c002();
  /* 1016d786 push 1 */
  push32((uint32_t)(0x1u));
  /* 1016d788 mov edi, eax */
  EDI = (EAX);
  /* 1016d78a call 0x1016c002 */
  push32(0x1016d78fu); f_1016c002();
  /* 1016d78f pop ecx */
  ECX = (pop32());
  /* 1016d790 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d792 pop ecx */
  ECX = (pop32());
  /* 1016d793 je 0x1016d7b1 */
  if (C.zf) goto L_1016d7b1;
L_1016d795:;
  /* 1016d795 push esi */
  push32((uint32_t)(ESI));
  /* 1016d796 call 0x1016c002 */
  push32(0x1016d79bu); f_1016c002();
  /* 1016d79b pop ecx */
  ECX = (pop32());
  /* 1016d79c push eax */
  push32((uint32_t)(EAX));
  /* 1016d79d call dword ptr [0x1016e0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e0d4))), 0x1016d7a3u);
  /* 1016d7a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1016d7a5 jne 0x1016d7b1 */
  if (!C.zf) goto L_1016d7b1;
  /* 1016d7a7 call dword ptr [0x1016e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1016e03c))), 0x1016d7adu);
  /* 1016d7ad mov edi, eax */
  EDI = (EAX);
  /* 1016d7af jmp 0x1016d7b3 */
  goto L_1016d7b3;
L_1016d7b1:;
  /* 1016d7b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1016d7b3:;
  /* 1016d7b3 push esi */
  push32((uint32_t)(ESI));
  /* 1016d7b4 call 0x1016bf83 */
  push32(0x1016d7b9u); f_1016bf83();
  /* 1016d7b9 mov eax, esi */
  EAX = (ESI);
  /* 1016d7bb and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 1016d7be sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1016d7c1 pop ecx */
  ECX = (pop32());
  /* 1016d7c2 mov eax, dword ptr [eax*4 + 0x10177cc0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10177cc0)));
  /* 1016d7c9 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 1016d7cc and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 1016d7d1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1016d7d3 je 0x1016d7e1 */
  if (C.zf) goto L_1016d7e1;
  /* 1016d7d5 push edi */
  push32((uint32_t)(EDI));
  /* 1016d7d6 call 0x1016befe */
  push32(0x1016d7dbu); f_1016befe();
  /* 1016d7db pop ecx */
  ECX = (pop32());
  /* 1016d7dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1016d7df jmp 0x1016d7e3 */
  goto L_1016d7e3;
L_1016d7e1:;
  /* 1016d7e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1016d7e3:;
  /* 1016d7e3 pop edi */
  EDI = (pop32());
  /* 1016d7e4 pop esi */
  ESI = (pop32());
  /* 1016d7e5 ret  */
  ESPCHK(0x1016d763u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x1016d7e6 (43 bytes, 17 insns) */
void f_1016d7e6(void) {
  FTRACE(0x1016d7e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d7e6 push esi */
  push32((uint32_t)(ESI));
  /* 1016d7e7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1016d7eb mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1016d7ee test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 1016d7f0 je 0x1016d80f */
  if (C.zf) goto L_1016d80f;
  /* 1016d7f2 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1016d7f4 je 0x1016d80f */
  if (C.zf) goto L_1016d80f;
  /* 1016d7f6 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 1016d7f9 call 0x1016a1c6 */
  push32(0x1016d7feu); f_1016a1c6();
  /* 1016d7fe and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 1016d804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016d806 pop ecx */
  ECX = (pop32());
  /* 1016d807 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1016d809 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1016d80c mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_1016d80f:;
  /* 1016d80f pop esi */
  ESI = (pop32());
  /* 1016d810 ret  */
  ESPCHK(0x1016d7e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x1016d820 (208 bytes, 85 insns) */
void f_1016d820(void) {
  FTRACE(0x1016d820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d820 push ebp */
  push32((uint32_t)(EBP));
  /* 1016d821 mov ebp, esp */
  EBP = (ESP);
  /* 1016d823 push edi */
  push32((uint32_t)(EDI));
  /* 1016d824 push esi */
  push32((uint32_t)(ESI));
  /* 1016d825 push ebx */
  push32((uint32_t)(EBX));
  /* 1016d826 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1016d829 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1016d82c lea eax, [0x101768b0] */
  EAX = ((uint32_t)(0x101768b0));
  /* 1016d832 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d836 jne 0x1016d873 */
  if (!C.zf) goto L_1016d873;
  /* 1016d838 mov al, 0xff */
  AL = (0xffu);
  /* 1016d83a mov edi, edi */
  EDI = (EDI);
L_1016d83c:;
  /* 1016d83c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1016d83e je 0x1016d86e */
  if (C.zf) goto L_1016d86e;
  /* 1016d840 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016d842 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016d843 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 1016d845 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016d846 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016d848 je 0x1016d83c */
  if (C.zf) goto L_1016d83c;
  /* 1016d84a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1016d84c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016d84e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1016d850 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1016d853 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1016d855 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1016d857 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 1016d859 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1016d85b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016d85d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1016d85f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1016d862 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1016d864 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1016d866 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016d868 je 0x1016d83c */
  if (C.zf) goto L_1016d83c;
  /* 1016d86a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1016d86c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1016d86e:;
  /* 1016d86e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1016d871 jmp 0x1016d8eb */
  goto L_1016d8eb;
L_1016d873:;
  /* 1016d873 lock inc dword ptr [0x10176a34] */
  x86_unimpl("lock inc @ 0x1016d873");
  /* 1016d87a cmp dword ptr [0x10176a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10176a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d881 jg 0x1016d887 */
  if ((!C.zf&&C.sf==C.of)) goto L_1016d887;
  /* 1016d883 push 0 */
  push32((uint32_t)(0x0u));
  /* 1016d885 jmp 0x1016d89c */
  goto L_1016d89c;
L_1016d887:;
  /* 1016d887 lock dec dword ptr [0x10176a34] */
  x86_unimpl("lock dec @ 0x1016d887");
  /* 1016d88e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1016d890 call 0x1016a013 */
  push32(0x1016d895u); f_1016a013();
  /* 1016d895 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1016d89c:;
  /* 1016d89c mov eax, 0xff */
  EAX = (0xffu);
  /* 1016d8a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016d8a3 nop  */
  /* nop */
L_1016d8a4:;
  /* 1016d8a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1016d8a6 je 0x1016d8cf */
  if (C.zf) goto L_1016d8cf;
  /* 1016d8a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016d8aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016d8ab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1016d8ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016d8ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016d8b0 je 0x1016d8a4 */
  if (C.zf) goto L_1016d8a4;
  /* 1016d8b2 push eax */
  push32((uint32_t)(EAX));
  /* 1016d8b3 push ebx */
  push32((uint32_t)(EBX));
  /* 1016d8b4 call 0x101694af */
  push32(0x1016d8b9u); f_101694af();
  /* 1016d8b9 mov ebx, eax */
  EBX = (EAX);
  /* 1016d8bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d8be call 0x101694af */
  push32(0x1016d8c3u); f_101694af();
  /* 1016d8c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d8c6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016d8c8 je 0x1016d8a4 */
  if (C.zf) goto L_1016d8a4;
  /* 1016d8ca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1016d8cc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1016d8cf:;
  /* 1016d8cf mov ebx, eax */
  EBX = (EAX);
  /* 1016d8d1 pop eax */
  EAX = (pop32());
  /* 1016d8d2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016d8d4 jne 0x1016d8df */
  if (!C.zf) goto L_1016d8df;
  /* 1016d8d6 lock dec dword ptr [0x10176a34] */
  x86_unimpl("lock dec @ 0x1016d8d6");
  /* 1016d8dd jmp 0x1016d8e9 */
  goto L_1016d8e9;
L_1016d8df:;
  /* 1016d8df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1016d8e1 call 0x1016a074 */
  push32(0x1016d8e6u); f_1016a074();
  /* 1016d8e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1016d8e9:;
  /* 1016d8e9 mov eax, ebx */
  EAX = (EBX);
L_1016d8eb:;
  /* 1016d8eb pop ebx */
  EBX = (pop32());
  /* 1016d8ec pop esi */
  ESI = (pop32());
  /* 1016d8ed pop edi */
  EDI = (pop32());
  /* 1016d8ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016d8ef ret  */
  ESPCHK(0x1016d820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8f0 @ 0x1016d8f0 (257 bytes, 103 insns) */
void f_1016d8f0(void) {
  FTRACE(0x1016d8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016d8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1016d8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1016d8f3 push edi */
  push32((uint32_t)(EDI));
  /* 1016d8f4 push esi */
  push32((uint32_t)(ESI));
  /* 1016d8f5 push ebx */
  push32((uint32_t)(EBX));
  /* 1016d8f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1016d8f9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1016d8fb je 0x1016d9ea */
  if (C.zf) goto L_1016d9ea;
  /* 1016d901 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1016d904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1016d907 lea eax, [0x101768b0] */
  EAX = ((uint32_t)(0x101768b0));
  /* 1016d90d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d911 jne 0x1016d961 */
  if (!C.zf) goto L_1016d961;
  /* 1016d913 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 1016d915 mov bl, 0x5a */
  BL = (0x5au);
  /* 1016d917 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1016d919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1016d91c:;
  /* 1016d91c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1016d91e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1016d920 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1016d922 je 0x1016d945 */
  if (C.zf) goto L_1016d945;
  /* 1016d924 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1016d926 je 0x1016d945 */
  if (C.zf) goto L_1016d945;
  /* 1016d928 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016d929 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016d92a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016d92c jb 0x1016d934 */
  if (C.cf) goto L_1016d934;
  /* 1016d92e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016d930 ja 0x1016d934 */
  if ((!C.cf&&!C.zf)) goto L_1016d934;
  /* 1016d932 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_1016d934:;
  /* 1016d934 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016d936 jb 0x1016d93e */
  if (C.cf) goto L_1016d93e;
  /* 1016d938 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016d93a ja 0x1016d93e */
  if ((!C.cf&&!C.zf)) goto L_1016d93e;
  /* 1016d93c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1016d93e:;
  /* 1016d93e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016d940 jne 0x1016d94f */
  if (!C.zf) goto L_1016d94f;
  /* 1016d942 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1016d943 jne 0x1016d91c */
  if (!C.zf) goto L_1016d91c;
L_1016d945:;
  /* 1016d945 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1016d947 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1016d949 je 0x1016d9ea */
  if (C.zf) goto L_1016d9ea;
L_1016d94f:;
  /* 1016d94f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1016d954 jb 0x1016d9ea */
  if (C.cf) goto L_1016d9ea;
  /* 1016d95a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1016d95c jmp 0x1016d9ea */
  goto L_1016d9ea;
L_1016d961:;
  /* 1016d961 lock inc dword ptr [0x10176a34] */
  x86_unimpl("lock inc @ 0x1016d961");
  /* 1016d968 cmp dword ptr [0x10176a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10176a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d96f jg 0x1016d975 */
  if ((!C.zf&&C.sf==C.of)) goto L_1016d975;
  /* 1016d971 push 0 */
  push32((uint32_t)(0x0u));
  /* 1016d973 jmp 0x1016d98e */
  goto L_1016d98e;
L_1016d975:;
  /* 1016d975 lock dec dword ptr [0x10176a34] */
  x86_unimpl("lock dec @ 0x1016d975");
  /* 1016d97c mov ebx, ecx */
  EBX = (ECX);
  /* 1016d97e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1016d980 call 0x1016a013 */
  push32(0x1016d985u); f_1016a013();
  /* 1016d985 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1016d98c mov ecx, ebx */
  ECX = (EBX);
L_1016d98e:;
  /* 1016d98e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016d990 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016d992 mov edi, edi */
  EDI = (EDI);
L_1016d994:;
  /* 1016d994 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1016d996 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016d998 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1016d99a je 0x1016d9bf */
  if (C.zf) goto L_1016d9bf;
  /* 1016d99c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1016d99e je 0x1016d9bf */
  if (C.zf) goto L_1016d9bf;
  /* 1016d9a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1016d9a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1016d9a2 push ecx */
  push32((uint32_t)(ECX));
  /* 1016d9a3 push eax */
  push32((uint32_t)(EAX));
  /* 1016d9a4 push ebx */
  push32((uint32_t)(EBX));
  /* 1016d9a5 call 0x101694af */
  push32(0x1016d9aau); f_101694af();
  /* 1016d9aa mov ebx, eax */
  EBX = (EAX);
  /* 1016d9ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d9af call 0x101694af */
  push32(0x1016d9b4u); f_101694af();
  /* 1016d9b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d9b7 pop ecx */
  ECX = (pop32());
  /* 1016d9b8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d9ba jne 0x1016d9c5 */
  if (!C.zf) goto L_1016d9c5;
  /* 1016d9bc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1016d9bd jne 0x1016d994 */
  if (!C.zf) goto L_1016d994;
L_1016d9bf:;
  /* 1016d9bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1016d9c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1016d9c3 je 0x1016d9ce */
  if (C.zf) goto L_1016d9ce;
L_1016d9c5:;
  /* 1016d9c5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1016d9ca jb 0x1016d9ce */
  if (C.cf) goto L_1016d9ce;
  /* 1016d9cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1016d9ce:;
  /* 1016d9ce pop eax */
  EAX = (pop32());
  /* 1016d9cf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1016d9d1 jne 0x1016d9dc */
  if (!C.zf) goto L_1016d9dc;
  /* 1016d9d3 lock dec dword ptr [0x10176a34] */
  x86_unimpl("lock dec @ 0x1016d9d3");
  /* 1016d9da jmp 0x1016d9ea */
  goto L_1016d9ea;
L_1016d9dc:;
  /* 1016d9dc mov ebx, ecx */
  EBX = (ECX);
  /* 1016d9de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1016d9e0 call 0x1016a074 */
  push32(0x1016d9e5u); f_1016a074();
  /* 1016d9e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1016d9e8 mov ecx, ebx */
  ECX = (EBX);
L_1016d9ea:;
  /* 1016d9ea mov eax, ecx */
  EAX = (ECX);
  /* 1016d9ec pop ebx */
  EBX = (pop32());
  /* 1016d9ed pop esi */
  ESI = (pop32());
  /* 1016d9ee pop edi */
  EDI = (pop32());
  /* 1016d9ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1016d9f0 ret  */
  ESPCHK(0x1016d8f0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x1016da34 (6 bytes, 1 insns) */
void f_1016da34(void) {
  FTRACE(0x1016da34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1016da34 jmp dword ptr [0x1016e0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1016e0cc)))); return;
}

