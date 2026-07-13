#include "recomp.h"

/* FUN_10009265 @ 0x10069265 (53 bytes, 25 insns) */
void f_10069265(void) {
  FTRACE(0x10069265u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069265 push ebp */
  push32((uint32_t)(EBP));
  /* 10069266 mov ebp, esp */
  EBP = (ESP);
  /* 10069268 push ecx */
  push32((uint32_t)(ECX));
  /* 10069269 push esi */
  push32((uint32_t)(ESI));
  /* 1006926a wait  */
  /* wait (no observable integer/reg state) */
  /* 1006926b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 1006926e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 10069271 call 0x100692b0 */
  push32(0x10069276u); f_100692b0();
  /* 10069276 mov esi, eax */
  ESI = (EAX);
  /* 10069278 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006927b not eax */
  EAX = (~(EAX));
  /* 1006927d and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 1006927f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10069282 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10069285 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 10069287 push esi */
  push32((uint32_t)(ESI));
  /* 10069288 call 0x10069342 */
  push32(0x1006928du); f_10069342();
  /* 1006928d pop ecx */
  ECX = (pop32());
  /* 1006928e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10069291 pop ecx */
  ECX = (pop32());
  /* 10069292 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 10069295 mov eax, esi */
  EAX = (ESI);
  /* 10069297 pop esi */
  ESI = (pop32());
  /* 10069298 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069299 ret  */
  ESPCHK(0x10069265u, _esp0);
  ESP += 4; return;
}

/* FUN_1000929a @ 0x1006929a (22 bytes, 8 insns) */
void f_1006929a(void) {
  FTRACE(0x1006929au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006929a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1006929e and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100692a3 push eax */
  push32((uint32_t)(EAX));
  /* 100692a4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100692a8 call 0x10069265 */
  push32(0x100692adu); f_10069265();
  /* 100692ad pop ecx */
  ECX = (pop32());
  /* 100692ae pop ecx */
  ECX = (pop32());
  /* 100692af ret  */
  ESPCHK(0x1006929au, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x100692b0 (146 bytes, 58 insns) */
void f_100692b0(void) {
  FTRACE(0x100692b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100692b0 push ebx */
  push32((uint32_t)(EBX));
  /* 100692b1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 100692b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100692b7 push ebp */
  push32((uint32_t)(EBP));
  /* 100692b8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100692bb push edi */
  push32((uint32_t)(EDI));
  /* 100692bc je 0x100692c1 */
  if (C.zf) goto L_100692c1;
  /* 100692be push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100692c0 pop eax */
  EAX = (pop32());
L_100692c1:;
  /* 100692c1 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 100692c4 je 0x100692c8 */
  if (C.zf) goto L_100692c8;
  /* 100692c6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_100692c8:;
  /* 100692c8 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 100692cb je 0x100692cf */
  if (C.zf) goto L_100692cf;
  /* 100692cd or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_100692cf:;
  /* 100692cf test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 100692d2 je 0x100692d6 */
  if (C.zf) goto L_100692d6;
  /* 100692d4 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_100692d6:;
  /* 100692d6 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 100692d9 je 0x100692dd */
  if (C.zf) goto L_100692dd;
  /* 100692db or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_100692dd:;
  /* 100692dd test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 100692e0 je 0x100692e7 */
  if (C.zf) goto L_100692e7;
  /* 100692e2 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_100692e7:;
  /* 100692e7 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 100692ea push esi */
  push32((uint32_t)(ESI));
  /* 100692eb mov edx, ecx */
  EDX = (ECX);
  /* 100692ed mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 100692f2 mov edi, 0x300 */
  EDI = (0x300u);
  /* 100692f7 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 100692f9 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 100692fe je 0x1006931f */
  if (C.zf) goto L_1006931f;
  /* 10069300 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069306 je 0x1006931c */
  if (C.zf) goto L_1006931c;
  /* 10069308 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006930e je 0x10069318 */
  if (C.zf) goto L_10069318;
  /* 10069310 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069312 jne 0x1006931f */
  if (!C.zf) goto L_1006931f;
  /* 10069314 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10069316 jmp 0x1006931f */
  goto L_1006931f;
L_10069318:;
  /* 10069318 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 1006931a jmp 0x1006931f */
  goto L_1006931f;
L_1006931c:;
  /* 1006931c or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_1006931f:;
  /* 1006931f and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10069321 pop esi */
  ESI = (pop32());
  /* 10069322 je 0x1006932f */
  if (C.zf) goto L_1006932f;
  /* 10069324 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069326 jne 0x10069334 */
  if (!C.zf) goto L_10069334;
  /* 10069328 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 1006932d jmp 0x10069334 */
  goto L_10069334;
L_1006932f:;
  /* 1006932f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_10069334:;
  /* 10069334 pop edi */
  EDI = (pop32());
  /* 10069335 pop ebp */
  EBP = (pop32());
  /* 10069336 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 10069339 pop ebx */
  EBX = (pop32());
  /* 1006933a je 0x10069341 */
  if (C.zf) goto L_10069341;
  /* 1006933c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_10069341:;
  /* 10069341 ret  */
  ESPCHK(0x100692b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009342 @ 0x10069342 (137 bytes, 53 insns) */
void f_10069342(void) {
  FTRACE(0x10069342u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069342 push ebx */
  push32((uint32_t)(EBX));
  /* 10069343 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10069347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10069349 push esi */
  push32((uint32_t)(ESI));
  /* 1006934a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 1006934d je 0x10069352 */
  if (C.zf) goto L_10069352;
  /* 1006934f push 1 */
  push32((uint32_t)(0x1u));
  /* 10069351 pop eax */
  EAX = (pop32());
L_10069352:;
  /* 10069352 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10069355 je 0x10069359 */
  if (C.zf) goto L_10069359;
  /* 10069357 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_10069359:;
  /* 10069359 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1006935c je 0x10069360 */
  if (C.zf) goto L_10069360;
  /* 1006935e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_10069360:;
  /* 10069360 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10069363 je 0x10069367 */
  if (C.zf) goto L_10069367;
  /* 10069365 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_10069367:;
  /* 10069367 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1006936a je 0x1006936e */
  if (C.zf) goto L_1006936e;
  /* 1006936c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_1006936e:;
  /* 1006936e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 10069374 je 0x10069378 */
  if (C.zf) goto L_10069378;
  /* 10069376 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_10069378:;
  /* 10069378 mov ecx, ebx */
  ECX = (EBX);
  /* 1006937a mov edx, 0x300 */
  EDX = (0x300u);
  /* 1006937f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10069381 mov esi, 0x200 */
  ESI = (0x200u);
  /* 10069386 je 0x100693a5 */
  if (C.zf) goto L_100693a5;
  /* 10069388 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006938e je 0x100693a2 */
  if (C.zf) goto L_100693a2;
  /* 10069390 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069392 je 0x1006939d */
  if (C.zf) goto L_1006939d;
  /* 10069394 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069396 jne 0x100693a5 */
  if (!C.zf) goto L_100693a5;
  /* 10069398 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 1006939b jmp 0x100693a5 */
  goto L_100693a5;
L_1006939d:;
  /* 1006939d or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 100693a0 jmp 0x100693a5 */
  goto L_100693a5;
L_100693a2:;
  /* 100693a2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_100693a5:;
  /* 100693a5 mov ecx, ebx */
  ECX = (EBX);
  /* 100693a7 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 100693ad je 0x100693bb */
  if (C.zf) goto L_100693bb;
  /* 100693af cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100693b5 jne 0x100693bd */
  if (!C.zf) goto L_100693bd;
  /* 100693b7 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 100693b9 jmp 0x100693bd */
  goto L_100693bd;
L_100693bb:;
  /* 100693bb or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_100693bd:;
  /* 100693bd pop esi */
  ESI = (pop32());
  /* 100693be test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 100693c4 pop ebx */
  EBX = (pop32());
  /* 100693c5 je 0x100693ca */
  if (C.zf) goto L_100693ca;
  /* 100693c7 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_100693ca:;
  /* 100693ca ret  */
  ESPCHK(0x10069342u, _esp0);
  ESP += 4; return;
}

/* FUN_100093cb @ 0x100693cb (117 bytes, 46 insns) */
void f_100693cb(void) {
  FTRACE(0x100693cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100693cb push ebp */
  push32((uint32_t)(EBP));
  /* 100693cc mov ebp, esp */
  EBP = (ESP);
  /* 100693ce push ecx */
  push32((uint32_t)(ECX));
  /* 100693cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100693d2 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 100693d5 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100693db ja 0x100693e9 */
  if ((!C.cf&&!C.zf)) goto L_100693e9;
  /* 100693dd mov ecx, dword ptr [0x100709e0] */
  ECX = (r32((uint32_t)(0x100709e0)));
  /* 100693e3 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 100693e7 jmp 0x1006943b */
  goto L_1006943b;
L_100693e9:;
  /* 100693e9 mov ecx, eax */
  ECX = (EAX);
  /* 100693eb push esi */
  push32((uint32_t)(ESI));
  /* 100693ec mov esi, dword ptr [0x100709e0] */
  ESI = (r32((uint32_t)(0x100709e0)));
  /* 100693f2 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 100693f5 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 100693f8 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100693fd pop esi */
  ESI = (pop32());
  /* 100693fe je 0x1006940e */
  if (C.zf) goto L_1006940e;
  /* 10069400 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 10069404 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10069407 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 1006940a push 2 */
  push32((uint32_t)(0x2u));
  /* 1006940c jmp 0x10069417 */
  goto L_10069417;
L_1006940e:;
  /* 1006940e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10069412 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10069415 push 1 */
  push32((uint32_t)(0x1u));
L_10069417:;
  /* 10069417 pop eax */
  EAX = (pop32());
  /* 10069418 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 1006941b push 1 */
  push32((uint32_t)(0x1u));
  /* 1006941d push 0 */
  push32((uint32_t)(0x0u));
  /* 1006941f push 0 */
  push32((uint32_t)(0x0u));
  /* 10069421 push ecx */
  push32((uint32_t)(ECX));
  /* 10069422 push eax */
  push32((uint32_t)(EAX));
  /* 10069423 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10069426 push eax */
  push32((uint32_t)(EAX));
  /* 10069427 push 1 */
  push32((uint32_t)(0x1u));
  /* 10069429 call 0x1006c27d */
  push32(0x1006942eu); f_1006c27d();
  /* 1006942e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10069431 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10069433 jne 0x10069437 */
  if (!C.zf) goto L_10069437;
  /* 10069435 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069436 ret  */
  ESPCHK(0x100693cbu, _esp0);
  ESP += 4; return;
L_10069437:;
  /* 10069437 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_1006943b:;
  /* 1006943b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1006943e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006943f ret  */
  ESPCHK(0x100693cbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009440 @ 0x10069440 (111 bytes, 44 insns) */
void f_10069440(void) {
  FTRACE(0x10069440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069440 push ebx */
  push32((uint32_t)(EBX));
  /* 10069441 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10069443 cmp dword ptr [0x10076848], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10076848))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069449 jne 0x1006945e */
  if (!C.zf) goto L_1006945e;
  /* 1006944b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1006944f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069452 jl 0x100694ad */
  if ((C.sf!=C.of)) goto L_100694ad;
  /* 10069454 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069457 jg 0x100694ad */
  if ((!C.zf&&C.sf==C.of)) goto L_100694ad;
  /* 10069459 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006945c pop ebx */
  EBX = (pop32());
  /* 1006945d ret  */
  ESPCHK(0x10069440u, _esp0);
  ESP += 4; return;
L_1006945e:;
  /* 1006945e push esi */
  push32((uint32_t)(ESI));
  /* 1006945f mov esi, 0x100769c4 */
  ESI = (0x100769c4u);
  /* 10069464 push edi */
  push32((uint32_t)(EDI));
  /* 10069465 push esi */
  push32((uint32_t)(ESI));
  /* 10069466 call dword ptr [0x1006e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e090))), 0x1006946cu);
  /* 1006946c cmp dword ptr [0x100769c0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100769c0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069472 mov edi, dword ptr [0x1006e08c] */
  EDI = (r32((uint32_t)(0x1006e08c)));
  /* 10069478 je 0x10069488 */
  if (C.zf) goto L_10069488;
  /* 1006947a push esi */
  push32((uint32_t)(ESI));
  /* 1006947b call edi */
  call_ind((uint32_t)(EDI), 0x1006947du);
  /* 1006947d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1006947f call 0x1006a013 */
  push32(0x10069484u); f_1006a013();
  /* 10069484 pop ecx */
  ECX = (pop32());
  /* 10069485 push 1 */
  push32((uint32_t)(0x1u));
  /* 10069487 pop ebx */
  EBX = (pop32());
L_10069488:;
  /* 10069488 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1006948c call 0x100694af */
  push32(0x10069491u); f_100694af();
  /* 10069491 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10069493 pop ecx */
  ECX = (pop32());
  /* 10069494 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10069498 je 0x100694a4 */
  if (C.zf) goto L_100694a4;
  /* 1006949a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1006949c call 0x1006a074 */
  push32(0x100694a1u); f_1006a074();
  /* 100694a1 pop ecx */
  ECX = (pop32());
  /* 100694a2 jmp 0x100694a7 */
  goto L_100694a7;
L_100694a4:;
  /* 100694a4 push esi */
  push32((uint32_t)(ESI));
  /* 100694a5 call edi */
  call_ind((uint32_t)(EDI), 0x100694a7u);
L_100694a7:;
  /* 100694a7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100694ab pop edi */
  EDI = (pop32());
  /* 100694ac pop esi */
  ESI = (pop32());
L_100694ad:;
  /* 100694ad pop ebx */
  EBX = (pop32());
  /* 100694ae ret  */
  ESPCHK(0x10069440u, _esp0);
  ESP += 4; return;
}

/* FUN_100094af @ 0x100694af (203 bytes, 78 insns) */
void f_100694af(void) {
  FTRACE(0x100694afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100694af push ebp */
  push32((uint32_t)(EBP));
  /* 100694b0 mov ebp, esp */
  EBP = (ESP);
  /* 100694b2 push ecx */
  push32((uint32_t)(ECX));
  /* 100694b3 cmp dword ptr [0x10076848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10076848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100694ba push ebx */
  push32((uint32_t)(EBX));
  /* 100694bb push esi */
  push32((uint32_t)(ESI));
  /* 100694bc push edi */
  push32((uint32_t)(EDI));
  /* 100694bd jne 0x100694dc */
  if (!C.zf) goto L_100694dc;
  /* 100694bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100694c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100694c5 jl 0x10069575 */
  if ((C.sf!=C.of)) goto L_10069575;
  /* 100694cb cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100694ce jg 0x10069575 */
  if ((!C.zf&&C.sf==C.of)) goto L_10069575;
  /* 100694d4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100694d7 jmp 0x10069575 */
  goto L_10069575;
L_100694dc:;
  /* 100694dc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100694df mov edi, 0x100 */
  EDI = (0x100u);
  /* 100694e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100694e6 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100694e8 pop esi */
  ESI = (pop32());
  /* 100694e9 jge 0x10069510 */
  if ((C.sf==C.of)) goto L_10069510;
  /* 100694eb cmp dword ptr [0x10070bf0], esi */
  { uint32_t _a=(r32((uint32_t)(0x10070bf0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100694f1 jle 0x100694fe */
  if ((C.zf||C.sf!=C.of)) goto L_100694fe;
  /* 100694f3 push esi */
  push32((uint32_t)(ESI));
  /* 100694f4 push ebx */
  push32((uint32_t)(EBX));
  /* 100694f5 call 0x100693cb */
  push32(0x100694fau); f_100693cb();
  /* 100694fa pop ecx */
  ECX = (pop32());
  /* 100694fb pop ecx */
  ECX = (pop32());
  /* 100694fc jmp 0x10069508 */
  goto L_10069508;
L_100694fe:;
  /* 100694fe mov eax, dword ptr [0x100709e0] */
  EAX = (r32((uint32_t)(0x100709e0)));
  /* 10069503 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 10069506 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_10069508:;
  /* 10069508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006950a jne 0x10069510 */
  if (!C.zf) goto L_10069510;
L_1006950c:;
  /* 1006950c mov eax, ebx */
  EAX = (EBX);
  /* 1006950e jmp 0x10069575 */
  goto L_10069575;
L_10069510:;
  /* 10069510 mov edx, dword ptr [0x100709e0] */
  EDX = (r32((uint32_t)(0x100709e0)));
  /* 10069516 mov eax, ebx */
  EAX = (EBX);
  /* 10069518 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1006951b movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1006951e test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10069523 je 0x10069534 */
  if (C.zf) goto L_10069534;
  /* 10069525 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 10069529 push 2 */
  push32((uint32_t)(0x2u));
  /* 1006952b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1006952e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 10069531 pop eax */
  EAX = (pop32());
  /* 10069532 jmp 0x1006953d */
  goto L_1006953d;
L_10069534:;
  /* 10069534 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 10069538 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1006953b mov eax, esi */
  EAX = (ESI);
L_1006953d:;
  /* 1006953d push esi */
  push32((uint32_t)(ESI));
  /* 1006953e push 0 */
  push32((uint32_t)(0x0u));
  /* 10069540 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10069543 push 3 */
  push32((uint32_t)(0x3u));
  /* 10069545 push ecx */
  push32((uint32_t)(ECX));
  /* 10069546 push eax */
  push32((uint32_t)(EAX));
  /* 10069547 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1006954a push eax */
  push32((uint32_t)(EAX));
  /* 1006954b push edi */
  push32((uint32_t)(EDI));
  /* 1006954c push dword ptr [0x10076848] */
  push32((uint32_t)(r32((uint32_t)(0x10076848))));
  /* 10069552 call 0x1006c3c6 */
  push32(0x10069557u); f_1006c3c6();
  /* 10069557 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006955a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006955c je 0x1006950c */
  if (C.zf) goto L_1006950c;
  /* 1006955e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069560 jne 0x10069568 */
  if (!C.zf) goto L_10069568;
  /* 10069562 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10069566 jmp 0x10069575 */
  goto L_10069575;
L_10069568:;
  /* 10069568 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1006956c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10069570 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10069573 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10069575:;
  /* 10069575 pop edi */
  EDI = (pop32());
  /* 10069576 pop esi */
  ESI = (pop32());
  /* 10069577 pop ebx */
  EBX = (pop32());
  /* 10069578 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069579 ret  */
  ESPCHK(0x100694afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000957a @ 0x1006957a (73 bytes, 36 insns) */
void f_1006957a(void) {
  FTRACE(0x1006957au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006957a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1006957e push esi */
  push32((uint32_t)(ESI));
  /* 1006957f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10069581 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10069582 pop ecx */
  ECX = (pop32());
  /* 10069583 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10069585 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10069587 mov esi, eax */
  ESI = (EAX);
  /* 10069589 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1006958d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1006958e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10069590 pop ecx */
  ECX = (pop32());
  /* 10069591 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10069595 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10069597 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1006959a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1006959c not edx */
  EDX = (~(EDX));
  /* 1006959e test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 100695a1 jne 0x100695bf */
  if (!C.zf) goto L_100695bf;
  /* 100695a3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100695a4 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100695a7 jge 0x100695ba */
  if ((C.sf==C.of)) goto L_100695ba;
  /* 100695a9 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_100695ac:;
  /* 100695ac cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100695af jne 0x100695bf */
  if (!C.zf) goto L_100695bf;
  /* 100695b1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100695b2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100695b5 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100695b8 jl 0x100695ac */
  if ((C.sf!=C.of)) goto L_100695ac;
L_100695ba:;
  /* 100695ba push 1 */
  push32((uint32_t)(0x1u));
  /* 100695bc pop eax */
  EAX = (pop32());
  /* 100695bd pop esi */
  ESI = (pop32());
  /* 100695be ret  */
  ESPCHK(0x1006957au, _esp0);
  ESP += 4; return;
L_100695bf:;
  /* 100695bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100695c1 pop esi */
  ESI = (pop32());
  /* 100695c2 ret  */
  ESPCHK(0x1006957au, _esp0);
  ESP += 4; return;
}

/* FUN_100095c3 @ 0x100695c3 (86 bytes, 43 insns) */
void f_100695c3(void) {
  FTRACE(0x100695c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100695c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100695c7 push ebx */
  push32((uint32_t)(EBX));
  /* 100695c8 push esi */
  push32((uint32_t)(ESI));
  /* 100695c9 push edi */
  push32((uint32_t)(EDI));
  /* 100695ca push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100695cc mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 100695d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100695d1 pop ecx */
  ECX = (pop32());
  /* 100695d2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100695d4 mov esi, eax */
  ESI = (EAX);
  /* 100695d6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100695da cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100695db idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100695dd lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 100695e0 push edi */
  push32((uint32_t)(EDI));
  /* 100695e1 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100695e3 pop ecx */
  ECX = (pop32());
  /* 100695e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100695e6 pop eax */
  EAX = (pop32());
  /* 100695e7 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100695e9 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100695eb push eax */
  push32((uint32_t)(EAX));
  /* 100695ec push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 100695ee call 0x1006c615 */
  push32(0x100695f3u); f_1006c615();
  /* 100695f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100695f6 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100695f7 js 0x10069615 */
  if (C.sf) goto L_10069615;
  /* 100695f9 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_100695fc:;
  /* 100695fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100695fe je 0x10069615 */
  if (C.zf) goto L_10069615;
  /* 10069600 push edi */
  push32((uint32_t)(EDI));
  /* 10069601 push 1 */
  push32((uint32_t)(0x1u));
  /* 10069603 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 10069605 call 0x1006c615 */
  push32(0x1006960au); f_1006c615();
  /* 1006960a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006960d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1006960e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10069611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10069613 jge 0x100695fc */
  if ((C.sf==C.of)) goto L_100695fc;
L_10069615:;
  /* 10069615 pop edi */
  EDI = (pop32());
  /* 10069616 pop esi */
  ESI = (pop32());
  /* 10069617 pop ebx */
  EBX = (pop32());
  /* 10069618 ret  */
  ESPCHK(0x100695c3u, _esp0);
  ESP += 4; return;
}

/* FUN_10009619 @ 0x10069619 (140 bytes, 71 insns) */
void f_10069619(void) {
  FTRACE(0x10069619u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069619 push ebp */
  push32((uint32_t)(EBP));
  /* 1006961a mov ebp, esp */
  EBP = (ESP);
  /* 1006961c push ecx */
  push32((uint32_t)(ECX));
  /* 1006961d push ecx */
  push32((uint32_t)(ECX));
  /* 1006961e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10069621 push ebx */
  push32((uint32_t)(EBX));
  /* 10069622 push esi */
  push32((uint32_t)(ESI));
  /* 10069623 push edi */
  push32((uint32_t)(EDI));
  /* 10069624 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 10069627 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10069629 pop ecx */
  ECX = (pop32());
  /* 1006962a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006962e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 10069631 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10069633 mov eax, ebx */
  EAX = (EBX);
  /* 10069635 pop esi */
  ESI = (pop32());
  /* 10069636 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10069637 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10069639 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1006963b mov ecx, eax */
  ECX = (EAX);
  /* 1006963d mov eax, ebx */
  EAX = (EBX);
  /* 1006963f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10069640 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10069642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10069645 pop esi */
  ESI = (pop32());
  /* 10069646 push 1 */
  push32((uint32_t)(0x1u));
  /* 10069648 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1006964b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1006964e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10069651 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10069653 pop edx */
  EDX = (pop32());
  /* 10069654 mov ecx, esi */
  ECX = (ESI);
  /* 10069656 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10069658 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 1006965a je 0x1006967d */
  if (C.zf) goto L_1006967d;
  /* 1006965c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1006965d push ebx */
  push32((uint32_t)(EBX));
  /* 1006965e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10069661 call 0x1006957a */
  push32(0x10069666u); f_1006957a();
  /* 10069666 pop ecx */
  ECX = (pop32());
  /* 10069667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10069669 pop ecx */
  ECX = (pop32());
  /* 1006966a jne 0x1006967a */
  if (!C.zf) goto L_1006967a;
  /* 1006966c push edi */
  push32((uint32_t)(EDI));
  /* 1006966d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10069670 call 0x100695c3 */
  push32(0x10069675u); f_100695c3();
  /* 10069675 pop ecx */
  ECX = (pop32());
  /* 10069676 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10069679 pop ecx */
  ECX = (pop32());
L_1006967a:;
  /* 1006967a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1006967d:;
  /* 1006967d or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10069680 mov ecx, esi */
  ECX = (ESI);
  /* 10069682 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10069684 push 3 */
  push32((uint32_t)(0x3u));
  /* 10069686 pop ecx */
  ECX = (pop32());
  /* 10069687 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10069689 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1006968c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006968d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006968f jge 0x1006969d */
  if ((C.sf==C.of)) goto L_1006969d;
  /* 10069691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10069694 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10069696 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10069699 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006969b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_1006969d:;
  /* 1006969d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100696a0 pop edi */
  EDI = (pop32());
  /* 100696a1 pop esi */
  ESI = (pop32());
  /* 100696a2 pop ebx */
  EBX = (pop32());
  /* 100696a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100696a4 ret  */
  ESPCHK(0x10069619u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a5 @ 0x100696a5 (27 bytes, 13 insns) */
void f_100696a5(void) {
  FTRACE(0x100696a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100696a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100696a9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100696ad push esi */
  push32((uint32_t)(ESI));
  /* 100696ae push 3 */
  push32((uint32_t)(0x3u));
  /* 100696b0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100696b2 pop edx */
  EDX = (pop32());
L_100696b3:;
  /* 100696b3 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 100696b5 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 100696b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100696bb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100696bc jne 0x100696b3 */
  if (!C.zf) goto L_100696b3;
  /* 100696be pop esi */
  ESI = (pop32());
  /* 100696bf ret  */
  ESPCHK(0x100696a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100096c0 @ 0x100696c0 (12 bytes, 8 insns) */
void f_100696c0(void) {
  FTRACE(0x100696c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100696c0 push edi */
  push32((uint32_t)(EDI));
  /* 100696c1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 100696c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100696c7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100696c8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100696c9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100696ca pop edi */
  EDI = (pop32());
  /* 100696cb ret  */
  ESPCHK(0x100696c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096cc @ 0x100696cc (27 bytes, 13 insns) */
void f_100696cc(void) {
  FTRACE(0x100696ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100696cc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100696d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_100696d2:;
  /* 100696d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100696d5 jne 0x100696e4 */
  if (!C.zf) goto L_100696e4;
  /* 100696d7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100696d8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100696db cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100696de jl 0x100696d2 */
  if ((C.sf!=C.of)) goto L_100696d2;
  /* 100696e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100696e2 pop eax */
  EAX = (pop32());
  /* 100696e3 ret  */
  ESPCHK(0x100696ccu, _esp0);
  ESP += 4; return;
L_100696e4:;
  /* 100696e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100696e6 ret  */
  ESPCHK(0x100696ccu, _esp0);
  ESP += 4; return;
}

/* FUN_100096e7 @ 0x100696e7 (141 bytes, 64 insns) */
void f_100696e7(void) {
  FTRACE(0x100696e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100696e7 push ebp */
  push32((uint32_t)(EBP));
  /* 100696e8 mov ebp, esp */
  EBP = (ESP);
  /* 100696ea sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100696ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100696f0 push ebx */
  push32((uint32_t)(EBX));
  /* 100696f1 push esi */
  push32((uint32_t)(ESI));
  /* 100696f2 push edi */
  push32((uint32_t)(EDI));
  /* 100696f3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100696f5 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100696f8 pop ebx */
  EBX = (pop32());
  /* 100696f9 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 100696fc cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100696fd mov ecx, ebx */
  ECX = (EBX);
  /* 100696ff mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 10069706 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10069708 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1006970b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006970e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1006970f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10069711 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10069715 mov ecx, edx */
  ECX = (EDX);
  /* 10069717 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10069719 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006971b not esi */
  ESI = (~(ESI));
L_1006971d:;
  /* 1006971d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1006971f mov ecx, eax */
  ECX = (EAX);
  /* 10069721 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10069723 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10069726 mov ecx, edx */
  ECX = (EDX);
  /* 10069728 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1006972a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1006972d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1006972f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10069732 mov ecx, ebx */
  ECX = (EBX);
  /* 10069734 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10069737 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10069739 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1006973c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1006973f jne 0x1006971d */
  if (!C.zf) goto L_1006971d;
  /* 10069741 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 10069744 push 2 */
  push32((uint32_t)(0x2u));
  /* 10069746 pop ebx */
  EBX = (pop32());
  /* 10069747 mov esi, edi */
  ESI = (EDI);
  /* 10069749 push 8 */
  push32((uint32_t)(0x8u));
  /* 1006974b pop ecx */
  ECX = (pop32());
  /* 1006974c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_1006974f:;
  /* 1006974f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069751 jl 0x10069762 */
  if ((C.sf!=C.of)) goto L_10069762;
  /* 10069753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10069756 mov eax, ecx */
  EAX = (ECX);
  /* 10069758 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006975a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1006975d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 10069760 jmp 0x10069769 */
  goto L_10069769;
L_10069762:;
  /* 10069762 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10069765 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_10069769:;
  /* 10069769 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1006976a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006976d jns 0x1006974f */
  if (!C.sf) goto L_1006974f;
  /* 1006976f pop edi */
  EDI = (pop32());
  /* 10069770 pop esi */
  ESI = (pop32());
  /* 10069771 pop ebx */
  EBX = (pop32());
  /* 10069772 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069773 ret  */
  ESPCHK(0x100696e7u, _esp0);
  ESP += 4; return;
}

/* FUN_10009774 @ 0x10069774 (364 bytes, 138 insns) */
void f_10069774(void) {
  FTRACE(0x10069774u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069774 push ebp */
  push32((uint32_t)(EBP));
  /* 10069775 mov ebp, esp */
  EBP = (ESP);
  /* 10069777 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006977a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006977d push ebx */
  push32((uint32_t)(EBX));
  /* 1006977e push esi */
  push32((uint32_t)(ESI));
  /* 1006977f push edi */
  push32((uint32_t)(EDI));
  /* 10069780 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 10069784 mov ebx, ecx */
  EBX = (ECX);
  /* 10069786 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1006978c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1006978f mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 10069792 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10069795 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 10069798 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1006979b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1006979e and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 100697a4 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100697aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100697ad shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100697b0 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100697b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100697b9 jne 0x100697e1 */
  if (!C.zf) goto L_100697e1;
  /* 100697bb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100697be xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100697c0 push eax */
  push32((uint32_t)(EAX));
  /* 100697c1 call 0x100696cc */
  push32(0x100697c6u); f_100696cc();
  /* 100697c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100697c8 pop ecx */
  ECX = (pop32());
  /* 100697c9 jne 0x100698a0 */
  if (!C.zf) goto L_100698a0;
  /* 100697cf lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100697d2 push eax */
  push32((uint32_t)(EAX));
  /* 100697d3 call 0x100696c0 */
  push32(0x100697d8u); f_100696c0();
  /* 100697d8 pop ecx */
  ECX = (pop32());
L_100697d9:;
  /* 100697d9 push 2 */
  push32((uint32_t)(0x2u));
L_100697db:;
  /* 100697db pop eax */
  EAX = (pop32());
  /* 100697dc jmp 0x100698a2 */
  goto L_100698a2;
L_100697e1:;
  /* 100697e1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100697e4 push eax */
  push32((uint32_t)(EAX));
  /* 100697e5 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 100697e8 push eax */
  push32((uint32_t)(EAX));
  /* 100697e9 call 0x100696a5 */
  push32(0x100697eeu); f_100696a5();
  /* 100697ee push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 100697f1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100697f4 push eax */
  push32((uint32_t)(EAX));
  /* 100697f5 call 0x10069619 */
  push32(0x100697fau); f_10069619();
  /* 100697fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100697fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100697ff je 0x10069802 */
  if (C.zf) goto L_10069802;
  /* 10069801 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10069802:;
  /* 10069802 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 10069805 mov ecx, eax */
  ECX = (EAX);
  /* 10069807 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006980a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006980c jge 0x1006981a */
  if ((C.sf==C.of)) goto L_1006981a;
  /* 1006980e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10069811 push eax */
  push32((uint32_t)(EAX));
  /* 10069812 call 0x100696c0 */
  push32(0x10069817u); f_100696c0();
  /* 10069817 pop ecx */
  ECX = (pop32());
  /* 10069818 jmp 0x10069856 */
  goto L_10069856;
L_1006981a:;
  /* 1006981a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006981c jg 0x1006985d */
  if ((!C.zf&&C.sf==C.of)) goto L_1006985d;
  /* 1006981e sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10069820 mov esi, eax */
  ESI = (EAX);
  /* 10069822 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10069825 push eax */
  push32((uint32_t)(EAX));
  /* 10069826 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10069829 push eax */
  push32((uint32_t)(EAX));
  /* 1006982a call 0x100696a5 */
  push32(0x1006982fu); f_100696a5();
  /* 1006982f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10069832 push esi */
  push32((uint32_t)(ESI));
  /* 10069833 push eax */
  push32((uint32_t)(EAX));
  /* 10069834 call 0x100696e7 */
  push32(0x10069839u); f_100696e7();
  /* 10069839 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1006983c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1006983f push eax */
  push32((uint32_t)(EAX));
  /* 10069840 call 0x10069619 */
  push32(0x10069845u); f_10069619();
  /* 10069845 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 10069848 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10069849 push eax */
  push32((uint32_t)(EAX));
  /* 1006984a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1006984d push eax */
  push32((uint32_t)(EAX));
  /* 1006984e call 0x100696e7 */
  push32(0x10069853u); f_100696e7();
  /* 10069853 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10069856:;
  /* 10069856 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10069858 jmp 0x100697d9 */
  goto L_100697d9;
L_1006985d:;
  /* 1006985d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006985f jl 0x10069889 */
  if ((C.sf!=C.of)) goto L_10069889;
  /* 10069861 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10069864 push eax */
  push32((uint32_t)(EAX));
  /* 10069865 call 0x100696c0 */
  push32(0x1006986au); f_100696c0();
  /* 1006986a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1006986d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10069871 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10069874 push eax */
  push32((uint32_t)(EAX));
  /* 10069875 call 0x100696e7 */
  push32(0x1006987au); f_100696e7();
  /* 1006987a mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1006987d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10069880 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10069882 push 1 */
  push32((uint32_t)(0x1u));
  /* 10069884 jmp 0x100697db */
  goto L_100697db;
L_10069889:;
  /* 10069889 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 1006988c mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 1006988f and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 10069893 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10069896 push eax */
  push32((uint32_t)(EAX));
  /* 10069897 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10069899 call 0x100696e7 */
  push32(0x1006989eu); f_100696e7();
  /* 1006989e pop ecx */
  ECX = (pop32());
  /* 1006989f pop ecx */
  ECX = (pop32());
L_100698a0:;
  /* 100698a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100698a2:;
  /* 100698a2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100698a4 pop ecx */
  ECX = (pop32());
  /* 100698a5 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100698a8 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 100698ab shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100698ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100698b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100698b2 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100698b4 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 100698ba or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 100698bc or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 100698bf cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100698c2 jne 0x100698d1 */
  if (!C.zf) goto L_100698d1;
  /* 100698c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100698c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 100698ca mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 100698cd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 100698cf jmp 0x100698db */
  goto L_100698db;
L_100698d1:;
  /* 100698d1 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100698d4 jne 0x100698db */
  if (!C.zf) goto L_100698db;
  /* 100698d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100698d9 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_100698db:;
  /* 100698db pop edi */
  EDI = (pop32());
  /* 100698dc pop esi */
  ESI = (pop32());
  /* 100698dd pop ebx */
  EBX = (pop32());
  /* 100698de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100698df ret  */
  ESPCHK(0x10069774u, _esp0);
  ESP += 4; return;
}

/* FUN_100098e0 @ 0x100698e0 (22 bytes, 6 insns) */
void f_100698e0(void) {
  FTRACE(0x100698e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100698e0 push 0x10070c00 */
  push32((uint32_t)(0x10070c00u));
  /* 100698e5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100698e9 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100698ed call 0x10069774 */
  push32(0x100698f2u); f_10069774();
  /* 100698f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100698f5 ret  */
  ESPCHK(0x100698e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098f6 @ 0x100698f6 (22 bytes, 6 insns) */
void f_100698f6(void) {
  FTRACE(0x100698f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100698f6 push 0x10070c18 */
  push32((uint32_t)(0x10070c18u));
  /* 100698fb push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100698ff push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10069903 call 0x10069774 */
  push32(0x10069908u); f_10069774();
  /* 10069908 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006990b ret  */
  ESPCHK(0x100698f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000990c @ 0x1006990c (45 bytes, 21 insns) */
void f_1006990c(void) {
  FTRACE(0x1006990cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006990c push ebp */
  push32((uint32_t)(EBP));
  /* 1006990d mov ebp, esp */
  EBP = (ESP);
  /* 1006990f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10069912 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10069914 push eax */
  push32((uint32_t)(EAX));
  /* 10069915 push eax */
  push32((uint32_t)(EAX));
  /* 10069916 push eax */
  push32((uint32_t)(EAX));
  /* 10069917 push eax */
  push32((uint32_t)(EAX));
  /* 10069918 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1006991b lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1006991e push eax */
  push32((uint32_t)(EAX));
  /* 1006991f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10069922 push eax */
  push32((uint32_t)(EAX));
  /* 10069923 call 0x1006c7b6 */
  push32(0x10069928u); f_1006c7b6();
  /* 10069928 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1006992b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1006992e push eax */
  push32((uint32_t)(EAX));
  /* 1006992f call 0x100698e0 */
  push32(0x10069934u); f_100698e0();
  /* 10069934 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10069937 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069938 ret  */
  ESPCHK(0x1006990cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009939 @ 0x10069939 (45 bytes, 21 insns) */
void f_10069939(void) {
  FTRACE(0x10069939u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069939 push ebp */
  push32((uint32_t)(EBP));
  /* 1006993a mov ebp, esp */
  EBP = (ESP);
  /* 1006993c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006993f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10069941 push eax */
  push32((uint32_t)(EAX));
  /* 10069942 push eax */
  push32((uint32_t)(EAX));
  /* 10069943 push eax */
  push32((uint32_t)(EAX));
  /* 10069944 push eax */
  push32((uint32_t)(EAX));
  /* 10069945 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10069948 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1006994b push eax */
  push32((uint32_t)(EAX));
  /* 1006994c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1006994f push eax */
  push32((uint32_t)(EAX));
  /* 10069950 call 0x1006c7b6 */
  push32(0x10069955u); f_1006c7b6();
  /* 10069955 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10069958 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1006995b push eax */
  push32((uint32_t)(EAX));
  /* 1006995c call 0x100698f6 */
  push32(0x10069961u); f_100698f6();
  /* 10069961 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10069964 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069965 ret  */
  ESPCHK(0x10069939u, _esp0);
  ESP += 4; return;
}

/* FUN_10009966 @ 0x10069966 (119 bytes, 57 insns) */
void f_10069966(void) {
  FTRACE(0x10069966u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069966 push ebp */
  push32((uint32_t)(EBP));
  /* 10069967 mov ebp, esp */
  EBP = (ESP);
  /* 10069969 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1006996c push ebx */
  push32((uint32_t)(EBX));
  /* 1006996d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10069970 push esi */
  push32((uint32_t)(ESI));
  /* 10069971 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10069974 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 10069977 push edi */
  push32((uint32_t)(EDI));
  /* 10069978 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 1006997b mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 1006997e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10069980 mov eax, edi */
  EAX = (EDI);
  /* 10069982 jle 0x100699a3 */
  if ((C.zf||C.sf!=C.of)) goto L_100699a3;
  /* 10069984 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10069987 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10069989:;
  /* 10069989 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1006998b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1006998d je 0x10069995 */
  if (C.zf) goto L_10069995;
  /* 1006998f movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 10069992 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10069993 jmp 0x10069998 */
  goto L_10069998;
L_10069995:;
  /* 10069995 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10069997 pop edx */
  EDX = (pop32());
L_10069998:;
  /* 10069998 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1006999a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006999b dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1006999e jne 0x10069989 */
  if (!C.zf) goto L_10069989;
  /* 100699a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_100699a3:;
  /* 100699a3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 100699a6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100699a8 jl 0x100699bc */
  if ((C.sf!=C.of)) goto L_100699bc;
  /* 100699aa cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100699ad jl 0x100699bc */
  if ((C.sf!=C.of)) goto L_100699bc;
L_100699af:;
  /* 100699af dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100699b0 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100699b3 jne 0x100699ba */
  if (!C.zf) goto L_100699ba;
  /* 100699b5 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 100699b8 jmp 0x100699af */
  goto L_100699af;
L_100699ba:;
  /* 100699ba inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_100699bc:;
  /* 100699bc cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100699bf jne 0x100699c6 */
  if (!C.zf) goto L_100699c6;
  /* 100699c1 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 100699c4 jmp 0x100699d8 */
  goto L_100699d8;
L_100699c6:;
  /* 100699c6 push edi */
  push32((uint32_t)(EDI));
  /* 100699c7 call 0x10069040 */
  push32(0x100699ccu); f_10069040();
  /* 100699cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100699cd push eax */
  push32((uint32_t)(EAX));
  /* 100699ce push edi */
  push32((uint32_t)(EDI));
  /* 100699cf push esi */
  push32((uint32_t)(ESI));
  /* 100699d0 call 0x10069c40 */
  push32(0x100699d5u); f_10069c40();
  /* 100699d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100699d8:;
  /* 100699d8 pop edi */
  EDI = (pop32());
  /* 100699d9 pop esi */
  ESI = (pop32());
  /* 100699da pop ebx */
  EBX = (pop32());
  /* 100699db pop ebp */
  EBP = (pop32());
  /* 100699dc ret  */
  ESPCHK(0x10069966u, _esp0);
  ESP += 4; return;
}

/* FUN_100099dd @ 0x100699dd (92 bytes, 41 insns) */
void f_100699dd(void) {
  FTRACE(0x100699ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100699dd push ebp */
  push32((uint32_t)(EBP));
  /* 100699de mov ebp, esp */
  EBP = (ESP);
  /* 100699e0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100699e3 push esi */
  push32((uint32_t)(ESI));
  /* 100699e4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100699e7 push edi */
  push32((uint32_t)(EDI));
  /* 100699e8 push eax */
  push32((uint32_t)(EAX));
  /* 100699e9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100699ec push eax */
  push32((uint32_t)(EAX));
  /* 100699ed call 0x10069a39 */
  push32(0x100699f2u); f_10069a39();
  /* 100699f2 pop ecx */
  ECX = (pop32());
  /* 100699f3 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100699f6 pop ecx */
  ECX = (pop32());
  /* 100699f7 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 100699fa push eax */
  push32((uint32_t)(EAX));
  /* 100699fb push 0 */
  push32((uint32_t)(0x0u));
  /* 100699fd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100699ff sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10069a02 mov edi, esp */
  EDI = (ESP);
  /* 10069a04 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10069a05 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10069a06 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 10069a08 call 0x1006cc87 */
  push32(0x10069a0du); f_1006cc87();
  /* 10069a0d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10069a10 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 10069a13 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10069a16 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 10069a1a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10069a1c movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 10069a20 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10069a23 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10069a26 push eax */
  push32((uint32_t)(EAX));
  /* 10069a27 push edi */
  push32((uint32_t)(EDI));
  /* 10069a28 call 0x10069af0 */
  push32(0x10069a2du); f_10069af0();
  /* 10069a2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10069a30 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 10069a33 mov eax, esi */
  EAX = (ESI);
  /* 10069a35 pop edi */
  EDI = (pop32());
  /* 10069a36 pop esi */
  ESI = (pop32());
  /* 10069a37 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069a38 ret  */
  ESPCHK(0x100699ddu, _esp0);
  ESP += 4; return;
}

/* FUN_10009a39 @ 0x10069a39 (182 bytes, 70 insns) */
void f_10069a39(void) {
  FTRACE(0x10069a39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069a39 push ebp */
  push32((uint32_t)(EBP));
  /* 10069a3a mov ebp, esp */
  EBP = (ESP);
  /* 10069a3c push ecx */
  push32((uint32_t)(ECX));
  /* 10069a3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10069a40 push ebx */
  push32((uint32_t)(EBX));
  /* 10069a41 push esi */
  push32((uint32_t)(ESI));
  /* 10069a42 push edi */
  push32((uint32_t)(EDI));
  /* 10069a43 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 10069a47 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 10069a4c mov ecx, eax */
  ECX = (EAX);
  /* 10069a4e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10069a53 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10069a56 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10069a58 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10069a5b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10069a5e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 10069a60 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 10069a63 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10069a68 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10069a6d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10069a6f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10069a72 je 0x10069a87 */
  if (C.zf) goto L_10069a87;
  /* 10069a74 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069a76 je 0x10069a80 */
  if (C.zf) goto L_10069a80;
  /* 10069a78 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 10069a7e jmp 0x10069aa8 */
  goto L_10069aa8;
L_10069a80:;
  /* 10069a80 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 10069a85 jmp 0x10069aa8 */
  goto L_10069aa8;
L_10069a87:;
  /* 10069a87 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10069a89 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069a8b jne 0x10069a9f */
  if (!C.zf) goto L_10069a9f;
  /* 10069a8d cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069a8f jne 0x10069a9f */
  if (!C.zf) goto L_10069a9f;
  /* 10069a91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10069a94 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10069a97 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 10069a99 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 10069a9d jmp 0x10069aea */
  goto L_10069aea;
L_10069a9f:;
  /* 10069a9f lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 10069aa5 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_10069aa8:;
  /* 10069aa8 mov ecx, edx */
  ECX = (EDX);
  /* 10069aaa shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 10069aad shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 10069ab0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10069ab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10069ab5 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 10069ab8 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 10069abb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10069abe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10069ac0:;
  /* 10069ac0 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 10069ac2 jne 0x10069ae1 */
  if (!C.zf) goto L_10069ae1;
  /* 10069ac4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10069ac6 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10069ac8 mov ebx, edx */
  EBX = (EDX);
  /* 10069aca shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 10069acd or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 10069acf lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 10069ad2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10069ad4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10069ad7 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10069add mov ecx, ebx */
  ECX = (EBX);
  /* 10069adf jmp 0x10069ac0 */
  goto L_10069ac0;
L_10069ae1:;
  /* 10069ae1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10069ae4 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10069ae6 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_10069aea:;
  /* 10069aea pop edi */
  EDI = (pop32());
  /* 10069aeb pop esi */
  ESI = (pop32());
  /* 10069aec pop ebx */
  EBX = (pop32());
  /* 10069aed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069aee ret  */
  ESPCHK(0x10069a39u, _esp0);
  ESP += 4; return;
}

/* FUN_10009af0 @ 0x10069af0 (7 bytes, 3 insns) */
void f_10069af0(void) {
  FTRACE(0x10069af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069af0 push edi */
  push32((uint32_t)(EDI));
  /* 10069af1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10069af5 jmp 0x10069b61 */
  jmp_ind(0x10069b61u); return;
}

/* FUN_10009b00 @ 0x10069b00 (224 bytes, 84 insns) */
void f_10069b00(void) {
  FTRACE(0x10069b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069b00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10069b04 push edi */
  push32((uint32_t)(EDI));
  /* 10069b05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10069b0b je 0x10069b1c */
  if (C.zf) goto L_10069b1c;
L_10069b0d:;
  /* 10069b0d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10069b0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10069b10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10069b12 je 0x10069b4f */
  if (C.zf) goto L_10069b4f;
  /* 10069b14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10069b1a jne 0x10069b0d */
  if (!C.zf) goto L_10069b0d;
L_10069b1c:;
  /* 10069b1c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10069b1e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10069b23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10069b25 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10069b28 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10069b2a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10069b2d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10069b32 je 0x10069b1c */
  if (C.zf) goto L_10069b1c;
  /* 10069b34 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10069b37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10069b39 je 0x10069b5e */
  if (C.zf) goto L_10069b5e;
  /* 10069b3b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10069b3d je 0x10069b59 */
  if (C.zf) goto L_10069b59;
  /* 10069b3f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10069b44 je 0x10069b54 */
  if (C.zf) goto L_10069b54;
  /* 10069b46 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10069b4b je 0x10069b4f */
  if (C.zf) goto L_10069b4f;
  /* 10069b4d jmp 0x10069b1c */
  goto L_10069b1c;
L_10069b4f:;
  /* 10069b4f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10069b52 jmp 0x10069b61 */
  goto L_10069b61;
L_10069b54:;
  /* 10069b54 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10069b57 jmp 0x10069b61 */
  goto L_10069b61;
L_10069b59:;
  /* 10069b59 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10069b5c jmp 0x10069b61 */
  goto L_10069b61;
L_10069b5e:;
  /* 10069b5e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10069b61:;
  /* 10069b61 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10069b65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10069b6b je 0x10069b86 */
  if (C.zf) goto L_10069b86;
L_10069b6d:;
  /* 10069b6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10069b6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10069b70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10069b72 je 0x10069bd8 */
  if (C.zf) goto L_10069bd8;
  /* 10069b74 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10069b76 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10069b77 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10069b7d jne 0x10069b6d */
  if (!C.zf) goto L_10069b6d;
  /* 10069b7f jmp 0x10069b86 */
  goto L_10069b86;
L_10069b81:;
  /* 10069b81 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10069b83 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10069b86:;
  /* 10069b86 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10069b8b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10069b8d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10069b8f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10069b92 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10069b94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10069b96 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10069b99 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10069b9e je 0x10069b81 */
  if (C.zf) goto L_10069b81;
  /* 10069ba0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10069ba2 je 0x10069bd8 */
  if (C.zf) goto L_10069bd8;
  /* 10069ba4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10069ba6 je 0x10069bcf */
  if (C.zf) goto L_10069bcf;
  /* 10069ba8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10069bae je 0x10069bc2 */
  if (C.zf) goto L_10069bc2;
  /* 10069bb0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10069bb6 je 0x10069bba */
  if (C.zf) goto L_10069bba;
  /* 10069bb8 jmp 0x10069b81 */
  goto L_10069b81;
L_10069bba:;
  /* 10069bba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10069bbc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10069bc0 pop edi */
  EDI = (pop32());
  /* 10069bc1 ret  */
  ESPCHK(0x10069b00u, _esp0);
  ESP += 4; return;
L_10069bc2:;
  /* 10069bc2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10069bc5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10069bc9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10069bcd pop edi */
  EDI = (pop32());
  /* 10069bce ret  */
  ESPCHK(0x10069b00u, _esp0);
  ESP += 4; return;
L_10069bcf:;
  /* 10069bcf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10069bd2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10069bd6 pop edi */
  EDI = (pop32());
  /* 10069bd7 ret  */
  ESPCHK(0x10069b00u, _esp0);
  ESP += 4; return;
L_10069bd8:;
  /* 10069bd8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10069bda mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10069bde pop edi */
  EDI = (pop32());
  /* 10069bdf ret  */
  ESPCHK(0x10069b00u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10069be0 (88 bytes, 40 insns) */
void f_10069be0(void) {
  FTRACE(0x10069be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069be0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10069be4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10069be8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10069bea je 0x10069c33 */
  if (C.zf) goto L_10069c33;
  /* 10069bec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10069bee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10069bf2 push edi */
  push32((uint32_t)(EDI));
  /* 10069bf3 mov edi, ecx */
  EDI = (ECX);
  /* 10069bf5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069bf8 jb 0x10069c27 */
  if (C.cf) goto L_10069c27;
  /* 10069bfa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10069bfc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10069bff je 0x10069c09 */
  if (C.zf) goto L_10069c09;
  /* 10069c01 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10069c03:;
  /* 10069c03 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10069c05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10069c06 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10069c07 jne 0x10069c03 */
  if (!C.zf) goto L_10069c03;
L_10069c09:;
  /* 10069c09 mov ecx, eax */
  ECX = (EAX);
  /* 10069c0b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10069c0e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10069c10 mov ecx, eax */
  ECX = (EAX);
  /* 10069c12 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10069c15 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10069c17 mov ecx, edx */
  ECX = (EDX);
  /* 10069c19 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10069c1c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10069c1f je 0x10069c27 */
  if (C.zf) goto L_10069c27;
  /* 10069c21 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10069c23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10069c25 je 0x10069c2d */
  if (C.zf) goto L_10069c2d;
L_10069c27:;
  /* 10069c27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10069c29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10069c2a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10069c2b jne 0x10069c27 */
  if (!C.zf) goto L_10069c27;
L_10069c2d:;
  /* 10069c2d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10069c31 pop edi */
  EDI = (pop32());
  /* 10069c32 ret  */
  ESPCHK(0x10069be0u, _esp0);
  ESP += 4; return;
L_10069c33:;
  /* 10069c33 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10069c37 ret  */
  ESPCHK(0x10069be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c40 @ 0x10069c40 (664 bytes, 270 insns) [15 switch table(s)] */
void f_10069c40(void) {
  FTRACE(0x10069c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10069c41 mov ebp, esp */
  EBP = (ESP);
  /* 10069c43 push edi */
  push32((uint32_t)(EDI));
  /* 10069c44 push esi */
  push32((uint32_t)(ESI));
  /* 10069c45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10069c48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10069c4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10069c4e mov eax, ecx */
  EAX = (ECX);
  /* 10069c50 mov edx, ecx */
  EDX = (ECX);
  /* 10069c52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10069c54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069c56 jbe 0x10069c60 */
  if ((C.cf||C.zf)) goto L_10069c60;
  /* 10069c58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069c5a jb 0x10069dd8 */
  if (C.cf) goto L_10069dd8;
L_10069c60:;
  /* 10069c60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10069c66 jne 0x10069c7c */
  if (!C.zf) goto L_10069c7c;
  /* 10069c68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10069c6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10069c6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069c71 jb 0x10069c9c */
  if (C.cf) goto L_10069c9c;
  /* 10069c73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10069c75 jmp dword ptr [edx*4 + 0x10069d88] */
  switch (EDX) {
    case 0: goto L_10069d98;
    case 1: goto L_10069da0;
    case 2: goto L_10069dac;
    case 3: goto L_10069dc0;
    default: x86_unimpl("switch@0x10069c75 out of table"); return;
  }
L_10069c7c:;
  /* 10069c7c mov eax, edi */
  EAX = (EDI);
  /* 10069c7e mov edx, 3 */
  EDX = (0x3u);
  /* 10069c83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10069c86 jb 0x10069c94 */
  if (C.cf) goto L_10069c94;
  /* 10069c88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10069c8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10069c8d jmp dword ptr [eax*4 + 0x10069ca0] */
  switch (EAX) {
    case 1: goto L_10069cb0;
    case 2: goto L_10069cdc;
    case 3: goto L_10069d00;
    default: x86_unimpl("switch@0x10069c8d out of table"); return;
  }
L_10069c94:;
  /* 10069c94 jmp dword ptr [ecx*4 + 0x10069d98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10069d98)))); return;
  /* 10069c9b nop  */
  /* nop */
L_10069c9c:;
  /* 10069c9c jmp dword ptr [ecx*4 + 0x10069d1c] */
  switch (ECX) {
    case 0: goto L_10069d7f;
    case 1: goto L_10069d6c;
    case 2: goto L_10069d64;
    case 3: goto L_10069d5c;
    case 4: goto L_10069d54;
    case 5: goto L_10069d4c;
    case 6: goto L_10069d44;
    case 7: goto L_10069d3c;
    default: x86_unimpl("switch@0x10069c9c out of table"); return;
  }
  /* 10069ca3 nop  */
  /* nop */
L_10069cb0:;
  /* 10069cb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10069cb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10069cb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10069cb6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10069cb9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10069cbc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10069cbf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10069cc2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10069cc5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10069cc8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10069ccb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069cce jb 0x10069c9c */
  if (C.cf) goto L_10069c9c;
  /* 10069cd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10069cd2 jmp dword ptr [edx*4 + 0x10069d88] */
  switch (EDX) {
    case 0: goto L_10069d98;
    case 1: goto L_10069da0;
    case 2: goto L_10069dac;
    case 3: goto L_10069dc0;
    default: x86_unimpl("switch@0x10069cd2 out of table"); return;
  }
  /* 10069cd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10069cdc:;
  /* 10069cdc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10069cde mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10069ce0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10069ce2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10069ce5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10069ce8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10069ceb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10069cee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10069cf1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069cf4 jb 0x10069c9c */
  if (C.cf) goto L_10069c9c;
  /* 10069cf6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10069cf8 jmp dword ptr [edx*4 + 0x10069d88] */
  switch (EDX) {
    case 0: goto L_10069d98;
    case 1: goto L_10069da0;
    case 2: goto L_10069dac;
    case 3: goto L_10069dc0;
    default: x86_unimpl("switch@0x10069cf8 out of table"); return;
  }
  /* 10069cff nop  */
  /* nop */
L_10069d00:;
  /* 10069d00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10069d02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10069d04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10069d06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10069d07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10069d0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10069d0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069d0e jb 0x10069c9c */
  if (C.cf) goto L_10069c9c;
  /* 10069d10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10069d12 jmp dword ptr [edx*4 + 0x10069d88] */
  switch (EDX) {
    case 0: goto L_10069d98;
    case 1: goto L_10069da0;
    case 2: goto L_10069dac;
    case 3: goto L_10069dc0;
    default: x86_unimpl("switch@0x10069d12 out of table"); return;
  }
  /* 10069d19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10069d3c:;
  /* 10069d3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10069d40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10069d44:;
  /* 10069d44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10069d48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10069d4c:;
  /* 10069d4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10069d50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10069d54:;
  /* 10069d54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10069d58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10069d5c:;
  /* 10069d5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10069d60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10069d64:;
  /* 10069d64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10069d68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10069d6c:;
  /* 10069d6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10069d70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10069d74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10069d7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10069d7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10069d7f:;
  /* 10069d7f jmp dword ptr [edx*4 + 0x10069d88] */
  switch (EDX) {
    case 0: goto L_10069d98;
    case 1: goto L_10069da0;
    case 2: goto L_10069dac;
    case 3: goto L_10069dc0;
    default: x86_unimpl("switch@0x10069d7f out of table"); return;
  }
  /* 10069d86 mov edi, edi */
  EDI = (EDI);
L_10069d98:;
  /* 10069d98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10069d9b pop esi */
  ESI = (pop32());
  /* 10069d9c pop edi */
  EDI = (pop32());
  /* 10069d9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069d9e ret  */
  ESPCHK(0x10069c40u, _esp0);
  ESP += 4; return;
  /* 10069d9f nop  */
  /* nop */
L_10069da0:;
  /* 10069da0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10069da2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10069da4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10069da7 pop esi */
  ESI = (pop32());
  /* 10069da8 pop edi */
  EDI = (pop32());
  /* 10069da9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069daa ret  */
  ESPCHK(0x10069c40u, _esp0);
  ESP += 4; return;
  /* 10069dab nop  */
  /* nop */
L_10069dac:;
  /* 10069dac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10069dae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10069db0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10069db3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10069db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10069db9 pop esi */
  ESI = (pop32());
  /* 10069dba pop edi */
  EDI = (pop32());
  /* 10069dbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069dbc ret  */
  ESPCHK(0x10069c40u, _esp0);
  ESP += 4; return;
  /* 10069dbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10069dc0:;
  /* 10069dc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10069dc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10069dc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10069dc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10069dca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10069dcd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10069dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10069dd3 pop esi */
  ESI = (pop32());
  /* 10069dd4 pop edi */
  EDI = (pop32());
  /* 10069dd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069dd6 ret  */
  ESPCHK(0x10069c40u, _esp0);
  ESP += 4; return;
  /* 10069dd7 nop  */
  /* nop */
L_10069dd8:;
  /* 10069dd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10069ddc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10069de0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10069de6 jne 0x10069e0c */
  if (!C.zf) goto L_10069e0c;
  /* 10069de8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10069deb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10069dee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069df1 jb 0x10069e00 */
  if (C.cf) goto L_10069e00;
  /* 10069df3 std  */
  C.df=1;
  /* 10069df4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10069df6 cld  */
  C.df=0;
  /* 10069df7 jmp dword ptr [edx*4 + 0x10069f20] */
  switch (EDX) {
    case 0: goto L_10069f30;
    case 1: goto L_10069f38;
    case 2: goto L_10069f48;
    case 3: goto L_10069f5c;
    default: x86_unimpl("switch@0x10069df7 out of table"); return;
  }
  /* 10069dfe mov edi, edi */
  EDI = (EDI);
L_10069e00:;
  /* 10069e00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10069e02 jmp dword ptr [ecx*4 + 0x10069ed0] */
  switch (ECX) {
    case 0: goto L_10069f17;
    default: x86_unimpl("switch@0x10069e02 out of table"); return;
  }
  /* 10069e09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10069e0c:;
  /* 10069e0c mov eax, edi */
  EAX = (EDI);
  /* 10069e0e mov edx, 3 */
  EDX = (0x3u);
  /* 10069e13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069e16 jb 0x10069e24 */
  if (C.cf) goto L_10069e24;
  /* 10069e18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10069e1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10069e1d jmp dword ptr [eax*4 + 0x10069e28] */
  switch (EAX) {
    case 1: goto L_10069e38;
    case 2: goto L_10069e58;
    case 3: goto L_10069e80;
    default: x86_unimpl("switch@0x10069e1d out of table"); return;
  }
L_10069e24:;
  /* 10069e24 jmp dword ptr [ecx*4 + 0x10069f20] */
  switch (ECX) {
    case 0: goto L_10069f30;
    case 1: goto L_10069f38;
    case 2: goto L_10069f48;
    case 3: goto L_10069f5c;
    default: x86_unimpl("switch@0x10069e24 out of table"); return;
  }
  /* 10069e2b nop  */
  /* nop */
L_10069e38:;
  /* 10069e38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10069e3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10069e3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10069e40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10069e41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10069e44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10069e45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069e48 jb 0x10069e00 */
  if (C.cf) goto L_10069e00;
  /* 10069e4a std  */
  C.df=1;
  /* 10069e4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10069e4d cld  */
  C.df=0;
  /* 10069e4e jmp dword ptr [edx*4 + 0x10069f20] */
  switch (EDX) {
    case 0: goto L_10069f30;
    case 1: goto L_10069f38;
    case 2: goto L_10069f48;
    case 3: goto L_10069f5c;
    default: x86_unimpl("switch@0x10069e4e out of table"); return;
  }
  /* 10069e55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10069e58:;
  /* 10069e58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10069e5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10069e5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10069e60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10069e63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10069e66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10069e69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10069e6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10069e6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069e72 jb 0x10069e00 */
  if (C.cf) goto L_10069e00;
  /* 10069e74 std  */
  C.df=1;
  /* 10069e75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10069e77 cld  */
  C.df=0;
  /* 10069e78 jmp dword ptr [edx*4 + 0x10069f20] */
  switch (EDX) {
    case 0: goto L_10069f30;
    case 1: goto L_10069f38;
    case 2: goto L_10069f48;
    case 3: goto L_10069f5c;
    default: x86_unimpl("switch@0x10069e78 out of table"); return;
  }
  /* 10069e7f nop  */
  /* nop */
L_10069e80:;
  /* 10069e80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10069e83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10069e85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10069e88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10069e8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10069e8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10069e91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10069e94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10069e97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10069e9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10069e9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069ea0 jb 0x10069e00 */
  if (C.cf) goto L_10069e00;
  /* 10069ea6 std  */
  C.df=1;
  /* 10069ea7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10069ea9 cld  */
  C.df=0;
  /* 10069eaa jmp dword ptr [edx*4 + 0x10069f20] */
  switch (EDX) {
    case 0: goto L_10069f30;
    case 1: goto L_10069f38;
    case 2: goto L_10069f48;
    case 3: goto L_10069f5c;
    default: x86_unimpl("switch@0x10069eaa out of table"); return;
  }
  /* 10069eb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10069eb4 aam 0x9e */
  x86_unimpl("aam @ 0x10069eb4");
  /* 10069eb6 push es */
  push32((uint32_t)(C.seg_es));
  /* 10069eb7 adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10069eb9 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10069eba push es */
  push32((uint32_t)(C.seg_es));
  /* 10069ebb adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10069ebd sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10069ebe push es */
  push32((uint32_t)(C.seg_es));
  /* 10069ebf adc ah, ch */
  { uint32_t _a=(AH),_b=(C.c.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10069ec1 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10069ec2 push es */
  push32((uint32_t)(C.seg_es));
  /* 10069ec3 adc ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10069ec5 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10069ec6 push es */
  push32((uint32_t)(C.seg_es));
  /* 10069ec7 adc ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10069ec9 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10069eca push es */
  push32((uint32_t)(C.seg_es));
  /* 10069ecb adc byte ptr [edi + ebx*4], al */
  { uint32_t _a=(r8((uint32_t)(EDI + EBX*4))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 10069ece push es */
  push32((uint32_t)(C.seg_es));
  /* 10069ed4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10069ed8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10069edc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10069ee0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10069ee4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10069ee8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10069eec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10069ef0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10069ef4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10069ef8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10069efc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10069f00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10069f04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10069f08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10069f0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10069f13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10069f15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10069f17:;
  /* 10069f17 jmp dword ptr [edx*4 + 0x10069f20] */
  switch (EDX) {
    case 0: goto L_10069f30;
    case 1: goto L_10069f38;
    case 2: goto L_10069f48;
    case 3: goto L_10069f5c;
    default: x86_unimpl("switch@0x10069f17 out of table"); return;
  }
  /* 10069f1e mov edi, edi */
  EDI = (EDI);
L_10069f30:;
  /* 10069f30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10069f33 pop esi */
  ESI = (pop32());
  /* 10069f34 pop edi */
  EDI = (pop32());
  /* 10069f35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069f36 ret  */
  ESPCHK(0x10069c40u, _esp0);
  ESP += 4; return;
  /* 10069f37 nop  */
  /* nop */
L_10069f38:;
  /* 10069f38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10069f3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10069f3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10069f41 pop esi */
  ESI = (pop32());
  /* 10069f42 pop edi */
  EDI = (pop32());
  /* 10069f43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069f44 ret  */
  ESPCHK(0x10069c40u, _esp0);
  ESP += 4; return;
  /* 10069f45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10069f48:;
  /* 10069f48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10069f4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10069f4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10069f51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10069f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10069f57 pop esi */
  ESI = (pop32());
  /* 10069f58 pop edi */
  EDI = (pop32());
  /* 10069f59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069f5a ret  */
  ESPCHK(0x10069c40u, _esp0);
  ESP += 4; return;
  /* 10069f5b nop  */
  /* nop */
L_10069f5c:;
  /* 10069f5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10069f5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10069f62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10069f65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10069f68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10069f6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10069f6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10069f71 pop esi */
  ESI = (pop32());
  /* 10069f72 pop edi */
  EDI = (pop32());
  /* 10069f73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10069f74 ret  */
  ESPCHK(0x10069c40u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10069f75 (9 bytes, 4 insns) */
void f_10069f75(void) {
  FTRACE(0x10069f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069f75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10069f77 call 0x100670b1 */
  push32(0x10069f7cu); f_100670b1();
  /* 10069f7c pop ecx */
  ECX = (pop32());
  /* 10069f7d ret  */
  ESPCHK(0x10069f75u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f7e @ 0x10069f7e (41 bytes, 12 insns) */
void f_10069f7e(void) {
  FTRACE(0x10069f7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069f7e push esi */
  push32((uint32_t)(ESI));
  /* 10069f7f mov esi, dword ptr [0x1006e094] */
  ESI = (r32((uint32_t)(0x1006e094)));
  /* 10069f85 push dword ptr [0x10070c74] */
  push32((uint32_t)(r32((uint32_t)(0x10070c74))));
  /* 10069f8b call esi */
  call_ind((uint32_t)(ESI), 0x10069f8du);
  /* 10069f8d push dword ptr [0x10070c64] */
  push32((uint32_t)(r32((uint32_t)(0x10070c64))));
  /* 10069f93 call esi */
  call_ind((uint32_t)(ESI), 0x10069f95u);
  /* 10069f95 push dword ptr [0x10070c54] */
  push32((uint32_t)(r32((uint32_t)(0x10070c54))));
  /* 10069f9b call esi */
  call_ind((uint32_t)(ESI), 0x10069f9du);
  /* 10069f9d push dword ptr [0x10070c34] */
  push32((uint32_t)(r32((uint32_t)(0x10070c34))));
  /* 10069fa3 call esi */
  call_ind((uint32_t)(ESI), 0x10069fa5u);
  /* 10069fa5 pop esi */
  ESI = (pop32());
  /* 10069fa6 ret  */
  ESPCHK(0x10069f7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009fa7 @ 0x10069fa7 (108 bytes, 34 insns) */
void f_10069fa7(void) {
  FTRACE(0x10069fa7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10069fa7 push esi */
  push32((uint32_t)(ESI));
  /* 10069fa8 push edi */
  push32((uint32_t)(EDI));
  /* 10069fa9 mov edi, dword ptr [0x1006e050] */
  EDI = (r32((uint32_t)(0x1006e050)));
  /* 10069faf mov esi, 0x10070c30 */
  ESI = (0x10070c30u);
L_10069fb4:;
  /* 10069fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10069fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10069fb8 je 0x10069fe5 */
  if (C.zf) goto L_10069fe5;
  /* 10069fba cmp esi, 0x10070c74 */
  { uint32_t _a=(ESI),_b=(0x10070c74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069fc0 je 0x10069fe5 */
  if (C.zf) goto L_10069fe5;
  /* 10069fc2 cmp esi, 0x10070c64 */
  { uint32_t _a=(ESI),_b=(0x10070c64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069fc8 je 0x10069fe5 */
  if (C.zf) goto L_10069fe5;
  /* 10069fca cmp esi, 0x10070c54 */
  { uint32_t _a=(ESI),_b=(0x10070c54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069fd0 je 0x10069fe5 */
  if (C.zf) goto L_10069fe5;
  /* 10069fd2 cmp esi, 0x10070c34 */
  { uint32_t _a=(ESI),_b=(0x10070c34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069fd8 je 0x10069fe5 */
  if (C.zf) goto L_10069fe5;
  /* 10069fda push eax */
  push32((uint32_t)(EAX));
  /* 10069fdb call edi */
  call_ind((uint32_t)(EDI), 0x10069fddu);
  /* 10069fdd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10069fdf call 0x1006a1c6 */
  push32(0x10069fe4u); f_1006a1c6();
  /* 10069fe4 pop ecx */
  ECX = (pop32());
L_10069fe5:;
  /* 10069fe5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10069fe8 cmp esi, 0x10070cf0 */
  { uint32_t _a=(ESI),_b=(0x10070cf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10069fee jl 0x10069fb4 */
  if ((C.sf!=C.of)) goto L_10069fb4;
  /* 10069ff0 push dword ptr [0x10070c54] */
  push32((uint32_t)(r32((uint32_t)(0x10070c54))));
  /* 10069ff6 call edi */
  call_ind((uint32_t)(EDI), 0x10069ff8u);
  /* 10069ff8 push dword ptr [0x10070c64] */
  push32((uint32_t)(r32((uint32_t)(0x10070c64))));
  /* 10069ffe call edi */
  call_ind((uint32_t)(EDI), 0x1006a000u);
  /* 1006a000 push dword ptr [0x10070c74] */
  push32((uint32_t)(r32((uint32_t)(0x10070c74))));
  /* 1006a006 call edi */
  call_ind((uint32_t)(EDI), 0x1006a008u);
  /* 1006a008 push dword ptr [0x10070c34] */
  push32((uint32_t)(r32((uint32_t)(0x10070c34))));
  /* 1006a00e call edi */
  call_ind((uint32_t)(EDI), 0x1006a010u);
  /* 1006a010 pop edi */
  EDI = (pop32());
  /* 1006a011 pop esi */
  ESI = (pop32());
  /* 1006a012 ret  */
  ESPCHK(0x10069fa7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a013 @ 0x1006a013 (97 bytes, 37 insns) */
void f_1006a013(void) {
  FTRACE(0x1006a013u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a013 push ebp */
  push32((uint32_t)(EBP));
  /* 1006a014 mov ebp, esp */
  EBP = (ESP);
  /* 1006a016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006a019 push esi */
  push32((uint32_t)(ESI));
  /* 1006a01a cmp dword ptr [eax*4 + 0x10070c30], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10070c30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a022 lea esi, [eax*4 + 0x10070c30] */
  ESI = ((uint32_t)(EAX*4 + 0x10070c30));
  /* 1006a029 jne 0x1006a069 */
  if (!C.zf) goto L_1006a069;
  /* 1006a02b push edi */
  push32((uint32_t)(EDI));
  /* 1006a02c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1006a02e call 0x1006a2af */
  push32(0x1006a033u); f_1006a2af();
  /* 1006a033 mov edi, eax */
  EDI = (EAX);
  /* 1006a035 pop ecx */
  ECX = (pop32());
  /* 1006a036 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1006a038 jne 0x1006a042 */
  if (!C.zf) goto L_1006a042;
  /* 1006a03a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1006a03c call 0x100670b1 */
  push32(0x1006a041u); f_100670b1();
  /* 1006a041 pop ecx */
  ECX = (pop32());
L_1006a042:;
  /* 1006a042 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1006a044 call 0x1006a013 */
  push32(0x1006a049u); f_1006a013();
  /* 1006a049 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a04c pop ecx */
  ECX = (pop32());
  /* 1006a04d push edi */
  push32((uint32_t)(EDI));
  /* 1006a04e jne 0x1006a05a */
  if (!C.zf) goto L_1006a05a;
  /* 1006a050 call dword ptr [0x1006e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e094))), 0x1006a056u);
  /* 1006a056 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1006a058 jmp 0x1006a060 */
  goto L_1006a060;
L_1006a05a:;
  /* 1006a05a call 0x1006a1c6 */
  push32(0x1006a05fu); f_1006a1c6();
  /* 1006a05f pop ecx */
  ECX = (pop32());
L_1006a060:;
  /* 1006a060 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1006a062 call 0x1006a074 */
  push32(0x1006a067u); f_1006a074();
  /* 1006a067 pop ecx */
  ECX = (pop32());
  /* 1006a068 pop edi */
  EDI = (pop32());
L_1006a069:;
  /* 1006a069 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1006a06b call dword ptr [0x1006e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e00c))), 0x1006a071u);
  /* 1006a071 pop esi */
  ESI = (pop32());
  /* 1006a072 pop ebp */
  EBP = (pop32());
  /* 1006a073 ret  */
  ESPCHK(0x1006a013u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a074 @ 0x1006a074 (21 bytes, 7 insns) */
void f_1006a074(void) {
  FTRACE(0x1006a074u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a074 push ebp */
  push32((uint32_t)(EBP));
  /* 1006a075 mov ebp, esp */
  EBP = (ESP);
  /* 1006a077 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006a07a push dword ptr [eax*4 + 0x10070c30] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10070c30))));
  /* 1006a081 call dword ptr [0x1006e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e008))), 0x1006a087u);
  /* 1006a087 pop ebp */
  EBP = (pop32());
  /* 1006a088 ret  */
  ESPCHK(0x1006a074u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a089 @ 0x1006a089 (289 bytes, 98 insns) */
void f_1006a089(void) {
  FTRACE(0x1006a089u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a089 push ebp */
  push32((uint32_t)(EBP));
  /* 1006a08a mov ebp, esp */
  EBP = (ESP);
  /* 1006a08c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1006a08e push 0x1006e4d0 */
  push32((uint32_t)(0x1006e4d0u));
  /* 1006a093 push 0x1006d030 */
  push32((uint32_t)(0x1006d030u));
  /* 1006a098 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1006a09e push eax */
  push32((uint32_t)(EAX));
  /* 1006a09f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1006a0a6 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006a0a9 push ebx */
  push32((uint32_t)(EBX));
  /* 1006a0aa push esi */
  push32((uint32_t)(ESI));
  /* 1006a0ab push edi */
  push32((uint32_t)(EDI));
  /* 1006a0ac mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1006a0af imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1006a0b3 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1006a0b6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 1006a0b9 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a0bc ja 0x1006a0d2 */
  if ((!C.cf&&!C.zf)) goto L_1006a0d2;
  /* 1006a0be xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006a0c0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a0c2 jne 0x1006a0c7 */
  if (!C.zf) goto L_1006a0c7;
  /* 1006a0c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006a0c6 pop esi */
  ESI = (pop32());
L_1006a0c7:;
  /* 1006a0c7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006a0ca and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1006a0cd mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1006a0d0 jmp 0x1006a0d4 */
  goto L_1006a0d4;
L_1006a0d2:;
  /* 1006a0d2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1006a0d4:;
  /* 1006a0d4 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1006a0d7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a0da ja 0x1006a188 */
  if ((!C.cf&&!C.zf)) goto L_1006a188;
  /* 1006a0e0 mov eax, dword ptr [0x10077c28] */
  EAX = (r32((uint32_t)(0x10077c28)));
  /* 1006a0e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a0e8 jne 0x1006a12b */
  if (!C.zf) goto L_1006a12b;
  /* 1006a0ea mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 1006a0ed cmp edi, dword ptr [0x100769e0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x100769e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a0f3 ja 0x1006a171 */
  if ((!C.cf&&!C.zf)) goto L_1006a171;
  /* 1006a0f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a0f7 call 0x1006a013 */
  push32(0x1006a0fcu); f_1006a013();
  /* 1006a0fc pop ecx */
  ECX = (pop32());
  /* 1006a0fd mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1006a100 push edi */
  push32((uint32_t)(EDI));
  /* 1006a101 call 0x1006b29b */
  push32(0x1006a106u); f_1006b29b();
  /* 1006a106 pop ecx */
  ECX = (pop32());
  /* 1006a107 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1006a10a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006a10e call 0x1006a122 */
  push32(0x1006a113u); f_1006a122();
  /* 1006a113 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a116 je 0x1006a176 */
  if (C.zf) goto L_1006a176;
  /* 1006a118 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1006a11b jmp 0x1006a165 */
  goto L_1006a165;
  /* 1006a11d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006a11f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1006a122 push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a124 call 0x1006a074 */
  push32(0x1006a129u); f_1006a074();
  /* 1006a129 pop ecx */
  ECX = (pop32());
  /* 1006a12a ret  */
  ESPCHK(0x1006a089u, _esp0);
  ESP += 4; return;
L_1006a12b:;
  /* 1006a12b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a12e jne 0x1006a171 */
  if (!C.zf) goto L_1006a171;
  /* 1006a130 cmp esi, dword ptr [0x10072e94] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10072e94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a136 ja 0x1006a171 */
  if ((!C.cf&&!C.zf)) goto L_1006a171;
  /* 1006a138 push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a13a call 0x1006a013 */
  push32(0x1006a13fu); f_1006a013();
  /* 1006a13f pop ecx */
  ECX = (pop32());
  /* 1006a140 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1006a147 mov eax, esi */
  EAX = (ESI);
  /* 1006a149 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1006a14c push eax */
  push32((uint32_t)(EAX));
  /* 1006a14d call 0x1006ba48 */
  push32(0x1006a152u); f_1006ba48();
  /* 1006a152 pop ecx */
  ECX = (pop32());
  /* 1006a153 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1006a156 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006a15a call 0x1006a1ab */
  push32(0x1006a15fu); f_1006a1ab();
  /* 1006a15f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a162 je 0x1006a176 */
  if (C.zf) goto L_1006a176;
  /* 1006a164 push esi */
  push32((uint32_t)(ESI));
L_1006a165:;
  /* 1006a165 push ebx */
  push32((uint32_t)(EBX));
  /* 1006a166 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1006a169 call 0x10069be0 */
  push32(0x1006a16eu); f_10069be0();
  /* 1006a16e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006a171:;
  /* 1006a171 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a174 jne 0x1006a1b4 */
  if (!C.zf) { jmp_ind(0x1006a1b4u); return; }
L_1006a176:;
  /* 1006a176 push esi */
  push32((uint32_t)(ESI));
  /* 1006a177 push 8 */
  push32((uint32_t)(0x8u));
  /* 1006a179 push dword ptr [0x10077c24] */
  push32((uint32_t)(r32((uint32_t)(0x10077c24))));
  /* 1006a17f call dword ptr [0x1006e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e098))), 0x1006a185u);
  /* 1006a185 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1006a188:;
  /* 1006a188 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a18b jne 0x1006a1b4 */
  if (!C.zf) { jmp_ind(0x1006a1b4u); return; }
  /* 1006a18d cmp dword ptr [0x10076880], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10076880))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a193 je 0x1006a1b4 */
  if (C.zf) { jmp_ind(0x1006a1b4u); return; }
  /* 1006a195 push esi */
  push32((uint32_t)(ESI));
  /* 1006a196 call 0x1006cf1a */
  push32(0x1006a19bu); f_1006cf1a();
  /* 1006a19b pop ecx */
  ECX = (pop32());
  /* 1006a19c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006a19e jne 0x1006a0d4 */
  if (!C.zf) goto L_1006a0d4;
  /* 1006a1a4 jmp 0x1006a1b7 */
  jmp_ind(0x1006a1b7u); return;
  /* 1006a1a6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a122 @ 0x1006a122 (9 bytes, 4 insns) */
void f_1006a122(void) {
  FTRACE(0x1006a122u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a122 push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a124 call 0x1006a074 */
  push32(0x1006a129u); f_1006a074();
  /* 1006a129 pop ecx */
  ECX = (pop32());
  /* 1006a12a ret  */
  ESPCHK(0x1006a122u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1ab @ 0x1006a1ab (9 bytes, 4 insns) */
void f_1006a1ab(void) {
  FTRACE(0x1006a1abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a1ab push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a1ad call 0x1006a074 */
  push32(0x1006a1b2u); f_1006a074();
  /* 1006a1b2 pop ecx */
  ECX = (pop32());
  /* 1006a1b3 ret  */
  ESPCHK(0x1006a1abu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1c6 @ 0x1006a1c6 (215 bytes, 75 insns) */
void f_1006a1c6(void) {
  FTRACE(0x1006a1c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a1c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1006a1c7 mov ebp, esp */
  EBP = (ESP);
  /* 1006a1c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1006a1cb push 0x1006e4e8 */
  push32((uint32_t)(0x1006e4e8u));
  /* 1006a1d0 push 0x1006d030 */
  push32((uint32_t)(0x1006d030u));
  /* 1006a1d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1006a1db push eax */
  push32((uint32_t)(EAX));
  /* 1006a1dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1006a1e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006a1e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1006a1e7 push esi */
  push32((uint32_t)(ESI));
  /* 1006a1e8 push edi */
  push32((uint32_t)(EDI));
  /* 1006a1e9 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1006a1ec test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1006a1ee je 0x1006a2a0 */
  if (C.zf) { jmp_ind(0x1006a2a0u); return; }
  /* 1006a1f4 mov eax, dword ptr [0x10077c28] */
  EAX = (r32((uint32_t)(0x10077c28)));
  /* 1006a1f9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a1fc jne 0x1006a239 */
  if (!C.zf) goto L_1006a239;
  /* 1006a1fe push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a200 call 0x1006a013 */
  push32(0x1006a205u); f_1006a013();
  /* 1006a205 pop ecx */
  ECX = (pop32());
  /* 1006a206 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006a20a push esi */
  push32((uint32_t)(ESI));
  /* 1006a20b call 0x1006af47 */
  push32(0x1006a210u); f_1006af47();
  /* 1006a210 pop ecx */
  ECX = (pop32());
  /* 1006a211 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1006a214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006a216 je 0x1006a221 */
  if (C.zf) goto L_1006a221;
  /* 1006a218 push esi */
  push32((uint32_t)(ESI));
  /* 1006a219 push eax */
  push32((uint32_t)(EAX));
  /* 1006a21a call 0x1006af72 */
  push32(0x1006a21fu); f_1006af72();
  /* 1006a21f pop ecx */
  ECX = (pop32());
  /* 1006a220 pop ecx */
  ECX = (pop32());
L_1006a221:;
  /* 1006a221 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006a225 call 0x1006a230 */
  push32(0x1006a22au); f_1006a230();
  /* 1006a22a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a22e jmp 0x1006a281 */
  goto L_1006a281;
  /* 1006a230 push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a232 call 0x1006a074 */
  push32(0x1006a237u); f_1006a074();
  /* 1006a237 pop ecx */
  ECX = (pop32());
  /* 1006a238 ret  */
  ESPCHK(0x1006a1c6u, _esp0);
  ESP += 4; return;
L_1006a239:;
  /* 1006a239 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a23c jne 0x1006a291 */
  if (!C.zf) goto L_1006a291;
  /* 1006a23e push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a240 call 0x1006a013 */
  push32(0x1006a245u); f_1006a013();
  /* 1006a245 pop ecx */
  ECX = (pop32());
  /* 1006a246 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1006a24d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1006a250 push eax */
  push32((uint32_t)(EAX));
  /* 1006a251 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1006a254 push eax */
  push32((uint32_t)(EAX));
  /* 1006a255 push esi */
  push32((uint32_t)(ESI));
  /* 1006a256 call 0x1006b9ac */
  push32(0x1006a25bu); f_1006b9ac();
  /* 1006a25b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006a25e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1006a261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006a263 je 0x1006a274 */
  if (C.zf) goto L_1006a274;
  /* 1006a265 push eax */
  push32((uint32_t)(EAX));
  /* 1006a266 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1006a269 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 1006a26c call 0x1006ba03 */
  push32(0x1006a271u); f_1006ba03();
  /* 1006a271 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006a274:;
  /* 1006a274 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006a278 call 0x1006a288 */
  push32(0x1006a27du); f_1006a288();
  /* 1006a27d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1006a281:;
  /* 1006a281 jne 0x1006a2a0 */
  if (!C.zf) { jmp_ind(0x1006a2a0u); return; }
  /* 1006a283 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1006a286 jmp 0x1006a292 */
  goto L_1006a292;
  /* 1006a288 push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a28a call 0x1006a074 */
  push32(0x1006a28fu); f_1006a074();
  /* 1006a28f pop ecx */
  ECX = (pop32());
  /* 1006a290 ret  */
  ESPCHK(0x1006a1c6u, _esp0);
  ESP += 4; return;
L_1006a291:;
  /* 1006a291 push esi */
  push32((uint32_t)(ESI));
L_1006a292:;
  /* 1006a292 push 0 */
  push32((uint32_t)(0x0u));
  /* 1006a294 push dword ptr [0x10077c24] */
  push32((uint32_t)(r32((uint32_t)(0x10077c24))));
}

/* FUN_1000a230 @ 0x1006a230 (9 bytes, 4 insns) */
void f_1006a230(void) {
  FTRACE(0x1006a230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a230 push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a232 call 0x1006a074 */
  push32(0x1006a237u); f_1006a074();
  /* 1006a237 pop ecx */
  ECX = (pop32());
  /* 1006a238 ret  */
  ESPCHK(0x1006a230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a288 @ 0x1006a288 (9 bytes, 4 insns) */
void f_1006a288(void) {
  FTRACE(0x1006a288u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a288 push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a28a call 0x1006a074 */
  push32(0x1006a28fu); f_1006a074();
  /* 1006a28f pop ecx */
  ECX = (pop32());
  /* 1006a290 ret  */
  ESPCHK(0x1006a288u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1006a2af (18 bytes, 6 insns) */
void f_1006a2af(void) {
  FTRACE(0x1006a2afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a2af push dword ptr [0x10076880] */
  push32((uint32_t)(r32((uint32_t)(0x10076880))));
  /* 1006a2b5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1006a2b9 call 0x1006a2c1 */
  push32(0x1006a2beu); f_1006a2c1();
  /* 1006a2be pop ecx */
  ECX = (pop32());
  /* 1006a2bf pop ecx */
  ECX = (pop32());
  /* 1006a2c0 ret  */
  ESPCHK(0x1006a2afu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x1006a2c1 (44 bytes, 16 insns) */
void f_1006a2c1(void) {
  FTRACE(0x1006a2c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a2c1 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a2c6 ja 0x1006a2ea */
  if ((!C.cf&&!C.zf)) goto L_1006a2ea;
L_1006a2c8:;
  /* 1006a2c8 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1006a2cc call 0x1006a2ed */
  push32(0x1006a2d1u); f_1006a2ed();
  /* 1006a2d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006a2d3 pop ecx */
  ECX = (pop32());
  /* 1006a2d4 jne 0x1006a2ec */
  if (!C.zf) goto L_1006a2ec;
  /* 1006a2d6 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a2da je 0x1006a2ec */
  if (C.zf) goto L_1006a2ec;
  /* 1006a2dc push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1006a2e0 call 0x1006cf1a */
  push32(0x1006a2e5u); f_1006cf1a();
  /* 1006a2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006a2e7 pop ecx */
  ECX = (pop32());
  /* 1006a2e8 jne 0x1006a2c8 */
  if (!C.zf) goto L_1006a2c8;
L_1006a2ea:;
  /* 1006a2ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1006a2ec:;
  /* 1006a2ec ret  */
  ESPCHK(0x1006a2c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2ed @ 0x1006a2ed (231 bytes, 81 insns) */
void f_1006a2ed(void) {
  FTRACE(0x1006a2edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a2ed push ebp */
  push32((uint32_t)(EBP));
  /* 1006a2ee mov ebp, esp */
  EBP = (ESP);
  /* 1006a2f0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1006a2f2 push 0x1006e500 */
  push32((uint32_t)(0x1006e500u));
  /* 1006a2f7 push 0x1006d030 */
  push32((uint32_t)(0x1006d030u));
  /* 1006a2fc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1006a302 push eax */
  push32((uint32_t)(EAX));
  /* 1006a303 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1006a30a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006a30d push ebx */
  push32((uint32_t)(EBX));
  /* 1006a30e push esi */
  push32((uint32_t)(ESI));
  /* 1006a30f push edi */
  push32((uint32_t)(EDI));
  /* 1006a310 mov eax, dword ptr [0x10077c28] */
  EAX = (r32((uint32_t)(0x10077c28)));
  /* 1006a315 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a318 jne 0x1006a35d */
  if (!C.zf) goto L_1006a35d;
  /* 1006a31a mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1006a31d cmp esi, dword ptr [0x100769e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100769e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a323 ja 0x1006a3bc */
  if ((!C.cf&&!C.zf)) goto L_1006a3bc;
  /* 1006a329 push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a32b call 0x1006a013 */
  push32(0x1006a330u); f_1006a013();
  /* 1006a330 pop ecx */
  ECX = (pop32());
  /* 1006a331 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006a335 push esi */
  push32((uint32_t)(ESI));
  /* 1006a336 call 0x1006b29b */
  push32(0x1006a33bu); f_1006b29b();
  /* 1006a33b pop ecx */
  ECX = (pop32());
  /* 1006a33c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1006a33f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006a343 call 0x1006a354 */
  push32(0x1006a348u); f_1006a354();
  /* 1006a348 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1006a34b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006a34d je 0x1006a3bc */
  if (C.zf) goto L_1006a3bc;
  /* 1006a34f jmp 0x1006a3da */
  jmp_ind(0x1006a3dau); return;
  /* 1006a354 push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a356 call 0x1006a074 */
  push32(0x1006a35bu); f_1006a074();
  /* 1006a35b pop ecx */
  ECX = (pop32());
  /* 1006a35c ret  */
  ESPCHK(0x1006a2edu, _esp0);
  ESP += 4; return;
L_1006a35d:;
  /* 1006a35d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a360 jne 0x1006a3bc */
  if (!C.zf) goto L_1006a3bc;
  /* 1006a362 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006a365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006a367 je 0x1006a371 */
  if (C.zf) goto L_1006a371;
  /* 1006a369 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 1006a36c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1006a36f jmp 0x1006a374 */
  goto L_1006a374;
L_1006a371:;
  /* 1006a371 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1006a373 pop esi */
  ESI = (pop32());
L_1006a374:;
  /* 1006a374 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 1006a377 cmp esi, dword ptr [0x10072e94] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10072e94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a37d ja 0x1006a3ad */
  if ((!C.cf&&!C.zf)) goto L_1006a3ad;
  /* 1006a37f push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a381 call 0x1006a013 */
  push32(0x1006a386u); f_1006a013();
  /* 1006a386 pop ecx */
  ECX = (pop32());
  /* 1006a387 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1006a38e mov eax, esi */
  EAX = (ESI);
  /* 1006a390 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1006a393 push eax */
  push32((uint32_t)(EAX));
  /* 1006a394 call 0x1006ba48 */
  push32(0x1006a399u); f_1006ba48();
  /* 1006a399 pop ecx */
  ECX = (pop32());
  /* 1006a39a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1006a39d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006a3a1 call 0x1006a3b3 */
  push32(0x1006a3a6u); f_1006a3b3();
  /* 1006a3a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1006a3a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006a3ab jne 0x1006a3da */
  if (!C.zf) { jmp_ind(0x1006a3dau); return; }
L_1006a3ad:;
  /* 1006a3ad push esi */
  push32((uint32_t)(ESI));
  /* 1006a3ae jmp 0x1006a3cc */
  goto L_1006a3cc;
  /* 1006a3b0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1006a3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a3b5 call 0x1006a074 */
  push32(0x1006a3bau); f_1006a074();
  /* 1006a3ba pop ecx */
  ECX = (pop32());
  /* 1006a3bb ret  */
  ESPCHK(0x1006a2edu, _esp0);
  ESP += 4; return;
L_1006a3bc:;
  /* 1006a3bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006a3bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006a3c1 jne 0x1006a3c6 */
  if (!C.zf) goto L_1006a3c6;
  /* 1006a3c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006a3c5 pop eax */
  EAX = (pop32());
L_1006a3c6:;
  /* 1006a3c6 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006a3c9 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1006a3cb push eax */
  push32((uint32_t)(EAX));
L_1006a3cc:;
  /* 1006a3cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1006a3ce push dword ptr [0x10077c24] */
  push32((uint32_t)(r32((uint32_t)(0x10077c24))));
}

/* FUN_1000a354 @ 0x1006a354 (9 bytes, 4 insns) */
void f_1006a354(void) {
  FTRACE(0x1006a354u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a354 push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a356 call 0x1006a074 */
  push32(0x1006a35bu); f_1006a074();
  /* 1006a35b pop ecx */
  ECX = (pop32());
  /* 1006a35c ret  */
  ESPCHK(0x1006a354u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3b3 @ 0x1006a3b3 (9 bytes, 4 insns) */
void f_1006a3b3(void) {
  FTRACE(0x1006a3b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1006a3b5 call 0x1006a074 */
  push32(0x1006a3bau); f_1006a074();
  /* 1006a3ba pop ecx */
  ECX = (pop32());
  /* 1006a3bb ret  */
  ESPCHK(0x1006a3b3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3e9 @ 0x1006a3e9 (429 bytes, 143 insns) */
void f_1006a3e9(void) {
  FTRACE(0x1006a3e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a3e9 push ebp */
  push32((uint32_t)(EBP));
  /* 1006a3ea mov ebp, esp */
  EBP = (ESP);
  /* 1006a3ec sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006a3ef push ebx */
  push32((uint32_t)(EBX));
  /* 1006a3f0 push esi */
  push32((uint32_t)(ESI));
  /* 1006a3f1 push edi */
  push32((uint32_t)(EDI));
  /* 1006a3f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1006a3f4 call 0x1006a013 */
  push32(0x1006a3f9u); f_1006a013();
  /* 1006a3f9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1006a3fc call 0x1006a596 */
  push32(0x1006a401u); f_1006a596();
  /* 1006a401 mov ebx, eax */
  EBX = (EAX);
  /* 1006a403 pop ecx */
  ECX = (pop32());
  /* 1006a404 cmp ebx, dword ptr [0x100769e4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100769e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a40a pop ecx */
  ECX = (pop32());
  /* 1006a40b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1006a40e jne 0x1006a417 */
  if (!C.zf) goto L_1006a417;
L_1006a410:;
  /* 1006a410 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1006a412 jmp 0x1006a587 */
  goto L_1006a587;
L_1006a417:;
  /* 1006a417 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1006a419 je 0x1006a575 */
  if (C.zf) goto L_1006a575;
  /* 1006a41f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1006a421 mov eax, 0x10070d80 */
  EAX = (0x10070d80u);
L_1006a426:;
  /* 1006a426 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a428 je 0x1006a49e */
  if (C.zf) goto L_1006a49e;
  /* 1006a42a add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006a42d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1006a42e cmp eax, 0x10070e70 */
  { uint32_t _a=(EAX),_b=(0x10070e70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a433 jl 0x1006a426 */
  if ((C.sf!=C.of)) goto L_1006a426;
  /* 1006a435 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1006a438 push eax */
  push32((uint32_t)(EAX));
  /* 1006a439 push ebx */
  push32((uint32_t)(EBX));
  /* 1006a43a call dword ptr [0x1006e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e09c))), 0x1006a440u);
  /* 1006a440 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006a442 pop esi */
  ESI = (pop32());
  /* 1006a443 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a445 jne 0x1006a56c */
  if (!C.zf) goto L_1006a56c;
  /* 1006a44b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1006a44d and dword ptr [0x10076c04], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10076c04)))&(0x0u); w32((uint32_t)(0x10076c04), (_r)); fl_logic(_r,32); }
  /* 1006a454 pop ecx */
  ECX = (pop32());
  /* 1006a455 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006a457 mov edi, 0x10076b00 */
  EDI = (0x10076b00u);
  /* 1006a45c cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a45f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1006a461 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1006a462 mov dword ptr [0x100769e4], ebx */
  w32((uint32_t)(0x100769e4), (EBX));
  /* 1006a468 jbe 0x1006a559 */
  if ((C.cf||C.zf)) goto L_1006a559;
  /* 1006a46e cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006a472 je 0x1006a534 */
  if (C.zf) goto L_1006a534;
  /* 1006a478 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1006a47b:;
  /* 1006a47b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1006a47d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1006a47f je 0x1006a534 */
  if (C.zf) goto L_1006a534;
  /* 1006a485 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1006a489 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1006a48c:;
  /* 1006a48c cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a48e ja 0x1006a528 */
  if ((!C.cf&&!C.zf)) goto L_1006a528;
  /* 1006a494 or byte ptr [eax + 0x10076b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10076b01)))|(0x4u); w8((uint32_t)(EAX + 0x10076b01), (_r)); fl_logic(_r,8); }
  /* 1006a49b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006a49c jmp 0x1006a48c */
  goto L_1006a48c;
L_1006a49e:;
  /* 1006a49e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006a4a2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1006a4a4 pop ecx */
  ECX = (pop32());
  /* 1006a4a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006a4a7 mov edi, 0x10076b00 */
  EDI = (0x10076b00u);
  /* 1006a4ac lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 1006a4af rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1006a4b1 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1006a4b4 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1006a4b5 lea ebx, [esi + 0x10070d90] */
  EBX = ((uint32_t)(ESI + 0x10070d90));
L_1006a4bb:;
  /* 1006a4bb cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006a4be mov ecx, ebx */
  ECX = (EBX);
  /* 1006a4c0 je 0x1006a4ee */
  if (C.zf) goto L_1006a4ee;
L_1006a4c2:;
  /* 1006a4c2 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1006a4c5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1006a4c7 je 0x1006a4ee */
  if (C.zf) goto L_1006a4ee;
  /* 1006a4c9 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1006a4cc movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 1006a4cf cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a4d1 ja 0x1006a4e7 */
  if ((!C.cf&&!C.zf)) goto L_1006a4e7;
  /* 1006a4d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006a4d6 mov dl, byte ptr [edx + 0x10070d78] */
  DL = (r8((uint32_t)(EDX + 0x10070d78)));
L_1006a4dc:;
  /* 1006a4dc or byte ptr [eax + 0x10076b01], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10076b01)))|(DL); w8((uint32_t)(EAX + 0x10076b01), (_r)); fl_logic(_r,8); }
  /* 1006a4e2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006a4e3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a4e5 jbe 0x1006a4dc */
  if ((C.cf||C.zf)) goto L_1006a4dc;
L_1006a4e7:;
  /* 1006a4e7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1006a4e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1006a4e9 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006a4ec jne 0x1006a4c2 */
  if (!C.zf) goto L_1006a4c2;
L_1006a4ee:;
  /* 1006a4ee inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1006a4f1 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006a4f4 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a4f8 jb 0x1006a4bb */
  if (C.cf) goto L_1006a4bb;
  /* 1006a4fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006a4fd mov dword ptr [0x100769fc], 1 */
  w32((uint32_t)(0x100769fc), (0x1u));
  /* 1006a507 push eax */
  push32((uint32_t)(EAX));
  /* 1006a508 mov dword ptr [0x100769e4], eax */
  w32((uint32_t)(0x100769e4), (EAX));
  /* 1006a50d call 0x1006a5e0 */
  push32(0x1006a512u); f_1006a5e0();
  /* 1006a512 lea esi, [esi + 0x10070d84] */
  ESI = ((uint32_t)(ESI + 0x10070d84));
  /* 1006a518 mov edi, 0x100769f0 */
  EDI = (0x100769f0u);
  /* 1006a51d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1006a51e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1006a51f pop ecx */
  ECX = (pop32());
  /* 1006a520 mov dword ptr [0x10076c04], eax */
  w32((uint32_t)(0x10076c04), (EAX));
  /* 1006a525 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1006a526 jmp 0x1006a57a */
  goto L_1006a57a;
L_1006a528:;
  /* 1006a528 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1006a529 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1006a52a cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006a52e jne 0x1006a47b */
  if (!C.zf) goto L_1006a47b;
L_1006a534:;
  /* 1006a534 mov eax, esi */
  EAX = (ESI);
L_1006a536:;
  /* 1006a536 or byte ptr [eax + 0x10076b01], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10076b01)))|(0x8u); w8((uint32_t)(EAX + 0x10076b01), (_r)); fl_logic(_r,8); }
  /* 1006a53d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006a53e cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a543 jb 0x1006a536 */
  if (C.cf) goto L_1006a536;
  /* 1006a545 push ebx */
  push32((uint32_t)(EBX));
  /* 1006a546 call 0x1006a5e0 */
  push32(0x1006a54bu); f_1006a5e0();
  /* 1006a54b pop ecx */
  ECX = (pop32());
  /* 1006a54c mov dword ptr [0x10076c04], eax */
  w32((uint32_t)(0x10076c04), (EAX));
  /* 1006a551 mov dword ptr [0x100769fc], esi */
  w32((uint32_t)(0x100769fc), (ESI));
  /* 1006a557 jmp 0x1006a560 */
  goto L_1006a560;
L_1006a559:;
  /* 1006a559 and dword ptr [0x100769fc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100769fc)))&(0x0u); w32((uint32_t)(0x100769fc), (_r)); fl_logic(_r,32); }
L_1006a560:;
  /* 1006a560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006a562 mov edi, 0x100769f0 */
  EDI = (0x100769f0u);
  /* 1006a567 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1006a568 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1006a569 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1006a56a jmp 0x1006a57a */
  goto L_1006a57a;
L_1006a56c:;
  /* 1006a56c cmp dword ptr [0x10076820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10076820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a573 je 0x1006a584 */
  if (C.zf) goto L_1006a584;
L_1006a575:;
  /* 1006a575 call 0x1006a613 */
  push32(0x1006a57au); f_1006a613();
L_1006a57a:;
  /* 1006a57a call 0x1006a63c */
  push32(0x1006a57fu); f_1006a63c();
  /* 1006a57f jmp 0x1006a410 */
  goto L_1006a410;
L_1006a584:;
  /* 1006a584 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1006a587:;
  /* 1006a587 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1006a589 call 0x1006a074 */
  push32(0x1006a58eu); f_1006a074();
  /* 1006a58e pop ecx */
  ECX = (pop32());
  /* 1006a58f mov eax, esi */
  EAX = (ESI);
  /* 1006a591 pop edi */
  EDI = (pop32());
  /* 1006a592 pop esi */
  ESI = (pop32());
  /* 1006a593 pop ebx */
  EBX = (pop32());
  /* 1006a594 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006a595 ret  */
  ESPCHK(0x1006a3e9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a596 @ 0x1006a596 (74 bytes, 15 insns) */
void f_1006a596(void) {
  FTRACE(0x1006a596u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a596 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006a59a and dword ptr [0x10076820], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10076820)))&(0x0u); w32((uint32_t)(0x10076820), (_r)); fl_logic(_r,32); }
  /* 1006a5a1 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a5a4 jne 0x1006a5b6 */
  if (!C.zf) goto L_1006a5b6;
  /* 1006a5a6 mov dword ptr [0x10076820], 1 */
  w32((uint32_t)(0x10076820), (0x1u));
  /* 1006a5b0 jmp dword ptr [0x1006e0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1006e0a4)))); return;
L_1006a5b6:;
  /* 1006a5b6 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a5b9 jne 0x1006a5cb */
  if (!C.zf) goto L_1006a5cb;
  /* 1006a5bb mov dword ptr [0x10076820], 1 */
  w32((uint32_t)(0x10076820), (0x1u));
  /* 1006a5c5 jmp dword ptr [0x1006e0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1006e0a0)))); return;
L_1006a5cb:;
  /* 1006a5cb cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a5ce jne 0x1006a5df */
  if (!C.zf) goto L_1006a5df;
  /* 1006a5d0 mov eax, dword ptr [0x10076858] */
  EAX = (r32((uint32_t)(0x10076858)));
  /* 1006a5d5 mov dword ptr [0x10076820], 1 */
  w32((uint32_t)(0x10076820), (0x1u));
L_1006a5df:;
  /* 1006a5df ret  */
  ESPCHK(0x1006a596u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5e0 @ 0x1006a5e0 (51 bytes, 19 insns) */
void f_1006a5e0(void) {
  FTRACE(0x1006a5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a5e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006a5e4 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006a5e9 je 0x1006a60d */
  if (C.zf) goto L_1006a60d;
  /* 1006a5eb sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006a5ee je 0x1006a607 */
  if (C.zf) goto L_1006a607;
  /* 1006a5f0 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006a5f3 je 0x1006a601 */
  if (C.zf) goto L_1006a601;
  /* 1006a5f5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006a5f6 je 0x1006a5fb */
  if (C.zf) goto L_1006a5fb;
  /* 1006a5f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006a5fa ret  */
  ESPCHK(0x1006a5e0u, _esp0);
  ESP += 4; return;
L_1006a5fb:;
  /* 1006a5fb mov eax, 0x404 */
  EAX = (0x404u);
  /* 1006a600 ret  */
  ESPCHK(0x1006a5e0u, _esp0);
  ESP += 4; return;
L_1006a601:;
  /* 1006a601 mov eax, 0x412 */
  EAX = (0x412u);
  /* 1006a606 ret  */
  ESPCHK(0x1006a5e0u, _esp0);
  ESP += 4; return;
L_1006a607:;
  /* 1006a607 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1006a60c ret  */
  ESPCHK(0x1006a5e0u, _esp0);
  ESP += 4; return;
L_1006a60d:;
  /* 1006a60d mov eax, 0x411 */
  EAX = (0x411u);
  /* 1006a612 ret  */
  ESPCHK(0x1006a5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a613 @ 0x1006a613 (41 bytes, 17 insns) */
void f_1006a613(void) {
  FTRACE(0x1006a613u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a613 push edi */
  push32((uint32_t)(EDI));
  /* 1006a614 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1006a616 pop ecx */
  ECX = (pop32());
  /* 1006a617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006a619 mov edi, 0x10076b00 */
  EDI = (0x10076b00u);
  /* 1006a61e rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1006a620 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1006a621 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006a623 mov edi, 0x100769f0 */
  EDI = (0x100769f0u);
  /* 1006a628 mov dword ptr [0x100769e4], eax */
  w32((uint32_t)(0x100769e4), (EAX));
  /* 1006a62d mov dword ptr [0x100769fc], eax */
  w32((uint32_t)(0x100769fc), (EAX));
  /* 1006a632 mov dword ptr [0x10076c04], eax */
  w32((uint32_t)(0x10076c04), (EAX));
  /* 1006a637 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1006a638 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1006a639 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1006a63a pop edi */
  EDI = (pop32());
  /* 1006a63b ret  */
  ESPCHK(0x1006a613u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a63c @ 0x1006a63c (389 bytes, 124 insns) */
void f_1006a63c(void) {
  FTRACE(0x1006a63cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a63c push ebp */
  push32((uint32_t)(EBP));
  /* 1006a63d mov ebp, esp */
  EBP = (ESP);
  /* 1006a63f sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006a645 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1006a648 push esi */
  push32((uint32_t)(ESI));
  /* 1006a649 push eax */
  push32((uint32_t)(EAX));
  /* 1006a64a push dword ptr [0x100769e4] */
  push32((uint32_t)(r32((uint32_t)(0x100769e4))));
  /* 1006a650 call dword ptr [0x1006e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e09c))), 0x1006a656u);
  /* 1006a656 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a659 jne 0x1006a775 */
  if (!C.zf) goto L_1006a775;
  /* 1006a65f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006a661 mov esi, 0x100 */
  ESI = (0x100u);
L_1006a666:;
  /* 1006a666 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1006a66d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006a66e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a670 jb 0x1006a666 */
  if (C.cf) goto L_1006a666;
  /* 1006a672 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 1006a675 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1006a67c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006a67e je 0x1006a6b7 */
  if (C.zf) goto L_1006a6b7;
  /* 1006a680 push ebx */
  push32((uint32_t)(EBX));
  /* 1006a681 push edi */
  push32((uint32_t)(EDI));
  /* 1006a682 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_1006a685:;
  /* 1006a685 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1006a688 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1006a68b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a68d ja 0x1006a6ac */
  if ((!C.cf&&!C.zf)) goto L_1006a6ac;
  /* 1006a68f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006a691 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1006a698 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1006a699 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 1006a69e mov ebx, ecx */
  EBX = (ECX);
  /* 1006a6a0 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1006a6a3 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1006a6a5 mov ecx, ebx */
  ECX = (EBX);
  /* 1006a6a7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1006a6aa rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1006a6ac:;
  /* 1006a6ac inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1006a6ad inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1006a6ae mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 1006a6b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006a6b3 jne 0x1006a685 */
  if (!C.zf) goto L_1006a685;
  /* 1006a6b5 pop edi */
  EDI = (pop32());
  /* 1006a6b6 pop ebx */
  EBX = (pop32());
L_1006a6b7:;
  /* 1006a6b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1006a6b9 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 1006a6bf push dword ptr [0x10076c04] */
  push32((uint32_t)(r32((uint32_t)(0x10076c04))));
  /* 1006a6c5 push dword ptr [0x100769e4] */
  push32((uint32_t)(r32((uint32_t)(0x100769e4))));
  /* 1006a6cb push eax */
  push32((uint32_t)(EAX));
  /* 1006a6cc lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1006a6d2 push esi */
  push32((uint32_t)(ESI));
  /* 1006a6d3 push eax */
  push32((uint32_t)(EAX));
  /* 1006a6d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006a6d6 call 0x1006c27d */
  push32(0x1006a6dbu); f_1006c27d();
  /* 1006a6db push 0 */
  push32((uint32_t)(0x0u));
  /* 1006a6dd lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 1006a6e3 push dword ptr [0x100769e4] */
  push32((uint32_t)(r32((uint32_t)(0x100769e4))));
  /* 1006a6e9 push esi */
  push32((uint32_t)(ESI));
  /* 1006a6ea push eax */
  push32((uint32_t)(EAX));
  /* 1006a6eb lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1006a6f1 push esi */
  push32((uint32_t)(ESI));
  /* 1006a6f2 push eax */
  push32((uint32_t)(EAX));
  /* 1006a6f3 push esi */
  push32((uint32_t)(ESI));
  /* 1006a6f4 push dword ptr [0x10076c04] */
  push32((uint32_t)(r32((uint32_t)(0x10076c04))));
  /* 1006a6fa call 0x1006c3c6 */
  push32(0x1006a6ffu); f_1006c3c6();
  /* 1006a6ff push 0 */
  push32((uint32_t)(0x0u));
  /* 1006a701 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 1006a707 push dword ptr [0x100769e4] */
  push32((uint32_t)(r32((uint32_t)(0x100769e4))));
  /* 1006a70d push esi */
  push32((uint32_t)(ESI));
  /* 1006a70e push eax */
  push32((uint32_t)(EAX));
  /* 1006a70f lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1006a715 push esi */
  push32((uint32_t)(ESI));
  /* 1006a716 push eax */
  push32((uint32_t)(EAX));
  /* 1006a717 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1006a71c push dword ptr [0x10076c04] */
  push32((uint32_t)(r32((uint32_t)(0x10076c04))));
  /* 1006a722 call 0x1006c3c6 */
  push32(0x1006a727u); f_1006c3c6();
  /* 1006a727 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006a72a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006a72c lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_1006a732:;
  /* 1006a732 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1006a735 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1006a738 je 0x1006a750 */
  if (C.zf) goto L_1006a750;
  /* 1006a73a or byte ptr [eax + 0x10076b01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10076b01)))|(0x10u); w8((uint32_t)(EAX + 0x10076b01), (_r)); fl_logic(_r,8); }
  /* 1006a741 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1006a748:;
  /* 1006a748 mov byte ptr [eax + 0x10076a00], dl */
  w8((uint32_t)(EAX + 0x10076a00), (DL));
  /* 1006a74e jmp 0x1006a76c */
  goto L_1006a76c;
L_1006a750:;
  /* 1006a750 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 1006a753 je 0x1006a765 */
  if (C.zf) goto L_1006a765;
  /* 1006a755 or byte ptr [eax + 0x10076b01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10076b01)))|(0x20u); w8((uint32_t)(EAX + 0x10076b01), (_r)); fl_logic(_r,8); }
  /* 1006a75c mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 1006a763 jmp 0x1006a748 */
  goto L_1006a748;
L_1006a765:;
  /* 1006a765 and byte ptr [eax + 0x10076a00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10076a00)))&(0x0u); w8((uint32_t)(EAX + 0x10076a00), (_r)); fl_logic(_r,8); }
L_1006a76c:;
  /* 1006a76c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006a76d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1006a76e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1006a76f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a771 jb 0x1006a732 */
  if (C.cf) goto L_1006a732;
  /* 1006a773 jmp 0x1006a7be */
  goto L_1006a7be;
L_1006a775:;
  /* 1006a775 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006a777 mov esi, 0x100 */
  ESI = (0x100u);
L_1006a77c:;
  /* 1006a77c cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a77f jb 0x1006a79a */
  if (C.cf) goto L_1006a79a;
  /* 1006a781 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a784 ja 0x1006a79a */
  if ((!C.cf&&!C.zf)) goto L_1006a79a;
  /* 1006a786 or byte ptr [eax + 0x10076b01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10076b01)))|(0x10u); w8((uint32_t)(EAX + 0x10076b01), (_r)); fl_logic(_r,8); }
  /* 1006a78d mov cl, al */
  CL = (AL);
  /* 1006a78f add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_1006a792:;
  /* 1006a792 mov byte ptr [eax + 0x10076a00], cl */
  w8((uint32_t)(EAX + 0x10076a00), (CL));
  /* 1006a798 jmp 0x1006a7b9 */
  goto L_1006a7b9;
L_1006a79a:;
  /* 1006a79a cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a79d jb 0x1006a7b2 */
  if (C.cf) goto L_1006a7b2;
  /* 1006a79f cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a7a2 ja 0x1006a7b2 */
  if ((!C.cf&&!C.zf)) goto L_1006a7b2;
  /* 1006a7a4 or byte ptr [eax + 0x10076b01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10076b01)))|(0x20u); w8((uint32_t)(EAX + 0x10076b01), (_r)); fl_logic(_r,8); }
  /* 1006a7ab mov cl, al */
  CL = (AL);
  /* 1006a7ad sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1006a7b0 jmp 0x1006a792 */
  goto L_1006a792;
L_1006a7b2:;
  /* 1006a7b2 and byte ptr [eax + 0x10076a00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10076a00)))&(0x0u); w8((uint32_t)(EAX + 0x10076a00), (_r)); fl_logic(_r,8); }
L_1006a7b9:;
  /* 1006a7b9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006a7ba cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a7bc jb 0x1006a77c */
  if (C.cf) goto L_1006a77c;
L_1006a7be:;
  /* 1006a7be pop esi */
  ESI = (pop32());
  /* 1006a7bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006a7c0 ret  */
  ESPCHK(0x1006a63cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c1 @ 0x1006a7c1 (28 bytes, 7 insns) */
void f_1006a7c1(void) {
  FTRACE(0x1006a7c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a7c1 cmp dword ptr [0x10077d48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10077d48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a7c8 jne 0x1006a7dc */
  if (!C.zf) goto L_1006a7dc;
  /* 1006a7ca push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1006a7cc call 0x1006a3e9 */
  push32(0x1006a7d1u); f_1006a3e9();
  /* 1006a7d1 pop ecx */
  ECX = (pop32());
  /* 1006a7d2 mov dword ptr [0x10077d48], 1 */
  w32((uint32_t)(0x10077d48), (0x1u));
L_1006a7dc:;
  /* 1006a7dc ret  */
  ESPCHK(0x1006a7c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7e0 @ 0x1006a7e0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1006a7e0(void) {
  FTRACE(0x1006a7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006a7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1006a7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1006a7e3 push edi */
  push32((uint32_t)(EDI));
  /* 1006a7e4 push esi */
  push32((uint32_t)(ESI));
  /* 1006a7e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1006a7e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1006a7eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1006a7ee mov eax, ecx */
  EAX = (ECX);
  /* 1006a7f0 mov edx, ecx */
  EDX = (ECX);
  /* 1006a7f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006a7f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a7f6 jbe 0x1006a800 */
  if ((C.cf||C.zf)) goto L_1006a800;
  /* 1006a7f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a7fa jb 0x1006a978 */
  if (C.cf) goto L_1006a978;
L_1006a800:;
  /* 1006a800 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1006a806 jne 0x1006a81c */
  if (!C.zf) goto L_1006a81c;
  /* 1006a808 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1006a80b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1006a80e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a811 jb 0x1006a83c */
  if (C.cf) goto L_1006a83c;
  /* 1006a813 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1006a815 jmp dword ptr [edx*4 + 0x1006a928] */
  switch (EDX) {
    case 0: goto L_1006a938;
    case 1: goto L_1006a940;
    case 2: goto L_1006a94c;
    case 3: goto L_1006a960;
    default: x86_unimpl("switch@0x1006a815 out of table"); return;
  }
L_1006a81c:;
  /* 1006a81c mov eax, edi */
  EAX = (EDI);
  /* 1006a81e mov edx, 3 */
  EDX = (0x3u);
  /* 1006a823 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006a826 jb 0x1006a834 */
  if (C.cf) goto L_1006a834;
  /* 1006a828 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1006a82b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006a82d jmp dword ptr [eax*4 + 0x1006a840] */
  switch (EAX) {
    case 1: goto L_1006a850;
    case 2: goto L_1006a87c;
    case 3: goto L_1006a8a0;
    default: x86_unimpl("switch@0x1006a82d out of table"); return;
  }
L_1006a834:;
  /* 1006a834 jmp dword ptr [ecx*4 + 0x1006a938] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1006a938)))); return;
  /* 1006a83b nop  */
  /* nop */
L_1006a83c:;
  /* 1006a83c jmp dword ptr [ecx*4 + 0x1006a8bc] */
  switch (ECX) {
    case 0: goto L_1006a91f;
    case 1: goto L_1006a90c;
    case 2: goto L_1006a904;
    case 3: goto L_1006a8fc;
    case 4: goto L_1006a8f4;
    case 5: goto L_1006a8ec;
    case 6: goto L_1006a8e4;
    case 7: goto L_1006a8dc;
    default: x86_unimpl("switch@0x1006a83c out of table"); return;
  }
  /* 1006a843 nop  */
  /* nop */
L_1006a850:;
  /* 1006a850 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1006a852 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006a854 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1006a856 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1006a859 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1006a85c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1006a85f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1006a862 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1006a865 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006a868 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006a86b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a86e jb 0x1006a83c */
  if (C.cf) goto L_1006a83c;
  /* 1006a870 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1006a872 jmp dword ptr [edx*4 + 0x1006a928] */
  switch (EDX) {
    case 0: goto L_1006a938;
    case 1: goto L_1006a940;
    case 2: goto L_1006a94c;
    case 3: goto L_1006a960;
    default: x86_unimpl("switch@0x1006a872 out of table"); return;
  }
  /* 1006a879 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1006a87c:;
  /* 1006a87c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1006a87e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006a880 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1006a882 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1006a885 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1006a888 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1006a88b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006a88e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006a891 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a894 jb 0x1006a83c */
  if (C.cf) goto L_1006a83c;
  /* 1006a896 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1006a898 jmp dword ptr [edx*4 + 0x1006a928] */
  switch (EDX) {
    case 0: goto L_1006a938;
    case 1: goto L_1006a940;
    case 2: goto L_1006a94c;
    case 3: goto L_1006a960;
    default: x86_unimpl("switch@0x1006a898 out of table"); return;
  }
  /* 1006a89f nop  */
  /* nop */
L_1006a8a0:;
  /* 1006a8a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1006a8a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006a8a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1006a8a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006a8a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1006a8aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006a8ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a8ae jb 0x1006a83c */
  if (C.cf) goto L_1006a83c;
  /* 1006a8b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1006a8b2 jmp dword ptr [edx*4 + 0x1006a928] */
  switch (EDX) {
    case 0: goto L_1006a938;
    case 1: goto L_1006a940;
    case 2: goto L_1006a94c;
    case 3: goto L_1006a960;
    default: x86_unimpl("switch@0x1006a8b2 out of table"); return;
  }
  /* 1006a8b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1006a8dc:;
  /* 1006a8dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1006a8e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1006a8e4:;
  /* 1006a8e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1006a8e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1006a8ec:;
  /* 1006a8ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1006a8f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1006a8f4:;
  /* 1006a8f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1006a8f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1006a8fc:;
  /* 1006a8fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1006a900 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1006a904:;
  /* 1006a904 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1006a908 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1006a90c:;
  /* 1006a90c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1006a910 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1006a914 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1006a91b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006a91d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1006a91f:;
  /* 1006a91f jmp dword ptr [edx*4 + 0x1006a928] */
  switch (EDX) {
    case 0: goto L_1006a938;
    case 1: goto L_1006a940;
    case 2: goto L_1006a94c;
    case 3: goto L_1006a960;
    default: x86_unimpl("switch@0x1006a91f out of table"); return;
  }
  /* 1006a926 mov edi, edi */
  EDI = (EDI);
L_1006a938:;
  /* 1006a938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006a93b pop esi */
  ESI = (pop32());
  /* 1006a93c pop edi */
  EDI = (pop32());
  /* 1006a93d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006a93e ret  */
  ESPCHK(0x1006a7e0u, _esp0);
  ESP += 4; return;
  /* 1006a93f nop  */
  /* nop */
L_1006a940:;
  /* 1006a940 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006a942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1006a944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006a947 pop esi */
  ESI = (pop32());
  /* 1006a948 pop edi */
  EDI = (pop32());
  /* 1006a949 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006a94a ret  */
  ESPCHK(0x1006a7e0u, _esp0);
  ESP += 4; return;
  /* 1006a94b nop  */
  /* nop */
L_1006a94c:;
  /* 1006a94c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006a94e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1006a950 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1006a953 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1006a956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006a959 pop esi */
  ESI = (pop32());
  /* 1006a95a pop edi */
  EDI = (pop32());
  /* 1006a95b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006a95c ret  */
  ESPCHK(0x1006a7e0u, _esp0);
  ESP += 4; return;
  /* 1006a95d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1006a960:;
  /* 1006a960 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006a962 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1006a964 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1006a967 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1006a96a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1006a96d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1006a970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006a973 pop esi */
  ESI = (pop32());
  /* 1006a974 pop edi */
  EDI = (pop32());
  /* 1006a975 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006a976 ret  */
  ESPCHK(0x1006a7e0u, _esp0);
  ESP += 4; return;
  /* 1006a977 nop  */
  /* nop */
L_1006a978:;
  /* 1006a978 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1006a97c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1006a980 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1006a986 jne 0x1006a9ac */
  if (!C.zf) goto L_1006a9ac;
  /* 1006a988 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1006a98b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1006a98e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a991 jb 0x1006a9a0 */
  if (C.cf) goto L_1006a9a0;
  /* 1006a993 std  */
  C.df=1;
  /* 1006a994 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1006a996 cld  */
  C.df=0;
  /* 1006a997 jmp dword ptr [edx*4 + 0x1006aac0] */
  switch (EDX) {
    case 0: goto L_1006aad0;
    case 1: goto L_1006aad8;
    case 2: goto L_1006aae8;
    case 3: goto L_1006aafc;
    default: x86_unimpl("switch@0x1006a997 out of table"); return;
  }
  /* 1006a99e mov edi, edi */
  EDI = (EDI);
L_1006a9a0:;
  /* 1006a9a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1006a9a2 jmp dword ptr [ecx*4 + 0x1006aa70] */
  switch (ECX) {
    case 0: goto L_1006aab7;
    default: x86_unimpl("switch@0x1006a9a2 out of table"); return;
  }
  /* 1006a9a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1006a9ac:;
  /* 1006a9ac mov eax, edi */
  EAX = (EDI);
  /* 1006a9ae mov edx, 3 */
  EDX = (0x3u);
  /* 1006a9b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a9b6 jb 0x1006a9c4 */
  if (C.cf) goto L_1006a9c4;
  /* 1006a9b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1006a9bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006a9bd jmp dword ptr [eax*4 + 0x1006a9c8] */
  switch (EAX) {
    case 1: goto L_1006a9d8;
    case 2: goto L_1006a9f8;
    case 3: goto L_1006aa20;
    default: x86_unimpl("switch@0x1006a9bd out of table"); return;
  }
L_1006a9c4:;
  /* 1006a9c4 jmp dword ptr [ecx*4 + 0x1006aac0] */
  switch (ECX) {
    case 0: goto L_1006aad0;
    case 1: goto L_1006aad8;
    case 2: goto L_1006aae8;
    case 3: goto L_1006aafc;
    default: x86_unimpl("switch@0x1006a9c4 out of table"); return;
  }
  /* 1006a9cb nop  */
  /* nop */
L_1006a9d8:;
  /* 1006a9d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1006a9db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1006a9dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1006a9e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1006a9e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1006a9e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1006a9e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006a9e8 jb 0x1006a9a0 */
  if (C.cf) goto L_1006a9a0;
  /* 1006a9ea std  */
  C.df=1;
  /* 1006a9eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1006a9ed cld  */
  C.df=0;
  /* 1006a9ee jmp dword ptr [edx*4 + 0x1006aac0] */
  switch (EDX) {
    case 0: goto L_1006aad0;
    case 1: goto L_1006aad8;
    case 2: goto L_1006aae8;
    case 3: goto L_1006aafc;
    default: x86_unimpl("switch@0x1006a9ee out of table"); return;
  }
  /* 1006a9f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1006a9f8:;
  /* 1006a9f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1006a9fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1006a9fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
L_1006aa00:;
  /* 1006aa00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1006aa03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1006aa06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1006aa09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006aa0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006aa0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006aa12 jb 0x1006a9a0 */
  if (C.cf) goto L_1006a9a0;
  /* 1006aa14 std  */
  C.df=1;
  /* 1006aa15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1006aa17 cld  */
  C.df=0;
  /* 1006aa18 jmp dword ptr [edx*4 + 0x1006aac0] */
  switch (EDX) {
    case 0: goto L_1006aad0;
    case 1: goto L_1006aad8;
    case 2: goto L_1006aae8;
    case 3: goto L_1006aafc;
    default: x86_unimpl("switch@0x1006aa18 out of table"); return;
  }
  /* 1006aa1f nop  */
  /* nop */
L_1006aa20:;
  /* 1006aa20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1006aa23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1006aa25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1006aa28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1006aa2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1006aa2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1006aa31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1006aa34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1006aa37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006aa3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006aa3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006aa40 jb 0x1006a9a0 */
  if (C.cf) goto L_1006a9a0;
  /* 1006aa46 std  */
  C.df=1;
  /* 1006aa47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1006aa49 cld  */
  C.df=0;
  /* 1006aa4a jmp dword ptr [edx*4 + 0x1006aac0] */
  switch (EDX) {
    case 0: goto L_1006aad0;
    case 1: goto L_1006aad8;
    case 2: goto L_1006aae8;
    case 3: goto L_1006aafc;
    default: x86_unimpl("switch@0x1006aa4a out of table"); return;
  }
  /* 1006aa51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1006aa54 je 0x1006aa00 */
  if (C.zf) goto L_1006aa00;
  /* 1006aa56 push es */
  push32((uint32_t)(C.seg_es));
  /* 1006aa57 adc byte ptr [edx + ebp*4 + 6], bh */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*4 + 0x6))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*4 + 0x6), (_r)); fl_add(_a,_b,_r,8); }
  /* 1006aa5b adc byte ptr [edx + ebp*4 - 0x5573effa], al */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*4 + -0x5573effa))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*4 + -0x5573effa), (_r)); fl_add(_a,_b,_r,8); }
  /* 1006aa62 push es */
  push32((uint32_t)(C.seg_es));
  /* 1006aa63 adc byte ptr [edx + ebp*4 - 0x5563effa], dl */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*4 + -0x5563effa))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*4 + -0x5563effa), (_r)); fl_add(_a,_b,_r,8); }
  /* 1006aa6a push es */
  push32((uint32_t)(C.seg_es));
  /* 1006aa6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1006aa6d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1006aa6e push es */
  push32((uint32_t)(C.seg_es));
  /* 1006aa74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1006aa78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1006aa7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1006aa80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1006aa84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1006aa88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1006aa8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1006aa90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1006aa94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1006aa98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1006aa9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1006aaa0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1006aaa4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1006aaa8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1006aaac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1006aab3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006aab5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1006aab7:;
  /* 1006aab7 jmp dword ptr [edx*4 + 0x1006aac0] */
  switch (EDX) {
    case 0: goto L_1006aad0;
    case 1: goto L_1006aad8;
    case 2: goto L_1006aae8;
    case 3: goto L_1006aafc;
    default: x86_unimpl("switch@0x1006aab7 out of table"); return;
  }
  /* 1006aabe mov edi, edi */
  EDI = (EDI);
L_1006aad0:;
  /* 1006aad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006aad3 pop esi */
  ESI = (pop32());
  /* 1006aad4 pop edi */
  EDI = (pop32());
  /* 1006aad5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006aad6 ret  */
  ESPCHK(0x1006a7e0u, _esp0);
  ESP += 4; return;
  /* 1006aad7 nop  */
  /* nop */
L_1006aad8:;
  /* 1006aad8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1006aadb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1006aade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006aae1 pop esi */
  ESI = (pop32());
  /* 1006aae2 pop edi */
  EDI = (pop32());
  /* 1006aae3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006aae4 ret  */
  ESPCHK(0x1006a7e0u, _esp0);
  ESP += 4; return;
  /* 1006aae5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1006aae8:;
  /* 1006aae8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1006aaeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1006aaee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1006aaf1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1006aaf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006aaf7 pop esi */
  ESI = (pop32());
  /* 1006aaf8 pop edi */
  EDI = (pop32());
  /* 1006aaf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006aafa ret  */
  ESPCHK(0x1006a7e0u, _esp0);
  ESP += 4; return;
  /* 1006aafb nop  */
  /* nop */
L_1006aafc:;
  /* 1006aafc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1006aaff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1006ab02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1006ab05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1006ab08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1006ab0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1006ab0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006ab11 pop esi */
  ESI = (pop32());
  /* 1006ab12 pop edi */
  EDI = (pop32());
  /* 1006ab13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006ab14 ret  */
  ESPCHK(0x1006a7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab15 @ 0x1006ab15 (23 bytes, 7 insns) */
void f_1006ab15(void) {
  FTRACE(0x1006ab15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006ab15 push 0 */
  push32((uint32_t)(0x0u));
  /* 1006ab17 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1006ab1b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1006ab1f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1006ab23 call 0x1006ab2c */
  push32(0x1006ab28u); f_1006ab2c();
  /* 1006ab28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006ab2b ret  */
  ESPCHK(0x1006ab15u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab2c @ 0x1006ab2c (517 bytes, 195 insns) */
void f_1006ab2c(void) {
  FTRACE(0x1006ab2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006ab2c push ebp */
  push32((uint32_t)(EBP));
  /* 1006ab2d mov ebp, esp */
  EBP = (ESP);
  /* 1006ab2f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006ab32 push ebx */
  push32((uint32_t)(EBX));
  /* 1006ab33 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1006ab37 push esi */
  push32((uint32_t)(ESI));
  /* 1006ab38 push edi */
  push32((uint32_t)(EDI));
  /* 1006ab39 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1006ab3c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1006ab3e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 1006ab41 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1006ab44:;
  /* 1006ab44 cmp dword ptr [0x10070bf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10070bf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ab4b jle 0x1006ab5c */
  if ((C.zf||C.sf!=C.of)) goto L_1006ab5c;
  /* 1006ab4d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1006ab50 push 8 */
  push32((uint32_t)(0x8u));
  /* 1006ab52 push eax */
  push32((uint32_t)(EAX));
  /* 1006ab53 call 0x100693cb */
  push32(0x1006ab58u); f_100693cb();
  /* 1006ab58 pop ecx */
  ECX = (pop32());
  /* 1006ab59 pop ecx */
  ECX = (pop32());
  /* 1006ab5a jmp 0x1006ab6b */
  goto L_1006ab6b;
L_1006ab5c:;
  /* 1006ab5c mov ecx, dword ptr [0x100709e0] */
  ECX = (r32((uint32_t)(0x100709e0)));
  /* 1006ab62 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1006ab65 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1006ab68 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_1006ab6b:;
  /* 1006ab6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006ab6d je 0x1006ab74 */
  if (C.zf) goto L_1006ab74;
  /* 1006ab6f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1006ab71 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006ab72 jmp 0x1006ab44 */
  goto L_1006ab44;
L_1006ab74:;
  /* 1006ab74 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ab77 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 1006ab7a jne 0x1006ab82 */
  if (!C.zf) goto L_1006ab82;
  /* 1006ab7c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1006ab80 jmp 0x1006ab87 */
  goto L_1006ab87;
L_1006ab82:;
  /* 1006ab82 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ab85 jne 0x1006ab8d */
  if (!C.zf) goto L_1006ab8d;
L_1006ab87:;
  /* 1006ab87 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1006ab89 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006ab8a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1006ab8d:;
  /* 1006ab8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1006ab90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006ab92 jl 0x1006ad21 */
  if ((C.sf!=C.of)) goto L_1006ad21;
  /* 1006ab98 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ab9b je 0x1006ad21 */
  if (C.zf) goto L_1006ad21;
  /* 1006aba1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006aba4 jg 0x1006ad21 */
  if ((!C.zf&&C.sf==C.of)) goto L_1006ad21;
  /* 1006abaa push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1006abac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006abae pop ecx */
  ECX = (pop32());
  /* 1006abaf jne 0x1006abd5 */
  if (!C.zf) goto L_1006abd5;
  /* 1006abb1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006abb4 je 0x1006abbf */
  if (C.zf) goto L_1006abbf;
  /* 1006abb6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 1006abbd jmp 0x1006abf1 */
  goto L_1006abf1;
L_1006abbf:;
  /* 1006abbf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006abc1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006abc3 je 0x1006abd2 */
  if (C.zf) goto L_1006abd2;
  /* 1006abc5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006abc7 je 0x1006abd2 */
  if (C.zf) goto L_1006abd2;
  /* 1006abc9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 1006abd0 jmp 0x1006abf1 */
  goto L_1006abf1;
L_1006abd2:;
  /* 1006abd2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1006abd5:;
  /* 1006abd5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006abd8 jne 0x1006abf1 */
  if (!C.zf) goto L_1006abf1;
  /* 1006abda cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006abdd jne 0x1006abf1 */
  if (!C.zf) goto L_1006abf1;
  /* 1006abdf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006abe1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006abe3 je 0x1006abe9 */
  if (C.zf) goto L_1006abe9;
  /* 1006abe5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006abe7 jne 0x1006abf1 */
  if (!C.zf) goto L_1006abf1;
L_1006abe9:;
  /* 1006abe9 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 1006abec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006abed inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006abee mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1006abf1:;
  /* 1006abf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1006abf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1006abf6 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1006abf9 mov edi, 0x103 */
  EDI = (0x103u);
  /* 1006abfe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1006ac01:;
  /* 1006ac01 cmp dword ptr [0x10070bf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10070bf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ac08 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1006ac0b jle 0x1006ac19 */
  if ((C.zf||C.sf!=C.of)) goto L_1006ac19;
  /* 1006ac0d push 4 */
  push32((uint32_t)(0x4u));
  /* 1006ac0f push esi */
  push32((uint32_t)(ESI));
  /* 1006ac10 call 0x100693cb */
  push32(0x1006ac15u); f_100693cb();
  /* 1006ac15 pop ecx */
  ECX = (pop32());
  /* 1006ac16 pop ecx */
  ECX = (pop32());
  /* 1006ac17 jmp 0x1006ac24 */
  goto L_1006ac24;
L_1006ac19:;
  /* 1006ac19 mov eax, dword ptr [0x100709e0] */
  EAX = (r32((uint32_t)(0x100709e0)));
  /* 1006ac1e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 1006ac21 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1006ac24:;
  /* 1006ac24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006ac26 je 0x1006ac30 */
  if (C.zf) goto L_1006ac30;
  /* 1006ac28 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1006ac2b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006ac2e jmp 0x1006ac62 */
  goto L_1006ac62;
L_1006ac30:;
  /* 1006ac30 cmp dword ptr [0x10070bf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10070bf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ac37 jle 0x1006ac44 */
  if ((C.zf||C.sf!=C.of)) goto L_1006ac44;
  /* 1006ac39 push edi */
  push32((uint32_t)(EDI));
  /* 1006ac3a push esi */
  push32((uint32_t)(ESI));
  /* 1006ac3b call 0x100693cb */
  push32(0x1006ac40u); f_100693cb();
  /* 1006ac40 pop ecx */
  ECX = (pop32());
  /* 1006ac41 pop ecx */
  ECX = (pop32());
  /* 1006ac42 jmp 0x1006ac4f */
  goto L_1006ac4f;
L_1006ac44:;
  /* 1006ac44 mov eax, dword ptr [0x100709e0] */
  EAX = (r32((uint32_t)(0x100709e0)));
  /* 1006ac49 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 1006ac4d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_1006ac4f:;
  /* 1006ac4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006ac51 je 0x1006ac9d */
  if (C.zf) goto L_1006ac9d;
  /* 1006ac53 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1006ac56 push eax */
  push32((uint32_t)(EAX));
  /* 1006ac57 call 0x1006d108 */
  push32(0x1006ac5cu); f_1006d108();
  /* 1006ac5c pop ecx */
  ECX = (pop32());
  /* 1006ac5d mov ecx, eax */
  ECX = (EAX);
  /* 1006ac5f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_1006ac62:;
  /* 1006ac62 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ac65 jae 0x1006ac9d */
  if (!C.cf) goto L_1006ac9d;
  /* 1006ac67 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 1006ac6a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1006ac6e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ac71 jb 0x1006ac87 */
  if (C.cf) goto L_1006ac87;
  /* 1006ac73 jne 0x1006ac81 */
  if (!C.zf) goto L_1006ac81;
  /* 1006ac75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1006ac78 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1006ac7a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1006ac7d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ac7f jbe 0x1006ac87 */
  if ((C.cf||C.zf)) goto L_1006ac87;
L_1006ac81:;
  /* 1006ac81 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1006ac85 jmp 0x1006ac90 */
  goto L_1006ac90;
L_1006ac87:;
  /* 1006ac87 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1006ac8b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006ac8d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_1006ac90:;
  /* 1006ac90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006ac93 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1006ac96 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1006ac98 jmp 0x1006ac01 */
  goto L_1006ac01;
L_1006ac9d:;
  /* 1006ac9d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1006aca0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1006aca3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006aca6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1006aca8 jne 0x1006acba */
  if (!C.zf) goto L_1006acba;
  /* 1006acaa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1006acac je 0x1006acb4 */
  if (C.zf) goto L_1006acb4;
  /* 1006acae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006acb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1006acb4:;
  /* 1006acb4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1006acb8 jmp 0x1006ad05 */
  goto L_1006ad05;
L_1006acba:;
  /* 1006acba test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 1006acbc mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 1006acc1 jne 0x1006acde */
  if (!C.zf) goto L_1006acde;
  /* 1006acc3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1006acc5 jne 0x1006ad05 */
  if (!C.zf) goto L_1006ad05;
  /* 1006acc7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1006acca je 0x1006acd5 */
  if (C.zf) goto L_1006acd5;
  /* 1006accc cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006acd3 ja 0x1006acde */
  if ((!C.cf&&!C.zf)) goto L_1006acde;
L_1006acd5:;
  /* 1006acd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006acd7 jne 0x1006ad05 */
  if (!C.zf) goto L_1006ad05;
  /* 1006acd9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006acdc jbe 0x1006ad05 */
  if ((C.cf||C.zf)) goto L_1006ad05;
L_1006acde:;
  /* 1006acde call 0x1006bf71 */
  push32(0x1006ace3u); f_1006bf71();
  /* 1006ace3 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 1006ace7 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 1006aced je 0x1006acf5 */
  if (C.zf) goto L_1006acf5;
  /* 1006acef or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1006acf3 jmp 0x1006ad05 */
  goto L_1006ad05;
L_1006acf5:;
  /* 1006acf5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1006acf8 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1006acfa neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 1006acfc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006acfe neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1006ad00 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006ad02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1006ad05:;
  /* 1006ad05 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1006ad07 je 0x1006ad0e */
  if (C.zf) goto L_1006ad0e;
  /* 1006ad09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006ad0c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_1006ad0e:;
  /* 1006ad0e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 1006ad12 je 0x1006ad1c */
  if (C.zf) goto L_1006ad1c;
  /* 1006ad14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1006ad17 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1006ad19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1006ad1c:;
  /* 1006ad1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1006ad1f jmp 0x1006ad2c */
  goto L_1006ad2c;
L_1006ad21:;
  /* 1006ad21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006ad24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006ad26 je 0x1006ad2a */
  if (C.zf) goto L_1006ad2a;
  /* 1006ad28 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_1006ad2a:;
  /* 1006ad2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1006ad2c:;
  /* 1006ad2c pop edi */
  EDI = (pop32());
  /* 1006ad2d pop esi */
  ESI = (pop32());
  /* 1006ad2e pop ebx */
  EBX = (pop32());
  /* 1006ad2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006ad30 ret  */
  ESPCHK(0x1006ab2cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x1006ad50 (193 bytes, 90 insns) */
void f_1006ad50(void) {
  FTRACE(0x1006ad50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006ad50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006ad52 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1006ad56 push ebx */
  push32((uint32_t)(EBX));
  /* 1006ad57 mov ebx, eax */
  EBX = (EAX);
  /* 1006ad59 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1006ad5c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1006ad60 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1006ad66 je 0x1006ad7b */
  if (C.zf) goto L_1006ad7b;
L_1006ad68:;
  /* 1006ad68 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1006ad6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1006ad6b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ad6d je 0x1006ad40 */
  if (C.zf) { jmp_ind(0x1006ad40u); return; }
  /* 1006ad6f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 1006ad71 je 0x1006adc4 */
  if (C.zf) goto L_1006adc4;
  /* 1006ad73 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1006ad79 jne 0x1006ad68 */
  if (!C.zf) goto L_1006ad68;
L_1006ad7b:;
  /* 1006ad7b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1006ad7d push edi */
  push32((uint32_t)(EDI));
  /* 1006ad7e mov eax, ebx */
  EAX = (EBX);
  /* 1006ad80 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 1006ad83 push esi */
  push32((uint32_t)(ESI));
  /* 1006ad84 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_1006ad86:;
  /* 1006ad86 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1006ad88 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1006ad8d mov eax, ecx */
  EAX = (ECX);
  /* 1006ad8f mov esi, edi */
  ESI = (EDI);
  /* 1006ad91 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 1006ad93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006ad95 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006ad97 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1006ad9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1006ad9d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1006ad9f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1006ada1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006ada4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1006adaa jne 0x1006adc8 */
  if (!C.zf) goto L_1006adc8;
  /* 1006adac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1006adb1 je 0x1006ad86 */
  if (C.zf) goto L_1006ad86;
  /* 1006adb3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1006adb8 jne 0x1006adc2 */
  if (!C.zf) goto L_1006adc2;
  /* 1006adba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 1006adc0 jne 0x1006ad86 */
  if (!C.zf) goto L_1006ad86;
L_1006adc2:;
  /* 1006adc2 pop esi */
  ESI = (pop32());
  /* 1006adc3 pop edi */
  EDI = (pop32());
L_1006adc4:;
  /* 1006adc4 pop ebx */
  EBX = (pop32());
  /* 1006adc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006adc7 ret  */
  ESPCHK(0x1006ad50u, _esp0);
  ESP += 4; return;
L_1006adc8:;
  /* 1006adc8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1006adcb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006adcd je 0x1006ae05 */
  if (C.zf) goto L_1006ae05;
  /* 1006adcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006add1 je 0x1006adc2 */
  if (C.zf) goto L_1006adc2;
  /* 1006add3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006add5 je 0x1006adfe */
  if (C.zf) goto L_1006adfe;
  /* 1006add7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1006add9 je 0x1006adc2 */
  if (C.zf) goto L_1006adc2;
  /* 1006addb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1006adde cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ade0 je 0x1006adf7 */
  if (C.zf) goto L_1006adf7;
  /* 1006ade2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006ade4 je 0x1006adc2 */
  if (C.zf) goto L_1006adc2;
  /* 1006ade6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ade8 je 0x1006adf0 */
  if (C.zf) goto L_1006adf0;
  /* 1006adea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1006adec je 0x1006adc2 */
  if (C.zf) goto L_1006adc2;
  /* 1006adee jmp 0x1006ad86 */
  goto L_1006ad86;
L_1006adf0:;
  /* 1006adf0 pop esi */
  ESI = (pop32());
  /* 1006adf1 pop edi */
  EDI = (pop32());
  /* 1006adf2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 1006adf5 pop ebx */
  EBX = (pop32());
  /* 1006adf6 ret  */
  ESPCHK(0x1006ad50u, _esp0);
  ESP += 4; return;
L_1006adf7:;
  /* 1006adf7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1006adfa pop esi */
  ESI = (pop32());
  /* 1006adfb pop edi */
  EDI = (pop32());
  /* 1006adfc pop ebx */
  EBX = (pop32());
  /* 1006adfd ret  */
  ESPCHK(0x1006ad50u, _esp0);
  ESP += 4; return;
L_1006adfe:;
  /* 1006adfe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 1006ae01 pop esi */
  ESI = (pop32());
  /* 1006ae02 pop edi */
  EDI = (pop32());
  /* 1006ae03 pop ebx */
  EBX = (pop32());
  /* 1006ae04 ret  */
  ESPCHK(0x1006ad50u, _esp0);
  ESP += 4; return;
L_1006ae05:;
  /* 1006ae05 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 1006ae08 pop esi */
  ESI = (pop32());
  /* 1006ae09 pop edi */
  EDI = (pop32());
  /* 1006ae0a pop ebx */
  EBX = (pop32());
  /* 1006ae0b ret  */
  ESPCHK(0x1006ad50u, _esp0);
  ESP += 4; return;
  /* 1006ae0c int3  */
  x86_unimpl("int3 @ 0x1006ae0c");
  /* 1006ae0d int3  */
  x86_unimpl("int3 @ 0x1006ae0d");
  /* 1006ae0e int3  */
  x86_unimpl("int3 @ 0x1006ae0e");
  /* 1006ae0f int3  */
  x86_unimpl("int3 @ 0x1006ae0f");
}

/* _strstr @ 0x1006ae10 (128 bytes, 66 insns) */
void f_1006ae10(void) {
  FTRACE(0x1006ae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006ae10 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1006ae14 push edi */
  push32((uint32_t)(EDI));
  /* 1006ae15 push ebx */
  push32((uint32_t)(EBX));
  /* 1006ae16 push esi */
  push32((uint32_t)(ESI));
  /* 1006ae17 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1006ae19 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1006ae1d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1006ae1f je 0x1006ae8a */
  if (C.zf) goto L_1006ae8a;
  /* 1006ae21 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 1006ae24 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1006ae26 je 0x1006ae77 */
  if (C.zf) goto L_1006ae77;
L_1006ae28:;
  /* 1006ae28 mov esi, edi */
  ESI = (EDI);
  /* 1006ae2a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1006ae2e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1006ae30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006ae31 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ae33 je 0x1006ae4a */
  if (C.zf) goto L_1006ae4a;
  /* 1006ae35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006ae37 je 0x1006ae44 */
  if (C.zf) goto L_1006ae44;
L_1006ae39:;
  /* 1006ae39 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006ae3b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1006ae3c:;
  /* 1006ae3c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ae3e je 0x1006ae4a */
  if (C.zf) goto L_1006ae4a;
  /* 1006ae40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006ae42 jne 0x1006ae39 */
  if (!C.zf) goto L_1006ae39;
L_1006ae44:;
  /* 1006ae44 pop esi */
  ESI = (pop32());
  /* 1006ae45 pop ebx */
  EBX = (pop32());
  /* 1006ae46 pop edi */
  EDI = (pop32());
  /* 1006ae47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006ae49 ret  */
  ESPCHK(0x1006ae10u, _esp0);
  ESP += 4; return;
L_1006ae4a:;
  /* 1006ae4a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006ae4c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006ae4d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ae4f jne 0x1006ae3c */
  if (!C.zf) goto L_1006ae3c;
  /* 1006ae51 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_1006ae54:;
  /* 1006ae54 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 1006ae57 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1006ae59 je 0x1006ae83 */
  if (C.zf) goto L_1006ae83;
  /* 1006ae5b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006ae5d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006ae60 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ae62 jne 0x1006ae28 */
  if (!C.zf) goto L_1006ae28;
  /* 1006ae64 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 1006ae67 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006ae69 je 0x1006ae83 */
  if (C.zf) goto L_1006ae83;
  /* 1006ae6b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 1006ae6e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006ae71 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ae73 je 0x1006ae54 */
  if (C.zf) goto L_1006ae54;
  /* 1006ae75 jmp 0x1006ae28 */
  goto L_1006ae28;
L_1006ae77:;
  /* 1006ae77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006ae79 pop esi */
  ESI = (pop32());
  /* 1006ae7a pop ebx */
  EBX = (pop32());
  /* 1006ae7b pop edi */
  EDI = (pop32());
  /* 1006ae7c mov al, dl */
  AL = (DL);
  /* 1006ae7e jmp 0x1006ad56 */
  jmp_ind(0x1006ad56u); return;
L_1006ae83:;
  /* 1006ae83 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 1006ae86 pop esi */
  ESI = (pop32());
  /* 1006ae87 pop ebx */
  EBX = (pop32());
  /* 1006ae88 pop edi */
  EDI = (pop32());
  /* 1006ae89 ret  */
  ESPCHK(0x1006ae10u, _esp0);
  ESP += 4; return;
L_1006ae8a:;
  /* 1006ae8a mov eax, edi */
  EAX = (EDI);
  /* 1006ae8c pop esi */
  ESI = (pop32());
  /* 1006ae8d pop ebx */
  EBX = (pop32());
  /* 1006ae8e pop edi */
  EDI = (pop32());
  /* 1006ae8f ret  */
  ESPCHK(0x1006ae10u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1006ae90 (56 bytes, 31 insns) */
void f_1006ae90(void) {
  FTRACE(0x1006ae90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006ae90 push ebp */
  push32((uint32_t)(EBP));
  /* 1006ae91 mov ebp, esp */
  EBP = (ESP);
  /* 1006ae93 push edi */
  push32((uint32_t)(EDI));
  /* 1006ae94 push esi */
  push32((uint32_t)(ESI));
  /* 1006ae95 push ebx */
  push32((uint32_t)(EBX));
  /* 1006ae96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1006ae99 jecxz 0x1006aec1 */
  x86_unimpl("jecxz @ 0x1006ae99");
  /* 1006ae9b mov ebx, ecx */
  EBX = (ECX);
  /* 1006ae9d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1006aea0 mov esi, edi */
  ESI = (EDI);
  /* 1006aea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006aea4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1006aea6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1006aea8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006aeaa mov edi, esi */
  EDI = (ESI);
  /* 1006aeac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1006aeaf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1006aeb1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1006aeb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1006aeb6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006aeb9 ja 0x1006aebf */
  if ((!C.cf&&!C.zf)) goto L_1006aebf;
  /* 1006aebb je 0x1006aec1 */
  if (C.zf) goto L_1006aec1;
  /* 1006aebd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1006aebe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1006aebf:;
  /* 1006aebf not ecx */
  ECX = (~(ECX));
L_1006aec1:;
  /* 1006aec1 mov eax, ecx */
  EAX = (ECX);
  /* 1006aec3 pop ebx */
  EBX = (pop32());
  /* 1006aec4 pop esi */
  ESI = (pop32());
  /* 1006aec5 pop edi */
  EDI = (pop32());
  /* 1006aec6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006aec7 ret  */
  ESPCHK(0x1006ae90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aed0 @ 0x1006aed0 (47 bytes, 17 insns) */
void f_1006aed0(void) {
  FTRACE(0x1006aed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006aed0 push ecx */
  push32((uint32_t)(ECX));
  /* 1006aed1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006aed6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1006aeda jb 0x1006aef0 */
  if (C.cf) goto L_1006aef0;
L_1006aedc:;
  /* 1006aedc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006aee2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006aee7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1006aee9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006aeee jae 0x1006aedc */
  if (!C.cf) goto L_1006aedc;
L_1006aef0:;
  /* 1006aef0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006aef2 mov eax, esp */
  EAX = (ESP);
  /* 1006aef4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1006aef6 mov esp, ecx */
  ESP = (ECX);
  /* 1006aef8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1006aefa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1006aefd push eax */
  push32((uint32_t)(EAX));
  /* 1006aefe ret  */
  ESPCHK(0x1006aed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aeff @ 0x1006aeff (72 bytes, 17 insns) */
void f_1006aeff(void) {
  FTRACE(0x1006aeffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006aeff push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1006af04 push 0 */
  push32((uint32_t)(0x0u));
  /* 1006af06 push dword ptr [0x10077c24] */
  push32((uint32_t)(r32((uint32_t)(0x10077c24))));
  /* 1006af0c call dword ptr [0x1006e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e098))), 0x1006af12u);
  /* 1006af12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006af14 mov dword ptr [0x100769dc], eax */
  w32((uint32_t)(0x100769dc), (EAX));
  /* 1006af19 jne 0x1006af1c */
  if (!C.zf) goto L_1006af1c;
  /* 1006af1b ret  */
  ESPCHK(0x1006aeffu, _esp0);
  ESP += 4; return;
L_1006af1c:;
  /* 1006af1c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006af20 and dword ptr [0x100769d4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100769d4)))&(0x0u); w32((uint32_t)(0x100769d4), (_r)); fl_logic(_r,32); }
  /* 1006af27 and dword ptr [0x100769d8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100769d8)))&(0x0u); w32((uint32_t)(0x100769d8), (_r)); fl_logic(_r,32); }
  /* 1006af2e push 1 */
  push32((uint32_t)(0x1u));
  /* 1006af30 mov dword ptr [0x100769d0], eax */
  w32((uint32_t)(0x100769d0), (EAX));
  /* 1006af35 mov dword ptr [0x100769e0], ecx */
  w32((uint32_t)(0x100769e0), (ECX));
  /* 1006af3b mov dword ptr [0x100769c8], 0x10 */
  w32((uint32_t)(0x100769c8), (0x10u));
  /* 1006af45 pop eax */
  EAX = (pop32());
  /* 1006af46 ret  */
  ESPCHK(0x1006aeffu, _esp0);
  ESP += 4; return;
}

/* FUN_1000af47 @ 0x1006af47 (43 bytes, 14 insns) */
void f_1006af47(void) {
  FTRACE(0x1006af47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006af47 mov eax, dword ptr [0x100769d8] */
  EAX = (r32((uint32_t)(0x100769d8)));
  /* 1006af4c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1006af4f mov eax, dword ptr [0x100769dc] */
  EAX = (r32((uint32_t)(0x100769dc)));
  /* 1006af54 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_1006af57:;
  /* 1006af57 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006af59 jae 0x1006af6f */
  if (!C.cf) goto L_1006af6f;
  /* 1006af5b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006af5f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006af62 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006af68 jb 0x1006af71 */
  if (C.cf) goto L_1006af71;
  /* 1006af6a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006af6d jmp 0x1006af57 */
  goto L_1006af57;
L_1006af6f:;
  /* 1006af6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1006af71:;
  /* 1006af71 ret  */
  ESPCHK(0x1006af47u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af72 @ 0x1006af72 (809 bytes, 265 insns) */
void f_1006af72(void) {
  FTRACE(0x1006af72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006af72 push ebp */
  push32((uint32_t)(EBP));
  /* 1006af73 mov ebp, esp */
  EBP = (ESP);
  /* 1006af75 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006af78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006af7b push ebx */
  push32((uint32_t)(EBX));
  /* 1006af7c push esi */
  push32((uint32_t)(ESI));
  /* 1006af7d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1006af80 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1006af83 push edi */
  push32((uint32_t)(EDI));
  /* 1006af84 mov edi, esi */
  EDI = (ESI);
  /* 1006af86 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006af89 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006af8c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1006af8f mov ecx, edi */
  ECX = (EDI);
  /* 1006af91 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1006af97 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1006af9e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1006afa1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1006afa3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1006afa4 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 1006afa7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1006afaa jne 0x1006b296 */
  if (!C.zf) goto L_1006b296;
  /* 1006afb0 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 1006afb3 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 1006afb6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1006afb9 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 1006afbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1006afbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1006afc2 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1006afc5 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 1006afc8 jne 0x1006b048 */
  if (!C.zf) goto L_1006b048;
  /* 1006afca sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1006afcd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1006afce cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006afd1 jbe 0x1006afd6 */
  if ((C.cf||C.zf)) goto L_1006afd6;
  /* 1006afd3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1006afd5 pop edx */
  EDX = (pop32());
L_1006afd6:;
  /* 1006afd6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1006afd9 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006afdc jne 0x1006b02a */
  if (!C.zf) goto L_1006b02a;
  /* 1006afde cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006afe1 jae 0x1006b001 */
  if (!C.cf) goto L_1006b001;
  /* 1006afe3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1006afe8 mov ecx, edx */
  ECX = (EDX);
  /* 1006afea shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1006afec lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1006aff0 not ebx */
  EBX = (~(EBX));
  /* 1006aff2 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1006aff6 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1006aff8 jne 0x1006b022 */
  if (!C.zf) goto L_1006b022;
  /* 1006affa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006affd and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1006afff jmp 0x1006b022 */
  goto L_1006b022;
L_1006b001:;
  /* 1006b001 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1006b004 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1006b009 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1006b00b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1006b00f not ebx */
  EBX = (~(EBX));
  /* 1006b011 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1006b018 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1006b01a jne 0x1006b022 */
  if (!C.zf) goto L_1006b022;
  /* 1006b01c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006b01f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1006b022:;
  /* 1006b022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006b025 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006b028 jmp 0x1006b02d */
  goto L_1006b02d;
L_1006b02a:;
  /* 1006b02a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_1006b02d:;
  /* 1006b02d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 1006b030 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 1006b033 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b036 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 1006b039 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006b03c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1006b03f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 1006b042 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 1006b045 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_1006b048:;
  /* 1006b048 mov edx, ecx */
  EDX = (ECX);
  /* 1006b04a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1006b04d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1006b04e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b051 jbe 0x1006b056 */
  if ((C.cf||C.zf)) goto L_1006b056;
  /* 1006b053 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1006b055 pop edx */
  EDX = (pop32());
L_1006b056:;
  /* 1006b056 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1006b059 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 1006b05c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 1006b05f jne 0x1006b0f9 */
  if (!C.zf) goto L_1006b0f9;
  /* 1006b065 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006b068 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1006b06b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 1006b06e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1006b070 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1006b073 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1006b074 pop esi */
  ESI = (pop32());
  /* 1006b075 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b077 jbe 0x1006b07b */
  if ((C.cf||C.zf)) goto L_1006b07b;
  /* 1006b079 mov ebx, esi */
  EBX = (ESI);
L_1006b07b:;
  /* 1006b07b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b07e mov edx, ecx */
  EDX = (ECX);
  /* 1006b080 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1006b083 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1006b086 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1006b087 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b089 jbe 0x1006b08d */
  if ((C.cf||C.zf)) goto L_1006b08d;
  /* 1006b08b mov edx, esi */
  EDX = (ESI);
L_1006b08d:;
  /* 1006b08d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b08f je 0x1006b0f4 */
  if (C.zf) goto L_1006b0f4;
  /* 1006b091 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006b094 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1006b097 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b09a jne 0x1006b0dc */
  if (!C.zf) goto L_1006b0dc;
  /* 1006b09c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b09f jae 0x1006b0bd */
  if (!C.cf) goto L_1006b0bd;
  /* 1006b0a1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1006b0a6 mov ecx, ebx */
  ECX = (EBX);
  /* 1006b0a8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1006b0aa not esi */
  ESI = (~(ESI));
  /* 1006b0ac and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1006b0b0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1006b0b4 jne 0x1006b0dc */
  if (!C.zf) goto L_1006b0dc;
  /* 1006b0b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006b0b9 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1006b0bb jmp 0x1006b0dc */
  goto L_1006b0dc;
L_1006b0bd:;
  /* 1006b0bd lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 1006b0c0 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1006b0c5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1006b0c7 not esi */
  ESI = (~(ESI));
  /* 1006b0c9 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1006b0d0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1006b0d4 jne 0x1006b0dc */
  if (!C.zf) goto L_1006b0dc;
  /* 1006b0d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006b0d9 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1006b0dc:;
  /* 1006b0dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006b0df mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 1006b0e2 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1006b0e5 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 1006b0e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006b0eb mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1006b0ee mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1006b0f1 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_1006b0f4:;
  /* 1006b0f4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1006b0f7 jmp 0x1006b0fc */
  goto L_1006b0fc;
L_1006b0f9:;
  /* 1006b0f9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1006b0fc:;
  /* 1006b0fc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b100 jne 0x1006b10a */
  if (!C.zf) goto L_1006b10a;
  /* 1006b102 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b104 je 0x1006b18b */
  if (C.zf) goto L_1006b18b;
L_1006b10a:;
  /* 1006b10a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1006b10d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1006b111 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 1006b114 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 1006b117 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 1006b11a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1006b11d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1006b120 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 1006b123 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1006b126 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b129 jne 0x1006b18b */
  if (!C.zf) goto L_1006b18b;
  /* 1006b12b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 1006b12f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b132 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 1006b135 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1006b137 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 1006b13b jae 0x1006b162 */
  if (!C.cf) goto L_1006b162;
  /* 1006b13d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006b141 jne 0x1006b151 */
  if (!C.zf) goto L_1006b151;
  /* 1006b143 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1006b148 mov ecx, edx */
  ECX = (EDX);
  /* 1006b14a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1006b14c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006b14f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1006b151:;
  /* 1006b151 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1006b156 mov ecx, edx */
  ECX = (EDX);
  /* 1006b158 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1006b15a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 1006b15e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1006b160 jmp 0x1006b18b */
  goto L_1006b18b;
L_1006b162:;
  /* 1006b162 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006b166 jne 0x1006b178 */
  if (!C.zf) goto L_1006b178;
  /* 1006b168 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1006b16b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1006b170 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1006b172 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006b175 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1006b178:;
  /* 1006b178 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1006b17b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1006b180 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1006b182 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 1006b189 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_1006b18b:;
  /* 1006b18b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006b18e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1006b190 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 1006b194 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1006b197 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 1006b199 jne 0x1006b296 */
  if (!C.zf) goto L_1006b296;
  /* 1006b19f mov eax, dword ptr [0x100769d4] */
  EAX = (r32((uint32_t)(0x100769d4)));
  /* 1006b1a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006b1a6 je 0x1006b288 */
  if (C.zf) goto L_1006b288;
  /* 1006b1ac mov ecx, dword ptr [0x100769cc] */
  ECX = (r32((uint32_t)(0x100769cc)));
  /* 1006b1b2 mov esi, dword ptr [0x1006e07c] */
  ESI = (r32((uint32_t)(0x1006e07c)));
  /* 1006b1b8 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1006b1bb add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b1be mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1006b1c3 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1006b1c8 push ebx */
  push32((uint32_t)(EBX));
  /* 1006b1c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1006b1ca call esi */
  call_ind((uint32_t)(ESI), 0x1006b1ccu);
  /* 1006b1cc mov ecx, dword ptr [0x100769cc] */
  ECX = (r32((uint32_t)(0x100769cc)));
  /* 1006b1d2 mov eax, dword ptr [0x100769d4] */
  EAX = (r32((uint32_t)(0x100769d4)));
  /* 1006b1d7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1006b1dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1006b1de or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1006b1e1 mov eax, dword ptr [0x100769d4] */
  EAX = (r32((uint32_t)(0x100769d4)));
  /* 1006b1e6 mov ecx, dword ptr [0x100769cc] */
  ECX = (r32((uint32_t)(0x100769cc)));
  /* 1006b1ec mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1006b1ef and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1006b1f7 mov eax, dword ptr [0x100769d4] */
  EAX = (r32((uint32_t)(0x100769d4)));
  /* 1006b1fc mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1006b1ff dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1006b202 mov eax, dword ptr [0x100769d4] */
  EAX = (r32((uint32_t)(0x100769d4)));
  /* 1006b207 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1006b20a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006b20e jne 0x1006b219 */
  if (!C.zf) goto L_1006b219;
  /* 1006b210 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1006b214 mov eax, dword ptr [0x100769d4] */
  EAX = (r32((uint32_t)(0x100769d4)));
L_1006b219:;
  /* 1006b219 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b21d jne 0x1006b288 */
  if (!C.zf) goto L_1006b288;
  /* 1006b21f push ebx */
  push32((uint32_t)(EBX));
  /* 1006b220 push 0 */
  push32((uint32_t)(0x0u));
  /* 1006b222 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 1006b225 call esi */
  call_ind((uint32_t)(ESI), 0x1006b227u);
  /* 1006b227 mov eax, dword ptr [0x100769d4] */
  EAX = (r32((uint32_t)(0x100769d4)));
  /* 1006b22c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1006b22f push 0 */
  push32((uint32_t)(0x0u));
  /* 1006b231 push dword ptr [0x10077c24] */
  push32((uint32_t)(r32((uint32_t)(0x10077c24))));
  /* 1006b237 call dword ptr [0x1006e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e080))), 0x1006b23du);
  /* 1006b23d mov eax, dword ptr [0x100769d8] */
  EAX = (r32((uint32_t)(0x100769d8)));
  /* 1006b242 mov edx, dword ptr [0x100769dc] */
  EDX = (r32((uint32_t)(0x100769dc)));
  /* 1006b248 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1006b24b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1006b24e mov ecx, eax */
  ECX = (EAX);
  /* 1006b250 mov eax, dword ptr [0x100769d4] */
  EAX = (r32((uint32_t)(0x100769d4)));
  /* 1006b255 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006b257 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 1006b25b push ecx */
  push32((uint32_t)(ECX));
  /* 1006b25c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1006b25f push ecx */
  push32((uint32_t)(ECX));
  /* 1006b260 push eax */
  push32((uint32_t)(EAX));
  /* 1006b261 call 0x10069c40 */
  push32(0x1006b266u); f_10069c40();
  /* 1006b266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006b269 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b26c dec dword ptr [0x100769d8] */
  { uint32_t _r=(r32((uint32_t)(0x100769d8)))-1; w32((uint32_t)(0x100769d8), (_r)); fl_dec(_r,32); }
  /* 1006b272 cmp eax, dword ptr [0x100769d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x100769d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b278 jbe 0x1006b27e */
  if ((C.cf||C.zf)) goto L_1006b27e;
  /* 1006b27a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_1006b27e:;
  /* 1006b27e mov eax, dword ptr [0x100769dc] */
  EAX = (r32((uint32_t)(0x100769dc)));
  /* 1006b283 mov dword ptr [0x100769d0], eax */
  w32((uint32_t)(0x100769d0), (EAX));
L_1006b288:;
  /* 1006b288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006b28b mov dword ptr [0x100769cc], edi */
  w32((uint32_t)(0x100769cc), (EDI));
  /* 1006b291 mov dword ptr [0x100769d4], eax */
  w32((uint32_t)(0x100769d4), (EAX));
L_1006b296:;
  /* 1006b296 pop edi */
  EDI = (pop32());
  /* 1006b297 pop esi */
  ESI = (pop32());
  /* 1006b298 pop ebx */
  EBX = (pop32());
  /* 1006b299 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006b29a ret  */
  ESPCHK(0x1006af72u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b29b @ 0x1006b29b (777 bytes, 275 insns) */
void f_1006b29b(void) {
  FTRACE(0x1006b29bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006b29b push ebp */
  push32((uint32_t)(EBP));
  /* 1006b29c mov ebp, esp */
  EBP = (ESP);
  /* 1006b29e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006b2a1 mov eax, dword ptr [0x100769d8] */
  EAX = (r32((uint32_t)(0x100769d8)));
  /* 1006b2a6 mov edx, dword ptr [0x100769dc] */
  EDX = (r32((uint32_t)(0x100769dc)));
  /* 1006b2ac push ebx */
  push32((uint32_t)(EBX));
  /* 1006b2ad push esi */
  push32((uint32_t)(ESI));
  /* 1006b2ae lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1006b2b1 push edi */
  push32((uint32_t)(EDI));
  /* 1006b2b2 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 1006b2b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006b2b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1006b2bb lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1006b2be and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1006b2c1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1006b2c4 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1006b2c7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1006b2c8 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b2cb jge 0x1006b2db */
  if ((C.sf==C.of)) goto L_1006b2db;
  /* 1006b2cd or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1006b2d0 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1006b2d2 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1006b2d6 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1006b2d9 jmp 0x1006b2eb */
  goto L_1006b2eb;
L_1006b2db:;
  /* 1006b2db add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b2de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1006b2e1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1006b2e3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1006b2e5 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1006b2e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1006b2eb:;
  /* 1006b2eb mov eax, dword ptr [0x100769d0] */
  EAX = (r32((uint32_t)(0x100769d0)));
  /* 1006b2f0 mov ebx, eax */
  EBX = (EAX);
  /* 1006b2f2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b2f4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1006b2f7 jae 0x1006b312 */
  if (!C.cf) goto L_1006b312;
L_1006b2f9:;
  /* 1006b2f9 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1006b2fc mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1006b2fe and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1006b301 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1006b303 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1006b305 jne 0x1006b312 */
  if (!C.zf) goto L_1006b312;
  /* 1006b307 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b30a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b30d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1006b310 jb 0x1006b2f9 */
  if (C.cf) goto L_1006b2f9;
L_1006b312:;
  /* 1006b312 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b315 jne 0x1006b390 */
  if (!C.zf) goto L_1006b390;
  /* 1006b317 mov ebx, edx */
  EBX = (EDX);
L_1006b319:;
  /* 1006b319 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b31b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1006b31e jae 0x1006b335 */
  if (!C.cf) goto L_1006b335;
  /* 1006b320 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1006b323 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1006b325 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1006b328 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1006b32a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1006b32c jne 0x1006b333 */
  if (!C.zf) goto L_1006b333;
  /* 1006b32e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b331 jmp 0x1006b319 */
  goto L_1006b319;
L_1006b333:;
  /* 1006b333 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1006b335:;
  /* 1006b335 jne 0x1006b390 */
  if (!C.zf) goto L_1006b390;
L_1006b337:;
  /* 1006b337 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b33a jae 0x1006b34d */
  if (!C.cf) goto L_1006b34d;
  /* 1006b33c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b340 jne 0x1006b34a */
  if (!C.zf) goto L_1006b34a;
  /* 1006b342 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b345 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1006b348 jmp 0x1006b337 */
  goto L_1006b337;
L_1006b34a:;
  /* 1006b34a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1006b34d:;
  /* 1006b34d jne 0x1006b375 */
  if (!C.zf) goto L_1006b375;
  /* 1006b34f mov ebx, edx */
  EBX = (EDX);
L_1006b351:;
  /* 1006b351 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b353 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1006b356 jae 0x1006b365 */
  if (!C.cf) goto L_1006b365;
  /* 1006b358 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b35c jne 0x1006b363 */
  if (!C.zf) goto L_1006b363;
  /* 1006b35e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b361 jmp 0x1006b351 */
  goto L_1006b351;
L_1006b363:;
  /* 1006b363 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1006b365:;
  /* 1006b365 jne 0x1006b375 */
  if (!C.zf) goto L_1006b375;
  /* 1006b367 call 0x1006b5a4 */
  push32(0x1006b36cu); f_1006b5a4();
  /* 1006b36c mov ebx, eax */
  EBX = (EAX);
  /* 1006b36e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1006b370 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1006b373 je 0x1006b389 */
  if (C.zf) goto L_1006b389;
L_1006b375:;
  /* 1006b375 push ebx */
  push32((uint32_t)(EBX));
  /* 1006b376 call 0x1006b655 */
  push32(0x1006b37bu); f_1006b655();
  /* 1006b37b pop ecx */
  ECX = (pop32());
  /* 1006b37c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1006b37f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1006b381 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1006b384 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b387 jne 0x1006b390 */
  if (!C.zf) goto L_1006b390;
L_1006b389:;
  /* 1006b389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006b38b jmp 0x1006b59f */
  goto L_1006b59f;
L_1006b390:;
  /* 1006b390 mov dword ptr [0x100769d0], ebx */
  w32((uint32_t)(0x100769d0), (EBX));
  /* 1006b396 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1006b399 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1006b39b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b39e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1006b3a1 je 0x1006b3b7 */
  if (C.zf) goto L_1006b3b7;
  /* 1006b3a3 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1006b3aa mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1006b3ae and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1006b3b1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1006b3b3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1006b3b5 jne 0x1006b3ee */
  if (!C.zf) goto L_1006b3ee;
L_1006b3b7:;
  /* 1006b3b7 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1006b3bd mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1006b3c0 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1006b3c3 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 1006b3c6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006b3ca lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1006b3cd or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1006b3cf mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1006b3d2 jne 0x1006b3eb */
  if (!C.zf) goto L_1006b3eb;
L_1006b3d4:;
  /* 1006b3d4 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 1006b3da inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1006b3dd and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1006b3e0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b3e3 mov edi, esi */
  EDI = (ESI);
  /* 1006b3e5 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 1006b3e7 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 1006b3e9 je 0x1006b3d4 */
  if (C.zf) goto L_1006b3d4;
L_1006b3eb:;
  /* 1006b3eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1006b3ee:;
  /* 1006b3ee mov ecx, edx */
  ECX = (EDX);
  /* 1006b3f0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1006b3f2 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1006b3f8 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1006b3ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1006b402 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1006b406 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1006b408 jne 0x1006b417 */
  if (!C.zf) goto L_1006b417;
  /* 1006b40a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1006b411 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1006b413 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1006b416 pop edi */
  EDI = (pop32());
L_1006b417:;
  /* 1006b417 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1006b419 jl 0x1006b420 */
  if ((C.sf!=C.of)) goto L_1006b420;
  /* 1006b41b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1006b41d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006b41e jmp 0x1006b417 */
  goto L_1006b417;
L_1006b420:;
  /* 1006b420 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1006b423 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 1006b427 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1006b429 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006b42c mov esi, ecx */
  ESI = (ECX);
  /* 1006b42e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1006b431 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1006b434 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1006b435 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b438 jle 0x1006b43d */
  if ((C.zf||C.sf!=C.of)) goto L_1006b43d;
  /* 1006b43a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1006b43c pop esi */
  ESI = (pop32());
L_1006b43d:;
  /* 1006b43d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b43f je 0x1006b552 */
  if (C.zf) goto L_1006b552;
  /* 1006b445 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1006b448 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b44b jne 0x1006b4ae */
  if (!C.zf) goto L_1006b4ae;
  /* 1006b44d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b450 jge 0x1006b47d */
  if ((C.sf==C.of)) goto L_1006b47d;
  /* 1006b452 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1006b457 mov ecx, edi */
  ECX = (EDI);
  /* 1006b459 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1006b45b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006b45e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1006b462 not ebx */
  EBX = (~(EBX));
  /* 1006b464 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1006b467 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 1006b46b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1006b46f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1006b471 jne 0x1006b4ab */
  if (!C.zf) goto L_1006b4ab;
  /* 1006b473 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006b476 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1006b479 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 1006b47b jmp 0x1006b4ae */
  goto L_1006b4ae;
L_1006b47d:;
  /* 1006b47d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1006b480 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1006b485 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1006b487 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006b48a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1006b48e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1006b495 not ebx */
  EBX = (~(EBX));
  /* 1006b497 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1006b499 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1006b49b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1006b49e jne 0x1006b4ab */
  if (!C.zf) goto L_1006b4ab;
  /* 1006b4a0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006b4a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1006b4a6 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1006b4a9 jmp 0x1006b4ae */
  goto L_1006b4ae;
L_1006b4ab:;
  /* 1006b4ab mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1006b4ae:;
  /* 1006b4ae mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1006b4b1 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 1006b4b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b4b8 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 1006b4bb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1006b4be mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1006b4c1 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 1006b4c4 je 0x1006b55e */
  if (C.zf) goto L_1006b55e;
  /* 1006b4ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1006b4cd mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1006b4d1 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 1006b4d4 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 1006b4d7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1006b4da mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1006b4dd mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1006b4e0 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1006b4e3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1006b4e6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b4e9 jne 0x1006b54f */
  if (!C.zf) goto L_1006b54f;
  /* 1006b4eb mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1006b4ef cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b4f2 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 1006b4f5 jge 0x1006b520 */
  if ((C.sf==C.of)) goto L_1006b520;
  /* 1006b4f7 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1006b4f9 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006b4fd mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1006b501 jne 0x1006b50e */
  if (!C.zf) goto L_1006b50e;
  /* 1006b503 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1006b508 mov ecx, esi */
  ECX = (ESI);
  /* 1006b50a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1006b50c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1006b50e:;
  /* 1006b50e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1006b513 mov ecx, esi */
  ECX = (ESI);
  /* 1006b515 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1006b517 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006b51a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1006b51e jmp 0x1006b54f */
  goto L_1006b54f;
L_1006b520:;
  /* 1006b520 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1006b522 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006b526 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1006b52a jne 0x1006b539 */
  if (!C.zf) goto L_1006b539;
  /* 1006b52c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1006b52f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1006b534 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1006b536 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_1006b539:;
  /* 1006b539 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006b53c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1006b543 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1006b546 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1006b54b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1006b54d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1006b54f:;
  /* 1006b54f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1006b552:;
  /* 1006b552 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1006b554 je 0x1006b561 */
  if (C.zf) goto L_1006b561;
  /* 1006b556 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1006b558 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1006b55c jmp 0x1006b561 */
  goto L_1006b561;
L_1006b55e:;
  /* 1006b55e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1006b561:;
  /* 1006b561 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1006b564 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b566 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 1006b569 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1006b56b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1006b56f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1006b572 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1006b574 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1006b576 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 1006b579 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1006b57b jne 0x1006b597 */
  if (!C.zf) goto L_1006b597;
  /* 1006b57d cmp ebx, dword ptr [0x100769d4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100769d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b583 jne 0x1006b597 */
  if (!C.zf) goto L_1006b597;
  /* 1006b585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006b588 cmp ecx, dword ptr [0x100769cc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x100769cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b58e jne 0x1006b597 */
  if (!C.zf) goto L_1006b597;
  /* 1006b590 and dword ptr [0x100769d4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100769d4)))&(0x0u); w32((uint32_t)(0x100769d4), (_r)); fl_logic(_r,32); }
L_1006b597:;
  /* 1006b597 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006b59a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1006b59c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1006b59f:;
  /* 1006b59f pop edi */
  EDI = (pop32());
  /* 1006b5a0 pop esi */
  ESI = (pop32());
  /* 1006b5a1 pop ebx */
  EBX = (pop32());
  /* 1006b5a2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006b5a3 ret  */
  ESPCHK(0x1006b29bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5a4 @ 0x1006b5a4 (177 bytes, 53 insns) */
void f_1006b5a4(void) {
  FTRACE(0x1006b5a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006b5a4 mov eax, dword ptr [0x100769d8] */
  EAX = (r32((uint32_t)(0x100769d8)));
  /* 1006b5a9 mov ecx, dword ptr [0x100769c8] */
  ECX = (r32((uint32_t)(0x100769c8)));
  /* 1006b5af push esi */
  push32((uint32_t)(ESI));
  /* 1006b5b0 push edi */
  push32((uint32_t)(EDI));
  /* 1006b5b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1006b5b3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b5b5 jne 0x1006b5e7 */
  if (!C.zf) goto L_1006b5e7;
  /* 1006b5b7 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 1006b5bb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1006b5be push eax */
  push32((uint32_t)(EAX));
  /* 1006b5bf push dword ptr [0x100769dc] */
  push32((uint32_t)(r32((uint32_t)(0x100769dc))));
  /* 1006b5c5 push edi */
  push32((uint32_t)(EDI));
  /* 1006b5c6 push dword ptr [0x10077c24] */
  push32((uint32_t)(r32((uint32_t)(0x10077c24))));
  /* 1006b5cc call dword ptr [0x1006e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0ac))), 0x1006b5d2u);
  /* 1006b5d2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b5d4 je 0x1006b637 */
  if (C.zf) goto L_1006b637;
  /* 1006b5d6 add dword ptr [0x100769c8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x100769c8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x100769c8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1006b5dd mov dword ptr [0x100769dc], eax */
  w32((uint32_t)(0x100769dc), (EAX));
  /* 1006b5e2 mov eax, dword ptr [0x100769d8] */
  EAX = (r32((uint32_t)(0x100769d8)));
L_1006b5e7:;
  /* 1006b5e7 mov ecx, dword ptr [0x100769dc] */
  ECX = (r32((uint32_t)(0x100769dc)));
  /* 1006b5ed push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1006b5f2 push 8 */
  push32((uint32_t)(0x8u));
  /* 1006b5f4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1006b5f7 push dword ptr [0x10077c24] */
  push32((uint32_t)(r32((uint32_t)(0x10077c24))));
  /* 1006b5fd lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1006b600 call dword ptr [0x1006e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e098))), 0x1006b606u);
  /* 1006b606 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b608 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 1006b60b je 0x1006b637 */
  if (C.zf) goto L_1006b637;
  /* 1006b60d push 4 */
  push32((uint32_t)(0x4u));
  /* 1006b60f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1006b614 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1006b619 push edi */
  push32((uint32_t)(EDI));
  /* 1006b61a call dword ptr [0x1006e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0a8))), 0x1006b620u);
  /* 1006b620 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b622 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1006b625 jne 0x1006b63b */
  if (!C.zf) goto L_1006b63b;
  /* 1006b627 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1006b62a push edi */
  push32((uint32_t)(EDI));
  /* 1006b62b push dword ptr [0x10077c24] */
  push32((uint32_t)(r32((uint32_t)(0x10077c24))));
  /* 1006b631 call dword ptr [0x1006e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e080))), 0x1006b637u);
L_1006b637:;
  /* 1006b637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006b639 jmp 0x1006b652 */
  goto L_1006b652;
L_1006b63b:;
  /* 1006b63b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1006b63f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1006b641 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 1006b644 inc dword ptr [0x100769d8] */
  { uint32_t _r=(r32((uint32_t)(0x100769d8)))+1; w32((uint32_t)(0x100769d8), (_r)); fl_inc(_r,32); }
  /* 1006b64a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1006b64d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1006b650 mov eax, esi */
  EAX = (ESI);
L_1006b652:;
  /* 1006b652 pop edi */
  EDI = (pop32());
  /* 1006b653 pop esi */
  ESI = (pop32());
  /* 1006b654 ret  */
  ESPCHK(0x1006b5a4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b655 @ 0x1006b655 (251 bytes, 85 insns) */
void f_1006b655(void) {
  FTRACE(0x1006b655u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006b655 push ebp */
  push32((uint32_t)(EBP));
  /* 1006b656 mov ebp, esp */
  EBP = (ESP);
  /* 1006b658 push ecx */
  push32((uint32_t)(ECX));
  /* 1006b659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006b65c push ebx */
  push32((uint32_t)(EBX));
  /* 1006b65d push esi */
  push32((uint32_t)(ESI));
  /* 1006b65e push edi */
  push32((uint32_t)(EDI));
  /* 1006b65f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 1006b662 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 1006b665 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1006b667:;
  /* 1006b667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006b669 jl 0x1006b670 */
  if ((C.sf!=C.of)) goto L_1006b670;
  /* 1006b66b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1006b66d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1006b66e jmp 0x1006b667 */
  goto L_1006b667;
L_1006b670:;
  /* 1006b670 mov eax, ebx */
  EAX = (EBX);
  /* 1006b672 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1006b674 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1006b67a pop edx */
  EDX = (pop32());
  /* 1006b67b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 1006b682 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1006b685:;
  /* 1006b685 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 1006b688 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 1006b68b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b68e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1006b68f jne 0x1006b685 */
  if (!C.zf) goto L_1006b685;
  /* 1006b691 mov edi, ebx */
  EDI = (EBX);
  /* 1006b693 push 4 */
  push32((uint32_t)(0x4u));
  /* 1006b695 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1006b698 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b69b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1006b6a0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1006b6a5 push edi */
  push32((uint32_t)(EDI));
  /* 1006b6a6 call dword ptr [0x1006e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0a8))), 0x1006b6acu);
  /* 1006b6ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006b6ae jne 0x1006b6b8 */
  if (!C.zf) goto L_1006b6b8;
  /* 1006b6b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1006b6b3 jmp 0x1006b74b */
  goto L_1006b74b;
L_1006b6b8:;
  /* 1006b6b8 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1006b6be cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b6c0 ja 0x1006b6fe */
  if ((!C.cf&&!C.zf)) goto L_1006b6fe;
  /* 1006b6c2 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_1006b6c5:;
  /* 1006b6c5 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 1006b6c9 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1006b6d0 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 1006b6d6 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1006b6dd mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1006b6df lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 1006b6e5 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1006b6e8 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 1006b6f2 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b6f7 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 1006b6fa cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b6fc jbe 0x1006b6c5 */
  if ((C.cf||C.zf)) goto L_1006b6c5;
L_1006b6fe:;
  /* 1006b6fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006b701 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 1006b704 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b709 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006b70b pop edi */
  EDI = (pop32());
  /* 1006b70c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1006b70f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1006b712 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 1006b715 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1006b718 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1006b71b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1006b720 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 1006b727 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 1006b72a mov cl, al */
  CL = (AL);
  /* 1006b72c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1006b72e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006b730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006b733 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 1006b736 jne 0x1006b73b */
  if (!C.zf) goto L_1006b73b;
  /* 1006b738 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_1006b73b:;
  /* 1006b73b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1006b740 mov ecx, ebx */
  ECX = (EBX);
  /* 1006b742 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1006b744 not edx */
  EDX = (~(EDX));
  /* 1006b746 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1006b749 mov eax, ebx */
  EAX = (EBX);
L_1006b74b:;
  /* 1006b74b pop edi */
  EDI = (pop32());
  /* 1006b74c pop esi */
  ESI = (pop32());
  /* 1006b74d pop ebx */
  EBX = (pop32());
  /* 1006b74e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006b74f ret  */
  ESPCHK(0x1006b655u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x1006b750 (324 bytes, 102 insns) */
void f_1006b750(void) {
  FTRACE(0x1006b750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006b750 cmp dword ptr [0x10070e80], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10070e80))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b757 push ebx */
  push32((uint32_t)(EBX));
  /* 1006b758 push ebp */
  push32((uint32_t)(EBP));
  /* 1006b759 push esi */
  push32((uint32_t)(ESI));
  /* 1006b75a push edi */
  push32((uint32_t)(EDI));
  /* 1006b75b jne 0x1006b764 */
  if (!C.zf) goto L_1006b764;
  /* 1006b75d mov esi, 0x10070e70 */
  ESI = (0x10070e70u);
  /* 1006b762 jmp 0x1006b781 */
  goto L_1006b781;
L_1006b764:;
  /* 1006b764 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 1006b769 push 0 */
  push32((uint32_t)(0x0u));
  /* 1006b76b push dword ptr [0x10077c24] */
  push32((uint32_t)(r32((uint32_t)(0x10077c24))));
  /* 1006b771 call dword ptr [0x1006e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e098))), 0x1006b777u);
  /* 1006b777 mov esi, eax */
  ESI = (EAX);
  /* 1006b779 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1006b77b je 0x1006b88d */
  if (C.zf) goto L_1006b88d;
L_1006b781:;
  /* 1006b781 mov ebp, dword ptr [0x1006e0a8] */
  EBP = (r32((uint32_t)(0x1006e0a8)));
  /* 1006b787 push 4 */
  push32((uint32_t)(0x4u));
  /* 1006b789 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1006b78e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 1006b793 push 0 */
  push32((uint32_t)(0x0u));
  /* 1006b795 call ebp */
  call_ind((uint32_t)(EBP), 0x1006b797u);
  /* 1006b797 mov edi, eax */
  EDI = (EAX);
  /* 1006b799 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1006b79b je 0x1006b876 */
  if (C.zf) goto L_1006b876;
  /* 1006b7a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 1006b7a3 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 1006b7a8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1006b7ad push ebx */
  push32((uint32_t)(EBX));
  /* 1006b7ae push edi */
  push32((uint32_t)(EDI));
  /* 1006b7af call ebp */
  call_ind((uint32_t)(EBP), 0x1006b7b1u);
  /* 1006b7b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006b7b3 je 0x1006b868 */
  if (C.zf) goto L_1006b868;
  /* 1006b7b9 mov eax, 0x10070e70 */
  EAX = (0x10070e70u);
  /* 1006b7be cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b7c0 jne 0x1006b7e0 */
  if (!C.zf) goto L_1006b7e0;
  /* 1006b7c2 cmp dword ptr [0x10070e70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10070e70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b7c9 jne 0x1006b7d0 */
  if (!C.zf) goto L_1006b7d0;
  /* 1006b7cb mov dword ptr [0x10070e70], eax */
  w32((uint32_t)(0x10070e70), (EAX));
L_1006b7d0:;
  /* 1006b7d0 cmp dword ptr [0x10070e74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10070e74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b7d7 jne 0x1006b7f5 */
  if (!C.zf) goto L_1006b7f5;
  /* 1006b7d9 mov dword ptr [0x10070e74], eax */
  w32((uint32_t)(0x10070e74), (EAX));
  /* 1006b7de jmp 0x1006b7f5 */
  goto L_1006b7f5;
L_1006b7e0:;
  /* 1006b7e0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1006b7e2 mov eax, dword ptr [0x10070e74] */
  EAX = (r32((uint32_t)(0x10070e74)));
  /* 1006b7e7 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1006b7ea mov dword ptr [0x10070e74], esi */
  w32((uint32_t)(0x10070e74), (ESI));
  /* 1006b7f0 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1006b7f3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1006b7f5:;
  /* 1006b7f5 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 1006b7fb lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 1006b801 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 1006b804 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 1006b807 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 1006b80a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 1006b80d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1006b810 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 1006b812 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_1006b817:;
  /* 1006b817 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1006b819 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b81c setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 1006b81f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1006b820 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1006b822 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1006b823 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1006b824 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1006b826 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1006b829 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b82c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b832 jl 0x1006b817 */
  if ((C.sf!=C.of)) goto L_1006b817;
  /* 1006b834 push ebx */
  push32((uint32_t)(EBX));
  /* 1006b835 push 0 */
  push32((uint32_t)(0x0u));
  /* 1006b837 push edi */
  push32((uint32_t)(EDI));
  /* 1006b838 call 0x10069be0 */
  push32(0x1006b83du); f_10069be0();
  /* 1006b83d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006b840:;
  /* 1006b840 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1006b843 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b845 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b847 jae 0x1006b864 */
  if (!C.cf) goto L_1006b864;
  /* 1006b849 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 1006b850 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1006b853 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1006b855 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 1006b85c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b862 jmp 0x1006b840 */
  goto L_1006b840;
L_1006b864:;
  /* 1006b864 mov eax, esi */
  EAX = (ESI);
  /* 1006b866 jmp 0x1006b88f */
  goto L_1006b88f;
L_1006b868:;
  /* 1006b868 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1006b86d push 0 */
  push32((uint32_t)(0x0u));
  /* 1006b86f push edi */
  push32((uint32_t)(EDI));
  /* 1006b870 call dword ptr [0x1006e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e07c))), 0x1006b876u);
L_1006b876:;
  /* 1006b876 cmp esi, 0x10070e70 */
  { uint32_t _a=(ESI),_b=(0x10070e70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b87c je 0x1006b88d */
  if (C.zf) goto L_1006b88d;
  /* 1006b87e push esi */
  push32((uint32_t)(ESI));
  /* 1006b87f push 0 */
  push32((uint32_t)(0x0u));
  /* 1006b881 push dword ptr [0x10077c24] */
  push32((uint32_t)(r32((uint32_t)(0x10077c24))));
  /* 1006b887 call dword ptr [0x1006e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e080))), 0x1006b88du);
L_1006b88d:;
  /* 1006b88d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1006b88f:;
  /* 1006b88f pop edi */
  EDI = (pop32());
  /* 1006b890 pop esi */
  ESI = (pop32());
  /* 1006b891 pop ebp */
  EBP = (pop32());
  /* 1006b892 pop ebx */
  EBX = (pop32());
  /* 1006b893 ret  */
  ESPCHK(0x1006b750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b894 @ 0x1006b894 (86 bytes, 27 insns) */
void f_1006b894(void) {
  FTRACE(0x1006b894u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006b894 push esi */
  push32((uint32_t)(ESI));
  /* 1006b895 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1006b899 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1006b89e push 0 */
  push32((uint32_t)(0x0u));
  /* 1006b8a0 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1006b8a3 call dword ptr [0x1006e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e07c))), 0x1006b8a9u);
  /* 1006b8a9 cmp dword ptr [0x10072e90], esi */
  { uint32_t _a=(r32((uint32_t)(0x10072e90))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b8af jne 0x1006b8b9 */
  if (!C.zf) goto L_1006b8b9;
  /* 1006b8b1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1006b8b4 mov dword ptr [0x10072e90], eax */
  w32((uint32_t)(0x10072e90), (EAX));
L_1006b8b9:;
  /* 1006b8b9 cmp esi, 0x10070e70 */
  { uint32_t _a=(ESI),_b=(0x10070e70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b8bf je 0x1006b8e1 */
  if (C.zf) goto L_1006b8e1;
  /* 1006b8c1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1006b8c4 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1006b8c6 push esi */
  push32((uint32_t)(ESI));
  /* 1006b8c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1006b8c9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1006b8cb mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1006b8cd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1006b8d0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1006b8d3 push dword ptr [0x10077c24] */
  push32((uint32_t)(r32((uint32_t)(0x10077c24))));
  /* 1006b8d9 call dword ptr [0x1006e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e080))), 0x1006b8dfu);
  /* 1006b8df pop esi */
  ESI = (pop32());
  /* 1006b8e0 ret  */
  ESPCHK(0x1006b894u, _esp0);
  ESP += 4; return;
L_1006b8e1:;
  /* 1006b8e1 or dword ptr [0x10070e80], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10070e80)))|(0xffffffffu); w32((uint32_t)(0x10070e80), (_r)); fl_logic(_r,32); }
  /* 1006b8e8 pop esi */
  ESI = (pop32());
  /* 1006b8e9 ret  */
  ESPCHK(0x1006b894u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8ea @ 0x1006b8ea (194 bytes, 66 insns) */
void f_1006b8ea(void) {
  FTRACE(0x1006b8eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006b8ea push ebp */
  push32((uint32_t)(EBP));
  /* 1006b8eb mov ebp, esp */
  EBP = (ESP);
  /* 1006b8ed push ecx */
  push32((uint32_t)(ECX));
  /* 1006b8ee push ebx */
  push32((uint32_t)(EBX));
  /* 1006b8ef push esi */
  push32((uint32_t)(ESI));
  /* 1006b8f0 mov esi, dword ptr [0x10070e74] */
  ESI = (r32((uint32_t)(0x10070e74)));
  /* 1006b8f6 push edi */
  push32((uint32_t)(EDI));
L_1006b8f7:;
  /* 1006b8f7 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b8fb je 0x1006b995 */
  if (C.zf) goto L_1006b995;
  /* 1006b901 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006b905 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 1006b90b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_1006b910:;
  /* 1006b910 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b916 jne 0x1006b951 */
  if (!C.zf) goto L_1006b951;
  /* 1006b918 mov eax, ebx */
  EAX = (EBX);
  /* 1006b91a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1006b91f add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b922 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1006b927 push eax */
  push32((uint32_t)(EAX));
  /* 1006b928 call dword ptr [0x1006e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e07c))), 0x1006b92eu);
  /* 1006b92e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006b930 je 0x1006b951 */
  if (C.zf) goto L_1006b951;
  /* 1006b932 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 1006b935 dec dword ptr [0x10076824] */
  { uint32_t _r=(r32((uint32_t)(0x10076824)))-1; w32((uint32_t)(0x10076824), (_r)); fl_dec(_r,32); }
  /* 1006b93b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1006b93e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006b940 je 0x1006b946 */
  if (C.zf) goto L_1006b946;
  /* 1006b942 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b944 jbe 0x1006b949 */
  if ((C.cf||C.zf)) goto L_1006b949;
L_1006b946:;
  /* 1006b946 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_1006b949:;
  /* 1006b949 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1006b94c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1006b94f je 0x1006b95e */
  if (C.zf) goto L_1006b95e;
L_1006b951:;
  /* 1006b951 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006b957 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006b95a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1006b95c jge 0x1006b910 */
  if ((C.sf==C.of)) goto L_1006b910;
L_1006b95e:;
  /* 1006b95e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b962 mov ecx, esi */
  ECX = (ESI);
  /* 1006b964 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 1006b967 je 0x1006b995 */
  if (C.zf) goto L_1006b995;
  /* 1006b969 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b96d jne 0x1006b995 */
  if (!C.zf) goto L_1006b995;
  /* 1006b96f push 1 */
  push32((uint32_t)(0x1u));
  /* 1006b971 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 1006b974 pop edx */
  EDX = (pop32());
L_1006b975:;
  /* 1006b975 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b978 jne 0x1006b986 */
  if (!C.zf) goto L_1006b986;
  /* 1006b97a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1006b97b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006b97e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b984 jl 0x1006b975 */
  if ((C.sf!=C.of)) goto L_1006b975;
L_1006b986:;
  /* 1006b986 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b98c jne 0x1006b995 */
  if (!C.zf) goto L_1006b995;
  /* 1006b98e push ecx */
  push32((uint32_t)(ECX));
  /* 1006b98f call 0x1006b894 */
  push32(0x1006b994u); f_1006b894();
  /* 1006b994 pop ecx */
  ECX = (pop32());
L_1006b995:;
  /* 1006b995 cmp esi, dword ptr [0x10070e74] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10070e74))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b99b je 0x1006b9a7 */
  if (C.zf) goto L_1006b9a7;
  /* 1006b99d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b9a1 jg 0x1006b8f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1006b8f7;
L_1006b9a7:;
  /* 1006b9a7 pop edi */
  EDI = (pop32());
  /* 1006b9a8 pop esi */
  ESI = (pop32());
  /* 1006b9a9 pop ebx */
  EBX = (pop32());
  /* 1006b9aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006b9ab ret  */
  ESPCHK(0x1006b8eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9ac @ 0x1006b9ac (87 bytes, 34 insns) */
void f_1006b9ac(void) {
  FTRACE(0x1006b9acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006b9ac mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006b9b0 mov edx, 0x10070e70 */
  EDX = (0x10070e70u);
  /* 1006b9b5 push esi */
  push32((uint32_t)(ESI));
  /* 1006b9b6 mov ecx, edx */
  ECX = (EDX);
L_1006b9b8:;
  /* 1006b9b8 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b9bb jbe 0x1006b9c2 */
  if ((C.cf||C.zf)) goto L_1006b9c2;
  /* 1006b9bd cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b9c0 jb 0x1006b9ca */
  if (C.cf) goto L_1006b9ca;
L_1006b9c2:;
  /* 1006b9c2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1006b9c4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b9c6 je 0x1006b9ff */
  if (C.zf) goto L_1006b9ff;
  /* 1006b9c8 jmp 0x1006b9b8 */
  goto L_1006b9b8;
L_1006b9ca:;
  /* 1006b9ca test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 1006b9cc jne 0x1006b9ff */
  if (!C.zf) goto L_1006b9ff;
  /* 1006b9ce mov esi, eax */
  ESI = (EAX);
  /* 1006b9d0 mov edx, 0x100 */
  EDX = (0x100u);
  /* 1006b9d5 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 1006b9db cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006b9dd jb 0x1006b9ff */
  if (C.cf) goto L_1006b9ff;
  /* 1006b9df mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1006b9e3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1006b9e5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 1006b9e9 mov ecx, eax */
  ECX = (EAX);
  /* 1006b9eb and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 1006b9f0 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006b9f2 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1006b9f4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006b9f6 pop esi */
  ESI = (pop32());
  /* 1006b9f7 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1006b9fa lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 1006b9fe ret  */
  ESPCHK(0x1006b9acu, _esp0);
  ESP += 4; return;
L_1006b9ff:;
  /* 1006b9ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006ba01 pop esi */
  ESI = (pop32());
  /* 1006ba02 ret  */
  ESPCHK(0x1006b9acu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba03 @ 0x1006ba03 (69 bytes, 19 insns) */
void f_1006ba03(void) {
  FTRACE(0x1006ba03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006ba03 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006ba07 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1006ba0b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006ba0e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 1006ba11 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 1006ba15 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1006ba19 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1006ba1c add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1006ba1e and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1006ba21 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ba27 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 1006ba2e jne 0x1006ba47 */
  if (!C.zf) goto L_1006ba47;
  /* 1006ba30 inc dword ptr [0x10076824] */
  { uint32_t _r=(r32((uint32_t)(0x10076824)))+1; w32((uint32_t)(0x10076824), (_r)); fl_inc(_r,32); }
  /* 1006ba36 cmp dword ptr [0x10076824], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10076824))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ba3d jne 0x1006ba47 */
  if (!C.zf) goto L_1006ba47;
  /* 1006ba3f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1006ba41 call 0x1006b8ea */
  push32(0x1006ba46u); f_1006b8ea();
  /* 1006ba46 pop ecx */
  ECX = (pop32());
L_1006ba47:;
  /* 1006ba47 ret  */
  ESPCHK(0x1006ba03u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba48 @ 0x1006ba48 (520 bytes, 180 insns) */
void f_1006ba48(void) {
  FTRACE(0x1006ba48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006ba48 push ebp */
  push32((uint32_t)(EBP));
  /* 1006ba49 mov ebp, esp */
  EBP = (ESP);
  /* 1006ba4b push ecx */
  push32((uint32_t)(ECX));
  /* 1006ba4c push ecx */
  push32((uint32_t)(ECX));
  /* 1006ba4d push ebx */
  push32((uint32_t)(EBX));
  /* 1006ba4e push esi */
  push32((uint32_t)(ESI));
  /* 1006ba4f mov esi, dword ptr [0x10072e90] */
  ESI = (r32((uint32_t)(0x10072e90)));
  /* 1006ba55 push edi */
  push32((uint32_t)(EDI));
L_1006ba56:;
  /* 1006ba56 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 1006ba59 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ba5c je 0x1006bb01 */
  if (C.zf) goto L_1006bb01;
  /* 1006ba62 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 1006ba65 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1006ba6b mov eax, edi */
  EAX = (EDI);
  /* 1006ba6d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006ba6f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006ba72 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 1006ba75 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1006ba78 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006ba7a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ba7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1006ba7f jae 0x1006babb */
  if (!C.cf) goto L_1006babb;
L_1006ba81:;
  /* 1006ba81 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 1006ba83 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006ba86 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ba88 jl 0x1006baa4 */
  if ((C.sf!=C.of)) goto L_1006baa4;
  /* 1006ba8a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ba8d jbe 0x1006baa4 */
  if ((C.cf||C.zf)) goto L_1006baa4;
  /* 1006ba8f push ebx */
  push32((uint32_t)(EBX));
  /* 1006ba90 push ecx */
  push32((uint32_t)(ECX));
  /* 1006ba91 push eax */
  push32((uint32_t)(EAX));
  /* 1006ba92 call 0x1006bc50 */
  push32(0x1006ba97u); f_1006bc50();
  /* 1006ba97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006ba9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006ba9c jne 0x1006bb13 */
  if (!C.zf) goto L_1006bb13;
  /* 1006ba9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006baa1 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1006baa4:;
  /* 1006baa4 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006baa7 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1006baad add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bab2 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bab4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1006bab7 jb 0x1006ba81 */
  if (C.cf) goto L_1006ba81;
  /* 1006bab9 jmp 0x1006babe */
  goto L_1006babe;
L_1006babb:;
  /* 1006babb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1006babe:;
  /* 1006babe mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1006bac1 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 1006bac4 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 1006bac7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1006baca cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bacc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1006bacf jae 0x1006bb04 */
  if (!C.cf) goto L_1006bb04;
L_1006bad1:;
  /* 1006bad1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1006bad3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bad5 jl 0x1006baf0 */
  if ((C.sf!=C.of)) goto L_1006baf0;
  /* 1006bad7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bada jbe 0x1006baf0 */
  if ((C.cf||C.zf)) goto L_1006baf0;
  /* 1006badc push ebx */
  push32((uint32_t)(EBX));
  /* 1006badd push eax */
  push32((uint32_t)(EAX));
  /* 1006bade push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1006bae1 call 0x1006bc50 */
  push32(0x1006bae6u); f_1006bc50();
  /* 1006bae6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006baeb jne 0x1006bb13 */
  if (!C.zf) goto L_1006bb13;
  /* 1006baed mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1006baf0:;
  /* 1006baf0 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1006baf7 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bafa cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bafd jb 0x1006bad1 */
  if (C.cf) goto L_1006bad1;
  /* 1006baff jmp 0x1006bb04 */
  goto L_1006bb04;
L_1006bb01:;
  /* 1006bb01 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1006bb04:;
  /* 1006bb04 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 1006bb06 cmp esi, dword ptr [0x10072e90] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10072e90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bb0c je 0x1006bb23 */
  if (C.zf) goto L_1006bb23;
  /* 1006bb0e jmp 0x1006ba56 */
  goto L_1006ba56;
L_1006bb13:;
  /* 1006bb13 mov dword ptr [0x10072e90], esi */
  w32((uint32_t)(0x10072e90), (ESI));
  /* 1006bb19 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1006bb1b mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 1006bb1e jmp 0x1006bc4b */
  goto L_1006bc4b;
L_1006bb23:;
  /* 1006bb23 mov eax, 0x10070e70 */
  EAX = (0x10070e70u);
  /* 1006bb28 mov edi, eax */
  EDI = (EAX);
L_1006bb2a:;
  /* 1006bb2a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bb2e je 0x1006bb36 */
  if (C.zf) goto L_1006bb36;
  /* 1006bb30 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bb34 jne 0x1006bb42 */
  if (!C.zf) goto L_1006bb42;
L_1006bb36:;
  /* 1006bb36 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 1006bb38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bb3a je 0x1006bc17 */
  if (C.zf) goto L_1006bc17;
  /* 1006bb40 jmp 0x1006bb2a */
  goto L_1006bb2a;
L_1006bb42:;
  /* 1006bb42 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 1006bb45 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006bb49 mov esi, ebx */
  ESI = (EBX);
  /* 1006bb4b mov eax, ebx */
  EAX = (EBX);
  /* 1006bb4d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006bb4f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006bb52 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 1006bb55 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 1006bb58 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bb5b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bb5e jne 0x1006bb71 */
  if (!C.zf) goto L_1006bb71;
L_1006bb60:;
  /* 1006bb60 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bb64 jge 0x1006bb71 */
  if ((C.sf==C.of)) goto L_1006bb71;
  /* 1006bb66 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bb69 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1006bb6c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bb6f je 0x1006bb60 */
  if (C.zf) goto L_1006bb60;
L_1006bb71:;
  /* 1006bb71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006bb74 push 4 */
  push32((uint32_t)(0x4u));
  /* 1006bb76 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1006bb79 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1006bb7e push eax */
  push32((uint32_t)(EAX));
  /* 1006bb7f push esi */
  push32((uint32_t)(ESI));
  /* 1006bb80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1006bb83 call dword ptr [0x1006e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0a8))), 0x1006bb89u);
  /* 1006bb89 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bb8b jne 0x1006bc49 */
  if (!C.zf) goto L_1006bc49;
  /* 1006bb91 push 0 */
  push32((uint32_t)(0x0u));
  /* 1006bb93 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 1006bb96 push esi */
  push32((uint32_t)(ESI));
  /* 1006bb97 call 0x10069be0 */
  push32(0x1006bb9cu); f_10069be0();
  /* 1006bb9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006bb9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bba2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1006bba4 mov ecx, ebx */
  ECX = (EBX);
  /* 1006bba6 jle 0x1006bbd8 */
  if ((C.zf||C.sf!=C.of)) goto L_1006bbd8;
  /* 1006bba8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1006bbab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1006bbae:;
  /* 1006bbae or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 1006bbb5 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 1006bbb8 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 1006bbbb mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1006bbc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1006bbc2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1006bbc4 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 1006bbcb add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bbd0 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bbd3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1006bbd6 jne 0x1006bbae */
  if (!C.zf) goto L_1006bbae;
L_1006bbd8:;
  /* 1006bbd8 mov dword ptr [0x10072e90], edi */
  w32((uint32_t)(0x10072e90), (EDI));
  /* 1006bbde lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_1006bbe4:;
  /* 1006bbe4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bbe6 jae 0x1006bbf4 */
  if (!C.cf) goto L_1006bbf4;
  /* 1006bbe8 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bbeb je 0x1006bbf2 */
  if (C.zf) goto L_1006bbf2;
  /* 1006bbed add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bbf0 jmp 0x1006bbe4 */
  goto L_1006bbe4;
L_1006bbf2:;
  /* 1006bbf2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1006bbf4:;
  /* 1006bbf4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006bbf6 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1006bbf8 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 1006bbfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006bbfe mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 1006bc01 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 1006bc04 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1006bc06 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1006bc09 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 1006bc0d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 1006bc13 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1006bc15 jmp 0x1006bc4b */
  goto L_1006bc4b;
L_1006bc17:;
  /* 1006bc17 call 0x1006b750 */
  push32(0x1006bc1cu); f_1006b750();
  /* 1006bc1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006bc1e je 0x1006bc49 */
  if (C.zf) goto L_1006bc49;
  /* 1006bc20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1006bc23 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 1006bc26 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 1006bc2a mov dword ptr [0x10072e90], eax */
  w32((uint32_t)(0x10072e90), (EAX));
  /* 1006bc2f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1006bc31 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1006bc36 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006bc38 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1006bc3b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 1006bc3e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1006bc41 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 1006bc47 jmp 0x1006bc4b */
  goto L_1006bc4b;
L_1006bc49:;
  /* 1006bc49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1006bc4b:;
  /* 1006bc4b pop edi */
  EDI = (pop32());
  /* 1006bc4c pop esi */
  ESI = (pop32());
  /* 1006bc4d pop ebx */
  EBX = (pop32());
  /* 1006bc4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006bc4f ret  */
  ESPCHK(0x1006ba48u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc50 @ 0x1006bc50 (292 bytes, 125 insns) */
void f_1006bc50(void) {
  FTRACE(0x1006bc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006bc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1006bc51 mov ebp, esp */
  EBP = (ESP);
  /* 1006bc53 push ecx */
  push32((uint32_t)(ECX));
  /* 1006bc54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006bc57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1006bc5a push ebx */
  push32((uint32_t)(EBX));
  /* 1006bc5b push esi */
  push32((uint32_t)(ESI));
  /* 1006bc5c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1006bc5f push edi */
  push32((uint32_t)(EDI));
  /* 1006bc60 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 1006bc62 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 1006bc68 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bc6a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1006bc6d mov eax, edi */
  EAX = (EDI);
  /* 1006bc6f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1006bc72 jb 0x1006bc95 */
  if (C.cf) goto L_1006bc95;
  /* 1006bc74 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 1006bc77 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1006bc79 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bc7b jae 0x1006bc84 */
  if (!C.cf) goto L_1006bc84;
  /* 1006bc7d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1006bc7f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1006bc82 jmp 0x1006bc8d */
  goto L_1006bc8d;
L_1006bc84:;
  /* 1006bc84 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1006bc88 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1006bc8b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1006bc8d:;
  /* 1006bc8d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1006bc90 jmp 0x1006bd63 */
  goto L_1006bd63;
L_1006bc95:;
  /* 1006bc95 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bc97 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006bc9a je 0x1006bc9e */
  if (C.zf) goto L_1006bc9e;
  /* 1006bc9c mov eax, esi */
  EAX = (ESI);
L_1006bc9e:;
  /* 1006bc9e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1006bca1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bca3 jae 0x1006bce8 */
  if (!C.cf) goto L_1006bce8;
L_1006bca5:;
  /* 1006bca5 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1006bca7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1006bca9 jne 0x1006bcdb */
  if (!C.zf) goto L_1006bcdb;
  /* 1006bcab push 1 */
  push32((uint32_t)(0x1u));
  /* 1006bcad lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 1006bcb0 pop esi */
  ESI = (pop32());
L_1006bcb1:;
  /* 1006bcb1 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006bcb4 jne 0x1006bcba */
  if (!C.zf) goto L_1006bcba;
  /* 1006bcb6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1006bcb7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006bcb8 jmp 0x1006bcb1 */
  goto L_1006bcb1;
L_1006bcba:;
  /* 1006bcba cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bcbc jae 0x1006bd0c */
  if (!C.cf) goto L_1006bd0c;
  /* 1006bcbe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bcc1 jne 0x1006bcc8 */
  if (!C.zf) goto L_1006bcc8;
  /* 1006bcc3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1006bcc6 jmp 0x1006bcd4 */
  goto L_1006bcd4;
L_1006bcc8:;
  /* 1006bcc8 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1006bccb cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bcce jb 0x1006bd6d */
  if (C.cf) goto L_1006bd6d;
L_1006bcd4:;
  /* 1006bcd4 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 1006bcd7 mov eax, ebx */
  EAX = (EBX);
  /* 1006bcd9 jmp 0x1006bce0 */
  goto L_1006bce0;
L_1006bcdb:;
  /* 1006bcdb movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1006bcde add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1006bce0:;
  /* 1006bce0 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1006bce3 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bce6 jb 0x1006bca5 */
  if (C.cf) goto L_1006bca5;
L_1006bce8:;
  /* 1006bce8 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_1006bceb:;
  /* 1006bceb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bced jae 0x1006bd6d */
  if (!C.cf) goto L_1006bd6d;
  /* 1006bcef lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 1006bcf2 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bcf5 jae 0x1006bd6d */
  if (!C.cf) goto L_1006bd6d;
  /* 1006bcf7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006bcf9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006bcfb jne 0x1006bd3d */
  if (!C.zf) goto L_1006bd3d;
  /* 1006bcfd push 1 */
  push32((uint32_t)(0x1u));
  /* 1006bcff lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 1006bd02 pop eax */
  EAX = (pop32());
L_1006bd03:;
  /* 1006bd03 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006bd06 jne 0x1006bd2d */
  if (!C.zf) goto L_1006bd2d;
  /* 1006bd08 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1006bd09 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006bd0a jmp 0x1006bd03 */
  goto L_1006bd03;
L_1006bd0c:;
  /* 1006bd0c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 1006bd0f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bd12 jae 0x1006bd1d */
  if (!C.cf) goto L_1006bd1d;
  /* 1006bd14 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006bd16 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1006bd18 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1006bd1b jmp 0x1006bd26 */
  goto L_1006bd26;
L_1006bd1d:;
  /* 1006bd1d and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1006bd21 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 1006bd24 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1006bd26:;
  /* 1006bd26 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1006bd28 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bd2b jmp 0x1006bd63 */
  goto L_1006bd63;
L_1006bd2d:;
  /* 1006bd2d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bd2f jae 0x1006bd44 */
  if (!C.cf) goto L_1006bd44;
  /* 1006bd31 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1006bd34 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bd37 jb 0x1006bd6d */
  if (C.cf) goto L_1006bd6d;
  /* 1006bd39 mov esi, ebx */
  ESI = (EBX);
  /* 1006bd3b jmp 0x1006bceb */
  goto L_1006bceb;
L_1006bd3d:;
  /* 1006bd3d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1006bd40 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bd42 jmp 0x1006bceb */
  goto L_1006bceb;
L_1006bd44:;
  /* 1006bd44 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 1006bd47 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bd4a jae 0x1006bd55 */
  if (!C.cf) goto L_1006bd55;
  /* 1006bd4c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006bd4e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1006bd50 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1006bd53 jmp 0x1006bd5e */
  goto L_1006bd5e;
L_1006bd55:;
  /* 1006bd55 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1006bd59 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1006bd5c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1006bd5e:;
  /* 1006bd5e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1006bd60 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_1006bd63:;
  /* 1006bd63 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1006bd66 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1006bd69 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006bd6b jmp 0x1006bd6f */
  goto L_1006bd6f;
L_1006bd6d:;
  /* 1006bd6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1006bd6f:;
  /* 1006bd6f pop edi */
  EDI = (pop32());
  /* 1006bd70 pop esi */
  ESI = (pop32());
  /* 1006bd71 pop ebx */
  EBX = (pop32());
  /* 1006bd72 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006bd73 ret  */
  ESPCHK(0x1006bc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd74 @ 0x1006bd74 (137 bytes, 50 insns) */
void f_1006bd74(void) {
  FTRACE(0x1006bd74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006bd74 push ebx */
  push32((uint32_t)(EBX));
  /* 1006bd75 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006bd77 cmp dword ptr [0x10076828], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10076828))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bd7d push esi */
  push32((uint32_t)(ESI));
  /* 1006bd7e push edi */
  push32((uint32_t)(EDI));
  /* 1006bd7f jne 0x1006bdc3 */
  if (!C.zf) goto L_1006bdc3;
  /* 1006bd81 push 0x1006e548 */
  push32((uint32_t)(0x1006e548u));
  /* 1006bd86 call dword ptr [0x1006e0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0b0))), 0x1006bd8cu);
  /* 1006bd8c mov edi, eax */
  EDI = (EAX);
  /* 1006bd8e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bd90 je 0x1006bdf9 */
  if (C.zf) goto L_1006bdf9;
  /* 1006bd92 mov esi, dword ptr [0x1006e088] */
  ESI = (r32((uint32_t)(0x1006e088)));
  /* 1006bd98 push 0x1006e53c */
  push32((uint32_t)(0x1006e53cu));
  /* 1006bd9d push edi */
  push32((uint32_t)(EDI));
  /* 1006bd9e call esi */
  call_ind((uint32_t)(ESI), 0x1006bda0u);
  /* 1006bda0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006bda2 mov dword ptr [0x10076828], eax */
  w32((uint32_t)(0x10076828), (EAX));
  /* 1006bda7 je 0x1006bdf9 */
  if (C.zf) goto L_1006bdf9;
  /* 1006bda9 push 0x1006e52c */
  push32((uint32_t)(0x1006e52cu));
  /* 1006bdae push edi */
  push32((uint32_t)(EDI));
  /* 1006bdaf call esi */
  call_ind((uint32_t)(ESI), 0x1006bdb1u);
  /* 1006bdb1 push 0x1006e518 */
  push32((uint32_t)(0x1006e518u));
  /* 1006bdb6 push edi */
  push32((uint32_t)(EDI));
  /* 1006bdb7 mov dword ptr [0x1007682c], eax */
  w32((uint32_t)(0x1007682c), (EAX));
  /* 1006bdbc call esi */
  call_ind((uint32_t)(ESI), 0x1006bdbeu);
  /* 1006bdbe mov dword ptr [0x10076830], eax */
  w32((uint32_t)(0x10076830), (EAX));
L_1006bdc3:;
  /* 1006bdc3 mov eax, dword ptr [0x1007682c] */
  EAX = (r32((uint32_t)(0x1007682c)));
  /* 1006bdc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006bdca je 0x1006bde2 */
  if (C.zf) goto L_1006bde2;
  /* 1006bdcc call eax */
  call_ind((uint32_t)(EAX), 0x1006bdceu);
  /* 1006bdce mov ebx, eax */
  EBX = (EAX);
  /* 1006bdd0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1006bdd2 je 0x1006bde2 */
  if (C.zf) goto L_1006bde2;
  /* 1006bdd4 mov eax, dword ptr [0x10076830] */
  EAX = (r32((uint32_t)(0x10076830)));
  /* 1006bdd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006bddb je 0x1006bde2 */
  if (C.zf) goto L_1006bde2;
  /* 1006bddd push ebx */
  push32((uint32_t)(EBX));
  /* 1006bdde call eax */
  call_ind((uint32_t)(EAX), 0x1006bde0u);
  /* 1006bde0 mov ebx, eax */
  EBX = (EAX);
L_1006bde2:;
  /* 1006bde2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1006bde6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1006bdea push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1006bdee push ebx */
  push32((uint32_t)(EBX));
  /* 1006bdef call dword ptr [0x10076828] */
  call_ind((uint32_t)(r32((uint32_t)(0x10076828))), 0x1006bdf5u);
L_1006bdf5:;
  /* 1006bdf5 pop edi */
  EDI = (pop32());
  /* 1006bdf6 pop esi */
  ESI = (pop32());
  /* 1006bdf7 pop ebx */
  EBX = (pop32());
  /* 1006bdf8 ret  */
  ESPCHK(0x1006bd74u, _esp0);
  ESP += 4; return;
L_1006bdf9:;
  /* 1006bdf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006bdfb jmp 0x1006bdf5 */
  goto L_1006bdf5;
}

/* _strncpy @ 0x1006be00 (254 bytes, 109 insns) */
void f_1006be00(void) {
  FTRACE(0x1006be00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006be00 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1006be04 push edi */
  push32((uint32_t)(EDI));
  /* 1006be05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1006be07 je 0x1006be83 */
  if (C.zf) goto L_1006be83;
  /* 1006be09 push esi */
  push32((uint32_t)(ESI));
  /* 1006be0a push ebx */
  push32((uint32_t)(EBX));
  /* 1006be0b mov ebx, ecx */
  EBX = (ECX);
  /* 1006be0d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1006be11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1006be17 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1006be1b jne 0x1006be24 */
  if (!C.zf) goto L_1006be24;
  /* 1006be1d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1006be20 jne 0x1006be91 */
  if (!C.zf) goto L_1006be91;
  /* 1006be22 jmp 0x1006be45 */
  goto L_1006be45;
L_1006be24:;
  /* 1006be24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006be26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006be27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1006be29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006be2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1006be2b je 0x1006be52 */
  if (C.zf) goto L_1006be52;
  /* 1006be2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006be2f je 0x1006be5a */
  if (C.zf) goto L_1006be5a;
  /* 1006be31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1006be37 jne 0x1006be24 */
  if (!C.zf) goto L_1006be24;
  /* 1006be39 mov ebx, ecx */
  EBX = (ECX);
  /* 1006be3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1006be3e jne 0x1006be91 */
  if (!C.zf) goto L_1006be91;
L_1006be40:;
  /* 1006be40 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1006be43 je 0x1006be52 */
  if (C.zf) goto L_1006be52;
L_1006be45:;
  /* 1006be45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006be47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006be48 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1006be4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006be4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1006be4d je 0x1006be7e */
  if (C.zf) goto L_1006be7e;
  /* 1006be4f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1006be50 jne 0x1006be45 */
  if (!C.zf) goto L_1006be45;
L_1006be52:;
  /* 1006be52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1006be56 pop ebx */
  EBX = (pop32());
  /* 1006be57 pop esi */
  ESI = (pop32());
  /* 1006be58 pop edi */
  EDI = (pop32());
  /* 1006be59 ret  */
  ESPCHK(0x1006be00u, _esp0);
  ESP += 4; return;
L_1006be5a:;
  /* 1006be5a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1006be60 je 0x1006be74 */
  if (C.zf) goto L_1006be74;
L_1006be62:;
  /* 1006be62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1006be64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006be65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1006be66 je 0x1006bef6 */
  if (C.zf) goto L_1006bef6;
  /* 1006be6c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1006be72 jne 0x1006be62 */
  if (!C.zf) goto L_1006be62;
L_1006be74:;
  /* 1006be74 mov ebx, ecx */
  EBX = (ECX);
  /* 1006be76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1006be79 jne 0x1006bee7 */
  if (!C.zf) goto L_1006bee7;
L_1006be7b:;
  /* 1006be7b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1006be7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1006be7e:;
  /* 1006be7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1006be7f jne 0x1006be7b */
  if (!C.zf) goto L_1006be7b;
  /* 1006be81 pop ebx */
  EBX = (pop32());
  /* 1006be82 pop esi */
  ESI = (pop32());
L_1006be83:;
  /* 1006be83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1006be87 pop edi */
  EDI = (pop32());
  /* 1006be88 ret  */
  ESPCHK(0x1006be00u, _esp0);
  ESP += 4; return;
L_1006be89:;
  /* 1006be89 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1006be8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006be8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1006be8f je 0x1006be40 */
  if (C.zf) goto L_1006be40;
L_1006be91:;
  /* 1006be91 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1006be96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1006be98 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006be9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1006be9d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1006be9f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1006bea1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bea4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1006bea9 je 0x1006be89 */
  if (C.zf) goto L_1006be89;
  /* 1006beab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1006bead je 0x1006bedb */
  if (C.zf) goto L_1006bedb;
  /* 1006beaf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1006beb1 je 0x1006bed1 */
  if (C.zf) goto L_1006bed1;
  /* 1006beb3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1006beb9 je 0x1006bec7 */
  if (C.zf) goto L_1006bec7;
  /* 1006bebb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1006bec1 jne 0x1006be89 */
  if (!C.zf) goto L_1006be89;
  /* 1006bec3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1006bec5 jmp 0x1006bedf */
  goto L_1006bedf;
L_1006bec7:;
  /* 1006bec7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1006becd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1006becf jmp 0x1006bedf */
  goto L_1006bedf;
L_1006bed1:;
  /* 1006bed1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1006bed7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1006bed9 jmp 0x1006bedf */
  goto L_1006bedf;
L_1006bedb:;
  /* 1006bedb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1006bedd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1006bedf:;
  /* 1006bedf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bee2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006bee4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1006bee5 je 0x1006bef1 */
  if (C.zf) goto L_1006bef1;
L_1006bee7:;
  /* 1006bee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1006bee9:;
  /* 1006bee9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1006beeb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006beee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1006beef jne 0x1006bee9 */
  if (!C.zf) goto L_1006bee9;
L_1006bef1:;
  /* 1006bef1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1006bef4 jne 0x1006be7b */
  if (!C.zf) goto L_1006be7b;
L_1006bef6:;
  /* 1006bef6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1006befa pop ebx */
  EBX = (pop32());
  /* 1006befb pop esi */
  ESI = (pop32());
  /* 1006befc pop edi */
  EDI = (pop32());
  /* 1006befd ret  */
  ESPCHK(0x1006be00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000befe @ 0x1006befe (115 bytes, 37 insns) */
void f_1006befe(void) {
  FTRACE(0x1006befeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006befe push esi */
  push32((uint32_t)(ESI));
  /* 1006beff call 0x1006bf7a */
  push32(0x1006bf04u); f_1006bf7a();
  /* 1006bf04 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1006bf08 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1006bf0a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1006bf0c mov eax, 0x10072ea0 */
  EAX = (0x10072ea0u);
L_1006bf11:;
  /* 1006bf11 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bf13 je 0x1006bf37 */
  if (C.zf) goto L_1006bf37;
  /* 1006bf15 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bf18 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006bf19 cmp eax, 0x10073008 */
  { uint32_t _a=(EAX),_b=(0x10073008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bf1e jl 0x1006bf11 */
  if ((C.sf!=C.of)) goto L_1006bf11;
  /* 1006bf20 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bf23 jb 0x1006bf47 */
  if (C.cf) goto L_1006bf47;
  /* 1006bf25 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bf28 ja 0x1006bf47 */
  if ((!C.cf&&!C.zf)) goto L_1006bf47;
  /* 1006bf2a call 0x1006bf71 */
  push32(0x1006bf2fu); f_1006bf71();
  /* 1006bf2f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1006bf35 pop esi */
  ESI = (pop32());
  /* 1006bf36 ret  */
  ESPCHK(0x1006befeu, _esp0);
  ESP += 4; return;
L_1006bf37:;
  /* 1006bf37 call 0x1006bf71 */
  push32(0x1006bf3cu); f_1006bf71();
  /* 1006bf3c mov ecx, dword ptr [esi*8 + 0x10072ea4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x10072ea4)));
  /* 1006bf43 pop esi */
  ESI = (pop32());
  /* 1006bf44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1006bf46 ret  */
  ESPCHK(0x1006befeu, _esp0);
  ESP += 4; return;
L_1006bf47:;
  /* 1006bf47 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bf4d jb 0x1006bf64 */
  if (C.cf) goto L_1006bf64;
  /* 1006bf4f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bf55 ja 0x1006bf64 */
  if ((!C.cf&&!C.zf)) goto L_1006bf64;
  /* 1006bf57 call 0x1006bf71 */
  push32(0x1006bf5cu); f_1006bf71();
  /* 1006bf5c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1006bf62 pop esi */
  ESI = (pop32());
  /* 1006bf63 ret  */
  ESPCHK(0x1006befeu, _esp0);
  ESP += 4; return;
L_1006bf64:;
  /* 1006bf64 call 0x1006bf71 */
  push32(0x1006bf69u); f_1006bf71();
  /* 1006bf69 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1006bf6f pop esi */
  ESI = (pop32());
  /* 1006bf70 ret  */
  ESPCHK(0x1006befeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf71 @ 0x1006bf71 (9 bytes, 3 insns) */
void f_1006bf71(void) {
  FTRACE(0x1006bf71u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006bf71 call 0x10068048 */
  push32(0x1006bf76u); f_10068048();
  /* 1006bf76 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bf79 ret  */
  ESPCHK(0x1006bf71u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf7a @ 0x1006bf7a (9 bytes, 3 insns) */
void f_1006bf7a(void) {
  FTRACE(0x1006bf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006bf7a call 0x10068048 */
  push32(0x1006bf7fu); f_10068048();
  /* 1006bf7f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bf82 ret  */
  ESPCHK(0x1006bf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf83 @ 0x1006bf83 (127 bytes, 48 insns) */
void f_1006bf83(void) {
  FTRACE(0x1006bf83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006bf83 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006bf87 push esi */
  push32((uint32_t)(ESI));
  /* 1006bf88 cmp ecx, dword ptr [0x10077d40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10077d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bf8e push edi */
  push32((uint32_t)(EDI));
  /* 1006bf8f jae 0x1006bfe9 */
  if (!C.cf) goto L_1006bfe9;
  /* 1006bf91 mov eax, ecx */
  EAX = (ECX);
  /* 1006bf93 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1006bf96 lea edi, [eax*4 + 0x10077c40] */
  EDI = ((uint32_t)(EAX*4 + 0x10077c40));
  /* 1006bf9d mov eax, ecx */
  EAX = (ECX);
  /* 1006bf9f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1006bfa2 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1006bfa5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1006bfa7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1006bfaa add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006bfac test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1006bfb0 je 0x1006bfe9 */
  if (C.zf) goto L_1006bfe9;
  /* 1006bfb2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bfb5 je 0x1006bfe9 */
  if (C.zf) goto L_1006bfe9;
  /* 1006bfb7 cmp dword ptr [0x10076664], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10076664))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006bfbe jne 0x1006bfdf */
  if (!C.zf) goto L_1006bfdf;
  /* 1006bfc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006bfc2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006bfc4 je 0x1006bfd6 */
  if (C.zf) goto L_1006bfd6;
  /* 1006bfc6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1006bfc7 je 0x1006bfd1 */
  if (C.zf) goto L_1006bfd1;
  /* 1006bfc9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1006bfca jne 0x1006bfdf */
  if (!C.zf) goto L_1006bfdf;
  /* 1006bfcc push eax */
  push32((uint32_t)(EAX));
  /* 1006bfcd push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1006bfcf jmp 0x1006bfd9 */
  goto L_1006bfd9;
L_1006bfd1:;
  /* 1006bfd1 push eax */
  push32((uint32_t)(EAX));
  /* 1006bfd2 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1006bfd4 jmp 0x1006bfd9 */
  goto L_1006bfd9;
L_1006bfd6:;
  /* 1006bfd6 push eax */
  push32((uint32_t)(EAX));
  /* 1006bfd7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_1006bfd9:;
  /* 1006bfd9 call dword ptr [0x1006e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0b4))), 0x1006bfdfu);
L_1006bfdf:;
  /* 1006bfdf mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1006bfe1 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 1006bfe5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006bfe7 jmp 0x1006bfff */
  goto L_1006bfff;
L_1006bfe9:;
  /* 1006bfe9 call 0x1006bf71 */
  push32(0x1006bfeeu); f_1006bf71();
  /* 1006bfee mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1006bff4 call 0x1006bf7a */
  push32(0x1006bff9u); f_1006bf7a();
  /* 1006bff9 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1006bffc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1006bfff:;
  /* 1006bfff pop edi */
  EDI = (pop32());
  /* 1006c000 pop esi */
  ESI = (pop32());
  /* 1006c001 ret  */
  ESPCHK(0x1006bf83u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c002 @ 0x1006c002 (66 bytes, 19 insns) */
void f_1006c002(void) {
  FTRACE(0x1006c002u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006c002 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006c006 cmp eax, dword ptr [0x10077d40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10077d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c00c jae 0x1006c02d */
  if (!C.cf) goto L_1006c02d;
  /* 1006c00e mov ecx, eax */
  ECX = (EAX);
  /* 1006c010 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1006c013 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1006c016 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1006c019 mov ecx, dword ptr [ecx*4 + 0x10077c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10077c40)));
  /* 1006c020 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1006c025 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1006c028 je 0x1006c02d */
  if (C.zf) goto L_1006c02d;
  /* 1006c02a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 1006c02c ret  */
  ESPCHK(0x1006c002u, _esp0);
  ESP += 4; return;
L_1006c02d:;
  /* 1006c02d call 0x1006bf71 */
  push32(0x1006c032u); f_1006bf71();
  /* 1006c032 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1006c038 call 0x1006bf7a */
  push32(0x1006c03du); f_1006bf7a();
  /* 1006c03d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1006c040 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1006c043 ret  */
  ESPCHK(0x1006c002u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c044 @ 0x1006c044 (95 bytes, 34 insns) */
void f_1006c044(void) {
  FTRACE(0x1006c044u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006c044 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006c048 push ebx */
  push32((uint32_t)(EBX));
  /* 1006c049 mov ecx, eax */
  ECX = (EAX);
  /* 1006c04b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1006c04e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1006c051 push esi */
  push32((uint32_t)(ESI));
  /* 1006c052 push edi */
  push32((uint32_t)(EDI));
  /* 1006c053 mov esi, dword ptr [ecx*4 + 0x10077c40] */
  ESI = (r32((uint32_t)(ECX*4 + 0x10077c40)));
  /* 1006c05a lea ebx, [ecx*4 + 0x10077c40] */
  EBX = ((uint32_t)(ECX*4 + 0x10077c40));
  /* 1006c061 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 1006c064 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 1006c067 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006c069 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c06d jne 0x1006c092 */
  if (!C.zf) goto L_1006c092;
  /* 1006c06f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1006c071 call 0x1006a013 */
  push32(0x1006c076u); f_1006a013();
  /* 1006c076 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c07a pop ecx */
  ECX = (pop32());
  /* 1006c07b jne 0x1006c08a */
  if (!C.zf) goto L_1006c08a;
  /* 1006c07d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 1006c080 push eax */
  push32((uint32_t)(EAX));
  /* 1006c081 call dword ptr [0x1006e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e094))), 0x1006c087u);
  /* 1006c087 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1006c08a:;
  /* 1006c08a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1006c08c call 0x1006a074 */
  push32(0x1006c091u); f_1006a074();
  /* 1006c091 pop ecx */
  ECX = (pop32());
L_1006c092:;
  /* 1006c092 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1006c094 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 1006c098 push eax */
  push32((uint32_t)(EAX));
  /* 1006c099 call dword ptr [0x1006e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e00c))), 0x1006c09fu);
  /* 1006c09f pop edi */
  EDI = (pop32());
  /* 1006c0a0 pop esi */
  ESI = (pop32());
  /* 1006c0a1 pop ebx */
  EBX = (pop32());
  /* 1006c0a2 ret  */
  ESPCHK(0x1006c044u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a3 @ 0x1006c0a3 (34 bytes, 10 insns) */
void f_1006c0a3(void) {
  FTRACE(0x1006c0a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006c0a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006c0a7 mov ecx, eax */
  ECX = (EAX);
  /* 1006c0a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1006c0ac sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1006c0af lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1006c0b2 mov ecx, dword ptr [ecx*4 + 0x10077c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10077c40)));
  /* 1006c0b9 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 1006c0bd push eax */
  push32((uint32_t)(EAX));
  /* 1006c0be call dword ptr [0x1006e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e008))), 0x1006c0c4u);
  /* 1006c0c4 ret  */
  ESPCHK(0x1006c0a3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c146 @ 0x1006c146 (46 bytes, 22 insns) */
void f_1006c146(void) {
  FTRACE(0x1006c146u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006c146 push esi */
  push32((uint32_t)(ESI));
  /* 1006c147 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1006c14b push esi */
  push32((uint32_t)(ESI));
  /* 1006c14c call 0x1006c174 */
  push32(0x1006c151u); f_1006c174();
  /* 1006c151 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006c153 pop ecx */
  ECX = (pop32());
  /* 1006c154 je 0x1006c15b */
  if (C.zf) goto L_1006c15b;
  /* 1006c156 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1006c159 pop esi */
  ESI = (pop32());
  /* 1006c15a ret  */
  ESPCHK(0x1006c146u, _esp0);
  ESP += 4; return;
L_1006c15b:;
  /* 1006c15b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 1006c15f je 0x1006c170 */
  if (C.zf) goto L_1006c170;
  /* 1006c161 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1006c164 call 0x1006d2c0 */
  push32(0x1006c169u); f_1006d2c0();
  /* 1006c169 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1006c16b pop ecx */
  ECX = (pop32());
  /* 1006c16c pop esi */
  ESI = (pop32());
  /* 1006c16d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006c16f ret  */
  ESPCHK(0x1006c146u, _esp0);
  ESP += 4; return;
L_1006c170:;
  /* 1006c170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006c172 pop esi */
  ESI = (pop32());
  /* 1006c173 ret  */
  ESPCHK(0x1006c146u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c174 @ 0x1006c174 (92 bytes, 40 insns) */
void f_1006c174(void) {
  FTRACE(0x1006c174u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006c174 push ebx */
  push32((uint32_t)(EBX));
  /* 1006c175 push esi */
  push32((uint32_t)(ESI));
  /* 1006c176 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1006c17a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006c17c push edi */
  push32((uint32_t)(EDI));
  /* 1006c17d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1006c180 mov ecx, eax */
  ECX = (EAX);
  /* 1006c182 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1006c185 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c188 jne 0x1006c1c1 */
  if (!C.zf) goto L_1006c1c1;
  /* 1006c18a test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 1006c18e je 0x1006c1c1 */
  if (C.zf) goto L_1006c1c1;
  /* 1006c190 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1006c193 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 1006c195 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006c197 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1006c199 jle 0x1006c1c1 */
  if ((C.zf||C.sf!=C.of)) goto L_1006c1c1;
  /* 1006c19b push edi */
  push32((uint32_t)(EDI));
  /* 1006c19c push eax */
  push32((uint32_t)(EAX));
  /* 1006c19d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1006c1a0 call 0x10068c75 */
  push32(0x1006c1a5u); f_10068c75();
  /* 1006c1a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006c1a8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c1aa jne 0x1006c1ba */
  if (!C.zf) goto L_1006c1ba;
  /* 1006c1ac mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1006c1af test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 1006c1b1 je 0x1006c1c1 */
  if (C.zf) goto L_1006c1c1;
  /* 1006c1b3 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 1006c1b5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1006c1b8 jmp 0x1006c1c1 */
  goto L_1006c1c1;
L_1006c1ba:;
  /* 1006c1ba or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1006c1be or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_1006c1c1:;
  /* 1006c1c1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1006c1c4 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1006c1c8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1006c1ca pop edi */
  EDI = (pop32());
  /* 1006c1cb mov eax, ebx */
  EAX = (EBX);
  /* 1006c1cd pop esi */
  ESI = (pop32());
  /* 1006c1ce pop ebx */
  EBX = (pop32());
  /* 1006c1cf ret  */
  ESPCHK(0x1006c174u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1d9 @ 0x1006c1d9 (164 bytes, 66 insns) */
void f_1006c1d9(void) {
  FTRACE(0x1006c1d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006c1d9 push ebx */
  push32((uint32_t)(EBX));
  /* 1006c1da push esi */
  push32((uint32_t)(ESI));
  /* 1006c1db push edi */
  push32((uint32_t)(EDI));
  /* 1006c1dc push 2 */
  push32((uint32_t)(0x2u));
  /* 1006c1de xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006c1e0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1006c1e2 call 0x1006a013 */
  push32(0x1006c1e7u); f_1006a013();
  /* 1006c1e7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1006c1e9 pop ecx */
  ECX = (pop32());
  /* 1006c1ea cmp dword ptr [0x10077c20], esi */
  { uint32_t _a=(r32((uint32_t)(0x10077c20))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c1f0 jle 0x1006c266 */
  if ((C.zf||C.sf!=C.of)) goto L_1006c266;
L_1006c1f2:;
  /* 1006c1f2 mov eax, dword ptr [0x10076c08] */
  EAX = (r32((uint32_t)(0x10076c08)));
  /* 1006c1f7 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1006c1fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006c1fc je 0x1006c25d */
  if (C.zf) goto L_1006c25d;
  /* 1006c1fe test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1006c202 je 0x1006c25d */
  if (C.zf) goto L_1006c25d;
  /* 1006c204 push eax */
  push32((uint32_t)(EAX));
  /* 1006c205 push esi */
  push32((uint32_t)(ESI));
  /* 1006c206 call 0x10068fbd */
  push32(0x1006c20bu); f_10068fbd();
  /* 1006c20b mov eax, dword ptr [0x10076c08] */
  EAX = (r32((uint32_t)(0x10076c08)));
  /* 1006c210 pop ecx */
  ECX = (pop32());
  /* 1006c211 pop ecx */
  ECX = (pop32());
  /* 1006c212 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1006c215 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1006c218 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 1006c21b je 0x1006c24d */
  if (C.zf) goto L_1006c24d;
  /* 1006c21d cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c222 jne 0x1006c233 */
  if (!C.zf) goto L_1006c233;
  /* 1006c224 push eax */
  push32((uint32_t)(EAX));
  /* 1006c225 call 0x1006c146 */
  push32(0x1006c22au); f_1006c146();
  /* 1006c22a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c22d pop ecx */
  ECX = (pop32());
  /* 1006c22e je 0x1006c24d */
  if (C.zf) goto L_1006c24d;
  /* 1006c230 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1006c231 jmp 0x1006c24d */
  goto L_1006c24d;
L_1006c233:;
  /* 1006c233 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c238 jne 0x1006c24d */
  if (!C.zf) goto L_1006c24d;
  /* 1006c23a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 1006c23d je 0x1006c24d */
  if (C.zf) goto L_1006c24d;
  /* 1006c23f push eax */
  push32((uint32_t)(EAX));
  /* 1006c240 call 0x1006c146 */
  push32(0x1006c245u); f_1006c146();
  /* 1006c245 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c248 pop ecx */
  ECX = (pop32());
  /* 1006c249 jne 0x1006c24d */
  if (!C.zf) goto L_1006c24d;
  /* 1006c24b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_1006c24d:;
  /* 1006c24d mov eax, dword ptr [0x10076c08] */
  EAX = (r32((uint32_t)(0x10076c08)));
  /* 1006c252 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 1006c255 push esi */
  push32((uint32_t)(ESI));
  /* 1006c256 call 0x1006900f */
  push32(0x1006c25bu); f_1006900f();
  /* 1006c25b pop ecx */
  ECX = (pop32());
  /* 1006c25c pop ecx */
  ECX = (pop32());
L_1006c25d:;
  /* 1006c25d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006c25e cmp esi, dword ptr [0x10077c20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10077c20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c264 jl 0x1006c1f2 */
  if ((C.sf!=C.of)) goto L_1006c1f2;
L_1006c266:;
  /* 1006c266 push 2 */
  push32((uint32_t)(0x2u));
  /* 1006c268 call 0x1006a074 */
  push32(0x1006c26du); f_1006a074();
  /* 1006c26d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c272 pop ecx */
  ECX = (pop32());
  /* 1006c273 mov eax, ebx */
  EAX = (EBX);
  /* 1006c275 je 0x1006c279 */
  if (C.zf) goto L_1006c279;
  /* 1006c277 mov eax, edi */
  EAX = (EDI);
L_1006c279:;
  /* 1006c279 pop edi */
  EDI = (pop32());
  /* 1006c27a pop esi */
  ESI = (pop32());
  /* 1006c27b pop ebx */
  EBX = (pop32());
  /* 1006c27c ret  */
  ESPCHK(0x1006c1d9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c27d @ 0x1006c27d (318 bytes, 123 insns) */
void f_1006c27d(void) {
  FTRACE(0x1006c27du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006c27d push ebp */
  push32((uint32_t)(EBP));
  /* 1006c27e mov ebp, esp */
  EBP = (ESP);
  /* 1006c280 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1006c282 push 0x1006e560 */
  push32((uint32_t)(0x1006e560u));
  /* 1006c287 push 0x1006d030 */
  push32((uint32_t)(0x1006d030u));
  /* 1006c28c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1006c292 push eax */
  push32((uint32_t)(EAX));
  /* 1006c293 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1006c29a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006c29d push ebx */
  push32((uint32_t)(EBX));
  /* 1006c29e push esi */
  push32((uint32_t)(ESI));
  /* 1006c29f push edi */
  push32((uint32_t)(EDI));
  /* 1006c2a0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1006c2a3 mov eax, dword ptr [0x10076874] */
  EAX = (r32((uint32_t)(0x10076874)));
  /* 1006c2a8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006c2aa cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c2ac jne 0x1006c2ec */
  if (!C.zf) goto L_1006c2ec;
  /* 1006c2ae lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1006c2b1 push eax */
  push32((uint32_t)(EAX));
  /* 1006c2b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006c2b4 pop esi */
  ESI = (pop32());
  /* 1006c2b5 push esi */
  push32((uint32_t)(ESI));
  /* 1006c2b6 push 0x1006e558 */
  push32((uint32_t)(0x1006e558u));
  /* 1006c2bb push esi */
  push32((uint32_t)(ESI));
  /* 1006c2bc call dword ptr [0x1006e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0c0))), 0x1006c2c2u);
  /* 1006c2c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006c2c4 je 0x1006c2ca */
  if (C.zf) goto L_1006c2ca;
  /* 1006c2c6 mov eax, esi */
  EAX = (ESI);
  /* 1006c2c8 jmp 0x1006c2e7 */
  goto L_1006c2e7;
L_1006c2ca:;
  /* 1006c2ca lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1006c2cd push eax */
  push32((uint32_t)(EAX));
  /* 1006c2ce push esi */
  push32((uint32_t)(ESI));
  /* 1006c2cf push 0x1006e554 */
  push32((uint32_t)(0x1006e554u));
  /* 1006c2d4 push esi */
  push32((uint32_t)(ESI));
  /* 1006c2d5 push ebx */
  push32((uint32_t)(EBX));
  /* 1006c2d6 call dword ptr [0x1006e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0bc))), 0x1006c2dcu);
  /* 1006c2dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006c2de je 0x1006c3b2 */
  if (C.zf) goto L_1006c3b2;
  /* 1006c2e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1006c2e6 pop eax */
  EAX = (pop32());
L_1006c2e7:;
  /* 1006c2e7 mov dword ptr [0x10076874], eax */
  w32((uint32_t)(0x10076874), (EAX));
L_1006c2ec:;
  /* 1006c2ec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c2ef jne 0x1006c315 */
  if (!C.zf) goto L_1006c315;
  /* 1006c2f1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1006c2f4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c2f6 jne 0x1006c2fd */
  if (!C.zf) goto L_1006c2fd;
  /* 1006c2f8 mov eax, dword ptr [0x10076848] */
  EAX = (r32((uint32_t)(0x10076848)));
L_1006c2fd:;
  /* 1006c2fd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1006c300 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1006c303 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1006c306 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1006c309 push eax */
  push32((uint32_t)(EAX));
  /* 1006c30a call dword ptr [0x1006e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0bc))), 0x1006c310u);
  /* 1006c310 jmp 0x1006c3b4 */
  goto L_1006c3b4;
L_1006c315:;
  /* 1006c315 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c318 jne 0x1006c3b2 */
  if (!C.zf) goto L_1006c3b2;
  /* 1006c31e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c321 jne 0x1006c32b */
  if (!C.zf) goto L_1006c32b;
  /* 1006c323 mov eax, dword ptr [0x10076858] */
  EAX = (r32((uint32_t)(0x10076858)));
  /* 1006c328 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1006c32b:;
  /* 1006c32b push ebx */
  push32((uint32_t)(EBX));
  /* 1006c32c push ebx */
  push32((uint32_t)(EBX));
  /* 1006c32d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1006c330 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1006c333 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1006c336 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1006c338 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006c33a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1006c33d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006c33e push eax */
  push32((uint32_t)(EAX));
  /* 1006c33f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1006c342 call dword ptr [0x1006e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0b8))), 0x1006c348u);
  /* 1006c348 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1006c34b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c34d je 0x1006c3b2 */
  if (C.zf) goto L_1006c3b2;
  /* 1006c34f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1006c352 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1006c355 mov eax, edi */
  EAX = (EDI);
  /* 1006c357 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006c35a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1006c35c call 0x1006aed0 */
  push32(0x1006c361u); f_1006aed0();
  /* 1006c361 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1006c364 mov esi, esp */
  ESI = (ESP);
  /* 1006c366 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1006c369 push edi */
  push32((uint32_t)(EDI));
  /* 1006c36a push ebx */
  push32((uint32_t)(EBX));
  /* 1006c36b push esi */
  push32((uint32_t)(ESI));
  /* 1006c36c call 0x10069be0 */
  push32(0x1006c371u); f_10069be0();
  /* 1006c371 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006c374 jmp 0x1006c381 */
  goto L_1006c381;
  /* 1006c376 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006c378 pop eax */
  EAX = (pop32());
  /* 1006c379 ret  */
  ESPCHK(0x1006c27du, _esp0);
  ESP += 4; return;
  /* 1006c37a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1006c37d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006c37f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1006c381:;
  /* 1006c381 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006c385 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c387 je 0x1006c3b2 */
  if (C.zf) goto L_1006c3b2;
  /* 1006c389 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1006c38c push esi */
  push32((uint32_t)(ESI));
  /* 1006c38d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1006c390 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1006c393 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006c395 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1006c398 call dword ptr [0x1006e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0b8))), 0x1006c39eu);
  /* 1006c39e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c3a0 je 0x1006c3b2 */
  if (C.zf) goto L_1006c3b2;
  /* 1006c3a2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1006c3a5 push eax */
  push32((uint32_t)(EAX));
  /* 1006c3a6 push esi */
  push32((uint32_t)(ESI));
  /* 1006c3a7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1006c3aa call dword ptr [0x1006e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0c0))), 0x1006c3b0u);
  /* 1006c3b0 jmp 0x1006c3b4 */
  goto L_1006c3b4;
L_1006c3b2:;
  /* 1006c3b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1006c3b4:;
  /* 1006c3b4 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1006c3b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1006c3ba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1006c3c1 pop edi */
  EDI = (pop32());
  /* 1006c3c2 pop esi */
  ESI = (pop32());
  /* 1006c3c3 pop ebx */
  EBX = (pop32());
  /* 1006c3c4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006c3c5 ret  */
  ESPCHK(0x1006c27du, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3c6 @ 0x1006c3c6 (511 bytes, 193 insns) */
void f_1006c3c6(void) {
  FTRACE(0x1006c3c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006c3c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1006c3c7 mov ebp, esp */
  EBP = (ESP);
  /* 1006c3c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1006c3cb push 0x1006e570 */
  push32((uint32_t)(0x1006e570u));
  /* 1006c3d0 push 0x1006d030 */
  push32((uint32_t)(0x1006d030u));
  /* 1006c3d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1006c3db push eax */
  push32((uint32_t)(EAX));
  /* 1006c3dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1006c3e3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006c3e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1006c3e7 push esi */
  push32((uint32_t)(ESI));
  /* 1006c3e8 push edi */
  push32((uint32_t)(EDI));
  /* 1006c3e9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1006c3ec xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1006c3ee cmp dword ptr [0x10076878], edi */
  { uint32_t _a=(r32((uint32_t)(0x10076878))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c3f4 jne 0x1006c43c */
  if (!C.zf) goto L_1006c43c;
  /* 1006c3f6 push edi */
  push32((uint32_t)(EDI));
  /* 1006c3f7 push edi */
  push32((uint32_t)(EDI));
  /* 1006c3f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006c3fa pop ebx */
  EBX = (pop32());
  /* 1006c3fb push ebx */
  push32((uint32_t)(EBX));
  /* 1006c3fc push 0x1006e558 */
  push32((uint32_t)(0x1006e558u));
  /* 1006c401 mov esi, 0x100 */
  ESI = (0x100u);
  /* 1006c406 push esi */
  push32((uint32_t)(ESI));
  /* 1006c407 push edi */
  push32((uint32_t)(EDI));
  /* 1006c408 call dword ptr [0x1006e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0c8))), 0x1006c40eu);
  /* 1006c40e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006c410 je 0x1006c41a */
  if (C.zf) goto L_1006c41a;
  /* 1006c412 mov dword ptr [0x10076878], ebx */
  w32((uint32_t)(0x10076878), (EBX));
  /* 1006c418 jmp 0x1006c43c */
  goto L_1006c43c;
L_1006c41a:;
  /* 1006c41a push edi */
  push32((uint32_t)(EDI));
  /* 1006c41b push edi */
  push32((uint32_t)(EDI));
  /* 1006c41c push ebx */
  push32((uint32_t)(EBX));
  /* 1006c41d push 0x1006e554 */
  push32((uint32_t)(0x1006e554u));
  /* 1006c422 push esi */
  push32((uint32_t)(ESI));
  /* 1006c423 push edi */
  push32((uint32_t)(EDI));
  /* 1006c424 call dword ptr [0x1006e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0c4))), 0x1006c42au);
  /* 1006c42a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006c42c je 0x1006c554 */
  if (C.zf) goto L_1006c554;
  /* 1006c432 mov dword ptr [0x10076878], 2 */
  w32((uint32_t)(0x10076878), (0x2u));
L_1006c43c:;
  /* 1006c43c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c43f jle 0x1006c451 */
  if ((C.zf||C.sf!=C.of)) goto L_1006c451;
  /* 1006c441 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1006c444 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1006c447 call 0x1006c5ea */
  push32(0x1006c44cu); f_1006c5ea();
  /* 1006c44c pop ecx */
  ECX = (pop32());
  /* 1006c44d pop ecx */
  ECX = (pop32());
  /* 1006c44e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1006c451:;
  /* 1006c451 mov eax, dword ptr [0x10076878] */
  EAX = (r32((uint32_t)(0x10076878)));
  /* 1006c456 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c459 jne 0x1006c478 */
  if (!C.zf) goto L_1006c478;
  /* 1006c45b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1006c45e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1006c461 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1006c464 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1006c467 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1006c46a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1006c46d call dword ptr [0x1006e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0c4))), 0x1006c473u);
  /* 1006c473 jmp 0x1006c556 */
  goto L_1006c556;
L_1006c478:;
  /* 1006c478 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c47b jne 0x1006c554 */
  if (!C.zf) goto L_1006c554;
  /* 1006c481 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c484 jne 0x1006c48e */
  if (!C.zf) goto L_1006c48e;
  /* 1006c486 mov eax, dword ptr [0x10076858] */
  EAX = (r32((uint32_t)(0x10076858)));
  /* 1006c48b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1006c48e:;
  /* 1006c48e push edi */
  push32((uint32_t)(EDI));
  /* 1006c48f push edi */
  push32((uint32_t)(EDI));
  /* 1006c490 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1006c493 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1006c496 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1006c499 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1006c49b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006c49d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1006c4a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006c4a1 push eax */
  push32((uint32_t)(EAX));
  /* 1006c4a2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1006c4a5 call dword ptr [0x1006e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0b8))), 0x1006c4abu);
  /* 1006c4ab mov ebx, eax */
  EBX = (EAX);
  /* 1006c4ad mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1006c4b0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c4b2 je 0x1006c554 */
  if (C.zf) goto L_1006c554;
  /* 1006c4b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1006c4bb lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1006c4be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006c4c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1006c4c3 call 0x1006aed0 */
  push32(0x1006c4c8u); f_1006aed0();
  /* 1006c4c8 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1006c4cb mov eax, esp */
  EAX = (ESP);
  /* 1006c4cd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1006c4d0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006c4d4 jmp 0x1006c4e9 */
  goto L_1006c4e9;
  /* 1006c4d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006c4d8 pop eax */
  EAX = (pop32());
  /* 1006c4d9 ret  */
  ESPCHK(0x1006c3c6u, _esp0);
  ESP += 4; return;
  /* 1006c4da mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1006c4dd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1006c4df mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1006c4e2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006c4e6 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_1006c4e9:;
  /* 1006c4e9 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c4ec je 0x1006c554 */
  if (C.zf) goto L_1006c554;
  /* 1006c4ee push ebx */
  push32((uint32_t)(EBX));
  /* 1006c4ef push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1006c4f2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1006c4f5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1006c4f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006c4fa push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1006c4fd call dword ptr [0x1006e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0b8))), 0x1006c503u);
  /* 1006c503 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006c505 je 0x1006c554 */
  if (C.zf) goto L_1006c554;
  /* 1006c507 push edi */
  push32((uint32_t)(EDI));
  /* 1006c508 push edi */
  push32((uint32_t)(EDI));
  /* 1006c509 push ebx */
  push32((uint32_t)(EBX));
  /* 1006c50a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1006c50d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1006c510 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1006c513 call dword ptr [0x1006e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0c8))), 0x1006c519u);
  /* 1006c519 mov esi, eax */
  ESI = (EAX);
  /* 1006c51b mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1006c51e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c520 je 0x1006c554 */
  if (C.zf) goto L_1006c554;
  /* 1006c522 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 1006c526 je 0x1006c568 */
  if (C.zf) goto L_1006c568;
  /* 1006c528 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c52b je 0x1006c5e3 */
  if (C.zf) goto L_1006c5e3;
  /* 1006c531 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c534 jg 0x1006c554 */
  if ((!C.zf&&C.sf==C.of)) goto L_1006c554;
  /* 1006c536 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1006c539 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1006c53c push ebx */
  push32((uint32_t)(EBX));
  /* 1006c53d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1006c540 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1006c543 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1006c546 call dword ptr [0x1006e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0c8))), 0x1006c54cu);
  /* 1006c54c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006c54e jne 0x1006c5e3 */
  if (!C.zf) goto L_1006c5e3;
L_1006c554:;
  /* 1006c554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1006c556:;
  /* 1006c556 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1006c559 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1006c55c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1006c563 pop edi */
  EDI = (pop32());
  /* 1006c564 pop esi */
  ESI = (pop32());
  /* 1006c565 pop ebx */
  EBX = (pop32());
  /* 1006c566 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006c567 ret  */
  ESPCHK(0x1006c3c6u, _esp0);
  ESP += 4; return;
L_1006c568:;
  /* 1006c568 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1006c56f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1006c572 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006c575 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1006c577 call 0x1006aed0 */
  push32(0x1006c57cu); f_1006aed0();
  /* 1006c57c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1006c57f mov ebx, esp */
  EBX = (ESP);
  /* 1006c581 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1006c584 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006c588 jmp 0x1006c59c */
  goto L_1006c59c;
  /* 1006c58a push 1 */
  push32((uint32_t)(0x1u));
  /* 1006c58c pop eax */
  EAX = (pop32());
  /* 1006c58d ret  */
  ESPCHK(0x1006c3c6u, _esp0);
  ESP += 4; return;
  /* 1006c58e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1006c591 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1006c593 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006c595 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006c599 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_1006c59c:;
  /* 1006c59c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c59e je 0x1006c554 */
  if (C.zf) goto L_1006c554;
  /* 1006c5a0 push esi */
  push32((uint32_t)(ESI));
  /* 1006c5a1 push ebx */
  push32((uint32_t)(EBX));
  /* 1006c5a2 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1006c5a5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1006c5a8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1006c5ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1006c5ae call dword ptr [0x1006e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0c8))), 0x1006c5b4u);
  /* 1006c5b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006c5b6 je 0x1006c554 */
  if (C.zf) goto L_1006c554;
  /* 1006c5b8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c5bb push edi */
  push32((uint32_t)(EDI));
  /* 1006c5bc push edi */
  push32((uint32_t)(EDI));
  /* 1006c5bd jne 0x1006c5c3 */
  if (!C.zf) goto L_1006c5c3;
  /* 1006c5bf push edi */
  push32((uint32_t)(EDI));
  /* 1006c5c0 push edi */
  push32((uint32_t)(EDI));
  /* 1006c5c1 jmp 0x1006c5c9 */
  goto L_1006c5c9;
L_1006c5c3:;
  /* 1006c5c3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1006c5c6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_1006c5c9:;
  /* 1006c5c9 push esi */
  push32((uint32_t)(ESI));
  /* 1006c5ca push ebx */
  push32((uint32_t)(EBX));
  /* 1006c5cb push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1006c5d0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1006c5d3 call dword ptr [0x1006e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e060))), 0x1006c5d9u);
  /* 1006c5d9 mov esi, eax */
  ESI = (EAX);
  /* 1006c5db cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c5dd je 0x1006c554 */
  if (C.zf) goto L_1006c554;
L_1006c5e3:;
  /* 1006c5e3 mov eax, esi */
  EAX = (ESI);
  /* 1006c5e5 jmp 0x1006c556 */
  goto L_1006c556;
}

/* FUN_1000c5ea @ 0x1006c5ea (43 bytes, 20 insns) */
void f_1006c5ea(void) {
  FTRACE(0x1006c5eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006c5ea mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1006c5ee mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006c5f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1006c5f4 push esi */
  push32((uint32_t)(ESI));
  /* 1006c5f5 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 1006c5f8 je 0x1006c607 */
  if (C.zf) goto L_1006c607;
L_1006c5fa:;
  /* 1006c5fa cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c5fd je 0x1006c607 */
  if (C.zf) goto L_1006c607;
  /* 1006c5ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006c600 mov esi, ecx */
  ESI = (ECX);
  /* 1006c602 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1006c603 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1006c605 jne 0x1006c5fa */
  if (!C.zf) goto L_1006c5fa;
L_1006c607:;
  /* 1006c607 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c60a pop esi */
  ESI = (pop32());
  /* 1006c60b jne 0x1006c612 */
  if (!C.zf) goto L_1006c612;
  /* 1006c60d sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006c611 ret  */
  ESPCHK(0x1006c5eau, _esp0);
  ESP += 4; return;
L_1006c612:;
  /* 1006c612 mov eax, edx */
  EAX = (EDX);
  /* 1006c614 ret  */
  ESPCHK(0x1006c5eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000c615 @ 0x1006c615 (33 bytes, 15 insns) */
void f_1006c615(void) {
  FTRACE(0x1006c615u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006c615 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006c619 push esi */
  push32((uint32_t)(ESI));
  /* 1006c61a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1006c61e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006c620 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 1006c623 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c625 jb 0x1006c62b */
  if (C.cf) goto L_1006c62b;
  /* 1006c627 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c629 jae 0x1006c62e */
  if (!C.cf) goto L_1006c62e;
L_1006c62b:;
  /* 1006c62b push 1 */
  push32((uint32_t)(0x1u));
  /* 1006c62d pop eax */
  EAX = (pop32());
L_1006c62e:;
  /* 1006c62e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1006c632 pop esi */
  ESI = (pop32());
  /* 1006c633 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1006c635 ret  */
  ESPCHK(0x1006c615u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x1006c636 (94 bytes, 38 insns) */
void f_1006c636(void) {
  FTRACE(0x1006c636u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006c636 push esi */
  push32((uint32_t)(ESI));
  /* 1006c637 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1006c63b push edi */
  push32((uint32_t)(EDI));
  /* 1006c63c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1006c640 push esi */
  push32((uint32_t)(ESI));
  /* 1006c641 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1006c643 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1006c645 call 0x1006c615 */
  push32(0x1006c64au); f_1006c615();
  /* 1006c64a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006c64d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006c64f je 0x1006c668 */
  if (C.zf) goto L_1006c668;
  /* 1006c651 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1006c654 push eax */
  push32((uint32_t)(EAX));
  /* 1006c655 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006c657 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1006c659 call 0x1006c615 */
  push32(0x1006c65eu); f_1006c615();
  /* 1006c65e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006c661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006c663 je 0x1006c668 */
  if (C.zf) goto L_1006c668;
  /* 1006c665 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1006c668:;
  /* 1006c668 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1006c66b push eax */
  push32((uint32_t)(EAX));
  /* 1006c66c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 1006c66f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1006c671 call 0x1006c615 */
  push32(0x1006c676u); f_1006c615();
  /* 1006c676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006c679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006c67b je 0x1006c680 */
  if (C.zf) goto L_1006c680;
  /* 1006c67d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1006c680:;
  /* 1006c680 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 1006c683 push eax */
  push32((uint32_t)(EAX));
  /* 1006c684 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1006c687 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1006c689 call 0x1006c615 */
  push32(0x1006c68eu); f_1006c615();
  /* 1006c68e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006c691 pop edi */
  EDI = (pop32());
  /* 1006c692 pop esi */
  ESI = (pop32());
  /* 1006c693 ret  */
  ESPCHK(0x1006c636u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c694 @ 0x1006c694 (46 bytes, 21 insns) */
void f_1006c694(void) {
  FTRACE(0x1006c694u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006c694 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006c698 push esi */
  push32((uint32_t)(ESI));
  /* 1006c699 push edi */
  push32((uint32_t)(EDI));
  /* 1006c69a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 1006c69c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 1006c69f mov ecx, esi */
  ECX = (ESI);
  /* 1006c6a1 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006c6a3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1006c6a5 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 1006c6a8 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1006c6ab or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1006c6ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1006c6b0 mov edx, edi */
  EDX = (EDI);
  /* 1006c6b2 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 1006c6b5 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 1006c6b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1006c6ba or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1006c6bc pop edi */
  EDI = (pop32());
  /* 1006c6bd mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1006c6c0 pop esi */
  ESI = (pop32());
  /* 1006c6c1 ret  */
  ESPCHK(0x1006c694u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6c2 @ 0x1006c6c2 (45 bytes, 21 insns) */
void f_1006c6c2(void) {
  FTRACE(0x1006c6c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006c6c2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1006c6c6 push esi */
  push32((uint32_t)(ESI));
  /* 1006c6c7 push edi */
  push32((uint32_t)(EDI));
  /* 1006c6c8 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 1006c6cb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1006c6ce mov esi, edx */
  ESI = (EDX);
  /* 1006c6d0 mov edi, ecx */
  EDI = (ECX);
  /* 1006c6d2 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 1006c6d5 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1006c6d7 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1006c6d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1006c6dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1006c6de shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 1006c6e1 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1006c6e3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1006c6e5 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1006c6e7 pop edi */
  EDI = (pop32());
  /* 1006c6e8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1006c6eb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1006c6ed pop esi */
  ESI = (pop32());
  /* 1006c6ee ret  */
  ESPCHK(0x1006c6c2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6ef @ 0x1006c6ef (199 bytes, 76 insns) */
void f_1006c6ef(void) {
  FTRACE(0x1006c6efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006c6ef push ebp */
  push32((uint32_t)(EBP));
  /* 1006c6f0 mov ebp, esp */
  EBP = (ESP);
  /* 1006c6f2 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006c6f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006c6f8 push ebx */
  push32((uint32_t)(EBX));
  /* 1006c6f9 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1006c6fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1006c6fe cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c700 push esi */
  push32((uint32_t)(ESI));
  /* 1006c701 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 1006c708 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 1006c70a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 1006c70d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 1006c710 jbe 0x1006c763 */
  if ((C.cf||C.zf)) goto L_1006c763;
  /* 1006c712 push edi */
  push32((uint32_t)(EDI));
  /* 1006c713 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1006c716:;
  /* 1006c716 mov esi, ebx */
  ESI = (EBX);
  /* 1006c718 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 1006c71b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1006c71c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1006c71d push ebx */
  push32((uint32_t)(EBX));
  /* 1006c71e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1006c71f call 0x1006c694 */
  push32(0x1006c724u); f_1006c694();
  /* 1006c724 push ebx */
  push32((uint32_t)(EBX));
  /* 1006c725 call 0x1006c694 */
  push32(0x1006c72au); f_1006c694();
  /* 1006c72a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1006c72d push eax */
  push32((uint32_t)(EAX));
  /* 1006c72e push ebx */
  push32((uint32_t)(EBX));
  /* 1006c72f call 0x1006c636 */
  push32(0x1006c734u); f_1006c636();
  /* 1006c734 push ebx */
  push32((uint32_t)(EBX));
  /* 1006c735 call 0x1006c694 */
  push32(0x1006c73au); f_1006c694();
  /* 1006c73a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006c73d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 1006c741 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1006c745 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1006c748 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1006c74b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1006c74e push eax */
  push32((uint32_t)(EAX));
  /* 1006c74f push ebx */
  push32((uint32_t)(EBX));
  /* 1006c750 call 0x1006c636 */
  push32(0x1006c755u); f_1006c636();
  /* 1006c755 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006c758 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1006c75b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 1006c75e jne 0x1006c716 */
  if (!C.zf) goto L_1006c716;
  /* 1006c760 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1006c762 pop edi */
  EDI = (pop32());
L_1006c763:;
  /* 1006c763 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c766 jne 0x1006c790 */
  if (!C.zf) goto L_1006c790;
  /* 1006c768 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1006c76b mov eax, ecx */
  EAX = (ECX);
  /* 1006c76d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1006c770 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 1006c773 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1006c775 mov esi, eax */
  ESI = (EAX);
  /* 1006c777 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1006c77a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 1006c77d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1006c77f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1006c782 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1006c789 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 1006c78c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1006c78e jmp 0x1006c763 */
  goto L_1006c763;
L_1006c790:;
  /* 1006c790 mov esi, 0x8000 */
  ESI = (0x8000u);
L_1006c795:;
  /* 1006c795 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 1006c798 jne 0x1006c7aa */
  if (!C.zf) goto L_1006c7aa;
  /* 1006c79a push ebx */
  push32((uint32_t)(EBX));
  /* 1006c79b call 0x1006c694 */
  push32(0x1006c7a0u); f_1006c694();
  /* 1006c7a0 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1006c7a7 pop ecx */
  ECX = (pop32());
  /* 1006c7a8 jmp 0x1006c795 */
  goto L_1006c795;
L_1006c7aa:;
  /* 1006c7aa mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1006c7ae pop esi */
  ESI = (pop32());
  /* 1006c7af mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 1006c7b3 pop ebx */
  EBX = (pop32());
  /* 1006c7b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006c7b5 ret  */
  ESPCHK(0x1006c6efu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7b6 @ 0x1006c7b6 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_1006c7b6(void) {
  FTRACE(0x1006c7b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006c7b6 push ebp */
  push32((uint32_t)(EBP));
  /* 1006c7b7 mov ebp, esp */
  EBP = (ESP);
  /* 1006c7b9 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006c7bc push ebx */
  push32((uint32_t)(EBX));
  /* 1006c7bd push esi */
  push32((uint32_t)(ESI));
  /* 1006c7be push edi */
  push32((uint32_t)(EDI));
  /* 1006c7bf mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1006c7c2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1006c7c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006c7c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1006c7ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006c7cc pop edx */
  EDX = (pop32());
  /* 1006c7cd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1006c7d0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1006c7d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1006c7d6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1006c7d9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1006c7dc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1006c7df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1006c7e2 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1006c7e5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1006c7e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1006c7eb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1006c7ee mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_1006c7f1:;
  /* 1006c7f1 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 1006c7f3 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c7f6 je 0x1006c807 */
  if (C.zf) goto L_1006c807;
  /* 1006c7f8 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c7fb je 0x1006c807 */
  if (C.zf) goto L_1006c807;
  /* 1006c7fd cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c800 je 0x1006c807 */
  if (C.zf) goto L_1006c807;
  /* 1006c802 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c805 jne 0x1006c80a */
  if (!C.zf) goto L_1006c80a;
L_1006c807:;
  /* 1006c807 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006c808 jmp 0x1006c7f1 */
  goto L_1006c7f1;
L_1006c80a:;
  /* 1006c80a push 4 */
  push32((uint32_t)(0x4u));
  /* 1006c80c pop esi */
  ESI = (pop32());
L_1006c80d:;
  /* 1006c80d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1006c80f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006c810 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c813 ja 0x1006ca90 */
  if ((!C.cf&&!C.zf)) goto L_1006ca90;
  /* 1006c819 jmp dword ptr [eax*4 + 0x1006cc57] */
  switch (EAX) {
    case 0: goto L_1006c820;
    case 1: goto L_1006c86f;
    case 2: goto L_1006c8c6;
    case 3: goto L_1006c8f0;
    case 4: goto L_1006c94b;
    case 5: goto L_1006c9c2;
    case 6: goto L_1006c9f8;
    case 7: goto L_1006ca42;
    case 8: goto L_1006ca21;
    case 9: goto L_1006caa6;
    case 10: goto L_1006ca90;
    case 11: goto L_1006ca5c;
    default: x86_unimpl("switch@0x1006c819 out of table"); return;
  }
L_1006c820:;
  /* 1006c820 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c823 jl 0x1006c831 */
  if ((C.sf!=C.of)) goto L_1006c831;
  /* 1006c825 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c828 jg 0x1006c831 */
  if ((!C.zf&&C.sf==C.of)) goto L_1006c831;
L_1006c82a:;
  /* 1006c82a push 3 */
  push32((uint32_t)(0x3u));
  /* 1006c82c jmp 0x1006ca4e */
  goto L_1006ca4e;
L_1006c831:;
  /* 1006c831 cmp bl, byte ptr [0x10070bf4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10070bf4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c837 jne 0x1006c840 */
  if (!C.zf) goto L_1006c840;
L_1006c839:;
  /* 1006c839 push 5 */
  push32((uint32_t)(0x5u));
  /* 1006c83b jmp 0x1006ca86 */
  goto L_1006ca86;
L_1006c840:;
  /* 1006c840 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1006c843 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006c846 je 0x1006c866 */
  if (C.zf) goto L_1006c866;
  /* 1006c848 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006c849 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006c84a je 0x1006c85a */
  if (C.zf) goto L_1006c85a;
  /* 1006c84c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006c84f jne 0x1006cb29 */
  if (!C.zf) goto L_1006cb29;
  /* 1006c855 jmp 0x1006c8e9 */
  goto L_1006c8e9;
L_1006c85a:;
  /* 1006c85a push 2 */
  push32((uint32_t)(0x2u));
  /* 1006c85c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 1006c863 pop eax */
  EAX = (pop32());
  /* 1006c864 jmp 0x1006c80d */
  goto L_1006c80d;
L_1006c866:;
  /* 1006c866 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 1006c86a push 2 */
  push32((uint32_t)(0x2u));
  /* 1006c86c pop eax */
  EAX = (pop32());
  /* 1006c86d jmp 0x1006c80d */
  goto L_1006c80d;
L_1006c86f:;
  /* 1006c86f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c872 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1006c875 jl 0x1006c87c */
  if ((C.sf!=C.of)) goto L_1006c87c;
  /* 1006c877 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c87a jle 0x1006c82a */
  if ((C.zf||C.sf!=C.of)) goto L_1006c82a;
L_1006c87c:;
  /* 1006c87c cmp bl, byte ptr [0x10070bf4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10070bf4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c882 je 0x1006c944 */
  if (C.zf) goto L_1006c944;
  /* 1006c888 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c88b je 0x1006c8be */
  if (C.zf) goto L_1006c8be;
  /* 1006c88d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c890 je 0x1006c8be */
  if (C.zf) goto L_1006c8be;
  /* 1006c892 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c895 je 0x1006c8e9 */
  if (C.zf) goto L_1006c8e9;
L_1006c897:;
  /* 1006c897 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c89a jle 0x1006cb29 */
  if ((C.zf||C.sf!=C.of)) goto L_1006cb29;
  /* 1006c8a0 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c8a3 jle 0x1006c8b7 */
  if ((C.zf||C.sf!=C.of)) goto L_1006c8b7;
  /* 1006c8a5 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c8a8 jle 0x1006cb29 */
  if ((C.zf||C.sf!=C.of)) goto L_1006cb29;
  /* 1006c8ae cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c8b1 jg 0x1006cb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_1006cb29;
L_1006c8b7:;
  /* 1006c8b7 push 6 */
  push32((uint32_t)(0x6u));
  /* 1006c8b9 jmp 0x1006ca86 */
  goto L_1006ca86;
L_1006c8be:;
  /* 1006c8be dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1006c8bf push 0xb */
  push32((uint32_t)(0xbu));
  /* 1006c8c1 jmp 0x1006ca86 */
  goto L_1006ca86;
L_1006c8c6:;
  /* 1006c8c6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c8c9 jl 0x1006c8d4 */
  if ((C.sf!=C.of)) goto L_1006c8d4;
  /* 1006c8cb cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c8ce jle 0x1006c82a */
  if ((C.zf||C.sf!=C.of)) goto L_1006c82a;
L_1006c8d4:;
  /* 1006c8d4 cmp bl, byte ptr [0x10070bf4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10070bf4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c8da je 0x1006c839 */
  if (C.zf) goto L_1006c839;
  /* 1006c8e0 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c8e3 jne 0x1006ca9e */
  if (!C.zf) goto L_1006ca9e;
L_1006c8e9:;
  /* 1006c8e9 mov eax, edx */
  EAX = (EDX);
  /* 1006c8eb jmp 0x1006c80d */
  goto L_1006c80d;
L_1006c8f0:;
  /* 1006c8f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1006c8f3:;
  /* 1006c8f3 cmp dword ptr [0x10070bf0], edx */
  { uint32_t _a=(r32((uint32_t)(0x10070bf0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c8f9 jle 0x1006c90c */
  if ((C.zf||C.sf!=C.of)) goto L_1006c90c;
  /* 1006c8fb movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1006c8fe push esi */
  push32((uint32_t)(ESI));
  /* 1006c8ff push eax */
  push32((uint32_t)(EAX));
  /* 1006c900 call 0x100693cb */
  push32(0x1006c905u); f_100693cb();
  /* 1006c905 pop ecx */
  ECX = (pop32());
  /* 1006c906 pop ecx */
  ECX = (pop32());
  /* 1006c907 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006c909 pop edx */
  EDX = (pop32());
  /* 1006c90a jmp 0x1006c91a */
  goto L_1006c91a;
L_1006c90c:;
  /* 1006c90c mov ecx, dword ptr [0x100709e0] */
  ECX = (r32((uint32_t)(0x100709e0)));
  /* 1006c912 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1006c915 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1006c918 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1006c91a:;
  /* 1006c91a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006c91c je 0x1006c93c */
  if (C.zf) goto L_1006c93c;
  /* 1006c91e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c922 jae 0x1006c934 */
  if (!C.cf) goto L_1006c934;
  /* 1006c924 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1006c927 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1006c92a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1006c92d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1006c930 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 1006c932 jmp 0x1006c937 */
  goto L_1006c937;
L_1006c934:;
  /* 1006c934 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_1006c937:;
  /* 1006c937 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1006c939 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006c93a jmp 0x1006c8f3 */
  goto L_1006c8f3;
L_1006c93c:;
  /* 1006c93c cmp bl, byte ptr [0x10070bf4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10070bf4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c942 jne 0x1006c9ab */
  if (!C.zf) goto L_1006c9ab;
L_1006c944:;
  /* 1006c944 mov eax, esi */
  EAX = (ESI);
  /* 1006c946 jmp 0x1006c80d */
  goto L_1006c80d;
L_1006c94b:;
  /* 1006c94b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c94f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1006c952 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1006c955 jne 0x1006c964 */
  if (!C.zf) goto L_1006c964;
L_1006c957:;
  /* 1006c957 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c95a jne 0x1006c964 */
  if (!C.zf) goto L_1006c964;
  /* 1006c95c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1006c95f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1006c961 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006c962 jmp 0x1006c957 */
  goto L_1006c957;
L_1006c964:;
  /* 1006c964 cmp dword ptr [0x10070bf0], edx */
  { uint32_t _a=(r32((uint32_t)(0x10070bf0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c96a jle 0x1006c97d */
  if ((C.zf||C.sf!=C.of)) goto L_1006c97d;
  /* 1006c96c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1006c96f push esi */
  push32((uint32_t)(ESI));
  /* 1006c970 push eax */
  push32((uint32_t)(EAX));
  /* 1006c971 call 0x100693cb */
  push32(0x1006c976u); f_100693cb();
  /* 1006c976 pop ecx */
  ECX = (pop32());
  /* 1006c977 pop ecx */
  ECX = (pop32());
  /* 1006c978 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006c97a pop edx */
  EDX = (pop32());
  /* 1006c97b jmp 0x1006c98b */
  goto L_1006c98b;
L_1006c97d:;
  /* 1006c97d mov ecx, dword ptr [0x100709e0] */
  ECX = (r32((uint32_t)(0x100709e0)));
  /* 1006c983 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1006c986 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1006c989 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1006c98b:;
  /* 1006c98b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006c98d je 0x1006c9ab */
  if (C.zf) goto L_1006c9ab;
  /* 1006c98f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c993 jae 0x1006c9a6 */
  if (!C.cf) goto L_1006c9a6;
  /* 1006c995 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1006c998 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1006c99b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1006c99e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1006c9a1 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1006c9a4 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_1006c9a6:;
  /* 1006c9a6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1006c9a8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006c9a9 jmp 0x1006c964 */
  goto L_1006c964;
L_1006c9ab:;
  /* 1006c9ab cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c9ae je 0x1006c8be */
  if (C.zf) goto L_1006c8be;
  /* 1006c9b4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c9b7 je 0x1006c8be */
  if (C.zf) goto L_1006c8be;
  /* 1006c9bd jmp 0x1006c897 */
  goto L_1006c897;
L_1006c9c2:;
  /* 1006c9c2 cmp dword ptr [0x10070bf0], edx */
  { uint32_t _a=(r32((uint32_t)(0x10070bf0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006c9c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1006c9cb jle 0x1006c9de */
  if ((C.zf||C.sf!=C.of)) goto L_1006c9de;
  /* 1006c9cd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1006c9d0 push esi */
  push32((uint32_t)(ESI));
  /* 1006c9d1 push eax */
  push32((uint32_t)(EAX));
  /* 1006c9d2 call 0x100693cb */
  push32(0x1006c9d7u); f_100693cb();
  /* 1006c9d7 pop ecx */
  ECX = (pop32());
  /* 1006c9d8 pop ecx */
  ECX = (pop32());
  /* 1006c9d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006c9db pop edx */
  EDX = (pop32());
  /* 1006c9dc jmp 0x1006c9ec */
  goto L_1006c9ec;
L_1006c9de:;
  /* 1006c9de mov ecx, dword ptr [0x100709e0] */
  ECX = (r32((uint32_t)(0x100709e0)));
  /* 1006c9e4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1006c9e7 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1006c9ea and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1006c9ec:;
  /* 1006c9ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006c9ee je 0x1006ca9e */
  if (C.zf) goto L_1006ca9e;
  /* 1006c9f4 mov eax, esi */
  EAX = (ESI);
  /* 1006c9f6 jmp 0x1006ca4f */
  goto L_1006ca4f;
L_1006c9f8:;
  /* 1006c9f8 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 1006c9fb cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006c9fe mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1006ca01 jl 0x1006ca08 */
  if ((C.sf!=C.of)) goto L_1006ca08;
  /* 1006ca03 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ca06 jle 0x1006ca4c */
  if ((C.zf||C.sf!=C.of)) goto L_1006ca4c;
L_1006ca08:;
  /* 1006ca08 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1006ca0b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006ca0e je 0x1006ca84 */
  if (C.zf) goto L_1006ca84;
  /* 1006ca10 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006ca11 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006ca12 je 0x1006ca78 */
  if (C.zf) goto L_1006ca78;
  /* 1006ca14 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006ca17 jne 0x1006cb2c */
  if (!C.zf) goto L_1006cb2c;
L_1006ca1d:;
  /* 1006ca1d push 8 */
  push32((uint32_t)(0x8u));
  /* 1006ca1f jmp 0x1006ca86 */
  goto L_1006ca86;
L_1006ca21:;
  /* 1006ca21 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1006ca24:;
  /* 1006ca24 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ca27 jne 0x1006ca2e */
  if (!C.zf) goto L_1006ca2e;
  /* 1006ca29 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1006ca2b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006ca2c jmp 0x1006ca24 */
  goto L_1006ca24;
L_1006ca2e:;
  /* 1006ca2e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ca31 jl 0x1006cb29 */
  if ((C.sf!=C.of)) goto L_1006cb29;
  /* 1006ca37 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ca3a jg 0x1006cb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_1006cb29;
  /* 1006ca40 jmp 0x1006ca4c */
  goto L_1006ca4c;
L_1006ca42:;
  /* 1006ca42 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ca45 jl 0x1006ca55 */
  if ((C.sf!=C.of)) goto L_1006ca55;
  /* 1006ca47 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ca4a jg 0x1006ca55 */
  if ((!C.zf&&C.sf==C.of)) goto L_1006ca55;
L_1006ca4c:;
  /* 1006ca4c push 9 */
  push32((uint32_t)(0x9u));
L_1006ca4e:;
  /* 1006ca4e pop eax */
  EAX = (pop32());
L_1006ca4f:;
  /* 1006ca4f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1006ca50 jmp 0x1006c80d */
  goto L_1006c80d;
L_1006ca55:;
  /* 1006ca55 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006ca58 jne 0x1006ca9e */
  if (!C.zf) goto L_1006ca9e;
  /* 1006ca5a jmp 0x1006ca1d */
  goto L_1006ca1d;
L_1006ca5c:;
  /* 1006ca5c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ca60 je 0x1006ca8c */
  if (C.zf) goto L_1006ca8c;
  /* 1006ca62 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1006ca65 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 1006ca68 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006ca6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1006ca6e je 0x1006ca84 */
  if (C.zf) goto L_1006ca84;
  /* 1006ca70 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006ca71 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006ca72 jne 0x1006cb2c */
  if (!C.zf) goto L_1006cb2c;
L_1006ca78:;
  /* 1006ca78 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 1006ca7c push 7 */
  push32((uint32_t)(0x7u));
  /* 1006ca7e pop eax */
  EAX = (pop32());
  /* 1006ca7f jmp 0x1006c80d */
  goto L_1006c80d;
L_1006ca84:;
  /* 1006ca84 push 7 */
  push32((uint32_t)(0x7u));
L_1006ca86:;
  /* 1006ca86 pop eax */
  EAX = (pop32());
  /* 1006ca87 jmp 0x1006c80d */
  goto L_1006c80d;
L_1006ca8c:;
  /* 1006ca8c push 0xa */
  push32((uint32_t)(0xau));
  /* 1006ca8e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1006ca8f pop eax */
  EAX = (pop32());
L_1006ca90:;
  /* 1006ca90 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ca93 je 0x1006cb2e */
  if (C.zf) goto L_1006cb2e;
  /* 1006ca99 jmp 0x1006c80d */
  goto L_1006c80d;
L_1006ca9e:;
  /* 1006ca9e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1006caa1 jmp 0x1006cb2e */
  goto L_1006cb2e;
L_1006caa6:;
  /* 1006caa6 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 1006caad xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1006caaf:;
  /* 1006caaf cmp dword ptr [0x10070bf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10070bf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cab6 jle 0x1006cac7 */
  if ((C.zf||C.sf!=C.of)) goto L_1006cac7;
  /* 1006cab8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1006cabb push 4 */
  push32((uint32_t)(0x4u));
  /* 1006cabd push eax */
  push32((uint32_t)(EAX));
  /* 1006cabe call 0x100693cb */
  push32(0x1006cac3u); f_100693cb();
  /* 1006cac3 pop ecx */
  ECX = (pop32());
  /* 1006cac4 pop ecx */
  ECX = (pop32());
  /* 1006cac5 jmp 0x1006cad6 */
  goto L_1006cad6;
L_1006cac7:;
  /* 1006cac7 mov ecx, dword ptr [0x100709e0] */
  ECX = (r32((uint32_t)(0x100709e0)));
  /* 1006cacd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1006cad0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1006cad3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1006cad6:;
  /* 1006cad6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006cad8 je 0x1006caf6 */
  if (C.zf) goto L_1006caf6;
  /* 1006cada movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1006cadd lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 1006cae0 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1006cae4 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006caea jg 0x1006caf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1006caf1;
  /* 1006caec mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1006caee inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006caef jmp 0x1006caaf */
  goto L_1006caaf;
L_1006caf1:;
  /* 1006caf1 mov esi, 0x1451 */
  ESI = (0x1451u);
L_1006caf6:;
  /* 1006caf6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_1006caf9:;
  /* 1006caf9 cmp dword ptr [0x10070bf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10070bf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cb00 jle 0x1006cb11 */
  if ((C.zf||C.sf!=C.of)) goto L_1006cb11;
  /* 1006cb02 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1006cb05 push 4 */
  push32((uint32_t)(0x4u));
  /* 1006cb07 push eax */
  push32((uint32_t)(EAX));
  /* 1006cb08 call 0x100693cb */
  push32(0x1006cb0du); f_100693cb();
  /* 1006cb0d pop ecx */
  ECX = (pop32());
  /* 1006cb0e pop ecx */
  ECX = (pop32());
  /* 1006cb0f jmp 0x1006cb20 */
  goto L_1006cb20;
L_1006cb11:;
  /* 1006cb11 mov ecx, dword ptr [0x100709e0] */
  ECX = (r32((uint32_t)(0x100709e0)));
  /* 1006cb17 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1006cb1a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1006cb1d and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1006cb20:;
  /* 1006cb20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006cb22 je 0x1006cb29 */
  if (C.zf) goto L_1006cb29;
  /* 1006cb24 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1006cb26 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006cb27 jmp 0x1006caf9 */
  goto L_1006caf9;
L_1006cb29:;
  /* 1006cb29 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1006cb2a jmp 0x1006cb2e */
  goto L_1006cb2e;
L_1006cb2c:;
  /* 1006cb2c mov edi, ecx */
  EDI = (ECX);
L_1006cb2e:;
  /* 1006cb2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006cb31 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cb35 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 1006cb37 je 0x1006cc16 */
  if (C.zf) goto L_1006cc16;
  /* 1006cb3d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1006cb3f pop eax */
  EAX = (pop32());
  /* 1006cb40 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cb43 jbe 0x1006cb5a */
  if ((C.cf||C.zf)) goto L_1006cb5a;
  /* 1006cb45 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006cb49 jl 0x1006cb4e */
  if ((C.sf!=C.of)) goto L_1006cb4e;
  /* 1006cb4b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_1006cb4e:;
  /* 1006cb4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1006cb51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1006cb54 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006cb55 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1006cb58 jmp 0x1006cb5d */
  goto L_1006cb5d;
L_1006cb5a:;
  /* 1006cb5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1006cb5d:;
  /* 1006cb5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cb61 jbe 0x1006cc0c */
  if ((C.cf||C.zf)) goto L_1006cc0c;
L_1006cb67:;
  /* 1006cb67 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006cb68 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006cb6b jne 0x1006cb75 */
  if (!C.zf) goto L_1006cb75;
  /* 1006cb6d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1006cb70 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1006cb73 jmp 0x1006cb67 */
  goto L_1006cb67;
L_1006cb75:;
  /* 1006cb75 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1006cb78 push eax */
  push32((uint32_t)(EAX));
  /* 1006cb79 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1006cb7c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1006cb7f push eax */
  push32((uint32_t)(EAX));
  /* 1006cb80 call 0x1006c6ef */
  push32(0x1006cb85u); f_1006c6ef();
  /* 1006cb85 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1006cb88 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1006cb8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006cb8d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cb90 jge 0x1006cb94 */
  if ((C.sf==C.of)) goto L_1006cb94;
  /* 1006cb92 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1006cb94:;
  /* 1006cb94 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006cb97 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cb9a jne 0x1006cb9f */
  if (!C.zf) goto L_1006cb9f;
  /* 1006cb9c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1006cb9f:;
  /* 1006cb9f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cba2 jne 0x1006cba7 */
  if (!C.zf) goto L_1006cba7;
  /* 1006cba4 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1006cba7:;
  /* 1006cba7 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cbac jle 0x1006cbde */
  if ((C.zf||C.sf!=C.of)) goto L_1006cbde;
  /* 1006cbae mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_1006cbb5:;
  /* 1006cbb5 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1006cbb8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1006cbbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1006cbbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_1006cbc1:;
  /* 1006cbc1 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cbc5 je 0x1006cc27 */
  if (C.zf) goto L_1006cc27;
  /* 1006cbc7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006cbc9 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 1006cbce mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1006cbd3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1006cbd5 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 1006cbdc jmp 0x1006cc3c */
  goto L_1006cc3c;
L_1006cbde:;
  /* 1006cbde cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cbe3 jge 0x1006cbee */
  if ((C.sf==C.of)) goto L_1006cbee;
  /* 1006cbe5 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 1006cbec jmp 0x1006cbb5 */
  goto L_1006cbb5;
L_1006cbee:;
  /* 1006cbee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1006cbf1 push eax */
  push32((uint32_t)(EAX));
  /* 1006cbf2 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1006cbf5 push eax */
  push32((uint32_t)(EAX));
  /* 1006cbf6 call 0x1006d68a */
  push32(0x1006cbfbu); f_1006d68a();
  /* 1006cbfb mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1006cbfe mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 1006cc01 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 1006cc04 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 1006cc07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006cc0a jmp 0x1006cbc1 */
  goto L_1006cbc1;
L_1006cc0c:;
  /* 1006cc0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1006cc0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006cc10 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1006cc12 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006cc14 jmp 0x1006cbc1 */
  goto L_1006cbc1;
L_1006cc16:;
  /* 1006cc16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1006cc18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006cc1a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1006cc1c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006cc1e mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 1006cc25 jmp 0x1006cc3c */
  goto L_1006cc3c;
L_1006cc27:;
  /* 1006cc27 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cc2b je 0x1006cc3c */
  if (C.zf) goto L_1006cc3c;
  /* 1006cc2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1006cc2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006cc31 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1006cc33 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006cc35 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1006cc3c:;
  /* 1006cc3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006cc3f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 1006cc42 pop edi */
  EDI = (pop32());
  /* 1006cc43 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 1006cc46 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 1006cc49 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 1006cc4d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1006cc50 pop esi */
  ESI = (pop32());
  /* 1006cc51 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1006cc54 pop ebx */
  EBX = (pop32());
  /* 1006cc55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006cc56 ret  */
  ESPCHK(0x1006c7b6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc87 @ 0x1006cc87 (659 bytes, 232 insns) */
void f_1006cc87(void) {
  FTRACE(0x1006cc87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006cc87 push ebp */
  push32((uint32_t)(EBP));
  /* 1006cc88 mov ebp, esp */
  EBP = (ESP);
  /* 1006cc8a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006cc8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1006cc90 push ebx */
  push32((uint32_t)(EBX));
  /* 1006cc91 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1006cc94 push esi */
  push32((uint32_t)(ESI));
  /* 1006cc95 mov ecx, eax */
  ECX = (EAX);
  /* 1006cc97 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 1006cc9c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1006cca2 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1006cca4 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1006cca7 push edi */
  push32((uint32_t)(EDI));
  /* 1006cca8 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 1006ccac mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 1006ccb0 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 1006ccb4 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 1006ccb8 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 1006ccbc mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 1006ccc0 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 1006ccc4 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 1006ccc8 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 1006cccc mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 1006ccd0 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 1006ccd4 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 1006ccd8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1006ccdf mov edx, eax */
  EDX = (EAX);
  /* 1006cce1 je 0x1006cce9 */
  if (C.zf) goto L_1006cce9;
  /* 1006cce3 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 1006cce7 jmp 0x1006cced */
  goto L_1006cced;
L_1006cce9:;
  /* 1006cce9 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_1006cced:;
  /* 1006cced mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1006ccf0 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 1006ccf3 jne 0x1006cd13 */
  if (!C.zf) goto L_1006cd13;
  /* 1006ccf5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1006ccf7 jne 0x1006cd13 */
  if (!C.zf) goto L_1006cd13;
  /* 1006ccf9 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ccfc jne 0x1006cd13 */
  if (!C.zf) goto L_1006cd13;
L_1006ccfe:;
  /* 1006ccfe and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1006cd02 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1006cd06 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1006cd0a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 1006cd0e jmp 0x1006cf11 */
  goto L_1006cf11;
L_1006cd13:;
  /* 1006cd13 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1006cd16 jne 0x1006cd92 */
  if (!C.zf) goto L_1006cd92;
  /* 1006cd18 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1006cd1d mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 1006cd22 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cd24 jne 0x1006cd2c */
  if (!C.zf) goto L_1006cd2c;
  /* 1006cd26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cd2a je 0x1006cd3b */
  if (C.zf) goto L_1006cd3b;
L_1006cd2c:;
  /* 1006cd2c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 1006cd32 jne 0x1006cd3b */
  if (!C.zf) goto L_1006cd3b;
  /* 1006cd34 push 0x1006e5a0 */
  push32((uint32_t)(0x1006e5a0u));
  /* 1006cd39 jmp 0x1006cd81 */
  goto L_1006cd81;
L_1006cd3b:;
  /* 1006cd3b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1006cd3e je 0x1006cd55 */
  if (C.zf) goto L_1006cd55;
  /* 1006cd40 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cd46 jne 0x1006cd55 */
  if (!C.zf) goto L_1006cd55;
  /* 1006cd48 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cd4c jne 0x1006cd7c */
  if (!C.zf) goto L_1006cd7c;
  /* 1006cd4e push 0x1006e598 */
  push32((uint32_t)(0x1006e598u));
  /* 1006cd53 jmp 0x1006cd64 */
  goto L_1006cd64;
L_1006cd55:;
  /* 1006cd55 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cd57 jne 0x1006cd7c */
  if (!C.zf) goto L_1006cd7c;
  /* 1006cd59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cd5d jne 0x1006cd7c */
  if (!C.zf) goto L_1006cd7c;
  /* 1006cd5f push 0x1006e590 */
  push32((uint32_t)(0x1006e590u));
L_1006cd64:;
  /* 1006cd64 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1006cd67 push eax */
  push32((uint32_t)(EAX));
  /* 1006cd68 call 0x10069af0 */
  push32(0x1006cd6du); f_10069af0();
  /* 1006cd6d pop ecx */
  ECX = (pop32());
  /* 1006cd6e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 1006cd72 pop ecx */
  ECX = (pop32());
L_1006cd73:;
  /* 1006cd73 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1006cd77 jmp 0x1006ceea */
  goto L_1006ceea;
L_1006cd7c:;
  /* 1006cd7c push 0x1006e588 */
  push32((uint32_t)(0x1006e588u));
L_1006cd81:;
  /* 1006cd81 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1006cd84 push eax */
  push32((uint32_t)(EAX));
  /* 1006cd85 call 0x10069af0 */
  push32(0x1006cd8au); f_10069af0();
  /* 1006cd8a pop ecx */
  ECX = (pop32());
  /* 1006cd8b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 1006cd8f pop ecx */
  ECX = (pop32());
  /* 1006cd90 jmp 0x1006cd73 */
  goto L_1006cd73;
L_1006cd92:;
  /* 1006cd92 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 1006cd95 mov ecx, edi */
  ECX = (EDI);
  /* 1006cd97 mov esi, eax */
  ESI = (EAX);
  /* 1006cd99 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 1006cd9c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1006cda2 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 1006cda5 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 1006cdaa push 1 */
  push32((uint32_t)(0x1u));
  /* 1006cdac lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 1006cdaf mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 1006cdb3 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1006cdb6 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 1006cdb9 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 1006cdc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006cdc3 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1006cdc6 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 1006cdc9 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1006cdcc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1006cdce push eax */
  push32((uint32_t)(EAX));
  /* 1006cdcf lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1006cdd2 push eax */
  push32((uint32_t)(EAX));
  /* 1006cdd3 call 0x1006d68a */
  push32(0x1006cdd8u); f_1006d68a();
  /* 1006cdd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006cddb cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1006cde1 jb 0x1006cdf3 */
  if (C.cf) goto L_1006cdf3;
  /* 1006cde3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1006cde6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006cde7 push eax */
  push32((uint32_t)(EAX));
  /* 1006cde8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1006cdeb push eax */
  push32((uint32_t)(EAX));
  /* 1006cdec call 0x1006d46a */
  push32(0x1006cdf1u); f_1006d46a();
  /* 1006cdf1 pop ecx */
  ECX = (pop32());
  /* 1006cdf2 pop ecx */
  ECX = (pop32());
L_1006cdf3:;
  /* 1006cdf3 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 1006cdf7 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 1006cdfa je 0x1006ce0d */
  if (C.zf) goto L_1006ce0d;
  /* 1006cdfc mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 1006cdff movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1006ce02 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006ce04 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1006ce06 jg 0x1006ce10 */
  if ((!C.zf&&C.sf==C.of)) goto L_1006ce10;
  /* 1006ce08 jmp 0x1006ccfe */
  goto L_1006ccfe;
L_1006ce0d:;
  /* 1006ce0d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_1006ce10:;
  /* 1006ce10 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ce13 jle 0x1006ce18 */
  if ((C.zf||C.sf!=C.of)) goto L_1006ce18;
  /* 1006ce15 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1006ce17 pop edi */
  EDI = (pop32());
L_1006ce18:;
  /* 1006ce18 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 1006ce1c sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006ce22 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 1006ce27 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_1006ce2e:;
  /* 1006ce2e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1006ce31 push eax */
  push32((uint32_t)(EAX));
  /* 1006ce32 call 0x1006c694 */
  push32(0x1006ce37u); f_1006c694();
  /* 1006ce37 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 1006ce3a pop ecx */
  ECX = (pop32());
  /* 1006ce3b jne 0x1006ce2e */
  if (!C.zf) goto L_1006ce2e;
  /* 1006ce3d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1006ce3f jge 0x1006ce58 */
  if ((C.sf==C.of)) goto L_1006ce58;
  /* 1006ce41 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 1006ce43 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 1006ce49 jle 0x1006ce58 */
  if ((C.zf||C.sf!=C.of)) goto L_1006ce58;
L_1006ce4b:;
  /* 1006ce4b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1006ce4e push eax */
  push32((uint32_t)(EAX));
  /* 1006ce4f call 0x1006c6c2 */
  push32(0x1006ce54u); f_1006c6c2();
  /* 1006ce54 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1006ce55 pop ecx */
  ECX = (pop32());
  /* 1006ce56 jne 0x1006ce4b */
  if (!C.zf) goto L_1006ce4b;
L_1006ce58:;
  /* 1006ce58 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 1006ce5b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1006ce5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1006ce60 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 1006ce63 jle 0x1006ceb5 */
  if ((C.zf||C.sf!=C.of)) goto L_1006ceb5;
  /* 1006ce65 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_1006ce68:;
  /* 1006ce68 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 1006ce6b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 1006ce6e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1006ce6f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1006ce70 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1006ce73 push eax */
  push32((uint32_t)(EAX));
  /* 1006ce74 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1006ce75 call 0x1006c694 */
  push32(0x1006ce7au); f_1006c694();
  /* 1006ce7a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1006ce7d push eax */
  push32((uint32_t)(EAX));
  /* 1006ce7e call 0x1006c694 */
  push32(0x1006ce83u); f_1006c694();
  /* 1006ce83 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1006ce86 push eax */
  push32((uint32_t)(EAX));
  /* 1006ce87 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1006ce8a push eax */
  push32((uint32_t)(EAX));
  /* 1006ce8b call 0x1006c636 */
  push32(0x1006ce90u); f_1006c636();
  /* 1006ce90 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1006ce93 push eax */
  push32((uint32_t)(EAX));
  /* 1006ce94 call 0x1006c694 */
  push32(0x1006ce99u); f_1006c694();
  /* 1006ce99 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 1006ce9c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1006ce9f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 1006cea3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006cea6 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1006cea8 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 1006ceab dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 1006ceae mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1006ceb0 jne 0x1006ce68 */
  if (!C.zf) goto L_1006ce68;
  /* 1006ceb2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_1006ceb5:;
  /* 1006ceb5 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 1006ceb8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006ceb9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006ceba cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006cebd lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 1006cec0 jl 0x1006cef2 */
  if ((C.sf!=C.of)) goto L_1006cef2;
L_1006cec2:;
  /* 1006cec2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cec4 jb 0x1006ced5 */
  if (C.cf) goto L_1006ced5;
  /* 1006cec6 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006cec9 jne 0x1006ced1 */
  if (!C.zf) goto L_1006ced1;
  /* 1006cecb mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1006cece dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006cecf jmp 0x1006cec2 */
  goto L_1006cec2;
L_1006ced1:;
  /* 1006ced1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006ced3 jae 0x1006ced9 */
  if (!C.cf) goto L_1006ced9;
L_1006ced5:;
  /* 1006ced5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1006ced6 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_1006ced9:;
  /* 1006ced9 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_1006cedb:;
  /* 1006cedb sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1006cedd sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1006cedf mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 1006cee2 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1006cee5 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_1006ceea:;
  /* 1006ceea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1006ceed:;
  /* 1006ceed pop edi */
  EDI = (pop32());
  /* 1006ceee pop esi */
  ESI = (pop32());
  /* 1006ceef pop ebx */
  EBX = (pop32());
  /* 1006cef0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006cef1 ret  */
  ESPCHK(0x1006cc87u, _esp0);
  ESP += 4; return;
L_1006cef2:;
  /* 1006cef2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cef4 jb 0x1006cf02 */
  if (C.cf) goto L_1006cf02;
  /* 1006cef6 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006cef9 jne 0x1006cefe */
  if (!C.zf) goto L_1006cefe;
  /* 1006cefb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1006cefc jmp 0x1006cef2 */
  goto L_1006cef2;
L_1006cefe:;
  /* 1006cefe cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cf00 jae 0x1006cedb */
  if (!C.cf) goto L_1006cedb;
L_1006cf02:;
  /* 1006cf02 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1006cf06 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1006cf0a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1006cf0e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_1006cf11:;
  /* 1006cf11 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 1006cf15 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006cf17 pop eax */
  EAX = (pop32());
  /* 1006cf18 jmp 0x1006ceed */
  goto L_1006ceed;
}

/* FUN_1000cf1a @ 0x1006cf1a (27 bytes, 13 insns) */
void f_1006cf1a(void) {
  FTRACE(0x1006cf1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006cf1a mov eax, dword ptr [0x1007687c] */
  EAX = (r32((uint32_t)(0x1007687c)));
  /* 1006cf1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006cf21 je 0x1006cf32 */
  if (C.zf) goto L_1006cf32;
  /* 1006cf23 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1006cf27 call eax */
  call_ind((uint32_t)(EAX), 0x1006cf29u);
  /* 1006cf29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006cf2b pop ecx */
  ECX = (pop32());
  /* 1006cf2c je 0x1006cf32 */
  if (C.zf) goto L_1006cf32;
  /* 1006cf2e push 1 */
  push32((uint32_t)(0x1u));
  /* 1006cf30 pop eax */
  EAX = (pop32());
  /* 1006cf31 ret  */
  ESPCHK(0x1006cf1au, _esp0);
  ESP += 4; return;
L_1006cf32:;
  /* 1006cf32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006cf34 ret  */
  ESPCHK(0x1006cf1au, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1006cf38 (32 bytes, 18 insns) */
void f_1006cf38(void) {
  FTRACE(0x1006cf38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006cf38 push ebp */
  push32((uint32_t)(EBP));
  /* 1006cf39 mov ebp, esp */
  EBP = (ESP);
  /* 1006cf3b push ebx */
  push32((uint32_t)(EBX));
  /* 1006cf3c push esi */
  push32((uint32_t)(ESI));
  /* 1006cf3d push edi */
  push32((uint32_t)(EDI));
  /* 1006cf3e push ebp */
  push32((uint32_t)(EBP));
  /* 1006cf3f push 0 */
  push32((uint32_t)(0x0u));
  /* 1006cf41 push 0 */
  push32((uint32_t)(0x0u));
  /* 1006cf43 push 0x1006cf50 */
  push32((uint32_t)(0x1006cf50u));
  /* 1006cf48 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1006cf4b call 0x1006da34 */
  push32(0x1006cf50u); f_1006da34();
  /* 1006cf50 pop ebp */
  EBP = (pop32());
  /* 1006cf51 pop edi */
  EDI = (pop32());
  /* 1006cf52 pop esi */
  ESI = (pop32());
  /* 1006cf53 pop ebx */
  EBX = (pop32());
  /* 1006cf54 mov esp, ebp */
  ESP = (EBP);
  /* 1006cf56 pop ebp */
  EBP = (pop32());
  /* 1006cf57 ret  */
  ESPCHK(0x1006cf38u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1006cf7a (104 bytes, 33 insns) */
void f_1006cf7a(void) {
  FTRACE(0x1006cf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006cf7a push ebx */
  push32((uint32_t)(EBX));
  /* 1006cf7b push esi */
  push32((uint32_t)(ESI));
  /* 1006cf7c push edi */
  push32((uint32_t)(EDI));
  /* 1006cf7d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1006cf81 push eax */
  push32((uint32_t)(EAX));
  /* 1006cf82 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1006cf84 push 0x1006cf58 */
  push32((uint32_t)(0x1006cf58u));
  /* 1006cf89 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1006cf90 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1006cf97:;
  /* 1006cf97 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1006cf9b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1006cf9e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1006cfa1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cfa4 je 0x1006cfd4 */
  if (C.zf) goto L_1006cfd4;
  /* 1006cfa6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cfaa je 0x1006cfd4 */
  if (C.zf) goto L_1006cfd4;
  /* 1006cfac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1006cfaf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1006cfb2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1006cfb6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1006cfb9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006cfbe jne 0x1006cfd2 */
  if (!C.zf) goto L_1006cfd2;
  /* 1006cfc0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1006cfc5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1006cfc9 call 0x1006d00e */
  push32(0x1006cfceu); f_1006d00e();
  /* 1006cfce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1006cfd2u);
L_1006cfd2:;
  /* 1006cfd2 jmp 0x1006cf97 */
  goto L_1006cf97;
L_1006cfd4:;
  /* 1006cfd4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1006cfdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006cfde pop edi */
  EDI = (pop32());
  /* 1006cfdf pop esi */
  ESI = (pop32());
  /* 1006cfe0 pop ebx */
  EBX = (pop32());
  /* 1006cfe1 ret  */
  ESPCHK(0x1006cf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d00e @ 0x1006d00e (24 bytes, 10 insns) */
void f_1006d00e(void) {
  FTRACE(0x1006d00eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d00e push ebx */
  push32((uint32_t)(EBX));
  /* 1006d00f push ecx */
  push32((uint32_t)(ECX));
  /* 1006d010 mov ebx, 0x10073114 */
  EBX = (0x10073114u);
  /* 1006d015 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006d018 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1006d01b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1006d01e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1006d021 pop ecx */
  ECX = (pop32());
  /* 1006d022 pop ebx */
  EBX = (pop32());
  /* 1006d023 ret 4 */
  ESPCHK(0x1006d00eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d0ed @ 0x1006d0ed (27 bytes, 11 insns) */
void f_1006d0ed(void) {
  FTRACE(0x1006d0edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d0ed push ebp */
  push32((uint32_t)(EBP));
  /* 1006d0ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1006d0f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1006d0f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1006d0f7 push eax */
  push32((uint32_t)(EAX));
  /* 1006d0f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1006d0fb push eax */
  push32((uint32_t)(EAX));
  /* 1006d0fc call 0x1006cf7a */
  push32(0x1006d101u); f_1006cf7a();
  /* 1006d101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d104 pop ebp */
  EBP = (pop32());
  /* 1006d105 ret 4 */
  ESPCHK(0x1006d0edu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d108 @ 0x1006d108 (111 bytes, 44 insns) */
void f_1006d108(void) {
  FTRACE(0x1006d108u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d108 push ebx */
  push32((uint32_t)(EBX));
  /* 1006d109 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006d10b cmp dword ptr [0x10076848], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10076848))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d111 jne 0x1006d126 */
  if (!C.zf) goto L_1006d126;
  /* 1006d113 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1006d117 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d11a jl 0x1006d175 */
  if ((C.sf!=C.of)) goto L_1006d175;
  /* 1006d11c cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d11f jg 0x1006d175 */
  if ((!C.zf&&C.sf==C.of)) goto L_1006d175;
  /* 1006d121 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006d124 pop ebx */
  EBX = (pop32());
  /* 1006d125 ret  */
  ESPCHK(0x1006d108u, _esp0);
  ESP += 4; return;
L_1006d126:;
  /* 1006d126 push esi */
  push32((uint32_t)(ESI));
  /* 1006d127 mov esi, 0x100769c4 */
  ESI = (0x100769c4u);
  /* 1006d12c push edi */
  push32((uint32_t)(EDI));
  /* 1006d12d push esi */
  push32((uint32_t)(ESI));
  /* 1006d12e call dword ptr [0x1006e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e090))), 0x1006d134u);
  /* 1006d134 cmp dword ptr [0x100769c0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100769c0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d13a mov edi, dword ptr [0x1006e08c] */
  EDI = (r32((uint32_t)(0x1006e08c)));
  /* 1006d140 je 0x1006d150 */
  if (C.zf) goto L_1006d150;
  /* 1006d142 push esi */
  push32((uint32_t)(ESI));
  /* 1006d143 call edi */
  call_ind((uint32_t)(EDI), 0x1006d145u);
  /* 1006d145 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1006d147 call 0x1006a013 */
  push32(0x1006d14cu); f_1006a013();
  /* 1006d14c pop ecx */
  ECX = (pop32());
  /* 1006d14d push 1 */
  push32((uint32_t)(0x1u));
  /* 1006d14f pop ebx */
  EBX = (pop32());
L_1006d150:;
  /* 1006d150 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1006d154 call 0x1006d177 */
  push32(0x1006d159u); f_1006d177();
  /* 1006d159 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1006d15b pop ecx */
  ECX = (pop32());
  /* 1006d15c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1006d160 je 0x1006d16c */
  if (C.zf) goto L_1006d16c;
  /* 1006d162 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1006d164 call 0x1006a074 */
  push32(0x1006d169u); f_1006a074();
  /* 1006d169 pop ecx */
  ECX = (pop32());
  /* 1006d16a jmp 0x1006d16f */
  goto L_1006d16f;
L_1006d16c:;
  /* 1006d16c push esi */
  push32((uint32_t)(ESI));
  /* 1006d16d call edi */
  call_ind((uint32_t)(EDI), 0x1006d16fu);
L_1006d16f:;
  /* 1006d16f mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1006d173 pop edi */
  EDI = (pop32());
  /* 1006d174 pop esi */
  ESI = (pop32());
L_1006d175:;
  /* 1006d175 pop ebx */
  EBX = (pop32());
  /* 1006d176 ret  */
  ESPCHK(0x1006d108u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d177 @ 0x1006d177 (204 bytes, 71 insns) */
void f_1006d177(void) {
  FTRACE(0x1006d177u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d177 push ebp */
  push32((uint32_t)(EBP));
  /* 1006d178 mov ebp, esp */
  EBP = (ESP);
  /* 1006d17a push ecx */
  push32((uint32_t)(ECX));
  /* 1006d17b cmp dword ptr [0x10076848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10076848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d182 push ebx */
  push32((uint32_t)(EBX));
  /* 1006d183 jne 0x1006d1a2 */
  if (!C.zf) goto L_1006d1a2;
  /* 1006d185 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006d188 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d18b jl 0x1006d240 */
  if ((C.sf!=C.of)) goto L_1006d240;
  /* 1006d191 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d194 jg 0x1006d240 */
  if ((!C.zf&&C.sf==C.of)) goto L_1006d240;
  /* 1006d19a sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006d19d jmp 0x1006d240 */
  goto L_1006d240;
L_1006d1a2:;
  /* 1006d1a2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006d1a5 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d1ab jge 0x1006d1d5 */
  if ((C.sf==C.of)) goto L_1006d1d5;
  /* 1006d1ad cmp dword ptr [0x10070bf0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10070bf0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d1b4 jle 0x1006d1c2 */
  if ((C.zf||C.sf!=C.of)) goto L_1006d1c2;
  /* 1006d1b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1006d1b8 push ebx */
  push32((uint32_t)(EBX));
  /* 1006d1b9 call 0x100693cb */
  push32(0x1006d1beu); f_100693cb();
  /* 1006d1be pop ecx */
  ECX = (pop32());
  /* 1006d1bf pop ecx */
  ECX = (pop32());
  /* 1006d1c0 jmp 0x1006d1cd */
  goto L_1006d1cd;
L_1006d1c2:;
  /* 1006d1c2 mov eax, dword ptr [0x100709e0] */
  EAX = (r32((uint32_t)(0x100709e0)));
  /* 1006d1c7 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1006d1ca and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_1006d1cd:;
  /* 1006d1cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006d1cf jne 0x1006d1d5 */
  if (!C.zf) goto L_1006d1d5;
L_1006d1d1:;
  /* 1006d1d1 mov eax, ebx */
  EAX = (EBX);
  /* 1006d1d3 jmp 0x1006d240 */
  goto L_1006d240;
L_1006d1d5:;
  /* 1006d1d5 mov edx, dword ptr [0x100709e0] */
  EDX = (r32((uint32_t)(0x100709e0)));
  /* 1006d1db mov eax, ebx */
  EAX = (EBX);
  /* 1006d1dd sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1006d1e0 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1006d1e3 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1006d1e8 je 0x1006d1f8 */
  if (C.zf) goto L_1006d1f8;
  /* 1006d1ea and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1006d1ee mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1006d1f1 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 1006d1f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1006d1f6 jmp 0x1006d201 */
  goto L_1006d201;
L_1006d1f8:;
  /* 1006d1f8 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 1006d1fc mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1006d1ff push 1 */
  push32((uint32_t)(0x1u));
L_1006d201:;
  /* 1006d201 pop eax */
  EAX = (pop32());
  /* 1006d202 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1006d205 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006d207 push 0 */
  push32((uint32_t)(0x0u));
  /* 1006d209 push 3 */
  push32((uint32_t)(0x3u));
  /* 1006d20b push ecx */
  push32((uint32_t)(ECX));
  /* 1006d20c push eax */
  push32((uint32_t)(EAX));
  /* 1006d20d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1006d210 push eax */
  push32((uint32_t)(EAX));
  /* 1006d211 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1006d216 push dword ptr [0x10076848] */
  push32((uint32_t)(r32((uint32_t)(0x10076848))));
  /* 1006d21c call 0x1006c3c6 */
  push32(0x1006d221u); f_1006c3c6();
  /* 1006d221 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006d226 je 0x1006d1d1 */
  if (C.zf) goto L_1006d1d1;
  /* 1006d228 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d22b jne 0x1006d233 */
  if (!C.zf) goto L_1006d233;
  /* 1006d22d movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1006d231 jmp 0x1006d240 */
  goto L_1006d240;
L_1006d233:;
  /* 1006d233 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1006d237 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1006d23b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1006d23e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1006d240:;
  /* 1006d240 pop ebx */
  EBX = (pop32());
  /* 1006d241 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006d242 ret  */
  ESPCHK(0x1006d177u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d243 @ 0x1006d243 (49 bytes, 20 insns) */
void f_1006d243(void) {
  FTRACE(0x1006d243u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d243 push esi */
  push32((uint32_t)(ESI));
  /* 1006d244 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1006d248 push edi */
  push32((uint32_t)(EDI));
  /* 1006d249 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1006d24c test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 1006d250 je 0x1006d258 */
  if (C.zf) goto L_1006d258;
  /* 1006d252 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1006d256 jmp 0x1006d26f */
  goto L_1006d26f;
L_1006d258:;
  /* 1006d258 push esi */
  push32((uint32_t)(ESI));
  /* 1006d259 call 0x10068f8e */
  push32(0x1006d25eu); f_10068f8e();
  /* 1006d25e push esi */
  push32((uint32_t)(ESI));
  /* 1006d25f call 0x1006d274 */
  push32(0x1006d264u); f_1006d274();
  /* 1006d264 push esi */
  push32((uint32_t)(ESI));
  /* 1006d265 mov edi, eax */
  EDI = (EAX);
  /* 1006d267 call 0x10068fe0 */
  push32(0x1006d26cu); f_10068fe0();
  /* 1006d26c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006d26f:;
  /* 1006d26f mov eax, edi */
  EAX = (EDI);
  /* 1006d271 pop edi */
  EDI = (pop32());
  /* 1006d272 pop esi */
  ESI = (pop32());
  /* 1006d273 ret  */
  ESPCHK(0x1006d243u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x1006d274 (76 bytes, 30 insns) */
void f_1006d274(void) {
  FTRACE(0x1006d274u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d274 push esi */
  push32((uint32_t)(ESI));
  /* 1006d275 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1006d279 push edi */
  push32((uint32_t)(EDI));
  /* 1006d27a or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1006d27d test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1006d281 je 0x1006d2b7 */
  if (C.zf) goto L_1006d2b7;
  /* 1006d283 push esi */
  push32((uint32_t)(ESI));
  /* 1006d284 call 0x1006c174 */
  push32(0x1006d289u); f_1006c174();
  /* 1006d289 push esi */
  push32((uint32_t)(ESI));
  /* 1006d28a mov edi, eax */
  EDI = (EAX);
  /* 1006d28c call 0x1006d7e6 */
  push32(0x1006d291u); f_1006d7e6();
  /* 1006d291 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1006d294 call 0x1006d706 */
  push32(0x1006d299u); f_1006d706();
  /* 1006d299 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d29c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006d29e jge 0x1006d2a5 */
  if ((C.sf==C.of)) goto L_1006d2a5;
  /* 1006d2a0 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1006d2a3 jmp 0x1006d2b7 */
  goto L_1006d2b7;
L_1006d2a5:;
  /* 1006d2a5 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 1006d2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006d2aa je 0x1006d2b7 */
  if (C.zf) goto L_1006d2b7;
  /* 1006d2ac push eax */
  push32((uint32_t)(EAX));
  /* 1006d2ad call 0x1006a1c6 */
  push32(0x1006d2b2u); f_1006a1c6();
  /* 1006d2b2 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 1006d2b6 pop ecx */
  ECX = (pop32());
L_1006d2b7:;
  /* 1006d2b7 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1006d2bb mov eax, edi */
  EAX = (EDI);
  /* 1006d2bd pop edi */
  EDI = (pop32());
  /* 1006d2be pop esi */
  ESI = (pop32());
  /* 1006d2bf ret  */
  ESPCHK(0x1006d274u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2c0 @ 0x1006d2c0 (147 bytes, 52 insns) */
void f_1006d2c0(void) {
  FTRACE(0x1006d2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d2c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1006d2c1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 1006d2c5 cmp ebx, dword ptr [0x10077d40] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10077d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d2cb push esi */
  push32((uint32_t)(ESI));
  /* 1006d2cc push edi */
  push32((uint32_t)(EDI));
  /* 1006d2cd jae 0x1006d341 */
  if (!C.cf) goto L_1006d341;
  /* 1006d2cf mov eax, ebx */
  EAX = (EBX);
  /* 1006d2d1 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1006d2d4 lea edi, [eax*4 + 0x10077c40] */
  EDI = ((uint32_t)(EAX*4 + 0x10077c40));
  /* 1006d2db mov eax, ebx */
  EAX = (EBX);
  /* 1006d2dd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1006d2e0 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1006d2e3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1006d2e5 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1006d2e8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1006d2ed je 0x1006d341 */
  if (C.zf) goto L_1006d341;
  /* 1006d2ef push ebx */
  push32((uint32_t)(EBX));
  /* 1006d2f0 call 0x1006c044 */
  push32(0x1006d2f5u); f_1006c044();
  /* 1006d2f5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1006d2f7 pop ecx */
  ECX = (pop32());
  /* 1006d2f8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1006d2fd je 0x1006d328 */
  if (C.zf) goto L_1006d328;
  /* 1006d2ff push ebx */
  push32((uint32_t)(EBX));
  /* 1006d300 call 0x1006c002 */
  push32(0x1006d305u); f_1006c002();
  /* 1006d305 pop ecx */
  ECX = (pop32());
  /* 1006d306 push eax */
  push32((uint32_t)(EAX));
  /* 1006d307 call dword ptr [0x1006e0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0d0))), 0x1006d30du);
  /* 1006d30d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006d30f jne 0x1006d31b */
  if (!C.zf) goto L_1006d31b;
  /* 1006d311 call dword ptr [0x1006e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e03c))), 0x1006d317u);
  /* 1006d317 mov esi, eax */
  ESI = (EAX);
  /* 1006d319 jmp 0x1006d31d */
  goto L_1006d31d;
L_1006d31b:;
  /* 1006d31b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1006d31d:;
  /* 1006d31d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1006d31f je 0x1006d336 */
  if (C.zf) goto L_1006d336;
  /* 1006d321 call 0x1006bf7a */
  push32(0x1006d326u); f_1006bf7a();
  /* 1006d326 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1006d328:;
  /* 1006d328 call 0x1006bf71 */
  push32(0x1006d32du); f_1006bf71();
  /* 1006d32d mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1006d333 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1006d336:;
  /* 1006d336 push ebx */
  push32((uint32_t)(EBX));
  /* 1006d337 call 0x1006c0a3 */
  push32(0x1006d33cu); f_1006c0a3();
  /* 1006d33c pop ecx */
  ECX = (pop32());
  /* 1006d33d mov eax, esi */
  EAX = (ESI);
  /* 1006d33f jmp 0x1006d34f */
  goto L_1006d34f;
L_1006d341:;
  /* 1006d341 call 0x1006bf71 */
  push32(0x1006d346u); f_1006bf71();
  /* 1006d346 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1006d34c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1006d34f:;
  /* 1006d34f pop edi */
  EDI = (pop32());
  /* 1006d350 pop esi */
  ESI = (pop32());
  /* 1006d351 pop ebx */
  EBX = (pop32());
  /* 1006d352 ret  */
  ESPCHK(0x1006d2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x1006d3f0 (62 bytes, 35 insns) */
void f_1006d3f0(void) {
  FTRACE(0x1006d3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1006d3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1006d3f3 push esi */
  push32((uint32_t)(ESI));
  /* 1006d3f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006d3f6 push eax */
  push32((uint32_t)(EAX));
  /* 1006d3f7 push eax */
  push32((uint32_t)(EAX));
  /* 1006d3f8 push eax */
  push32((uint32_t)(EAX));
  /* 1006d3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1006d3fa push eax */
  push32((uint32_t)(EAX));
  /* 1006d3fb push eax */
  push32((uint32_t)(EAX));
  /* 1006d3fc push eax */
  push32((uint32_t)(EAX));
  /* 1006d3fd push eax */
  push32((uint32_t)(EAX));
  /* 1006d3fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006d401 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1006d404:;
  /* 1006d404 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1006d406 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1006d408 je 0x1006d411 */
  if (C.zf) goto L_1006d411;
  /* 1006d40a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1006d40b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1006d40b");
  /* 1006d40f jmp 0x1006d404 */
  goto L_1006d404;
L_1006d411:;
  /* 1006d411 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1006d414 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1006d417 nop  */
  /* nop */
L_1006d418:;
  /* 1006d418 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1006d419 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006d41b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1006d41d je 0x1006d426 */
  if (C.zf) goto L_1006d426;
  /* 1006d41f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006d420 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1006d420");
  /* 1006d424 jae 0x1006d418 */
  if (!C.cf) goto L_1006d418;
L_1006d426:;
  /* 1006d426 mov eax, ecx */
  EAX = (ECX);
  /* 1006d428 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d42b pop esi */
  ESI = (pop32());
  /* 1006d42c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006d42d ret  */
  ESPCHK(0x1006d3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x1006d430 (58 bytes, 32 insns) */
void f_1006d430(void) {
  FTRACE(0x1006d430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d430 push ebp */
  push32((uint32_t)(EBP));
  /* 1006d431 mov ebp, esp */
  EBP = (ESP);
  /* 1006d433 push esi */
  push32((uint32_t)(ESI));
  /* 1006d434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006d436 push eax */
  push32((uint32_t)(EAX));
  /* 1006d437 push eax */
  push32((uint32_t)(EAX));
  /* 1006d438 push eax */
  push32((uint32_t)(EAX));
  /* 1006d439 push eax */
  push32((uint32_t)(EAX));
  /* 1006d43a push eax */
  push32((uint32_t)(EAX));
  /* 1006d43b push eax */
  push32((uint32_t)(EAX));
  /* 1006d43c push eax */
  push32((uint32_t)(EAX));
  /* 1006d43d push eax */
  push32((uint32_t)(EAX));
  /* 1006d43e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006d441 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1006d444:;
  /* 1006d444 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1006d446 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1006d448 je 0x1006d451 */
  if (C.zf) goto L_1006d451;
  /* 1006d44a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1006d44b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1006d44b");
  /* 1006d44f jmp 0x1006d444 */
  goto L_1006d444;
L_1006d451:;
  /* 1006d451 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1006d454:;
  /* 1006d454 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006d456 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1006d458 je 0x1006d464 */
  if (C.zf) goto L_1006d464;
  /* 1006d45a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006d45b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1006d45b");
  /* 1006d45f jae 0x1006d454 */
  if (!C.cf) goto L_1006d454;
  /* 1006d461 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1006d464:;
  /* 1006d464 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d467 pop esi */
  ESI = (pop32());
  /* 1006d468 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006d469 ret  */
  ESPCHK(0x1006d430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d46a @ 0x1006d46a (544 bytes, 177 insns) */
void f_1006d46a(void) {
  FTRACE(0x1006d46au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d46a push ebp */
  push32((uint32_t)(EBP));
  /* 1006d46b mov ebp, esp */
  EBP = (ESP);
  /* 1006d46d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006d470 push ebx */
  push32((uint32_t)(EBX));
  /* 1006d471 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006d474 push esi */
  push32((uint32_t)(ESI));
  /* 1006d475 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1006d478 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 1006d47c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006d47e push edi */
  push32((uint32_t)(EDI));
  /* 1006d47f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1006d482 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1006d485 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1006d488 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1006d48b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 1006d48f mov edi, ecx */
  EDI = (ECX);
  /* 1006d491 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 1006d496 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 1006d498 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1006d49a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1006d49c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 1006d4a2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1006d4a6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 1006d4a9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1006d4ac jae 0x1006d66a */
  if (!C.cf) goto L_1006d66a;
  /* 1006d4b2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1006d4b7 jae 0x1006d66a */
  if (!C.cf) goto L_1006d66a;
  /* 1006d4bd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1006d4c2 ja 0x1006d66a */
  if ((!C.cf&&!C.zf)) goto L_1006d66a;
  /* 1006d4c8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1006d4cd ja 0x1006d4d3 */
  if ((!C.cf&&!C.zf)) goto L_1006d4d3;
  /* 1006d4cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006d4d1 jmp 0x1006d50d */
  goto L_1006d50d;
L_1006d4d3:;
  /* 1006d4d3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 1006d4d6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 1006d4db jne 0x1006d4f5 */
  if (!C.zf) goto L_1006d4f5;
  /* 1006d4dd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1006d4e0 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1006d4e3 jne 0x1006d4f5 */
  if (!C.zf) goto L_1006d4f5;
  /* 1006d4e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006d4e7 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d4ea jne 0x1006d4f7 */
  if (!C.zf) goto L_1006d4f7;
  /* 1006d4ec cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d4ee jne 0x1006d4f7 */
  if (!C.zf) goto L_1006d4f7;
  /* 1006d4f0 jmp 0x1006d664 */
  goto L_1006d664;
L_1006d4f5:;
  /* 1006d4f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1006d4f7:;
  /* 1006d4f7 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1006d4fa jne 0x1006d51a */
  if (!C.zf) goto L_1006d51a;
  /* 1006d4fc inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1006d4ff test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1006d502 jne 0x1006d51a */
  if (!C.zf) goto L_1006d51a;
  /* 1006d504 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d507 jne 0x1006d51a */
  if (!C.zf) goto L_1006d51a;
  /* 1006d509 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d50b jne 0x1006d51a */
  if (!C.zf) goto L_1006d51a;
L_1006d50d:;
  /* 1006d50d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1006d510 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1006d513 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1006d515 jmp 0x1006d685 */
  goto L_1006d685;
L_1006d51a:;
  /* 1006d51a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1006d51d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1006d520 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1006d523 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_1006d52a:;
  /* 1006d52a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1006d52d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d52f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d533 jle 0x1006d57e */
  if ((C.zf||C.sf!=C.of)) goto L_1006d57e;
  /* 1006d535 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d537 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 1006d53a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1006d53d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006d540 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1006d543 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1006d546:;
  /* 1006d546 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1006d549 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1006d54c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1006d54f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 1006d552 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1006d555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006d558 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d55b push ecx */
  push32((uint32_t)(ECX));
  /* 1006d55c push eax */
  push32((uint32_t)(EAX));
  /* 1006d55d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 1006d55f call 0x1006c615 */
  push32(0x1006d564u); f_1006c615();
  /* 1006d564 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006d569 je 0x1006d571 */
  if (C.zf) goto L_1006d571;
  /* 1006d56b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1006d56e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_1006d571:;
  /* 1006d571 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1006d575 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1006d579 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 1006d57c jne 0x1006d546 */
  if (!C.zf) goto L_1006d546;
L_1006d57e:;
  /* 1006d57e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1006d582 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 1006d585 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 1006d588 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d58c jg 0x1006d52a */
  if ((!C.zf&&C.sf==C.of)) goto L_1006d52a;
  /* 1006d58e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1006d595 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1006d59a jle 0x1006d5c1 */
  if ((C.zf||C.sf!=C.of)) goto L_1006d5c1;
L_1006d59c:;
  /* 1006d59c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 1006d5a0 jne 0x1006d5ba */
  if (!C.zf) goto L_1006d5ba;
  /* 1006d5a2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1006d5a5 push eax */
  push32((uint32_t)(EAX));
  /* 1006d5a6 call 0x1006c694 */
  push32(0x1006d5abu); f_1006c694();
  /* 1006d5ab add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1006d5b2 pop ecx */
  ECX = (pop32());
  /* 1006d5b3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1006d5b8 jg 0x1006d59c */
  if ((!C.zf&&C.sf==C.of)) goto L_1006d59c;
L_1006d5ba:;
  /* 1006d5ba cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1006d5bf jg 0x1006d5fa */
  if ((!C.zf&&C.sf==C.of)) goto L_1006d5fa;
L_1006d5c1:;
  /* 1006d5c1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1006d5c8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1006d5cd jge 0x1006d5fa */
  if ((C.sf==C.of)) goto L_1006d5fa;
  /* 1006d5cf movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 1006d5d3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1006d5d5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1006d5d8 mov ebx, eax */
  EBX = (EAX);
L_1006d5da:;
  /* 1006d5da test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 1006d5de je 0x1006d5e3 */
  if (C.zf) goto L_1006d5e3;
  /* 1006d5e0 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_1006d5e3:;
  /* 1006d5e3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1006d5e6 push eax */
  push32((uint32_t)(EAX));
  /* 1006d5e7 call 0x1006c6c2 */
  push32(0x1006d5ecu); f_1006c6c2();
  /* 1006d5ec dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1006d5ed pop ecx */
  ECX = (pop32());
  /* 1006d5ee jne 0x1006d5da */
  if (!C.zf) goto L_1006d5da;
  /* 1006d5f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d5f4 je 0x1006d5fa */
  if (C.zf) goto L_1006d5fa;
  /* 1006d5f6 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_1006d5fa:;
  /* 1006d5fa cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1006d600 ja 0x1006d611 */
  if ((!C.cf&&!C.zf)) goto L_1006d611;
  /* 1006d602 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1006d605 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1006d60a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d60f jne 0x1006d646 */
  if (!C.zf) goto L_1006d646;
L_1006d611:;
  /* 1006d611 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d615 jne 0x1006d643 */
  if (!C.zf) goto L_1006d643;
  /* 1006d617 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 1006d61b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d61f jne 0x1006d63e */
  if (!C.zf) goto L_1006d63e;
  /* 1006d621 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 1006d625 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1006d62b jne 0x1006d638 */
  if (!C.zf) goto L_1006d638;
  /* 1006d62d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1006d630 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 1006d636 jmp 0x1006d646 */
  goto L_1006d646;
L_1006d638:;
  /* 1006d638 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 1006d63c jmp 0x1006d646 */
  goto L_1006d646;
L_1006d63e:;
  /* 1006d63e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 1006d641 jmp 0x1006d646 */
  goto L_1006d646;
L_1006d643:;
  /* 1006d643 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_1006d646:;
  /* 1006d646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006d649 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1006d64d jae 0x1006d66a */
  if (!C.cf) goto L_1006d66a;
  /* 1006d64f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 1006d653 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1006d655 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 1006d658 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1006d65b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 1006d65e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1006d661 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_1006d664:;
  /* 1006d664 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 1006d668 jmp 0x1006d685 */
  goto L_1006d685;
L_1006d66a:;
  /* 1006d66a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 1006d66d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006d66f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1006d673 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 1006d679 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d67f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1006d682 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_1006d685:;
  /* 1006d685 pop edi */
  EDI = (pop32());
  /* 1006d686 pop esi */
  ESI = (pop32());
  /* 1006d687 pop ebx */
  EBX = (pop32());
  /* 1006d688 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006d689 ret  */
  ESPCHK(0x1006d46au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d68a @ 0x1006d68a (124 bytes, 52 insns) */
void f_1006d68a(void) {
  FTRACE(0x1006d68au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d68a push ebp */
  push32((uint32_t)(EBP));
  /* 1006d68b mov ebp, esp */
  EBP = (ESP);
  /* 1006d68d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006d690 push ebx */
  push32((uint32_t)(EBX));
  /* 1006d691 mov ebx, 0x10073230 */
  EBX = (0x10073230u);
  /* 1006d696 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1006d698 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006d69b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d69e je 0x1006d703 */
  if (C.zf) goto L_1006d703;
  /* 1006d6a0 jge 0x1006d6b2 */
  if ((C.sf==C.of)) goto L_1006d6b2;
  /* 1006d6a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006d6a5 mov ebx, 0x10073390 */
  EBX = (0x10073390u);
  /* 1006d6aa neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1006d6ac mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1006d6af sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_1006d6b2:;
  /* 1006d6b2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d6b5 jne 0x1006d6bd */
  if (!C.zf) goto L_1006d6bd;
  /* 1006d6b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1006d6ba mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_1006d6bd:;
  /* 1006d6bd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d6c0 je 0x1006d703 */
  if (C.zf) goto L_1006d703;
  /* 1006d6c2 push esi */
  push32((uint32_t)(ESI));
  /* 1006d6c3 push edi */
  push32((uint32_t)(EDI));
L_1006d6c4:;
  /* 1006d6c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1006d6c7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d6ca sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 1006d6ce and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1006d6d1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d6d3 je 0x1006d6fc */
  if (C.zf) goto L_1006d6fc;
  /* 1006d6d5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 1006d6d8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1006d6de lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 1006d6e1 jb 0x1006d6ef */
  if (C.cf) goto L_1006d6ef;
  /* 1006d6e3 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 1006d6e6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1006d6e7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1006d6e8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1006d6e9 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 1006d6ec lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_1006d6ef:;
  /* 1006d6ef push esi */
  push32((uint32_t)(ESI));
  /* 1006d6f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1006d6f3 call 0x1006d46a */
  push32(0x1006d6f8u); f_1006d46a();
  /* 1006d6f8 pop ecx */
  ECX = (pop32());
  /* 1006d6f9 pop ecx */
  ECX = (pop32());
  /* 1006d6fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_1006d6fc:;
  /* 1006d6fc cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d6ff jne 0x1006d6c4 */
  if (!C.zf) goto L_1006d6c4;
  /* 1006d701 pop edi */
  EDI = (pop32());
  /* 1006d702 pop esi */
  ESI = (pop32());
L_1006d703:;
  /* 1006d703 pop ebx */
  EBX = (pop32());
  /* 1006d704 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006d705 ret  */
  ESPCHK(0x1006d68au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d706 @ 0x1006d706 (93 bytes, 32 insns) */
void f_1006d706(void) {
  FTRACE(0x1006d706u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d706 push esi */
  push32((uint32_t)(ESI));
  /* 1006d707 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1006d70b cmp esi, dword ptr [0x10077d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10077d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d711 jae 0x1006d74b */
  if (!C.cf) goto L_1006d74b;
  /* 1006d713 mov ecx, esi */
  ECX = (ESI);
  /* 1006d715 mov eax, esi */
  EAX = (ESI);
  /* 1006d717 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1006d71a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1006d71d mov ecx, dword ptr [ecx*4 + 0x10077c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10077c40)));
  /* 1006d724 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1006d727 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1006d72c je 0x1006d74b */
  if (C.zf) goto L_1006d74b;
  /* 1006d72e push edi */
  push32((uint32_t)(EDI));
  /* 1006d72f push esi */
  push32((uint32_t)(ESI));
  /* 1006d730 call 0x1006c044 */
  push32(0x1006d735u); f_1006c044();
  /* 1006d735 push esi */
  push32((uint32_t)(ESI));
  /* 1006d736 call 0x1006d763 */
  push32(0x1006d73bu); f_1006d763();
  /* 1006d73b push esi */
  push32((uint32_t)(ESI));
  /* 1006d73c mov edi, eax */
  EDI = (EAX);
  /* 1006d73e call 0x1006c0a3 */
  push32(0x1006d743u); f_1006c0a3();
  /* 1006d743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d746 mov eax, edi */
  EAX = (EDI);
  /* 1006d748 pop edi */
  EDI = (pop32());
  /* 1006d749 pop esi */
  ESI = (pop32());
  /* 1006d74a ret  */
  ESPCHK(0x1006d706u, _esp0);
  ESP += 4; return;
L_1006d74b:;
  /* 1006d74b call 0x1006bf71 */
  push32(0x1006d750u); f_1006bf71();
  /* 1006d750 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1006d756 call 0x1006bf7a */
  push32(0x1006d75bu); f_1006bf7a();
  /* 1006d75b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1006d75e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1006d761 pop esi */
  ESI = (pop32());
  /* 1006d762 ret  */
  ESPCHK(0x1006d706u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d763 @ 0x1006d763 (131 bytes, 52 insns) */
void f_1006d763(void) {
  FTRACE(0x1006d763u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d763 push esi */
  push32((uint32_t)(ESI));
  /* 1006d764 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1006d768 push edi */
  push32((uint32_t)(EDI));
  /* 1006d769 push esi */
  push32((uint32_t)(ESI));
  /* 1006d76a call 0x1006c002 */
  push32(0x1006d76fu); f_1006c002();
  /* 1006d76f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d772 pop ecx */
  ECX = (pop32());
  /* 1006d773 je 0x1006d7b1 */
  if (C.zf) goto L_1006d7b1;
  /* 1006d775 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d778 je 0x1006d77f */
  if (C.zf) goto L_1006d77f;
  /* 1006d77a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d77d jne 0x1006d795 */
  if (!C.zf) goto L_1006d795;
L_1006d77f:;
  /* 1006d77f push 2 */
  push32((uint32_t)(0x2u));
  /* 1006d781 call 0x1006c002 */
  push32(0x1006d786u); f_1006c002();
  /* 1006d786 push 1 */
  push32((uint32_t)(0x1u));
  /* 1006d788 mov edi, eax */
  EDI = (EAX);
  /* 1006d78a call 0x1006c002 */
  push32(0x1006d78fu); f_1006c002();
  /* 1006d78f pop ecx */
  ECX = (pop32());
  /* 1006d790 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d792 pop ecx */
  ECX = (pop32());
  /* 1006d793 je 0x1006d7b1 */
  if (C.zf) goto L_1006d7b1;
L_1006d795:;
  /* 1006d795 push esi */
  push32((uint32_t)(ESI));
  /* 1006d796 call 0x1006c002 */
  push32(0x1006d79bu); f_1006c002();
  /* 1006d79b pop ecx */
  ECX = (pop32());
  /* 1006d79c push eax */
  push32((uint32_t)(EAX));
  /* 1006d79d call dword ptr [0x1006e0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e0d4))), 0x1006d7a3u);
  /* 1006d7a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1006d7a5 jne 0x1006d7b1 */
  if (!C.zf) goto L_1006d7b1;
  /* 1006d7a7 call dword ptr [0x1006e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1006e03c))), 0x1006d7adu);
  /* 1006d7ad mov edi, eax */
  EDI = (EAX);
  /* 1006d7af jmp 0x1006d7b3 */
  goto L_1006d7b3;
L_1006d7b1:;
  /* 1006d7b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1006d7b3:;
  /* 1006d7b3 push esi */
  push32((uint32_t)(ESI));
  /* 1006d7b4 call 0x1006bf83 */
  push32(0x1006d7b9u); f_1006bf83();
  /* 1006d7b9 mov eax, esi */
  EAX = (ESI);
  /* 1006d7bb and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 1006d7be sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1006d7c1 pop ecx */
  ECX = (pop32());
  /* 1006d7c2 mov eax, dword ptr [eax*4 + 0x10077c40] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10077c40)));
  /* 1006d7c9 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 1006d7cc and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 1006d7d1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1006d7d3 je 0x1006d7e1 */
  if (C.zf) goto L_1006d7e1;
  /* 1006d7d5 push edi */
  push32((uint32_t)(EDI));
  /* 1006d7d6 call 0x1006befe */
  push32(0x1006d7dbu); f_1006befe();
  /* 1006d7db pop ecx */
  ECX = (pop32());
  /* 1006d7dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1006d7df jmp 0x1006d7e3 */
  goto L_1006d7e3;
L_1006d7e1:;
  /* 1006d7e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1006d7e3:;
  /* 1006d7e3 pop edi */
  EDI = (pop32());
  /* 1006d7e4 pop esi */
  ESI = (pop32());
  /* 1006d7e5 ret  */
  ESPCHK(0x1006d763u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x1006d7e6 (43 bytes, 17 insns) */
void f_1006d7e6(void) {
  FTRACE(0x1006d7e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d7e6 push esi */
  push32((uint32_t)(ESI));
  /* 1006d7e7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1006d7eb mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1006d7ee test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 1006d7f0 je 0x1006d80f */
  if (C.zf) goto L_1006d80f;
  /* 1006d7f2 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1006d7f4 je 0x1006d80f */
  if (C.zf) goto L_1006d80f;
  /* 1006d7f6 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 1006d7f9 call 0x1006a1c6 */
  push32(0x1006d7feu); f_1006a1c6();
  /* 1006d7fe and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 1006d804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006d806 pop ecx */
  ECX = (pop32());
  /* 1006d807 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1006d809 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1006d80c mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_1006d80f:;
  /* 1006d80f pop esi */
  ESI = (pop32());
  /* 1006d810 ret  */
  ESPCHK(0x1006d7e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x1006d820 (208 bytes, 85 insns) */
void f_1006d820(void) {
  FTRACE(0x1006d820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d820 push ebp */
  push32((uint32_t)(EBP));
  /* 1006d821 mov ebp, esp */
  EBP = (ESP);
  /* 1006d823 push edi */
  push32((uint32_t)(EDI));
  /* 1006d824 push esi */
  push32((uint32_t)(ESI));
  /* 1006d825 push ebx */
  push32((uint32_t)(EBX));
  /* 1006d826 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1006d829 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1006d82c lea eax, [0x10076840] */
  EAX = ((uint32_t)(0x10076840));
  /* 1006d832 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d836 jne 0x1006d873 */
  if (!C.zf) goto L_1006d873;
  /* 1006d838 mov al, 0xff */
  AL = (0xffu);
  /* 1006d83a mov edi, edi */
  EDI = (EDI);
L_1006d83c:;
  /* 1006d83c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1006d83e je 0x1006d86e */
  if (C.zf) goto L_1006d86e;
  /* 1006d840 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006d842 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006d843 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 1006d845 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006d846 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006d848 je 0x1006d83c */
  if (C.zf) goto L_1006d83c;
  /* 1006d84a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1006d84c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006d84e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1006d850 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1006d853 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1006d855 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1006d857 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 1006d859 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1006d85b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006d85d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1006d85f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1006d862 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1006d864 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1006d866 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006d868 je 0x1006d83c */
  if (C.zf) goto L_1006d83c;
  /* 1006d86a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1006d86c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1006d86e:;
  /* 1006d86e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1006d871 jmp 0x1006d8eb */
  goto L_1006d8eb;
L_1006d873:;
  /* 1006d873 lock inc dword ptr [0x100769c4] */
  x86_unimpl("lock inc @ 0x1006d873");
  /* 1006d87a cmp dword ptr [0x100769c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100769c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d881 jg 0x1006d887 */
  if ((!C.zf&&C.sf==C.of)) goto L_1006d887;
  /* 1006d883 push 0 */
  push32((uint32_t)(0x0u));
  /* 1006d885 jmp 0x1006d89c */
  goto L_1006d89c;
L_1006d887:;
  /* 1006d887 lock dec dword ptr [0x100769c4] */
  x86_unimpl("lock dec @ 0x1006d887");
  /* 1006d88e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1006d890 call 0x1006a013 */
  push32(0x1006d895u); f_1006a013();
  /* 1006d895 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1006d89c:;
  /* 1006d89c mov eax, 0xff */
  EAX = (0xffu);
  /* 1006d8a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006d8a3 nop  */
  /* nop */
L_1006d8a4:;
  /* 1006d8a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1006d8a6 je 0x1006d8cf */
  if (C.zf) goto L_1006d8cf;
  /* 1006d8a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006d8aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006d8ab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1006d8ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006d8ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006d8b0 je 0x1006d8a4 */
  if (C.zf) goto L_1006d8a4;
  /* 1006d8b2 push eax */
  push32((uint32_t)(EAX));
  /* 1006d8b3 push ebx */
  push32((uint32_t)(EBX));
  /* 1006d8b4 call 0x100694af */
  push32(0x1006d8b9u); f_100694af();
  /* 1006d8b9 mov ebx, eax */
  EBX = (EAX);
  /* 1006d8bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d8be call 0x100694af */
  push32(0x1006d8c3u); f_100694af();
  /* 1006d8c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d8c6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006d8c8 je 0x1006d8a4 */
  if (C.zf) goto L_1006d8a4;
  /* 1006d8ca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1006d8cc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1006d8cf:;
  /* 1006d8cf mov ebx, eax */
  EBX = (EAX);
  /* 1006d8d1 pop eax */
  EAX = (pop32());
  /* 1006d8d2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006d8d4 jne 0x1006d8df */
  if (!C.zf) goto L_1006d8df;
  /* 1006d8d6 lock dec dword ptr [0x100769c4] */
  x86_unimpl("lock dec @ 0x1006d8d6");
  /* 1006d8dd jmp 0x1006d8e9 */
  goto L_1006d8e9;
L_1006d8df:;
  /* 1006d8df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1006d8e1 call 0x1006a074 */
  push32(0x1006d8e6u); f_1006a074();
  /* 1006d8e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1006d8e9:;
  /* 1006d8e9 mov eax, ebx */
  EAX = (EBX);
L_1006d8eb:;
  /* 1006d8eb pop ebx */
  EBX = (pop32());
  /* 1006d8ec pop esi */
  ESI = (pop32());
  /* 1006d8ed pop edi */
  EDI = (pop32());
  /* 1006d8ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006d8ef ret  */
  ESPCHK(0x1006d820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8f0 @ 0x1006d8f0 (257 bytes, 103 insns) */
void f_1006d8f0(void) {
  FTRACE(0x1006d8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006d8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1006d8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1006d8f3 push edi */
  push32((uint32_t)(EDI));
  /* 1006d8f4 push esi */
  push32((uint32_t)(ESI));
  /* 1006d8f5 push ebx */
  push32((uint32_t)(EBX));
  /* 1006d8f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1006d8f9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1006d8fb je 0x1006d9ea */
  if (C.zf) goto L_1006d9ea;
  /* 1006d901 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1006d904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1006d907 lea eax, [0x10076840] */
  EAX = ((uint32_t)(0x10076840));
  /* 1006d90d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d911 jne 0x1006d961 */
  if (!C.zf) goto L_1006d961;
  /* 1006d913 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 1006d915 mov bl, 0x5a */
  BL = (0x5au);
  /* 1006d917 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1006d919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1006d91c:;
  /* 1006d91c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1006d91e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1006d920 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1006d922 je 0x1006d945 */
  if (C.zf) goto L_1006d945;
  /* 1006d924 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1006d926 je 0x1006d945 */
  if (C.zf) goto L_1006d945;
  /* 1006d928 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006d929 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006d92a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006d92c jb 0x1006d934 */
  if (C.cf) goto L_1006d934;
  /* 1006d92e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006d930 ja 0x1006d934 */
  if ((!C.cf&&!C.zf)) goto L_1006d934;
  /* 1006d932 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_1006d934:;
  /* 1006d934 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006d936 jb 0x1006d93e */
  if (C.cf) goto L_1006d93e;
  /* 1006d938 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006d93a ja 0x1006d93e */
  if ((!C.cf&&!C.zf)) goto L_1006d93e;
  /* 1006d93c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1006d93e:;
  /* 1006d93e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006d940 jne 0x1006d94f */
  if (!C.zf) goto L_1006d94f;
  /* 1006d942 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1006d943 jne 0x1006d91c */
  if (!C.zf) goto L_1006d91c;
L_1006d945:;
  /* 1006d945 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1006d947 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1006d949 je 0x1006d9ea */
  if (C.zf) goto L_1006d9ea;
L_1006d94f:;
  /* 1006d94f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1006d954 jb 0x1006d9ea */
  if (C.cf) goto L_1006d9ea;
  /* 1006d95a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1006d95c jmp 0x1006d9ea */
  goto L_1006d9ea;
L_1006d961:;
  /* 1006d961 lock inc dword ptr [0x100769c4] */
  x86_unimpl("lock inc @ 0x1006d961");
  /* 1006d968 cmp dword ptr [0x100769c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100769c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d96f jg 0x1006d975 */
  if ((!C.zf&&C.sf==C.of)) goto L_1006d975;
  /* 1006d971 push 0 */
  push32((uint32_t)(0x0u));
  /* 1006d973 jmp 0x1006d98e */
  goto L_1006d98e;
L_1006d975:;
  /* 1006d975 lock dec dword ptr [0x100769c4] */
  x86_unimpl("lock dec @ 0x1006d975");
  /* 1006d97c mov ebx, ecx */
  EBX = (ECX);
  /* 1006d97e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1006d980 call 0x1006a013 */
  push32(0x1006d985u); f_1006a013();
  /* 1006d985 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1006d98c mov ecx, ebx */
  ECX = (EBX);
L_1006d98e:;
  /* 1006d98e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006d990 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006d992 mov edi, edi */
  EDI = (EDI);
L_1006d994:;
  /* 1006d994 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1006d996 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006d998 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1006d99a je 0x1006d9bf */
  if (C.zf) goto L_1006d9bf;
  /* 1006d99c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1006d99e je 0x1006d9bf */
  if (C.zf) goto L_1006d9bf;
  /* 1006d9a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1006d9a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1006d9a2 push ecx */
  push32((uint32_t)(ECX));
  /* 1006d9a3 push eax */
  push32((uint32_t)(EAX));
  /* 1006d9a4 push ebx */
  push32((uint32_t)(EBX));
  /* 1006d9a5 call 0x100694af */
  push32(0x1006d9aau); f_100694af();
  /* 1006d9aa mov ebx, eax */
  EBX = (EAX);
  /* 1006d9ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d9af call 0x100694af */
  push32(0x1006d9b4u); f_100694af();
  /* 1006d9b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d9b7 pop ecx */
  ECX = (pop32());
  /* 1006d9b8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d9ba jne 0x1006d9c5 */
  if (!C.zf) goto L_1006d9c5;
  /* 1006d9bc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1006d9bd jne 0x1006d994 */
  if (!C.zf) goto L_1006d994;
L_1006d9bf:;
  /* 1006d9bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1006d9c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1006d9c3 je 0x1006d9ce */
  if (C.zf) goto L_1006d9ce;
L_1006d9c5:;
  /* 1006d9c5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1006d9ca jb 0x1006d9ce */
  if (C.cf) goto L_1006d9ce;
  /* 1006d9cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1006d9ce:;
  /* 1006d9ce pop eax */
  EAX = (pop32());
  /* 1006d9cf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1006d9d1 jne 0x1006d9dc */
  if (!C.zf) goto L_1006d9dc;
  /* 1006d9d3 lock dec dword ptr [0x100769c4] */
  x86_unimpl("lock dec @ 0x1006d9d3");
  /* 1006d9da jmp 0x1006d9ea */
  goto L_1006d9ea;
L_1006d9dc:;
  /* 1006d9dc mov ebx, ecx */
  EBX = (ECX);
  /* 1006d9de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1006d9e0 call 0x1006a074 */
  push32(0x1006d9e5u); f_1006a074();
  /* 1006d9e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1006d9e8 mov ecx, ebx */
  ECX = (EBX);
L_1006d9ea:;
  /* 1006d9ea mov eax, ecx */
  EAX = (ECX);
  /* 1006d9ec pop ebx */
  EBX = (pop32());
  /* 1006d9ed pop esi */
  ESI = (pop32());
  /* 1006d9ee pop edi */
  EDI = (pop32());
  /* 1006d9ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1006d9f0 ret  */
  ESPCHK(0x1006d8f0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x1006da34 (6 bytes, 1 insns) */
void f_1006da34(void) {
  FTRACE(0x1006da34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1006da34 jmp dword ptr [0x1006e0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1006e0cc)))); return;
}

