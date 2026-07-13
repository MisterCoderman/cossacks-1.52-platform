#include "recomp.h"

/* FUN_10009265 @ 0x100c9265 (53 bytes, 25 insns) */
void f_100c9265(void) {
  FTRACE(0x100c9265u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9265 push ebp */
  push32((uint32_t)(EBP));
  /* 100c9266 mov ebp, esp */
  EBP = (ESP);
  /* 100c9268 push ecx */
  push32((uint32_t)(ECX));
  /* 100c9269 push esi */
  push32((uint32_t)(ESI));
  /* 100c926a wait  */
  /* wait (no observable integer/reg state) */
  /* 100c926b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 100c926e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 100c9271 call 0x100c92b0 */
  push32(0x100c9276u); f_100c92b0();
  /* 100c9276 mov esi, eax */
  ESI = (EAX);
  /* 100c9278 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c927b not eax */
  EAX = (~(EAX));
  /* 100c927d and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 100c927f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9282 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 100c9285 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 100c9287 push esi */
  push32((uint32_t)(ESI));
  /* 100c9288 call 0x100c9342 */
  push32(0x100c928du); f_100c9342();
  /* 100c928d pop ecx */
  ECX = (pop32());
  /* 100c928e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100c9291 pop ecx */
  ECX = (pop32());
  /* 100c9292 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 100c9295 mov eax, esi */
  EAX = (ESI);
  /* 100c9297 pop esi */
  ESI = (pop32());
  /* 100c9298 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9299 ret  */
  ESPCHK(0x100c9265u, _esp0);
  ESP += 4; return;
}

/* FUN_1000929a @ 0x100c929a (22 bytes, 8 insns) */
void f_100c929a(void) {
  FTRACE(0x100c929au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c929a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c929e and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100c92a3 push eax */
  push32((uint32_t)(EAX));
  /* 100c92a4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100c92a8 call 0x100c9265 */
  push32(0x100c92adu); f_100c9265();
  /* 100c92ad pop ecx */
  ECX = (pop32());
  /* 100c92ae pop ecx */
  ECX = (pop32());
  /* 100c92af ret  */
  ESPCHK(0x100c929au, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x100c92b0 (146 bytes, 58 insns) */
void f_100c92b0(void) {
  FTRACE(0x100c92b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c92b0 push ebx */
  push32((uint32_t)(EBX));
  /* 100c92b1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c92b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c92b7 push ebp */
  push32((uint32_t)(EBP));
  /* 100c92b8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100c92bb push edi */
  push32((uint32_t)(EDI));
  /* 100c92bc je 0x100c92c1 */
  if (C.zf) goto L_100c92c1;
  /* 100c92be push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100c92c0 pop eax */
  EAX = (pop32());
L_100c92c1:;
  /* 100c92c1 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 100c92c4 je 0x100c92c8 */
  if (C.zf) goto L_100c92c8;
  /* 100c92c6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_100c92c8:;
  /* 100c92c8 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 100c92cb je 0x100c92cf */
  if (C.zf) goto L_100c92cf;
  /* 100c92cd or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_100c92cf:;
  /* 100c92cf test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 100c92d2 je 0x100c92d6 */
  if (C.zf) goto L_100c92d6;
  /* 100c92d4 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_100c92d6:;
  /* 100c92d6 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 100c92d9 je 0x100c92dd */
  if (C.zf) goto L_100c92dd;
  /* 100c92db or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_100c92dd:;
  /* 100c92dd test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 100c92e0 je 0x100c92e7 */
  if (C.zf) goto L_100c92e7;
  /* 100c92e2 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_100c92e7:;
  /* 100c92e7 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 100c92ea push esi */
  push32((uint32_t)(ESI));
  /* 100c92eb mov edx, ecx */
  EDX = (ECX);
  /* 100c92ed mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 100c92f2 mov edi, 0x300 */
  EDI = (0x300u);
  /* 100c92f7 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 100c92f9 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 100c92fe je 0x100c931f */
  if (C.zf) goto L_100c931f;
  /* 100c9300 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9306 je 0x100c931c */
  if (C.zf) goto L_100c931c;
  /* 100c9308 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c930e je 0x100c9318 */
  if (C.zf) goto L_100c9318;
  /* 100c9310 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9312 jne 0x100c931f */
  if (!C.zf) goto L_100c931f;
  /* 100c9314 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100c9316 jmp 0x100c931f */
  goto L_100c931f;
L_100c9318:;
  /* 100c9318 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 100c931a jmp 0x100c931f */
  goto L_100c931f;
L_100c931c:;
  /* 100c931c or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_100c931f:;
  /* 100c931f and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100c9321 pop esi */
  ESI = (pop32());
  /* 100c9322 je 0x100c932f */
  if (C.zf) goto L_100c932f;
  /* 100c9324 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9326 jne 0x100c9334 */
  if (!C.zf) goto L_100c9334;
  /* 100c9328 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 100c932d jmp 0x100c9334 */
  goto L_100c9334;
L_100c932f:;
  /* 100c932f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_100c9334:;
  /* 100c9334 pop edi */
  EDI = (pop32());
  /* 100c9335 pop ebp */
  EBP = (pop32());
  /* 100c9336 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 100c9339 pop ebx */
  EBX = (pop32());
  /* 100c933a je 0x100c9341 */
  if (C.zf) goto L_100c9341;
  /* 100c933c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_100c9341:;
  /* 100c9341 ret  */
  ESPCHK(0x100c92b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009342 @ 0x100c9342 (137 bytes, 53 insns) */
void f_100c9342(void) {
  FTRACE(0x100c9342u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9342 push ebx */
  push32((uint32_t)(EBX));
  /* 100c9343 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c9347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c9349 push esi */
  push32((uint32_t)(ESI));
  /* 100c934a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 100c934d je 0x100c9352 */
  if (C.zf) goto L_100c9352;
  /* 100c934f push 1 */
  push32((uint32_t)(0x1u));
  /* 100c9351 pop eax */
  EAX = (pop32());
L_100c9352:;
  /* 100c9352 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 100c9355 je 0x100c9359 */
  if (C.zf) goto L_100c9359;
  /* 100c9357 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_100c9359:;
  /* 100c9359 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 100c935c je 0x100c9360 */
  if (C.zf) goto L_100c9360;
  /* 100c935e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_100c9360:;
  /* 100c9360 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 100c9363 je 0x100c9367 */
  if (C.zf) goto L_100c9367;
  /* 100c9365 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_100c9367:;
  /* 100c9367 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100c936a je 0x100c936e */
  if (C.zf) goto L_100c936e;
  /* 100c936c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_100c936e:;
  /* 100c936e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 100c9374 je 0x100c9378 */
  if (C.zf) goto L_100c9378;
  /* 100c9376 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_100c9378:;
  /* 100c9378 mov ecx, ebx */
  ECX = (EBX);
  /* 100c937a mov edx, 0x300 */
  EDX = (0x300u);
  /* 100c937f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 100c9381 mov esi, 0x200 */
  ESI = (0x200u);
  /* 100c9386 je 0x100c93a5 */
  if (C.zf) goto L_100c93a5;
  /* 100c9388 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c938e je 0x100c93a2 */
  if (C.zf) goto L_100c93a2;
  /* 100c9390 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9392 je 0x100c939d */
  if (C.zf) goto L_100c939d;
  /* 100c9394 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9396 jne 0x100c93a5 */
  if (!C.zf) goto L_100c93a5;
  /* 100c9398 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 100c939b jmp 0x100c93a5 */
  goto L_100c93a5;
L_100c939d:;
  /* 100c939d or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 100c93a0 jmp 0x100c93a5 */
  goto L_100c93a5;
L_100c93a2:;
  /* 100c93a2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_100c93a5:;
  /* 100c93a5 mov ecx, ebx */
  ECX = (EBX);
  /* 100c93a7 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 100c93ad je 0x100c93bb */
  if (C.zf) goto L_100c93bb;
  /* 100c93af cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c93b5 jne 0x100c93bd */
  if (!C.zf) goto L_100c93bd;
  /* 100c93b7 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 100c93b9 jmp 0x100c93bd */
  goto L_100c93bd;
L_100c93bb:;
  /* 100c93bb or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_100c93bd:;
  /* 100c93bd pop esi */
  ESI = (pop32());
  /* 100c93be test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 100c93c4 pop ebx */
  EBX = (pop32());
  /* 100c93c5 je 0x100c93ca */
  if (C.zf) goto L_100c93ca;
  /* 100c93c7 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_100c93ca:;
  /* 100c93ca ret  */
  ESPCHK(0x100c9342u, _esp0);
  ESP += 4; return;
}

/* FUN_100093cb @ 0x100c93cb (117 bytes, 46 insns) */
void f_100c93cb(void) {
  FTRACE(0x100c93cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c93cb push ebp */
  push32((uint32_t)(EBP));
  /* 100c93cc mov ebp, esp */
  EBP = (ESP);
  /* 100c93ce push ecx */
  push32((uint32_t)(ECX));
  /* 100c93cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c93d2 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 100c93d5 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c93db ja 0x100c93e9 */
  if ((!C.cf&&!C.zf)) goto L_100c93e9;
  /* 100c93dd mov ecx, dword ptr [0x100d0a10] */
  ECX = (r32((uint32_t)(0x100d0a10)));
  /* 100c93e3 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 100c93e7 jmp 0x100c943b */
  goto L_100c943b;
L_100c93e9:;
  /* 100c93e9 mov ecx, eax */
  ECX = (EAX);
  /* 100c93eb push esi */
  push32((uint32_t)(ESI));
  /* 100c93ec mov esi, dword ptr [0x100d0a10] */
  ESI = (r32((uint32_t)(0x100d0a10)));
  /* 100c93f2 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 100c93f5 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 100c93f8 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100c93fd pop esi */
  ESI = (pop32());
  /* 100c93fe je 0x100c940e */
  if (C.zf) goto L_100c940e;
  /* 100c9400 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 100c9404 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 100c9407 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 100c940a push 2 */
  push32((uint32_t)(0x2u));
  /* 100c940c jmp 0x100c9417 */
  goto L_100c9417;
L_100c940e:;
  /* 100c940e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100c9412 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 100c9415 push 1 */
  push32((uint32_t)(0x1u));
L_100c9417:;
  /* 100c9417 pop eax */
  EAX = (pop32());
  /* 100c9418 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 100c941b push 1 */
  push32((uint32_t)(0x1u));
  /* 100c941d push 0 */
  push32((uint32_t)(0x0u));
  /* 100c941f push 0 */
  push32((uint32_t)(0x0u));
  /* 100c9421 push ecx */
  push32((uint32_t)(ECX));
  /* 100c9422 push eax */
  push32((uint32_t)(EAX));
  /* 100c9423 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100c9426 push eax */
  push32((uint32_t)(EAX));
  /* 100c9427 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c9429 call 0x100cc27d */
  push32(0x100c942eu); f_100cc27d();
  /* 100c942e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9431 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c9433 jne 0x100c9437 */
  if (!C.zf) goto L_100c9437;
  /* 100c9435 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9436 ret  */
  ESPCHK(0x100c93cbu, _esp0);
  ESP += 4; return;
L_100c9437:;
  /* 100c9437 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_100c943b:;
  /* 100c943b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 100c943e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c943f ret  */
  ESPCHK(0x100c93cbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009440 @ 0x100c9440 (111 bytes, 44 insns) */
void f_100c9440(void) {
  FTRACE(0x100c9440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9440 push ebx */
  push32((uint32_t)(EBX));
  /* 100c9441 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100c9443 cmp dword ptr [0x100d6878], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100d6878))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9449 jne 0x100c945e */
  if (!C.zf) goto L_100c945e;
  /* 100c944b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c944f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9452 jl 0x100c94ad */
  if ((C.sf!=C.of)) goto L_100c94ad;
  /* 100c9454 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9457 jg 0x100c94ad */
  if ((!C.zf&&C.sf==C.of)) goto L_100c94ad;
  /* 100c9459 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c945c pop ebx */
  EBX = (pop32());
  /* 100c945d ret  */
  ESPCHK(0x100c9440u, _esp0);
  ESP += 4; return;
L_100c945e:;
  /* 100c945e push esi */
  push32((uint32_t)(ESI));
  /* 100c945f mov esi, 0x100d69f4 */
  ESI = (0x100d69f4u);
  /* 100c9464 push edi */
  push32((uint32_t)(EDI));
  /* 100c9465 push esi */
  push32((uint32_t)(ESI));
  /* 100c9466 call dword ptr [0x100ce090] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce090))), 0x100c946cu);
  /* 100c946c cmp dword ptr [0x100d69f0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100d69f0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9472 mov edi, dword ptr [0x100ce08c] */
  EDI = (r32((uint32_t)(0x100ce08c)));
  /* 100c9478 je 0x100c9488 */
  if (C.zf) goto L_100c9488;
  /* 100c947a push esi */
  push32((uint32_t)(ESI));
  /* 100c947b call edi */
  call_ind((uint32_t)(EDI), 0x100c947du);
  /* 100c947d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100c947f call 0x100ca013 */
  push32(0x100c9484u); f_100ca013();
  /* 100c9484 pop ecx */
  ECX = (pop32());
  /* 100c9485 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c9487 pop ebx */
  EBX = (pop32());
L_100c9488:;
  /* 100c9488 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100c948c call 0x100c94af */
  push32(0x100c9491u); f_100c94af();
  /* 100c9491 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100c9493 pop ecx */
  ECX = (pop32());
  /* 100c9494 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 100c9498 je 0x100c94a4 */
  if (C.zf) goto L_100c94a4;
  /* 100c949a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100c949c call 0x100ca074 */
  push32(0x100c94a1u); f_100ca074();
  /* 100c94a1 pop ecx */
  ECX = (pop32());
  /* 100c94a2 jmp 0x100c94a7 */
  goto L_100c94a7;
L_100c94a4:;
  /* 100c94a4 push esi */
  push32((uint32_t)(ESI));
  /* 100c94a5 call edi */
  call_ind((uint32_t)(EDI), 0x100c94a7u);
L_100c94a7:;
  /* 100c94a7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100c94ab pop edi */
  EDI = (pop32());
  /* 100c94ac pop esi */
  ESI = (pop32());
L_100c94ad:;
  /* 100c94ad pop ebx */
  EBX = (pop32());
  /* 100c94ae ret  */
  ESPCHK(0x100c9440u, _esp0);
  ESP += 4; return;
}

/* FUN_100094af @ 0x100c94af (203 bytes, 78 insns) */
void f_100c94af(void) {
  FTRACE(0x100c94afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c94af push ebp */
  push32((uint32_t)(EBP));
  /* 100c94b0 mov ebp, esp */
  EBP = (ESP);
  /* 100c94b2 push ecx */
  push32((uint32_t)(ECX));
  /* 100c94b3 cmp dword ptr [0x100d6878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100d6878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c94ba push ebx */
  push32((uint32_t)(EBX));
  /* 100c94bb push esi */
  push32((uint32_t)(ESI));
  /* 100c94bc push edi */
  push32((uint32_t)(EDI));
  /* 100c94bd jne 0x100c94dc */
  if (!C.zf) goto L_100c94dc;
  /* 100c94bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c94c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c94c5 jl 0x100c9575 */
  if ((C.sf!=C.of)) goto L_100c9575;
  /* 100c94cb cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c94ce jg 0x100c9575 */
  if ((!C.zf&&C.sf==C.of)) goto L_100c9575;
  /* 100c94d4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c94d7 jmp 0x100c9575 */
  goto L_100c9575;
L_100c94dc:;
  /* 100c94dc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c94df mov edi, 0x100 */
  EDI = (0x100u);
  /* 100c94e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c94e6 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c94e8 pop esi */
  ESI = (pop32());
  /* 100c94e9 jge 0x100c9510 */
  if ((C.sf==C.of)) goto L_100c9510;
  /* 100c94eb cmp dword ptr [0x100d0c20], esi */
  { uint32_t _a=(r32((uint32_t)(0x100d0c20))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c94f1 jle 0x100c94fe */
  if ((C.zf||C.sf!=C.of)) goto L_100c94fe;
  /* 100c94f3 push esi */
  push32((uint32_t)(ESI));
  /* 100c94f4 push ebx */
  push32((uint32_t)(EBX));
  /* 100c94f5 call 0x100c93cb */
  push32(0x100c94fau); f_100c93cb();
  /* 100c94fa pop ecx */
  ECX = (pop32());
  /* 100c94fb pop ecx */
  ECX = (pop32());
  /* 100c94fc jmp 0x100c9508 */
  goto L_100c9508;
L_100c94fe:;
  /* 100c94fe mov eax, dword ptr [0x100d0a10] */
  EAX = (r32((uint32_t)(0x100d0a10)));
  /* 100c9503 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 100c9506 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_100c9508:;
  /* 100c9508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c950a jne 0x100c9510 */
  if (!C.zf) goto L_100c9510;
L_100c950c:;
  /* 100c950c mov eax, ebx */
  EAX = (EBX);
  /* 100c950e jmp 0x100c9575 */
  goto L_100c9575;
L_100c9510:;
  /* 100c9510 mov edx, dword ptr [0x100d0a10] */
  EDX = (r32((uint32_t)(0x100d0a10)));
  /* 100c9516 mov eax, ebx */
  EAX = (EBX);
  /* 100c9518 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100c951b movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 100c951e test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100c9523 je 0x100c9534 */
  if (C.zf) goto L_100c9534;
  /* 100c9525 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 100c9529 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c952b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 100c952e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 100c9531 pop eax */
  EAX = (pop32());
  /* 100c9532 jmp 0x100c953d */
  goto L_100c953d;
L_100c9534:;
  /* 100c9534 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 100c9538 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 100c953b mov eax, esi */
  EAX = (ESI);
L_100c953d:;
  /* 100c953d push esi */
  push32((uint32_t)(ESI));
  /* 100c953e push 0 */
  push32((uint32_t)(0x0u));
  /* 100c9540 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 100c9543 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c9545 push ecx */
  push32((uint32_t)(ECX));
  /* 100c9546 push eax */
  push32((uint32_t)(EAX));
  /* 100c9547 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100c954a push eax */
  push32((uint32_t)(EAX));
  /* 100c954b push edi */
  push32((uint32_t)(EDI));
  /* 100c954c push dword ptr [0x100d6878] */
  push32((uint32_t)(r32((uint32_t)(0x100d6878))));
  /* 100c9552 call 0x100cc3c6 */
  push32(0x100c9557u); f_100cc3c6();
  /* 100c9557 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c955a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c955c je 0x100c950c */
  if (C.zf) goto L_100c950c;
  /* 100c955e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9560 jne 0x100c9568 */
  if (!C.zf) goto L_100c9568;
  /* 100c9562 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100c9566 jmp 0x100c9575 */
  goto L_100c9575;
L_100c9568:;
  /* 100c9568 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 100c956c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100c9570 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100c9573 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_100c9575:;
  /* 100c9575 pop edi */
  EDI = (pop32());
  /* 100c9576 pop esi */
  ESI = (pop32());
  /* 100c9577 pop ebx */
  EBX = (pop32());
  /* 100c9578 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9579 ret  */
  ESPCHK(0x100c94afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000957a @ 0x100c957a (73 bytes, 36 insns) */
void f_100c957a(void) {
  FTRACE(0x100c957au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c957a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c957e push esi */
  push32((uint32_t)(ESI));
  /* 100c957f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100c9581 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100c9582 pop ecx */
  ECX = (pop32());
  /* 100c9583 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c9585 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100c9587 mov esi, eax */
  ESI = (EAX);
  /* 100c9589 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100c958d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100c958e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c9590 pop ecx */
  ECX = (pop32());
  /* 100c9591 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c9595 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c9597 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 100c959a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100c959c not edx */
  EDX = (~(EDX));
  /* 100c959e test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 100c95a1 jne 0x100c95bf */
  if (!C.zf) goto L_100c95bf;
  /* 100c95a3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100c95a4 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c95a7 jge 0x100c95ba */
  if ((C.sf==C.of)) goto L_100c95ba;
  /* 100c95a9 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_100c95ac:;
  /* 100c95ac cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c95af jne 0x100c95bf */
  if (!C.zf) goto L_100c95bf;
  /* 100c95b1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100c95b2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c95b5 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c95b8 jl 0x100c95ac */
  if ((C.sf!=C.of)) goto L_100c95ac;
L_100c95ba:;
  /* 100c95ba push 1 */
  push32((uint32_t)(0x1u));
  /* 100c95bc pop eax */
  EAX = (pop32());
  /* 100c95bd pop esi */
  ESI = (pop32());
  /* 100c95be ret  */
  ESPCHK(0x100c957au, _esp0);
  ESP += 4; return;
L_100c95bf:;
  /* 100c95bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c95c1 pop esi */
  ESI = (pop32());
  /* 100c95c2 ret  */
  ESPCHK(0x100c957au, _esp0);
  ESP += 4; return;
}

/* FUN_100095c3 @ 0x100c95c3 (86 bytes, 43 insns) */
void f_100c95c3(void) {
  FTRACE(0x100c95c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c95c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c95c7 push ebx */
  push32((uint32_t)(EBX));
  /* 100c95c8 push esi */
  push32((uint32_t)(ESI));
  /* 100c95c9 push edi */
  push32((uint32_t)(EDI));
  /* 100c95ca push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100c95cc mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 100c95d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100c95d1 pop ecx */
  ECX = (pop32());
  /* 100c95d2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c95d4 mov esi, eax */
  ESI = (EAX);
  /* 100c95d6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100c95da cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100c95db idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c95dd lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 100c95e0 push edi */
  push32((uint32_t)(EDI));
  /* 100c95e1 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100c95e3 pop ecx */
  ECX = (pop32());
  /* 100c95e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c95e6 pop eax */
  EAX = (pop32());
  /* 100c95e7 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c95e9 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100c95eb push eax */
  push32((uint32_t)(EAX));
  /* 100c95ec push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 100c95ee call 0x100cc615 */
  push32(0x100c95f3u); f_100cc615();
  /* 100c95f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c95f6 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100c95f7 js 0x100c9615 */
  if (C.sf) goto L_100c9615;
  /* 100c95f9 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_100c95fc:;
  /* 100c95fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c95fe je 0x100c9615 */
  if (C.zf) goto L_100c9615;
  /* 100c9600 push edi */
  push32((uint32_t)(EDI));
  /* 100c9601 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c9603 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 100c9605 call 0x100cc615 */
  push32(0x100c960au); f_100cc615();
  /* 100c960a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c960d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100c960e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c9611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100c9613 jge 0x100c95fc */
  if ((C.sf==C.of)) goto L_100c95fc;
L_100c9615:;
  /* 100c9615 pop edi */
  EDI = (pop32());
  /* 100c9616 pop esi */
  ESI = (pop32());
  /* 100c9617 pop ebx */
  EBX = (pop32());
  /* 100c9618 ret  */
  ESPCHK(0x100c95c3u, _esp0);
  ESP += 4; return;
}

/* FUN_10009619 @ 0x100c9619 (140 bytes, 71 insns) */
void f_100c9619(void) {
  FTRACE(0x100c9619u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9619 push ebp */
  push32((uint32_t)(EBP));
  /* 100c961a mov ebp, esp */
  EBP = (ESP);
  /* 100c961c push ecx */
  push32((uint32_t)(ECX));
  /* 100c961d push ecx */
  push32((uint32_t)(ECX));
  /* 100c961e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c9621 push ebx */
  push32((uint32_t)(EBX));
  /* 100c9622 push esi */
  push32((uint32_t)(ESI));
  /* 100c9623 push edi */
  push32((uint32_t)(EDI));
  /* 100c9624 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 100c9627 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100c9629 pop ecx */
  ECX = (pop32());
  /* 100c962a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100c962e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 100c9631 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100c9633 mov eax, ebx */
  EAX = (EBX);
  /* 100c9635 pop esi */
  ESI = (pop32());
  /* 100c9636 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100c9637 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c9639 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100c963b mov ecx, eax */
  ECX = (EAX);
  /* 100c963d mov eax, ebx */
  EAX = (EBX);
  /* 100c963f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100c9640 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c9642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9645 pop esi */
  ESI = (pop32());
  /* 100c9646 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c9648 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100c964b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 100c964e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100c9651 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c9653 pop edx */
  EDX = (pop32());
  /* 100c9654 mov ecx, esi */
  ECX = (ESI);
  /* 100c9656 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100c9658 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 100c965a je 0x100c967d */
  if (C.zf) goto L_100c967d;
  /* 100c965c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100c965d push ebx */
  push32((uint32_t)(EBX));
  /* 100c965e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c9661 call 0x100c957a */
  push32(0x100c9666u); f_100c957a();
  /* 100c9666 pop ecx */
  ECX = (pop32());
  /* 100c9667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c9669 pop ecx */
  ECX = (pop32());
  /* 100c966a jne 0x100c967a */
  if (!C.zf) goto L_100c967a;
  /* 100c966c push edi */
  push32((uint32_t)(EDI));
  /* 100c966d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c9670 call 0x100c95c3 */
  push32(0x100c9675u); f_100c95c3();
  /* 100c9675 pop ecx */
  ECX = (pop32());
  /* 100c9676 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100c9679 pop ecx */
  ECX = (pop32());
L_100c967a:;
  /* 100c967a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_100c967d:;
  /* 100c967d or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 100c9680 mov ecx, esi */
  ECX = (ESI);
  /* 100c9682 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100c9684 push 3 */
  push32((uint32_t)(0x3u));
  /* 100c9686 pop ecx */
  ECX = (pop32());
  /* 100c9687 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100c9689 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100c968c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c968d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c968f jge 0x100c969d */
  if ((C.sf==C.of)) goto L_100c969d;
  /* 100c9691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9694 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c9696 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 100c9699 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c969b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_100c969d:;
  /* 100c969d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100c96a0 pop edi */
  EDI = (pop32());
  /* 100c96a1 pop esi */
  ESI = (pop32());
  /* 100c96a2 pop ebx */
  EBX = (pop32());
  /* 100c96a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c96a4 ret  */
  ESPCHK(0x100c9619u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a5 @ 0x100c96a5 (27 bytes, 13 insns) */
void f_100c96a5(void) {
  FTRACE(0x100c96a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c96a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c96a9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c96ad push esi */
  push32((uint32_t)(ESI));
  /* 100c96ae push 3 */
  push32((uint32_t)(0x3u));
  /* 100c96b0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c96b2 pop edx */
  EDX = (pop32());
L_100c96b3:;
  /* 100c96b3 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 100c96b5 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 100c96b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c96bb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100c96bc jne 0x100c96b3 */
  if (!C.zf) goto L_100c96b3;
  /* 100c96be pop esi */
  ESI = (pop32());
  /* 100c96bf ret  */
  ESPCHK(0x100c96a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100096c0 @ 0x100c96c0 (12 bytes, 8 insns) */
void f_100c96c0(void) {
  FTRACE(0x100c96c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c96c0 push edi */
  push32((uint32_t)(EDI));
  /* 100c96c1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 100c96c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c96c7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100c96c8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100c96c9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100c96ca pop edi */
  EDI = (pop32());
  /* 100c96cb ret  */
  ESPCHK(0x100c96c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096cc @ 0x100c96cc (27 bytes, 13 insns) */
void f_100c96cc(void) {
  FTRACE(0x100c96ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c96cc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c96d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_100c96d2:;
  /* 100c96d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c96d5 jne 0x100c96e4 */
  if (!C.zf) goto L_100c96e4;
  /* 100c96d7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100c96d8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c96db cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c96de jl 0x100c96d2 */
  if ((C.sf!=C.of)) goto L_100c96d2;
  /* 100c96e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c96e2 pop eax */
  EAX = (pop32());
  /* 100c96e3 ret  */
  ESPCHK(0x100c96ccu, _esp0);
  ESP += 4; return;
L_100c96e4:;
  /* 100c96e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c96e6 ret  */
  ESPCHK(0x100c96ccu, _esp0);
  ESP += 4; return;
}

/* FUN_100096e7 @ 0x100c96e7 (141 bytes, 64 insns) */
void f_100c96e7(void) {
  FTRACE(0x100c96e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c96e7 push ebp */
  push32((uint32_t)(EBP));
  /* 100c96e8 mov ebp, esp */
  EBP = (ESP);
  /* 100c96ea sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c96ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c96f0 push ebx */
  push32((uint32_t)(EBX));
  /* 100c96f1 push esi */
  push32((uint32_t)(ESI));
  /* 100c96f2 push edi */
  push32((uint32_t)(EDI));
  /* 100c96f3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100c96f5 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100c96f8 pop ebx */
  EBX = (pop32());
  /* 100c96f9 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 100c96fc cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100c96fd mov ecx, ebx */
  ECX = (EBX);
  /* 100c96ff mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 100c9706 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c9708 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100c970b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c970e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100c970f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100c9711 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 100c9715 mov ecx, edx */
  ECX = (EDX);
  /* 100c9717 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100c9719 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c971b not esi */
  ESI = (~(ESI));
L_100c971d:;
  /* 100c971d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100c971f mov ecx, eax */
  ECX = (EAX);
  /* 100c9721 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 100c9723 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100c9726 mov ecx, edx */
  ECX = (EDX);
  /* 100c9728 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100c972a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 100c972d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 100c972f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100c9732 mov ecx, ebx */
  ECX = (EBX);
  /* 100c9734 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9737 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100c9739 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 100c973c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100c973f jne 0x100c971d */
  if (!C.zf) goto L_100c971d;
  /* 100c9741 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 100c9744 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c9746 pop ebx */
  EBX = (pop32());
  /* 100c9747 mov esi, edi */
  ESI = (EDI);
  /* 100c9749 push 8 */
  push32((uint32_t)(0x8u));
  /* 100c974b pop ecx */
  ECX = (pop32());
  /* 100c974c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_100c974f:;
  /* 100c974f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9751 jl 0x100c9762 */
  if ((C.sf!=C.of)) goto L_100c9762;
  /* 100c9753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9756 mov eax, ecx */
  EAX = (ECX);
  /* 100c9758 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c975a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 100c975d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 100c9760 jmp 0x100c9769 */
  goto L_100c9769;
L_100c9762:;
  /* 100c9762 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9765 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_100c9769:;
  /* 100c9769 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100c976a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c976d jns 0x100c974f */
  if (!C.sf) goto L_100c974f;
  /* 100c976f pop edi */
  EDI = (pop32());
  /* 100c9770 pop esi */
  ESI = (pop32());
  /* 100c9771 pop ebx */
  EBX = (pop32());
  /* 100c9772 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9773 ret  */
  ESPCHK(0x100c96e7u, _esp0);
  ESP += 4; return;
}

/* FUN_10009774 @ 0x100c9774 (364 bytes, 138 insns) */
void f_100c9774(void) {
  FTRACE(0x100c9774u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9774 push ebp */
  push32((uint32_t)(EBP));
  /* 100c9775 mov ebp, esp */
  EBP = (ESP);
  /* 100c9777 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c977a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c977d push ebx */
  push32((uint32_t)(EBX));
  /* 100c977e push esi */
  push32((uint32_t)(ESI));
  /* 100c977f push edi */
  push32((uint32_t)(EDI));
  /* 100c9780 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 100c9784 mov ebx, ecx */
  EBX = (ECX);
  /* 100c9786 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 100c978c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 100c978f mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 100c9792 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 100c9795 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 100c9798 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 100c979b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 100c979e and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 100c97a4 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c97aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100c97ad shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100c97b0 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c97b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100c97b9 jne 0x100c97e1 */
  if (!C.zf) goto L_100c97e1;
  /* 100c97bb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c97be xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100c97c0 push eax */
  push32((uint32_t)(EAX));
  /* 100c97c1 call 0x100c96cc */
  push32(0x100c97c6u); f_100c96cc();
  /* 100c97c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c97c8 pop ecx */
  ECX = (pop32());
  /* 100c97c9 jne 0x100c98a0 */
  if (!C.zf) goto L_100c98a0;
  /* 100c97cf lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c97d2 push eax */
  push32((uint32_t)(EAX));
  /* 100c97d3 call 0x100c96c0 */
  push32(0x100c97d8u); f_100c96c0();
  /* 100c97d8 pop ecx */
  ECX = (pop32());
L_100c97d9:;
  /* 100c97d9 push 2 */
  push32((uint32_t)(0x2u));
L_100c97db:;
  /* 100c97db pop eax */
  EAX = (pop32());
  /* 100c97dc jmp 0x100c98a2 */
  goto L_100c98a2;
L_100c97e1:;
  /* 100c97e1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c97e4 push eax */
  push32((uint32_t)(EAX));
  /* 100c97e5 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 100c97e8 push eax */
  push32((uint32_t)(EAX));
  /* 100c97e9 call 0x100c96a5 */
  push32(0x100c97eeu); f_100c96a5();
  /* 100c97ee push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 100c97f1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c97f4 push eax */
  push32((uint32_t)(EAX));
  /* 100c97f5 call 0x100c9619 */
  push32(0x100c97fau); f_100c9619();
  /* 100c97fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c97fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c97ff je 0x100c9802 */
  if (C.zf) goto L_100c9802;
  /* 100c9801 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_100c9802:;
  /* 100c9802 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 100c9805 mov ecx, eax */
  ECX = (EAX);
  /* 100c9807 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c980a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c980c jge 0x100c981a */
  if ((C.sf==C.of)) goto L_100c981a;
  /* 100c980e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c9811 push eax */
  push32((uint32_t)(EAX));
  /* 100c9812 call 0x100c96c0 */
  push32(0x100c9817u); f_100c96c0();
  /* 100c9817 pop ecx */
  ECX = (pop32());
  /* 100c9818 jmp 0x100c9856 */
  goto L_100c9856;
L_100c981a:;
  /* 100c981a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c981c jg 0x100c985d */
  if ((!C.zf&&C.sf==C.of)) goto L_100c985d;
  /* 100c981e sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c9820 mov esi, eax */
  ESI = (EAX);
  /* 100c9822 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 100c9825 push eax */
  push32((uint32_t)(EAX));
  /* 100c9826 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c9829 push eax */
  push32((uint32_t)(EAX));
  /* 100c982a call 0x100c96a5 */
  push32(0x100c982fu); f_100c96a5();
  /* 100c982f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c9832 push esi */
  push32((uint32_t)(ESI));
  /* 100c9833 push eax */
  push32((uint32_t)(EAX));
  /* 100c9834 call 0x100c96e7 */
  push32(0x100c9839u); f_100c96e7();
  /* 100c9839 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 100c983c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c983f push eax */
  push32((uint32_t)(EAX));
  /* 100c9840 call 0x100c9619 */
  push32(0x100c9845u); f_100c9619();
  /* 100c9845 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 100c9848 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c9849 push eax */
  push32((uint32_t)(EAX));
  /* 100c984a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c984d push eax */
  push32((uint32_t)(EAX));
  /* 100c984e call 0x100c96e7 */
  push32(0x100c9853u); f_100c96e7();
  /* 100c9853 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c9856:;
  /* 100c9856 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100c9858 jmp 0x100c97d9 */
  goto L_100c97d9;
L_100c985d:;
  /* 100c985d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c985f jl 0x100c9889 */
  if ((C.sf!=C.of)) goto L_100c9889;
  /* 100c9861 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c9864 push eax */
  push32((uint32_t)(EAX));
  /* 100c9865 call 0x100c96c0 */
  push32(0x100c986au); f_100c96c0();
  /* 100c986a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 100c986d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 100c9871 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c9874 push eax */
  push32((uint32_t)(EAX));
  /* 100c9875 call 0x100c96e7 */
  push32(0x100c987au); f_100c96e7();
  /* 100c987a mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 100c987d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9880 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9882 push 1 */
  push32((uint32_t)(0x1u));
  /* 100c9884 jmp 0x100c97db */
  goto L_100c97db;
L_100c9889:;
  /* 100c9889 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 100c988c mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 100c988f and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 100c9893 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c9896 push eax */
  push32((uint32_t)(EAX));
  /* 100c9897 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9899 call 0x100c96e7 */
  push32(0x100c989eu); f_100c96e7();
  /* 100c989e pop ecx */
  ECX = (pop32());
  /* 100c989f pop ecx */
  ECX = (pop32());
L_100c98a0:;
  /* 100c98a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100c98a2:;
  /* 100c98a2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100c98a4 pop ecx */
  ECX = (pop32());
  /* 100c98a5 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c98a8 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 100c98ab shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100c98ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c98b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100c98b2 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c98b4 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 100c98ba or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 100c98bc or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 100c98bf cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c98c2 jne 0x100c98d1 */
  if (!C.zf) goto L_100c98d1;
  /* 100c98c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c98c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 100c98ca mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 100c98cd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 100c98cf jmp 0x100c98db */
  goto L_100c98db;
L_100c98d1:;
  /* 100c98d1 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c98d4 jne 0x100c98db */
  if (!C.zf) goto L_100c98db;
  /* 100c98d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c98d9 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_100c98db:;
  /* 100c98db pop edi */
  EDI = (pop32());
  /* 100c98dc pop esi */
  ESI = (pop32());
  /* 100c98dd pop ebx */
  EBX = (pop32());
  /* 100c98de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c98df ret  */
  ESPCHK(0x100c9774u, _esp0);
  ESP += 4; return;
}

/* FUN_100098e0 @ 0x100c98e0 (22 bytes, 6 insns) */
void f_100c98e0(void) {
  FTRACE(0x100c98e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c98e0 push 0x100d0c30 */
  push32((uint32_t)(0x100d0c30u));
  /* 100c98e5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100c98e9 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100c98ed call 0x100c9774 */
  push32(0x100c98f2u); f_100c9774();
  /* 100c98f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c98f5 ret  */
  ESPCHK(0x100c98e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098f6 @ 0x100c98f6 (22 bytes, 6 insns) */
void f_100c98f6(void) {
  FTRACE(0x100c98f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c98f6 push 0x100d0c48 */
  push32((uint32_t)(0x100d0c48u));
  /* 100c98fb push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100c98ff push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100c9903 call 0x100c9774 */
  push32(0x100c9908u); f_100c9774();
  /* 100c9908 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c990b ret  */
  ESPCHK(0x100c98f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000990c @ 0x100c990c (45 bytes, 21 insns) */
void f_100c990c(void) {
  FTRACE(0x100c990cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c990c push ebp */
  push32((uint32_t)(EBP));
  /* 100c990d mov ebp, esp */
  EBP = (ESP);
  /* 100c990f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c9912 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c9914 push eax */
  push32((uint32_t)(EAX));
  /* 100c9915 push eax */
  push32((uint32_t)(EAX));
  /* 100c9916 push eax */
  push32((uint32_t)(EAX));
  /* 100c9917 push eax */
  push32((uint32_t)(EAX));
  /* 100c9918 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100c991b lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 100c991e push eax */
  push32((uint32_t)(EAX));
  /* 100c991f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c9922 push eax */
  push32((uint32_t)(EAX));
  /* 100c9923 call 0x100cc7b6 */
  push32(0x100c9928u); f_100cc7b6();
  /* 100c9928 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c992b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c992e push eax */
  push32((uint32_t)(EAX));
  /* 100c992f call 0x100c98e0 */
  push32(0x100c9934u); f_100c98e0();
  /* 100c9934 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9937 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9938 ret  */
  ESPCHK(0x100c990cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009939 @ 0x100c9939 (45 bytes, 21 insns) */
void f_100c9939(void) {
  FTRACE(0x100c9939u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9939 push ebp */
  push32((uint32_t)(EBP));
  /* 100c993a mov ebp, esp */
  EBP = (ESP);
  /* 100c993c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c993f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c9941 push eax */
  push32((uint32_t)(EAX));
  /* 100c9942 push eax */
  push32((uint32_t)(EAX));
  /* 100c9943 push eax */
  push32((uint32_t)(EAX));
  /* 100c9944 push eax */
  push32((uint32_t)(EAX));
  /* 100c9945 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100c9948 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 100c994b push eax */
  push32((uint32_t)(EAX));
  /* 100c994c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c994f push eax */
  push32((uint32_t)(EAX));
  /* 100c9950 call 0x100cc7b6 */
  push32(0x100c9955u); f_100cc7b6();
  /* 100c9955 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100c9958 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c995b push eax */
  push32((uint32_t)(EAX));
  /* 100c995c call 0x100c98f6 */
  push32(0x100c9961u); f_100c98f6();
  /* 100c9961 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9964 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9965 ret  */
  ESPCHK(0x100c9939u, _esp0);
  ESP += 4; return;
}

/* FUN_10009966 @ 0x100c9966 (119 bytes, 57 insns) */
void f_100c9966(void) {
  FTRACE(0x100c9966u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9966 push ebp */
  push32((uint32_t)(EBP));
  /* 100c9967 mov ebp, esp */
  EBP = (ESP);
  /* 100c9969 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 100c996c push ebx */
  push32((uint32_t)(EBX));
  /* 100c996d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c9970 push esi */
  push32((uint32_t)(ESI));
  /* 100c9971 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9974 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 100c9977 push edi */
  push32((uint32_t)(EDI));
  /* 100c9978 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 100c997b mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 100c997e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100c9980 mov eax, edi */
  EAX = (EDI);
  /* 100c9982 jle 0x100c99a3 */
  if ((C.zf||C.sf!=C.of)) goto L_100c99a3;
  /* 100c9984 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100c9987 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100c9989:;
  /* 100c9989 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 100c998b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100c998d je 0x100c9995 */
  if (C.zf) goto L_100c9995;
  /* 100c998f movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 100c9992 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100c9993 jmp 0x100c9998 */
  goto L_100c9998;
L_100c9995:;
  /* 100c9995 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 100c9997 pop edx */
  EDX = (pop32());
L_100c9998:;
  /* 100c9998 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 100c999a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c999b dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 100c999e jne 0x100c9989 */
  if (!C.zf) goto L_100c9989;
  /* 100c99a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_100c99a3:;
  /* 100c99a3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 100c99a6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100c99a8 jl 0x100c99bc */
  if ((C.sf!=C.of)) goto L_100c99bc;
  /* 100c99aa cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c99ad jl 0x100c99bc */
  if ((C.sf!=C.of)) goto L_100c99bc;
L_100c99af:;
  /* 100c99af dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100c99b0 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c99b3 jne 0x100c99ba */
  if (!C.zf) goto L_100c99ba;
  /* 100c99b5 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 100c99b8 jmp 0x100c99af */
  goto L_100c99af;
L_100c99ba:;
  /* 100c99ba inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_100c99bc:;
  /* 100c99bc cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100c99bf jne 0x100c99c6 */
  if (!C.zf) goto L_100c99c6;
  /* 100c99c1 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 100c99c4 jmp 0x100c99d8 */
  goto L_100c99d8;
L_100c99c6:;
  /* 100c99c6 push edi */
  push32((uint32_t)(EDI));
  /* 100c99c7 call 0x100c9040 */
  push32(0x100c99ccu); f_100c9040();
  /* 100c99cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100c99cd push eax */
  push32((uint32_t)(EAX));
  /* 100c99ce push edi */
  push32((uint32_t)(EDI));
  /* 100c99cf push esi */
  push32((uint32_t)(ESI));
  /* 100c99d0 call 0x100c9c40 */
  push32(0x100c99d5u); f_100c9c40();
  /* 100c99d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100c99d8:;
  /* 100c99d8 pop edi */
  EDI = (pop32());
  /* 100c99d9 pop esi */
  ESI = (pop32());
  /* 100c99da pop ebx */
  EBX = (pop32());
  /* 100c99db pop ebp */
  EBP = (pop32());
  /* 100c99dc ret  */
  ESPCHK(0x100c9966u, _esp0);
  ESP += 4; return;
}

/* FUN_100099dd @ 0x100c99dd (92 bytes, 41 insns) */
void f_100c99dd(void) {
  FTRACE(0x100c99ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c99dd push ebp */
  push32((uint32_t)(EBP));
  /* 100c99de mov ebp, esp */
  EBP = (ESP);
  /* 100c99e0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c99e3 push esi */
  push32((uint32_t)(ESI));
  /* 100c99e4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100c99e7 push edi */
  push32((uint32_t)(EDI));
  /* 100c99e8 push eax */
  push32((uint32_t)(EAX));
  /* 100c99e9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100c99ec push eax */
  push32((uint32_t)(EAX));
  /* 100c99ed call 0x100c9a39 */
  push32(0x100c99f2u); f_100c9a39();
  /* 100c99f2 pop ecx */
  ECX = (pop32());
  /* 100c99f3 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100c99f6 pop ecx */
  ECX = (pop32());
  /* 100c99f7 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 100c99fa push eax */
  push32((uint32_t)(EAX));
  /* 100c99fb push 0 */
  push32((uint32_t)(0x0u));
  /* 100c99fd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100c99ff sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c9a02 mov edi, esp */
  EDI = (ESP);
  /* 100c9a04 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100c9a05 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100c9a06 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 100c9a08 call 0x100ccc87 */
  push32(0x100c9a0du); f_100ccc87();
  /* 100c9a0d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100c9a10 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 100c9a13 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 100c9a16 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 100c9a1a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100c9a1c movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 100c9a20 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 100c9a23 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 100c9a26 push eax */
  push32((uint32_t)(EAX));
  /* 100c9a27 push edi */
  push32((uint32_t)(EDI));
  /* 100c9a28 call 0x100c9af0 */
  push32(0x100c9a2du); f_100c9af0();
  /* 100c9a2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9a30 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 100c9a33 mov eax, esi */
  EAX = (ESI);
  /* 100c9a35 pop edi */
  EDI = (pop32());
  /* 100c9a36 pop esi */
  ESI = (pop32());
  /* 100c9a37 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9a38 ret  */
  ESPCHK(0x100c99ddu, _esp0);
  ESP += 4; return;
}

/* FUN_10009a39 @ 0x100c9a39 (182 bytes, 70 insns) */
void f_100c9a39(void) {
  FTRACE(0x100c9a39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9a39 push ebp */
  push32((uint32_t)(EBP));
  /* 100c9a3a mov ebp, esp */
  EBP = (ESP);
  /* 100c9a3c push ecx */
  push32((uint32_t)(ECX));
  /* 100c9a3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c9a40 push ebx */
  push32((uint32_t)(EBX));
  /* 100c9a41 push esi */
  push32((uint32_t)(ESI));
  /* 100c9a42 push edi */
  push32((uint32_t)(EDI));
  /* 100c9a43 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 100c9a47 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 100c9a4c mov ecx, eax */
  ECX = (EAX);
  /* 100c9a4e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 100c9a53 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 100c9a56 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100c9a58 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100c9a5b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 100c9a5e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 100c9a60 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 100c9a63 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100c9a68 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100c9a6d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100c9a6f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 100c9a72 je 0x100c9a87 */
  if (C.zf) goto L_100c9a87;
  /* 100c9a74 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9a76 je 0x100c9a80 */
  if (C.zf) goto L_100c9a80;
  /* 100c9a78 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 100c9a7e jmp 0x100c9aa8 */
  goto L_100c9aa8;
L_100c9a80:;
  /* 100c9a80 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 100c9a85 jmp 0x100c9aa8 */
  goto L_100c9aa8;
L_100c9a87:;
  /* 100c9a87 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100c9a89 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9a8b jne 0x100c9a9f */
  if (!C.zf) goto L_100c9a9f;
  /* 100c9a8d cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9a8f jne 0x100c9a9f */
  if (!C.zf) goto L_100c9a9f;
  /* 100c9a91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9a94 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 100c9a97 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 100c9a99 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 100c9a9d jmp 0x100c9aea */
  goto L_100c9aea;
L_100c9a9f:;
  /* 100c9a9f lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 100c9aa5 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_100c9aa8:;
  /* 100c9aa8 mov ecx, edx */
  ECX = (EDX);
  /* 100c9aaa shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 100c9aad shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 100c9ab0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 100c9ab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9ab5 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 100c9ab8 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 100c9abb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100c9abe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_100c9ac0:;
  /* 100c9ac0 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 100c9ac2 jne 0x100c9ae1 */
  if (!C.zf) goto L_100c9ae1;
  /* 100c9ac4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 100c9ac6 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9ac8 mov ebx, edx */
  EBX = (EDX);
  /* 100c9aca shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 100c9acd or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 100c9acf lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 100c9ad2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100c9ad4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 100c9ad7 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9add mov ecx, ebx */
  ECX = (EBX);
  /* 100c9adf jmp 0x100c9ac0 */
  goto L_100c9ac0;
L_100c9ae1:;
  /* 100c9ae1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100c9ae4 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100c9ae6 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_100c9aea:;
  /* 100c9aea pop edi */
  EDI = (pop32());
  /* 100c9aeb pop esi */
  ESI = (pop32());
  /* 100c9aec pop ebx */
  EBX = (pop32());
  /* 100c9aed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9aee ret  */
  ESPCHK(0x100c9a39u, _esp0);
  ESP += 4; return;
}

/* FUN_10009af0 @ 0x100c9af0 (7 bytes, 3 insns) */
void f_100c9af0(void) {
  FTRACE(0x100c9af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9af0 push edi */
  push32((uint32_t)(EDI));
  /* 100c9af1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 100c9af5 jmp 0x100c9b61 */
  jmp_ind(0x100c9b61u); return;
}

/* FUN_10009b00 @ 0x100c9b00 (224 bytes, 84 insns) */
void f_100c9b00(void) {
  FTRACE(0x100c9b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9b00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c9b04 push edi */
  push32((uint32_t)(EDI));
  /* 100c9b05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100c9b0b je 0x100c9b1c */
  if (C.zf) goto L_100c9b1c;
L_100c9b0d:;
  /* 100c9b0d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100c9b0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100c9b10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c9b12 je 0x100c9b4f */
  if (C.zf) goto L_100c9b4f;
  /* 100c9b14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100c9b1a jne 0x100c9b0d */
  if (!C.zf) goto L_100c9b0d;
L_100c9b1c:;
  /* 100c9b1c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 100c9b1e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 100c9b23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9b25 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100c9b28 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100c9b2a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9b2d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 100c9b32 je 0x100c9b1c */
  if (C.zf) goto L_100c9b1c;
  /* 100c9b34 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 100c9b37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100c9b39 je 0x100c9b5e */
  if (C.zf) goto L_100c9b5e;
  /* 100c9b3b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100c9b3d je 0x100c9b59 */
  if (C.zf) goto L_100c9b59;
  /* 100c9b3f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 100c9b44 je 0x100c9b54 */
  if (C.zf) goto L_100c9b54;
  /* 100c9b46 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 100c9b4b je 0x100c9b4f */
  if (C.zf) goto L_100c9b4f;
  /* 100c9b4d jmp 0x100c9b1c */
  goto L_100c9b1c;
L_100c9b4f:;
  /* 100c9b4f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 100c9b52 jmp 0x100c9b61 */
  goto L_100c9b61;
L_100c9b54:;
  /* 100c9b54 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 100c9b57 jmp 0x100c9b61 */
  goto L_100c9b61;
L_100c9b59:;
  /* 100c9b59 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 100c9b5c jmp 0x100c9b61 */
  goto L_100c9b61;
L_100c9b5e:;
  /* 100c9b5e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_100c9b61:;
  /* 100c9b61 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 100c9b65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100c9b6b je 0x100c9b86 */
  if (C.zf) goto L_100c9b86;
L_100c9b6d:;
  /* 100c9b6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 100c9b6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100c9b70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100c9b72 je 0x100c9bd8 */
  if (C.zf) goto L_100c9bd8;
  /* 100c9b74 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 100c9b76 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100c9b77 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100c9b7d jne 0x100c9b6d */
  if (!C.zf) goto L_100c9b6d;
  /* 100c9b7f jmp 0x100c9b86 */
  goto L_100c9b86;
L_100c9b81:;
  /* 100c9b81 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100c9b83 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100c9b86:;
  /* 100c9b86 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 100c9b8b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 100c9b8d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9b8f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100c9b92 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100c9b94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 100c9b96 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9b99 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 100c9b9e je 0x100c9b81 */
  if (C.zf) goto L_100c9b81;
  /* 100c9ba0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100c9ba2 je 0x100c9bd8 */
  if (C.zf) goto L_100c9bd8;
  /* 100c9ba4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 100c9ba6 je 0x100c9bcf */
  if (C.zf) goto L_100c9bcf;
  /* 100c9ba8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 100c9bae je 0x100c9bc2 */
  if (C.zf) goto L_100c9bc2;
  /* 100c9bb0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 100c9bb6 je 0x100c9bba */
  if (C.zf) goto L_100c9bba;
  /* 100c9bb8 jmp 0x100c9b81 */
  goto L_100c9b81;
L_100c9bba:;
  /* 100c9bba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100c9bbc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c9bc0 pop edi */
  EDI = (pop32());
  /* 100c9bc1 ret  */
  ESPCHK(0x100c9b00u, _esp0);
  ESP += 4; return;
L_100c9bc2:;
  /* 100c9bc2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 100c9bc5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c9bc9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 100c9bcd pop edi */
  EDI = (pop32());
  /* 100c9bce ret  */
  ESPCHK(0x100c9b00u, _esp0);
  ESP += 4; return;
L_100c9bcf:;
  /* 100c9bcf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 100c9bd2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c9bd6 pop edi */
  EDI = (pop32());
  /* 100c9bd7 ret  */
  ESPCHK(0x100c9b00u, _esp0);
  ESP += 4; return;
L_100c9bd8:;
  /* 100c9bd8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 100c9bda mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c9bde pop edi */
  EDI = (pop32());
  /* 100c9bdf ret  */
  ESPCHK(0x100c9b00u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x100c9be0 (88 bytes, 40 insns) */
void f_100c9be0(void) {
  FTRACE(0x100c9be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9be0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 100c9be4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c9be8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100c9bea je 0x100c9c33 */
  if (C.zf) goto L_100c9c33;
  /* 100c9bec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100c9bee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 100c9bf2 push edi */
  push32((uint32_t)(EDI));
  /* 100c9bf3 mov edi, ecx */
  EDI = (ECX);
  /* 100c9bf5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9bf8 jb 0x100c9c27 */
  if (C.cf) goto L_100c9c27;
  /* 100c9bfa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100c9bfc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100c9bff je 0x100c9c09 */
  if (C.zf) goto L_100c9c09;
  /* 100c9c01 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_100c9c03:;
  /* 100c9c03 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100c9c05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100c9c06 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100c9c07 jne 0x100c9c03 */
  if (!C.zf) goto L_100c9c03;
L_100c9c09:;
  /* 100c9c09 mov ecx, eax */
  ECX = (EAX);
  /* 100c9c0b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100c9c0e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9c10 mov ecx, eax */
  ECX = (EAX);
  /* 100c9c12 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100c9c15 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9c17 mov ecx, edx */
  ECX = (EDX);
  /* 100c9c19 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100c9c1c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100c9c1f je 0x100c9c27 */
  if (C.zf) goto L_100c9c27;
  /* 100c9c21 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 100c9c23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100c9c25 je 0x100c9c2d */
  if (C.zf) goto L_100c9c2d;
L_100c9c27:;
  /* 100c9c27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100c9c29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100c9c2a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100c9c2b jne 0x100c9c27 */
  if (!C.zf) goto L_100c9c27;
L_100c9c2d:;
  /* 100c9c2d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100c9c31 pop edi */
  EDI = (pop32());
  /* 100c9c32 ret  */
  ESPCHK(0x100c9be0u, _esp0);
  ESP += 4; return;
L_100c9c33:;
  /* 100c9c33 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100c9c37 ret  */
  ESPCHK(0x100c9be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c40 @ 0x100c9c40 (664 bytes, 266 insns) [15 switch table(s)] */
void f_100c9c40(void) {
  FTRACE(0x100c9c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9c40 push ebp */
  push32((uint32_t)(EBP));
  /* 100c9c41 mov ebp, esp */
  EBP = (ESP);
  /* 100c9c43 push edi */
  push32((uint32_t)(EDI));
  /* 100c9c44 push esi */
  push32((uint32_t)(ESI));
  /* 100c9c45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100c9c48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 100c9c4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9c4e mov eax, ecx */
  EAX = (ECX);
  /* 100c9c50 mov edx, ecx */
  EDX = (ECX);
  /* 100c9c52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9c54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9c56 jbe 0x100c9c60 */
  if ((C.cf||C.zf)) goto L_100c9c60;
  /* 100c9c58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9c5a jb 0x100c9dd8 */
  if (C.cf) goto L_100c9dd8;
L_100c9c60:;
  /* 100c9c60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100c9c66 jne 0x100c9c7c */
  if (!C.zf) goto L_100c9c7c;
  /* 100c9c68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100c9c6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100c9c6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9c71 jb 0x100c9c9c */
  if (C.cf) goto L_100c9c9c;
  /* 100c9c73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100c9c75 jmp dword ptr [edx*4 + 0x100c9d88] */
  switch (EDX) {
    case 0: goto L_100c9d98;
    case 1: goto L_100c9da0;
    case 2: goto L_100c9dac;
    case 3: goto L_100c9dc0;
    default: x86_unimpl("switch@0x100c9c75 out of table"); return;
  }
L_100c9c7c:;
  /* 100c9c7c mov eax, edi */
  EAX = (EDI);
  /* 100c9c7e mov edx, 3 */
  EDX = (0x3u);
  /* 100c9c83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c9c86 jb 0x100c9c94 */
  if (C.cf) goto L_100c9c94;
  /* 100c9c88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 100c9c8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9c8d jmp dword ptr [eax*4 + 0x100c9ca0] */
  switch (EAX) {
    case 1: goto L_100c9cb0;
    case 2: goto L_100c9cdc;
    case 3: goto L_100c9d00;
    default: x86_unimpl("switch@0x100c9c8d out of table"); return;
  }
L_100c9c94:;
  /* 100c9c94 jmp dword ptr [ecx*4 + 0x100c9d98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x100c9d98)))); return;
  /* 100c9c9b nop  */
  /* nop */
L_100c9c9c:;
  /* 100c9c9c jmp dword ptr [ecx*4 + 0x100c9d1c] */
  switch (ECX) {
    case 0: goto L_100c9d7f;
    case 1: goto L_100c9d6c;
    case 2: goto L_100c9d64;
    case 3: goto L_100c9d5c;
    case 4: goto L_100c9d54;
    case 5: goto L_100c9d4c;
    case 6: goto L_100c9d44;
    case 7: goto L_100c9d3c;
    default: x86_unimpl("switch@0x100c9c9c out of table"); return;
  }
  /* 100c9ca3 nop  */
  /* nop */
L_100c9cb0:;
  /* 100c9cb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100c9cb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100c9cb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100c9cb6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100c9cb9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100c9cbc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100c9cbf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100c9cc2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100c9cc5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9cc8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9ccb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9cce jb 0x100c9c9c */
  if (C.cf) goto L_100c9c9c;
  /* 100c9cd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100c9cd2 jmp dword ptr [edx*4 + 0x100c9d88] */
  switch (EDX) {
    case 0: goto L_100c9d98;
    case 1: goto L_100c9da0;
    case 2: goto L_100c9dac;
    case 3: goto L_100c9dc0;
    default: x86_unimpl("switch@0x100c9cd2 out of table"); return;
  }
  /* 100c9cd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100c9cdc:;
  /* 100c9cdc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100c9cde mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100c9ce0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100c9ce2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100c9ce5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100c9ce8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100c9ceb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9cee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9cf1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9cf4 jb 0x100c9c9c */
  if (C.cf) goto L_100c9c9c;
  /* 100c9cf6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100c9cf8 jmp dword ptr [edx*4 + 0x100c9d88] */
  switch (EDX) {
    case 0: goto L_100c9d98;
    case 1: goto L_100c9da0;
    case 2: goto L_100c9dac;
    case 3: goto L_100c9dc0;
    default: x86_unimpl("switch@0x100c9cf8 out of table"); return;
  }
  /* 100c9cff nop  */
  /* nop */
L_100c9d00:;
  /* 100c9d00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100c9d02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100c9d04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100c9d06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100c9d07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100c9d0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100c9d0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9d0e jb 0x100c9c9c */
  if (C.cf) goto L_100c9c9c;
  /* 100c9d10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100c9d12 jmp dword ptr [edx*4 + 0x100c9d88] */
  switch (EDX) {
    case 0: goto L_100c9d98;
    case 1: goto L_100c9da0;
    case 2: goto L_100c9dac;
    case 3: goto L_100c9dc0;
    default: x86_unimpl("switch@0x100c9d12 out of table"); return;
  }
  /* 100c9d19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100c9d3c:;
  /* 100c9d3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 100c9d40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_100c9d44:;
  /* 100c9d44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 100c9d48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_100c9d4c:;
  /* 100c9d4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 100c9d50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_100c9d54:;
  /* 100c9d54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 100c9d58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_100c9d5c:;
  /* 100c9d5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 100c9d60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_100c9d64:;
  /* 100c9d64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 100c9d68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_100c9d6c:;
  /* 100c9d6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 100c9d70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 100c9d74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 100c9d7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9d7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100c9d7f:;
  /* 100c9d7f jmp dword ptr [edx*4 + 0x100c9d88] */
  switch (EDX) {
    case 0: goto L_100c9d98;
    case 1: goto L_100c9da0;
    case 2: goto L_100c9dac;
    case 3: goto L_100c9dc0;
    default: x86_unimpl("switch@0x100c9d7f out of table"); return;
  }
  /* 100c9d86 mov edi, edi */
  EDI = (EDI);
L_100c9d98:;
  /* 100c9d98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9d9b pop esi */
  ESI = (pop32());
  /* 100c9d9c pop edi */
  EDI = (pop32());
  /* 100c9d9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9d9e ret  */
  ESPCHK(0x100c9c40u, _esp0);
  ESP += 4; return;
  /* 100c9d9f nop  */
  /* nop */
L_100c9da0:;
  /* 100c9da0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100c9da2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100c9da4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9da7 pop esi */
  ESI = (pop32());
  /* 100c9da8 pop edi */
  EDI = (pop32());
  /* 100c9da9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9daa ret  */
  ESPCHK(0x100c9c40u, _esp0);
  ESP += 4; return;
  /* 100c9dab nop  */
  /* nop */
L_100c9dac:;
  /* 100c9dac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100c9dae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100c9db0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100c9db3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100c9db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9db9 pop esi */
  ESI = (pop32());
  /* 100c9dba pop edi */
  EDI = (pop32());
  /* 100c9dbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9dbc ret  */
  ESPCHK(0x100c9c40u, _esp0);
  ESP += 4; return;
  /* 100c9dbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100c9dc0:;
  /* 100c9dc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100c9dc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100c9dc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100c9dc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100c9dca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100c9dcd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100c9dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9dd3 pop esi */
  ESI = (pop32());
  /* 100c9dd4 pop edi */
  EDI = (pop32());
  /* 100c9dd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9dd6 ret  */
  ESPCHK(0x100c9c40u, _esp0);
  ESP += 4; return;
  /* 100c9dd7 nop  */
  /* nop */
L_100c9dd8:;
  /* 100c9dd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 100c9ddc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 100c9de0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100c9de6 jne 0x100c9e0c */
  if (!C.zf) goto L_100c9e0c;
  /* 100c9de8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100c9deb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100c9dee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9df1 jb 0x100c9e00 */
  if (C.cf) goto L_100c9e00;
  /* 100c9df3 std  */
  C.df=1;
  /* 100c9df4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100c9df6 cld  */
  C.df=0;
  /* 100c9df7 jmp dword ptr [edx*4 + 0x100c9f20] */
  switch (EDX) {
    case 0: goto L_100c9f30;
    case 1: goto L_100c9f38;
    case 2: goto L_100c9f48;
    case 3: goto L_100c9f5c;
    default: x86_unimpl("switch@0x100c9df7 out of table"); return;
  }
  /* 100c9dfe mov edi, edi */
  EDI = (EDI);
L_100c9e00:;
  /* 100c9e00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100c9e02 jmp dword ptr [ecx*4 + 0x100c9ed0] */
  switch (ECX) {
    case 0: goto L_100c9f17;
    default: x86_unimpl("switch@0x100c9e02 out of table"); return;
  }
  /* 100c9e09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100c9e0c:;
  /* 100c9e0c mov eax, edi */
  EAX = (EDI);
  /* 100c9e0e mov edx, 3 */
  EDX = (0x3u);
  /* 100c9e13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9e16 jb 0x100c9e24 */
  if (C.cf) goto L_100c9e24;
  /* 100c9e18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 100c9e1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c9e1d jmp dword ptr [eax*4 + 0x100c9e28] */
  switch (EAX) {
    case 1: goto L_100c9e38;
    case 2: goto L_100c9e58;
    case 3: goto L_100c9e80;
    default: x86_unimpl("switch@0x100c9e1d out of table"); return;
  }
L_100c9e24:;
  /* 100c9e24 jmp dword ptr [ecx*4 + 0x100c9f20] */
  switch (ECX) {
    case 0: goto L_100c9f30;
    case 1: goto L_100c9f38;
    case 2: goto L_100c9f48;
    case 3: goto L_100c9f5c;
    default: x86_unimpl("switch@0x100c9e24 out of table"); return;
  }
  /* 100c9e2b nop  */
  /* nop */
L_100c9e38:;
  /* 100c9e38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100c9e3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100c9e3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100c9e40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100c9e41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100c9e44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100c9e45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9e48 jb 0x100c9e00 */
  if (C.cf) goto L_100c9e00;
  /* 100c9e4a std  */
  C.df=1;
  /* 100c9e4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100c9e4d cld  */
  C.df=0;
  /* 100c9e4e jmp dword ptr [edx*4 + 0x100c9f20] */
  switch (EDX) {
    case 0: goto L_100c9f30;
    case 1: goto L_100c9f38;
    case 2: goto L_100c9f48;
    case 3: goto L_100c9f5c;
    default: x86_unimpl("switch@0x100c9e4e out of table"); return;
  }
  /* 100c9e55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100c9e58:;
  /* 100c9e58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100c9e5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100c9e5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100c9e60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100c9e63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100c9e66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100c9e69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c9e6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c9e6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9e72 jb 0x100c9e00 */
  if (C.cf) goto L_100c9e00;
  /* 100c9e74 std  */
  C.df=1;
  /* 100c9e75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100c9e77 cld  */
  C.df=0;
  /* 100c9e78 jmp dword ptr [edx*4 + 0x100c9f20] */
  switch (EDX) {
    case 0: goto L_100c9f30;
    case 1: goto L_100c9f38;
    case 2: goto L_100c9f48;
    case 3: goto L_100c9f5c;
    default: x86_unimpl("switch@0x100c9e78 out of table"); return;
  }
  /* 100c9e7f nop  */
  /* nop */
L_100c9e80:;
  /* 100c9e80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100c9e83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100c9e85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100c9e88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100c9e8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100c9e8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100c9e91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100c9e94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100c9e97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c9e9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100c9e9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9ea0 jb 0x100c9e00 */
  if (C.cf) goto L_100c9e00;
  /* 100c9ea6 std  */
  C.df=1;
  /* 100c9ea7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100c9ea9 cld  */
  C.df=0;
  /* 100c9eaa jmp dword ptr [edx*4 + 0x100c9f20] */
  switch (EDX) {
    case 0: goto L_100c9f30;
    case 1: goto L_100c9f38;
    case 2: goto L_100c9f48;
    case 3: goto L_100c9f5c;
    default: x86_unimpl("switch@0x100c9eaa out of table"); return;
  }
  /* 100c9eb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 100c9eb4 aam 0x9e */
  x86_unimpl("aam @ 0x100c9eb4");
  /* 100c9eb6 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 100c9eb8 fcomp qword ptr [esi - 0x611beff4] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ESI + -0x611beff4)));
  (void)fpu_pop();
  /* 100c9ebe or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 100c9ec0 in al, dx */
  x86_unimpl("in @ 0x100c9ec0");
  /* 100c9ec1 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 100c9ec2 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 100c9ec4 hlt  */
  x86_unimpl("hlt @ 0x100c9ec4");
  /* 100c9ec5 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 100c9ec6 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 100c9ec8 cld  */
  C.df=0;
  /* 100c9ec9 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 100c9eca or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 100c9ecc add al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100c9ece or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 100c9ed4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 100c9ed8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 100c9edc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 100c9ee0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 100c9ee4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 100c9ee8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 100c9eec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 100c9ef0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 100c9ef4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 100c9ef8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 100c9efc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 100c9f00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 100c9f04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 100c9f08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 100c9f0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 100c9f13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9f15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100c9f17:;
  /* 100c9f17 jmp dword ptr [edx*4 + 0x100c9f20] */
  switch (EDX) {
    case 0: goto L_100c9f30;
    case 1: goto L_100c9f38;
    case 2: goto L_100c9f48;
    case 3: goto L_100c9f5c;
    default: x86_unimpl("switch@0x100c9f17 out of table"); return;
  }
  /* 100c9f1e mov edi, edi */
  EDI = (EDI);
L_100c9f30:;
  /* 100c9f30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9f33 pop esi */
  ESI = (pop32());
  /* 100c9f34 pop edi */
  EDI = (pop32());
  /* 100c9f35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9f36 ret  */
  ESPCHK(0x100c9c40u, _esp0);
  ESP += 4; return;
  /* 100c9f37 nop  */
  /* nop */
L_100c9f38:;
  /* 100c9f38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100c9f3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100c9f3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9f41 pop esi */
  ESI = (pop32());
  /* 100c9f42 pop edi */
  EDI = (pop32());
  /* 100c9f43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9f44 ret  */
  ESPCHK(0x100c9c40u, _esp0);
  ESP += 4; return;
  /* 100c9f45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100c9f48:;
  /* 100c9f48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100c9f4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100c9f4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100c9f51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100c9f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9f57 pop esi */
  ESI = (pop32());
  /* 100c9f58 pop edi */
  EDI = (pop32());
  /* 100c9f59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9f5a ret  */
  ESPCHK(0x100c9c40u, _esp0);
  ESP += 4; return;
  /* 100c9f5b nop  */
  /* nop */
L_100c9f5c:;
  /* 100c9f5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100c9f5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100c9f62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100c9f65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100c9f68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100c9f6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100c9f6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100c9f71 pop esi */
  ESI = (pop32());
  /* 100c9f72 pop edi */
  EDI = (pop32());
  /* 100c9f73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100c9f74 ret  */
  ESPCHK(0x100c9c40u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x100c9f75 (9 bytes, 4 insns) */
void f_100c9f75(void) {
  FTRACE(0x100c9f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9f75 push 2 */
  push32((uint32_t)(0x2u));
  /* 100c9f77 call 0x100c70b1 */
  push32(0x100c9f7cu); f_100c70b1();
  /* 100c9f7c pop ecx */
  ECX = (pop32());
  /* 100c9f7d ret  */
  ESPCHK(0x100c9f75u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f7e @ 0x100c9f7e (41 bytes, 12 insns) */
void f_100c9f7e(void) {
  FTRACE(0x100c9f7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9f7e push esi */
  push32((uint32_t)(ESI));
  /* 100c9f7f mov esi, dword ptr [0x100ce094] */
  ESI = (r32((uint32_t)(0x100ce094)));
  /* 100c9f85 push dword ptr [0x100d0ca4] */
  push32((uint32_t)(r32((uint32_t)(0x100d0ca4))));
  /* 100c9f8b call esi */
  call_ind((uint32_t)(ESI), 0x100c9f8du);
  /* 100c9f8d push dword ptr [0x100d0c94] */
  push32((uint32_t)(r32((uint32_t)(0x100d0c94))));
  /* 100c9f93 call esi */
  call_ind((uint32_t)(ESI), 0x100c9f95u);
  /* 100c9f95 push dword ptr [0x100d0c84] */
  push32((uint32_t)(r32((uint32_t)(0x100d0c84))));
  /* 100c9f9b call esi */
  call_ind((uint32_t)(ESI), 0x100c9f9du);
  /* 100c9f9d push dword ptr [0x100d0c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d0c64))));
  /* 100c9fa3 call esi */
  call_ind((uint32_t)(ESI), 0x100c9fa5u);
  /* 100c9fa5 pop esi */
  ESI = (pop32());
  /* 100c9fa6 ret  */
  ESPCHK(0x100c9f7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009fa7 @ 0x100c9fa7 (108 bytes, 34 insns) */
void f_100c9fa7(void) {
  FTRACE(0x100c9fa7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100c9fa7 push esi */
  push32((uint32_t)(ESI));
  /* 100c9fa8 push edi */
  push32((uint32_t)(EDI));
  /* 100c9fa9 mov edi, dword ptr [0x100ce050] */
  EDI = (r32((uint32_t)(0x100ce050)));
  /* 100c9faf mov esi, 0x100d0c60 */
  ESI = (0x100d0c60u);
L_100c9fb4:;
  /* 100c9fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100c9fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100c9fb8 je 0x100c9fe5 */
  if (C.zf) goto L_100c9fe5;
  /* 100c9fba cmp esi, 0x100d0ca4 */
  { uint32_t _a=(ESI),_b=(0x100d0ca4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9fc0 je 0x100c9fe5 */
  if (C.zf) goto L_100c9fe5;
  /* 100c9fc2 cmp esi, 0x100d0c94 */
  { uint32_t _a=(ESI),_b=(0x100d0c94u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9fc8 je 0x100c9fe5 */
  if (C.zf) goto L_100c9fe5;
  /* 100c9fca cmp esi, 0x100d0c84 */
  { uint32_t _a=(ESI),_b=(0x100d0c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9fd0 je 0x100c9fe5 */
  if (C.zf) goto L_100c9fe5;
  /* 100c9fd2 cmp esi, 0x100d0c64 */
  { uint32_t _a=(ESI),_b=(0x100d0c64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9fd8 je 0x100c9fe5 */
  if (C.zf) goto L_100c9fe5;
  /* 100c9fda push eax */
  push32((uint32_t)(EAX));
  /* 100c9fdb call edi */
  call_ind((uint32_t)(EDI), 0x100c9fddu);
  /* 100c9fdd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100c9fdf call 0x100ca1c6 */
  push32(0x100c9fe4u); f_100ca1c6();
  /* 100c9fe4 pop ecx */
  ECX = (pop32());
L_100c9fe5:;
  /* 100c9fe5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100c9fe8 cmp esi, 0x100d0d20 */
  { uint32_t _a=(ESI),_b=(0x100d0d20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100c9fee jl 0x100c9fb4 */
  if ((C.sf!=C.of)) goto L_100c9fb4;
  /* 100c9ff0 push dword ptr [0x100d0c84] */
  push32((uint32_t)(r32((uint32_t)(0x100d0c84))));
  /* 100c9ff6 call edi */
  call_ind((uint32_t)(EDI), 0x100c9ff8u);
  /* 100c9ff8 push dword ptr [0x100d0c94] */
  push32((uint32_t)(r32((uint32_t)(0x100d0c94))));
  /* 100c9ffe call edi */
  call_ind((uint32_t)(EDI), 0x100ca000u);
  /* 100ca000 push dword ptr [0x100d0ca4] */
  push32((uint32_t)(r32((uint32_t)(0x100d0ca4))));
  /* 100ca006 call edi */
  call_ind((uint32_t)(EDI), 0x100ca008u);
  /* 100ca008 push dword ptr [0x100d0c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d0c64))));
  /* 100ca00e call edi */
  call_ind((uint32_t)(EDI), 0x100ca010u);
  /* 100ca010 pop edi */
  EDI = (pop32());
  /* 100ca011 pop esi */
  ESI = (pop32());
  /* 100ca012 ret  */
  ESPCHK(0x100c9fa7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a013 @ 0x100ca013 (97 bytes, 37 insns) */
void f_100ca013(void) {
  FTRACE(0x100ca013u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca013 push ebp */
  push32((uint32_t)(EBP));
  /* 100ca014 mov ebp, esp */
  EBP = (ESP);
  /* 100ca016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ca019 push esi */
  push32((uint32_t)(ESI));
  /* 100ca01a cmp dword ptr [eax*4 + 0x100d0c60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x100d0c60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca022 lea esi, [eax*4 + 0x100d0c60] */
  ESI = ((uint32_t)(EAX*4 + 0x100d0c60));
  /* 100ca029 jne 0x100ca069 */
  if (!C.zf) goto L_100ca069;
  /* 100ca02b push edi */
  push32((uint32_t)(EDI));
  /* 100ca02c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 100ca02e call 0x100ca2af */
  push32(0x100ca033u); f_100ca2af();
  /* 100ca033 mov edi, eax */
  EDI = (EAX);
  /* 100ca035 pop ecx */
  ECX = (pop32());
  /* 100ca036 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100ca038 jne 0x100ca042 */
  if (!C.zf) goto L_100ca042;
  /* 100ca03a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100ca03c call 0x100c70b1 */
  push32(0x100ca041u); f_100c70b1();
  /* 100ca041 pop ecx */
  ECX = (pop32());
L_100ca042:;
  /* 100ca042 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100ca044 call 0x100ca013 */
  push32(0x100ca049u); f_100ca013();
  /* 100ca049 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca04c pop ecx */
  ECX = (pop32());
  /* 100ca04d push edi */
  push32((uint32_t)(EDI));
  /* 100ca04e jne 0x100ca05a */
  if (!C.zf) goto L_100ca05a;
  /* 100ca050 call dword ptr [0x100ce094] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce094))), 0x100ca056u);
  /* 100ca056 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100ca058 jmp 0x100ca060 */
  goto L_100ca060;
L_100ca05a:;
  /* 100ca05a call 0x100ca1c6 */
  push32(0x100ca05fu); f_100ca1c6();
  /* 100ca05f pop ecx */
  ECX = (pop32());
L_100ca060:;
  /* 100ca060 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100ca062 call 0x100ca074 */
  push32(0x100ca067u); f_100ca074();
  /* 100ca067 pop ecx */
  ECX = (pop32());
  /* 100ca068 pop edi */
  EDI = (pop32());
L_100ca069:;
  /* 100ca069 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100ca06b call dword ptr [0x100ce00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce00c))), 0x100ca071u);
  /* 100ca071 pop esi */
  ESI = (pop32());
  /* 100ca072 pop ebp */
  EBP = (pop32());
  /* 100ca073 ret  */
  ESPCHK(0x100ca013u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a074 @ 0x100ca074 (21 bytes, 7 insns) */
void f_100ca074(void) {
  FTRACE(0x100ca074u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca074 push ebp */
  push32((uint32_t)(EBP));
  /* 100ca075 mov ebp, esp */
  EBP = (ESP);
  /* 100ca077 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ca07a push dword ptr [eax*4 + 0x100d0c60] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x100d0c60))));
  /* 100ca081 call dword ptr [0x100ce008] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce008))), 0x100ca087u);
  /* 100ca087 pop ebp */
  EBP = (pop32());
  /* 100ca088 ret  */
  ESPCHK(0x100ca074u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a089 @ 0x100ca089 (289 bytes, 98 insns) */
void f_100ca089(void) {
  FTRACE(0x100ca089u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca089 push ebp */
  push32((uint32_t)(EBP));
  /* 100ca08a mov ebp, esp */
  EBP = (ESP);
  /* 100ca08c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100ca08e push 0x100ce4d0 */
  push32((uint32_t)(0x100ce4d0u));
  /* 100ca093 push 0x100cd030 */
  push32((uint32_t)(0x100cd030u));
  /* 100ca098 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100ca09e push eax */
  push32((uint32_t)(EAX));
  /* 100ca09f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100ca0a6 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ca0a9 push ebx */
  push32((uint32_t)(EBX));
  /* 100ca0aa push esi */
  push32((uint32_t)(ESI));
  /* 100ca0ab push edi */
  push32((uint32_t)(EDI));
  /* 100ca0ac mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ca0af imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100ca0b3 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 100ca0b6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 100ca0b9 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca0bc ja 0x100ca0d2 */
  if ((!C.cf&&!C.zf)) goto L_100ca0d2;
  /* 100ca0be xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ca0c0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca0c2 jne 0x100ca0c7 */
  if (!C.zf) goto L_100ca0c7;
  /* 100ca0c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ca0c6 pop esi */
  ESI = (pop32());
L_100ca0c7:;
  /* 100ca0c7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ca0ca and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 100ca0cd mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 100ca0d0 jmp 0x100ca0d4 */
  goto L_100ca0d4;
L_100ca0d2:;
  /* 100ca0d2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100ca0d4:;
  /* 100ca0d4 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 100ca0d7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca0da ja 0x100ca188 */
  if ((!C.cf&&!C.zf)) goto L_100ca188;
  /* 100ca0e0 mov eax, dword ptr [0x100d7c68] */
  EAX = (r32((uint32_t)(0x100d7c68)));
  /* 100ca0e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca0e8 jne 0x100ca12b */
  if (!C.zf) goto L_100ca12b;
  /* 100ca0ea mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 100ca0ed cmp edi, dword ptr [0x100d6a10] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x100d6a10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca0f3 ja 0x100ca171 */
  if ((!C.cf&&!C.zf)) goto L_100ca171;
  /* 100ca0f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca0f7 call 0x100ca013 */
  push32(0x100ca0fcu); f_100ca013();
  /* 100ca0fc pop ecx */
  ECX = (pop32());
  /* 100ca0fd mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 100ca100 push edi */
  push32((uint32_t)(EDI));
  /* 100ca101 call 0x100cb29b */
  push32(0x100ca106u); f_100cb29b();
  /* 100ca106 pop ecx */
  ECX = (pop32());
  /* 100ca107 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100ca10a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ca10e call 0x100ca122 */
  push32(0x100ca113u); f_100ca122();
  /* 100ca113 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca116 je 0x100ca176 */
  if (C.zf) goto L_100ca176;
  /* 100ca118 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 100ca11b jmp 0x100ca165 */
  goto L_100ca165;
  /* 100ca11d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ca11f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100ca122 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca124 call 0x100ca074 */
  push32(0x100ca129u); f_100ca074();
  /* 100ca129 pop ecx */
  ECX = (pop32());
  /* 100ca12a ret  */
  ESPCHK(0x100ca089u, _esp0);
  ESP += 4; return;
L_100ca12b:;
  /* 100ca12b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca12e jne 0x100ca171 */
  if (!C.zf) goto L_100ca171;
  /* 100ca130 cmp esi, dword ptr [0x100d2ec4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100d2ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca136 ja 0x100ca171 */
  if ((!C.cf&&!C.zf)) goto L_100ca171;
  /* 100ca138 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca13a call 0x100ca013 */
  push32(0x100ca13fu); f_100ca013();
  /* 100ca13f pop ecx */
  ECX = (pop32());
  /* 100ca140 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 100ca147 mov eax, esi */
  EAX = (ESI);
  /* 100ca149 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100ca14c push eax */
  push32((uint32_t)(EAX));
  /* 100ca14d call 0x100cba48 */
  push32(0x100ca152u); f_100cba48();
  /* 100ca152 pop ecx */
  ECX = (pop32());
  /* 100ca153 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100ca156 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ca15a call 0x100ca1ab */
  push32(0x100ca15fu); f_100ca1ab();
  /* 100ca15f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca162 je 0x100ca176 */
  if (C.zf) goto L_100ca176;
  /* 100ca164 push esi */
  push32((uint32_t)(ESI));
L_100ca165:;
  /* 100ca165 push ebx */
  push32((uint32_t)(EBX));
  /* 100ca166 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 100ca169 call 0x100c9be0 */
  push32(0x100ca16eu); f_100c9be0();
  /* 100ca16e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100ca171:;
  /* 100ca171 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca174 jne 0x100ca1b4 */
  if (!C.zf) { jmp_ind(0x100ca1b4u); return; }
L_100ca176:;
  /* 100ca176 push esi */
  push32((uint32_t)(ESI));
  /* 100ca177 push 8 */
  push32((uint32_t)(0x8u));
  /* 100ca179 push dword ptr [0x100d7c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d7c64))));
  /* 100ca17f call dword ptr [0x100ce098] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce098))), 0x100ca185u);
  /* 100ca185 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_100ca188:;
  /* 100ca188 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca18b jne 0x100ca1b4 */
  if (!C.zf) { jmp_ind(0x100ca1b4u); return; }
  /* 100ca18d cmp dword ptr [0x100d68b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100d68b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca193 je 0x100ca1b4 */
  if (C.zf) { jmp_ind(0x100ca1b4u); return; }
  /* 100ca195 push esi */
  push32((uint32_t)(ESI));
  /* 100ca196 call 0x100ccf1a */
  push32(0x100ca19bu); f_100ccf1a();
  /* 100ca19b pop ecx */
  ECX = (pop32());
  /* 100ca19c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ca19e jne 0x100ca0d4 */
  if (!C.zf) goto L_100ca0d4;
  /* 100ca1a4 jmp 0x100ca1b7 */
  jmp_ind(0x100ca1b7u); return;
  /* 100ca1a6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a122 @ 0x100ca122 (9 bytes, 4 insns) */
void f_100ca122(void) {
  FTRACE(0x100ca122u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca122 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca124 call 0x100ca074 */
  push32(0x100ca129u); f_100ca074();
  /* 100ca129 pop ecx */
  ECX = (pop32());
  /* 100ca12a ret  */
  ESPCHK(0x100ca122u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1ab @ 0x100ca1ab (9 bytes, 4 insns) */
void f_100ca1ab(void) {
  FTRACE(0x100ca1abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca1ab push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca1ad call 0x100ca074 */
  push32(0x100ca1b2u); f_100ca074();
  /* 100ca1b2 pop ecx */
  ECX = (pop32());
  /* 100ca1b3 ret  */
  ESPCHK(0x100ca1abu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1c6 @ 0x100ca1c6 (215 bytes, 75 insns) */
void f_100ca1c6(void) {
  FTRACE(0x100ca1c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca1c6 push ebp */
  push32((uint32_t)(EBP));
  /* 100ca1c7 mov ebp, esp */
  EBP = (ESP);
  /* 100ca1c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100ca1cb push 0x100ce4e8 */
  push32((uint32_t)(0x100ce4e8u));
  /* 100ca1d0 push 0x100cd030 */
  push32((uint32_t)(0x100cd030u));
  /* 100ca1d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100ca1db push eax */
  push32((uint32_t)(EAX));
  /* 100ca1dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100ca1e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ca1e6 push ebx */
  push32((uint32_t)(EBX));
  /* 100ca1e7 push esi */
  push32((uint32_t)(ESI));
  /* 100ca1e8 push edi */
  push32((uint32_t)(EDI));
  /* 100ca1e9 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ca1ec test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100ca1ee je 0x100ca2a0 */
  if (C.zf) { jmp_ind(0x100ca2a0u); return; }
  /* 100ca1f4 mov eax, dword ptr [0x100d7c68] */
  EAX = (r32((uint32_t)(0x100d7c68)));
  /* 100ca1f9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca1fc jne 0x100ca239 */
  if (!C.zf) goto L_100ca239;
  /* 100ca1fe push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca200 call 0x100ca013 */
  push32(0x100ca205u); f_100ca013();
  /* 100ca205 pop ecx */
  ECX = (pop32());
  /* 100ca206 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ca20a push esi */
  push32((uint32_t)(ESI));
  /* 100ca20b call 0x100caf47 */
  push32(0x100ca210u); f_100caf47();
  /* 100ca210 pop ecx */
  ECX = (pop32());
  /* 100ca211 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 100ca214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ca216 je 0x100ca221 */
  if (C.zf) goto L_100ca221;
  /* 100ca218 push esi */
  push32((uint32_t)(ESI));
  /* 100ca219 push eax */
  push32((uint32_t)(EAX));
  /* 100ca21a call 0x100caf72 */
  push32(0x100ca21fu); f_100caf72();
  /* 100ca21f pop ecx */
  ECX = (pop32());
  /* 100ca220 pop ecx */
  ECX = (pop32());
L_100ca221:;
  /* 100ca221 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ca225 call 0x100ca230 */
  push32(0x100ca22au); f_100ca230();
  /* 100ca22a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca22e jmp 0x100ca281 */
  goto L_100ca281;
  /* 100ca230 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca232 call 0x100ca074 */
  push32(0x100ca237u); f_100ca074();
  /* 100ca237 pop ecx */
  ECX = (pop32());
  /* 100ca238 ret  */
  ESPCHK(0x100ca1c6u, _esp0);
  ESP += 4; return;
L_100ca239:;
  /* 100ca239 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca23c jne 0x100ca291 */
  if (!C.zf) goto L_100ca291;
  /* 100ca23e push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca240 call 0x100ca013 */
  push32(0x100ca245u); f_100ca013();
  /* 100ca245 pop ecx */
  ECX = (pop32());
  /* 100ca246 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 100ca24d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 100ca250 push eax */
  push32((uint32_t)(EAX));
  /* 100ca251 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100ca254 push eax */
  push32((uint32_t)(EAX));
  /* 100ca255 push esi */
  push32((uint32_t)(ESI));
  /* 100ca256 call 0x100cb9ac */
  push32(0x100ca25bu); f_100cb9ac();
  /* 100ca25b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ca25e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 100ca261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ca263 je 0x100ca274 */
  if (C.zf) goto L_100ca274;
  /* 100ca265 push eax */
  push32((uint32_t)(EAX));
  /* 100ca266 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 100ca269 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 100ca26c call 0x100cba03 */
  push32(0x100ca271u); f_100cba03();
  /* 100ca271 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100ca274:;
  /* 100ca274 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ca278 call 0x100ca288 */
  push32(0x100ca27du); f_100ca288();
  /* 100ca27d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100ca281:;
  /* 100ca281 jne 0x100ca2a0 */
  if (!C.zf) { jmp_ind(0x100ca2a0u); return; }
  /* 100ca283 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ca286 jmp 0x100ca292 */
  goto L_100ca292;
  /* 100ca288 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca28a call 0x100ca074 */
  push32(0x100ca28fu); f_100ca074();
  /* 100ca28f pop ecx */
  ECX = (pop32());
  /* 100ca290 ret  */
  ESPCHK(0x100ca1c6u, _esp0);
  ESP += 4; return;
L_100ca291:;
  /* 100ca291 push esi */
  push32((uint32_t)(ESI));
L_100ca292:;
  /* 100ca292 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ca294 push dword ptr [0x100d7c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d7c64))));
}

/* FUN_1000a230 @ 0x100ca230 (9 bytes, 4 insns) */
void f_100ca230(void) {
  FTRACE(0x100ca230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca230 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca232 call 0x100ca074 */
  push32(0x100ca237u); f_100ca074();
  /* 100ca237 pop ecx */
  ECX = (pop32());
  /* 100ca238 ret  */
  ESPCHK(0x100ca230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a288 @ 0x100ca288 (9 bytes, 4 insns) */
void f_100ca288(void) {
  FTRACE(0x100ca288u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca288 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca28a call 0x100ca074 */
  push32(0x100ca28fu); f_100ca074();
  /* 100ca28f pop ecx */
  ECX = (pop32());
  /* 100ca290 ret  */
  ESPCHK(0x100ca288u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x100ca2af (18 bytes, 6 insns) */
void f_100ca2af(void) {
  FTRACE(0x100ca2afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca2af push dword ptr [0x100d68b0] */
  push32((uint32_t)(r32((uint32_t)(0x100d68b0))));
  /* 100ca2b5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100ca2b9 call 0x100ca2c1 */
  push32(0x100ca2beu); f_100ca2c1();
  /* 100ca2be pop ecx */
  ECX = (pop32());
  /* 100ca2bf pop ecx */
  ECX = (pop32());
  /* 100ca2c0 ret  */
  ESPCHK(0x100ca2afu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x100ca2c1 (44 bytes, 16 insns) */
void f_100ca2c1(void) {
  FTRACE(0x100ca2c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca2c1 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca2c6 ja 0x100ca2ea */
  if ((!C.cf&&!C.zf)) goto L_100ca2ea;
L_100ca2c8:;
  /* 100ca2c8 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 100ca2cc call 0x100ca2ed */
  push32(0x100ca2d1u); f_100ca2ed();
  /* 100ca2d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ca2d3 pop ecx */
  ECX = (pop32());
  /* 100ca2d4 jne 0x100ca2ec */
  if (!C.zf) goto L_100ca2ec;
  /* 100ca2d6 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca2da je 0x100ca2ec */
  if (C.zf) goto L_100ca2ec;
  /* 100ca2dc push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 100ca2e0 call 0x100ccf1a */
  push32(0x100ca2e5u); f_100ccf1a();
  /* 100ca2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ca2e7 pop ecx */
  ECX = (pop32());
  /* 100ca2e8 jne 0x100ca2c8 */
  if (!C.zf) goto L_100ca2c8;
L_100ca2ea:;
  /* 100ca2ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100ca2ec:;
  /* 100ca2ec ret  */
  ESPCHK(0x100ca2c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2ed @ 0x100ca2ed (231 bytes, 81 insns) */
void f_100ca2ed(void) {
  FTRACE(0x100ca2edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca2ed push ebp */
  push32((uint32_t)(EBP));
  /* 100ca2ee mov ebp, esp */
  EBP = (ESP);
  /* 100ca2f0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100ca2f2 push 0x100ce500 */
  push32((uint32_t)(0x100ce500u));
  /* 100ca2f7 push 0x100cd030 */
  push32((uint32_t)(0x100cd030u));
  /* 100ca2fc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100ca302 push eax */
  push32((uint32_t)(EAX));
  /* 100ca303 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100ca30a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ca30d push ebx */
  push32((uint32_t)(EBX));
  /* 100ca30e push esi */
  push32((uint32_t)(ESI));
  /* 100ca30f push edi */
  push32((uint32_t)(EDI));
  /* 100ca310 mov eax, dword ptr [0x100d7c68] */
  EAX = (r32((uint32_t)(0x100d7c68)));
  /* 100ca315 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca318 jne 0x100ca35d */
  if (!C.zf) goto L_100ca35d;
  /* 100ca31a mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ca31d cmp esi, dword ptr [0x100d6a10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100d6a10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca323 ja 0x100ca3bc */
  if ((!C.cf&&!C.zf)) goto L_100ca3bc;
  /* 100ca329 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca32b call 0x100ca013 */
  push32(0x100ca330u); f_100ca013();
  /* 100ca330 pop ecx */
  ECX = (pop32());
  /* 100ca331 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ca335 push esi */
  push32((uint32_t)(ESI));
  /* 100ca336 call 0x100cb29b */
  push32(0x100ca33bu); f_100cb29b();
  /* 100ca33b pop ecx */
  ECX = (pop32());
  /* 100ca33c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 100ca33f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ca343 call 0x100ca354 */
  push32(0x100ca348u); f_100ca354();
  /* 100ca348 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 100ca34b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ca34d je 0x100ca3bc */
  if (C.zf) goto L_100ca3bc;
  /* 100ca34f jmp 0x100ca3da */
  jmp_ind(0x100ca3dau); return;
  /* 100ca354 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca356 call 0x100ca074 */
  push32(0x100ca35bu); f_100ca074();
  /* 100ca35b pop ecx */
  ECX = (pop32());
  /* 100ca35c ret  */
  ESPCHK(0x100ca2edu, _esp0);
  ESP += 4; return;
L_100ca35d:;
  /* 100ca35d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca360 jne 0x100ca3bc */
  if (!C.zf) goto L_100ca3bc;
  /* 100ca362 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ca365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ca367 je 0x100ca371 */
  if (C.zf) goto L_100ca371;
  /* 100ca369 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 100ca36c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 100ca36f jmp 0x100ca374 */
  goto L_100ca374;
L_100ca371:;
  /* 100ca371 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100ca373 pop esi */
  ESI = (pop32());
L_100ca374:;
  /* 100ca374 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 100ca377 cmp esi, dword ptr [0x100d2ec4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100d2ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca37d ja 0x100ca3ad */
  if ((!C.cf&&!C.zf)) goto L_100ca3ad;
  /* 100ca37f push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca381 call 0x100ca013 */
  push32(0x100ca386u); f_100ca013();
  /* 100ca386 pop ecx */
  ECX = (pop32());
  /* 100ca387 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 100ca38e mov eax, esi */
  EAX = (ESI);
  /* 100ca390 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100ca393 push eax */
  push32((uint32_t)(EAX));
  /* 100ca394 call 0x100cba48 */
  push32(0x100ca399u); f_100cba48();
  /* 100ca399 pop ecx */
  ECX = (pop32());
  /* 100ca39a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 100ca39d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ca3a1 call 0x100ca3b3 */
  push32(0x100ca3a6u); f_100ca3b3();
  /* 100ca3a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 100ca3a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ca3ab jne 0x100ca3da */
  if (!C.zf) { jmp_ind(0x100ca3dau); return; }
L_100ca3ad:;
  /* 100ca3ad push esi */
  push32((uint32_t)(ESI));
  /* 100ca3ae jmp 0x100ca3cc */
  goto L_100ca3cc;
  /* 100ca3b0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ca3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca3b5 call 0x100ca074 */
  push32(0x100ca3bau); f_100ca074();
  /* 100ca3ba pop ecx */
  ECX = (pop32());
  /* 100ca3bb ret  */
  ESPCHK(0x100ca2edu, _esp0);
  ESP += 4; return;
L_100ca3bc:;
  /* 100ca3bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ca3bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ca3c1 jne 0x100ca3c6 */
  if (!C.zf) goto L_100ca3c6;
  /* 100ca3c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ca3c5 pop eax */
  EAX = (pop32());
L_100ca3c6:;
  /* 100ca3c6 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ca3c9 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 100ca3cb push eax */
  push32((uint32_t)(EAX));
L_100ca3cc:;
  /* 100ca3cc push 0 */
  push32((uint32_t)(0x0u));
  /* 100ca3ce push dword ptr [0x100d7c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d7c64))));
}

/* FUN_1000a354 @ 0x100ca354 (9 bytes, 4 insns) */
void f_100ca354(void) {
  FTRACE(0x100ca354u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca354 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca356 call 0x100ca074 */
  push32(0x100ca35bu); f_100ca074();
  /* 100ca35b pop ecx */
  ECX = (pop32());
  /* 100ca35c ret  */
  ESPCHK(0x100ca354u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3b3 @ 0x100ca3b3 (9 bytes, 4 insns) */
void f_100ca3b3(void) {
  FTRACE(0x100ca3b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ca3b5 call 0x100ca074 */
  push32(0x100ca3bau); f_100ca074();
  /* 100ca3ba pop ecx */
  ECX = (pop32());
  /* 100ca3bb ret  */
  ESPCHK(0x100ca3b3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3e9 @ 0x100ca3e9 (429 bytes, 143 insns) */
void f_100ca3e9(void) {
  FTRACE(0x100ca3e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca3e9 push ebp */
  push32((uint32_t)(EBP));
  /* 100ca3ea mov ebp, esp */
  EBP = (ESP);
  /* 100ca3ec sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ca3ef push ebx */
  push32((uint32_t)(EBX));
  /* 100ca3f0 push esi */
  push32((uint32_t)(ESI));
  /* 100ca3f1 push edi */
  push32((uint32_t)(EDI));
  /* 100ca3f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100ca3f4 call 0x100ca013 */
  push32(0x100ca3f9u); f_100ca013();
  /* 100ca3f9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ca3fc call 0x100ca596 */
  push32(0x100ca401u); f_100ca596();
  /* 100ca401 mov ebx, eax */
  EBX = (EAX);
  /* 100ca403 pop ecx */
  ECX = (pop32());
  /* 100ca404 cmp ebx, dword ptr [0x100d6a14] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100d6a14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca40a pop ecx */
  ECX = (pop32());
  /* 100ca40b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100ca40e jne 0x100ca417 */
  if (!C.zf) goto L_100ca417;
L_100ca410:;
  /* 100ca410 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100ca412 jmp 0x100ca587 */
  goto L_100ca587;
L_100ca417:;
  /* 100ca417 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100ca419 je 0x100ca575 */
  if (C.zf) goto L_100ca575;
  /* 100ca41f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ca421 mov eax, 0x100d0db0 */
  EAX = (0x100d0db0u);
L_100ca426:;
  /* 100ca426 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca428 je 0x100ca49e */
  if (C.zf) goto L_100ca49e;
  /* 100ca42a add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ca42d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100ca42e cmp eax, 0x100d0ea0 */
  { uint32_t _a=(EAX),_b=(0x100d0ea0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca433 jl 0x100ca426 */
  if ((C.sf!=C.of)) goto L_100ca426;
  /* 100ca435 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 100ca438 push eax */
  push32((uint32_t)(EAX));
  /* 100ca439 push ebx */
  push32((uint32_t)(EBX));
  /* 100ca43a call dword ptr [0x100ce09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce09c))), 0x100ca440u);
  /* 100ca440 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ca442 pop esi */
  ESI = (pop32());
  /* 100ca443 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca445 jne 0x100ca56c */
  if (!C.zf) goto L_100ca56c;
  /* 100ca44b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 100ca44d and dword ptr [0x100d6c44], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100d6c44)))&(0x0u); w32((uint32_t)(0x100d6c44), (_r)); fl_logic(_r,32); }
  /* 100ca454 pop ecx */
  ECX = (pop32());
  /* 100ca455 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ca457 mov edi, 0x100d6b40 */
  EDI = (0x100d6b40u);
  /* 100ca45c cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca45f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 100ca461 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100ca462 mov dword ptr [0x100d6a14], ebx */
  w32((uint32_t)(0x100d6a14), (EBX));
  /* 100ca468 jbe 0x100ca559 */
  if ((C.cf||C.zf)) goto L_100ca559;
  /* 100ca46e cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ca472 je 0x100ca534 */
  if (C.zf) goto L_100ca534;
  /* 100ca478 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_100ca47b:;
  /* 100ca47b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 100ca47d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100ca47f je 0x100ca534 */
  if (C.zf) goto L_100ca534;
  /* 100ca485 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 100ca489 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_100ca48c:;
  /* 100ca48c cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca48e ja 0x100ca528 */
  if ((!C.cf&&!C.zf)) goto L_100ca528;
  /* 100ca494 or byte ptr [eax + 0x100d6b41], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100d6b41)))|(0x4u); w8((uint32_t)(EAX + 0x100d6b41), (_r)); fl_logic(_r,8); }
  /* 100ca49b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ca49c jmp 0x100ca48c */
  goto L_100ca48c;
L_100ca49e:;
  /* 100ca49e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ca4a2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 100ca4a4 pop ecx */
  ECX = (pop32());
  /* 100ca4a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ca4a7 mov edi, 0x100d6b40 */
  EDI = (0x100d6b40u);
  /* 100ca4ac lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 100ca4af rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 100ca4b1 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 100ca4b4 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100ca4b5 lea ebx, [esi + 0x100d0dc0] */
  EBX = ((uint32_t)(ESI + 0x100d0dc0));
L_100ca4bb:;
  /* 100ca4bb cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ca4be mov ecx, ebx */
  ECX = (EBX);
  /* 100ca4c0 je 0x100ca4ee */
  if (C.zf) goto L_100ca4ee;
L_100ca4c2:;
  /* 100ca4c2 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 100ca4c5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100ca4c7 je 0x100ca4ee */
  if (C.zf) goto L_100ca4ee;
  /* 100ca4c9 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 100ca4cc movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 100ca4cf cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca4d1 ja 0x100ca4e7 */
  if ((!C.cf&&!C.zf)) goto L_100ca4e7;
  /* 100ca4d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ca4d6 mov dl, byte ptr [edx + 0x100d0da8] */
  DL = (r8((uint32_t)(EDX + 0x100d0da8)));
L_100ca4dc:;
  /* 100ca4dc or byte ptr [eax + 0x100d6b41], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100d6b41)))|(DL); w8((uint32_t)(EAX + 0x100d6b41), (_r)); fl_logic(_r,8); }
  /* 100ca4e2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ca4e3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca4e5 jbe 0x100ca4dc */
  if ((C.cf||C.zf)) goto L_100ca4dc;
L_100ca4e7:;
  /* 100ca4e7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ca4e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ca4e9 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ca4ec jne 0x100ca4c2 */
  if (!C.zf) goto L_100ca4c2;
L_100ca4ee:;
  /* 100ca4ee inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100ca4f1 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ca4f4 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca4f8 jb 0x100ca4bb */
  if (C.cf) goto L_100ca4bb;
  /* 100ca4fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ca4fd mov dword ptr [0x100d6a2c], 1 */
  w32((uint32_t)(0x100d6a2c), (0x1u));
  /* 100ca507 push eax */
  push32((uint32_t)(EAX));
  /* 100ca508 mov dword ptr [0x100d6a14], eax */
  w32((uint32_t)(0x100d6a14), (EAX));
  /* 100ca50d call 0x100ca5e0 */
  push32(0x100ca512u); f_100ca5e0();
  /* 100ca512 lea esi, [esi + 0x100d0db4] */
  ESI = ((uint32_t)(ESI + 0x100d0db4));
  /* 100ca518 mov edi, 0x100d6a20 */
  EDI = (0x100d6a20u);
  /* 100ca51d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ca51e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ca51f pop ecx */
  ECX = (pop32());
  /* 100ca520 mov dword ptr [0x100d6c44], eax */
  w32((uint32_t)(0x100d6c44), (EAX));
  /* 100ca525 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ca526 jmp 0x100ca57a */
  goto L_100ca57a;
L_100ca528:;
  /* 100ca528 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ca529 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ca52a cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ca52e jne 0x100ca47b */
  if (!C.zf) goto L_100ca47b;
L_100ca534:;
  /* 100ca534 mov eax, esi */
  EAX = (ESI);
L_100ca536:;
  /* 100ca536 or byte ptr [eax + 0x100d6b41], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100d6b41)))|(0x8u); w8((uint32_t)(EAX + 0x100d6b41), (_r)); fl_logic(_r,8); }
  /* 100ca53d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ca53e cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca543 jb 0x100ca536 */
  if (C.cf) goto L_100ca536;
  /* 100ca545 push ebx */
  push32((uint32_t)(EBX));
  /* 100ca546 call 0x100ca5e0 */
  push32(0x100ca54bu); f_100ca5e0();
  /* 100ca54b pop ecx */
  ECX = (pop32());
  /* 100ca54c mov dword ptr [0x100d6c44], eax */
  w32((uint32_t)(0x100d6c44), (EAX));
  /* 100ca551 mov dword ptr [0x100d6a2c], esi */
  w32((uint32_t)(0x100d6a2c), (ESI));
  /* 100ca557 jmp 0x100ca560 */
  goto L_100ca560;
L_100ca559:;
  /* 100ca559 and dword ptr [0x100d6a2c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100d6a2c)))&(0x0u); w32((uint32_t)(0x100d6a2c), (_r)); fl_logic(_r,32); }
L_100ca560:;
  /* 100ca560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ca562 mov edi, 0x100d6a20 */
  EDI = (0x100d6a20u);
  /* 100ca567 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100ca568 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100ca569 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100ca56a jmp 0x100ca57a */
  goto L_100ca57a;
L_100ca56c:;
  /* 100ca56c cmp dword ptr [0x100d6850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100d6850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca573 je 0x100ca584 */
  if (C.zf) goto L_100ca584;
L_100ca575:;
  /* 100ca575 call 0x100ca613 */
  push32(0x100ca57au); f_100ca613();
L_100ca57a:;
  /* 100ca57a call 0x100ca63c */
  push32(0x100ca57fu); f_100ca63c();
  /* 100ca57f jmp 0x100ca410 */
  goto L_100ca410;
L_100ca584:;
  /* 100ca584 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_100ca587:;
  /* 100ca587 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100ca589 call 0x100ca074 */
  push32(0x100ca58eu); f_100ca074();
  /* 100ca58e pop ecx */
  ECX = (pop32());
  /* 100ca58f mov eax, esi */
  EAX = (ESI);
  /* 100ca591 pop edi */
  EDI = (pop32());
  /* 100ca592 pop esi */
  ESI = (pop32());
  /* 100ca593 pop ebx */
  EBX = (pop32());
  /* 100ca594 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ca595 ret  */
  ESPCHK(0x100ca3e9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a596 @ 0x100ca596 (74 bytes, 15 insns) */
void f_100ca596(void) {
  FTRACE(0x100ca596u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca596 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ca59a and dword ptr [0x100d6850], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100d6850)))&(0x0u); w32((uint32_t)(0x100d6850), (_r)); fl_logic(_r,32); }
  /* 100ca5a1 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca5a4 jne 0x100ca5b6 */
  if (!C.zf) goto L_100ca5b6;
  /* 100ca5a6 mov dword ptr [0x100d6850], 1 */
  w32((uint32_t)(0x100d6850), (0x1u));
  /* 100ca5b0 jmp dword ptr [0x100ce0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100ce0a4)))); return;
L_100ca5b6:;
  /* 100ca5b6 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca5b9 jne 0x100ca5cb */
  if (!C.zf) goto L_100ca5cb;
  /* 100ca5bb mov dword ptr [0x100d6850], 1 */
  w32((uint32_t)(0x100d6850), (0x1u));
  /* 100ca5c5 jmp dword ptr [0x100ce0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100ce0a0)))); return;
L_100ca5cb:;
  /* 100ca5cb cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca5ce jne 0x100ca5df */
  if (!C.zf) goto L_100ca5df;
  /* 100ca5d0 mov eax, dword ptr [0x100d6888] */
  EAX = (r32((uint32_t)(0x100d6888)));
  /* 100ca5d5 mov dword ptr [0x100d6850], 1 */
  w32((uint32_t)(0x100d6850), (0x1u));
L_100ca5df:;
  /* 100ca5df ret  */
  ESPCHK(0x100ca596u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5e0 @ 0x100ca5e0 (51 bytes, 19 insns) */
void f_100ca5e0(void) {
  FTRACE(0x100ca5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca5e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ca5e4 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ca5e9 je 0x100ca60d */
  if (C.zf) goto L_100ca60d;
  /* 100ca5eb sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ca5ee je 0x100ca607 */
  if (C.zf) goto L_100ca607;
  /* 100ca5f0 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ca5f3 je 0x100ca601 */
  if (C.zf) goto L_100ca601;
  /* 100ca5f5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ca5f6 je 0x100ca5fb */
  if (C.zf) goto L_100ca5fb;
  /* 100ca5f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ca5fa ret  */
  ESPCHK(0x100ca5e0u, _esp0);
  ESP += 4; return;
L_100ca5fb:;
  /* 100ca5fb mov eax, 0x404 */
  EAX = (0x404u);
  /* 100ca600 ret  */
  ESPCHK(0x100ca5e0u, _esp0);
  ESP += 4; return;
L_100ca601:;
  /* 100ca601 mov eax, 0x412 */
  EAX = (0x412u);
  /* 100ca606 ret  */
  ESPCHK(0x100ca5e0u, _esp0);
  ESP += 4; return;
L_100ca607:;
  /* 100ca607 mov eax, 0x804 */
  EAX = (0x804u);
  /* 100ca60c ret  */
  ESPCHK(0x100ca5e0u, _esp0);
  ESP += 4; return;
L_100ca60d:;
  /* 100ca60d mov eax, 0x411 */
  EAX = (0x411u);
  /* 100ca612 ret  */
  ESPCHK(0x100ca5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a613 @ 0x100ca613 (41 bytes, 17 insns) */
void f_100ca613(void) {
  FTRACE(0x100ca613u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca613 push edi */
  push32((uint32_t)(EDI));
  /* 100ca614 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 100ca616 pop ecx */
  ECX = (pop32());
  /* 100ca617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ca619 mov edi, 0x100d6b40 */
  EDI = (0x100d6b40u);
  /* 100ca61e rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 100ca620 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100ca621 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ca623 mov edi, 0x100d6a20 */
  EDI = (0x100d6a20u);
  /* 100ca628 mov dword ptr [0x100d6a14], eax */
  w32((uint32_t)(0x100d6a14), (EAX));
  /* 100ca62d mov dword ptr [0x100d6a2c], eax */
  w32((uint32_t)(0x100d6a2c), (EAX));
  /* 100ca632 mov dword ptr [0x100d6c44], eax */
  w32((uint32_t)(0x100d6c44), (EAX));
  /* 100ca637 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100ca638 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100ca639 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100ca63a pop edi */
  EDI = (pop32());
  /* 100ca63b ret  */
  ESPCHK(0x100ca613u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a63c @ 0x100ca63c (389 bytes, 124 insns) */
void f_100ca63c(void) {
  FTRACE(0x100ca63cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca63c push ebp */
  push32((uint32_t)(EBP));
  /* 100ca63d mov ebp, esp */
  EBP = (ESP);
  /* 100ca63f sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ca645 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100ca648 push esi */
  push32((uint32_t)(ESI));
  /* 100ca649 push eax */
  push32((uint32_t)(EAX));
  /* 100ca64a push dword ptr [0x100d6a14] */
  push32((uint32_t)(r32((uint32_t)(0x100d6a14))));
  /* 100ca650 call dword ptr [0x100ce09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce09c))), 0x100ca656u);
  /* 100ca656 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca659 jne 0x100ca775 */
  if (!C.zf) goto L_100ca775;
  /* 100ca65f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ca661 mov esi, 0x100 */
  ESI = (0x100u);
L_100ca666:;
  /* 100ca666 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 100ca66d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ca66e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca670 jb 0x100ca666 */
  if (C.cf) goto L_100ca666;
  /* 100ca672 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 100ca675 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 100ca67c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100ca67e je 0x100ca6b7 */
  if (C.zf) goto L_100ca6b7;
  /* 100ca680 push ebx */
  push32((uint32_t)(EBX));
  /* 100ca681 push edi */
  push32((uint32_t)(EDI));
  /* 100ca682 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_100ca685:;
  /* 100ca685 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 100ca688 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 100ca68b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca68d ja 0x100ca6ac */
  if ((!C.cf&&!C.zf)) goto L_100ca6ac;
  /* 100ca68f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ca691 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 100ca698 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ca699 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 100ca69e mov ebx, ecx */
  EBX = (ECX);
  /* 100ca6a0 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ca6a3 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 100ca6a5 mov ecx, ebx */
  ECX = (EBX);
  /* 100ca6a7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100ca6aa rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_100ca6ac:;
  /* 100ca6ac inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100ca6ad inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100ca6ae mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 100ca6b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100ca6b3 jne 0x100ca685 */
  if (!C.zf) goto L_100ca685;
  /* 100ca6b5 pop edi */
  EDI = (pop32());
  /* 100ca6b6 pop ebx */
  EBX = (pop32());
L_100ca6b7:;
  /* 100ca6b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ca6b9 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 100ca6bf push dword ptr [0x100d6c44] */
  push32((uint32_t)(r32((uint32_t)(0x100d6c44))));
  /* 100ca6c5 push dword ptr [0x100d6a14] */
  push32((uint32_t)(r32((uint32_t)(0x100d6a14))));
  /* 100ca6cb push eax */
  push32((uint32_t)(EAX));
  /* 100ca6cc lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 100ca6d2 push esi */
  push32((uint32_t)(ESI));
  /* 100ca6d3 push eax */
  push32((uint32_t)(EAX));
  /* 100ca6d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ca6d6 call 0x100cc27d */
  push32(0x100ca6dbu); f_100cc27d();
  /* 100ca6db push 0 */
  push32((uint32_t)(0x0u));
  /* 100ca6dd lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 100ca6e3 push dword ptr [0x100d6a14] */
  push32((uint32_t)(r32((uint32_t)(0x100d6a14))));
  /* 100ca6e9 push esi */
  push32((uint32_t)(ESI));
  /* 100ca6ea push eax */
  push32((uint32_t)(EAX));
  /* 100ca6eb lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 100ca6f1 push esi */
  push32((uint32_t)(ESI));
  /* 100ca6f2 push eax */
  push32((uint32_t)(EAX));
  /* 100ca6f3 push esi */
  push32((uint32_t)(ESI));
  /* 100ca6f4 push dword ptr [0x100d6c44] */
  push32((uint32_t)(r32((uint32_t)(0x100d6c44))));
  /* 100ca6fa call 0x100cc3c6 */
  push32(0x100ca6ffu); f_100cc3c6();
  /* 100ca6ff push 0 */
  push32((uint32_t)(0x0u));
  /* 100ca701 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 100ca707 push dword ptr [0x100d6a14] */
  push32((uint32_t)(r32((uint32_t)(0x100d6a14))));
  /* 100ca70d push esi */
  push32((uint32_t)(ESI));
  /* 100ca70e push eax */
  push32((uint32_t)(EAX));
  /* 100ca70f lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 100ca715 push esi */
  push32((uint32_t)(ESI));
  /* 100ca716 push eax */
  push32((uint32_t)(EAX));
  /* 100ca717 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 100ca71c push dword ptr [0x100d6c44] */
  push32((uint32_t)(r32((uint32_t)(0x100d6c44))));
  /* 100ca722 call 0x100cc3c6 */
  push32(0x100ca727u); f_100cc3c6();
  /* 100ca727 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ca72a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ca72c lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_100ca732:;
  /* 100ca732 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 100ca735 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 100ca738 je 0x100ca750 */
  if (C.zf) goto L_100ca750;
  /* 100ca73a or byte ptr [eax + 0x100d6b41], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100d6b41)))|(0x10u); w8((uint32_t)(EAX + 0x100d6b41), (_r)); fl_logic(_r,8); }
  /* 100ca741 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_100ca748:;
  /* 100ca748 mov byte ptr [eax + 0x100d6a40], dl */
  w8((uint32_t)(EAX + 0x100d6a40), (DL));
  /* 100ca74e jmp 0x100ca76c */
  goto L_100ca76c;
L_100ca750:;
  /* 100ca750 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 100ca753 je 0x100ca765 */
  if (C.zf) goto L_100ca765;
  /* 100ca755 or byte ptr [eax + 0x100d6b41], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100d6b41)))|(0x20u); w8((uint32_t)(EAX + 0x100d6b41), (_r)); fl_logic(_r,8); }
  /* 100ca75c mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 100ca763 jmp 0x100ca748 */
  goto L_100ca748;
L_100ca765:;
  /* 100ca765 and byte ptr [eax + 0x100d6a40], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100d6a40)))&(0x0u); w8((uint32_t)(EAX + 0x100d6a40), (_r)); fl_logic(_r,8); }
L_100ca76c:;
  /* 100ca76c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ca76d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ca76e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ca76f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca771 jb 0x100ca732 */
  if (C.cf) goto L_100ca732;
  /* 100ca773 jmp 0x100ca7be */
  goto L_100ca7be;
L_100ca775:;
  /* 100ca775 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ca777 mov esi, 0x100 */
  ESI = (0x100u);
L_100ca77c:;
  /* 100ca77c cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca77f jb 0x100ca79a */
  if (C.cf) goto L_100ca79a;
  /* 100ca781 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca784 ja 0x100ca79a */
  if ((!C.cf&&!C.zf)) goto L_100ca79a;
  /* 100ca786 or byte ptr [eax + 0x100d6b41], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100d6b41)))|(0x10u); w8((uint32_t)(EAX + 0x100d6b41), (_r)); fl_logic(_r,8); }
  /* 100ca78d mov cl, al */
  CL = (AL);
  /* 100ca78f add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_100ca792:;
  /* 100ca792 mov byte ptr [eax + 0x100d6a40], cl */
  w8((uint32_t)(EAX + 0x100d6a40), (CL));
  /* 100ca798 jmp 0x100ca7b9 */
  goto L_100ca7b9;
L_100ca79a:;
  /* 100ca79a cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca79d jb 0x100ca7b2 */
  if (C.cf) goto L_100ca7b2;
  /* 100ca79f cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca7a2 ja 0x100ca7b2 */
  if ((!C.cf&&!C.zf)) goto L_100ca7b2;
  /* 100ca7a4 or byte ptr [eax + 0x100d6b41], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100d6b41)))|(0x20u); w8((uint32_t)(EAX + 0x100d6b41), (_r)); fl_logic(_r,8); }
  /* 100ca7ab mov cl, al */
  CL = (AL);
  /* 100ca7ad sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ca7b0 jmp 0x100ca792 */
  goto L_100ca792;
L_100ca7b2:;
  /* 100ca7b2 and byte ptr [eax + 0x100d6a40], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100d6a40)))&(0x0u); w8((uint32_t)(EAX + 0x100d6a40), (_r)); fl_logic(_r,8); }
L_100ca7b9:;
  /* 100ca7b9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ca7ba cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca7bc jb 0x100ca77c */
  if (C.cf) goto L_100ca77c;
L_100ca7be:;
  /* 100ca7be pop esi */
  ESI = (pop32());
  /* 100ca7bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ca7c0 ret  */
  ESPCHK(0x100ca63cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c1 @ 0x100ca7c1 (28 bytes, 7 insns) */
void f_100ca7c1(void) {
  FTRACE(0x100ca7c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca7c1 cmp dword ptr [0x100d7d88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100d7d88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca7c8 jne 0x100ca7dc */
  if (!C.zf) goto L_100ca7dc;
  /* 100ca7ca push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 100ca7cc call 0x100ca3e9 */
  push32(0x100ca7d1u); f_100ca3e9();
  /* 100ca7d1 pop ecx */
  ECX = (pop32());
  /* 100ca7d2 mov dword ptr [0x100d7d88], 1 */
  w32((uint32_t)(0x100d7d88), (0x1u));
L_100ca7dc:;
  /* 100ca7dc ret  */
  ESPCHK(0x100ca7c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7e0 @ 0x100ca7e0 (664 bytes, 266 insns) [15 switch table(s)] */
void f_100ca7e0(void) {
  FTRACE(0x100ca7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ca7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 100ca7e1 mov ebp, esp */
  EBP = (ESP);
  /* 100ca7e3 push edi */
  push32((uint32_t)(EDI));
  /* 100ca7e4 push esi */
  push32((uint32_t)(ESI));
  /* 100ca7e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100ca7e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 100ca7eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ca7ee mov eax, ecx */
  EAX = (ECX);
  /* 100ca7f0 mov edx, ecx */
  EDX = (ECX);
  /* 100ca7f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ca7f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca7f6 jbe 0x100ca800 */
  if ((C.cf||C.zf)) goto L_100ca800;
  /* 100ca7f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca7fa jb 0x100ca978 */
  if (C.cf) goto L_100ca978;
L_100ca800:;
  /* 100ca800 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100ca806 jne 0x100ca81c */
  if (!C.zf) goto L_100ca81c;
  /* 100ca808 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ca80b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100ca80e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca811 jb 0x100ca83c */
  if (C.cf) goto L_100ca83c;
  /* 100ca813 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100ca815 jmp dword ptr [edx*4 + 0x100ca928] */
  switch (EDX) {
    case 0: goto L_100ca938;
    case 1: goto L_100ca940;
    case 2: goto L_100ca94c;
    case 3: goto L_100ca960;
    default: x86_unimpl("switch@0x100ca815 out of table"); return;
  }
L_100ca81c:;
  /* 100ca81c mov eax, edi */
  EAX = (EDI);
  /* 100ca81e mov edx, 3 */
  EDX = (0x3u);
  /* 100ca823 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ca826 jb 0x100ca834 */
  if (C.cf) goto L_100ca834;
  /* 100ca828 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 100ca82b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ca82d jmp dword ptr [eax*4 + 0x100ca840] */
  switch (EAX) {
    case 1: goto L_100ca850;
    case 2: goto L_100ca87c;
    case 3: goto L_100ca8a0;
    default: x86_unimpl("switch@0x100ca82d out of table"); return;
  }
L_100ca834:;
  /* 100ca834 jmp dword ptr [ecx*4 + 0x100ca938] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x100ca938)))); return;
  /* 100ca83b nop  */
  /* nop */
L_100ca83c:;
  /* 100ca83c jmp dword ptr [ecx*4 + 0x100ca8bc] */
  switch (ECX) {
    case 0: goto L_100ca91f;
    case 1: goto L_100ca90c;
    case 2: goto L_100ca904;
    case 3: goto L_100ca8fc;
    case 4: goto L_100ca8f4;
    case 5: goto L_100ca8ec;
    case 6: goto L_100ca8e4;
    case 7: goto L_100ca8dc;
    default: x86_unimpl("switch@0x100ca83c out of table"); return;
  }
  /* 100ca843 nop  */
  /* nop */
L_100ca850:;
  /* 100ca850 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100ca852 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ca854 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ca856 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100ca859 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100ca85c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100ca85f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ca862 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100ca865 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ca868 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ca86b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca86e jb 0x100ca83c */
  if (C.cf) goto L_100ca83c;
  /* 100ca870 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100ca872 jmp dword ptr [edx*4 + 0x100ca928] */
  switch (EDX) {
    case 0: goto L_100ca938;
    case 1: goto L_100ca940;
    case 2: goto L_100ca94c;
    case 3: goto L_100ca960;
    default: x86_unimpl("switch@0x100ca872 out of table"); return;
  }
  /* 100ca879 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ca87c:;
  /* 100ca87c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100ca87e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ca880 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ca882 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100ca885 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ca888 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100ca88b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ca88e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ca891 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca894 jb 0x100ca83c */
  if (C.cf) goto L_100ca83c;
  /* 100ca896 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100ca898 jmp dword ptr [edx*4 + 0x100ca928] */
  switch (EDX) {
    case 0: goto L_100ca938;
    case 1: goto L_100ca940;
    case 2: goto L_100ca94c;
    case 3: goto L_100ca960;
    default: x86_unimpl("switch@0x100ca898 out of table"); return;
  }
  /* 100ca89f nop  */
  /* nop */
L_100ca8a0:;
  /* 100ca8a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100ca8a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ca8a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ca8a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ca8a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ca8aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ca8ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca8ae jb 0x100ca83c */
  if (C.cf) goto L_100ca83c;
  /* 100ca8b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100ca8b2 jmp dword ptr [edx*4 + 0x100ca928] */
  switch (EDX) {
    case 0: goto L_100ca938;
    case 1: goto L_100ca940;
    case 2: goto L_100ca94c;
    case 3: goto L_100ca960;
    default: x86_unimpl("switch@0x100ca8b2 out of table"); return;
  }
  /* 100ca8b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ca8dc:;
  /* 100ca8dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 100ca8e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_100ca8e4:;
  /* 100ca8e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 100ca8e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_100ca8ec:;
  /* 100ca8ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 100ca8f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_100ca8f4:;
  /* 100ca8f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 100ca8f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_100ca8fc:;
  /* 100ca8fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 100ca900 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_100ca904:;
  /* 100ca904 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 100ca908 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_100ca90c:;
  /* 100ca90c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 100ca910 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 100ca914 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 100ca91b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ca91d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100ca91f:;
  /* 100ca91f jmp dword ptr [edx*4 + 0x100ca928] */
  switch (EDX) {
    case 0: goto L_100ca938;
    case 1: goto L_100ca940;
    case 2: goto L_100ca94c;
    case 3: goto L_100ca960;
    default: x86_unimpl("switch@0x100ca91f out of table"); return;
  }
  /* 100ca926 mov edi, edi */
  EDI = (EDI);
L_100ca938:;
  /* 100ca938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ca93b pop esi */
  ESI = (pop32());
  /* 100ca93c pop edi */
  EDI = (pop32());
  /* 100ca93d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ca93e ret  */
  ESPCHK(0x100ca7e0u, _esp0);
  ESP += 4; return;
  /* 100ca93f nop  */
  /* nop */
L_100ca940:;
  /* 100ca940 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ca942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ca944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ca947 pop esi */
  ESI = (pop32());
  /* 100ca948 pop edi */
  EDI = (pop32());
  /* 100ca949 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ca94a ret  */
  ESPCHK(0x100ca7e0u, _esp0);
  ESP += 4; return;
  /* 100ca94b nop  */
  /* nop */
L_100ca94c:;
  /* 100ca94c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ca94e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ca950 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100ca953 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100ca956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ca959 pop esi */
  ESI = (pop32());
  /* 100ca95a pop edi */
  EDI = (pop32());
  /* 100ca95b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ca95c ret  */
  ESPCHK(0x100ca7e0u, _esp0);
  ESP += 4; return;
  /* 100ca95d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ca960:;
  /* 100ca960 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ca962 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ca964 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100ca967 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100ca96a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100ca96d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100ca970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ca973 pop esi */
  ESI = (pop32());
  /* 100ca974 pop edi */
  EDI = (pop32());
  /* 100ca975 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ca976 ret  */
  ESPCHK(0x100ca7e0u, _esp0);
  ESP += 4; return;
  /* 100ca977 nop  */
  /* nop */
L_100ca978:;
  /* 100ca978 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 100ca97c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 100ca980 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100ca986 jne 0x100ca9ac */
  if (!C.zf) goto L_100ca9ac;
  /* 100ca988 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ca98b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100ca98e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca991 jb 0x100ca9a0 */
  if (C.cf) goto L_100ca9a0;
  /* 100ca993 std  */
  C.df=1;
  /* 100ca994 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100ca996 cld  */
  C.df=0;
  /* 100ca997 jmp dword ptr [edx*4 + 0x100caac0] */
  switch (EDX) {
    case 0: goto L_100caad0;
    case 1: goto L_100caad8;
    case 2: goto L_100caae8;
    case 3: goto L_100caafc;
    default: x86_unimpl("switch@0x100ca997 out of table"); return;
  }
  /* 100ca99e mov edi, edi */
  EDI = (EDI);
L_100ca9a0:;
  /* 100ca9a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ca9a2 jmp dword ptr [ecx*4 + 0x100caa70] */
  switch (ECX) {
    case 0: goto L_100caab7;
    default: x86_unimpl("switch@0x100ca9a2 out of table"); return;
  }
  /* 100ca9a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ca9ac:;
  /* 100ca9ac mov eax, edi */
  EAX = (EDI);
  /* 100ca9ae mov edx, 3 */
  EDX = (0x3u);
  /* 100ca9b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca9b6 jb 0x100ca9c4 */
  if (C.cf) goto L_100ca9c4;
  /* 100ca9b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 100ca9bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ca9bd jmp dword ptr [eax*4 + 0x100ca9c8] */
  switch (EAX) {
    case 1: goto L_100ca9d8;
    case 2: goto L_100ca9f8;
    case 3: goto L_100caa20;
    default: x86_unimpl("switch@0x100ca9bd out of table"); return;
  }
L_100ca9c4:;
  /* 100ca9c4 jmp dword ptr [ecx*4 + 0x100caac0] */
  switch (ECX) {
    case 0: goto L_100caad0;
    case 1: goto L_100caad8;
    case 2: goto L_100caae8;
    case 3: goto L_100caafc;
    default: x86_unimpl("switch@0x100ca9c4 out of table"); return;
  }
  /* 100ca9cb nop  */
  /* nop */
L_100ca9d8:;
  /* 100ca9d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100ca9db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100ca9dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100ca9e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100ca9e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ca9e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100ca9e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ca9e8 jb 0x100ca9a0 */
  if (C.cf) goto L_100ca9a0;
  /* 100ca9ea std  */
  C.df=1;
  /* 100ca9eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100ca9ed cld  */
  C.df=0;
  /* 100ca9ee jmp dword ptr [edx*4 + 0x100caac0] */
  switch (EDX) {
    case 0: goto L_100caad0;
    case 1: goto L_100caad8;
    case 2: goto L_100caae8;
    case 3: goto L_100caafc;
    default: x86_unimpl("switch@0x100ca9ee out of table"); return;
  }
  /* 100ca9f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ca9f8:;
  /* 100ca9f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100ca9fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100ca9fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
L_100caa00:;
  /* 100caa00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100caa03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100caa06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100caa09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100caa0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100caa0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100caa12 jb 0x100ca9a0 */
  if (C.cf) goto L_100ca9a0;
  /* 100caa14 std  */
  C.df=1;
  /* 100caa15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100caa17 cld  */
  C.df=0;
  /* 100caa18 jmp dword ptr [edx*4 + 0x100caac0] */
  switch (EDX) {
    case 0: goto L_100caad0;
    case 1: goto L_100caad8;
    case 2: goto L_100caae8;
    case 3: goto L_100caafc;
    default: x86_unimpl("switch@0x100caa18 out of table"); return;
  }
  /* 100caa1f nop  */
  /* nop */
L_100caa20:;
  /* 100caa20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100caa23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100caa25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100caa28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100caa2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100caa2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100caa31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100caa34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100caa37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100caa3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100caa3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100caa40 jb 0x100ca9a0 */
  if (C.cf) goto L_100ca9a0;
  /* 100caa46 std  */
  C.df=1;
  /* 100caa47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100caa49 cld  */
  C.df=0;
  /* 100caa4a jmp dword ptr [edx*4 + 0x100caac0] */
  switch (EDX) {
    case 0: goto L_100caad0;
    case 1: goto L_100caad8;
    case 2: goto L_100caae8;
    case 3: goto L_100caafc;
    default: x86_unimpl("switch@0x100caa4a out of table"); return;
  }
  /* 100caa51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 100caa54 je 0x100caa00 */
  if (C.zf) goto L_100caa00;
  /* 100caa56 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 100caa58 jl 0x100caa04 */
  if ((C.sf!=C.of)) goto L_100caa04;
  /* 100caa5a or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 100caa5c test byte ptr [edx - 0x5573eff4], ch */
  { uint32_t _r=(r8((uint32_t)(EDX + -0x5573eff4)))&(C.c.b.h); fl_logic(_r,8); }
  /* 100caa62 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 100caa64 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 100caa65 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100caa66 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 100caa68 pushfd  */
  x86_unimpl("pushfd @ 0x100caa68");
  /* 100caa69 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100caa6a or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 100caa6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 100caa6d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100caa6e or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 100caa74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 100caa78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 100caa7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 100caa80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 100caa84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 100caa88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 100caa8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 100caa90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 100caa94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 100caa98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 100caa9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 100caaa0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 100caaa4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 100caaa8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 100caaac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 100caab3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100caab5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100caab7:;
  /* 100caab7 jmp dword ptr [edx*4 + 0x100caac0] */
  switch (EDX) {
    case 0: goto L_100caad0;
    case 1: goto L_100caad8;
    case 2: goto L_100caae8;
    case 3: goto L_100caafc;
    default: x86_unimpl("switch@0x100caab7 out of table"); return;
  }
  /* 100caabe mov edi, edi */
  EDI = (EDI);
L_100caad0:;
  /* 100caad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100caad3 pop esi */
  ESI = (pop32());
  /* 100caad4 pop edi */
  EDI = (pop32());
  /* 100caad5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100caad6 ret  */
  ESPCHK(0x100ca7e0u, _esp0);
  ESP += 4; return;
  /* 100caad7 nop  */
  /* nop */
L_100caad8:;
  /* 100caad8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100caadb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100caade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100caae1 pop esi */
  ESI = (pop32());
  /* 100caae2 pop edi */
  EDI = (pop32());
  /* 100caae3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100caae4 ret  */
  ESPCHK(0x100ca7e0u, _esp0);
  ESP += 4; return;
  /* 100caae5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100caae8:;
  /* 100caae8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100caaeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100caaee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100caaf1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100caaf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100caaf7 pop esi */
  ESI = (pop32());
  /* 100caaf8 pop edi */
  EDI = (pop32());
  /* 100caaf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100caafa ret  */
  ESPCHK(0x100ca7e0u, _esp0);
  ESP += 4; return;
  /* 100caafb nop  */
  /* nop */
L_100caafc:;
  /* 100caafc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100caaff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100cab02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100cab05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100cab08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100cab0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100cab0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cab11 pop esi */
  ESI = (pop32());
  /* 100cab12 pop edi */
  EDI = (pop32());
  /* 100cab13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cab14 ret  */
  ESPCHK(0x100ca7e0u, _esp0);
  ESP += 4; return;
L_100caa04: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x100caa04 (unresolved jump table)"); return;
}

/* FUN_1000ab15 @ 0x100cab15 (23 bytes, 7 insns) */
void f_100cab15(void) {
  FTRACE(0x100cab15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cab15 push 0 */
  push32((uint32_t)(0x0u));
  /* 100cab17 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100cab1b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100cab1f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100cab23 call 0x100cab2c */
  push32(0x100cab28u); f_100cab2c();
  /* 100cab28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cab2b ret  */
  ESPCHK(0x100cab15u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab2c @ 0x100cab2c (517 bytes, 195 insns) */
void f_100cab2c(void) {
  FTRACE(0x100cab2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cab2c push ebp */
  push32((uint32_t)(EBP));
  /* 100cab2d mov ebp, esp */
  EBP = (ESP);
  /* 100cab2f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cab32 push ebx */
  push32((uint32_t)(EBX));
  /* 100cab33 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 100cab37 push esi */
  push32((uint32_t)(ESI));
  /* 100cab38 push edi */
  push32((uint32_t)(EDI));
  /* 100cab39 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100cab3c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100cab3e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 100cab41 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_100cab44:;
  /* 100cab44 cmp dword ptr [0x100d0c20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100d0c20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cab4b jle 0x100cab5c */
  if ((C.zf||C.sf!=C.of)) goto L_100cab5c;
  /* 100cab4d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100cab50 push 8 */
  push32((uint32_t)(0x8u));
  /* 100cab52 push eax */
  push32((uint32_t)(EAX));
  /* 100cab53 call 0x100c93cb */
  push32(0x100cab58u); f_100c93cb();
  /* 100cab58 pop ecx */
  ECX = (pop32());
  /* 100cab59 pop ecx */
  ECX = (pop32());
  /* 100cab5a jmp 0x100cab6b */
  goto L_100cab6b;
L_100cab5c:;
  /* 100cab5c mov ecx, dword ptr [0x100d0a10] */
  ECX = (r32((uint32_t)(0x100d0a10)));
  /* 100cab62 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100cab65 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100cab68 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_100cab6b:;
  /* 100cab6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cab6d je 0x100cab74 */
  if (C.zf) goto L_100cab74;
  /* 100cab6f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 100cab71 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cab72 jmp 0x100cab44 */
  goto L_100cab44;
L_100cab74:;
  /* 100cab74 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cab77 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 100cab7a jne 0x100cab82 */
  if (!C.zf) goto L_100cab82;
  /* 100cab7c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 100cab80 jmp 0x100cab87 */
  goto L_100cab87;
L_100cab82:;
  /* 100cab82 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cab85 jne 0x100cab8d */
  if (!C.zf) goto L_100cab8d;
L_100cab87:;
  /* 100cab87 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 100cab89 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cab8a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_100cab8d:;
  /* 100cab8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100cab90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cab92 jl 0x100cad21 */
  if ((C.sf!=C.of)) goto L_100cad21;
  /* 100cab98 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cab9b je 0x100cad21 */
  if (C.zf) goto L_100cad21;
  /* 100caba1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100caba4 jg 0x100cad21 */
  if ((!C.zf&&C.sf==C.of)) goto L_100cad21;
  /* 100cabaa push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100cabac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cabae pop ecx */
  ECX = (pop32());
  /* 100cabaf jne 0x100cabd5 */
  if (!C.zf) goto L_100cabd5;
  /* 100cabb1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cabb4 je 0x100cabbf */
  if (C.zf) goto L_100cabbf;
  /* 100cabb6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 100cabbd jmp 0x100cabf1 */
  goto L_100cabf1;
L_100cabbf:;
  /* 100cabbf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100cabc1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cabc3 je 0x100cabd2 */
  if (C.zf) goto L_100cabd2;
  /* 100cabc5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cabc7 je 0x100cabd2 */
  if (C.zf) goto L_100cabd2;
  /* 100cabc9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 100cabd0 jmp 0x100cabf1 */
  goto L_100cabf1;
L_100cabd2:;
  /* 100cabd2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_100cabd5:;
  /* 100cabd5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cabd8 jne 0x100cabf1 */
  if (!C.zf) goto L_100cabf1;
  /* 100cabda cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cabdd jne 0x100cabf1 */
  if (!C.zf) goto L_100cabf1;
  /* 100cabdf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100cabe1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cabe3 je 0x100cabe9 */
  if (C.zf) goto L_100cabe9;
  /* 100cabe5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cabe7 jne 0x100cabf1 */
  if (!C.zf) goto L_100cabf1;
L_100cabe9:;
  /* 100cabe9 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 100cabec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cabed inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cabee mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_100cabf1:;
  /* 100cabf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100cabf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100cabf6 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100cabf9 mov edi, 0x103 */
  EDI = (0x103u);
  /* 100cabfe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_100cac01:;
  /* 100cac01 cmp dword ptr [0x100d0c20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100d0c20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cac08 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 100cac0b jle 0x100cac19 */
  if ((C.zf||C.sf!=C.of)) goto L_100cac19;
  /* 100cac0d push 4 */
  push32((uint32_t)(0x4u));
  /* 100cac0f push esi */
  push32((uint32_t)(ESI));
  /* 100cac10 call 0x100c93cb */
  push32(0x100cac15u); f_100c93cb();
  /* 100cac15 pop ecx */
  ECX = (pop32());
  /* 100cac16 pop ecx */
  ECX = (pop32());
  /* 100cac17 jmp 0x100cac24 */
  goto L_100cac24;
L_100cac19:;
  /* 100cac19 mov eax, dword ptr [0x100d0a10] */
  EAX = (r32((uint32_t)(0x100d0a10)));
  /* 100cac1e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 100cac21 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_100cac24:;
  /* 100cac24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cac26 je 0x100cac30 */
  if (C.zf) goto L_100cac30;
  /* 100cac28 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100cac2b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cac2e jmp 0x100cac62 */
  goto L_100cac62;
L_100cac30:;
  /* 100cac30 cmp dword ptr [0x100d0c20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100d0c20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cac37 jle 0x100cac44 */
  if ((C.zf||C.sf!=C.of)) goto L_100cac44;
  /* 100cac39 push edi */
  push32((uint32_t)(EDI));
  /* 100cac3a push esi */
  push32((uint32_t)(ESI));
  /* 100cac3b call 0x100c93cb */
  push32(0x100cac40u); f_100c93cb();
  /* 100cac40 pop ecx */
  ECX = (pop32());
  /* 100cac41 pop ecx */
  ECX = (pop32());
  /* 100cac42 jmp 0x100cac4f */
  goto L_100cac4f;
L_100cac44:;
  /* 100cac44 mov eax, dword ptr [0x100d0a10] */
  EAX = (r32((uint32_t)(0x100d0a10)));
  /* 100cac49 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 100cac4d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_100cac4f:;
  /* 100cac4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cac51 je 0x100cac9d */
  if (C.zf) goto L_100cac9d;
  /* 100cac53 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100cac56 push eax */
  push32((uint32_t)(EAX));
  /* 100cac57 call 0x100cd108 */
  push32(0x100cac5cu); f_100cd108();
  /* 100cac5c pop ecx */
  ECX = (pop32());
  /* 100cac5d mov ecx, eax */
  ECX = (EAX);
  /* 100cac5f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_100cac62:;
  /* 100cac62 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cac65 jae 0x100cac9d */
  if (!C.cf) goto L_100cac9d;
  /* 100cac67 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 100cac6a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 100cac6e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cac71 jb 0x100cac87 */
  if (C.cf) goto L_100cac87;
  /* 100cac73 jne 0x100cac81 */
  if (!C.zf) goto L_100cac81;
  /* 100cac75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100cac78 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100cac7a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100cac7d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cac7f jbe 0x100cac87 */
  if ((C.cf||C.zf)) goto L_100cac87;
L_100cac81:;
  /* 100cac81 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 100cac85 jmp 0x100cac90 */
  goto L_100cac90;
L_100cac87:;
  /* 100cac87 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100cac8b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cac8d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_100cac90:;
  /* 100cac90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cac93 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100cac96 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 100cac98 jmp 0x100cac01 */
  goto L_100cac01;
L_100cac9d:;
  /* 100cac9d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100caca0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 100caca3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 100caca6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 100caca8 jne 0x100cacba */
  if (!C.zf) goto L_100cacba;
  /* 100cacaa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100cacac je 0x100cacb4 */
  if (C.zf) goto L_100cacb4;
  /* 100cacae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cacb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_100cacb4:;
  /* 100cacb4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 100cacb8 jmp 0x100cad05 */
  goto L_100cad05;
L_100cacba:;
  /* 100cacba test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 100cacbc mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 100cacc1 jne 0x100cacde */
  if (!C.zf) goto L_100cacde;
  /* 100cacc3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 100cacc5 jne 0x100cad05 */
  if (!C.zf) goto L_100cad05;
  /* 100cacc7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 100cacca je 0x100cacd5 */
  if (C.zf) goto L_100cacd5;
  /* 100caccc cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cacd3 ja 0x100cacde */
  if ((!C.cf&&!C.zf)) goto L_100cacde;
L_100cacd5:;
  /* 100cacd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cacd7 jne 0x100cad05 */
  if (!C.zf) goto L_100cad05;
  /* 100cacd9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cacdc jbe 0x100cad05 */
  if ((C.cf||C.zf)) goto L_100cad05;
L_100cacde:;
  /* 100cacde call 0x100cbf71 */
  push32(0x100cace3u); f_100cbf71();
  /* 100cace3 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 100cace7 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 100caced je 0x100cacf5 */
  if (C.zf) goto L_100cacf5;
  /* 100cacef or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 100cacf3 jmp 0x100cad05 */
  goto L_100cad05;
L_100cacf5:;
  /* 100cacf5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100cacf8 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 100cacfa neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 100cacfc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cacfe neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100cad00 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cad02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_100cad05:;
  /* 100cad05 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100cad07 je 0x100cad0e */
  if (C.zf) goto L_100cad0e;
  /* 100cad09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cad0c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_100cad0e:;
  /* 100cad0e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 100cad12 je 0x100cad1c */
  if (C.zf) goto L_100cad1c;
  /* 100cad14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100cad17 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100cad19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_100cad1c:;
  /* 100cad1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100cad1f jmp 0x100cad2c */
  goto L_100cad2c;
L_100cad21:;
  /* 100cad21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100cad24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cad26 je 0x100cad2a */
  if (C.zf) goto L_100cad2a;
  /* 100cad28 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_100cad2a:;
  /* 100cad2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100cad2c:;
  /* 100cad2c pop edi */
  EDI = (pop32());
  /* 100cad2d pop esi */
  ESI = (pop32());
  /* 100cad2e pop ebx */
  EBX = (pop32());
  /* 100cad2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cad30 ret  */
  ESPCHK(0x100cab2cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x100cad50 (193 bytes, 90 insns) */
void f_100cad50(void) {
  FTRACE(0x100cad50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cad50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cad52 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 100cad56 push ebx */
  push32((uint32_t)(EBX));
  /* 100cad57 mov ebx, eax */
  EBX = (EAX);
  /* 100cad59 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100cad5c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100cad60 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 100cad66 je 0x100cad7b */
  if (C.zf) goto L_100cad7b;
L_100cad68:;
  /* 100cad68 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 100cad6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100cad6b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cad6d je 0x100cad40 */
  if (C.zf) { jmp_ind(0x100cad40u); return; }
  /* 100cad6f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 100cad71 je 0x100cadc4 */
  if (C.zf) goto L_100cadc4;
  /* 100cad73 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 100cad79 jne 0x100cad68 */
  if (!C.zf) goto L_100cad68;
L_100cad7b:;
  /* 100cad7b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 100cad7d push edi */
  push32((uint32_t)(EDI));
  /* 100cad7e mov eax, ebx */
  EAX = (EBX);
  /* 100cad80 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 100cad83 push esi */
  push32((uint32_t)(ESI));
  /* 100cad84 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_100cad86:;
  /* 100cad86 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 100cad88 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 100cad8d mov eax, ecx */
  EAX = (ECX);
  /* 100cad8f mov esi, edi */
  ESI = (EDI);
  /* 100cad91 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 100cad93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cad95 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cad97 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 100cad9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100cad9d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100cad9f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 100cada1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cada4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 100cadaa jne 0x100cadc8 */
  if (!C.zf) goto L_100cadc8;
  /* 100cadac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 100cadb1 je 0x100cad86 */
  if (C.zf) goto L_100cad86;
  /* 100cadb3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 100cadb8 jne 0x100cadc2 */
  if (!C.zf) goto L_100cadc2;
  /* 100cadba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 100cadc0 jne 0x100cad86 */
  if (!C.zf) goto L_100cad86;
L_100cadc2:;
  /* 100cadc2 pop esi */
  ESI = (pop32());
  /* 100cadc3 pop edi */
  EDI = (pop32());
L_100cadc4:;
  /* 100cadc4 pop ebx */
  EBX = (pop32());
  /* 100cadc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cadc7 ret  */
  ESPCHK(0x100cad50u, _esp0);
  ESP += 4; return;
L_100cadc8:;
  /* 100cadc8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 100cadcb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cadcd je 0x100cae05 */
  if (C.zf) goto L_100cae05;
  /* 100cadcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100cadd1 je 0x100cadc2 */
  if (C.zf) goto L_100cadc2;
  /* 100cadd3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cadd5 je 0x100cadfe */
  if (C.zf) goto L_100cadfe;
  /* 100cadd7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100cadd9 je 0x100cadc2 */
  if (C.zf) goto L_100cadc2;
  /* 100caddb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100cadde cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cade0 je 0x100cadf7 */
  if (C.zf) goto L_100cadf7;
  /* 100cade2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100cade4 je 0x100cadc2 */
  if (C.zf) goto L_100cadc2;
  /* 100cade6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cade8 je 0x100cadf0 */
  if (C.zf) goto L_100cadf0;
  /* 100cadea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100cadec je 0x100cadc2 */
  if (C.zf) goto L_100cadc2;
  /* 100cadee jmp 0x100cad86 */
  goto L_100cad86;
L_100cadf0:;
  /* 100cadf0 pop esi */
  ESI = (pop32());
  /* 100cadf1 pop edi */
  EDI = (pop32());
  /* 100cadf2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 100cadf5 pop ebx */
  EBX = (pop32());
  /* 100cadf6 ret  */
  ESPCHK(0x100cad50u, _esp0);
  ESP += 4; return;
L_100cadf7:;
  /* 100cadf7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 100cadfa pop esi */
  ESI = (pop32());
  /* 100cadfb pop edi */
  EDI = (pop32());
  /* 100cadfc pop ebx */
  EBX = (pop32());
  /* 100cadfd ret  */
  ESPCHK(0x100cad50u, _esp0);
  ESP += 4; return;
L_100cadfe:;
  /* 100cadfe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 100cae01 pop esi */
  ESI = (pop32());
  /* 100cae02 pop edi */
  EDI = (pop32());
  /* 100cae03 pop ebx */
  EBX = (pop32());
  /* 100cae04 ret  */
  ESPCHK(0x100cad50u, _esp0);
  ESP += 4; return;
L_100cae05:;
  /* 100cae05 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 100cae08 pop esi */
  ESI = (pop32());
  /* 100cae09 pop edi */
  EDI = (pop32());
  /* 100cae0a pop ebx */
  EBX = (pop32());
  /* 100cae0b ret  */
  ESPCHK(0x100cad50u, _esp0);
  ESP += 4; return;
  /* 100cae0c int3  */
  x86_unimpl("int3 @ 0x100cae0c");
  /* 100cae0d int3  */
  x86_unimpl("int3 @ 0x100cae0d");
  /* 100cae0e int3  */
  x86_unimpl("int3 @ 0x100cae0e");
  /* 100cae0f int3  */
  x86_unimpl("int3 @ 0x100cae0f");
}

/* _strstr @ 0x100cae10 (128 bytes, 66 insns) */
void f_100cae10(void) {
  FTRACE(0x100cae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cae10 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100cae14 push edi */
  push32((uint32_t)(EDI));
  /* 100cae15 push ebx */
  push32((uint32_t)(EBX));
  /* 100cae16 push esi */
  push32((uint32_t)(ESI));
  /* 100cae17 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 100cae19 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 100cae1d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100cae1f je 0x100cae8a */
  if (C.zf) goto L_100cae8a;
  /* 100cae21 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 100cae24 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 100cae26 je 0x100cae77 */
  if (C.zf) goto L_100cae77;
L_100cae28:;
  /* 100cae28 mov esi, edi */
  ESI = (EDI);
  /* 100cae2a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 100cae2e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 100cae30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cae31 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cae33 je 0x100cae4a */
  if (C.zf) goto L_100cae4a;
  /* 100cae35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100cae37 je 0x100cae44 */
  if (C.zf) goto L_100cae44;
L_100cae39:;
  /* 100cae39 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100cae3b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100cae3c:;
  /* 100cae3c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cae3e je 0x100cae4a */
  if (C.zf) goto L_100cae4a;
  /* 100cae40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100cae42 jne 0x100cae39 */
  if (!C.zf) goto L_100cae39;
L_100cae44:;
  /* 100cae44 pop esi */
  ESI = (pop32());
  /* 100cae45 pop ebx */
  EBX = (pop32());
  /* 100cae46 pop edi */
  EDI = (pop32());
  /* 100cae47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cae49 ret  */
  ESPCHK(0x100cae10u, _esp0);
  ESP += 4; return;
L_100cae4a:;
  /* 100cae4a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100cae4c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cae4d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cae4f jne 0x100cae3c */
  if (!C.zf) goto L_100cae3c;
  /* 100cae51 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_100cae54:;
  /* 100cae54 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 100cae57 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100cae59 je 0x100cae83 */
  if (C.zf) goto L_100cae83;
  /* 100cae5b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100cae5d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cae60 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cae62 jne 0x100cae28 */
  if (!C.zf) goto L_100cae28;
  /* 100cae64 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 100cae67 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100cae69 je 0x100cae83 */
  if (C.zf) goto L_100cae83;
  /* 100cae6b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 100cae6e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cae71 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cae73 je 0x100cae54 */
  if (C.zf) goto L_100cae54;
  /* 100cae75 jmp 0x100cae28 */
  goto L_100cae28;
L_100cae77:;
  /* 100cae77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cae79 pop esi */
  ESI = (pop32());
  /* 100cae7a pop ebx */
  EBX = (pop32());
  /* 100cae7b pop edi */
  EDI = (pop32());
  /* 100cae7c mov al, dl */
  AL = (DL);
  /* 100cae7e jmp 0x100cad56 */
  jmp_ind(0x100cad56u); return;
L_100cae83:;
  /* 100cae83 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 100cae86 pop esi */
  ESI = (pop32());
  /* 100cae87 pop ebx */
  EBX = (pop32());
  /* 100cae88 pop edi */
  EDI = (pop32());
  /* 100cae89 ret  */
  ESPCHK(0x100cae10u, _esp0);
  ESP += 4; return;
L_100cae8a:;
  /* 100cae8a mov eax, edi */
  EAX = (EDI);
  /* 100cae8c pop esi */
  ESI = (pop32());
  /* 100cae8d pop ebx */
  EBX = (pop32());
  /* 100cae8e pop edi */
  EDI = (pop32());
  /* 100cae8f ret  */
  ESPCHK(0x100cae10u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x100cae90 (56 bytes, 31 insns) */
void f_100cae90(void) {
  FTRACE(0x100cae90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cae90 push ebp */
  push32((uint32_t)(EBP));
  /* 100cae91 mov ebp, esp */
  EBP = (ESP);
  /* 100cae93 push edi */
  push32((uint32_t)(EDI));
  /* 100cae94 push esi */
  push32((uint32_t)(ESI));
  /* 100cae95 push ebx */
  push32((uint32_t)(EBX));
  /* 100cae96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 100cae99 jecxz 0x100caec1 */
  x86_unimpl("jecxz @ 0x100cae99");
  /* 100cae9b mov ebx, ecx */
  EBX = (ECX);
  /* 100cae9d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100caea0 mov esi, edi */
  ESI = (EDI);
  /* 100caea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100caea4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 100caea6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100caea8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100caeaa mov edi, esi */
  EDI = (ESI);
  /* 100caeac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100caeaf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 100caeb1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 100caeb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100caeb6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100caeb9 ja 0x100caebf */
  if ((!C.cf&&!C.zf)) goto L_100caebf;
  /* 100caebb je 0x100caec1 */
  if (C.zf) goto L_100caec1;
  /* 100caebd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100caebe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_100caebf:;
  /* 100caebf not ecx */
  ECX = (~(ECX));
L_100caec1:;
  /* 100caec1 mov eax, ecx */
  EAX = (ECX);
  /* 100caec3 pop ebx */
  EBX = (pop32());
  /* 100caec4 pop esi */
  ESI = (pop32());
  /* 100caec5 pop edi */
  EDI = (pop32());
  /* 100caec6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100caec7 ret  */
  ESPCHK(0x100cae90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aed0 @ 0x100caed0 (47 bytes, 17 insns) */
void f_100caed0(void) {
  FTRACE(0x100caed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100caed0 push ecx */
  push32((uint32_t)(ECX));
  /* 100caed1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100caed6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 100caeda jb 0x100caef0 */
  if (C.cf) goto L_100caef0;
L_100caedc:;
  /* 100caedc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100caee2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100caee7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 100caee9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100caeee jae 0x100caedc */
  if (!C.cf) goto L_100caedc;
L_100caef0:;
  /* 100caef0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100caef2 mov eax, esp */
  EAX = (ESP);
  /* 100caef4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 100caef6 mov esp, ecx */
  ESP = (ECX);
  /* 100caef8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100caefa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 100caefd push eax */
  push32((uint32_t)(EAX));
  /* 100caefe ret  */
  ESPCHK(0x100caed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aeff @ 0x100caeff (72 bytes, 17 insns) */
void f_100caeff(void) {
  FTRACE(0x100caeffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100caeff push 0x140 */
  push32((uint32_t)(0x140u));
  /* 100caf04 push 0 */
  push32((uint32_t)(0x0u));
  /* 100caf06 push dword ptr [0x100d7c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d7c64))));
  /* 100caf0c call dword ptr [0x100ce098] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce098))), 0x100caf12u);
  /* 100caf12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100caf14 mov dword ptr [0x100d6a0c], eax */
  w32((uint32_t)(0x100d6a0c), (EAX));
  /* 100caf19 jne 0x100caf1c */
  if (!C.zf) goto L_100caf1c;
  /* 100caf1b ret  */
  ESPCHK(0x100caeffu, _esp0);
  ESP += 4; return;
L_100caf1c:;
  /* 100caf1c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100caf20 and dword ptr [0x100d6a04], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100d6a04)))&(0x0u); w32((uint32_t)(0x100d6a04), (_r)); fl_logic(_r,32); }
  /* 100caf27 and dword ptr [0x100d6a08], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100d6a08)))&(0x0u); w32((uint32_t)(0x100d6a08), (_r)); fl_logic(_r,32); }
  /* 100caf2e push 1 */
  push32((uint32_t)(0x1u));
  /* 100caf30 mov dword ptr [0x100d6a00], eax */
  w32((uint32_t)(0x100d6a00), (EAX));
  /* 100caf35 mov dword ptr [0x100d6a10], ecx */
  w32((uint32_t)(0x100d6a10), (ECX));
  /* 100caf3b mov dword ptr [0x100d69f8], 0x10 */
  w32((uint32_t)(0x100d69f8), (0x10u));
  /* 100caf45 pop eax */
  EAX = (pop32());
  /* 100caf46 ret  */
  ESPCHK(0x100caeffu, _esp0);
  ESP += 4; return;
}

/* FUN_1000af47 @ 0x100caf47 (43 bytes, 14 insns) */
void f_100caf47(void) {
  FTRACE(0x100caf47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100caf47 mov eax, dword ptr [0x100d6a08] */
  EAX = (r32((uint32_t)(0x100d6a08)));
  /* 100caf4c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100caf4f mov eax, dword ptr [0x100d6a0c] */
  EAX = (r32((uint32_t)(0x100d6a0c)));
  /* 100caf54 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_100caf57:;
  /* 100caf57 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100caf59 jae 0x100caf6f */
  if (!C.cf) goto L_100caf6f;
  /* 100caf5b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 100caf5f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100caf62 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100caf68 jb 0x100caf71 */
  if (C.cf) goto L_100caf71;
  /* 100caf6a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100caf6d jmp 0x100caf57 */
  goto L_100caf57;
L_100caf6f:;
  /* 100caf6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100caf71:;
  /* 100caf71 ret  */
  ESPCHK(0x100caf47u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af72 @ 0x100caf72 (809 bytes, 265 insns) */
void f_100caf72(void) {
  FTRACE(0x100caf72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100caf72 push ebp */
  push32((uint32_t)(EBP));
  /* 100caf73 mov ebp, esp */
  EBP = (ESP);
  /* 100caf75 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100caf78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100caf7b push ebx */
  push32((uint32_t)(EBX));
  /* 100caf7c push esi */
  push32((uint32_t)(ESI));
  /* 100caf7d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100caf80 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 100caf83 push edi */
  push32((uint32_t)(EDI));
  /* 100caf84 mov edi, esi */
  EDI = (ESI);
  /* 100caf86 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100caf89 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100caf8c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 100caf8f mov ecx, edi */
  ECX = (EDI);
  /* 100caf91 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100caf97 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 100caf9e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 100cafa1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 100cafa3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100cafa4 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 100cafa7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 100cafaa jne 0x100cb296 */
  if (!C.zf) goto L_100cb296;
  /* 100cafb0 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 100cafb3 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 100cafb6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 100cafb9 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 100cafbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 100cafbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 100cafc2 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 100cafc5 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 100cafc8 jne 0x100cb048 */
  if (!C.zf) goto L_100cb048;
  /* 100cafca sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 100cafcd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100cafce cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cafd1 jbe 0x100cafd6 */
  if ((C.cf||C.zf)) goto L_100cafd6;
  /* 100cafd3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100cafd5 pop edx */
  EDX = (pop32());
L_100cafd6:;
  /* 100cafd6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 100cafd9 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cafdc jne 0x100cb02a */
  if (!C.zf) goto L_100cb02a;
  /* 100cafde cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cafe1 jae 0x100cb001 */
  if (!C.cf) goto L_100cb001;
  /* 100cafe3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100cafe8 mov ecx, edx */
  ECX = (EDX);
  /* 100cafea shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100cafec lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 100caff0 not ebx */
  EBX = (~(EBX));
  /* 100caff2 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 100caff6 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 100caff8 jne 0x100cb022 */
  if (!C.zf) goto L_100cb022;
  /* 100caffa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100caffd and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100cafff jmp 0x100cb022 */
  goto L_100cb022;
L_100cb001:;
  /* 100cb001 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 100cb004 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100cb009 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100cb00b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 100cb00f not ebx */
  EBX = (~(EBX));
  /* 100cb011 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 100cb018 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 100cb01a jne 0x100cb022 */
  if (!C.zf) goto L_100cb022;
  /* 100cb01c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cb01f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_100cb022:;
  /* 100cb022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cb025 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 100cb028 jmp 0x100cb02d */
  goto L_100cb02d;
L_100cb02a:;
  /* 100cb02a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_100cb02d:;
  /* 100cb02d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 100cb030 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 100cb033 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb036 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 100cb039 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100cb03c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 100cb03f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 100cb042 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 100cb045 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_100cb048:;
  /* 100cb048 mov edx, ecx */
  EDX = (ECX);
  /* 100cb04a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 100cb04d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100cb04e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb051 jbe 0x100cb056 */
  if ((C.cf||C.zf)) goto L_100cb056;
  /* 100cb053 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100cb055 pop edx */
  EDX = (pop32());
L_100cb056:;
  /* 100cb056 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 100cb059 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 100cb05c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 100cb05f jne 0x100cb0f9 */
  if (!C.zf) goto L_100cb0f9;
  /* 100cb065 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cb068 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 100cb06b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 100cb06e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100cb070 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 100cb073 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100cb074 pop esi */
  ESI = (pop32());
  /* 100cb075 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb077 jbe 0x100cb07b */
  if ((C.cf||C.zf)) goto L_100cb07b;
  /* 100cb079 mov ebx, esi */
  EBX = (ESI);
L_100cb07b:;
  /* 100cb07b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb07e mov edx, ecx */
  EDX = (ECX);
  /* 100cb080 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 100cb083 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 100cb086 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100cb087 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb089 jbe 0x100cb08d */
  if ((C.cf||C.zf)) goto L_100cb08d;
  /* 100cb08b mov edx, esi */
  EDX = (ESI);
L_100cb08d:;
  /* 100cb08d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb08f je 0x100cb0f4 */
  if (C.zf) goto L_100cb0f4;
  /* 100cb091 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100cb094 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 100cb097 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb09a jne 0x100cb0dc */
  if (!C.zf) goto L_100cb0dc;
  /* 100cb09c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb09f jae 0x100cb0bd */
  if (!C.cf) goto L_100cb0bd;
  /* 100cb0a1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100cb0a6 mov ecx, ebx */
  ECX = (EBX);
  /* 100cb0a8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100cb0aa not esi */
  ESI = (~(ESI));
  /* 100cb0ac and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 100cb0b0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 100cb0b4 jne 0x100cb0dc */
  if (!C.zf) goto L_100cb0dc;
  /* 100cb0b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cb0b9 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100cb0bb jmp 0x100cb0dc */
  goto L_100cb0dc;
L_100cb0bd:;
  /* 100cb0bd lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 100cb0c0 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100cb0c5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100cb0c7 not esi */
  ESI = (~(ESI));
  /* 100cb0c9 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 100cb0d0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 100cb0d4 jne 0x100cb0dc */
  if (!C.zf) goto L_100cb0dc;
  /* 100cb0d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cb0d9 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_100cb0dc:;
  /* 100cb0dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100cb0df mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 100cb0e2 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 100cb0e5 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 100cb0e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100cb0eb mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 100cb0ee mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 100cb0f1 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_100cb0f4:;
  /* 100cb0f4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100cb0f7 jmp 0x100cb0fc */
  goto L_100cb0fc;
L_100cb0f9:;
  /* 100cb0f9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_100cb0fc:;
  /* 100cb0fc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb100 jne 0x100cb10a */
  if (!C.zf) goto L_100cb10a;
  /* 100cb102 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb104 je 0x100cb18b */
  if (C.zf) goto L_100cb18b;
L_100cb10a:;
  /* 100cb10a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100cb10d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 100cb111 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 100cb114 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 100cb117 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 100cb11a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 100cb11d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 100cb120 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 100cb123 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 100cb126 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb129 jne 0x100cb18b */
  if (!C.zf) goto L_100cb18b;
  /* 100cb12b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 100cb12f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb132 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 100cb135 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100cb137 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 100cb13b jae 0x100cb162 */
  if (!C.cf) goto L_100cb162;
  /* 100cb13d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cb141 jne 0x100cb151 */
  if (!C.zf) goto L_100cb151;
  /* 100cb143 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100cb148 mov ecx, edx */
  ECX = (EDX);
  /* 100cb14a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100cb14c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cb14f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_100cb151:;
  /* 100cb151 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100cb156 mov ecx, edx */
  ECX = (EDX);
  /* 100cb158 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100cb15a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 100cb15e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100cb160 jmp 0x100cb18b */
  goto L_100cb18b;
L_100cb162:;
  /* 100cb162 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cb166 jne 0x100cb178 */
  if (!C.zf) goto L_100cb178;
  /* 100cb168 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 100cb16b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100cb170 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100cb172 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cb175 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_100cb178:;
  /* 100cb178 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 100cb17b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 100cb180 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100cb182 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 100cb189 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_100cb18b:;
  /* 100cb18b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cb18e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100cb190 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 100cb194 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 100cb197 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 100cb199 jne 0x100cb296 */
  if (!C.zf) goto L_100cb296;
  /* 100cb19f mov eax, dword ptr [0x100d6a04] */
  EAX = (r32((uint32_t)(0x100d6a04)));
  /* 100cb1a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cb1a6 je 0x100cb288 */
  if (C.zf) goto L_100cb288;
  /* 100cb1ac mov ecx, dword ptr [0x100d69fc] */
  ECX = (r32((uint32_t)(0x100d69fc)));
  /* 100cb1b2 mov esi, dword ptr [0x100ce07c] */
  ESI = (r32((uint32_t)(0x100ce07c)));
  /* 100cb1b8 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 100cb1bb add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb1be mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 100cb1c3 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 100cb1c8 push ebx */
  push32((uint32_t)(EBX));
  /* 100cb1c9 push ecx */
  push32((uint32_t)(ECX));
  /* 100cb1ca call esi */
  call_ind((uint32_t)(ESI), 0x100cb1ccu);
  /* 100cb1cc mov ecx, dword ptr [0x100d69fc] */
  ECX = (r32((uint32_t)(0x100d69fc)));
  /* 100cb1d2 mov eax, dword ptr [0x100d6a04] */
  EAX = (r32((uint32_t)(0x100d6a04)));
  /* 100cb1d7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 100cb1dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100cb1de or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 100cb1e1 mov eax, dword ptr [0x100d6a04] */
  EAX = (r32((uint32_t)(0x100d6a04)));
  /* 100cb1e6 mov ecx, dword ptr [0x100d69fc] */
  ECX = (r32((uint32_t)(0x100d69fc)));
  /* 100cb1ec mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 100cb1ef and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 100cb1f7 mov eax, dword ptr [0x100d6a04] */
  EAX = (r32((uint32_t)(0x100d6a04)));
  /* 100cb1fc mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 100cb1ff dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 100cb202 mov eax, dword ptr [0x100d6a04] */
  EAX = (r32((uint32_t)(0x100d6a04)));
  /* 100cb207 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 100cb20a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cb20e jne 0x100cb219 */
  if (!C.zf) goto L_100cb219;
  /* 100cb210 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100cb214 mov eax, dword ptr [0x100d6a04] */
  EAX = (r32((uint32_t)(0x100d6a04)));
L_100cb219:;
  /* 100cb219 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb21d jne 0x100cb288 */
  if (!C.zf) goto L_100cb288;
  /* 100cb21f push ebx */
  push32((uint32_t)(EBX));
  /* 100cb220 push 0 */
  push32((uint32_t)(0x0u));
  /* 100cb222 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 100cb225 call esi */
  call_ind((uint32_t)(ESI), 0x100cb227u);
  /* 100cb227 mov eax, dword ptr [0x100d6a04] */
  EAX = (r32((uint32_t)(0x100d6a04)));
  /* 100cb22c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 100cb22f push 0 */
  push32((uint32_t)(0x0u));
  /* 100cb231 push dword ptr [0x100d7c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d7c64))));
  /* 100cb237 call dword ptr [0x100ce080] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce080))), 0x100cb23du);
  /* 100cb23d mov eax, dword ptr [0x100d6a08] */
  EAX = (r32((uint32_t)(0x100d6a08)));
  /* 100cb242 mov edx, dword ptr [0x100d6a0c] */
  EDX = (r32((uint32_t)(0x100d6a0c)));
  /* 100cb248 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100cb24b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 100cb24e mov ecx, eax */
  ECX = (EAX);
  /* 100cb250 mov eax, dword ptr [0x100d6a04] */
  EAX = (r32((uint32_t)(0x100d6a04)));
  /* 100cb255 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cb257 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 100cb25b push ecx */
  push32((uint32_t)(ECX));
  /* 100cb25c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 100cb25f push ecx */
  push32((uint32_t)(ECX));
  /* 100cb260 push eax */
  push32((uint32_t)(EAX));
  /* 100cb261 call 0x100c9c40 */
  push32(0x100cb266u); f_100c9c40();
  /* 100cb266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cb269 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb26c dec dword ptr [0x100d6a08] */
  { uint32_t _r=(r32((uint32_t)(0x100d6a08)))-1; w32((uint32_t)(0x100d6a08), (_r)); fl_dec(_r,32); }
  /* 100cb272 cmp eax, dword ptr [0x100d6a04] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x100d6a04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb278 jbe 0x100cb27e */
  if ((C.cf||C.zf)) goto L_100cb27e;
  /* 100cb27a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_100cb27e:;
  /* 100cb27e mov eax, dword ptr [0x100d6a0c] */
  EAX = (r32((uint32_t)(0x100d6a0c)));
  /* 100cb283 mov dword ptr [0x100d6a00], eax */
  w32((uint32_t)(0x100d6a00), (EAX));
L_100cb288:;
  /* 100cb288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cb28b mov dword ptr [0x100d69fc], edi */
  w32((uint32_t)(0x100d69fc), (EDI));
  /* 100cb291 mov dword ptr [0x100d6a04], eax */
  w32((uint32_t)(0x100d6a04), (EAX));
L_100cb296:;
  /* 100cb296 pop edi */
  EDI = (pop32());
  /* 100cb297 pop esi */
  ESI = (pop32());
  /* 100cb298 pop ebx */
  EBX = (pop32());
  /* 100cb299 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cb29a ret  */
  ESPCHK(0x100caf72u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b29b @ 0x100cb29b (777 bytes, 275 insns) */
void f_100cb29b(void) {
  FTRACE(0x100cb29bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cb29b push ebp */
  push32((uint32_t)(EBP));
  /* 100cb29c mov ebp, esp */
  EBP = (ESP);
  /* 100cb29e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cb2a1 mov eax, dword ptr [0x100d6a08] */
  EAX = (r32((uint32_t)(0x100d6a08)));
  /* 100cb2a6 mov edx, dword ptr [0x100d6a0c] */
  EDX = (r32((uint32_t)(0x100d6a0c)));
  /* 100cb2ac push ebx */
  push32((uint32_t)(EBX));
  /* 100cb2ad push esi */
  push32((uint32_t)(ESI));
  /* 100cb2ae lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100cb2b1 push edi */
  push32((uint32_t)(EDI));
  /* 100cb2b2 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 100cb2b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cb2b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 100cb2bb lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 100cb2be and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 100cb2c1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 100cb2c4 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 100cb2c7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100cb2c8 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb2cb jge 0x100cb2db */
  if ((C.sf==C.of)) goto L_100cb2db;
  /* 100cb2cd or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 100cb2d0 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100cb2d2 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 100cb2d6 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 100cb2d9 jmp 0x100cb2eb */
  goto L_100cb2eb;
L_100cb2db:;
  /* 100cb2db add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb2de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100cb2e1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100cb2e3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100cb2e5 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 100cb2e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_100cb2eb:;
  /* 100cb2eb mov eax, dword ptr [0x100d6a00] */
  EAX = (r32((uint32_t)(0x100d6a00)));
  /* 100cb2f0 mov ebx, eax */
  EBX = (EAX);
  /* 100cb2f2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb2f4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100cb2f7 jae 0x100cb312 */
  if (!C.cf) goto L_100cb312;
L_100cb2f9:;
  /* 100cb2f9 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 100cb2fc mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 100cb2fe and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 100cb301 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 100cb303 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100cb305 jne 0x100cb312 */
  if (!C.zf) goto L_100cb312;
  /* 100cb307 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb30a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb30d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100cb310 jb 0x100cb2f9 */
  if (C.cf) goto L_100cb2f9;
L_100cb312:;
  /* 100cb312 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb315 jne 0x100cb390 */
  if (!C.zf) goto L_100cb390;
  /* 100cb317 mov ebx, edx */
  EBX = (EDX);
L_100cb319:;
  /* 100cb319 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb31b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100cb31e jae 0x100cb335 */
  if (!C.cf) goto L_100cb335;
  /* 100cb320 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 100cb323 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 100cb325 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 100cb328 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 100cb32a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100cb32c jne 0x100cb333 */
  if (!C.zf) goto L_100cb333;
  /* 100cb32e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb331 jmp 0x100cb319 */
  goto L_100cb319;
L_100cb333:;
  /* 100cb333 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100cb335:;
  /* 100cb335 jne 0x100cb390 */
  if (!C.zf) goto L_100cb390;
L_100cb337:;
  /* 100cb337 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb33a jae 0x100cb34d */
  if (!C.cf) goto L_100cb34d;
  /* 100cb33c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb340 jne 0x100cb34a */
  if (!C.zf) goto L_100cb34a;
  /* 100cb342 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb345 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100cb348 jmp 0x100cb337 */
  goto L_100cb337;
L_100cb34a:;
  /* 100cb34a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100cb34d:;
  /* 100cb34d jne 0x100cb375 */
  if (!C.zf) goto L_100cb375;
  /* 100cb34f mov ebx, edx */
  EBX = (EDX);
L_100cb351:;
  /* 100cb351 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb353 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100cb356 jae 0x100cb365 */
  if (!C.cf) goto L_100cb365;
  /* 100cb358 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb35c jne 0x100cb363 */
  if (!C.zf) goto L_100cb363;
  /* 100cb35e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb361 jmp 0x100cb351 */
  goto L_100cb351;
L_100cb363:;
  /* 100cb363 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100cb365:;
  /* 100cb365 jne 0x100cb375 */
  if (!C.zf) goto L_100cb375;
  /* 100cb367 call 0x100cb5a4 */
  push32(0x100cb36cu); f_100cb5a4();
  /* 100cb36c mov ebx, eax */
  EBX = (EAX);
  /* 100cb36e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100cb370 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100cb373 je 0x100cb389 */
  if (C.zf) goto L_100cb389;
L_100cb375:;
  /* 100cb375 push ebx */
  push32((uint32_t)(EBX));
  /* 100cb376 call 0x100cb655 */
  push32(0x100cb37bu); f_100cb655();
  /* 100cb37b pop ecx */
  ECX = (pop32());
  /* 100cb37c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 100cb37f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 100cb381 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 100cb384 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb387 jne 0x100cb390 */
  if (!C.zf) goto L_100cb390;
L_100cb389:;
  /* 100cb389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cb38b jmp 0x100cb59f */
  goto L_100cb59f;
L_100cb390:;
  /* 100cb390 mov dword ptr [0x100d6a00], ebx */
  w32((uint32_t)(0x100d6a00), (EBX));
  /* 100cb396 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 100cb399 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 100cb39b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb39e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 100cb3a1 je 0x100cb3b7 */
  if (C.zf) goto L_100cb3b7;
  /* 100cb3a3 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 100cb3aa mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 100cb3ae and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 100cb3b1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 100cb3b3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100cb3b5 jne 0x100cb3ee */
  if (!C.zf) goto L_100cb3ee;
L_100cb3b7:;
  /* 100cb3b7 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 100cb3bd mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 100cb3c0 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 100cb3c3 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 100cb3c6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100cb3ca lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 100cb3cd or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 100cb3cf mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 100cb3d2 jne 0x100cb3eb */
  if (!C.zf) goto L_100cb3eb;
L_100cb3d4:;
  /* 100cb3d4 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 100cb3da inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100cb3dd and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 100cb3e0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb3e3 mov edi, esi */
  EDI = (ESI);
  /* 100cb3e5 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 100cb3e7 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 100cb3e9 je 0x100cb3d4 */
  if (C.zf) goto L_100cb3d4;
L_100cb3eb:;
  /* 100cb3eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_100cb3ee:;
  /* 100cb3ee mov ecx, edx */
  ECX = (EDX);
  /* 100cb3f0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100cb3f2 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100cb3f8 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 100cb3ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 100cb402 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 100cb406 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 100cb408 jne 0x100cb417 */
  if (!C.zf) goto L_100cb417;
  /* 100cb40a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 100cb411 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100cb413 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 100cb416 pop edi */
  EDI = (pop32());
L_100cb417:;
  /* 100cb417 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100cb419 jl 0x100cb420 */
  if ((C.sf!=C.of)) goto L_100cb420;
  /* 100cb41b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100cb41d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100cb41e jmp 0x100cb417 */
  goto L_100cb417;
L_100cb420:;
  /* 100cb420 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 100cb423 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 100cb427 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 100cb429 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cb42c mov esi, ecx */
  ESI = (ECX);
  /* 100cb42e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100cb431 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 100cb434 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100cb435 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb438 jle 0x100cb43d */
  if ((C.zf||C.sf!=C.of)) goto L_100cb43d;
  /* 100cb43a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100cb43c pop esi */
  ESI = (pop32());
L_100cb43d:;
  /* 100cb43d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb43f je 0x100cb552 */
  if (C.zf) goto L_100cb552;
  /* 100cb445 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 100cb448 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb44b jne 0x100cb4ae */
  if (!C.zf) goto L_100cb4ae;
  /* 100cb44d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb450 jge 0x100cb47d */
  if ((C.sf==C.of)) goto L_100cb47d;
  /* 100cb452 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100cb457 mov ecx, edi */
  ECX = (EDI);
  /* 100cb459 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100cb45b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cb45e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 100cb462 not ebx */
  EBX = (~(EBX));
  /* 100cb464 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 100cb467 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 100cb46b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 100cb46f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 100cb471 jne 0x100cb4ab */
  if (!C.zf) goto L_100cb4ab;
  /* 100cb473 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cb476 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 100cb479 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 100cb47b jmp 0x100cb4ae */
  goto L_100cb4ae;
L_100cb47d:;
  /* 100cb47d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 100cb480 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100cb485 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100cb487 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cb48a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 100cb48e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 100cb495 not ebx */
  EBX = (~(EBX));
  /* 100cb497 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100cb499 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 100cb49b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 100cb49e jne 0x100cb4ab */
  if (!C.zf) goto L_100cb4ab;
  /* 100cb4a0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cb4a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 100cb4a6 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100cb4a9 jmp 0x100cb4ae */
  goto L_100cb4ae;
L_100cb4ab:;
  /* 100cb4ab mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_100cb4ae:;
  /* 100cb4ae mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 100cb4b1 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 100cb4b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb4b8 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 100cb4bb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 100cb4be mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 100cb4c1 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 100cb4c4 je 0x100cb55e */
  if (C.zf) goto L_100cb55e;
  /* 100cb4ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 100cb4cd mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 100cb4d1 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 100cb4d4 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 100cb4d7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 100cb4da mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 100cb4dd mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 100cb4e0 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 100cb4e3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 100cb4e6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb4e9 jne 0x100cb54f */
  if (!C.zf) goto L_100cb54f;
  /* 100cb4eb mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 100cb4ef cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb4f2 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 100cb4f5 jge 0x100cb520 */
  if ((C.sf==C.of)) goto L_100cb520;
  /* 100cb4f7 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100cb4f9 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cb4fd mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 100cb501 jne 0x100cb50e */
  if (!C.zf) goto L_100cb50e;
  /* 100cb503 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 100cb508 mov ecx, esi */
  ECX = (ESI);
  /* 100cb50a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 100cb50c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_100cb50e:;
  /* 100cb50e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 100cb513 mov ecx, esi */
  ECX = (ESI);
  /* 100cb515 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 100cb517 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cb51a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 100cb51e jmp 0x100cb54f */
  goto L_100cb54f;
L_100cb520:;
  /* 100cb520 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100cb522 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cb526 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 100cb52a jne 0x100cb539 */
  if (!C.zf) goto L_100cb539;
  /* 100cb52c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 100cb52f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 100cb534 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 100cb536 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_100cb539:;
  /* 100cb539 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cb53c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 100cb543 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 100cb546 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100cb54b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100cb54d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_100cb54f:;
  /* 100cb54f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_100cb552:;
  /* 100cb552 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100cb554 je 0x100cb561 */
  if (C.zf) goto L_100cb561;
  /* 100cb556 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 100cb558 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 100cb55c jmp 0x100cb561 */
  goto L_100cb561;
L_100cb55e:;
  /* 100cb55e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_100cb561:;
  /* 100cb561 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 100cb564 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb566 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 100cb569 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 100cb56b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 100cb56f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 100cb572 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 100cb574 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100cb576 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 100cb579 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100cb57b jne 0x100cb597 */
  if (!C.zf) goto L_100cb597;
  /* 100cb57d cmp ebx, dword ptr [0x100d6a04] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100d6a04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb583 jne 0x100cb597 */
  if (!C.zf) goto L_100cb597;
  /* 100cb585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cb588 cmp ecx, dword ptr [0x100d69fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x100d69fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb58e jne 0x100cb597 */
  if (!C.zf) goto L_100cb597;
  /* 100cb590 and dword ptr [0x100d6a04], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100d6a04)))&(0x0u); w32((uint32_t)(0x100d6a04), (_r)); fl_logic(_r,32); }
L_100cb597:;
  /* 100cb597 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cb59a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100cb59c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_100cb59f:;
  /* 100cb59f pop edi */
  EDI = (pop32());
  /* 100cb5a0 pop esi */
  ESI = (pop32());
  /* 100cb5a1 pop ebx */
  EBX = (pop32());
  /* 100cb5a2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cb5a3 ret  */
  ESPCHK(0x100cb29bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5a4 @ 0x100cb5a4 (177 bytes, 53 insns) */
void f_100cb5a4(void) {
  FTRACE(0x100cb5a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cb5a4 mov eax, dword ptr [0x100d6a08] */
  EAX = (r32((uint32_t)(0x100d6a08)));
  /* 100cb5a9 mov ecx, dword ptr [0x100d69f8] */
  ECX = (r32((uint32_t)(0x100d69f8)));
  /* 100cb5af push esi */
  push32((uint32_t)(ESI));
  /* 100cb5b0 push edi */
  push32((uint32_t)(EDI));
  /* 100cb5b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100cb5b3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb5b5 jne 0x100cb5e7 */
  if (!C.zf) goto L_100cb5e7;
  /* 100cb5b7 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 100cb5bb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 100cb5be push eax */
  push32((uint32_t)(EAX));
  /* 100cb5bf push dword ptr [0x100d6a0c] */
  push32((uint32_t)(r32((uint32_t)(0x100d6a0c))));
  /* 100cb5c5 push edi */
  push32((uint32_t)(EDI));
  /* 100cb5c6 push dword ptr [0x100d7c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d7c64))));
  /* 100cb5cc call dword ptr [0x100ce0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0ac))), 0x100cb5d2u);
  /* 100cb5d2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb5d4 je 0x100cb637 */
  if (C.zf) goto L_100cb637;
  /* 100cb5d6 add dword ptr [0x100d69f8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x100d69f8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x100d69f8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100cb5dd mov dword ptr [0x100d6a0c], eax */
  w32((uint32_t)(0x100d6a0c), (EAX));
  /* 100cb5e2 mov eax, dword ptr [0x100d6a08] */
  EAX = (r32((uint32_t)(0x100d6a08)));
L_100cb5e7:;
  /* 100cb5e7 mov ecx, dword ptr [0x100d6a0c] */
  ECX = (r32((uint32_t)(0x100d6a0c)));
  /* 100cb5ed push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 100cb5f2 push 8 */
  push32((uint32_t)(0x8u));
  /* 100cb5f4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100cb5f7 push dword ptr [0x100d7c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d7c64))));
  /* 100cb5fd lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 100cb600 call dword ptr [0x100ce098] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce098))), 0x100cb606u);
  /* 100cb606 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb608 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 100cb60b je 0x100cb637 */
  if (C.zf) goto L_100cb637;
  /* 100cb60d push 4 */
  push32((uint32_t)(0x4u));
  /* 100cb60f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 100cb614 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 100cb619 push edi */
  push32((uint32_t)(EDI));
  /* 100cb61a call dword ptr [0x100ce0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0a8))), 0x100cb620u);
  /* 100cb620 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb622 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 100cb625 jne 0x100cb63b */
  if (!C.zf) goto L_100cb63b;
  /* 100cb627 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100cb62a push edi */
  push32((uint32_t)(EDI));
  /* 100cb62b push dword ptr [0x100d7c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d7c64))));
  /* 100cb631 call dword ptr [0x100ce080] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce080))), 0x100cb637u);
L_100cb637:;
  /* 100cb637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cb639 jmp 0x100cb652 */
  goto L_100cb652;
L_100cb63b:;
  /* 100cb63b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 100cb63f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100cb641 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 100cb644 inc dword ptr [0x100d6a08] */
  { uint32_t _r=(r32((uint32_t)(0x100d6a08)))+1; w32((uint32_t)(0x100d6a08), (_r)); fl_inc(_r,32); }
  /* 100cb64a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 100cb64d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100cb650 mov eax, esi */
  EAX = (ESI);
L_100cb652:;
  /* 100cb652 pop edi */
  EDI = (pop32());
  /* 100cb653 pop esi */
  ESI = (pop32());
  /* 100cb654 ret  */
  ESPCHK(0x100cb5a4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b655 @ 0x100cb655 (251 bytes, 85 insns) */
void f_100cb655(void) {
  FTRACE(0x100cb655u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cb655 push ebp */
  push32((uint32_t)(EBP));
  /* 100cb656 mov ebp, esp */
  EBP = (ESP);
  /* 100cb658 push ecx */
  push32((uint32_t)(ECX));
  /* 100cb659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cb65c push ebx */
  push32((uint32_t)(EBX));
  /* 100cb65d push esi */
  push32((uint32_t)(ESI));
  /* 100cb65e push edi */
  push32((uint32_t)(EDI));
  /* 100cb65f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 100cb662 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 100cb665 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100cb667:;
  /* 100cb667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cb669 jl 0x100cb670 */
  if ((C.sf!=C.of)) goto L_100cb670;
  /* 100cb66b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100cb66d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100cb66e jmp 0x100cb667 */
  goto L_100cb667;
L_100cb670:;
  /* 100cb670 mov eax, ebx */
  EAX = (EBX);
  /* 100cb672 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100cb674 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100cb67a pop edx */
  EDX = (pop32());
  /* 100cb67b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 100cb682 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_100cb685:;
  /* 100cb685 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 100cb688 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 100cb68b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb68e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100cb68f jne 0x100cb685 */
  if (!C.zf) goto L_100cb685;
  /* 100cb691 mov edi, ebx */
  EDI = (EBX);
  /* 100cb693 push 4 */
  push32((uint32_t)(0x4u));
  /* 100cb695 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 100cb698 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb69b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100cb6a0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100cb6a5 push edi */
  push32((uint32_t)(EDI));
  /* 100cb6a6 call dword ptr [0x100ce0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0a8))), 0x100cb6acu);
  /* 100cb6ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cb6ae jne 0x100cb6b8 */
  if (!C.zf) goto L_100cb6b8;
  /* 100cb6b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100cb6b3 jmp 0x100cb74b */
  goto L_100cb74b;
L_100cb6b8:;
  /* 100cb6b8 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 100cb6be cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb6c0 ja 0x100cb6fe */
  if ((!C.cf&&!C.zf)) goto L_100cb6fe;
  /* 100cb6c2 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_100cb6c5:;
  /* 100cb6c5 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 100cb6c9 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 100cb6d0 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 100cb6d6 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 100cb6dd mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100cb6df lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 100cb6e5 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100cb6e8 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 100cb6f2 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb6f7 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 100cb6fa cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb6fc jbe 0x100cb6c5 */
  if ((C.cf||C.zf)) goto L_100cb6c5;
L_100cb6fe:;
  /* 100cb6fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cb701 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 100cb704 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb709 push 1 */
  push32((uint32_t)(0x1u));
  /* 100cb70b pop edi */
  EDI = (pop32());
  /* 100cb70c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100cb70f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 100cb712 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 100cb715 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 100cb718 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 100cb71b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 100cb720 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 100cb727 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 100cb72a mov cl, al */
  CL = (AL);
  /* 100cb72c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100cb72e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100cb730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cb733 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 100cb736 jne 0x100cb73b */
  if (!C.zf) goto L_100cb73b;
  /* 100cb738 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_100cb73b:;
  /* 100cb73b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 100cb740 mov ecx, ebx */
  ECX = (EBX);
  /* 100cb742 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100cb744 not edx */
  EDX = (~(EDX));
  /* 100cb746 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 100cb749 mov eax, ebx */
  EAX = (EBX);
L_100cb74b:;
  /* 100cb74b pop edi */
  EDI = (pop32());
  /* 100cb74c pop esi */
  ESI = (pop32());
  /* 100cb74d pop ebx */
  EBX = (pop32());
  /* 100cb74e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cb74f ret  */
  ESPCHK(0x100cb655u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x100cb750 (324 bytes, 102 insns) */
void f_100cb750(void) {
  FTRACE(0x100cb750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cb750 cmp dword ptr [0x100d0eb0], -1 */
  { uint32_t _a=(r32((uint32_t)(0x100d0eb0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb757 push ebx */
  push32((uint32_t)(EBX));
  /* 100cb758 push ebp */
  push32((uint32_t)(EBP));
  /* 100cb759 push esi */
  push32((uint32_t)(ESI));
  /* 100cb75a push edi */
  push32((uint32_t)(EDI));
  /* 100cb75b jne 0x100cb764 */
  if (!C.zf) goto L_100cb764;
  /* 100cb75d mov esi, 0x100d0ea0 */
  ESI = (0x100d0ea0u);
  /* 100cb762 jmp 0x100cb781 */
  goto L_100cb781;
L_100cb764:;
  /* 100cb764 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 100cb769 push 0 */
  push32((uint32_t)(0x0u));
  /* 100cb76b push dword ptr [0x100d7c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d7c64))));
  /* 100cb771 call dword ptr [0x100ce098] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce098))), 0x100cb777u);
  /* 100cb777 mov esi, eax */
  ESI = (EAX);
  /* 100cb779 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100cb77b je 0x100cb88d */
  if (C.zf) goto L_100cb88d;
L_100cb781:;
  /* 100cb781 mov ebp, dword ptr [0x100ce0a8] */
  EBP = (r32((uint32_t)(0x100ce0a8)));
  /* 100cb787 push 4 */
  push32((uint32_t)(0x4u));
  /* 100cb789 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 100cb78e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 100cb793 push 0 */
  push32((uint32_t)(0x0u));
  /* 100cb795 call ebp */
  call_ind((uint32_t)(EBP), 0x100cb797u);
  /* 100cb797 mov edi, eax */
  EDI = (EAX);
  /* 100cb799 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100cb79b je 0x100cb876 */
  if (C.zf) goto L_100cb876;
  /* 100cb7a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100cb7a3 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 100cb7a8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100cb7ad push ebx */
  push32((uint32_t)(EBX));
  /* 100cb7ae push edi */
  push32((uint32_t)(EDI));
  /* 100cb7af call ebp */
  call_ind((uint32_t)(EBP), 0x100cb7b1u);
  /* 100cb7b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cb7b3 je 0x100cb868 */
  if (C.zf) goto L_100cb868;
  /* 100cb7b9 mov eax, 0x100d0ea0 */
  EAX = (0x100d0ea0u);
  /* 100cb7be cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb7c0 jne 0x100cb7e0 */
  if (!C.zf) goto L_100cb7e0;
  /* 100cb7c2 cmp dword ptr [0x100d0ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100d0ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb7c9 jne 0x100cb7d0 */
  if (!C.zf) goto L_100cb7d0;
  /* 100cb7cb mov dword ptr [0x100d0ea0], eax */
  w32((uint32_t)(0x100d0ea0), (EAX));
L_100cb7d0:;
  /* 100cb7d0 cmp dword ptr [0x100d0ea4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100d0ea4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb7d7 jne 0x100cb7f5 */
  if (!C.zf) goto L_100cb7f5;
  /* 100cb7d9 mov dword ptr [0x100d0ea4], eax */
  w32((uint32_t)(0x100d0ea4), (EAX));
  /* 100cb7de jmp 0x100cb7f5 */
  goto L_100cb7f5;
L_100cb7e0:;
  /* 100cb7e0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100cb7e2 mov eax, dword ptr [0x100d0ea4] */
  EAX = (r32((uint32_t)(0x100d0ea4)));
  /* 100cb7e7 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 100cb7ea mov dword ptr [0x100d0ea4], esi */
  w32((uint32_t)(0x100d0ea4), (ESI));
  /* 100cb7f0 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 100cb7f3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_100cb7f5:;
  /* 100cb7f5 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 100cb7fb lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 100cb801 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 100cb804 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 100cb807 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 100cb80a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 100cb80d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 100cb810 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 100cb812 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_100cb817:;
  /* 100cb817 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100cb819 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb81c setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 100cb81f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100cb820 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100cb822 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100cb823 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 100cb824 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 100cb826 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100cb829 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb82c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb832 jl 0x100cb817 */
  if ((C.sf!=C.of)) goto L_100cb817;
  /* 100cb834 push ebx */
  push32((uint32_t)(EBX));
  /* 100cb835 push 0 */
  push32((uint32_t)(0x0u));
  /* 100cb837 push edi */
  push32((uint32_t)(EDI));
  /* 100cb838 call 0x100c9be0 */
  push32(0x100cb83du); f_100c9be0();
  /* 100cb83d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100cb840:;
  /* 100cb840 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 100cb843 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb845 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb847 jae 0x100cb864 */
  if (!C.cf) goto L_100cb864;
  /* 100cb849 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 100cb850 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 100cb853 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 100cb855 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 100cb85c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb862 jmp 0x100cb840 */
  goto L_100cb840;
L_100cb864:;
  /* 100cb864 mov eax, esi */
  EAX = (ESI);
  /* 100cb866 jmp 0x100cb88f */
  goto L_100cb88f;
L_100cb868:;
  /* 100cb868 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100cb86d push 0 */
  push32((uint32_t)(0x0u));
  /* 100cb86f push edi */
  push32((uint32_t)(EDI));
  /* 100cb870 call dword ptr [0x100ce07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce07c))), 0x100cb876u);
L_100cb876:;
  /* 100cb876 cmp esi, 0x100d0ea0 */
  { uint32_t _a=(ESI),_b=(0x100d0ea0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb87c je 0x100cb88d */
  if (C.zf) goto L_100cb88d;
  /* 100cb87e push esi */
  push32((uint32_t)(ESI));
  /* 100cb87f push 0 */
  push32((uint32_t)(0x0u));
  /* 100cb881 push dword ptr [0x100d7c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d7c64))));
  /* 100cb887 call dword ptr [0x100ce080] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce080))), 0x100cb88du);
L_100cb88d:;
  /* 100cb88d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100cb88f:;
  /* 100cb88f pop edi */
  EDI = (pop32());
  /* 100cb890 pop esi */
  ESI = (pop32());
  /* 100cb891 pop ebp */
  EBP = (pop32());
  /* 100cb892 pop ebx */
  EBX = (pop32());
  /* 100cb893 ret  */
  ESPCHK(0x100cb750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b894 @ 0x100cb894 (86 bytes, 27 insns) */
void f_100cb894(void) {
  FTRACE(0x100cb894u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cb894 push esi */
  push32((uint32_t)(ESI));
  /* 100cb895 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100cb899 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100cb89e push 0 */
  push32((uint32_t)(0x0u));
  /* 100cb8a0 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100cb8a3 call dword ptr [0x100ce07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce07c))), 0x100cb8a9u);
  /* 100cb8a9 cmp dword ptr [0x100d2ec0], esi */
  { uint32_t _a=(r32((uint32_t)(0x100d2ec0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb8af jne 0x100cb8b9 */
  if (!C.zf) goto L_100cb8b9;
  /* 100cb8b1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 100cb8b4 mov dword ptr [0x100d2ec0], eax */
  w32((uint32_t)(0x100d2ec0), (EAX));
L_100cb8b9:;
  /* 100cb8b9 cmp esi, 0x100d0ea0 */
  { uint32_t _a=(ESI),_b=(0x100d0ea0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb8bf je 0x100cb8e1 */
  if (C.zf) goto L_100cb8e1;
  /* 100cb8c1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 100cb8c4 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 100cb8c6 push esi */
  push32((uint32_t)(ESI));
  /* 100cb8c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100cb8c9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100cb8cb mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100cb8cd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 100cb8d0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100cb8d3 push dword ptr [0x100d7c64] */
  push32((uint32_t)(r32((uint32_t)(0x100d7c64))));
  /* 100cb8d9 call dword ptr [0x100ce080] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce080))), 0x100cb8dfu);
  /* 100cb8df pop esi */
  ESI = (pop32());
  /* 100cb8e0 ret  */
  ESPCHK(0x100cb894u, _esp0);
  ESP += 4; return;
L_100cb8e1:;
  /* 100cb8e1 or dword ptr [0x100d0eb0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x100d0eb0)))|(0xffffffffu); w32((uint32_t)(0x100d0eb0), (_r)); fl_logic(_r,32); }
  /* 100cb8e8 pop esi */
  ESI = (pop32());
  /* 100cb8e9 ret  */
  ESPCHK(0x100cb894u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8ea @ 0x100cb8ea (194 bytes, 66 insns) */
void f_100cb8ea(void) {
  FTRACE(0x100cb8eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cb8ea push ebp */
  push32((uint32_t)(EBP));
  /* 100cb8eb mov ebp, esp */
  EBP = (ESP);
  /* 100cb8ed push ecx */
  push32((uint32_t)(ECX));
  /* 100cb8ee push ebx */
  push32((uint32_t)(EBX));
  /* 100cb8ef push esi */
  push32((uint32_t)(ESI));
  /* 100cb8f0 mov esi, dword ptr [0x100d0ea4] */
  ESI = (r32((uint32_t)(0x100d0ea4)));
  /* 100cb8f6 push edi */
  push32((uint32_t)(EDI));
L_100cb8f7:;
  /* 100cb8f7 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb8fb je 0x100cb995 */
  if (C.zf) goto L_100cb995;
  /* 100cb901 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100cb905 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 100cb90b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_100cb910:;
  /* 100cb910 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb916 jne 0x100cb951 */
  if (!C.zf) goto L_100cb951;
  /* 100cb918 mov eax, ebx */
  EAX = (EBX);
  /* 100cb91a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 100cb91f add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb922 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100cb927 push eax */
  push32((uint32_t)(EAX));
  /* 100cb928 call dword ptr [0x100ce07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce07c))), 0x100cb92eu);
  /* 100cb92e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cb930 je 0x100cb951 */
  if (C.zf) goto L_100cb951;
  /* 100cb932 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 100cb935 dec dword ptr [0x100d6854] */
  { uint32_t _r=(r32((uint32_t)(0x100d6854)))-1; w32((uint32_t)(0x100d6854), (_r)); fl_dec(_r,32); }
  /* 100cb93b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100cb93e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cb940 je 0x100cb946 */
  if (C.zf) goto L_100cb946;
  /* 100cb942 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb944 jbe 0x100cb949 */
  if ((C.cf||C.zf)) goto L_100cb949;
L_100cb946:;
  /* 100cb946 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_100cb949:;
  /* 100cb949 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100cb94c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 100cb94f je 0x100cb95e */
  if (C.zf) goto L_100cb95e;
L_100cb951:;
  /* 100cb951 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cb957 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cb95a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100cb95c jge 0x100cb910 */
  if ((C.sf==C.of)) goto L_100cb910;
L_100cb95e:;
  /* 100cb95e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb962 mov ecx, esi */
  ECX = (ESI);
  /* 100cb964 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 100cb967 je 0x100cb995 */
  if (C.zf) goto L_100cb995;
  /* 100cb969 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb96d jne 0x100cb995 */
  if (!C.zf) goto L_100cb995;
  /* 100cb96f push 1 */
  push32((uint32_t)(0x1u));
  /* 100cb971 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 100cb974 pop edx */
  EDX = (pop32());
L_100cb975:;
  /* 100cb975 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb978 jne 0x100cb986 */
  if (!C.zf) goto L_100cb986;
  /* 100cb97a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100cb97b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cb97e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb984 jl 0x100cb975 */
  if ((C.sf!=C.of)) goto L_100cb975;
L_100cb986:;
  /* 100cb986 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb98c jne 0x100cb995 */
  if (!C.zf) goto L_100cb995;
  /* 100cb98e push ecx */
  push32((uint32_t)(ECX));
  /* 100cb98f call 0x100cb894 */
  push32(0x100cb994u); f_100cb894();
  /* 100cb994 pop ecx */
  ECX = (pop32());
L_100cb995:;
  /* 100cb995 cmp esi, dword ptr [0x100d0ea4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100d0ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb99b je 0x100cb9a7 */
  if (C.zf) goto L_100cb9a7;
  /* 100cb99d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb9a1 jg 0x100cb8f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_100cb8f7;
L_100cb9a7:;
  /* 100cb9a7 pop edi */
  EDI = (pop32());
  /* 100cb9a8 pop esi */
  ESI = (pop32());
  /* 100cb9a9 pop ebx */
  EBX = (pop32());
  /* 100cb9aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cb9ab ret  */
  ESPCHK(0x100cb8eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9ac @ 0x100cb9ac (87 bytes, 34 insns) */
void f_100cb9ac(void) {
  FTRACE(0x100cb9acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cb9ac mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100cb9b0 mov edx, 0x100d0ea0 */
  EDX = (0x100d0ea0u);
  /* 100cb9b5 push esi */
  push32((uint32_t)(ESI));
  /* 100cb9b6 mov ecx, edx */
  ECX = (EDX);
L_100cb9b8:;
  /* 100cb9b8 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb9bb jbe 0x100cb9c2 */
  if ((C.cf||C.zf)) goto L_100cb9c2;
  /* 100cb9bd cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb9c0 jb 0x100cb9ca */
  if (C.cf) goto L_100cb9ca;
L_100cb9c2:;
  /* 100cb9c2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 100cb9c4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb9c6 je 0x100cb9ff */
  if (C.zf) goto L_100cb9ff;
  /* 100cb9c8 jmp 0x100cb9b8 */
  goto L_100cb9b8;
L_100cb9ca:;
  /* 100cb9ca test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 100cb9cc jne 0x100cb9ff */
  if (!C.zf) goto L_100cb9ff;
  /* 100cb9ce mov esi, eax */
  ESI = (EAX);
  /* 100cb9d0 mov edx, 0x100 */
  EDX = (0x100u);
  /* 100cb9d5 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 100cb9db cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cb9dd jb 0x100cb9ff */
  if (C.cf) goto L_100cb9ff;
  /* 100cb9df mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 100cb9e3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100cb9e5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 100cb9e9 mov ecx, eax */
  ECX = (EAX);
  /* 100cb9eb and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 100cb9f0 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cb9f2 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100cb9f4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cb9f6 pop esi */
  ESI = (pop32());
  /* 100cb9f7 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100cb9fa lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 100cb9fe ret  */
  ESPCHK(0x100cb9acu, _esp0);
  ESP += 4; return;
L_100cb9ff:;
  /* 100cb9ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cba01 pop esi */
  ESI = (pop32());
  /* 100cba02 ret  */
  ESPCHK(0x100cb9acu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba03 @ 0x100cba03 (69 bytes, 19 insns) */
void f_100cba03(void) {
  FTRACE(0x100cba03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cba03 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100cba07 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100cba0b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cba0e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 100cba11 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 100cba15 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 100cba19 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 100cba1c add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100cba1e and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 100cba21 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cba27 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 100cba2e jne 0x100cba47 */
  if (!C.zf) goto L_100cba47;
  /* 100cba30 inc dword ptr [0x100d6854] */
  { uint32_t _r=(r32((uint32_t)(0x100d6854)))+1; w32((uint32_t)(0x100d6854), (_r)); fl_inc(_r,32); }
  /* 100cba36 cmp dword ptr [0x100d6854], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x100d6854))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cba3d jne 0x100cba47 */
  if (!C.zf) goto L_100cba47;
  /* 100cba3f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100cba41 call 0x100cb8ea */
  push32(0x100cba46u); f_100cb8ea();
  /* 100cba46 pop ecx */
  ECX = (pop32());
L_100cba47:;
  /* 100cba47 ret  */
  ESPCHK(0x100cba03u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba48 @ 0x100cba48 (520 bytes, 180 insns) */
void f_100cba48(void) {
  FTRACE(0x100cba48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cba48 push ebp */
  push32((uint32_t)(EBP));
  /* 100cba49 mov ebp, esp */
  EBP = (ESP);
  /* 100cba4b push ecx */
  push32((uint32_t)(ECX));
  /* 100cba4c push ecx */
  push32((uint32_t)(ECX));
  /* 100cba4d push ebx */
  push32((uint32_t)(EBX));
  /* 100cba4e push esi */
  push32((uint32_t)(ESI));
  /* 100cba4f mov esi, dword ptr [0x100d2ec0] */
  ESI = (r32((uint32_t)(0x100d2ec0)));
  /* 100cba55 push edi */
  push32((uint32_t)(EDI));
L_100cba56:;
  /* 100cba56 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 100cba59 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cba5c je 0x100cbb01 */
  if (C.zf) goto L_100cbb01;
  /* 100cba62 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 100cba65 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 100cba6b mov eax, edi */
  EAX = (EDI);
  /* 100cba6d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cba6f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cba72 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 100cba75 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 100cba78 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cba7a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cba7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100cba7f jae 0x100cbabb */
  if (!C.cf) goto L_100cbabb;
L_100cba81:;
  /* 100cba81 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 100cba83 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cba86 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cba88 jl 0x100cbaa4 */
  if ((C.sf!=C.of)) goto L_100cbaa4;
  /* 100cba8a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cba8d jbe 0x100cbaa4 */
  if ((C.cf||C.zf)) goto L_100cbaa4;
  /* 100cba8f push ebx */
  push32((uint32_t)(EBX));
  /* 100cba90 push ecx */
  push32((uint32_t)(ECX));
  /* 100cba91 push eax */
  push32((uint32_t)(EAX));
  /* 100cba92 call 0x100cbc50 */
  push32(0x100cba97u); f_100cbc50();
  /* 100cba97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cba9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cba9c jne 0x100cbb13 */
  if (!C.zf) goto L_100cbb13;
  /* 100cba9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cbaa1 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_100cbaa4:;
  /* 100cbaa4 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbaa7 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 100cbaad add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbab2 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbab4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100cbab7 jb 0x100cba81 */
  if (C.cf) goto L_100cba81;
  /* 100cbab9 jmp 0x100cbabe */
  goto L_100cbabe;
L_100cbabb:;
  /* 100cbabb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_100cbabe:;
  /* 100cbabe mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100cbac1 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 100cbac4 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 100cbac7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100cbaca cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbacc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 100cbacf jae 0x100cbb04 */
  if (!C.cf) goto L_100cbb04;
L_100cbad1:;
  /* 100cbad1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100cbad3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbad5 jl 0x100cbaf0 */
  if ((C.sf!=C.of)) goto L_100cbaf0;
  /* 100cbad7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbada jbe 0x100cbaf0 */
  if ((C.cf||C.zf)) goto L_100cbaf0;
  /* 100cbadc push ebx */
  push32((uint32_t)(EBX));
  /* 100cbadd push eax */
  push32((uint32_t)(EAX));
  /* 100cbade push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 100cbae1 call 0x100cbc50 */
  push32(0x100cbae6u); f_100cbc50();
  /* 100cbae6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cbaeb jne 0x100cbb13 */
  if (!C.zf) goto L_100cbb13;
  /* 100cbaed mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_100cbaf0:;
  /* 100cbaf0 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100cbaf7 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbafa cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbafd jb 0x100cbad1 */
  if (C.cf) goto L_100cbad1;
  /* 100cbaff jmp 0x100cbb04 */
  goto L_100cbb04;
L_100cbb01:;
  /* 100cbb01 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_100cbb04:;
  /* 100cbb04 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 100cbb06 cmp esi, dword ptr [0x100d2ec0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100d2ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbb0c je 0x100cbb23 */
  if (C.zf) goto L_100cbb23;
  /* 100cbb0e jmp 0x100cba56 */
  goto L_100cba56;
L_100cbb13:;
  /* 100cbb13 mov dword ptr [0x100d2ec0], esi */
  w32((uint32_t)(0x100d2ec0), (ESI));
  /* 100cbb19 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100cbb1b mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 100cbb1e jmp 0x100cbc4b */
  goto L_100cbc4b;
L_100cbb23:;
  /* 100cbb23 mov eax, 0x100d0ea0 */
  EAX = (0x100d0ea0u);
  /* 100cbb28 mov edi, eax */
  EDI = (EAX);
L_100cbb2a:;
  /* 100cbb2a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbb2e je 0x100cbb36 */
  if (C.zf) goto L_100cbb36;
  /* 100cbb30 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbb34 jne 0x100cbb42 */
  if (!C.zf) goto L_100cbb42;
L_100cbb36:;
  /* 100cbb36 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 100cbb38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbb3a je 0x100cbc17 */
  if (C.zf) goto L_100cbc17;
  /* 100cbb40 jmp 0x100cbb2a */
  goto L_100cbb2a;
L_100cbb42:;
  /* 100cbb42 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 100cbb45 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100cbb49 mov esi, ebx */
  ESI = (EBX);
  /* 100cbb4b mov eax, ebx */
  EAX = (EBX);
  /* 100cbb4d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cbb4f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cbb52 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 100cbb55 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 100cbb58 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbb5b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbb5e jne 0x100cbb71 */
  if (!C.zf) goto L_100cbb71;
L_100cbb60:;
  /* 100cbb60 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbb64 jge 0x100cbb71 */
  if ((C.sf==C.of)) goto L_100cbb71;
  /* 100cbb66 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbb69 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100cbb6c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbb6f je 0x100cbb60 */
  if (C.zf) goto L_100cbb60;
L_100cbb71:;
  /* 100cbb71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cbb74 push 4 */
  push32((uint32_t)(0x4u));
  /* 100cbb76 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 100cbb79 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100cbb7e push eax */
  push32((uint32_t)(EAX));
  /* 100cbb7f push esi */
  push32((uint32_t)(ESI));
  /* 100cbb80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100cbb83 call dword ptr [0x100ce0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0a8))), 0x100cbb89u);
  /* 100cbb89 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbb8b jne 0x100cbc49 */
  if (!C.zf) goto L_100cbc49;
  /* 100cbb91 push 0 */
  push32((uint32_t)(0x0u));
  /* 100cbb93 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 100cbb96 push esi */
  push32((uint32_t)(ESI));
  /* 100cbb97 call 0x100c9be0 */
  push32(0x100cbb9cu); f_100c9be0();
  /* 100cbb9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cbb9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbba2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100cbba4 mov ecx, ebx */
  ECX = (EBX);
  /* 100cbba6 jle 0x100cbbd8 */
  if ((C.zf||C.sf!=C.of)) goto L_100cbbd8;
  /* 100cbba8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 100cbbab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_100cbbae:;
  /* 100cbbae or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 100cbbb5 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 100cbbb8 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 100cbbbb mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 100cbbc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 100cbbc2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 100cbbc4 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 100cbbcb add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbbd0 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbbd3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 100cbbd6 jne 0x100cbbae */
  if (!C.zf) goto L_100cbbae;
L_100cbbd8:;
  /* 100cbbd8 mov dword ptr [0x100d2ec0], edi */
  w32((uint32_t)(0x100d2ec0), (EDI));
  /* 100cbbde lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_100cbbe4:;
  /* 100cbbe4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbbe6 jae 0x100cbbf4 */
  if (!C.cf) goto L_100cbbf4;
  /* 100cbbe8 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbbeb je 0x100cbbf2 */
  if (C.zf) goto L_100cbbf2;
  /* 100cbbed add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbbf0 jmp 0x100cbbe4 */
  goto L_100cbbe4;
L_100cbbf2:;
  /* 100cbbf2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100cbbf4:;
  /* 100cbbf4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cbbf6 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 100cbbf8 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 100cbbfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cbbfe mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 100cbc01 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 100cbc04 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100cbc06 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100cbc09 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 100cbc0d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 100cbc13 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100cbc15 jmp 0x100cbc4b */
  goto L_100cbc4b;
L_100cbc17:;
  /* 100cbc17 call 0x100cb750 */
  push32(0x100cbc1cu); f_100cb750();
  /* 100cbc1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cbc1e je 0x100cbc49 */
  if (C.zf) goto L_100cbc49;
  /* 100cbc20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 100cbc23 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 100cbc26 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 100cbc2a mov dword ptr [0x100d2ec0], eax */
  w32((uint32_t)(0x100d2ec0), (EAX));
  /* 100cbc2f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 100cbc31 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 100cbc36 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cbc38 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 100cbc3b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 100cbc3e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100cbc41 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 100cbc47 jmp 0x100cbc4b */
  goto L_100cbc4b;
L_100cbc49:;
  /* 100cbc49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100cbc4b:;
  /* 100cbc4b pop edi */
  EDI = (pop32());
  /* 100cbc4c pop esi */
  ESI = (pop32());
  /* 100cbc4d pop ebx */
  EBX = (pop32());
  /* 100cbc4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cbc4f ret  */
  ESPCHK(0x100cba48u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc50 @ 0x100cbc50 (292 bytes, 125 insns) */
void f_100cbc50(void) {
  FTRACE(0x100cbc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cbc50 push ebp */
  push32((uint32_t)(EBP));
  /* 100cbc51 mov ebp, esp */
  EBP = (ESP);
  /* 100cbc53 push ecx */
  push32((uint32_t)(ECX));
  /* 100cbc54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cbc57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 100cbc5a push ebx */
  push32((uint32_t)(EBX));
  /* 100cbc5b push esi */
  push32((uint32_t)(ESI));
  /* 100cbc5c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 100cbc5f push edi */
  push32((uint32_t)(EDI));
  /* 100cbc60 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 100cbc62 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 100cbc68 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbc6a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 100cbc6d mov eax, edi */
  EAX = (EDI);
  /* 100cbc6f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100cbc72 jb 0x100cbc95 */
  if (C.cf) goto L_100cbc95;
  /* 100cbc74 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 100cbc77 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 100cbc79 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbc7b jae 0x100cbc84 */
  if (!C.cf) goto L_100cbc84;
  /* 100cbc7d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100cbc7f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100cbc82 jmp 0x100cbc8d */
  goto L_100cbc8d;
L_100cbc84:;
  /* 100cbc84 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100cbc88 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 100cbc8b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_100cbc8d:;
  /* 100cbc8d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 100cbc90 jmp 0x100cbd63 */
  goto L_100cbd63;
L_100cbc95:;
  /* 100cbc95 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbc97 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cbc9a je 0x100cbc9e */
  if (C.zf) goto L_100cbc9e;
  /* 100cbc9c mov eax, esi */
  EAX = (ESI);
L_100cbc9e:;
  /* 100cbc9e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 100cbca1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbca3 jae 0x100cbce8 */
  if (!C.cf) goto L_100cbce8;
L_100cbca5:;
  /* 100cbca5 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 100cbca7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100cbca9 jne 0x100cbcdb */
  if (!C.zf) goto L_100cbcdb;
  /* 100cbcab push 1 */
  push32((uint32_t)(0x1u));
  /* 100cbcad lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 100cbcb0 pop esi */
  ESI = (pop32());
L_100cbcb1:;
  /* 100cbcb1 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cbcb4 jne 0x100cbcba */
  if (!C.zf) goto L_100cbcba;
  /* 100cbcb6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100cbcb7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cbcb8 jmp 0x100cbcb1 */
  goto L_100cbcb1;
L_100cbcba:;
  /* 100cbcba cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbcbc jae 0x100cbd0c */
  if (!C.cf) goto L_100cbd0c;
  /* 100cbcbe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbcc1 jne 0x100cbcc8 */
  if (!C.zf) goto L_100cbcc8;
  /* 100cbcc3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 100cbcc6 jmp 0x100cbcd4 */
  goto L_100cbcd4;
L_100cbcc8:;
  /* 100cbcc8 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100cbccb cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbcce jb 0x100cbd6d */
  if (C.cf) goto L_100cbd6d;
L_100cbcd4:;
  /* 100cbcd4 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 100cbcd7 mov eax, ebx */
  EAX = (EBX);
  /* 100cbcd9 jmp 0x100cbce0 */
  goto L_100cbce0;
L_100cbcdb:;
  /* 100cbcdb movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 100cbcde add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100cbce0:;
  /* 100cbce0 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 100cbce3 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbce6 jb 0x100cbca5 */
  if (C.cf) goto L_100cbca5;
L_100cbce8:;
  /* 100cbce8 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_100cbceb:;
  /* 100cbceb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbced jae 0x100cbd6d */
  if (!C.cf) goto L_100cbd6d;
  /* 100cbcef lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 100cbcf2 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbcf5 jae 0x100cbd6d */
  if (!C.cf) goto L_100cbd6d;
  /* 100cbcf7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100cbcf9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100cbcfb jne 0x100cbd3d */
  if (!C.zf) goto L_100cbd3d;
  /* 100cbcfd push 1 */
  push32((uint32_t)(0x1u));
  /* 100cbcff lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 100cbd02 pop eax */
  EAX = (pop32());
L_100cbd03:;
  /* 100cbd03 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cbd06 jne 0x100cbd2d */
  if (!C.zf) goto L_100cbd2d;
  /* 100cbd08 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100cbd09 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100cbd0a jmp 0x100cbd03 */
  goto L_100cbd03;
L_100cbd0c:;
  /* 100cbd0c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 100cbd0f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbd12 jae 0x100cbd1d */
  if (!C.cf) goto L_100cbd1d;
  /* 100cbd14 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cbd16 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 100cbd18 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 100cbd1b jmp 0x100cbd26 */
  goto L_100cbd26;
L_100cbd1d:;
  /* 100cbd1d and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100cbd21 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 100cbd24 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_100cbd26:;
  /* 100cbd26 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 100cbd28 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbd2b jmp 0x100cbd63 */
  goto L_100cbd63;
L_100cbd2d:;
  /* 100cbd2d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbd2f jae 0x100cbd44 */
  if (!C.cf) goto L_100cbd44;
  /* 100cbd31 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100cbd34 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbd37 jb 0x100cbd6d */
  if (C.cf) goto L_100cbd6d;
  /* 100cbd39 mov esi, ebx */
  ESI = (EBX);
  /* 100cbd3b jmp 0x100cbceb */
  goto L_100cbceb;
L_100cbd3d:;
  /* 100cbd3d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 100cbd40 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbd42 jmp 0x100cbceb */
  goto L_100cbceb;
L_100cbd44:;
  /* 100cbd44 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 100cbd47 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbd4a jae 0x100cbd55 */
  if (!C.cf) goto L_100cbd55;
  /* 100cbd4c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cbd4e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 100cbd50 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 100cbd53 jmp 0x100cbd5e */
  goto L_100cbd5e;
L_100cbd55:;
  /* 100cbd55 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100cbd59 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 100cbd5c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_100cbd5e:;
  /* 100cbd5e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100cbd60 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_100cbd63:;
  /* 100cbd63 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100cbd66 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100cbd69 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cbd6b jmp 0x100cbd6f */
  goto L_100cbd6f;
L_100cbd6d:;
  /* 100cbd6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100cbd6f:;
  /* 100cbd6f pop edi */
  EDI = (pop32());
  /* 100cbd70 pop esi */
  ESI = (pop32());
  /* 100cbd71 pop ebx */
  EBX = (pop32());
  /* 100cbd72 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cbd73 ret  */
  ESPCHK(0x100cbc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd74 @ 0x100cbd74 (137 bytes, 50 insns) */
void f_100cbd74(void) {
  FTRACE(0x100cbd74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cbd74 push ebx */
  push32((uint32_t)(EBX));
  /* 100cbd75 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100cbd77 cmp dword ptr [0x100d6858], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100d6858))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbd7d push esi */
  push32((uint32_t)(ESI));
  /* 100cbd7e push edi */
  push32((uint32_t)(EDI));
  /* 100cbd7f jne 0x100cbdc3 */
  if (!C.zf) goto L_100cbdc3;
  /* 100cbd81 push 0x100ce548 */
  push32((uint32_t)(0x100ce548u));
  /* 100cbd86 call dword ptr [0x100ce0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0b0))), 0x100cbd8cu);
  /* 100cbd8c mov edi, eax */
  EDI = (EAX);
  /* 100cbd8e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbd90 je 0x100cbdf9 */
  if (C.zf) goto L_100cbdf9;
  /* 100cbd92 mov esi, dword ptr [0x100ce088] */
  ESI = (r32((uint32_t)(0x100ce088)));
  /* 100cbd98 push 0x100ce53c */
  push32((uint32_t)(0x100ce53cu));
  /* 100cbd9d push edi */
  push32((uint32_t)(EDI));
  /* 100cbd9e call esi */
  call_ind((uint32_t)(ESI), 0x100cbda0u);
  /* 100cbda0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cbda2 mov dword ptr [0x100d6858], eax */
  w32((uint32_t)(0x100d6858), (EAX));
  /* 100cbda7 je 0x100cbdf9 */
  if (C.zf) goto L_100cbdf9;
  /* 100cbda9 push 0x100ce52c */
  push32((uint32_t)(0x100ce52cu));
  /* 100cbdae push edi */
  push32((uint32_t)(EDI));
  /* 100cbdaf call esi */
  call_ind((uint32_t)(ESI), 0x100cbdb1u);
  /* 100cbdb1 push 0x100ce518 */
  push32((uint32_t)(0x100ce518u));
  /* 100cbdb6 push edi */
  push32((uint32_t)(EDI));
  /* 100cbdb7 mov dword ptr [0x100d685c], eax */
  w32((uint32_t)(0x100d685c), (EAX));
  /* 100cbdbc call esi */
  call_ind((uint32_t)(ESI), 0x100cbdbeu);
  /* 100cbdbe mov dword ptr [0x100d6860], eax */
  w32((uint32_t)(0x100d6860), (EAX));
L_100cbdc3:;
  /* 100cbdc3 mov eax, dword ptr [0x100d685c] */
  EAX = (r32((uint32_t)(0x100d685c)));
  /* 100cbdc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cbdca je 0x100cbde2 */
  if (C.zf) goto L_100cbde2;
  /* 100cbdcc call eax */
  call_ind((uint32_t)(EAX), 0x100cbdceu);
  /* 100cbdce mov ebx, eax */
  EBX = (EAX);
  /* 100cbdd0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100cbdd2 je 0x100cbde2 */
  if (C.zf) goto L_100cbde2;
  /* 100cbdd4 mov eax, dword ptr [0x100d6860] */
  EAX = (r32((uint32_t)(0x100d6860)));
  /* 100cbdd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cbddb je 0x100cbde2 */
  if (C.zf) goto L_100cbde2;
  /* 100cbddd push ebx */
  push32((uint32_t)(EBX));
  /* 100cbdde call eax */
  call_ind((uint32_t)(EAX), 0x100cbde0u);
  /* 100cbde0 mov ebx, eax */
  EBX = (EAX);
L_100cbde2:;
  /* 100cbde2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100cbde6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100cbdea push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100cbdee push ebx */
  push32((uint32_t)(EBX));
  /* 100cbdef call dword ptr [0x100d6858] */
  call_ind((uint32_t)(r32((uint32_t)(0x100d6858))), 0x100cbdf5u);
L_100cbdf5:;
  /* 100cbdf5 pop edi */
  EDI = (pop32());
  /* 100cbdf6 pop esi */
  ESI = (pop32());
  /* 100cbdf7 pop ebx */
  EBX = (pop32());
  /* 100cbdf8 ret  */
  ESPCHK(0x100cbd74u, _esp0);
  ESP += 4; return;
L_100cbdf9:;
  /* 100cbdf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cbdfb jmp 0x100cbdf5 */
  goto L_100cbdf5;
}

/* _strncpy @ 0x100cbe00 (254 bytes, 109 insns) */
void f_100cbe00(void) {
  FTRACE(0x100cbe00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cbe00 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 100cbe04 push edi */
  push32((uint32_t)(EDI));
  /* 100cbe05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100cbe07 je 0x100cbe83 */
  if (C.zf) goto L_100cbe83;
  /* 100cbe09 push esi */
  push32((uint32_t)(ESI));
  /* 100cbe0a push ebx */
  push32((uint32_t)(EBX));
  /* 100cbe0b mov ebx, ecx */
  EBX = (ECX);
  /* 100cbe0d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 100cbe11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 100cbe17 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 100cbe1b jne 0x100cbe24 */
  if (!C.zf) goto L_100cbe24;
  /* 100cbe1d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100cbe20 jne 0x100cbe91 */
  if (!C.zf) goto L_100cbe91;
  /* 100cbe22 jmp 0x100cbe45 */
  goto L_100cbe45;
L_100cbe24:;
  /* 100cbe24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100cbe26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cbe27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100cbe29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100cbe2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100cbe2b je 0x100cbe52 */
  if (C.zf) goto L_100cbe52;
  /* 100cbe2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100cbe2f je 0x100cbe5a */
  if (C.zf) goto L_100cbe5a;
  /* 100cbe31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 100cbe37 jne 0x100cbe24 */
  if (!C.zf) goto L_100cbe24;
  /* 100cbe39 mov ebx, ecx */
  EBX = (ECX);
  /* 100cbe3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100cbe3e jne 0x100cbe91 */
  if (!C.zf) goto L_100cbe91;
L_100cbe40:;
  /* 100cbe40 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 100cbe43 je 0x100cbe52 */
  if (C.zf) goto L_100cbe52;
L_100cbe45:;
  /* 100cbe45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100cbe47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cbe48 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100cbe4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100cbe4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100cbe4d je 0x100cbe7e */
  if (C.zf) goto L_100cbe7e;
  /* 100cbe4f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100cbe50 jne 0x100cbe45 */
  if (!C.zf) goto L_100cbe45;
L_100cbe52:;
  /* 100cbe52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100cbe56 pop ebx */
  EBX = (pop32());
  /* 100cbe57 pop esi */
  ESI = (pop32());
  /* 100cbe58 pop edi */
  EDI = (pop32());
  /* 100cbe59 ret  */
  ESPCHK(0x100cbe00u, _esp0);
  ESP += 4; return;
L_100cbe5a:;
  /* 100cbe5a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100cbe60 je 0x100cbe74 */
  if (C.zf) goto L_100cbe74;
L_100cbe62:;
  /* 100cbe62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100cbe64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100cbe65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100cbe66 je 0x100cbef6 */
  if (C.zf) goto L_100cbef6;
  /* 100cbe6c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100cbe72 jne 0x100cbe62 */
  if (!C.zf) goto L_100cbe62;
L_100cbe74:;
  /* 100cbe74 mov ebx, ecx */
  EBX = (ECX);
  /* 100cbe76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100cbe79 jne 0x100cbee7 */
  if (!C.zf) goto L_100cbee7;
L_100cbe7b:;
  /* 100cbe7b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100cbe7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_100cbe7e:;
  /* 100cbe7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100cbe7f jne 0x100cbe7b */
  if (!C.zf) goto L_100cbe7b;
  /* 100cbe81 pop ebx */
  EBX = (pop32());
  /* 100cbe82 pop esi */
  ESI = (pop32());
L_100cbe83:;
  /* 100cbe83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100cbe87 pop edi */
  EDI = (pop32());
  /* 100cbe88 ret  */
  ESPCHK(0x100cbe00u, _esp0);
  ESP += 4; return;
L_100cbe89:;
  /* 100cbe89 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100cbe8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbe8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100cbe8f je 0x100cbe40 */
  if (C.zf) goto L_100cbe40;
L_100cbe91:;
  /* 100cbe91 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 100cbe96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100cbe98 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbe9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100cbe9d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100cbe9f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 100cbea1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbea4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 100cbea9 je 0x100cbe89 */
  if (C.zf) goto L_100cbe89;
  /* 100cbeab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100cbead je 0x100cbedb */
  if (C.zf) goto L_100cbedb;
  /* 100cbeaf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 100cbeb1 je 0x100cbed1 */
  if (C.zf) goto L_100cbed1;
  /* 100cbeb3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 100cbeb9 je 0x100cbec7 */
  if (C.zf) goto L_100cbec7;
  /* 100cbebb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 100cbec1 jne 0x100cbe89 */
  if (!C.zf) goto L_100cbe89;
  /* 100cbec3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100cbec5 jmp 0x100cbedf */
  goto L_100cbedf;
L_100cbec7:;
  /* 100cbec7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 100cbecd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100cbecf jmp 0x100cbedf */
  goto L_100cbedf;
L_100cbed1:;
  /* 100cbed1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 100cbed7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100cbed9 jmp 0x100cbedf */
  goto L_100cbedf;
L_100cbedb:;
  /* 100cbedb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100cbedd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_100cbedf:;
  /* 100cbedf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbee2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cbee4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100cbee5 je 0x100cbef1 */
  if (C.zf) goto L_100cbef1;
L_100cbee7:;
  /* 100cbee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100cbee9:;
  /* 100cbee9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 100cbeeb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbeee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100cbeef jne 0x100cbee9 */
  if (!C.zf) goto L_100cbee9;
L_100cbef1:;
  /* 100cbef1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 100cbef4 jne 0x100cbe7b */
  if (!C.zf) goto L_100cbe7b;
L_100cbef6:;
  /* 100cbef6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100cbefa pop ebx */
  EBX = (pop32());
  /* 100cbefb pop esi */
  ESI = (pop32());
  /* 100cbefc pop edi */
  EDI = (pop32());
  /* 100cbefd ret  */
  ESPCHK(0x100cbe00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000befe @ 0x100cbefe (115 bytes, 37 insns) */
void f_100cbefe(void) {
  FTRACE(0x100cbefeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cbefe push esi */
  push32((uint32_t)(ESI));
  /* 100cbeff call 0x100cbf7a */
  push32(0x100cbf04u); f_100cbf7a();
  /* 100cbf04 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100cbf08 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100cbf0a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100cbf0c mov eax, 0x100d2ed0 */
  EAX = (0x100d2ed0u);
L_100cbf11:;
  /* 100cbf11 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbf13 je 0x100cbf37 */
  if (C.zf) goto L_100cbf37;
  /* 100cbf15 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbf18 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cbf19 cmp eax, 0x100d3038 */
  { uint32_t _a=(EAX),_b=(0x100d3038u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbf1e jl 0x100cbf11 */
  if ((C.sf!=C.of)) goto L_100cbf11;
  /* 100cbf20 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbf23 jb 0x100cbf47 */
  if (C.cf) goto L_100cbf47;
  /* 100cbf25 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbf28 ja 0x100cbf47 */
  if ((!C.cf&&!C.zf)) goto L_100cbf47;
  /* 100cbf2a call 0x100cbf71 */
  push32(0x100cbf2fu); f_100cbf71();
  /* 100cbf2f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 100cbf35 pop esi */
  ESI = (pop32());
  /* 100cbf36 ret  */
  ESPCHK(0x100cbefeu, _esp0);
  ESP += 4; return;
L_100cbf37:;
  /* 100cbf37 call 0x100cbf71 */
  push32(0x100cbf3cu); f_100cbf71();
  /* 100cbf3c mov ecx, dword ptr [esi*8 + 0x100d2ed4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x100d2ed4)));
  /* 100cbf43 pop esi */
  ESI = (pop32());
  /* 100cbf44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100cbf46 ret  */
  ESPCHK(0x100cbefeu, _esp0);
  ESP += 4; return;
L_100cbf47:;
  /* 100cbf47 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbf4d jb 0x100cbf64 */
  if (C.cf) goto L_100cbf64;
  /* 100cbf4f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbf55 ja 0x100cbf64 */
  if ((!C.cf&&!C.zf)) goto L_100cbf64;
  /* 100cbf57 call 0x100cbf71 */
  push32(0x100cbf5cu); f_100cbf71();
  /* 100cbf5c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 100cbf62 pop esi */
  ESI = (pop32());
  /* 100cbf63 ret  */
  ESPCHK(0x100cbefeu, _esp0);
  ESP += 4; return;
L_100cbf64:;
  /* 100cbf64 call 0x100cbf71 */
  push32(0x100cbf69u); f_100cbf71();
  /* 100cbf69 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 100cbf6f pop esi */
  ESI = (pop32());
  /* 100cbf70 ret  */
  ESPCHK(0x100cbefeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf71 @ 0x100cbf71 (9 bytes, 3 insns) */
void f_100cbf71(void) {
  FTRACE(0x100cbf71u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cbf71 call 0x100c8048 */
  push32(0x100cbf76u); f_100c8048();
  /* 100cbf76 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbf79 ret  */
  ESPCHK(0x100cbf71u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf7a @ 0x100cbf7a (9 bytes, 3 insns) */
void f_100cbf7a(void) {
  FTRACE(0x100cbf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cbf7a call 0x100c8048 */
  push32(0x100cbf7fu); f_100c8048();
  /* 100cbf7f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbf82 ret  */
  ESPCHK(0x100cbf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf83 @ 0x100cbf83 (127 bytes, 48 insns) */
void f_100cbf83(void) {
  FTRACE(0x100cbf83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cbf83 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100cbf87 push esi */
  push32((uint32_t)(ESI));
  /* 100cbf88 cmp ecx, dword ptr [0x100d7d80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x100d7d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbf8e push edi */
  push32((uint32_t)(EDI));
  /* 100cbf8f jae 0x100cbfe9 */
  if (!C.cf) goto L_100cbfe9;
  /* 100cbf91 mov eax, ecx */
  EAX = (ECX);
  /* 100cbf93 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100cbf96 lea edi, [eax*4 + 0x100d7c80] */
  EDI = ((uint32_t)(EAX*4 + 0x100d7c80));
  /* 100cbf9d mov eax, ecx */
  EAX = (ECX);
  /* 100cbf9f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100cbfa2 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 100cbfa5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100cbfa7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100cbfaa add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cbfac test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100cbfb0 je 0x100cbfe9 */
  if (C.zf) goto L_100cbfe9;
  /* 100cbfb2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbfb5 je 0x100cbfe9 */
  if (C.zf) goto L_100cbfe9;
  /* 100cbfb7 cmp dword ptr [0x100d6694], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100d6694))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cbfbe jne 0x100cbfdf */
  if (!C.zf) goto L_100cbfdf;
  /* 100cbfc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cbfc2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cbfc4 je 0x100cbfd6 */
  if (C.zf) goto L_100cbfd6;
  /* 100cbfc6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100cbfc7 je 0x100cbfd1 */
  if (C.zf) goto L_100cbfd1;
  /* 100cbfc9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100cbfca jne 0x100cbfdf */
  if (!C.zf) goto L_100cbfdf;
  /* 100cbfcc push eax */
  push32((uint32_t)(EAX));
  /* 100cbfcd push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 100cbfcf jmp 0x100cbfd9 */
  goto L_100cbfd9;
L_100cbfd1:;
  /* 100cbfd1 push eax */
  push32((uint32_t)(EAX));
  /* 100cbfd2 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 100cbfd4 jmp 0x100cbfd9 */
  goto L_100cbfd9;
L_100cbfd6:;
  /* 100cbfd6 push eax */
  push32((uint32_t)(EAX));
  /* 100cbfd7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_100cbfd9:;
  /* 100cbfd9 call dword ptr [0x100ce0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0b4))), 0x100cbfdfu);
L_100cbfdf:;
  /* 100cbfdf mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100cbfe1 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 100cbfe5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cbfe7 jmp 0x100cbfff */
  goto L_100cbfff;
L_100cbfe9:;
  /* 100cbfe9 call 0x100cbf71 */
  push32(0x100cbfeeu); f_100cbf71();
  /* 100cbfee mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100cbff4 call 0x100cbf7a */
  push32(0x100cbff9u); f_100cbf7a();
  /* 100cbff9 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100cbffc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100cbfff:;
  /* 100cbfff pop edi */
  EDI = (pop32());
  /* 100cc000 pop esi */
  ESI = (pop32());
  /* 100cc001 ret  */
  ESPCHK(0x100cbf83u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c002 @ 0x100cc002 (66 bytes, 19 insns) */
void f_100cc002(void) {
  FTRACE(0x100cc002u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cc002 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100cc006 cmp eax, dword ptr [0x100d7d80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x100d7d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc00c jae 0x100cc02d */
  if (!C.cf) goto L_100cc02d;
  /* 100cc00e mov ecx, eax */
  ECX = (EAX);
  /* 100cc010 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100cc013 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100cc016 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100cc019 mov ecx, dword ptr [ecx*4 + 0x100d7c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100d7c80)));
  /* 100cc020 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100cc025 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 100cc028 je 0x100cc02d */
  if (C.zf) goto L_100cc02d;
  /* 100cc02a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 100cc02c ret  */
  ESPCHK(0x100cc002u, _esp0);
  ESP += 4; return;
L_100cc02d:;
  /* 100cc02d call 0x100cbf71 */
  push32(0x100cc032u); f_100cbf71();
  /* 100cc032 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100cc038 call 0x100cbf7a */
  push32(0x100cc03du); f_100cbf7a();
  /* 100cc03d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100cc040 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100cc043 ret  */
  ESPCHK(0x100cc002u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c044 @ 0x100cc044 (95 bytes, 34 insns) */
void f_100cc044(void) {
  FTRACE(0x100cc044u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cc044 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100cc048 push ebx */
  push32((uint32_t)(EBX));
  /* 100cc049 mov ecx, eax */
  ECX = (EAX);
  /* 100cc04b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100cc04e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100cc051 push esi */
  push32((uint32_t)(ESI));
  /* 100cc052 push edi */
  push32((uint32_t)(EDI));
  /* 100cc053 mov esi, dword ptr [ecx*4 + 0x100d7c80] */
  ESI = (r32((uint32_t)(ECX*4 + 0x100d7c80)));
  /* 100cc05a lea ebx, [ecx*4 + 0x100d7c80] */
  EBX = ((uint32_t)(ECX*4 + 0x100d7c80));
  /* 100cc061 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 100cc064 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 100cc067 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cc069 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc06d jne 0x100cc092 */
  if (!C.zf) goto L_100cc092;
  /* 100cc06f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100cc071 call 0x100ca013 */
  push32(0x100cc076u); f_100ca013();
  /* 100cc076 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc07a pop ecx */
  ECX = (pop32());
  /* 100cc07b jne 0x100cc08a */
  if (!C.zf) goto L_100cc08a;
  /* 100cc07d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 100cc080 push eax */
  push32((uint32_t)(EAX));
  /* 100cc081 call dword ptr [0x100ce094] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce094))), 0x100cc087u);
  /* 100cc087 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_100cc08a:;
  /* 100cc08a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100cc08c call 0x100ca074 */
  push32(0x100cc091u); f_100ca074();
  /* 100cc091 pop ecx */
  ECX = (pop32());
L_100cc092:;
  /* 100cc092 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100cc094 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 100cc098 push eax */
  push32((uint32_t)(EAX));
  /* 100cc099 call dword ptr [0x100ce00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce00c))), 0x100cc09fu);
  /* 100cc09f pop edi */
  EDI = (pop32());
  /* 100cc0a0 pop esi */
  ESI = (pop32());
  /* 100cc0a1 pop ebx */
  EBX = (pop32());
  /* 100cc0a2 ret  */
  ESPCHK(0x100cc044u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a3 @ 0x100cc0a3 (34 bytes, 10 insns) */
void f_100cc0a3(void) {
  FTRACE(0x100cc0a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cc0a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100cc0a7 mov ecx, eax */
  ECX = (EAX);
  /* 100cc0a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100cc0ac sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100cc0af lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100cc0b2 mov ecx, dword ptr [ecx*4 + 0x100d7c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100d7c80)));
  /* 100cc0b9 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 100cc0bd push eax */
  push32((uint32_t)(EAX));
  /* 100cc0be call dword ptr [0x100ce008] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce008))), 0x100cc0c4u);
  /* 100cc0c4 ret  */
  ESPCHK(0x100cc0a3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c146 @ 0x100cc146 (46 bytes, 22 insns) */
void f_100cc146(void) {
  FTRACE(0x100cc146u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cc146 push esi */
  push32((uint32_t)(ESI));
  /* 100cc147 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100cc14b push esi */
  push32((uint32_t)(ESI));
  /* 100cc14c call 0x100cc174 */
  push32(0x100cc151u); f_100cc174();
  /* 100cc151 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cc153 pop ecx */
  ECX = (pop32());
  /* 100cc154 je 0x100cc15b */
  if (C.zf) goto L_100cc15b;
  /* 100cc156 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100cc159 pop esi */
  ESI = (pop32());
  /* 100cc15a ret  */
  ESPCHK(0x100cc146u, _esp0);
  ESP += 4; return;
L_100cc15b:;
  /* 100cc15b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 100cc15f je 0x100cc170 */
  if (C.zf) goto L_100cc170;
  /* 100cc161 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100cc164 call 0x100cd2c0 */
  push32(0x100cc169u); f_100cd2c0();
  /* 100cc169 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100cc16b pop ecx */
  ECX = (pop32());
  /* 100cc16c pop esi */
  ESI = (pop32());
  /* 100cc16d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cc16f ret  */
  ESPCHK(0x100cc146u, _esp0);
  ESP += 4; return;
L_100cc170:;
  /* 100cc170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cc172 pop esi */
  ESI = (pop32());
  /* 100cc173 ret  */
  ESPCHK(0x100cc146u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c174 @ 0x100cc174 (92 bytes, 40 insns) */
void f_100cc174(void) {
  FTRACE(0x100cc174u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cc174 push ebx */
  push32((uint32_t)(EBX));
  /* 100cc175 push esi */
  push32((uint32_t)(ESI));
  /* 100cc176 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 100cc17a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100cc17c push edi */
  push32((uint32_t)(EDI));
  /* 100cc17d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100cc180 mov ecx, eax */
  ECX = (EAX);
  /* 100cc182 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100cc185 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc188 jne 0x100cc1c1 */
  if (!C.zf) goto L_100cc1c1;
  /* 100cc18a test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 100cc18e je 0x100cc1c1 */
  if (C.zf) goto L_100cc1c1;
  /* 100cc190 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100cc193 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 100cc195 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cc197 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100cc199 jle 0x100cc1c1 */
  if ((C.zf||C.sf!=C.of)) goto L_100cc1c1;
  /* 100cc19b push edi */
  push32((uint32_t)(EDI));
  /* 100cc19c push eax */
  push32((uint32_t)(EAX));
  /* 100cc19d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100cc1a0 call 0x100c8c75 */
  push32(0x100cc1a5u); f_100c8c75();
  /* 100cc1a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cc1a8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc1aa jne 0x100cc1ba */
  if (!C.zf) goto L_100cc1ba;
  /* 100cc1ac mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100cc1af test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 100cc1b1 je 0x100cc1c1 */
  if (C.zf) goto L_100cc1c1;
  /* 100cc1b3 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 100cc1b5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 100cc1b8 jmp 0x100cc1c1 */
  goto L_100cc1c1;
L_100cc1ba:;
  /* 100cc1ba or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100cc1be or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_100cc1c1:;
  /* 100cc1c1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100cc1c4 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100cc1c8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100cc1ca pop edi */
  EDI = (pop32());
  /* 100cc1cb mov eax, ebx */
  EAX = (EBX);
  /* 100cc1cd pop esi */
  ESI = (pop32());
  /* 100cc1ce pop ebx */
  EBX = (pop32());
  /* 100cc1cf ret  */
  ESPCHK(0x100cc174u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1d9 @ 0x100cc1d9 (164 bytes, 66 insns) */
void f_100cc1d9(void) {
  FTRACE(0x100cc1d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cc1d9 push ebx */
  push32((uint32_t)(EBX));
  /* 100cc1da push esi */
  push32((uint32_t)(ESI));
  /* 100cc1db push edi */
  push32((uint32_t)(EDI));
  /* 100cc1dc push 2 */
  push32((uint32_t)(0x2u));
  /* 100cc1de xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100cc1e0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100cc1e2 call 0x100ca013 */
  push32(0x100cc1e7u); f_100ca013();
  /* 100cc1e7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100cc1e9 pop ecx */
  ECX = (pop32());
  /* 100cc1ea cmp dword ptr [0x100d7c60], esi */
  { uint32_t _a=(r32((uint32_t)(0x100d7c60))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc1f0 jle 0x100cc266 */
  if ((C.zf||C.sf!=C.of)) goto L_100cc266;
L_100cc1f2:;
  /* 100cc1f2 mov eax, dword ptr [0x100d6c48] */
  EAX = (r32((uint32_t)(0x100d6c48)));
  /* 100cc1f7 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 100cc1fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cc1fc je 0x100cc25d */
  if (C.zf) goto L_100cc25d;
  /* 100cc1fe test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 100cc202 je 0x100cc25d */
  if (C.zf) goto L_100cc25d;
  /* 100cc204 push eax */
  push32((uint32_t)(EAX));
  /* 100cc205 push esi */
  push32((uint32_t)(ESI));
  /* 100cc206 call 0x100c8fbd */
  push32(0x100cc20bu); f_100c8fbd();
  /* 100cc20b mov eax, dword ptr [0x100d6c48] */
  EAX = (r32((uint32_t)(0x100d6c48)));
  /* 100cc210 pop ecx */
  ECX = (pop32());
  /* 100cc211 pop ecx */
  ECX = (pop32());
  /* 100cc212 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 100cc215 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 100cc218 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 100cc21b je 0x100cc24d */
  if (C.zf) goto L_100cc24d;
  /* 100cc21d cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc222 jne 0x100cc233 */
  if (!C.zf) goto L_100cc233;
  /* 100cc224 push eax */
  push32((uint32_t)(EAX));
  /* 100cc225 call 0x100cc146 */
  push32(0x100cc22au); f_100cc146();
  /* 100cc22a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc22d pop ecx */
  ECX = (pop32());
  /* 100cc22e je 0x100cc24d */
  if (C.zf) goto L_100cc24d;
  /* 100cc230 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100cc231 jmp 0x100cc24d */
  goto L_100cc24d;
L_100cc233:;
  /* 100cc233 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc238 jne 0x100cc24d */
  if (!C.zf) goto L_100cc24d;
  /* 100cc23a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 100cc23d je 0x100cc24d */
  if (C.zf) goto L_100cc24d;
  /* 100cc23f push eax */
  push32((uint32_t)(EAX));
  /* 100cc240 call 0x100cc146 */
  push32(0x100cc245u); f_100cc146();
  /* 100cc245 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc248 pop ecx */
  ECX = (pop32());
  /* 100cc249 jne 0x100cc24d */
  if (!C.zf) goto L_100cc24d;
  /* 100cc24b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_100cc24d:;
  /* 100cc24d mov eax, dword ptr [0x100d6c48] */
  EAX = (r32((uint32_t)(0x100d6c48)));
  /* 100cc252 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 100cc255 push esi */
  push32((uint32_t)(ESI));
  /* 100cc256 call 0x100c900f */
  push32(0x100cc25bu); f_100c900f();
  /* 100cc25b pop ecx */
  ECX = (pop32());
  /* 100cc25c pop ecx */
  ECX = (pop32());
L_100cc25d:;
  /* 100cc25d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cc25e cmp esi, dword ptr [0x100d7c60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100d7c60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc264 jl 0x100cc1f2 */
  if ((C.sf!=C.of)) goto L_100cc1f2;
L_100cc266:;
  /* 100cc266 push 2 */
  push32((uint32_t)(0x2u));
  /* 100cc268 call 0x100ca074 */
  push32(0x100cc26du); f_100ca074();
  /* 100cc26d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc272 pop ecx */
  ECX = (pop32());
  /* 100cc273 mov eax, ebx */
  EAX = (EBX);
  /* 100cc275 je 0x100cc279 */
  if (C.zf) goto L_100cc279;
  /* 100cc277 mov eax, edi */
  EAX = (EDI);
L_100cc279:;
  /* 100cc279 pop edi */
  EDI = (pop32());
  /* 100cc27a pop esi */
  ESI = (pop32());
  /* 100cc27b pop ebx */
  EBX = (pop32());
  /* 100cc27c ret  */
  ESPCHK(0x100cc1d9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c27d @ 0x100cc27d (318 bytes, 123 insns) */
void f_100cc27d(void) {
  FTRACE(0x100cc27du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cc27d push ebp */
  push32((uint32_t)(EBP));
  /* 100cc27e mov ebp, esp */
  EBP = (ESP);
  /* 100cc280 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100cc282 push 0x100ce560 */
  push32((uint32_t)(0x100ce560u));
  /* 100cc287 push 0x100cd030 */
  push32((uint32_t)(0x100cd030u));
  /* 100cc28c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100cc292 push eax */
  push32((uint32_t)(EAX));
  /* 100cc293 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100cc29a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cc29d push ebx */
  push32((uint32_t)(EBX));
  /* 100cc29e push esi */
  push32((uint32_t)(ESI));
  /* 100cc29f push edi */
  push32((uint32_t)(EDI));
  /* 100cc2a0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100cc2a3 mov eax, dword ptr [0x100d68a4] */
  EAX = (r32((uint32_t)(0x100d68a4)));
  /* 100cc2a8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100cc2aa cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc2ac jne 0x100cc2ec */
  if (!C.zf) goto L_100cc2ec;
  /* 100cc2ae lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 100cc2b1 push eax */
  push32((uint32_t)(EAX));
  /* 100cc2b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100cc2b4 pop esi */
  ESI = (pop32());
  /* 100cc2b5 push esi */
  push32((uint32_t)(ESI));
  /* 100cc2b6 push 0x100ce558 */
  push32((uint32_t)(0x100ce558u));
  /* 100cc2bb push esi */
  push32((uint32_t)(ESI));
  /* 100cc2bc call dword ptr [0x100ce0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0c0))), 0x100cc2c2u);
  /* 100cc2c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cc2c4 je 0x100cc2ca */
  if (C.zf) goto L_100cc2ca;
  /* 100cc2c6 mov eax, esi */
  EAX = (ESI);
  /* 100cc2c8 jmp 0x100cc2e7 */
  goto L_100cc2e7;
L_100cc2ca:;
  /* 100cc2ca lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 100cc2cd push eax */
  push32((uint32_t)(EAX));
  /* 100cc2ce push esi */
  push32((uint32_t)(ESI));
  /* 100cc2cf push 0x100ce554 */
  push32((uint32_t)(0x100ce554u));
  /* 100cc2d4 push esi */
  push32((uint32_t)(ESI));
  /* 100cc2d5 push ebx */
  push32((uint32_t)(EBX));
  /* 100cc2d6 call dword ptr [0x100ce0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0bc))), 0x100cc2dcu);
  /* 100cc2dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cc2de je 0x100cc3b2 */
  if (C.zf) goto L_100cc3b2;
  /* 100cc2e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100cc2e6 pop eax */
  EAX = (pop32());
L_100cc2e7:;
  /* 100cc2e7 mov dword ptr [0x100d68a4], eax */
  w32((uint32_t)(0x100d68a4), (EAX));
L_100cc2ec:;
  /* 100cc2ec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc2ef jne 0x100cc315 */
  if (!C.zf) goto L_100cc315;
  /* 100cc2f1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 100cc2f4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc2f6 jne 0x100cc2fd */
  if (!C.zf) goto L_100cc2fd;
  /* 100cc2f8 mov eax, dword ptr [0x100d6878] */
  EAX = (r32((uint32_t)(0x100d6878)));
L_100cc2fd:;
  /* 100cc2fd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100cc300 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100cc303 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100cc306 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100cc309 push eax */
  push32((uint32_t)(EAX));
  /* 100cc30a call dword ptr [0x100ce0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0bc))), 0x100cc310u);
  /* 100cc310 jmp 0x100cc3b4 */
  goto L_100cc3b4;
L_100cc315:;
  /* 100cc315 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc318 jne 0x100cc3b2 */
  if (!C.zf) goto L_100cc3b2;
  /* 100cc31e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc321 jne 0x100cc32b */
  if (!C.zf) goto L_100cc32b;
  /* 100cc323 mov eax, dword ptr [0x100d6888] */
  EAX = (r32((uint32_t)(0x100d6888)));
  /* 100cc328 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_100cc32b:;
  /* 100cc32b push ebx */
  push32((uint32_t)(EBX));
  /* 100cc32c push ebx */
  push32((uint32_t)(EBX));
  /* 100cc32d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100cc330 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100cc333 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 100cc336 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100cc338 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cc33a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 100cc33d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100cc33e push eax */
  push32((uint32_t)(EAX));
  /* 100cc33f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100cc342 call dword ptr [0x100ce0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0b8))), 0x100cc348u);
  /* 100cc348 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100cc34b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc34d je 0x100cc3b2 */
  if (C.zf) goto L_100cc3b2;
  /* 100cc34f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 100cc352 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 100cc355 mov eax, edi */
  EAX = (EDI);
  /* 100cc357 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cc35a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 100cc35c call 0x100caed0 */
  push32(0x100cc361u); f_100caed0();
  /* 100cc361 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100cc364 mov esi, esp */
  ESI = (ESP);
  /* 100cc366 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 100cc369 push edi */
  push32((uint32_t)(EDI));
  /* 100cc36a push ebx */
  push32((uint32_t)(EBX));
  /* 100cc36b push esi */
  push32((uint32_t)(ESI));
  /* 100cc36c call 0x100c9be0 */
  push32(0x100cc371u); f_100c9be0();
  /* 100cc371 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cc374 jmp 0x100cc381 */
  goto L_100cc381;
  /* 100cc376 push 1 */
  push32((uint32_t)(0x1u));
  /* 100cc378 pop eax */
  EAX = (pop32());
  /* 100cc379 ret  */
  ESPCHK(0x100cc27du, _esp0);
  ESP += 4; return;
  /* 100cc37a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 100cc37d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100cc37f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100cc381:;
  /* 100cc381 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100cc385 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc387 je 0x100cc3b2 */
  if (C.zf) goto L_100cc3b2;
  /* 100cc389 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 100cc38c push esi */
  push32((uint32_t)(ESI));
  /* 100cc38d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100cc390 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100cc393 push 1 */
  push32((uint32_t)(0x1u));
  /* 100cc395 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100cc398 call dword ptr [0x100ce0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0b8))), 0x100cc39eu);
  /* 100cc39e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc3a0 je 0x100cc3b2 */
  if (C.zf) goto L_100cc3b2;
  /* 100cc3a2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100cc3a5 push eax */
  push32((uint32_t)(EAX));
  /* 100cc3a6 push esi */
  push32((uint32_t)(ESI));
  /* 100cc3a7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100cc3aa call dword ptr [0x100ce0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0c0))), 0x100cc3b0u);
  /* 100cc3b0 jmp 0x100cc3b4 */
  goto L_100cc3b4;
L_100cc3b2:;
  /* 100cc3b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100cc3b4:;
  /* 100cc3b4 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 100cc3b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100cc3ba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 100cc3c1 pop edi */
  EDI = (pop32());
  /* 100cc3c2 pop esi */
  ESI = (pop32());
  /* 100cc3c3 pop ebx */
  EBX = (pop32());
  /* 100cc3c4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cc3c5 ret  */
  ESPCHK(0x100cc27du, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3c6 @ 0x100cc3c6 (511 bytes, 193 insns) */
void f_100cc3c6(void) {
  FTRACE(0x100cc3c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cc3c6 push ebp */
  push32((uint32_t)(EBP));
  /* 100cc3c7 mov ebp, esp */
  EBP = (ESP);
  /* 100cc3c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100cc3cb push 0x100ce570 */
  push32((uint32_t)(0x100ce570u));
  /* 100cc3d0 push 0x100cd030 */
  push32((uint32_t)(0x100cd030u));
  /* 100cc3d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100cc3db push eax */
  push32((uint32_t)(EAX));
  /* 100cc3dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100cc3e3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cc3e6 push ebx */
  push32((uint32_t)(EBX));
  /* 100cc3e7 push esi */
  push32((uint32_t)(ESI));
  /* 100cc3e8 push edi */
  push32((uint32_t)(EDI));
  /* 100cc3e9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100cc3ec xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100cc3ee cmp dword ptr [0x100d68a8], edi */
  { uint32_t _a=(r32((uint32_t)(0x100d68a8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc3f4 jne 0x100cc43c */
  if (!C.zf) goto L_100cc43c;
  /* 100cc3f6 push edi */
  push32((uint32_t)(EDI));
  /* 100cc3f7 push edi */
  push32((uint32_t)(EDI));
  /* 100cc3f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100cc3fa pop ebx */
  EBX = (pop32());
  /* 100cc3fb push ebx */
  push32((uint32_t)(EBX));
  /* 100cc3fc push 0x100ce558 */
  push32((uint32_t)(0x100ce558u));
  /* 100cc401 mov esi, 0x100 */
  ESI = (0x100u);
  /* 100cc406 push esi */
  push32((uint32_t)(ESI));
  /* 100cc407 push edi */
  push32((uint32_t)(EDI));
  /* 100cc408 call dword ptr [0x100ce0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0c8))), 0x100cc40eu);
  /* 100cc40e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cc410 je 0x100cc41a */
  if (C.zf) goto L_100cc41a;
  /* 100cc412 mov dword ptr [0x100d68a8], ebx */
  w32((uint32_t)(0x100d68a8), (EBX));
  /* 100cc418 jmp 0x100cc43c */
  goto L_100cc43c;
L_100cc41a:;
  /* 100cc41a push edi */
  push32((uint32_t)(EDI));
  /* 100cc41b push edi */
  push32((uint32_t)(EDI));
  /* 100cc41c push ebx */
  push32((uint32_t)(EBX));
  /* 100cc41d push 0x100ce554 */
  push32((uint32_t)(0x100ce554u));
  /* 100cc422 push esi */
  push32((uint32_t)(ESI));
  /* 100cc423 push edi */
  push32((uint32_t)(EDI));
  /* 100cc424 call dword ptr [0x100ce0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0c4))), 0x100cc42au);
  /* 100cc42a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cc42c je 0x100cc554 */
  if (C.zf) goto L_100cc554;
  /* 100cc432 mov dword ptr [0x100d68a8], 2 */
  w32((uint32_t)(0x100d68a8), (0x2u));
L_100cc43c:;
  /* 100cc43c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc43f jle 0x100cc451 */
  if ((C.zf||C.sf!=C.of)) goto L_100cc451;
  /* 100cc441 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100cc444 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100cc447 call 0x100cc5ea */
  push32(0x100cc44cu); f_100cc5ea();
  /* 100cc44c pop ecx */
  ECX = (pop32());
  /* 100cc44d pop ecx */
  ECX = (pop32());
  /* 100cc44e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_100cc451:;
  /* 100cc451 mov eax, dword ptr [0x100d68a8] */
  EAX = (r32((uint32_t)(0x100d68a8)));
  /* 100cc456 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc459 jne 0x100cc478 */
  if (!C.zf) goto L_100cc478;
  /* 100cc45b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 100cc45e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100cc461 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100cc464 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100cc467 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100cc46a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100cc46d call dword ptr [0x100ce0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0c4))), 0x100cc473u);
  /* 100cc473 jmp 0x100cc556 */
  goto L_100cc556;
L_100cc478:;
  /* 100cc478 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc47b jne 0x100cc554 */
  if (!C.zf) goto L_100cc554;
  /* 100cc481 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc484 jne 0x100cc48e */
  if (!C.zf) goto L_100cc48e;
  /* 100cc486 mov eax, dword ptr [0x100d6888] */
  EAX = (r32((uint32_t)(0x100d6888)));
  /* 100cc48b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_100cc48e:;
  /* 100cc48e push edi */
  push32((uint32_t)(EDI));
  /* 100cc48f push edi */
  push32((uint32_t)(EDI));
  /* 100cc490 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100cc493 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100cc496 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 100cc499 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100cc49b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cc49d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 100cc4a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100cc4a1 push eax */
  push32((uint32_t)(EAX));
  /* 100cc4a2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 100cc4a5 call dword ptr [0x100ce0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0b8))), 0x100cc4abu);
  /* 100cc4ab mov ebx, eax */
  EBX = (EAX);
  /* 100cc4ad mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 100cc4b0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc4b2 je 0x100cc554 */
  if (C.zf) goto L_100cc554;
  /* 100cc4b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 100cc4bb lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 100cc4be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cc4c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 100cc4c3 call 0x100caed0 */
  push32(0x100cc4c8u); f_100caed0();
  /* 100cc4c8 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100cc4cb mov eax, esp */
  EAX = (ESP);
  /* 100cc4cd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 100cc4d0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100cc4d4 jmp 0x100cc4e9 */
  goto L_100cc4e9;
  /* 100cc4d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100cc4d8 pop eax */
  EAX = (pop32());
  /* 100cc4d9 ret  */
  ESPCHK(0x100cc3c6u, _esp0);
  ESP += 4; return;
  /* 100cc4da mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 100cc4dd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100cc4df mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 100cc4e2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100cc4e6 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_100cc4e9:;
  /* 100cc4e9 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc4ec je 0x100cc554 */
  if (C.zf) goto L_100cc554;
  /* 100cc4ee push ebx */
  push32((uint32_t)(EBX));
  /* 100cc4ef push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 100cc4f2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100cc4f5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100cc4f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100cc4fa push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 100cc4fd call dword ptr [0x100ce0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0b8))), 0x100cc503u);
  /* 100cc503 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cc505 je 0x100cc554 */
  if (C.zf) goto L_100cc554;
  /* 100cc507 push edi */
  push32((uint32_t)(EDI));
  /* 100cc508 push edi */
  push32((uint32_t)(EDI));
  /* 100cc509 push ebx */
  push32((uint32_t)(EBX));
  /* 100cc50a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 100cc50d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100cc510 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100cc513 call dword ptr [0x100ce0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0c8))), 0x100cc519u);
  /* 100cc519 mov esi, eax */
  ESI = (EAX);
  /* 100cc51b mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 100cc51e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc520 je 0x100cc554 */
  if (C.zf) goto L_100cc554;
  /* 100cc522 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 100cc526 je 0x100cc568 */
  if (C.zf) goto L_100cc568;
  /* 100cc528 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc52b je 0x100cc5e3 */
  if (C.zf) goto L_100cc5e3;
  /* 100cc531 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc534 jg 0x100cc554 */
  if ((!C.zf&&C.sf==C.of)) goto L_100cc554;
  /* 100cc536 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 100cc539 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100cc53c push ebx */
  push32((uint32_t)(EBX));
  /* 100cc53d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 100cc540 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100cc543 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100cc546 call dword ptr [0x100ce0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0c8))), 0x100cc54cu);
  /* 100cc54c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cc54e jne 0x100cc5e3 */
  if (!C.zf) goto L_100cc5e3;
L_100cc554:;
  /* 100cc554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100cc556:;
  /* 100cc556 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 100cc559 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100cc55c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 100cc563 pop edi */
  EDI = (pop32());
  /* 100cc564 pop esi */
  ESI = (pop32());
  /* 100cc565 pop ebx */
  EBX = (pop32());
  /* 100cc566 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cc567 ret  */
  ESPCHK(0x100cc3c6u, _esp0);
  ESP += 4; return;
L_100cc568:;
  /* 100cc568 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 100cc56f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 100cc572 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cc575 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 100cc577 call 0x100caed0 */
  push32(0x100cc57cu); f_100caed0();
  /* 100cc57c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100cc57f mov ebx, esp */
  EBX = (ESP);
  /* 100cc581 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 100cc584 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100cc588 jmp 0x100cc59c */
  goto L_100cc59c;
  /* 100cc58a push 1 */
  push32((uint32_t)(0x1u));
  /* 100cc58c pop eax */
  EAX = (pop32());
  /* 100cc58d ret  */
  ESPCHK(0x100cc3c6u, _esp0);
  ESP += 4; return;
  /* 100cc58e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 100cc591 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100cc593 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100cc595 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100cc599 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_100cc59c:;
  /* 100cc59c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc59e je 0x100cc554 */
  if (C.zf) goto L_100cc554;
  /* 100cc5a0 push esi */
  push32((uint32_t)(ESI));
  /* 100cc5a1 push ebx */
  push32((uint32_t)(EBX));
  /* 100cc5a2 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 100cc5a5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 100cc5a8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100cc5ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100cc5ae call dword ptr [0x100ce0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0c8))), 0x100cc5b4u);
  /* 100cc5b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cc5b6 je 0x100cc554 */
  if (C.zf) goto L_100cc554;
  /* 100cc5b8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc5bb push edi */
  push32((uint32_t)(EDI));
  /* 100cc5bc push edi */
  push32((uint32_t)(EDI));
  /* 100cc5bd jne 0x100cc5c3 */
  if (!C.zf) goto L_100cc5c3;
  /* 100cc5bf push edi */
  push32((uint32_t)(EDI));
  /* 100cc5c0 push edi */
  push32((uint32_t)(EDI));
  /* 100cc5c1 jmp 0x100cc5c9 */
  goto L_100cc5c9;
L_100cc5c3:;
  /* 100cc5c3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 100cc5c6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_100cc5c9:;
  /* 100cc5c9 push esi */
  push32((uint32_t)(ESI));
  /* 100cc5ca push ebx */
  push32((uint32_t)(EBX));
  /* 100cc5cb push 0x220 */
  push32((uint32_t)(0x220u));
  /* 100cc5d0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 100cc5d3 call dword ptr [0x100ce060] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce060))), 0x100cc5d9u);
  /* 100cc5d9 mov esi, eax */
  ESI = (EAX);
  /* 100cc5db cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc5dd je 0x100cc554 */
  if (C.zf) goto L_100cc554;
L_100cc5e3:;
  /* 100cc5e3 mov eax, esi */
  EAX = (ESI);
  /* 100cc5e5 jmp 0x100cc556 */
  goto L_100cc556;
}

/* FUN_1000c5ea @ 0x100cc5ea (43 bytes, 20 insns) */
void f_100cc5ea(void) {
  FTRACE(0x100cc5eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cc5ea mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100cc5ee mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100cc5f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100cc5f4 push esi */
  push32((uint32_t)(ESI));
  /* 100cc5f5 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 100cc5f8 je 0x100cc607 */
  if (C.zf) goto L_100cc607;
L_100cc5fa:;
  /* 100cc5fa cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc5fd je 0x100cc607 */
  if (C.zf) goto L_100cc607;
  /* 100cc5ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100cc600 mov esi, ecx */
  ESI = (ECX);
  /* 100cc602 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100cc603 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100cc605 jne 0x100cc5fa */
  if (!C.zf) goto L_100cc5fa;
L_100cc607:;
  /* 100cc607 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc60a pop esi */
  ESI = (pop32());
  /* 100cc60b jne 0x100cc612 */
  if (!C.zf) goto L_100cc612;
  /* 100cc60d sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cc611 ret  */
  ESPCHK(0x100cc5eau, _esp0);
  ESP += 4; return;
L_100cc612:;
  /* 100cc612 mov eax, edx */
  EAX = (EDX);
  /* 100cc614 ret  */
  ESPCHK(0x100cc5eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000c615 @ 0x100cc615 (33 bytes, 15 insns) */
void f_100cc615(void) {
  FTRACE(0x100cc615u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cc615 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 100cc619 push esi */
  push32((uint32_t)(ESI));
  /* 100cc61a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 100cc61e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cc620 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 100cc623 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc625 jb 0x100cc62b */
  if (C.cf) goto L_100cc62b;
  /* 100cc627 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc629 jae 0x100cc62e */
  if (!C.cf) goto L_100cc62e;
L_100cc62b:;
  /* 100cc62b push 1 */
  push32((uint32_t)(0x1u));
  /* 100cc62d pop eax */
  EAX = (pop32());
L_100cc62e:;
  /* 100cc62e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 100cc632 pop esi */
  ESI = (pop32());
  /* 100cc633 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 100cc635 ret  */
  ESPCHK(0x100cc615u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x100cc636 (94 bytes, 38 insns) */
void f_100cc636(void) {
  FTRACE(0x100cc636u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cc636 push esi */
  push32((uint32_t)(ESI));
  /* 100cc637 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100cc63b push edi */
  push32((uint32_t)(EDI));
  /* 100cc63c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 100cc640 push esi */
  push32((uint32_t)(ESI));
  /* 100cc641 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 100cc643 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100cc645 call 0x100cc615 */
  push32(0x100cc64au); f_100cc615();
  /* 100cc64a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cc64d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cc64f je 0x100cc668 */
  if (C.zf) goto L_100cc668;
  /* 100cc651 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 100cc654 push eax */
  push32((uint32_t)(EAX));
  /* 100cc655 push 1 */
  push32((uint32_t)(0x1u));
  /* 100cc657 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 100cc659 call 0x100cc615 */
  push32(0x100cc65eu); f_100cc615();
  /* 100cc65e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cc661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cc663 je 0x100cc668 */
  if (C.zf) goto L_100cc668;
  /* 100cc665 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_100cc668:;
  /* 100cc668 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 100cc66b push eax */
  push32((uint32_t)(EAX));
  /* 100cc66c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 100cc66f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 100cc671 call 0x100cc615 */
  push32(0x100cc676u); f_100cc615();
  /* 100cc676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cc679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cc67b je 0x100cc680 */
  if (C.zf) goto L_100cc680;
  /* 100cc67d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_100cc680:;
  /* 100cc680 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 100cc683 push eax */
  push32((uint32_t)(EAX));
  /* 100cc684 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 100cc687 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 100cc689 call 0x100cc615 */
  push32(0x100cc68eu); f_100cc615();
  /* 100cc68e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cc691 pop edi */
  EDI = (pop32());
  /* 100cc692 pop esi */
  ESI = (pop32());
  /* 100cc693 ret  */
  ESPCHK(0x100cc636u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c694 @ 0x100cc694 (46 bytes, 21 insns) */
void f_100cc694(void) {
  FTRACE(0x100cc694u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cc694 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100cc698 push esi */
  push32((uint32_t)(ESI));
  /* 100cc699 push edi */
  push32((uint32_t)(EDI));
  /* 100cc69a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 100cc69c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 100cc69f mov ecx, esi */
  ECX = (ESI);
  /* 100cc6a1 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cc6a3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 100cc6a5 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 100cc6a8 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 100cc6ab or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 100cc6ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 100cc6b0 mov edx, edi */
  EDX = (EDI);
  /* 100cc6b2 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 100cc6b5 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 100cc6b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100cc6ba or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 100cc6bc pop edi */
  EDI = (pop32());
  /* 100cc6bd mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 100cc6c0 pop esi */
  ESI = (pop32());
  /* 100cc6c1 ret  */
  ESPCHK(0x100cc694u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6c2 @ 0x100cc6c2 (45 bytes, 21 insns) */
void f_100cc6c2(void) {
  FTRACE(0x100cc6c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cc6c2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100cc6c6 push esi */
  push32((uint32_t)(ESI));
  /* 100cc6c7 push edi */
  push32((uint32_t)(EDI));
  /* 100cc6c8 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 100cc6cb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 100cc6ce mov esi, edx */
  ESI = (EDX);
  /* 100cc6d0 mov edi, ecx */
  EDI = (ECX);
  /* 100cc6d2 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 100cc6d5 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100cc6d7 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 100cc6d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100cc6dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100cc6de shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 100cc6e1 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100cc6e3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 100cc6e5 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100cc6e7 pop edi */
  EDI = (pop32());
  /* 100cc6e8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 100cc6eb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100cc6ed pop esi */
  ESI = (pop32());
  /* 100cc6ee ret  */
  ESPCHK(0x100cc6c2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6ef @ 0x100cc6ef (199 bytes, 76 insns) */
void f_100cc6ef(void) {
  FTRACE(0x100cc6efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cc6ef push ebp */
  push32((uint32_t)(EBP));
  /* 100cc6f0 mov ebp, esp */
  EBP = (ESP);
  /* 100cc6f2 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cc6f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100cc6f8 push ebx */
  push32((uint32_t)(EBX));
  /* 100cc6f9 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 100cc6fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100cc6fe cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc700 push esi */
  push32((uint32_t)(ESI));
  /* 100cc701 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 100cc708 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 100cc70a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 100cc70d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 100cc710 jbe 0x100cc763 */
  if ((C.cf||C.zf)) goto L_100cc763;
  /* 100cc712 push edi */
  push32((uint32_t)(EDI));
  /* 100cc713 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_100cc716:;
  /* 100cc716 mov esi, ebx */
  ESI = (EBX);
  /* 100cc718 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 100cc71b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100cc71c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100cc71d push ebx */
  push32((uint32_t)(EBX));
  /* 100cc71e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100cc71f call 0x100cc694 */
  push32(0x100cc724u); f_100cc694();
  /* 100cc724 push ebx */
  push32((uint32_t)(EBX));
  /* 100cc725 call 0x100cc694 */
  push32(0x100cc72au); f_100cc694();
  /* 100cc72a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100cc72d push eax */
  push32((uint32_t)(EAX));
  /* 100cc72e push ebx */
  push32((uint32_t)(EBX));
  /* 100cc72f call 0x100cc636 */
  push32(0x100cc734u); f_100cc636();
  /* 100cc734 push ebx */
  push32((uint32_t)(EBX));
  /* 100cc735 call 0x100cc694 */
  push32(0x100cc73au); f_100cc694();
  /* 100cc73a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cc73d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 100cc741 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 100cc745 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 100cc748 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100cc74b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100cc74e push eax */
  push32((uint32_t)(EAX));
  /* 100cc74f push ebx */
  push32((uint32_t)(EBX));
  /* 100cc750 call 0x100cc636 */
  push32(0x100cc755u); f_100cc636();
  /* 100cc755 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cc758 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 100cc75b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 100cc75e jne 0x100cc716 */
  if (!C.zf) goto L_100cc716;
  /* 100cc760 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100cc762 pop edi */
  EDI = (pop32());
L_100cc763:;
  /* 100cc763 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc766 jne 0x100cc790 */
  if (!C.zf) goto L_100cc790;
  /* 100cc768 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 100cc76b mov eax, ecx */
  EAX = (ECX);
  /* 100cc76d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100cc770 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 100cc773 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100cc775 mov esi, eax */
  ESI = (EAX);
  /* 100cc777 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 100cc77a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 100cc77d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 100cc77f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100cc782 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100cc789 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 100cc78c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 100cc78e jmp 0x100cc763 */
  goto L_100cc763;
L_100cc790:;
  /* 100cc790 mov esi, 0x8000 */
  ESI = (0x8000u);
L_100cc795:;
  /* 100cc795 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 100cc798 jne 0x100cc7aa */
  if (!C.zf) goto L_100cc7aa;
  /* 100cc79a push ebx */
  push32((uint32_t)(EBX));
  /* 100cc79b call 0x100cc694 */
  push32(0x100cc7a0u); f_100cc694();
  /* 100cc7a0 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100cc7a7 pop ecx */
  ECX = (pop32());
  /* 100cc7a8 jmp 0x100cc795 */
  goto L_100cc795;
L_100cc7aa:;
  /* 100cc7aa mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 100cc7ae pop esi */
  ESI = (pop32());
  /* 100cc7af mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 100cc7b3 pop ebx */
  EBX = (pop32());
  /* 100cc7b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cc7b5 ret  */
  ESPCHK(0x100cc6efu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7b6 @ 0x100cc7b6 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_100cc7b6(void) {
  FTRACE(0x100cc7b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cc7b6 push ebp */
  push32((uint32_t)(EBP));
  /* 100cc7b7 mov ebp, esp */
  EBP = (ESP);
  /* 100cc7b9 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cc7bc push ebx */
  push32((uint32_t)(EBX));
  /* 100cc7bd push esi */
  push32((uint32_t)(ESI));
  /* 100cc7be push edi */
  push32((uint32_t)(EDI));
  /* 100cc7bf mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 100cc7c2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 100cc7c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100cc7c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100cc7ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cc7cc pop edx */
  EDX = (pop32());
  /* 100cc7cd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 100cc7d0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 100cc7d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100cc7d6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100cc7d9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 100cc7dc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100cc7df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 100cc7e2 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 100cc7e5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 100cc7e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100cc7eb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 100cc7ee mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_100cc7f1:;
  /* 100cc7f1 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 100cc7f3 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc7f6 je 0x100cc807 */
  if (C.zf) goto L_100cc807;
  /* 100cc7f8 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc7fb je 0x100cc807 */
  if (C.zf) goto L_100cc807;
  /* 100cc7fd cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc800 je 0x100cc807 */
  if (C.zf) goto L_100cc807;
  /* 100cc802 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc805 jne 0x100cc80a */
  if (!C.zf) goto L_100cc80a;
L_100cc807:;
  /* 100cc807 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100cc808 jmp 0x100cc7f1 */
  goto L_100cc7f1;
L_100cc80a:;
  /* 100cc80a push 4 */
  push32((uint32_t)(0x4u));
  /* 100cc80c pop esi */
  ESI = (pop32());
L_100cc80d:;
  /* 100cc80d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100cc80f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100cc810 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc813 ja 0x100cca90 */
  if ((!C.cf&&!C.zf)) goto L_100cca90;
  /* 100cc819 jmp dword ptr [eax*4 + 0x100ccc57] */
  switch (EAX) {
    case 0: goto L_100cc820;
    case 1: goto L_100cc86f;
    case 2: goto L_100cc8c6;
    case 3: goto L_100cc8f0;
    case 4: goto L_100cc94b;
    case 5: goto L_100cc9c2;
    case 6: goto L_100cc9f8;
    case 7: goto L_100cca42;
    case 8: goto L_100cca21;
    case 9: goto L_100ccaa6;
    case 10: goto L_100cca90;
    case 11: goto L_100cca5c;
    default: x86_unimpl("switch@0x100cc819 out of table"); return;
  }
L_100cc820:;
  /* 100cc820 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc823 jl 0x100cc831 */
  if ((C.sf!=C.of)) goto L_100cc831;
  /* 100cc825 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc828 jg 0x100cc831 */
  if ((!C.zf&&C.sf==C.of)) goto L_100cc831;
L_100cc82a:;
  /* 100cc82a push 3 */
  push32((uint32_t)(0x3u));
  /* 100cc82c jmp 0x100cca4e */
  goto L_100cca4e;
L_100cc831:;
  /* 100cc831 cmp bl, byte ptr [0x100d0c24] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x100d0c24))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc837 jne 0x100cc840 */
  if (!C.zf) goto L_100cc840;
L_100cc839:;
  /* 100cc839 push 5 */
  push32((uint32_t)(0x5u));
  /* 100cc83b jmp 0x100cca86 */
  goto L_100cca86;
L_100cc840:;
  /* 100cc840 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100cc843 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cc846 je 0x100cc866 */
  if (C.zf) goto L_100cc866;
  /* 100cc848 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100cc849 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100cc84a je 0x100cc85a */
  if (C.zf) goto L_100cc85a;
  /* 100cc84c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cc84f jne 0x100ccb29 */
  if (!C.zf) goto L_100ccb29;
  /* 100cc855 jmp 0x100cc8e9 */
  goto L_100cc8e9;
L_100cc85a:;
  /* 100cc85a push 2 */
  push32((uint32_t)(0x2u));
  /* 100cc85c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 100cc863 pop eax */
  EAX = (pop32());
  /* 100cc864 jmp 0x100cc80d */
  goto L_100cc80d;
L_100cc866:;
  /* 100cc866 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 100cc86a push 2 */
  push32((uint32_t)(0x2u));
  /* 100cc86c pop eax */
  EAX = (pop32());
  /* 100cc86d jmp 0x100cc80d */
  goto L_100cc80d;
L_100cc86f:;
  /* 100cc86f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc872 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 100cc875 jl 0x100cc87c */
  if ((C.sf!=C.of)) goto L_100cc87c;
  /* 100cc877 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc87a jle 0x100cc82a */
  if ((C.zf||C.sf!=C.of)) goto L_100cc82a;
L_100cc87c:;
  /* 100cc87c cmp bl, byte ptr [0x100d0c24] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x100d0c24))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc882 je 0x100cc944 */
  if (C.zf) goto L_100cc944;
  /* 100cc888 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc88b je 0x100cc8be */
  if (C.zf) goto L_100cc8be;
  /* 100cc88d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc890 je 0x100cc8be */
  if (C.zf) goto L_100cc8be;
  /* 100cc892 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc895 je 0x100cc8e9 */
  if (C.zf) goto L_100cc8e9;
L_100cc897:;
  /* 100cc897 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc89a jle 0x100ccb29 */
  if ((C.zf||C.sf!=C.of)) goto L_100ccb29;
  /* 100cc8a0 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc8a3 jle 0x100cc8b7 */
  if ((C.zf||C.sf!=C.of)) goto L_100cc8b7;
  /* 100cc8a5 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc8a8 jle 0x100ccb29 */
  if ((C.zf||C.sf!=C.of)) goto L_100ccb29;
  /* 100cc8ae cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc8b1 jg 0x100ccb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ccb29;
L_100cc8b7:;
  /* 100cc8b7 push 6 */
  push32((uint32_t)(0x6u));
  /* 100cc8b9 jmp 0x100cca86 */
  goto L_100cca86;
L_100cc8be:;
  /* 100cc8be dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100cc8bf push 0xb */
  push32((uint32_t)(0xbu));
  /* 100cc8c1 jmp 0x100cca86 */
  goto L_100cca86;
L_100cc8c6:;
  /* 100cc8c6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc8c9 jl 0x100cc8d4 */
  if ((C.sf!=C.of)) goto L_100cc8d4;
  /* 100cc8cb cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc8ce jle 0x100cc82a */
  if ((C.zf||C.sf!=C.of)) goto L_100cc82a;
L_100cc8d4:;
  /* 100cc8d4 cmp bl, byte ptr [0x100d0c24] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x100d0c24))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc8da je 0x100cc839 */
  if (C.zf) goto L_100cc839;
  /* 100cc8e0 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc8e3 jne 0x100cca9e */
  if (!C.zf) goto L_100cca9e;
L_100cc8e9:;
  /* 100cc8e9 mov eax, edx */
  EAX = (EDX);
  /* 100cc8eb jmp 0x100cc80d */
  goto L_100cc80d;
L_100cc8f0:;
  /* 100cc8f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_100cc8f3:;
  /* 100cc8f3 cmp dword ptr [0x100d0c20], edx */
  { uint32_t _a=(r32((uint32_t)(0x100d0c20))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc8f9 jle 0x100cc90c */
  if ((C.zf||C.sf!=C.of)) goto L_100cc90c;
  /* 100cc8fb movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100cc8fe push esi */
  push32((uint32_t)(ESI));
  /* 100cc8ff push eax */
  push32((uint32_t)(EAX));
  /* 100cc900 call 0x100c93cb */
  push32(0x100cc905u); f_100c93cb();
  /* 100cc905 pop ecx */
  ECX = (pop32());
  /* 100cc906 pop ecx */
  ECX = (pop32());
  /* 100cc907 push 1 */
  push32((uint32_t)(0x1u));
  /* 100cc909 pop edx */
  EDX = (pop32());
  /* 100cc90a jmp 0x100cc91a */
  goto L_100cc91a;
L_100cc90c:;
  /* 100cc90c mov ecx, dword ptr [0x100d0a10] */
  ECX = (r32((uint32_t)(0x100d0a10)));
  /* 100cc912 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100cc915 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100cc918 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_100cc91a:;
  /* 100cc91a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cc91c je 0x100cc93c */
  if (C.zf) goto L_100cc93c;
  /* 100cc91e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc922 jae 0x100cc934 */
  if (!C.cf) goto L_100cc934;
  /* 100cc924 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100cc927 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100cc92a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100cc92d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 100cc930 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 100cc932 jmp 0x100cc937 */
  goto L_100cc937;
L_100cc934:;
  /* 100cc934 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_100cc937:;
  /* 100cc937 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100cc939 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100cc93a jmp 0x100cc8f3 */
  goto L_100cc8f3;
L_100cc93c:;
  /* 100cc93c cmp bl, byte ptr [0x100d0c24] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x100d0c24))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc942 jne 0x100cc9ab */
  if (!C.zf) goto L_100cc9ab;
L_100cc944:;
  /* 100cc944 mov eax, esi */
  EAX = (ESI);
  /* 100cc946 jmp 0x100cc80d */
  goto L_100cc80d;
L_100cc94b:;
  /* 100cc94b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc94f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 100cc952 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100cc955 jne 0x100cc964 */
  if (!C.zf) goto L_100cc964;
L_100cc957:;
  /* 100cc957 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc95a jne 0x100cc964 */
  if (!C.zf) goto L_100cc964;
  /* 100cc95c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100cc95f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100cc961 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100cc962 jmp 0x100cc957 */
  goto L_100cc957;
L_100cc964:;
  /* 100cc964 cmp dword ptr [0x100d0c20], edx */
  { uint32_t _a=(r32((uint32_t)(0x100d0c20))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc96a jle 0x100cc97d */
  if ((C.zf||C.sf!=C.of)) goto L_100cc97d;
  /* 100cc96c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100cc96f push esi */
  push32((uint32_t)(ESI));
  /* 100cc970 push eax */
  push32((uint32_t)(EAX));
  /* 100cc971 call 0x100c93cb */
  push32(0x100cc976u); f_100c93cb();
  /* 100cc976 pop ecx */
  ECX = (pop32());
  /* 100cc977 pop ecx */
  ECX = (pop32());
  /* 100cc978 push 1 */
  push32((uint32_t)(0x1u));
  /* 100cc97a pop edx */
  EDX = (pop32());
  /* 100cc97b jmp 0x100cc98b */
  goto L_100cc98b;
L_100cc97d:;
  /* 100cc97d mov ecx, dword ptr [0x100d0a10] */
  ECX = (r32((uint32_t)(0x100d0a10)));
  /* 100cc983 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100cc986 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100cc989 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_100cc98b:;
  /* 100cc98b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cc98d je 0x100cc9ab */
  if (C.zf) goto L_100cc9ab;
  /* 100cc98f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc993 jae 0x100cc9a6 */
  if (!C.cf) goto L_100cc9a6;
  /* 100cc995 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100cc998 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100cc99b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100cc99e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 100cc9a1 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100cc9a4 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_100cc9a6:;
  /* 100cc9a6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100cc9a8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100cc9a9 jmp 0x100cc964 */
  goto L_100cc964;
L_100cc9ab:;
  /* 100cc9ab cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc9ae je 0x100cc8be */
  if (C.zf) goto L_100cc8be;
  /* 100cc9b4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc9b7 je 0x100cc8be */
  if (C.zf) goto L_100cc8be;
  /* 100cc9bd jmp 0x100cc897 */
  goto L_100cc897;
L_100cc9c2:;
  /* 100cc9c2 cmp dword ptr [0x100d0c20], edx */
  { uint32_t _a=(r32((uint32_t)(0x100d0c20))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cc9c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100cc9cb jle 0x100cc9de */
  if ((C.zf||C.sf!=C.of)) goto L_100cc9de;
  /* 100cc9cd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100cc9d0 push esi */
  push32((uint32_t)(ESI));
  /* 100cc9d1 push eax */
  push32((uint32_t)(EAX));
  /* 100cc9d2 call 0x100c93cb */
  push32(0x100cc9d7u); f_100c93cb();
  /* 100cc9d7 pop ecx */
  ECX = (pop32());
  /* 100cc9d8 pop ecx */
  ECX = (pop32());
  /* 100cc9d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 100cc9db pop edx */
  EDX = (pop32());
  /* 100cc9dc jmp 0x100cc9ec */
  goto L_100cc9ec;
L_100cc9de:;
  /* 100cc9de mov ecx, dword ptr [0x100d0a10] */
  ECX = (r32((uint32_t)(0x100d0a10)));
  /* 100cc9e4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100cc9e7 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100cc9ea and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_100cc9ec:;
  /* 100cc9ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cc9ee je 0x100cca9e */
  if (C.zf) goto L_100cca9e;
  /* 100cc9f4 mov eax, esi */
  EAX = (ESI);
  /* 100cc9f6 jmp 0x100cca4f */
  goto L_100cca4f;
L_100cc9f8:;
  /* 100cc9f8 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 100cc9fb cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cc9fe mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 100cca01 jl 0x100cca08 */
  if ((C.sf!=C.of)) goto L_100cca08;
  /* 100cca03 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cca06 jle 0x100cca4c */
  if ((C.zf||C.sf!=C.of)) goto L_100cca4c;
L_100cca08:;
  /* 100cca08 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100cca0b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cca0e je 0x100cca84 */
  if (C.zf) goto L_100cca84;
  /* 100cca10 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100cca11 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100cca12 je 0x100cca78 */
  if (C.zf) goto L_100cca78;
  /* 100cca14 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cca17 jne 0x100ccb2c */
  if (!C.zf) goto L_100ccb2c;
L_100cca1d:;
  /* 100cca1d push 8 */
  push32((uint32_t)(0x8u));
  /* 100cca1f jmp 0x100cca86 */
  goto L_100cca86;
L_100cca21:;
  /* 100cca21 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_100cca24:;
  /* 100cca24 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cca27 jne 0x100cca2e */
  if (!C.zf) goto L_100cca2e;
  /* 100cca29 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100cca2b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100cca2c jmp 0x100cca24 */
  goto L_100cca24;
L_100cca2e:;
  /* 100cca2e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cca31 jl 0x100ccb29 */
  if ((C.sf!=C.of)) goto L_100ccb29;
  /* 100cca37 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cca3a jg 0x100ccb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ccb29;
  /* 100cca40 jmp 0x100cca4c */
  goto L_100cca4c;
L_100cca42:;
  /* 100cca42 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cca45 jl 0x100cca55 */
  if ((C.sf!=C.of)) goto L_100cca55;
  /* 100cca47 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cca4a jg 0x100cca55 */
  if ((!C.zf&&C.sf==C.of)) goto L_100cca55;
L_100cca4c:;
  /* 100cca4c push 9 */
  push32((uint32_t)(0x9u));
L_100cca4e:;
  /* 100cca4e pop eax */
  EAX = (pop32());
L_100cca4f:;
  /* 100cca4f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100cca50 jmp 0x100cc80d */
  goto L_100cc80d;
L_100cca55:;
  /* 100cca55 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cca58 jne 0x100cca9e */
  if (!C.zf) goto L_100cca9e;
  /* 100cca5a jmp 0x100cca1d */
  goto L_100cca1d;
L_100cca5c:;
  /* 100cca5c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cca60 je 0x100cca8c */
  if (C.zf) goto L_100cca8c;
  /* 100cca62 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100cca65 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 100cca68 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cca6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 100cca6e je 0x100cca84 */
  if (C.zf) goto L_100cca84;
  /* 100cca70 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100cca71 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100cca72 jne 0x100ccb2c */
  if (!C.zf) goto L_100ccb2c;
L_100cca78:;
  /* 100cca78 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 100cca7c push 7 */
  push32((uint32_t)(0x7u));
  /* 100cca7e pop eax */
  EAX = (pop32());
  /* 100cca7f jmp 0x100cc80d */
  goto L_100cc80d;
L_100cca84:;
  /* 100cca84 push 7 */
  push32((uint32_t)(0x7u));
L_100cca86:;
  /* 100cca86 pop eax */
  EAX = (pop32());
  /* 100cca87 jmp 0x100cc80d */
  goto L_100cc80d;
L_100cca8c:;
  /* 100cca8c push 0xa */
  push32((uint32_t)(0xau));
  /* 100cca8e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100cca8f pop eax */
  EAX = (pop32());
L_100cca90:;
  /* 100cca90 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cca93 je 0x100ccb2e */
  if (C.zf) goto L_100ccb2e;
  /* 100cca99 jmp 0x100cc80d */
  goto L_100cc80d;
L_100cca9e:;
  /* 100cca9e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 100ccaa1 jmp 0x100ccb2e */
  goto L_100ccb2e;
L_100ccaa6:;
  /* 100ccaa6 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 100ccaad xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100ccaaf:;
  /* 100ccaaf cmp dword ptr [0x100d0c20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100d0c20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccab6 jle 0x100ccac7 */
  if ((C.zf||C.sf!=C.of)) goto L_100ccac7;
  /* 100ccab8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ccabb push 4 */
  push32((uint32_t)(0x4u));
  /* 100ccabd push eax */
  push32((uint32_t)(EAX));
  /* 100ccabe call 0x100c93cb */
  push32(0x100ccac3u); f_100c93cb();
  /* 100ccac3 pop ecx */
  ECX = (pop32());
  /* 100ccac4 pop ecx */
  ECX = (pop32());
  /* 100ccac5 jmp 0x100ccad6 */
  goto L_100ccad6;
L_100ccac7:;
  /* 100ccac7 mov ecx, dword ptr [0x100d0a10] */
  ECX = (r32((uint32_t)(0x100d0a10)));
  /* 100ccacd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ccad0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100ccad3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_100ccad6:;
  /* 100ccad6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ccad8 je 0x100ccaf6 */
  if (C.zf) goto L_100ccaf6;
  /* 100ccada movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100ccadd lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 100ccae0 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 100ccae4 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccaea jg 0x100ccaf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ccaf1;
  /* 100ccaec mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ccaee inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ccaef jmp 0x100ccaaf */
  goto L_100ccaaf;
L_100ccaf1:;
  /* 100ccaf1 mov esi, 0x1451 */
  ESI = (0x1451u);
L_100ccaf6:;
  /* 100ccaf6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_100ccaf9:;
  /* 100ccaf9 cmp dword ptr [0x100d0c20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100d0c20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccb00 jle 0x100ccb11 */
  if ((C.zf||C.sf!=C.of)) goto L_100ccb11;
  /* 100ccb02 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ccb05 push 4 */
  push32((uint32_t)(0x4u));
  /* 100ccb07 push eax */
  push32((uint32_t)(EAX));
  /* 100ccb08 call 0x100c93cb */
  push32(0x100ccb0du); f_100c93cb();
  /* 100ccb0d pop ecx */
  ECX = (pop32());
  /* 100ccb0e pop ecx */
  ECX = (pop32());
  /* 100ccb0f jmp 0x100ccb20 */
  goto L_100ccb20;
L_100ccb11:;
  /* 100ccb11 mov ecx, dword ptr [0x100d0a10] */
  ECX = (r32((uint32_t)(0x100d0a10)));
  /* 100ccb17 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ccb1a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100ccb1d and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_100ccb20:;
  /* 100ccb20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ccb22 je 0x100ccb29 */
  if (C.zf) goto L_100ccb29;
  /* 100ccb24 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ccb26 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ccb27 jmp 0x100ccaf9 */
  goto L_100ccaf9;
L_100ccb29:;
  /* 100ccb29 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100ccb2a jmp 0x100ccb2e */
  goto L_100ccb2e;
L_100ccb2c:;
  /* 100ccb2c mov edi, ecx */
  EDI = (ECX);
L_100ccb2e:;
  /* 100ccb2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ccb31 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccb35 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 100ccb37 je 0x100ccc16 */
  if (C.zf) goto L_100ccc16;
  /* 100ccb3d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 100ccb3f pop eax */
  EAX = (pop32());
  /* 100ccb40 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccb43 jbe 0x100ccb5a */
  if ((C.cf||C.zf)) goto L_100ccb5a;
  /* 100ccb45 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ccb49 jl 0x100ccb4e */
  if ((C.sf!=C.of)) goto L_100ccb4e;
  /* 100ccb4b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_100ccb4e:;
  /* 100ccb4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100ccb51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100ccb54 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ccb55 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 100ccb58 jmp 0x100ccb5d */
  goto L_100ccb5d;
L_100ccb5a:;
  /* 100ccb5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_100ccb5d:;
  /* 100ccb5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccb61 jbe 0x100ccc0c */
  if ((C.cf||C.zf)) goto L_100ccc0c;
L_100ccb67:;
  /* 100ccb67 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ccb68 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ccb6b jne 0x100ccb75 */
  if (!C.zf) goto L_100ccb75;
  /* 100ccb6d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 100ccb70 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 100ccb73 jmp 0x100ccb67 */
  goto L_100ccb67;
L_100ccb75:;
  /* 100ccb75 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 100ccb78 push eax */
  push32((uint32_t)(EAX));
  /* 100ccb79 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 100ccb7c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 100ccb7f push eax */
  push32((uint32_t)(EAX));
  /* 100ccb80 call 0x100cc6ef */
  push32(0x100ccb85u); f_100cc6ef();
  /* 100ccb85 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 100ccb88 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100ccb8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ccb8d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccb90 jge 0x100ccb94 */
  if ((C.sf==C.of)) goto L_100ccb94;
  /* 100ccb92 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_100ccb94:;
  /* 100ccb94 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ccb97 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccb9a jne 0x100ccb9f */
  if (!C.zf) goto L_100ccb9f;
  /* 100ccb9c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100ccb9f:;
  /* 100ccb9f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccba2 jne 0x100ccba7 */
  if (!C.zf) goto L_100ccba7;
  /* 100ccba4 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_100ccba7:;
  /* 100ccba7 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccbac jle 0x100ccbde */
  if ((C.zf||C.sf!=C.of)) goto L_100ccbde;
  /* 100ccbae mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_100ccbb5:;
  /* 100ccbb5 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 100ccbb8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100ccbbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100ccbbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_100ccbc1:;
  /* 100ccbc1 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccbc5 je 0x100ccc27 */
  if (C.zf) goto L_100ccc27;
  /* 100ccbc7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ccbc9 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 100ccbce mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100ccbd3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ccbd5 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 100ccbdc jmp 0x100ccc3c */
  goto L_100ccc3c;
L_100ccbde:;
  /* 100ccbde cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccbe3 jge 0x100ccbee */
  if ((C.sf==C.of)) goto L_100ccbee;
  /* 100ccbe5 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 100ccbec jmp 0x100ccbb5 */
  goto L_100ccbb5;
L_100ccbee:;
  /* 100ccbee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100ccbf1 push eax */
  push32((uint32_t)(EAX));
  /* 100ccbf2 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 100ccbf5 push eax */
  push32((uint32_t)(EAX));
  /* 100ccbf6 call 0x100cd68a */
  push32(0x100ccbfbu); f_100cd68a();
  /* 100ccbfb mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 100ccbfe mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 100ccc01 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 100ccc04 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 100ccc07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ccc0a jmp 0x100ccbc1 */
  goto L_100ccbc1;
L_100ccc0c:;
  /* 100ccc0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ccc0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ccc10 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100ccc12 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ccc14 jmp 0x100ccbc1 */
  goto L_100ccbc1;
L_100ccc16:;
  /* 100ccc16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ccc18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ccc1a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100ccc1c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ccc1e mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 100ccc25 jmp 0x100ccc3c */
  goto L_100ccc3c;
L_100ccc27:;
  /* 100ccc27 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccc2b je 0x100ccc3c */
  if (C.zf) goto L_100ccc3c;
  /* 100ccc2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ccc2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ccc31 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100ccc33 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ccc35 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_100ccc3c:;
  /* 100ccc3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ccc3f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 100ccc42 pop edi */
  EDI = (pop32());
  /* 100ccc43 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 100ccc46 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 100ccc49 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 100ccc4d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 100ccc50 pop esi */
  ESI = (pop32());
  /* 100ccc51 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 100ccc54 pop ebx */
  EBX = (pop32());
  /* 100ccc55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ccc56 ret  */
  ESPCHK(0x100cc7b6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc87 @ 0x100ccc87 (659 bytes, 232 insns) */
void f_100ccc87(void) {
  FTRACE(0x100ccc87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ccc87 push ebp */
  push32((uint32_t)(EBP));
  /* 100ccc88 mov ebp, esp */
  EBP = (ESP);
  /* 100ccc8a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ccc8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100ccc90 push ebx */
  push32((uint32_t)(EBX));
  /* 100ccc91 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 100ccc94 push esi */
  push32((uint32_t)(ESI));
  /* 100ccc95 mov ecx, eax */
  ECX = (EAX);
  /* 100ccc97 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 100ccc9c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 100ccca2 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 100ccca4 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 100ccca7 push edi */
  push32((uint32_t)(EDI));
  /* 100ccca8 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 100cccac mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 100cccb0 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 100cccb4 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 100cccb8 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 100cccbc mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 100cccc0 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 100cccc4 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 100cccc8 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 100ccccc mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 100cccd0 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 100cccd4 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 100cccd8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 100cccdf mov edx, eax */
  EDX = (EAX);
  /* 100ccce1 je 0x100ccce9 */
  if (C.zf) goto L_100ccce9;
  /* 100ccce3 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 100ccce7 jmp 0x100ccced */
  goto L_100ccced;
L_100ccce9:;
  /* 100ccce9 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_100ccced:;
  /* 100ccced mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100cccf0 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 100cccf3 jne 0x100ccd13 */
  if (!C.zf) goto L_100ccd13;
  /* 100cccf5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100cccf7 jne 0x100ccd13 */
  if (!C.zf) goto L_100ccd13;
  /* 100cccf9 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cccfc jne 0x100ccd13 */
  if (!C.zf) goto L_100ccd13;
L_100cccfe:;
  /* 100cccfe and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 100ccd02 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 100ccd06 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 100ccd0a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 100ccd0e jmp 0x100ccf11 */
  goto L_100ccf11;
L_100ccd13:;
  /* 100ccd13 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ccd16 jne 0x100ccd92 */
  if (!C.zf) goto L_100ccd92;
  /* 100ccd18 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 100ccd1d mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 100ccd22 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccd24 jne 0x100ccd2c */
  if (!C.zf) goto L_100ccd2c;
  /* 100ccd26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccd2a je 0x100ccd3b */
  if (C.zf) goto L_100ccd3b;
L_100ccd2c:;
  /* 100ccd2c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 100ccd32 jne 0x100ccd3b */
  if (!C.zf) goto L_100ccd3b;
  /* 100ccd34 push 0x100ce5a0 */
  push32((uint32_t)(0x100ce5a0u));
  /* 100ccd39 jmp 0x100ccd81 */
  goto L_100ccd81;
L_100ccd3b:;
  /* 100ccd3b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 100ccd3e je 0x100ccd55 */
  if (C.zf) goto L_100ccd55;
  /* 100ccd40 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccd46 jne 0x100ccd55 */
  if (!C.zf) goto L_100ccd55;
  /* 100ccd48 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccd4c jne 0x100ccd7c */
  if (!C.zf) goto L_100ccd7c;
  /* 100ccd4e push 0x100ce598 */
  push32((uint32_t)(0x100ce598u));
  /* 100ccd53 jmp 0x100ccd64 */
  goto L_100ccd64;
L_100ccd55:;
  /* 100ccd55 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccd57 jne 0x100ccd7c */
  if (!C.zf) goto L_100ccd7c;
  /* 100ccd59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccd5d jne 0x100ccd7c */
  if (!C.zf) goto L_100ccd7c;
  /* 100ccd5f push 0x100ce590 */
  push32((uint32_t)(0x100ce590u));
L_100ccd64:;
  /* 100ccd64 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 100ccd67 push eax */
  push32((uint32_t)(EAX));
  /* 100ccd68 call 0x100c9af0 */
  push32(0x100ccd6du); f_100c9af0();
  /* 100ccd6d pop ecx */
  ECX = (pop32());
  /* 100ccd6e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 100ccd72 pop ecx */
  ECX = (pop32());
L_100ccd73:;
  /* 100ccd73 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ccd77 jmp 0x100cceea */
  goto L_100cceea;
L_100ccd7c:;
  /* 100ccd7c push 0x100ce588 */
  push32((uint32_t)(0x100ce588u));
L_100ccd81:;
  /* 100ccd81 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 100ccd84 push eax */
  push32((uint32_t)(EAX));
  /* 100ccd85 call 0x100c9af0 */
  push32(0x100ccd8au); f_100c9af0();
  /* 100ccd8a pop ecx */
  ECX = (pop32());
  /* 100ccd8b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 100ccd8f pop ecx */
  ECX = (pop32());
  /* 100ccd90 jmp 0x100ccd73 */
  goto L_100ccd73;
L_100ccd92:;
  /* 100ccd92 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 100ccd95 mov ecx, edi */
  ECX = (EDI);
  /* 100ccd97 mov esi, eax */
  ESI = (EAX);
  /* 100ccd99 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 100ccd9c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100ccda2 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 100ccda5 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 100ccdaa push 1 */
  push32((uint32_t)(0x1u));
  /* 100ccdac lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 100ccdaf mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 100ccdb3 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100ccdb6 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 100ccdb9 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 100ccdc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ccdc3 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 100ccdc6 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 100ccdc9 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 100ccdcc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ccdce push eax */
  push32((uint32_t)(EAX));
  /* 100ccdcf lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ccdd2 push eax */
  push32((uint32_t)(EAX));
  /* 100ccdd3 call 0x100cd68a */
  push32(0x100ccdd8u); f_100cd68a();
  /* 100ccdd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ccddb cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ccde1 jb 0x100ccdf3 */
  if (C.cf) goto L_100ccdf3;
  /* 100ccde3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 100ccde6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ccde7 push eax */
  push32((uint32_t)(EAX));
  /* 100ccde8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ccdeb push eax */
  push32((uint32_t)(EAX));
  /* 100ccdec call 0x100cd46a */
  push32(0x100ccdf1u); f_100cd46a();
  /* 100ccdf1 pop ecx */
  ECX = (pop32());
  /* 100ccdf2 pop ecx */
  ECX = (pop32());
L_100ccdf3:;
  /* 100ccdf3 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 100ccdf7 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 100ccdfa je 0x100cce0d */
  if (C.zf) goto L_100cce0d;
  /* 100ccdfc mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 100ccdff movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 100cce02 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cce04 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100cce06 jg 0x100cce10 */
  if ((!C.zf&&C.sf==C.of)) goto L_100cce10;
  /* 100cce08 jmp 0x100cccfe */
  goto L_100cccfe;
L_100cce0d:;
  /* 100cce0d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_100cce10:;
  /* 100cce10 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cce13 jle 0x100cce18 */
  if ((C.zf||C.sf!=C.of)) goto L_100cce18;
  /* 100cce15 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 100cce17 pop edi */
  EDI = (pop32());
L_100cce18:;
  /* 100cce18 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 100cce1c sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cce22 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 100cce27 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_100cce2e:;
  /* 100cce2e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100cce31 push eax */
  push32((uint32_t)(EAX));
  /* 100cce32 call 0x100cc694 */
  push32(0x100cce37u); f_100cc694();
  /* 100cce37 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 100cce3a pop ecx */
  ECX = (pop32());
  /* 100cce3b jne 0x100cce2e */
  if (!C.zf) goto L_100cce2e;
  /* 100cce3d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100cce3f jge 0x100cce58 */
  if ((C.sf==C.of)) goto L_100cce58;
  /* 100cce41 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 100cce43 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 100cce49 jle 0x100cce58 */
  if ((C.zf||C.sf!=C.of)) goto L_100cce58;
L_100cce4b:;
  /* 100cce4b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100cce4e push eax */
  push32((uint32_t)(EAX));
  /* 100cce4f call 0x100cc6c2 */
  push32(0x100cce54u); f_100cc6c2();
  /* 100cce54 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100cce55 pop ecx */
  ECX = (pop32());
  /* 100cce56 jne 0x100cce4b */
  if (!C.zf) goto L_100cce4b;
L_100cce58:;
  /* 100cce58 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 100cce5b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 100cce5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100cce60 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 100cce63 jle 0x100cceb5 */
  if ((C.zf||C.sf!=C.of)) goto L_100cceb5;
  /* 100cce65 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_100cce68:;
  /* 100cce68 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 100cce6b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 100cce6e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100cce6f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100cce70 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100cce73 push eax */
  push32((uint32_t)(EAX));
  /* 100cce74 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100cce75 call 0x100cc694 */
  push32(0x100cce7au); f_100cc694();
  /* 100cce7a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100cce7d push eax */
  push32((uint32_t)(EAX));
  /* 100cce7e call 0x100cc694 */
  push32(0x100cce83u); f_100cc694();
  /* 100cce83 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100cce86 push eax */
  push32((uint32_t)(EAX));
  /* 100cce87 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100cce8a push eax */
  push32((uint32_t)(EAX));
  /* 100cce8b call 0x100cc636 */
  push32(0x100cce90u); f_100cc636();
  /* 100cce90 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100cce93 push eax */
  push32((uint32_t)(EAX));
  /* 100cce94 call 0x100cc694 */
  push32(0x100cce99u); f_100cc694();
  /* 100cce99 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 100cce9c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 100cce9f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 100ccea3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ccea6 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100ccea8 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 100cceab dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 100cceae mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 100cceb0 jne 0x100cce68 */
  if (!C.zf) goto L_100cce68;
  /* 100cceb2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_100cceb5:;
  /* 100cceb5 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 100cceb8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100cceb9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100cceba cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ccebd lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 100ccec0 jl 0x100ccef2 */
  if ((C.sf!=C.of)) goto L_100ccef2;
L_100ccec2:;
  /* 100ccec2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccec4 jb 0x100cced5 */
  if (C.cf) goto L_100cced5;
  /* 100ccec6 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ccec9 jne 0x100cced1 */
  if (!C.zf) goto L_100cced1;
  /* 100ccecb mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 100ccece dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ccecf jmp 0x100ccec2 */
  goto L_100ccec2;
L_100cced1:;
  /* 100cced1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cced3 jae 0x100cced9 */
  if (!C.cf) goto L_100cced9;
L_100cced5:;
  /* 100cced5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100cced6 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_100cced9:;
  /* 100cced9 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_100ccedb:;
  /* 100ccedb sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ccedd sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ccedf mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 100ccee2 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 100ccee5 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_100cceea:;
  /* 100cceea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_100cceed:;
  /* 100cceed pop edi */
  EDI = (pop32());
  /* 100cceee pop esi */
  ESI = (pop32());
  /* 100cceef pop ebx */
  EBX = (pop32());
  /* 100ccef0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ccef1 ret  */
  ESPCHK(0x100ccc87u, _esp0);
  ESP += 4; return;
L_100ccef2:;
  /* 100ccef2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccef4 jb 0x100ccf02 */
  if (C.cf) goto L_100ccf02;
  /* 100ccef6 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ccef9 jne 0x100ccefe */
  if (!C.zf) goto L_100ccefe;
  /* 100ccefb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ccefc jmp 0x100ccef2 */
  goto L_100ccef2;
L_100ccefe:;
  /* 100ccefe cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccf00 jae 0x100ccedb */
  if (!C.cf) goto L_100ccedb;
L_100ccf02:;
  /* 100ccf02 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 100ccf06 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 100ccf0a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 100ccf0e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_100ccf11:;
  /* 100ccf11 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 100ccf15 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ccf17 pop eax */
  EAX = (pop32());
  /* 100ccf18 jmp 0x100cceed */
  goto L_100cceed;
}

/* FUN_1000cf1a @ 0x100ccf1a (27 bytes, 13 insns) */
void f_100ccf1a(void) {
  FTRACE(0x100ccf1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ccf1a mov eax, dword ptr [0x100d68ac] */
  EAX = (r32((uint32_t)(0x100d68ac)));
  /* 100ccf1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ccf21 je 0x100ccf32 */
  if (C.zf) goto L_100ccf32;
  /* 100ccf23 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 100ccf27 call eax */
  call_ind((uint32_t)(EAX), 0x100ccf29u);
  /* 100ccf29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ccf2b pop ecx */
  ECX = (pop32());
  /* 100ccf2c je 0x100ccf32 */
  if (C.zf) goto L_100ccf32;
  /* 100ccf2e push 1 */
  push32((uint32_t)(0x1u));
  /* 100ccf30 pop eax */
  EAX = (pop32());
  /* 100ccf31 ret  */
  ESPCHK(0x100ccf1au, _esp0);
  ESP += 4; return;
L_100ccf32:;
  /* 100ccf32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ccf34 ret  */
  ESPCHK(0x100ccf1au, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x100ccf38 (32 bytes, 18 insns) */
void f_100ccf38(void) {
  FTRACE(0x100ccf38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ccf38 push ebp */
  push32((uint32_t)(EBP));
  /* 100ccf39 mov ebp, esp */
  EBP = (ESP);
  /* 100ccf3b push ebx */
  push32((uint32_t)(EBX));
  /* 100ccf3c push esi */
  push32((uint32_t)(ESI));
  /* 100ccf3d push edi */
  push32((uint32_t)(EDI));
  /* 100ccf3e push ebp */
  push32((uint32_t)(EBP));
  /* 100ccf3f push 0 */
  push32((uint32_t)(0x0u));
  /* 100ccf41 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ccf43 push 0x100ccf50 */
  push32((uint32_t)(0x100ccf50u));
  /* 100ccf48 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ccf4b call 0x100cda34 */
  push32(0x100ccf50u); f_100cda34();
  /* 100ccf50 pop ebp */
  EBP = (pop32());
  /* 100ccf51 pop edi */
  EDI = (pop32());
  /* 100ccf52 pop esi */
  ESI = (pop32());
  /* 100ccf53 pop ebx */
  EBX = (pop32());
  /* 100ccf54 mov esp, ebp */
  ESP = (EBP);
  /* 100ccf56 pop ebp */
  EBP = (pop32());
  /* 100ccf57 ret  */
  ESPCHK(0x100ccf38u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x100ccf7a (104 bytes, 33 insns) */
void f_100ccf7a(void) {
  FTRACE(0x100ccf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ccf7a push ebx */
  push32((uint32_t)(EBX));
  /* 100ccf7b push esi */
  push32((uint32_t)(ESI));
  /* 100ccf7c push edi */
  push32((uint32_t)(EDI));
  /* 100ccf7d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100ccf81 push eax */
  push32((uint32_t)(EAX));
  /* 100ccf82 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 100ccf84 push 0x100ccf58 */
  push32((uint32_t)(0x100ccf58u));
  /* 100ccf89 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 100ccf90 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_100ccf97:;
  /* 100ccf97 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 100ccf9b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 100ccf9e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 100ccfa1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccfa4 je 0x100ccfd4 */
  if (C.zf) goto L_100ccfd4;
  /* 100ccfa6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccfaa je 0x100ccfd4 */
  if (C.zf) goto L_100ccfd4;
  /* 100ccfac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 100ccfaf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 100ccfb2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 100ccfb6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 100ccfb9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ccfbe jne 0x100ccfd2 */
  if (!C.zf) goto L_100ccfd2;
  /* 100ccfc0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 100ccfc5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 100ccfc9 call 0x100cd00e */
  push32(0x100ccfceu); f_100cd00e();
  /* 100ccfce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x100ccfd2u);
L_100ccfd2:;
  /* 100ccfd2 jmp 0x100ccf97 */
  goto L_100ccf97;
L_100ccfd4:;
  /* 100ccfd4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 100ccfdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ccfde pop edi */
  EDI = (pop32());
  /* 100ccfdf pop esi */
  ESI = (pop32());
  /* 100ccfe0 pop ebx */
  EBX = (pop32());
  /* 100ccfe1 ret  */
  ESPCHK(0x100ccf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d00e @ 0x100cd00e (24 bytes, 10 insns) */
void f_100cd00e(void) {
  FTRACE(0x100cd00eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd00e push ebx */
  push32((uint32_t)(EBX));
  /* 100cd00f push ecx */
  push32((uint32_t)(ECX));
  /* 100cd010 mov ebx, 0x100d3144 */
  EBX = (0x100d3144u);
  /* 100cd015 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cd018 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 100cd01b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 100cd01e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 100cd021 pop ecx */
  ECX = (pop32());
  /* 100cd022 pop ebx */
  EBX = (pop32());
  /* 100cd023 ret 4 */
  ESPCHK(0x100cd00eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d0ed @ 0x100cd0ed (27 bytes, 11 insns) */
void f_100cd0ed(void) {
  FTRACE(0x100cd0edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd0ed push ebp */
  push32((uint32_t)(EBP));
  /* 100cd0ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100cd0f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 100cd0f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 100cd0f7 push eax */
  push32((uint32_t)(EAX));
  /* 100cd0f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 100cd0fb push eax */
  push32((uint32_t)(EAX));
  /* 100cd0fc call 0x100ccf7a */
  push32(0x100cd101u); f_100ccf7a();
  /* 100cd101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd104 pop ebp */
  EBP = (pop32());
  /* 100cd105 ret 4 */
  ESPCHK(0x100cd0edu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d108 @ 0x100cd108 (111 bytes, 44 insns) */
void f_100cd108(void) {
  FTRACE(0x100cd108u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd108 push ebx */
  push32((uint32_t)(EBX));
  /* 100cd109 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100cd10b cmp dword ptr [0x100d6878], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100d6878))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd111 jne 0x100cd126 */
  if (!C.zf) goto L_100cd126;
  /* 100cd113 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100cd117 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd11a jl 0x100cd175 */
  if ((C.sf!=C.of)) goto L_100cd175;
  /* 100cd11c cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd11f jg 0x100cd175 */
  if ((!C.zf&&C.sf==C.of)) goto L_100cd175;
  /* 100cd121 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cd124 pop ebx */
  EBX = (pop32());
  /* 100cd125 ret  */
  ESPCHK(0x100cd108u, _esp0);
  ESP += 4; return;
L_100cd126:;
  /* 100cd126 push esi */
  push32((uint32_t)(ESI));
  /* 100cd127 mov esi, 0x100d69f4 */
  ESI = (0x100d69f4u);
  /* 100cd12c push edi */
  push32((uint32_t)(EDI));
  /* 100cd12d push esi */
  push32((uint32_t)(ESI));
  /* 100cd12e call dword ptr [0x100ce090] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce090))), 0x100cd134u);
  /* 100cd134 cmp dword ptr [0x100d69f0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100d69f0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd13a mov edi, dword ptr [0x100ce08c] */
  EDI = (r32((uint32_t)(0x100ce08c)));
  /* 100cd140 je 0x100cd150 */
  if (C.zf) goto L_100cd150;
  /* 100cd142 push esi */
  push32((uint32_t)(ESI));
  /* 100cd143 call edi */
  call_ind((uint32_t)(EDI), 0x100cd145u);
  /* 100cd145 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100cd147 call 0x100ca013 */
  push32(0x100cd14cu); f_100ca013();
  /* 100cd14c pop ecx */
  ECX = (pop32());
  /* 100cd14d push 1 */
  push32((uint32_t)(0x1u));
  /* 100cd14f pop ebx */
  EBX = (pop32());
L_100cd150:;
  /* 100cd150 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100cd154 call 0x100cd177 */
  push32(0x100cd159u); f_100cd177();
  /* 100cd159 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100cd15b pop ecx */
  ECX = (pop32());
  /* 100cd15c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 100cd160 je 0x100cd16c */
  if (C.zf) goto L_100cd16c;
  /* 100cd162 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100cd164 call 0x100ca074 */
  push32(0x100cd169u); f_100ca074();
  /* 100cd169 pop ecx */
  ECX = (pop32());
  /* 100cd16a jmp 0x100cd16f */
  goto L_100cd16f;
L_100cd16c:;
  /* 100cd16c push esi */
  push32((uint32_t)(ESI));
  /* 100cd16d call edi */
  call_ind((uint32_t)(EDI), 0x100cd16fu);
L_100cd16f:;
  /* 100cd16f mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100cd173 pop edi */
  EDI = (pop32());
  /* 100cd174 pop esi */
  ESI = (pop32());
L_100cd175:;
  /* 100cd175 pop ebx */
  EBX = (pop32());
  /* 100cd176 ret  */
  ESPCHK(0x100cd108u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d177 @ 0x100cd177 (204 bytes, 71 insns) */
void f_100cd177(void) {
  FTRACE(0x100cd177u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd177 push ebp */
  push32((uint32_t)(EBP));
  /* 100cd178 mov ebp, esp */
  EBP = (ESP);
  /* 100cd17a push ecx */
  push32((uint32_t)(ECX));
  /* 100cd17b cmp dword ptr [0x100d6878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100d6878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd182 push ebx */
  push32((uint32_t)(EBX));
  /* 100cd183 jne 0x100cd1a2 */
  if (!C.zf) goto L_100cd1a2;
  /* 100cd185 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cd188 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd18b jl 0x100cd240 */
  if ((C.sf!=C.of)) goto L_100cd240;
  /* 100cd191 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd194 jg 0x100cd240 */
  if ((!C.zf&&C.sf==C.of)) goto L_100cd240;
  /* 100cd19a sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cd19d jmp 0x100cd240 */
  goto L_100cd240;
L_100cd1a2:;
  /* 100cd1a2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cd1a5 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd1ab jge 0x100cd1d5 */
  if ((C.sf==C.of)) goto L_100cd1d5;
  /* 100cd1ad cmp dword ptr [0x100d0c20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100d0c20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd1b4 jle 0x100cd1c2 */
  if ((C.zf||C.sf!=C.of)) goto L_100cd1c2;
  /* 100cd1b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100cd1b8 push ebx */
  push32((uint32_t)(EBX));
  /* 100cd1b9 call 0x100c93cb */
  push32(0x100cd1beu); f_100c93cb();
  /* 100cd1be pop ecx */
  ECX = (pop32());
  /* 100cd1bf pop ecx */
  ECX = (pop32());
  /* 100cd1c0 jmp 0x100cd1cd */
  goto L_100cd1cd;
L_100cd1c2:;
  /* 100cd1c2 mov eax, dword ptr [0x100d0a10] */
  EAX = (r32((uint32_t)(0x100d0a10)));
  /* 100cd1c7 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 100cd1ca and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_100cd1cd:;
  /* 100cd1cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cd1cf jne 0x100cd1d5 */
  if (!C.zf) goto L_100cd1d5;
L_100cd1d1:;
  /* 100cd1d1 mov eax, ebx */
  EAX = (EBX);
  /* 100cd1d3 jmp 0x100cd240 */
  goto L_100cd240;
L_100cd1d5:;
  /* 100cd1d5 mov edx, dword ptr [0x100d0a10] */
  EDX = (r32((uint32_t)(0x100d0a10)));
  /* 100cd1db mov eax, ebx */
  EAX = (EBX);
  /* 100cd1dd sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100cd1e0 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 100cd1e3 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100cd1e8 je 0x100cd1f8 */
  if (C.zf) goto L_100cd1f8;
  /* 100cd1ea and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 100cd1ee mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 100cd1f1 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 100cd1f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100cd1f6 jmp 0x100cd201 */
  goto L_100cd201;
L_100cd1f8:;
  /* 100cd1f8 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 100cd1fc mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 100cd1ff push 1 */
  push32((uint32_t)(0x1u));
L_100cd201:;
  /* 100cd201 pop eax */
  EAX = (pop32());
  /* 100cd202 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 100cd205 push 1 */
  push32((uint32_t)(0x1u));
  /* 100cd207 push 0 */
  push32((uint32_t)(0x0u));
  /* 100cd209 push 3 */
  push32((uint32_t)(0x3u));
  /* 100cd20b push ecx */
  push32((uint32_t)(ECX));
  /* 100cd20c push eax */
  push32((uint32_t)(EAX));
  /* 100cd20d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100cd210 push eax */
  push32((uint32_t)(EAX));
  /* 100cd211 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 100cd216 push dword ptr [0x100d6878] */
  push32((uint32_t)(r32((uint32_t)(0x100d6878))));
  /* 100cd21c call 0x100cc3c6 */
  push32(0x100cd221u); f_100cc3c6();
  /* 100cd221 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cd226 je 0x100cd1d1 */
  if (C.zf) goto L_100cd1d1;
  /* 100cd228 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd22b jne 0x100cd233 */
  if (!C.zf) goto L_100cd233;
  /* 100cd22d movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100cd231 jmp 0x100cd240 */
  goto L_100cd240;
L_100cd233:;
  /* 100cd233 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 100cd237 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100cd23b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100cd23e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_100cd240:;
  /* 100cd240 pop ebx */
  EBX = (pop32());
  /* 100cd241 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cd242 ret  */
  ESPCHK(0x100cd177u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d243 @ 0x100cd243 (49 bytes, 20 insns) */
void f_100cd243(void) {
  FTRACE(0x100cd243u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd243 push esi */
  push32((uint32_t)(ESI));
  /* 100cd244 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100cd248 push edi */
  push32((uint32_t)(EDI));
  /* 100cd249 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 100cd24c test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 100cd250 je 0x100cd258 */
  if (C.zf) goto L_100cd258;
  /* 100cd252 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100cd256 jmp 0x100cd26f */
  goto L_100cd26f;
L_100cd258:;
  /* 100cd258 push esi */
  push32((uint32_t)(ESI));
  /* 100cd259 call 0x100c8f8e */
  push32(0x100cd25eu); f_100c8f8e();
  /* 100cd25e push esi */
  push32((uint32_t)(ESI));
  /* 100cd25f call 0x100cd274 */
  push32(0x100cd264u); f_100cd274();
  /* 100cd264 push esi */
  push32((uint32_t)(ESI));
  /* 100cd265 mov edi, eax */
  EDI = (EAX);
  /* 100cd267 call 0x100c8fe0 */
  push32(0x100cd26cu); f_100c8fe0();
  /* 100cd26c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100cd26f:;
  /* 100cd26f mov eax, edi */
  EAX = (EDI);
  /* 100cd271 pop edi */
  EDI = (pop32());
  /* 100cd272 pop esi */
  ESI = (pop32());
  /* 100cd273 ret  */
  ESPCHK(0x100cd243u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x100cd274 (76 bytes, 30 insns) */
void f_100cd274(void) {
  FTRACE(0x100cd274u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd274 push esi */
  push32((uint32_t)(ESI));
  /* 100cd275 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100cd279 push edi */
  push32((uint32_t)(EDI));
  /* 100cd27a or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 100cd27d test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 100cd281 je 0x100cd2b7 */
  if (C.zf) goto L_100cd2b7;
  /* 100cd283 push esi */
  push32((uint32_t)(ESI));
  /* 100cd284 call 0x100cc174 */
  push32(0x100cd289u); f_100cc174();
  /* 100cd289 push esi */
  push32((uint32_t)(ESI));
  /* 100cd28a mov edi, eax */
  EDI = (EAX);
  /* 100cd28c call 0x100cd7e6 */
  push32(0x100cd291u); f_100cd7e6();
  /* 100cd291 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100cd294 call 0x100cd706 */
  push32(0x100cd299u); f_100cd706();
  /* 100cd299 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd29c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cd29e jge 0x100cd2a5 */
  if ((C.sf==C.of)) goto L_100cd2a5;
  /* 100cd2a0 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 100cd2a3 jmp 0x100cd2b7 */
  goto L_100cd2b7;
L_100cd2a5:;
  /* 100cd2a5 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 100cd2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cd2aa je 0x100cd2b7 */
  if (C.zf) goto L_100cd2b7;
  /* 100cd2ac push eax */
  push32((uint32_t)(EAX));
  /* 100cd2ad call 0x100ca1c6 */
  push32(0x100cd2b2u); f_100ca1c6();
  /* 100cd2b2 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 100cd2b6 pop ecx */
  ECX = (pop32());
L_100cd2b7:;
  /* 100cd2b7 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100cd2bb mov eax, edi */
  EAX = (EDI);
  /* 100cd2bd pop edi */
  EDI = (pop32());
  /* 100cd2be pop esi */
  ESI = (pop32());
  /* 100cd2bf ret  */
  ESPCHK(0x100cd274u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2c0 @ 0x100cd2c0 (147 bytes, 52 insns) */
void f_100cd2c0(void) {
  FTRACE(0x100cd2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd2c0 push ebx */
  push32((uint32_t)(EBX));
  /* 100cd2c1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 100cd2c5 cmp ebx, dword ptr [0x100d7d80] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100d7d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd2cb push esi */
  push32((uint32_t)(ESI));
  /* 100cd2cc push edi */
  push32((uint32_t)(EDI));
  /* 100cd2cd jae 0x100cd341 */
  if (!C.cf) goto L_100cd341;
  /* 100cd2cf mov eax, ebx */
  EAX = (EBX);
  /* 100cd2d1 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100cd2d4 lea edi, [eax*4 + 0x100d7c80] */
  EDI = ((uint32_t)(EAX*4 + 0x100d7c80));
  /* 100cd2db mov eax, ebx */
  EAX = (EBX);
  /* 100cd2dd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100cd2e0 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 100cd2e3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100cd2e5 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100cd2e8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100cd2ed je 0x100cd341 */
  if (C.zf) goto L_100cd341;
  /* 100cd2ef push ebx */
  push32((uint32_t)(EBX));
  /* 100cd2f0 call 0x100cc044 */
  push32(0x100cd2f5u); f_100cc044();
  /* 100cd2f5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100cd2f7 pop ecx */
  ECX = (pop32());
  /* 100cd2f8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100cd2fd je 0x100cd328 */
  if (C.zf) goto L_100cd328;
  /* 100cd2ff push ebx */
  push32((uint32_t)(EBX));
  /* 100cd300 call 0x100cc002 */
  push32(0x100cd305u); f_100cc002();
  /* 100cd305 pop ecx */
  ECX = (pop32());
  /* 100cd306 push eax */
  push32((uint32_t)(EAX));
  /* 100cd307 call dword ptr [0x100ce0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0d0))), 0x100cd30du);
  /* 100cd30d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cd30f jne 0x100cd31b */
  if (!C.zf) goto L_100cd31b;
  /* 100cd311 call dword ptr [0x100ce03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce03c))), 0x100cd317u);
  /* 100cd317 mov esi, eax */
  ESI = (EAX);
  /* 100cd319 jmp 0x100cd31d */
  goto L_100cd31d;
L_100cd31b:;
  /* 100cd31b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100cd31d:;
  /* 100cd31d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100cd31f je 0x100cd336 */
  if (C.zf) goto L_100cd336;
  /* 100cd321 call 0x100cbf7a */
  push32(0x100cd326u); f_100cbf7a();
  /* 100cd326 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_100cd328:;
  /* 100cd328 call 0x100cbf71 */
  push32(0x100cd32du); f_100cbf71();
  /* 100cd32d mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100cd333 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_100cd336:;
  /* 100cd336 push ebx */
  push32((uint32_t)(EBX));
  /* 100cd337 call 0x100cc0a3 */
  push32(0x100cd33cu); f_100cc0a3();
  /* 100cd33c pop ecx */
  ECX = (pop32());
  /* 100cd33d mov eax, esi */
  EAX = (ESI);
  /* 100cd33f jmp 0x100cd34f */
  goto L_100cd34f;
L_100cd341:;
  /* 100cd341 call 0x100cbf71 */
  push32(0x100cd346u); f_100cbf71();
  /* 100cd346 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100cd34c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100cd34f:;
  /* 100cd34f pop edi */
  EDI = (pop32());
  /* 100cd350 pop esi */
  ESI = (pop32());
  /* 100cd351 pop ebx */
  EBX = (pop32());
  /* 100cd352 ret  */
  ESPCHK(0x100cd2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x100cd3f0 (62 bytes, 35 insns) */
void f_100cd3f0(void) {
  FTRACE(0x100cd3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 100cd3f1 mov ebp, esp */
  EBP = (ESP);
  /* 100cd3f3 push esi */
  push32((uint32_t)(ESI));
  /* 100cd3f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cd3f6 push eax */
  push32((uint32_t)(EAX));
  /* 100cd3f7 push eax */
  push32((uint32_t)(EAX));
  /* 100cd3f8 push eax */
  push32((uint32_t)(EAX));
  /* 100cd3f9 push eax */
  push32((uint32_t)(EAX));
  /* 100cd3fa push eax */
  push32((uint32_t)(EAX));
  /* 100cd3fb push eax */
  push32((uint32_t)(EAX));
  /* 100cd3fc push eax */
  push32((uint32_t)(EAX));
  /* 100cd3fd push eax */
  push32((uint32_t)(EAX));
  /* 100cd3fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100cd401 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100cd404:;
  /* 100cd404 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 100cd406 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100cd408 je 0x100cd411 */
  if (C.zf) goto L_100cd411;
  /* 100cd40a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100cd40b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x100cd40b");
  /* 100cd40f jmp 0x100cd404 */
  goto L_100cd404;
L_100cd411:;
  /* 100cd411 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100cd414 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 100cd417 nop  */
  /* nop */
L_100cd418:;
  /* 100cd418 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100cd419 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100cd41b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100cd41d je 0x100cd426 */
  if (C.zf) goto L_100cd426;
  /* 100cd41f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cd420 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x100cd420");
  /* 100cd424 jae 0x100cd418 */
  if (!C.cf) goto L_100cd418;
L_100cd426:;
  /* 100cd426 mov eax, ecx */
  EAX = (ECX);
  /* 100cd428 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd42b pop esi */
  ESI = (pop32());
  /* 100cd42c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cd42d ret  */
  ESPCHK(0x100cd3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x100cd430 (58 bytes, 32 insns) */
void f_100cd430(void) {
  FTRACE(0x100cd430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd430 push ebp */
  push32((uint32_t)(EBP));
  /* 100cd431 mov ebp, esp */
  EBP = (ESP);
  /* 100cd433 push esi */
  push32((uint32_t)(ESI));
  /* 100cd434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cd436 push eax */
  push32((uint32_t)(EAX));
  /* 100cd437 push eax */
  push32((uint32_t)(EAX));
  /* 100cd438 push eax */
  push32((uint32_t)(EAX));
  /* 100cd439 push eax */
  push32((uint32_t)(EAX));
  /* 100cd43a push eax */
  push32((uint32_t)(EAX));
  /* 100cd43b push eax */
  push32((uint32_t)(EAX));
  /* 100cd43c push eax */
  push32((uint32_t)(EAX));
  /* 100cd43d push eax */
  push32((uint32_t)(EAX));
  /* 100cd43e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100cd441 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100cd444:;
  /* 100cd444 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 100cd446 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100cd448 je 0x100cd451 */
  if (C.zf) goto L_100cd451;
  /* 100cd44a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100cd44b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x100cd44b");
  /* 100cd44f jmp 0x100cd444 */
  goto L_100cd444;
L_100cd451:;
  /* 100cd451 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_100cd454:;
  /* 100cd454 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100cd456 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100cd458 je 0x100cd464 */
  if (C.zf) goto L_100cd464;
  /* 100cd45a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cd45b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x100cd45b");
  /* 100cd45f jae 0x100cd454 */
  if (!C.cf) goto L_100cd454;
  /* 100cd461 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_100cd464:;
  /* 100cd464 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd467 pop esi */
  ESI = (pop32());
  /* 100cd468 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cd469 ret  */
  ESPCHK(0x100cd430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d46a @ 0x100cd46a (544 bytes, 177 insns) */
void f_100cd46a(void) {
  FTRACE(0x100cd46au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd46a push ebp */
  push32((uint32_t)(EBP));
  /* 100cd46b mov ebp, esp */
  EBP = (ESP);
  /* 100cd46d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cd470 push ebx */
  push32((uint32_t)(EBX));
  /* 100cd471 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 100cd474 push esi */
  push32((uint32_t)(ESI));
  /* 100cd475 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100cd478 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 100cd47c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cd47e push edi */
  push32((uint32_t)(EDI));
  /* 100cd47f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 100cd482 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 100cd485 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100cd488 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 100cd48b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 100cd48f mov edi, ecx */
  EDI = (ECX);
  /* 100cd491 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 100cd496 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 100cd498 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100cd49a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 100cd49c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 100cd4a2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100cd4a6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 100cd4a9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 100cd4ac jae 0x100cd66a */
  if (!C.cf) goto L_100cd66a;
  /* 100cd4b2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100cd4b7 jae 0x100cd66a */
  if (!C.cf) goto L_100cd66a;
  /* 100cd4bd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100cd4c2 ja 0x100cd66a */
  if ((!C.cf&&!C.zf)) goto L_100cd66a;
  /* 100cd4c8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100cd4cd ja 0x100cd4d3 */
  if ((!C.cf&&!C.zf)) goto L_100cd4d3;
  /* 100cd4cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cd4d1 jmp 0x100cd50d */
  goto L_100cd50d;
L_100cd4d3:;
  /* 100cd4d3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 100cd4d6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 100cd4db jne 0x100cd4f5 */
  if (!C.zf) goto L_100cd4f5;
  /* 100cd4dd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 100cd4e0 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 100cd4e3 jne 0x100cd4f5 */
  if (!C.zf) goto L_100cd4f5;
  /* 100cd4e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cd4e7 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd4ea jne 0x100cd4f7 */
  if (!C.zf) goto L_100cd4f7;
  /* 100cd4ec cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd4ee jne 0x100cd4f7 */
  if (!C.zf) goto L_100cd4f7;
  /* 100cd4f0 jmp 0x100cd664 */
  goto L_100cd664;
L_100cd4f5:;
  /* 100cd4f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100cd4f7:;
  /* 100cd4f7 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100cd4fa jne 0x100cd51a */
  if (!C.zf) goto L_100cd51a;
  /* 100cd4fc inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 100cd4ff test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 100cd502 jne 0x100cd51a */
  if (!C.zf) goto L_100cd51a;
  /* 100cd504 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd507 jne 0x100cd51a */
  if (!C.zf) goto L_100cd51a;
  /* 100cd509 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd50b jne 0x100cd51a */
  if (!C.zf) goto L_100cd51a;
L_100cd50d:;
  /* 100cd50d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 100cd510 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 100cd513 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100cd515 jmp 0x100cd685 */
  goto L_100cd685;
L_100cd51a:;
  /* 100cd51a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100cd51d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 100cd520 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100cd523 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_100cd52a:;
  /* 100cd52a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 100cd52d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd52f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd533 jle 0x100cd57e */
  if ((C.zf||C.sf!=C.of)) goto L_100cd57e;
  /* 100cd535 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd537 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 100cd53a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100cd53d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100cd540 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 100cd543 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_100cd546:;
  /* 100cd546 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100cd549 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 100cd54c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 100cd54f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 100cd552 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100cd555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cd558 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd55b push ecx */
  push32((uint32_t)(ECX));
  /* 100cd55c push eax */
  push32((uint32_t)(EAX));
  /* 100cd55d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 100cd55f call 0x100cc615 */
  push32(0x100cd564u); f_100cc615();
  /* 100cd564 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cd569 je 0x100cd571 */
  if (C.zf) goto L_100cd571;
  /* 100cd56b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100cd56e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_100cd571:;
  /* 100cd571 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100cd575 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100cd579 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 100cd57c jne 0x100cd546 */
  if (!C.zf) goto L_100cd546;
L_100cd57e:;
  /* 100cd57e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100cd582 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 100cd585 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 100cd588 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd58c jg 0x100cd52a */
  if ((!C.zf&&C.sf==C.of)) goto L_100cd52a;
  /* 100cd58e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100cd595 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100cd59a jle 0x100cd5c1 */
  if ((C.zf||C.sf!=C.of)) goto L_100cd5c1;
L_100cd59c:;
  /* 100cd59c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 100cd5a0 jne 0x100cd5ba */
  if (!C.zf) goto L_100cd5ba;
  /* 100cd5a2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 100cd5a5 push eax */
  push32((uint32_t)(EAX));
  /* 100cd5a6 call 0x100cc694 */
  push32(0x100cd5abu); f_100cc694();
  /* 100cd5ab add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100cd5b2 pop ecx */
  ECX = (pop32());
  /* 100cd5b3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100cd5b8 jg 0x100cd59c */
  if ((!C.zf&&C.sf==C.of)) goto L_100cd59c;
L_100cd5ba:;
  /* 100cd5ba cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100cd5bf jg 0x100cd5fa */
  if ((!C.zf&&C.sf==C.of)) goto L_100cd5fa;
L_100cd5c1:;
  /* 100cd5c1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100cd5c8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100cd5cd jge 0x100cd5fa */
  if ((C.sf==C.of)) goto L_100cd5fa;
  /* 100cd5cf movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 100cd5d3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100cd5d5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100cd5d8 mov ebx, eax */
  EBX = (EAX);
L_100cd5da:;
  /* 100cd5da test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 100cd5de je 0x100cd5e3 */
  if (C.zf) goto L_100cd5e3;
  /* 100cd5e0 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_100cd5e3:;
  /* 100cd5e3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 100cd5e6 push eax */
  push32((uint32_t)(EAX));
  /* 100cd5e7 call 0x100cc6c2 */
  push32(0x100cd5ecu); f_100cc6c2();
  /* 100cd5ec dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100cd5ed pop ecx */
  ECX = (pop32());
  /* 100cd5ee jne 0x100cd5da */
  if (!C.zf) goto L_100cd5da;
  /* 100cd5f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd5f4 je 0x100cd5fa */
  if (C.zf) goto L_100cd5fa;
  /* 100cd5f6 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_100cd5fa:;
  /* 100cd5fa cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100cd600 ja 0x100cd611 */
  if ((!C.cf&&!C.zf)) goto L_100cd611;
  /* 100cd602 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 100cd605 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100cd60a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd60f jne 0x100cd646 */
  if (!C.zf) goto L_100cd646;
L_100cd611:;
  /* 100cd611 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd615 jne 0x100cd643 */
  if (!C.zf) goto L_100cd643;
  /* 100cd617 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 100cd61b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd61f jne 0x100cd63e */
  if (!C.zf) goto L_100cd63e;
  /* 100cd621 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 100cd625 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100cd62b jne 0x100cd638 */
  if (!C.zf) goto L_100cd638;
  /* 100cd62d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 100cd630 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 100cd636 jmp 0x100cd646 */
  goto L_100cd646;
L_100cd638:;
  /* 100cd638 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 100cd63c jmp 0x100cd646 */
  goto L_100cd646;
L_100cd63e:;
  /* 100cd63e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 100cd641 jmp 0x100cd646 */
  goto L_100cd646;
L_100cd643:;
  /* 100cd643 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_100cd646:;
  /* 100cd646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cd649 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100cd64d jae 0x100cd66a */
  if (!C.cf) goto L_100cd66a;
  /* 100cd64f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 100cd653 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100cd655 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 100cd658 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 100cd65b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 100cd65e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 100cd661 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_100cd664:;
  /* 100cd664 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 100cd668 jmp 0x100cd685 */
  goto L_100cd685;
L_100cd66a:;
  /* 100cd66a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 100cd66d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cd66f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100cd673 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 100cd679 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd67f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100cd682 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_100cd685:;
  /* 100cd685 pop edi */
  EDI = (pop32());
  /* 100cd686 pop esi */
  ESI = (pop32());
  /* 100cd687 pop ebx */
  EBX = (pop32());
  /* 100cd688 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cd689 ret  */
  ESPCHK(0x100cd46au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d68a @ 0x100cd68a (124 bytes, 52 insns) */
void f_100cd68a(void) {
  FTRACE(0x100cd68au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd68a push ebp */
  push32((uint32_t)(EBP));
  /* 100cd68b mov ebp, esp */
  EBP = (ESP);
  /* 100cd68d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cd690 push ebx */
  push32((uint32_t)(EBX));
  /* 100cd691 mov ebx, 0x100d3260 */
  EBX = (0x100d3260u);
  /* 100cd696 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100cd698 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cd69b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd69e je 0x100cd703 */
  if (C.zf) goto L_100cd703;
  /* 100cd6a0 jge 0x100cd6b2 */
  if ((C.sf==C.of)) goto L_100cd6b2;
  /* 100cd6a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100cd6a5 mov ebx, 0x100d33c0 */
  EBX = (0x100d33c0u);
  /* 100cd6aa neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100cd6ac mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100cd6af sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_100cd6b2:;
  /* 100cd6b2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd6b5 jne 0x100cd6bd */
  if (!C.zf) goto L_100cd6bd;
  /* 100cd6b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100cd6ba mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_100cd6bd:;
  /* 100cd6bd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd6c0 je 0x100cd703 */
  if (C.zf) goto L_100cd703;
  /* 100cd6c2 push esi */
  push32((uint32_t)(ESI));
  /* 100cd6c3 push edi */
  push32((uint32_t)(EDI));
L_100cd6c4:;
  /* 100cd6c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100cd6c7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd6ca sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 100cd6ce and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 100cd6d1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd6d3 je 0x100cd6fc */
  if (C.zf) goto L_100cd6fc;
  /* 100cd6d5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 100cd6d8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100cd6de lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 100cd6e1 jb 0x100cd6ef */
  if (C.cf) goto L_100cd6ef;
  /* 100cd6e3 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 100cd6e6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100cd6e7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100cd6e8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100cd6e9 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 100cd6ec lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_100cd6ef:;
  /* 100cd6ef push esi */
  push32((uint32_t)(ESI));
  /* 100cd6f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100cd6f3 call 0x100cd46a */
  push32(0x100cd6f8u); f_100cd46a();
  /* 100cd6f8 pop ecx */
  ECX = (pop32());
  /* 100cd6f9 pop ecx */
  ECX = (pop32());
  /* 100cd6fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_100cd6fc:;
  /* 100cd6fc cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd6ff jne 0x100cd6c4 */
  if (!C.zf) goto L_100cd6c4;
  /* 100cd701 pop edi */
  EDI = (pop32());
  /* 100cd702 pop esi */
  ESI = (pop32());
L_100cd703:;
  /* 100cd703 pop ebx */
  EBX = (pop32());
  /* 100cd704 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cd705 ret  */
  ESPCHK(0x100cd68au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d706 @ 0x100cd706 (93 bytes, 32 insns) */
void f_100cd706(void) {
  FTRACE(0x100cd706u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd706 push esi */
  push32((uint32_t)(ESI));
  /* 100cd707 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100cd70b cmp esi, dword ptr [0x100d7d80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100d7d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd711 jae 0x100cd74b */
  if (!C.cf) goto L_100cd74b;
  /* 100cd713 mov ecx, esi */
  ECX = (ESI);
  /* 100cd715 mov eax, esi */
  EAX = (ESI);
  /* 100cd717 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100cd71a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100cd71d mov ecx, dword ptr [ecx*4 + 0x100d7c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100d7c80)));
  /* 100cd724 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100cd727 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100cd72c je 0x100cd74b */
  if (C.zf) goto L_100cd74b;
  /* 100cd72e push edi */
  push32((uint32_t)(EDI));
  /* 100cd72f push esi */
  push32((uint32_t)(ESI));
  /* 100cd730 call 0x100cc044 */
  push32(0x100cd735u); f_100cc044();
  /* 100cd735 push esi */
  push32((uint32_t)(ESI));
  /* 100cd736 call 0x100cd763 */
  push32(0x100cd73bu); f_100cd763();
  /* 100cd73b push esi */
  push32((uint32_t)(ESI));
  /* 100cd73c mov edi, eax */
  EDI = (EAX);
  /* 100cd73e call 0x100cc0a3 */
  push32(0x100cd743u); f_100cc0a3();
  /* 100cd743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd746 mov eax, edi */
  EAX = (EDI);
  /* 100cd748 pop edi */
  EDI = (pop32());
  /* 100cd749 pop esi */
  ESI = (pop32());
  /* 100cd74a ret  */
  ESPCHK(0x100cd706u, _esp0);
  ESP += 4; return;
L_100cd74b:;
  /* 100cd74b call 0x100cbf71 */
  push32(0x100cd750u); f_100cbf71();
  /* 100cd750 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100cd756 call 0x100cbf7a */
  push32(0x100cd75bu); f_100cbf7a();
  /* 100cd75b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100cd75e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100cd761 pop esi */
  ESI = (pop32());
  /* 100cd762 ret  */
  ESPCHK(0x100cd706u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d763 @ 0x100cd763 (131 bytes, 52 insns) */
void f_100cd763(void) {
  FTRACE(0x100cd763u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd763 push esi */
  push32((uint32_t)(ESI));
  /* 100cd764 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100cd768 push edi */
  push32((uint32_t)(EDI));
  /* 100cd769 push esi */
  push32((uint32_t)(ESI));
  /* 100cd76a call 0x100cc002 */
  push32(0x100cd76fu); f_100cc002();
  /* 100cd76f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd772 pop ecx */
  ECX = (pop32());
  /* 100cd773 je 0x100cd7b1 */
  if (C.zf) goto L_100cd7b1;
  /* 100cd775 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd778 je 0x100cd77f */
  if (C.zf) goto L_100cd77f;
  /* 100cd77a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd77d jne 0x100cd795 */
  if (!C.zf) goto L_100cd795;
L_100cd77f:;
  /* 100cd77f push 2 */
  push32((uint32_t)(0x2u));
  /* 100cd781 call 0x100cc002 */
  push32(0x100cd786u); f_100cc002();
  /* 100cd786 push 1 */
  push32((uint32_t)(0x1u));
  /* 100cd788 mov edi, eax */
  EDI = (EAX);
  /* 100cd78a call 0x100cc002 */
  push32(0x100cd78fu); f_100cc002();
  /* 100cd78f pop ecx */
  ECX = (pop32());
  /* 100cd790 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd792 pop ecx */
  ECX = (pop32());
  /* 100cd793 je 0x100cd7b1 */
  if (C.zf) goto L_100cd7b1;
L_100cd795:;
  /* 100cd795 push esi */
  push32((uint32_t)(ESI));
  /* 100cd796 call 0x100cc002 */
  push32(0x100cd79bu); f_100cc002();
  /* 100cd79b pop ecx */
  ECX = (pop32());
  /* 100cd79c push eax */
  push32((uint32_t)(EAX));
  /* 100cd79d call dword ptr [0x100ce0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce0d4))), 0x100cd7a3u);
  /* 100cd7a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100cd7a5 jne 0x100cd7b1 */
  if (!C.zf) goto L_100cd7b1;
  /* 100cd7a7 call dword ptr [0x100ce03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ce03c))), 0x100cd7adu);
  /* 100cd7ad mov edi, eax */
  EDI = (EAX);
  /* 100cd7af jmp 0x100cd7b3 */
  goto L_100cd7b3;
L_100cd7b1:;
  /* 100cd7b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_100cd7b3:;
  /* 100cd7b3 push esi */
  push32((uint32_t)(ESI));
  /* 100cd7b4 call 0x100cbf83 */
  push32(0x100cd7b9u); f_100cbf83();
  /* 100cd7b9 mov eax, esi */
  EAX = (ESI);
  /* 100cd7bb and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 100cd7be sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100cd7c1 pop ecx */
  ECX = (pop32());
  /* 100cd7c2 mov eax, dword ptr [eax*4 + 0x100d7c80] */
  EAX = (r32((uint32_t)(EAX*4 + 0x100d7c80)));
  /* 100cd7c9 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 100cd7cc and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 100cd7d1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100cd7d3 je 0x100cd7e1 */
  if (C.zf) goto L_100cd7e1;
  /* 100cd7d5 push edi */
  push32((uint32_t)(EDI));
  /* 100cd7d6 call 0x100cbefe */
  push32(0x100cd7dbu); f_100cbefe();
  /* 100cd7db pop ecx */
  ECX = (pop32());
  /* 100cd7dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100cd7df jmp 0x100cd7e3 */
  goto L_100cd7e3;
L_100cd7e1:;
  /* 100cd7e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100cd7e3:;
  /* 100cd7e3 pop edi */
  EDI = (pop32());
  /* 100cd7e4 pop esi */
  ESI = (pop32());
  /* 100cd7e5 ret  */
  ESPCHK(0x100cd763u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x100cd7e6 (43 bytes, 17 insns) */
void f_100cd7e6(void) {
  FTRACE(0x100cd7e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd7e6 push esi */
  push32((uint32_t)(ESI));
  /* 100cd7e7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100cd7eb mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100cd7ee test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 100cd7f0 je 0x100cd80f */
  if (C.zf) goto L_100cd80f;
  /* 100cd7f2 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 100cd7f4 je 0x100cd80f */
  if (C.zf) goto L_100cd80f;
  /* 100cd7f6 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 100cd7f9 call 0x100ca1c6 */
  push32(0x100cd7feu); f_100ca1c6();
  /* 100cd7fe and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 100cd804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cd806 pop ecx */
  ECX = (pop32());
  /* 100cd807 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100cd809 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 100cd80c mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_100cd80f:;
  /* 100cd80f pop esi */
  ESI = (pop32());
  /* 100cd810 ret  */
  ESPCHK(0x100cd7e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x100cd820 (208 bytes, 85 insns) */
void f_100cd820(void) {
  FTRACE(0x100cd820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd820 push ebp */
  push32((uint32_t)(EBP));
  /* 100cd821 mov ebp, esp */
  EBP = (ESP);
  /* 100cd823 push edi */
  push32((uint32_t)(EDI));
  /* 100cd824 push esi */
  push32((uint32_t)(ESI));
  /* 100cd825 push ebx */
  push32((uint32_t)(EBX));
  /* 100cd826 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100cd829 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100cd82c lea eax, [0x100d6870] */
  EAX = ((uint32_t)(0x100d6870));
  /* 100cd832 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd836 jne 0x100cd873 */
  if (!C.zf) goto L_100cd873;
  /* 100cd838 mov al, 0xff */
  AL = (0xffu);
  /* 100cd83a mov edi, edi */
  EDI = (EDI);
L_100cd83c:;
  /* 100cd83c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100cd83e je 0x100cd86e */
  if (C.zf) goto L_100cd86e;
  /* 100cd840 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100cd842 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cd843 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 100cd845 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100cd846 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cd848 je 0x100cd83c */
  if (C.zf) goto L_100cd83c;
  /* 100cd84a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100cd84c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cd84e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100cd850 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 100cd853 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100cd855 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100cd857 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 100cd859 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100cd85b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cd85d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100cd85f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 100cd862 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100cd864 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100cd866 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cd868 je 0x100cd83c */
  if (C.zf) goto L_100cd83c;
  /* 100cd86a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100cd86c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_100cd86e:;
  /* 100cd86e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 100cd871 jmp 0x100cd8eb */
  goto L_100cd8eb;
L_100cd873:;
  /* 100cd873 lock inc dword ptr [0x100d69f4] */
  x86_unimpl("lock inc @ 0x100cd873");
  /* 100cd87a cmp dword ptr [0x100d69f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100d69f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd881 jg 0x100cd887 */
  if ((!C.zf&&C.sf==C.of)) goto L_100cd887;
  /* 100cd883 push 0 */
  push32((uint32_t)(0x0u));
  /* 100cd885 jmp 0x100cd89c */
  goto L_100cd89c;
L_100cd887:;
  /* 100cd887 lock dec dword ptr [0x100d69f4] */
  x86_unimpl("lock dec @ 0x100cd887");
  /* 100cd88e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100cd890 call 0x100ca013 */
  push32(0x100cd895u); f_100ca013();
  /* 100cd895 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_100cd89c:;
  /* 100cd89c mov eax, 0xff */
  EAX = (0xffu);
  /* 100cd8a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100cd8a3 nop  */
  /* nop */
L_100cd8a4:;
  /* 100cd8a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100cd8a6 je 0x100cd8cf */
  if (C.zf) goto L_100cd8cf;
  /* 100cd8a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100cd8aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cd8ab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100cd8ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100cd8ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cd8b0 je 0x100cd8a4 */
  if (C.zf) goto L_100cd8a4;
  /* 100cd8b2 push eax */
  push32((uint32_t)(EAX));
  /* 100cd8b3 push ebx */
  push32((uint32_t)(EBX));
  /* 100cd8b4 call 0x100c94af */
  push32(0x100cd8b9u); f_100c94af();
  /* 100cd8b9 mov ebx, eax */
  EBX = (EAX);
  /* 100cd8bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd8be call 0x100c94af */
  push32(0x100cd8c3u); f_100c94af();
  /* 100cd8c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd8c6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cd8c8 je 0x100cd8a4 */
  if (C.zf) goto L_100cd8a4;
  /* 100cd8ca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100cd8cc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_100cd8cf:;
  /* 100cd8cf mov ebx, eax */
  EBX = (EAX);
  /* 100cd8d1 pop eax */
  EAX = (pop32());
  /* 100cd8d2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cd8d4 jne 0x100cd8df */
  if (!C.zf) goto L_100cd8df;
  /* 100cd8d6 lock dec dword ptr [0x100d69f4] */
  x86_unimpl("lock dec @ 0x100cd8d6");
  /* 100cd8dd jmp 0x100cd8e9 */
  goto L_100cd8e9;
L_100cd8df:;
  /* 100cd8df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100cd8e1 call 0x100ca074 */
  push32(0x100cd8e6u); f_100ca074();
  /* 100cd8e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100cd8e9:;
  /* 100cd8e9 mov eax, ebx */
  EAX = (EBX);
L_100cd8eb:;
  /* 100cd8eb pop ebx */
  EBX = (pop32());
  /* 100cd8ec pop esi */
  ESI = (pop32());
  /* 100cd8ed pop edi */
  EDI = (pop32());
  /* 100cd8ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cd8ef ret  */
  ESPCHK(0x100cd820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8f0 @ 0x100cd8f0 (257 bytes, 103 insns) */
void f_100cd8f0(void) {
  FTRACE(0x100cd8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cd8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 100cd8f1 mov ebp, esp */
  EBP = (ESP);
  /* 100cd8f3 push edi */
  push32((uint32_t)(EDI));
  /* 100cd8f4 push esi */
  push32((uint32_t)(ESI));
  /* 100cd8f5 push ebx */
  push32((uint32_t)(EBX));
  /* 100cd8f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 100cd8f9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100cd8fb je 0x100cd9ea */
  if (C.zf) goto L_100cd9ea;
  /* 100cd901 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100cd904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100cd907 lea eax, [0x100d6870] */
  EAX = ((uint32_t)(0x100d6870));
  /* 100cd90d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd911 jne 0x100cd961 */
  if (!C.zf) goto L_100cd961;
  /* 100cd913 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 100cd915 mov bl, 0x5a */
  BL = (0x5au);
  /* 100cd917 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 100cd919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100cd91c:;
  /* 100cd91c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 100cd91e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 100cd920 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 100cd922 je 0x100cd945 */
  if (C.zf) goto L_100cd945;
  /* 100cd924 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100cd926 je 0x100cd945 */
  if (C.zf) goto L_100cd945;
  /* 100cd928 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cd929 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100cd92a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cd92c jb 0x100cd934 */
  if (C.cf) goto L_100cd934;
  /* 100cd92e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cd930 ja 0x100cd934 */
  if ((!C.cf&&!C.zf)) goto L_100cd934;
  /* 100cd932 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_100cd934:;
  /* 100cd934 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cd936 jb 0x100cd93e */
  if (C.cf) goto L_100cd93e;
  /* 100cd938 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cd93a ja 0x100cd93e */
  if ((!C.cf&&!C.zf)) goto L_100cd93e;
  /* 100cd93c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_100cd93e:;
  /* 100cd93e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cd940 jne 0x100cd94f */
  if (!C.zf) goto L_100cd94f;
  /* 100cd942 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100cd943 jne 0x100cd91c */
  if (!C.zf) goto L_100cd91c;
L_100cd945:;
  /* 100cd945 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100cd947 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100cd949 je 0x100cd9ea */
  if (C.zf) goto L_100cd9ea;
L_100cd94f:;
  /* 100cd94f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 100cd954 jb 0x100cd9ea */
  if (C.cf) goto L_100cd9ea;
  /* 100cd95a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100cd95c jmp 0x100cd9ea */
  goto L_100cd9ea;
L_100cd961:;
  /* 100cd961 lock inc dword ptr [0x100d69f4] */
  x86_unimpl("lock inc @ 0x100cd961");
  /* 100cd968 cmp dword ptr [0x100d69f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100d69f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd96f jg 0x100cd975 */
  if ((!C.zf&&C.sf==C.of)) goto L_100cd975;
  /* 100cd971 push 0 */
  push32((uint32_t)(0x0u));
  /* 100cd973 jmp 0x100cd98e */
  goto L_100cd98e;
L_100cd975:;
  /* 100cd975 lock dec dword ptr [0x100d69f4] */
  x86_unimpl("lock dec @ 0x100cd975");
  /* 100cd97c mov ebx, ecx */
  EBX = (ECX);
  /* 100cd97e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100cd980 call 0x100ca013 */
  push32(0x100cd985u); f_100ca013();
  /* 100cd985 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 100cd98c mov ecx, ebx */
  ECX = (EBX);
L_100cd98e:;
  /* 100cd98e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cd990 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100cd992 mov edi, edi */
  EDI = (EDI);
L_100cd994:;
  /* 100cd994 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100cd996 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cd998 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100cd99a je 0x100cd9bf */
  if (C.zf) goto L_100cd9bf;
  /* 100cd99c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100cd99e je 0x100cd9bf */
  if (C.zf) goto L_100cd9bf;
  /* 100cd9a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100cd9a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100cd9a2 push ecx */
  push32((uint32_t)(ECX));
  /* 100cd9a3 push eax */
  push32((uint32_t)(EAX));
  /* 100cd9a4 push ebx */
  push32((uint32_t)(EBX));
  /* 100cd9a5 call 0x100c94af */
  push32(0x100cd9aau); f_100c94af();
  /* 100cd9aa mov ebx, eax */
  EBX = (EAX);
  /* 100cd9ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd9af call 0x100c94af */
  push32(0x100cd9b4u); f_100c94af();
  /* 100cd9b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd9b7 pop ecx */
  ECX = (pop32());
  /* 100cd9b8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd9ba jne 0x100cd9c5 */
  if (!C.zf) goto L_100cd9c5;
  /* 100cd9bc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100cd9bd jne 0x100cd994 */
  if (!C.zf) goto L_100cd994;
L_100cd9bf:;
  /* 100cd9bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100cd9c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100cd9c3 je 0x100cd9ce */
  if (C.zf) goto L_100cd9ce;
L_100cd9c5:;
  /* 100cd9c5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 100cd9ca jb 0x100cd9ce */
  if (C.cf) goto L_100cd9ce;
  /* 100cd9cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_100cd9ce:;
  /* 100cd9ce pop eax */
  EAX = (pop32());
  /* 100cd9cf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100cd9d1 jne 0x100cd9dc */
  if (!C.zf) goto L_100cd9dc;
  /* 100cd9d3 lock dec dword ptr [0x100d69f4] */
  x86_unimpl("lock dec @ 0x100cd9d3");
  /* 100cd9da jmp 0x100cd9ea */
  goto L_100cd9ea;
L_100cd9dc:;
  /* 100cd9dc mov ebx, ecx */
  EBX = (ECX);
  /* 100cd9de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100cd9e0 call 0x100ca074 */
  push32(0x100cd9e5u); f_100ca074();
  /* 100cd9e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100cd9e8 mov ecx, ebx */
  ECX = (EBX);
L_100cd9ea:;
  /* 100cd9ea mov eax, ecx */
  EAX = (ECX);
  /* 100cd9ec pop ebx */
  EBX = (pop32());
  /* 100cd9ed pop esi */
  ESI = (pop32());
  /* 100cd9ee pop edi */
  EDI = (pop32());
  /* 100cd9ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100cd9f0 ret  */
  ESPCHK(0x100cd8f0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x100cda34 (6 bytes, 1 insns) */
void f_100cda34(void) {
  FTRACE(0x100cda34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100cda34 jmp dword ptr [0x100ce0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100ce0cc)))); return;
}

