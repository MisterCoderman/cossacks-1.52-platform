#include "recomp.h"

/* FUN_10009265 @ 0x100e9265 (53 bytes, 25 insns) */
void f_100e9265(void) {
  FTRACE(0x100e9265u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9265 push ebp */
  push32((uint32_t)(EBP));
  /* 100e9266 mov ebp, esp */
  EBP = (ESP);
  /* 100e9268 push ecx */
  push32((uint32_t)(ECX));
  /* 100e9269 push esi */
  push32((uint32_t)(ESI));
  /* 100e926a wait  */
  /* wait (no observable integer/reg state) */
  /* 100e926b fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 100e926e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 100e9271 call 0x100e92b0 */
  push32(0x100e9276u); f_100e92b0();
  /* 100e9276 mov esi, eax */
  ESI = (EAX);
  /* 100e9278 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e927b not eax */
  EAX = (~(EAX));
  /* 100e927d and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 100e927f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9282 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 100e9285 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 100e9287 push esi */
  push32((uint32_t)(ESI));
  /* 100e9288 call 0x100e9342 */
  push32(0x100e928du); f_100e9342();
  /* 100e928d pop ecx */
  ECX = (pop32());
  /* 100e928e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100e9291 pop ecx */
  ECX = (pop32());
  /* 100e9292 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 100e9295 mov eax, esi */
  EAX = (ESI);
  /* 100e9297 pop esi */
  ESI = (pop32());
  /* 100e9298 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9299 ret  */
  ESPCHK(0x100e9265u, _esp0);
  ESP += 4; return;
}

/* FUN_1000929a @ 0x100e929a (22 bytes, 8 insns) */
void f_100e929a(void) {
  FTRACE(0x100e929au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e929a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e929e and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100e92a3 push eax */
  push32((uint32_t)(EAX));
  /* 100e92a4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100e92a8 call 0x100e9265 */
  push32(0x100e92adu); f_100e9265();
  /* 100e92ad pop ecx */
  ECX = (pop32());
  /* 100e92ae pop ecx */
  ECX = (pop32());
  /* 100e92af ret  */
  ESPCHK(0x100e929au, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x100e92b0 (146 bytes, 58 insns) */
void f_100e92b0(void) {
  FTRACE(0x100e92b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e92b0 push ebx */
  push32((uint32_t)(EBX));
  /* 100e92b1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e92b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e92b7 push ebp */
  push32((uint32_t)(EBP));
  /* 100e92b8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100e92bb push edi */
  push32((uint32_t)(EDI));
  /* 100e92bc je 0x100e92c1 */
  if (C.zf) goto L_100e92c1;
  /* 100e92be push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100e92c0 pop eax */
  EAX = (pop32());
L_100e92c1:;
  /* 100e92c1 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 100e92c4 je 0x100e92c8 */
  if (C.zf) goto L_100e92c8;
  /* 100e92c6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_100e92c8:;
  /* 100e92c8 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 100e92cb je 0x100e92cf */
  if (C.zf) goto L_100e92cf;
  /* 100e92cd or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_100e92cf:;
  /* 100e92cf test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 100e92d2 je 0x100e92d6 */
  if (C.zf) goto L_100e92d6;
  /* 100e92d4 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_100e92d6:;
  /* 100e92d6 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 100e92d9 je 0x100e92dd */
  if (C.zf) goto L_100e92dd;
  /* 100e92db or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_100e92dd:;
  /* 100e92dd test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 100e92e0 je 0x100e92e7 */
  if (C.zf) goto L_100e92e7;
  /* 100e92e2 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_100e92e7:;
  /* 100e92e7 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 100e92ea push esi */
  push32((uint32_t)(ESI));
  /* 100e92eb mov edx, ecx */
  EDX = (ECX);
  /* 100e92ed mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 100e92f2 mov edi, 0x300 */
  EDI = (0x300u);
  /* 100e92f7 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 100e92f9 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 100e92fe je 0x100e931f */
  if (C.zf) goto L_100e931f;
  /* 100e9300 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9306 je 0x100e931c */
  if (C.zf) goto L_100e931c;
  /* 100e9308 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e930e je 0x100e9318 */
  if (C.zf) goto L_100e9318;
  /* 100e9310 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9312 jne 0x100e931f */
  if (!C.zf) goto L_100e931f;
  /* 100e9314 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100e9316 jmp 0x100e931f */
  goto L_100e931f;
L_100e9318:;
  /* 100e9318 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 100e931a jmp 0x100e931f */
  goto L_100e931f;
L_100e931c:;
  /* 100e931c or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_100e931f:;
  /* 100e931f and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100e9321 pop esi */
  ESI = (pop32());
  /* 100e9322 je 0x100e932f */
  if (C.zf) goto L_100e932f;
  /* 100e9324 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9326 jne 0x100e9334 */
  if (!C.zf) goto L_100e9334;
  /* 100e9328 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 100e932d jmp 0x100e9334 */
  goto L_100e9334;
L_100e932f:;
  /* 100e932f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_100e9334:;
  /* 100e9334 pop edi */
  EDI = (pop32());
  /* 100e9335 pop ebp */
  EBP = (pop32());
  /* 100e9336 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 100e9339 pop ebx */
  EBX = (pop32());
  /* 100e933a je 0x100e9341 */
  if (C.zf) goto L_100e9341;
  /* 100e933c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_100e9341:;
  /* 100e9341 ret  */
  ESPCHK(0x100e92b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009342 @ 0x100e9342 (137 bytes, 53 insns) */
void f_100e9342(void) {
  FTRACE(0x100e9342u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9342 push ebx */
  push32((uint32_t)(EBX));
  /* 100e9343 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e9347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e9349 push esi */
  push32((uint32_t)(ESI));
  /* 100e934a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 100e934d je 0x100e9352 */
  if (C.zf) goto L_100e9352;
  /* 100e934f push 1 */
  push32((uint32_t)(0x1u));
  /* 100e9351 pop eax */
  EAX = (pop32());
L_100e9352:;
  /* 100e9352 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 100e9355 je 0x100e9359 */
  if (C.zf) goto L_100e9359;
  /* 100e9357 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_100e9359:;
  /* 100e9359 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 100e935c je 0x100e9360 */
  if (C.zf) goto L_100e9360;
  /* 100e935e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_100e9360:;
  /* 100e9360 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 100e9363 je 0x100e9367 */
  if (C.zf) goto L_100e9367;
  /* 100e9365 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_100e9367:;
  /* 100e9367 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100e936a je 0x100e936e */
  if (C.zf) goto L_100e936e;
  /* 100e936c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_100e936e:;
  /* 100e936e test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 100e9374 je 0x100e9378 */
  if (C.zf) goto L_100e9378;
  /* 100e9376 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_100e9378:;
  /* 100e9378 mov ecx, ebx */
  ECX = (EBX);
  /* 100e937a mov edx, 0x300 */
  EDX = (0x300u);
  /* 100e937f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 100e9381 mov esi, 0x200 */
  ESI = (0x200u);
  /* 100e9386 je 0x100e93a5 */
  if (C.zf) goto L_100e93a5;
  /* 100e9388 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e938e je 0x100e93a2 */
  if (C.zf) goto L_100e93a2;
  /* 100e9390 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9392 je 0x100e939d */
  if (C.zf) goto L_100e939d;
  /* 100e9394 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9396 jne 0x100e93a5 */
  if (!C.zf) goto L_100e93a5;
  /* 100e9398 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 100e939b jmp 0x100e93a5 */
  goto L_100e93a5;
L_100e939d:;
  /* 100e939d or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 100e93a0 jmp 0x100e93a5 */
  goto L_100e93a5;
L_100e93a2:;
  /* 100e93a2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_100e93a5:;
  /* 100e93a5 mov ecx, ebx */
  ECX = (EBX);
  /* 100e93a7 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 100e93ad je 0x100e93bb */
  if (C.zf) goto L_100e93bb;
  /* 100e93af cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e93b5 jne 0x100e93bd */
  if (!C.zf) goto L_100e93bd;
  /* 100e93b7 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 100e93b9 jmp 0x100e93bd */
  goto L_100e93bd;
L_100e93bb:;
  /* 100e93bb or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_100e93bd:;
  /* 100e93bd pop esi */
  ESI = (pop32());
  /* 100e93be test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 100e93c4 pop ebx */
  EBX = (pop32());
  /* 100e93c5 je 0x100e93ca */
  if (C.zf) goto L_100e93ca;
  /* 100e93c7 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_100e93ca:;
  /* 100e93ca ret  */
  ESPCHK(0x100e9342u, _esp0);
  ESP += 4; return;
}

/* FUN_100093cb @ 0x100e93cb (117 bytes, 46 insns) */
void f_100e93cb(void) {
  FTRACE(0x100e93cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e93cb push ebp */
  push32((uint32_t)(EBP));
  /* 100e93cc mov ebp, esp */
  EBP = (ESP);
  /* 100e93ce push ecx */
  push32((uint32_t)(ECX));
  /* 100e93cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e93d2 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 100e93d5 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e93db ja 0x100e93e9 */
  if ((!C.cf&&!C.zf)) goto L_100e93e9;
  /* 100e93dd mov ecx, dword ptr [0x100f09d0] */
  ECX = (r32((uint32_t)(0x100f09d0)));
  /* 100e93e3 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 100e93e7 jmp 0x100e943b */
  goto L_100e943b;
L_100e93e9:;
  /* 100e93e9 mov ecx, eax */
  ECX = (EAX);
  /* 100e93eb push esi */
  push32((uint32_t)(ESI));
  /* 100e93ec mov esi, dword ptr [0x100f09d0] */
  ESI = (r32((uint32_t)(0x100f09d0)));
  /* 100e93f2 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 100e93f5 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 100e93f8 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100e93fd pop esi */
  ESI = (pop32());
  /* 100e93fe je 0x100e940e */
  if (C.zf) goto L_100e940e;
  /* 100e9400 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 100e9404 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 100e9407 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 100e940a push 2 */
  push32((uint32_t)(0x2u));
  /* 100e940c jmp 0x100e9417 */
  goto L_100e9417;
L_100e940e:;
  /* 100e940e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 100e9412 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 100e9415 push 1 */
  push32((uint32_t)(0x1u));
L_100e9417:;
  /* 100e9417 pop eax */
  EAX = (pop32());
  /* 100e9418 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 100e941b push 1 */
  push32((uint32_t)(0x1u));
  /* 100e941d push 0 */
  push32((uint32_t)(0x0u));
  /* 100e941f push 0 */
  push32((uint32_t)(0x0u));
  /* 100e9421 push ecx */
  push32((uint32_t)(ECX));
  /* 100e9422 push eax */
  push32((uint32_t)(EAX));
  /* 100e9423 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 100e9426 push eax */
  push32((uint32_t)(EAX));
  /* 100e9427 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e9429 call 0x100ec27d */
  push32(0x100e942eu); f_100ec27d();
  /* 100e942e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9431 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e9433 jne 0x100e9437 */
  if (!C.zf) goto L_100e9437;
  /* 100e9435 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9436 ret  */
  ESPCHK(0x100e93cbu, _esp0);
  ESP += 4; return;
L_100e9437:;
  /* 100e9437 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_100e943b:;
  /* 100e943b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 100e943e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e943f ret  */
  ESPCHK(0x100e93cbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009440 @ 0x100e9440 (111 bytes, 44 insns) */
void f_100e9440(void) {
  FTRACE(0x100e9440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9440 push ebx */
  push32((uint32_t)(EBX));
  /* 100e9441 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100e9443 cmp dword ptr [0x100f6838], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100f6838))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9449 jne 0x100e945e */
  if (!C.zf) goto L_100e945e;
  /* 100e944b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e944f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9452 jl 0x100e94ad */
  if ((C.sf!=C.of)) goto L_100e94ad;
  /* 100e9454 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9457 jg 0x100e94ad */
  if ((!C.zf&&C.sf==C.of)) goto L_100e94ad;
  /* 100e9459 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e945c pop ebx */
  EBX = (pop32());
  /* 100e945d ret  */
  ESPCHK(0x100e9440u, _esp0);
  ESP += 4; return;
L_100e945e:;
  /* 100e945e push esi */
  push32((uint32_t)(ESI));
  /* 100e945f mov esi, 0x100f69b4 */
  ESI = (0x100f69b4u);
  /* 100e9464 push edi */
  push32((uint32_t)(EDI));
  /* 100e9465 push esi */
  push32((uint32_t)(ESI));
  /* 100e9466 call dword ptr [0x100ee090] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee090))), 0x100e946cu);
  /* 100e946c cmp dword ptr [0x100f69b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100f69b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9472 mov edi, dword ptr [0x100ee08c] */
  EDI = (r32((uint32_t)(0x100ee08c)));
  /* 100e9478 je 0x100e9488 */
  if (C.zf) goto L_100e9488;
  /* 100e947a push esi */
  push32((uint32_t)(ESI));
  /* 100e947b call edi */
  call_ind((uint32_t)(EDI), 0x100e947du);
  /* 100e947d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100e947f call 0x100ea013 */
  push32(0x100e9484u); f_100ea013();
  /* 100e9484 pop ecx */
  ECX = (pop32());
  /* 100e9485 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e9487 pop ebx */
  EBX = (pop32());
L_100e9488:;
  /* 100e9488 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100e948c call 0x100e94af */
  push32(0x100e9491u); f_100e94af();
  /* 100e9491 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100e9493 pop ecx */
  ECX = (pop32());
  /* 100e9494 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 100e9498 je 0x100e94a4 */
  if (C.zf) goto L_100e94a4;
  /* 100e949a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100e949c call 0x100ea074 */
  push32(0x100e94a1u); f_100ea074();
  /* 100e94a1 pop ecx */
  ECX = (pop32());
  /* 100e94a2 jmp 0x100e94a7 */
  goto L_100e94a7;
L_100e94a4:;
  /* 100e94a4 push esi */
  push32((uint32_t)(ESI));
  /* 100e94a5 call edi */
  call_ind((uint32_t)(EDI), 0x100e94a7u);
L_100e94a7:;
  /* 100e94a7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100e94ab pop edi */
  EDI = (pop32());
  /* 100e94ac pop esi */
  ESI = (pop32());
L_100e94ad:;
  /* 100e94ad pop ebx */
  EBX = (pop32());
  /* 100e94ae ret  */
  ESPCHK(0x100e9440u, _esp0);
  ESP += 4; return;
}

/* FUN_100094af @ 0x100e94af (203 bytes, 78 insns) */
void f_100e94af(void) {
  FTRACE(0x100e94afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e94af push ebp */
  push32((uint32_t)(EBP));
  /* 100e94b0 mov ebp, esp */
  EBP = (ESP);
  /* 100e94b2 push ecx */
  push32((uint32_t)(ECX));
  /* 100e94b3 cmp dword ptr [0x100f6838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100f6838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e94ba push ebx */
  push32((uint32_t)(EBX));
  /* 100e94bb push esi */
  push32((uint32_t)(ESI));
  /* 100e94bc push edi */
  push32((uint32_t)(EDI));
  /* 100e94bd jne 0x100e94dc */
  if (!C.zf) goto L_100e94dc;
  /* 100e94bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e94c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e94c5 jl 0x100e9575 */
  if ((C.sf!=C.of)) goto L_100e9575;
  /* 100e94cb cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e94ce jg 0x100e9575 */
  if ((!C.zf&&C.sf==C.of)) goto L_100e9575;
  /* 100e94d4 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e94d7 jmp 0x100e9575 */
  goto L_100e9575;
L_100e94dc:;
  /* 100e94dc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e94df mov edi, 0x100 */
  EDI = (0x100u);
  /* 100e94e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e94e6 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e94e8 pop esi */
  ESI = (pop32());
  /* 100e94e9 jge 0x100e9510 */
  if ((C.sf==C.of)) goto L_100e9510;
  /* 100e94eb cmp dword ptr [0x100f0be0], esi */
  { uint32_t _a=(r32((uint32_t)(0x100f0be0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e94f1 jle 0x100e94fe */
  if ((C.zf||C.sf!=C.of)) goto L_100e94fe;
  /* 100e94f3 push esi */
  push32((uint32_t)(ESI));
  /* 100e94f4 push ebx */
  push32((uint32_t)(EBX));
  /* 100e94f5 call 0x100e93cb */
  push32(0x100e94fau); f_100e93cb();
  /* 100e94fa pop ecx */
  ECX = (pop32());
  /* 100e94fb pop ecx */
  ECX = (pop32());
  /* 100e94fc jmp 0x100e9508 */
  goto L_100e9508;
L_100e94fe:;
  /* 100e94fe mov eax, dword ptr [0x100f09d0] */
  EAX = (r32((uint32_t)(0x100f09d0)));
  /* 100e9503 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 100e9506 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_100e9508:;
  /* 100e9508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e950a jne 0x100e9510 */
  if (!C.zf) goto L_100e9510;
L_100e950c:;
  /* 100e950c mov eax, ebx */
  EAX = (EBX);
  /* 100e950e jmp 0x100e9575 */
  goto L_100e9575;
L_100e9510:;
  /* 100e9510 mov edx, dword ptr [0x100f09d0] */
  EDX = (r32((uint32_t)(0x100f09d0)));
  /* 100e9516 mov eax, ebx */
  EAX = (EBX);
  /* 100e9518 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100e951b movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 100e951e test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100e9523 je 0x100e9534 */
  if (C.zf) goto L_100e9534;
  /* 100e9525 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 100e9529 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e952b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 100e952e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 100e9531 pop eax */
  EAX = (pop32());
  /* 100e9532 jmp 0x100e953d */
  goto L_100e953d;
L_100e9534:;
  /* 100e9534 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 100e9538 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 100e953b mov eax, esi */
  EAX = (ESI);
L_100e953d:;
  /* 100e953d push esi */
  push32((uint32_t)(ESI));
  /* 100e953e push 0 */
  push32((uint32_t)(0x0u));
  /* 100e9540 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 100e9543 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e9545 push ecx */
  push32((uint32_t)(ECX));
  /* 100e9546 push eax */
  push32((uint32_t)(EAX));
  /* 100e9547 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100e954a push eax */
  push32((uint32_t)(EAX));
  /* 100e954b push edi */
  push32((uint32_t)(EDI));
  /* 100e954c push dword ptr [0x100f6838] */
  push32((uint32_t)(r32((uint32_t)(0x100f6838))));
  /* 100e9552 call 0x100ec3c6 */
  push32(0x100e9557u); f_100ec3c6();
  /* 100e9557 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e955a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e955c je 0x100e950c */
  if (C.zf) goto L_100e950c;
  /* 100e955e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9560 jne 0x100e9568 */
  if (!C.zf) goto L_100e9568;
  /* 100e9562 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100e9566 jmp 0x100e9575 */
  goto L_100e9575;
L_100e9568:;
  /* 100e9568 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 100e956c movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100e9570 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100e9573 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_100e9575:;
  /* 100e9575 pop edi */
  EDI = (pop32());
  /* 100e9576 pop esi */
  ESI = (pop32());
  /* 100e9577 pop ebx */
  EBX = (pop32());
  /* 100e9578 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9579 ret  */
  ESPCHK(0x100e94afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000957a @ 0x100e957a (73 bytes, 36 insns) */
void f_100e957a(void) {
  FTRACE(0x100e957au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e957a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e957e push esi */
  push32((uint32_t)(ESI));
  /* 100e957f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100e9581 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100e9582 pop ecx */
  ECX = (pop32());
  /* 100e9583 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e9585 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100e9587 mov esi, eax */
  ESI = (EAX);
  /* 100e9589 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100e958d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100e958e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e9590 pop ecx */
  ECX = (pop32());
  /* 100e9591 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e9595 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e9597 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 100e959a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100e959c not edx */
  EDX = (~(EDX));
  /* 100e959e test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 100e95a1 jne 0x100e95bf */
  if (!C.zf) goto L_100e95bf;
  /* 100e95a3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100e95a4 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e95a7 jge 0x100e95ba */
  if ((C.sf==C.of)) goto L_100e95ba;
  /* 100e95a9 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_100e95ac:;
  /* 100e95ac cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e95af jne 0x100e95bf */
  if (!C.zf) goto L_100e95bf;
  /* 100e95b1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100e95b2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e95b5 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e95b8 jl 0x100e95ac */
  if ((C.sf!=C.of)) goto L_100e95ac;
L_100e95ba:;
  /* 100e95ba push 1 */
  push32((uint32_t)(0x1u));
  /* 100e95bc pop eax */
  EAX = (pop32());
  /* 100e95bd pop esi */
  ESI = (pop32());
  /* 100e95be ret  */
  ESPCHK(0x100e957au, _esp0);
  ESP += 4; return;
L_100e95bf:;
  /* 100e95bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e95c1 pop esi */
  ESI = (pop32());
  /* 100e95c2 ret  */
  ESPCHK(0x100e957au, _esp0);
  ESP += 4; return;
}

/* FUN_100095c3 @ 0x100e95c3 (86 bytes, 43 insns) */
void f_100e95c3(void) {
  FTRACE(0x100e95c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e95c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e95c7 push ebx */
  push32((uint32_t)(EBX));
  /* 100e95c8 push esi */
  push32((uint32_t)(ESI));
  /* 100e95c9 push edi */
  push32((uint32_t)(EDI));
  /* 100e95ca push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100e95cc mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 100e95d0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100e95d1 pop ecx */
  ECX = (pop32());
  /* 100e95d2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e95d4 mov esi, eax */
  ESI = (EAX);
  /* 100e95d6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 100e95da cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100e95db idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e95dd lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 100e95e0 push edi */
  push32((uint32_t)(EDI));
  /* 100e95e1 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100e95e3 pop ecx */
  ECX = (pop32());
  /* 100e95e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e95e6 pop eax */
  EAX = (pop32());
  /* 100e95e7 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e95e9 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100e95eb push eax */
  push32((uint32_t)(EAX));
  /* 100e95ec push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 100e95ee call 0x100ec615 */
  push32(0x100e95f3u); f_100ec615();
  /* 100e95f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e95f6 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100e95f7 js 0x100e9615 */
  if (C.sf) goto L_100e9615;
  /* 100e95f9 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_100e95fc:;
  /* 100e95fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e95fe je 0x100e9615 */
  if (C.zf) goto L_100e9615;
  /* 100e9600 push edi */
  push32((uint32_t)(EDI));
  /* 100e9601 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e9603 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 100e9605 call 0x100ec615 */
  push32(0x100e960au); f_100ec615();
  /* 100e960a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e960d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100e960e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e9611 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100e9613 jge 0x100e95fc */
  if ((C.sf==C.of)) goto L_100e95fc;
L_100e9615:;
  /* 100e9615 pop edi */
  EDI = (pop32());
  /* 100e9616 pop esi */
  ESI = (pop32());
  /* 100e9617 pop ebx */
  EBX = (pop32());
  /* 100e9618 ret  */
  ESPCHK(0x100e95c3u, _esp0);
  ESP += 4; return;
}

/* FUN_10009619 @ 0x100e9619 (140 bytes, 71 insns) */
void f_100e9619(void) {
  FTRACE(0x100e9619u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9619 push ebp */
  push32((uint32_t)(EBP));
  /* 100e961a mov ebp, esp */
  EBP = (ESP);
  /* 100e961c push ecx */
  push32((uint32_t)(ECX));
  /* 100e961d push ecx */
  push32((uint32_t)(ECX));
  /* 100e961e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e9621 push ebx */
  push32((uint32_t)(EBX));
  /* 100e9622 push esi */
  push32((uint32_t)(ESI));
  /* 100e9623 push edi */
  push32((uint32_t)(EDI));
  /* 100e9624 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 100e9627 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100e9629 pop ecx */
  ECX = (pop32());
  /* 100e962a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100e962e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 100e9631 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100e9633 mov eax, ebx */
  EAX = (EBX);
  /* 100e9635 pop esi */
  ESI = (pop32());
  /* 100e9636 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100e9637 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e9639 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100e963b mov ecx, eax */
  ECX = (EAX);
  /* 100e963d mov eax, ebx */
  EAX = (EBX);
  /* 100e963f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100e9640 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e9642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9645 pop esi */
  ESI = (pop32());
  /* 100e9646 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e9648 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100e964b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 100e964e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100e9651 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e9653 pop edx */
  EDX = (pop32());
  /* 100e9654 mov ecx, esi */
  ECX = (ESI);
  /* 100e9656 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100e9658 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 100e965a je 0x100e967d */
  if (C.zf) goto L_100e967d;
  /* 100e965c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100e965d push ebx */
  push32((uint32_t)(EBX));
  /* 100e965e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e9661 call 0x100e957a */
  push32(0x100e9666u); f_100e957a();
  /* 100e9666 pop ecx */
  ECX = (pop32());
  /* 100e9667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e9669 pop ecx */
  ECX = (pop32());
  /* 100e966a jne 0x100e967a */
  if (!C.zf) goto L_100e967a;
  /* 100e966c push edi */
  push32((uint32_t)(EDI));
  /* 100e966d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e9670 call 0x100e95c3 */
  push32(0x100e9675u); f_100e95c3();
  /* 100e9675 pop ecx */
  ECX = (pop32());
  /* 100e9676 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100e9679 pop ecx */
  ECX = (pop32());
L_100e967a:;
  /* 100e967a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_100e967d:;
  /* 100e967d or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 100e9680 mov ecx, esi */
  ECX = (ESI);
  /* 100e9682 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100e9684 push 3 */
  push32((uint32_t)(0x3u));
  /* 100e9686 pop ecx */
  ECX = (pop32());
  /* 100e9687 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100e9689 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100e968c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e968d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e968f jge 0x100e969d */
  if ((C.sf==C.of)) goto L_100e969d;
  /* 100e9691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9694 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e9696 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 100e9699 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e969b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_100e969d:;
  /* 100e969d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100e96a0 pop edi */
  EDI = (pop32());
  /* 100e96a1 pop esi */
  ESI = (pop32());
  /* 100e96a2 pop ebx */
  EBX = (pop32());
  /* 100e96a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e96a4 ret  */
  ESPCHK(0x100e9619u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a5 @ 0x100e96a5 (27 bytes, 13 insns) */
void f_100e96a5(void) {
  FTRACE(0x100e96a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e96a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e96a9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e96ad push esi */
  push32((uint32_t)(ESI));
  /* 100e96ae push 3 */
  push32((uint32_t)(0x3u));
  /* 100e96b0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e96b2 pop edx */
  EDX = (pop32());
L_100e96b3:;
  /* 100e96b3 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 100e96b5 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 100e96b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e96bb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100e96bc jne 0x100e96b3 */
  if (!C.zf) goto L_100e96b3;
  /* 100e96be pop esi */
  ESI = (pop32());
  /* 100e96bf ret  */
  ESPCHK(0x100e96a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100096c0 @ 0x100e96c0 (12 bytes, 8 insns) */
void f_100e96c0(void) {
  FTRACE(0x100e96c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e96c0 push edi */
  push32((uint32_t)(EDI));
  /* 100e96c1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 100e96c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e96c7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100e96c8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100e96c9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100e96ca pop edi */
  EDI = (pop32());
  /* 100e96cb ret  */
  ESPCHK(0x100e96c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096cc @ 0x100e96cc (27 bytes, 13 insns) */
void f_100e96cc(void) {
  FTRACE(0x100e96ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e96cc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e96d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_100e96d2:;
  /* 100e96d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e96d5 jne 0x100e96e4 */
  if (!C.zf) goto L_100e96e4;
  /* 100e96d7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100e96d8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e96db cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e96de jl 0x100e96d2 */
  if ((C.sf!=C.of)) goto L_100e96d2;
  /* 100e96e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e96e2 pop eax */
  EAX = (pop32());
  /* 100e96e3 ret  */
  ESPCHK(0x100e96ccu, _esp0);
  ESP += 4; return;
L_100e96e4:;
  /* 100e96e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e96e6 ret  */
  ESPCHK(0x100e96ccu, _esp0);
  ESP += 4; return;
}

/* FUN_100096e7 @ 0x100e96e7 (141 bytes, 64 insns) */
void f_100e96e7(void) {
  FTRACE(0x100e96e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e96e7 push ebp */
  push32((uint32_t)(EBP));
  /* 100e96e8 mov ebp, esp */
  EBP = (ESP);
  /* 100e96ea sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e96ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e96f0 push ebx */
  push32((uint32_t)(EBX));
  /* 100e96f1 push esi */
  push32((uint32_t)(ESI));
  /* 100e96f2 push edi */
  push32((uint32_t)(EDI));
  /* 100e96f3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100e96f5 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100e96f8 pop ebx */
  EBX = (pop32());
  /* 100e96f9 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 100e96fc cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100e96fd mov ecx, ebx */
  ECX = (EBX);
  /* 100e96ff mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 100e9706 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e9708 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100e970b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e970e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100e970f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100e9711 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 100e9715 mov ecx, edx */
  ECX = (EDX);
  /* 100e9717 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100e9719 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e971b not esi */
  ESI = (~(ESI));
L_100e971d:;
  /* 100e971d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100e971f mov ecx, eax */
  ECX = (EAX);
  /* 100e9721 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 100e9723 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100e9726 mov ecx, edx */
  ECX = (EDX);
  /* 100e9728 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100e972a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 100e972d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 100e972f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100e9732 mov ecx, ebx */
  ECX = (EBX);
  /* 100e9734 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9737 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100e9739 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 100e973c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100e973f jne 0x100e971d */
  if (!C.zf) goto L_100e971d;
  /* 100e9741 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 100e9744 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e9746 pop ebx */
  EBX = (pop32());
  /* 100e9747 mov esi, edi */
  ESI = (EDI);
  /* 100e9749 push 8 */
  push32((uint32_t)(0x8u));
  /* 100e974b pop ecx */
  ECX = (pop32());
  /* 100e974c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_100e974f:;
  /* 100e974f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9751 jl 0x100e9762 */
  if ((C.sf!=C.of)) goto L_100e9762;
  /* 100e9753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9756 mov eax, ecx */
  EAX = (ECX);
  /* 100e9758 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e975a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 100e975d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 100e9760 jmp 0x100e9769 */
  goto L_100e9769;
L_100e9762:;
  /* 100e9762 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9765 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_100e9769:;
  /* 100e9769 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100e976a sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e976d jns 0x100e974f */
  if (!C.sf) goto L_100e974f;
  /* 100e976f pop edi */
  EDI = (pop32());
  /* 100e9770 pop esi */
  ESI = (pop32());
  /* 100e9771 pop ebx */
  EBX = (pop32());
  /* 100e9772 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9773 ret  */
  ESPCHK(0x100e96e7u, _esp0);
  ESP += 4; return;
}

/* FUN_10009774 @ 0x100e9774 (364 bytes, 138 insns) */
void f_100e9774(void) {
  FTRACE(0x100e9774u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9774 push ebp */
  push32((uint32_t)(EBP));
  /* 100e9775 mov ebp, esp */
  EBP = (ESP);
  /* 100e9777 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e977a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e977d push ebx */
  push32((uint32_t)(EBX));
  /* 100e977e push esi */
  push32((uint32_t)(ESI));
  /* 100e977f push edi */
  push32((uint32_t)(EDI));
  /* 100e9780 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 100e9784 mov ebx, ecx */
  EBX = (ECX);
  /* 100e9786 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 100e978c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 100e978f mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 100e9792 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 100e9795 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 100e9798 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 100e979b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 100e979e and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 100e97a4 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e97aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100e97ad shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100e97b0 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e97b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100e97b9 jne 0x100e97e1 */
  if (!C.zf) goto L_100e97e1;
  /* 100e97bb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e97be xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100e97c0 push eax */
  push32((uint32_t)(EAX));
  /* 100e97c1 call 0x100e96cc */
  push32(0x100e97c6u); f_100e96cc();
  /* 100e97c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e97c8 pop ecx */
  ECX = (pop32());
  /* 100e97c9 jne 0x100e98a0 */
  if (!C.zf) goto L_100e98a0;
  /* 100e97cf lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e97d2 push eax */
  push32((uint32_t)(EAX));
  /* 100e97d3 call 0x100e96c0 */
  push32(0x100e97d8u); f_100e96c0();
  /* 100e97d8 pop ecx */
  ECX = (pop32());
L_100e97d9:;
  /* 100e97d9 push 2 */
  push32((uint32_t)(0x2u));
L_100e97db:;
  /* 100e97db pop eax */
  EAX = (pop32());
  /* 100e97dc jmp 0x100e98a2 */
  goto L_100e98a2;
L_100e97e1:;
  /* 100e97e1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e97e4 push eax */
  push32((uint32_t)(EAX));
  /* 100e97e5 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 100e97e8 push eax */
  push32((uint32_t)(EAX));
  /* 100e97e9 call 0x100e96a5 */
  push32(0x100e97eeu); f_100e96a5();
  /* 100e97ee push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 100e97f1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e97f4 push eax */
  push32((uint32_t)(EAX));
  /* 100e97f5 call 0x100e9619 */
  push32(0x100e97fau); f_100e9619();
  /* 100e97fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e97fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e97ff je 0x100e9802 */
  if (C.zf) goto L_100e9802;
  /* 100e9801 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_100e9802:;
  /* 100e9802 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 100e9805 mov ecx, eax */
  ECX = (EAX);
  /* 100e9807 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e980a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e980c jge 0x100e981a */
  if ((C.sf==C.of)) goto L_100e981a;
  /* 100e980e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e9811 push eax */
  push32((uint32_t)(EAX));
  /* 100e9812 call 0x100e96c0 */
  push32(0x100e9817u); f_100e96c0();
  /* 100e9817 pop ecx */
  ECX = (pop32());
  /* 100e9818 jmp 0x100e9856 */
  goto L_100e9856;
L_100e981a:;
  /* 100e981a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e981c jg 0x100e985d */
  if ((!C.zf&&C.sf==C.of)) goto L_100e985d;
  /* 100e981e sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e9820 mov esi, eax */
  ESI = (EAX);
  /* 100e9822 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 100e9825 push eax */
  push32((uint32_t)(EAX));
  /* 100e9826 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e9829 push eax */
  push32((uint32_t)(EAX));
  /* 100e982a call 0x100e96a5 */
  push32(0x100e982fu); f_100e96a5();
  /* 100e982f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e9832 push esi */
  push32((uint32_t)(ESI));
  /* 100e9833 push eax */
  push32((uint32_t)(EAX));
  /* 100e9834 call 0x100e96e7 */
  push32(0x100e9839u); f_100e96e7();
  /* 100e9839 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 100e983c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e983f push eax */
  push32((uint32_t)(EAX));
  /* 100e9840 call 0x100e9619 */
  push32(0x100e9845u); f_100e9619();
  /* 100e9845 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 100e9848 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e9849 push eax */
  push32((uint32_t)(EAX));
  /* 100e984a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e984d push eax */
  push32((uint32_t)(EAX));
  /* 100e984e call 0x100e96e7 */
  push32(0x100e9853u); f_100e96e7();
  /* 100e9853 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e9856:;
  /* 100e9856 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100e9858 jmp 0x100e97d9 */
  goto L_100e97d9;
L_100e985d:;
  /* 100e985d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e985f jl 0x100e9889 */
  if ((C.sf!=C.of)) goto L_100e9889;
  /* 100e9861 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e9864 push eax */
  push32((uint32_t)(EAX));
  /* 100e9865 call 0x100e96c0 */
  push32(0x100e986au); f_100e96c0();
  /* 100e986a push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 100e986d or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 100e9871 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e9874 push eax */
  push32((uint32_t)(EAX));
  /* 100e9875 call 0x100e96e7 */
  push32(0x100e987au); f_100e96e7();
  /* 100e987a mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 100e987d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9880 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9882 push 1 */
  push32((uint32_t)(0x1u));
  /* 100e9884 jmp 0x100e97db */
  goto L_100e97db;
L_100e9889:;
  /* 100e9889 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 100e988c mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 100e988f and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 100e9893 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e9896 push eax */
  push32((uint32_t)(EAX));
  /* 100e9897 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9899 call 0x100e96e7 */
  push32(0x100e989eu); f_100e96e7();
  /* 100e989e pop ecx */
  ECX = (pop32());
  /* 100e989f pop ecx */
  ECX = (pop32());
L_100e98a0:;
  /* 100e98a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100e98a2:;
  /* 100e98a2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100e98a4 pop ecx */
  ECX = (pop32());
  /* 100e98a5 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e98a8 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 100e98ab shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100e98ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e98b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100e98b2 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e98b4 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 100e98ba or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 100e98bc or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 100e98bf cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e98c2 jne 0x100e98d1 */
  if (!C.zf) goto L_100e98d1;
  /* 100e98c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e98c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 100e98ca mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 100e98cd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 100e98cf jmp 0x100e98db */
  goto L_100e98db;
L_100e98d1:;
  /* 100e98d1 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e98d4 jne 0x100e98db */
  if (!C.zf) goto L_100e98db;
  /* 100e98d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e98d9 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_100e98db:;
  /* 100e98db pop edi */
  EDI = (pop32());
  /* 100e98dc pop esi */
  ESI = (pop32());
  /* 100e98dd pop ebx */
  EBX = (pop32());
  /* 100e98de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e98df ret  */
  ESPCHK(0x100e9774u, _esp0);
  ESP += 4; return;
}

/* FUN_100098e0 @ 0x100e98e0 (22 bytes, 6 insns) */
void f_100e98e0(void) {
  FTRACE(0x100e98e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e98e0 push 0x100f0bf0 */
  push32((uint32_t)(0x100f0bf0u));
  /* 100e98e5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100e98e9 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100e98ed call 0x100e9774 */
  push32(0x100e98f2u); f_100e9774();
  /* 100e98f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e98f5 ret  */
  ESPCHK(0x100e98e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098f6 @ 0x100e98f6 (22 bytes, 6 insns) */
void f_100e98f6(void) {
  FTRACE(0x100e98f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e98f6 push 0x100f0c08 */
  push32((uint32_t)(0x100f0c08u));
  /* 100e98fb push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100e98ff push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 100e9903 call 0x100e9774 */
  push32(0x100e9908u); f_100e9774();
  /* 100e9908 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e990b ret  */
  ESPCHK(0x100e98f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000990c @ 0x100e990c (45 bytes, 21 insns) */
void f_100e990c(void) {
  FTRACE(0x100e990cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e990c push ebp */
  push32((uint32_t)(EBP));
  /* 100e990d mov ebp, esp */
  EBP = (ESP);
  /* 100e990f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e9912 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e9914 push eax */
  push32((uint32_t)(EAX));
  /* 100e9915 push eax */
  push32((uint32_t)(EAX));
  /* 100e9916 push eax */
  push32((uint32_t)(EAX));
  /* 100e9917 push eax */
  push32((uint32_t)(EAX));
  /* 100e9918 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100e991b lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 100e991e push eax */
  push32((uint32_t)(EAX));
  /* 100e991f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e9922 push eax */
  push32((uint32_t)(EAX));
  /* 100e9923 call 0x100ec7b6 */
  push32(0x100e9928u); f_100ec7b6();
  /* 100e9928 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e992b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e992e push eax */
  push32((uint32_t)(EAX));
  /* 100e992f call 0x100e98e0 */
  push32(0x100e9934u); f_100e98e0();
  /* 100e9934 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9937 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9938 ret  */
  ESPCHK(0x100e990cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009939 @ 0x100e9939 (45 bytes, 21 insns) */
void f_100e9939(void) {
  FTRACE(0x100e9939u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9939 push ebp */
  push32((uint32_t)(EBP));
  /* 100e993a mov ebp, esp */
  EBP = (ESP);
  /* 100e993c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e993f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e9941 push eax */
  push32((uint32_t)(EAX));
  /* 100e9942 push eax */
  push32((uint32_t)(EAX));
  /* 100e9943 push eax */
  push32((uint32_t)(EAX));
  /* 100e9944 push eax */
  push32((uint32_t)(EAX));
  /* 100e9945 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100e9948 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 100e994b push eax */
  push32((uint32_t)(EAX));
  /* 100e994c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e994f push eax */
  push32((uint32_t)(EAX));
  /* 100e9950 call 0x100ec7b6 */
  push32(0x100e9955u); f_100ec7b6();
  /* 100e9955 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100e9958 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e995b push eax */
  push32((uint32_t)(EAX));
  /* 100e995c call 0x100e98f6 */
  push32(0x100e9961u); f_100e98f6();
  /* 100e9961 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9964 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9965 ret  */
  ESPCHK(0x100e9939u, _esp0);
  ESP += 4; return;
}

/* FUN_10009966 @ 0x100e9966 (119 bytes, 57 insns) */
void f_100e9966(void) {
  FTRACE(0x100e9966u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9966 push ebp */
  push32((uint32_t)(EBP));
  /* 100e9967 mov ebp, esp */
  EBP = (ESP);
  /* 100e9969 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 100e996c push ebx */
  push32((uint32_t)(EBX));
  /* 100e996d mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e9970 push esi */
  push32((uint32_t)(ESI));
  /* 100e9971 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9974 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 100e9977 push edi */
  push32((uint32_t)(EDI));
  /* 100e9978 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 100e997b mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 100e997e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100e9980 mov eax, edi */
  EAX = (EDI);
  /* 100e9982 jle 0x100e99a3 */
  if ((C.zf||C.sf!=C.of)) goto L_100e99a3;
  /* 100e9984 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100e9987 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100e9989:;
  /* 100e9989 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 100e998b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100e998d je 0x100e9995 */
  if (C.zf) goto L_100e9995;
  /* 100e998f movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 100e9992 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100e9993 jmp 0x100e9998 */
  goto L_100e9998;
L_100e9995:;
  /* 100e9995 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 100e9997 pop edx */
  EDX = (pop32());
L_100e9998:;
  /* 100e9998 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 100e999a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e999b dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 100e999e jne 0x100e9989 */
  if (!C.zf) goto L_100e9989;
  /* 100e99a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_100e99a3:;
  /* 100e99a3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 100e99a6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100e99a8 jl 0x100e99bc */
  if ((C.sf!=C.of)) goto L_100e99bc;
  /* 100e99aa cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e99ad jl 0x100e99bc */
  if ((C.sf!=C.of)) goto L_100e99bc;
L_100e99af:;
  /* 100e99af dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100e99b0 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e99b3 jne 0x100e99ba */
  if (!C.zf) goto L_100e99ba;
  /* 100e99b5 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 100e99b8 jmp 0x100e99af */
  goto L_100e99af;
L_100e99ba:;
  /* 100e99ba inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_100e99bc:;
  /* 100e99bc cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100e99bf jne 0x100e99c6 */
  if (!C.zf) goto L_100e99c6;
  /* 100e99c1 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 100e99c4 jmp 0x100e99d8 */
  goto L_100e99d8;
L_100e99c6:;
  /* 100e99c6 push edi */
  push32((uint32_t)(EDI));
  /* 100e99c7 call 0x100e9040 */
  push32(0x100e99ccu); f_100e9040();
  /* 100e99cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100e99cd push eax */
  push32((uint32_t)(EAX));
  /* 100e99ce push edi */
  push32((uint32_t)(EDI));
  /* 100e99cf push esi */
  push32((uint32_t)(ESI));
  /* 100e99d0 call 0x100e9c40 */
  push32(0x100e99d5u); f_100e9c40();
  /* 100e99d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100e99d8:;
  /* 100e99d8 pop edi */
  EDI = (pop32());
  /* 100e99d9 pop esi */
  ESI = (pop32());
  /* 100e99da pop ebx */
  EBX = (pop32());
  /* 100e99db pop ebp */
  EBP = (pop32());
  /* 100e99dc ret  */
  ESPCHK(0x100e9966u, _esp0);
  ESP += 4; return;
}

/* FUN_100099dd @ 0x100e99dd (92 bytes, 41 insns) */
void f_100e99dd(void) {
  FTRACE(0x100e99ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e99dd push ebp */
  push32((uint32_t)(EBP));
  /* 100e99de mov ebp, esp */
  EBP = (ESP);
  /* 100e99e0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e99e3 push esi */
  push32((uint32_t)(ESI));
  /* 100e99e4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100e99e7 push edi */
  push32((uint32_t)(EDI));
  /* 100e99e8 push eax */
  push32((uint32_t)(EAX));
  /* 100e99e9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100e99ec push eax */
  push32((uint32_t)(EAX));
  /* 100e99ed call 0x100e9a39 */
  push32(0x100e99f2u); f_100e9a39();
  /* 100e99f2 pop ecx */
  ECX = (pop32());
  /* 100e99f3 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100e99f6 pop ecx */
  ECX = (pop32());
  /* 100e99f7 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 100e99fa push eax */
  push32((uint32_t)(EAX));
  /* 100e99fb push 0 */
  push32((uint32_t)(0x0u));
  /* 100e99fd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100e99ff sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e9a02 mov edi, esp */
  EDI = (ESP);
  /* 100e9a04 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100e9a05 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100e9a06 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 100e9a08 call 0x100ecc87 */
  push32(0x100e9a0du); f_100ecc87();
  /* 100e9a0d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100e9a10 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 100e9a13 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 100e9a16 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 100e9a1a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100e9a1c movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 100e9a20 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 100e9a23 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 100e9a26 push eax */
  push32((uint32_t)(EAX));
  /* 100e9a27 push edi */
  push32((uint32_t)(EDI));
  /* 100e9a28 call 0x100e9af0 */
  push32(0x100e9a2du); f_100e9af0();
  /* 100e9a2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9a30 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 100e9a33 mov eax, esi */
  EAX = (ESI);
  /* 100e9a35 pop edi */
  EDI = (pop32());
  /* 100e9a36 pop esi */
  ESI = (pop32());
  /* 100e9a37 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9a38 ret  */
  ESPCHK(0x100e99ddu, _esp0);
  ESP += 4; return;
}

/* FUN_10009a39 @ 0x100e9a39 (182 bytes, 70 insns) */
void f_100e9a39(void) {
  FTRACE(0x100e9a39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9a39 push ebp */
  push32((uint32_t)(EBP));
  /* 100e9a3a mov ebp, esp */
  EBP = (ESP);
  /* 100e9a3c push ecx */
  push32((uint32_t)(ECX));
  /* 100e9a3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e9a40 push ebx */
  push32((uint32_t)(EBX));
  /* 100e9a41 push esi */
  push32((uint32_t)(ESI));
  /* 100e9a42 push edi */
  push32((uint32_t)(EDI));
  /* 100e9a43 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 100e9a47 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 100e9a4c mov ecx, eax */
  ECX = (EAX);
  /* 100e9a4e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 100e9a53 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 100e9a56 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100e9a58 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100e9a5b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 100e9a5e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 100e9a60 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 100e9a63 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100e9a68 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100e9a6d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100e9a6f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 100e9a72 je 0x100e9a87 */
  if (C.zf) goto L_100e9a87;
  /* 100e9a74 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9a76 je 0x100e9a80 */
  if (C.zf) goto L_100e9a80;
  /* 100e9a78 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 100e9a7e jmp 0x100e9aa8 */
  goto L_100e9aa8;
L_100e9a80:;
  /* 100e9a80 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 100e9a85 jmp 0x100e9aa8 */
  goto L_100e9aa8;
L_100e9a87:;
  /* 100e9a87 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100e9a89 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9a8b jne 0x100e9a9f */
  if (!C.zf) goto L_100e9a9f;
  /* 100e9a8d cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9a8f jne 0x100e9a9f */
  if (!C.zf) goto L_100e9a9f;
  /* 100e9a91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9a94 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 100e9a97 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 100e9a99 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 100e9a9d jmp 0x100e9aea */
  goto L_100e9aea;
L_100e9a9f:;
  /* 100e9a9f lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 100e9aa5 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_100e9aa8:;
  /* 100e9aa8 mov ecx, edx */
  ECX = (EDX);
  /* 100e9aaa shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 100e9aad shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 100e9ab0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 100e9ab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9ab5 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 100e9ab8 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 100e9abb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100e9abe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_100e9ac0:;
  /* 100e9ac0 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 100e9ac2 jne 0x100e9ae1 */
  if (!C.zf) goto L_100e9ae1;
  /* 100e9ac4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 100e9ac6 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9ac8 mov ebx, edx */
  EBX = (EDX);
  /* 100e9aca shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 100e9acd or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 100e9acf lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 100e9ad2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100e9ad4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 100e9ad7 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9add mov ecx, ebx */
  ECX = (EBX);
  /* 100e9adf jmp 0x100e9ac0 */
  goto L_100e9ac0;
L_100e9ae1:;
  /* 100e9ae1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100e9ae4 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100e9ae6 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_100e9aea:;
  /* 100e9aea pop edi */
  EDI = (pop32());
  /* 100e9aeb pop esi */
  ESI = (pop32());
  /* 100e9aec pop ebx */
  EBX = (pop32());
  /* 100e9aed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9aee ret  */
  ESPCHK(0x100e9a39u, _esp0);
  ESP += 4; return;
}

/* FUN_10009af0 @ 0x100e9af0 (7 bytes, 3 insns) */
void f_100e9af0(void) {
  FTRACE(0x100e9af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9af0 push edi */
  push32((uint32_t)(EDI));
  /* 100e9af1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 100e9af5 jmp 0x100e9b61 */
  jmp_ind(0x100e9b61u); return;
}

/* FUN_10009b00 @ 0x100e9b00 (224 bytes, 84 insns) */
void f_100e9b00(void) {
  FTRACE(0x100e9b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9b00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e9b04 push edi */
  push32((uint32_t)(EDI));
  /* 100e9b05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100e9b0b je 0x100e9b1c */
  if (C.zf) goto L_100e9b1c;
L_100e9b0d:;
  /* 100e9b0d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 100e9b0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100e9b10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e9b12 je 0x100e9b4f */
  if (C.zf) goto L_100e9b4f;
  /* 100e9b14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100e9b1a jne 0x100e9b0d */
  if (!C.zf) goto L_100e9b0d;
L_100e9b1c:;
  /* 100e9b1c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 100e9b1e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 100e9b23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9b25 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100e9b28 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100e9b2a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9b2d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 100e9b32 je 0x100e9b1c */
  if (C.zf) goto L_100e9b1c;
  /* 100e9b34 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 100e9b37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100e9b39 je 0x100e9b5e */
  if (C.zf) goto L_100e9b5e;
  /* 100e9b3b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100e9b3d je 0x100e9b59 */
  if (C.zf) goto L_100e9b59;
  /* 100e9b3f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 100e9b44 je 0x100e9b54 */
  if (C.zf) goto L_100e9b54;
  /* 100e9b46 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 100e9b4b je 0x100e9b4f */
  if (C.zf) goto L_100e9b4f;
  /* 100e9b4d jmp 0x100e9b1c */
  goto L_100e9b1c;
L_100e9b4f:;
  /* 100e9b4f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 100e9b52 jmp 0x100e9b61 */
  goto L_100e9b61;
L_100e9b54:;
  /* 100e9b54 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 100e9b57 jmp 0x100e9b61 */
  goto L_100e9b61;
L_100e9b59:;
  /* 100e9b59 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 100e9b5c jmp 0x100e9b61 */
  goto L_100e9b61;
L_100e9b5e:;
  /* 100e9b5e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_100e9b61:;
  /* 100e9b61 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 100e9b65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100e9b6b je 0x100e9b86 */
  if (C.zf) goto L_100e9b86;
L_100e9b6d:;
  /* 100e9b6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 100e9b6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100e9b70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100e9b72 je 0x100e9bd8 */
  if (C.zf) goto L_100e9bd8;
  /* 100e9b74 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 100e9b76 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100e9b77 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 100e9b7d jne 0x100e9b6d */
  if (!C.zf) goto L_100e9b6d;
  /* 100e9b7f jmp 0x100e9b86 */
  goto L_100e9b86;
L_100e9b81:;
  /* 100e9b81 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100e9b83 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100e9b86:;
  /* 100e9b86 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 100e9b8b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 100e9b8d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9b8f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100e9b92 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100e9b94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 100e9b96 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9b99 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 100e9b9e je 0x100e9b81 */
  if (C.zf) goto L_100e9b81;
  /* 100e9ba0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100e9ba2 je 0x100e9bd8 */
  if (C.zf) goto L_100e9bd8;
  /* 100e9ba4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 100e9ba6 je 0x100e9bcf */
  if (C.zf) goto L_100e9bcf;
  /* 100e9ba8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 100e9bae je 0x100e9bc2 */
  if (C.zf) goto L_100e9bc2;
  /* 100e9bb0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 100e9bb6 je 0x100e9bba */
  if (C.zf) goto L_100e9bba;
  /* 100e9bb8 jmp 0x100e9b81 */
  goto L_100e9b81;
L_100e9bba:;
  /* 100e9bba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100e9bbc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e9bc0 pop edi */
  EDI = (pop32());
  /* 100e9bc1 ret  */
  ESPCHK(0x100e9b00u, _esp0);
  ESP += 4; return;
L_100e9bc2:;
  /* 100e9bc2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 100e9bc5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e9bc9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 100e9bcd pop edi */
  EDI = (pop32());
  /* 100e9bce ret  */
  ESPCHK(0x100e9b00u, _esp0);
  ESP += 4; return;
L_100e9bcf:;
  /* 100e9bcf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 100e9bd2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e9bd6 pop edi */
  EDI = (pop32());
  /* 100e9bd7 ret  */
  ESPCHK(0x100e9b00u, _esp0);
  ESP += 4; return;
L_100e9bd8:;
  /* 100e9bd8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 100e9bda mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e9bde pop edi */
  EDI = (pop32());
  /* 100e9bdf ret  */
  ESPCHK(0x100e9b00u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x100e9be0 (88 bytes, 40 insns) */
void f_100e9be0(void) {
  FTRACE(0x100e9be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9be0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 100e9be4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e9be8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100e9bea je 0x100e9c33 */
  if (C.zf) goto L_100e9c33;
  /* 100e9bec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100e9bee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 100e9bf2 push edi */
  push32((uint32_t)(EDI));
  /* 100e9bf3 mov edi, ecx */
  EDI = (ECX);
  /* 100e9bf5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9bf8 jb 0x100e9c27 */
  if (C.cf) goto L_100e9c27;
  /* 100e9bfa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100e9bfc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100e9bff je 0x100e9c09 */
  if (C.zf) goto L_100e9c09;
  /* 100e9c01 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_100e9c03:;
  /* 100e9c03 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100e9c05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100e9c06 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100e9c07 jne 0x100e9c03 */
  if (!C.zf) goto L_100e9c03;
L_100e9c09:;
  /* 100e9c09 mov ecx, eax */
  ECX = (EAX);
  /* 100e9c0b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100e9c0e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9c10 mov ecx, eax */
  ECX = (EAX);
  /* 100e9c12 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100e9c15 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9c17 mov ecx, edx */
  ECX = (EDX);
  /* 100e9c19 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100e9c1c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100e9c1f je 0x100e9c27 */
  if (C.zf) goto L_100e9c27;
  /* 100e9c21 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 100e9c23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100e9c25 je 0x100e9c2d */
  if (C.zf) goto L_100e9c2d;
L_100e9c27:;
  /* 100e9c27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100e9c29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100e9c2a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100e9c2b jne 0x100e9c27 */
  if (!C.zf) goto L_100e9c27;
L_100e9c2d:;
  /* 100e9c2d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100e9c31 pop edi */
  EDI = (pop32());
  /* 100e9c32 ret  */
  ESPCHK(0x100e9be0u, _esp0);
  ESP += 4; return;
L_100e9c33:;
  /* 100e9c33 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100e9c37 ret  */
  ESPCHK(0x100e9be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c40 @ 0x100e9c40 (664 bytes, 270 insns) [15 switch table(s)] */
void f_100e9c40(void) {
  FTRACE(0x100e9c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9c40 push ebp */
  push32((uint32_t)(EBP));
  /* 100e9c41 mov ebp, esp */
  EBP = (ESP);
  /* 100e9c43 push edi */
  push32((uint32_t)(EDI));
  /* 100e9c44 push esi */
  push32((uint32_t)(ESI));
  /* 100e9c45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100e9c48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 100e9c4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9c4e mov eax, ecx */
  EAX = (ECX);
  /* 100e9c50 mov edx, ecx */
  EDX = (ECX);
  /* 100e9c52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9c54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9c56 jbe 0x100e9c60 */
  if ((C.cf||C.zf)) goto L_100e9c60;
  /* 100e9c58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9c5a jb 0x100e9dd8 */
  if (C.cf) goto L_100e9dd8;
L_100e9c60:;
  /* 100e9c60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100e9c66 jne 0x100e9c7c */
  if (!C.zf) goto L_100e9c7c;
  /* 100e9c68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100e9c6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100e9c6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9c71 jb 0x100e9c9c */
  if (C.cf) goto L_100e9c9c;
  /* 100e9c73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100e9c75 jmp dword ptr [edx*4 + 0x100e9d88] */
  switch (EDX) {
    case 0: goto L_100e9d98;
    case 1: goto L_100e9da0;
    case 2: goto L_100e9dac;
    case 3: goto L_100e9dc0;
    default: x86_unimpl("switch@0x100e9c75 out of table"); return;
  }
L_100e9c7c:;
  /* 100e9c7c mov eax, edi */
  EAX = (EDI);
  /* 100e9c7e mov edx, 3 */
  EDX = (0x3u);
  /* 100e9c83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e9c86 jb 0x100e9c94 */
  if (C.cf) goto L_100e9c94;
  /* 100e9c88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 100e9c8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9c8d jmp dword ptr [eax*4 + 0x100e9ca0] */
  switch (EAX) {
    case 1: goto L_100e9cb0;
    case 2: goto L_100e9cdc;
    case 3: goto L_100e9d00;
    default: x86_unimpl("switch@0x100e9c8d out of table"); return;
  }
L_100e9c94:;
  /* 100e9c94 jmp dword ptr [ecx*4 + 0x100e9d98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x100e9d98)))); return;
  /* 100e9c9b nop  */
  /* nop */
L_100e9c9c:;
  /* 100e9c9c jmp dword ptr [ecx*4 + 0x100e9d1c] */
  switch (ECX) {
    case 0: goto L_100e9d7f;
    case 1: goto L_100e9d6c;
    case 2: goto L_100e9d64;
    case 3: goto L_100e9d5c;
    case 4: goto L_100e9d54;
    case 5: goto L_100e9d4c;
    case 6: goto L_100e9d44;
    case 7: goto L_100e9d3c;
    default: x86_unimpl("switch@0x100e9c9c out of table"); return;
  }
  /* 100e9ca3 nop  */
  /* nop */
L_100e9cb0:;
  /* 100e9cb0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100e9cb2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100e9cb4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100e9cb6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100e9cb9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100e9cbc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100e9cbf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100e9cc2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100e9cc5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9cc8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9ccb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9cce jb 0x100e9c9c */
  if (C.cf) goto L_100e9c9c;
  /* 100e9cd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100e9cd2 jmp dword ptr [edx*4 + 0x100e9d88] */
  switch (EDX) {
    case 0: goto L_100e9d98;
    case 1: goto L_100e9da0;
    case 2: goto L_100e9dac;
    case 3: goto L_100e9dc0;
    default: x86_unimpl("switch@0x100e9cd2 out of table"); return;
  }
  /* 100e9cd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100e9cdc:;
  /* 100e9cdc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100e9cde mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100e9ce0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100e9ce2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100e9ce5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100e9ce8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100e9ceb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9cee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9cf1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9cf4 jb 0x100e9c9c */
  if (C.cf) goto L_100e9c9c;
  /* 100e9cf6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100e9cf8 jmp dword ptr [edx*4 + 0x100e9d88] */
  switch (EDX) {
    case 0: goto L_100e9d98;
    case 1: goto L_100e9da0;
    case 2: goto L_100e9dac;
    case 3: goto L_100e9dc0;
    default: x86_unimpl("switch@0x100e9cf8 out of table"); return;
  }
  /* 100e9cff nop  */
  /* nop */
L_100e9d00:;
  /* 100e9d00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100e9d02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100e9d04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100e9d06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100e9d07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100e9d0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100e9d0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9d0e jb 0x100e9c9c */
  if (C.cf) goto L_100e9c9c;
  /* 100e9d10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100e9d12 jmp dword ptr [edx*4 + 0x100e9d88] */
  switch (EDX) {
    case 0: goto L_100e9d98;
    case 1: goto L_100e9da0;
    case 2: goto L_100e9dac;
    case 3: goto L_100e9dc0;
    default: x86_unimpl("switch@0x100e9d12 out of table"); return;
  }
  /* 100e9d19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100e9d3c:;
  /* 100e9d3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 100e9d40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_100e9d44:;
  /* 100e9d44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 100e9d48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_100e9d4c:;
  /* 100e9d4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 100e9d50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_100e9d54:;
  /* 100e9d54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 100e9d58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_100e9d5c:;
  /* 100e9d5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 100e9d60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_100e9d64:;
  /* 100e9d64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 100e9d68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_100e9d6c:;
  /* 100e9d6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 100e9d70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 100e9d74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 100e9d7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9d7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100e9d7f:;
  /* 100e9d7f jmp dword ptr [edx*4 + 0x100e9d88] */
  switch (EDX) {
    case 0: goto L_100e9d98;
    case 1: goto L_100e9da0;
    case 2: goto L_100e9dac;
    case 3: goto L_100e9dc0;
    default: x86_unimpl("switch@0x100e9d7f out of table"); return;
  }
  /* 100e9d86 mov edi, edi */
  EDI = (EDI);
L_100e9d98:;
  /* 100e9d98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9d9b pop esi */
  ESI = (pop32());
  /* 100e9d9c pop edi */
  EDI = (pop32());
  /* 100e9d9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9d9e ret  */
  ESPCHK(0x100e9c40u, _esp0);
  ESP += 4; return;
  /* 100e9d9f nop  */
  /* nop */
L_100e9da0:;
  /* 100e9da0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100e9da2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100e9da4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9da7 pop esi */
  ESI = (pop32());
  /* 100e9da8 pop edi */
  EDI = (pop32());
  /* 100e9da9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9daa ret  */
  ESPCHK(0x100e9c40u, _esp0);
  ESP += 4; return;
  /* 100e9dab nop  */
  /* nop */
L_100e9dac:;
  /* 100e9dac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100e9dae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100e9db0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100e9db3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100e9db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9db9 pop esi */
  ESI = (pop32());
  /* 100e9dba pop edi */
  EDI = (pop32());
  /* 100e9dbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9dbc ret  */
  ESPCHK(0x100e9c40u, _esp0);
  ESP += 4; return;
  /* 100e9dbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100e9dc0:;
  /* 100e9dc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100e9dc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100e9dc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100e9dc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100e9dca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100e9dcd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100e9dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9dd3 pop esi */
  ESI = (pop32());
  /* 100e9dd4 pop edi */
  EDI = (pop32());
  /* 100e9dd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9dd6 ret  */
  ESPCHK(0x100e9c40u, _esp0);
  ESP += 4; return;
  /* 100e9dd7 nop  */
  /* nop */
L_100e9dd8:;
  /* 100e9dd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 100e9ddc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 100e9de0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100e9de6 jne 0x100e9e0c */
  if (!C.zf) goto L_100e9e0c;
  /* 100e9de8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100e9deb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100e9dee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9df1 jb 0x100e9e00 */
  if (C.cf) goto L_100e9e00;
  /* 100e9df3 std  */
  C.df=1;
  /* 100e9df4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100e9df6 cld  */
  C.df=0;
  /* 100e9df7 jmp dword ptr [edx*4 + 0x100e9f20] */
  switch (EDX) {
    case 0: goto L_100e9f30;
    case 1: goto L_100e9f38;
    case 2: goto L_100e9f48;
    case 3: goto L_100e9f5c;
    default: x86_unimpl("switch@0x100e9df7 out of table"); return;
  }
  /* 100e9dfe mov edi, edi */
  EDI = (EDI);
L_100e9e00:;
  /* 100e9e00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100e9e02 jmp dword ptr [ecx*4 + 0x100e9ed0] */
  switch (ECX) {
    case 0: goto L_100e9f17;
    default: x86_unimpl("switch@0x100e9e02 out of table"); return;
  }
  /* 100e9e09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100e9e0c:;
  /* 100e9e0c mov eax, edi */
  EAX = (EDI);
  /* 100e9e0e mov edx, 3 */
  EDX = (0x3u);
  /* 100e9e13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9e16 jb 0x100e9e24 */
  if (C.cf) goto L_100e9e24;
  /* 100e9e18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 100e9e1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e9e1d jmp dword ptr [eax*4 + 0x100e9e28] */
  switch (EAX) {
    case 1: goto L_100e9e38;
    case 2: goto L_100e9e58;
    case 3: goto L_100e9e80;
    default: x86_unimpl("switch@0x100e9e1d out of table"); return;
  }
L_100e9e24:;
  /* 100e9e24 jmp dword ptr [ecx*4 + 0x100e9f20] */
  switch (ECX) {
    case 0: goto L_100e9f30;
    case 1: goto L_100e9f38;
    case 2: goto L_100e9f48;
    case 3: goto L_100e9f5c;
    default: x86_unimpl("switch@0x100e9e24 out of table"); return;
  }
  /* 100e9e2b nop  */
  /* nop */
L_100e9e38:;
  /* 100e9e38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100e9e3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100e9e3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100e9e40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100e9e41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100e9e44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100e9e45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9e48 jb 0x100e9e00 */
  if (C.cf) goto L_100e9e00;
  /* 100e9e4a std  */
  C.df=1;
  /* 100e9e4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100e9e4d cld  */
  C.df=0;
  /* 100e9e4e jmp dword ptr [edx*4 + 0x100e9f20] */
  switch (EDX) {
    case 0: goto L_100e9f30;
    case 1: goto L_100e9f38;
    case 2: goto L_100e9f48;
    case 3: goto L_100e9f5c;
    default: x86_unimpl("switch@0x100e9e4e out of table"); return;
  }
  /* 100e9e55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100e9e58:;
  /* 100e9e58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100e9e5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100e9e5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100e9e60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100e9e63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100e9e66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100e9e69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e9e6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e9e6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9e72 jb 0x100e9e00 */
  if (C.cf) goto L_100e9e00;
  /* 100e9e74 std  */
  C.df=1;
  /* 100e9e75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100e9e77 cld  */
  C.df=0;
  /* 100e9e78 jmp dword ptr [edx*4 + 0x100e9f20] */
  switch (EDX) {
    case 0: goto L_100e9f30;
    case 1: goto L_100e9f38;
    case 2: goto L_100e9f48;
    case 3: goto L_100e9f5c;
    default: x86_unimpl("switch@0x100e9e78 out of table"); return;
  }
  /* 100e9e7f nop  */
  /* nop */
L_100e9e80:;
  /* 100e9e80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100e9e83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100e9e85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100e9e88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100e9e8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100e9e8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100e9e91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100e9e94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100e9e97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e9e9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100e9e9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9ea0 jb 0x100e9e00 */
  if (C.cf) goto L_100e9e00;
  /* 100e9ea6 std  */
  C.df=1;
  /* 100e9ea7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100e9ea9 cld  */
  C.df=0;
  /* 100e9eaa jmp dword ptr [edx*4 + 0x100e9f20] */
  switch (EDX) {
    case 0: goto L_100e9f30;
    case 1: goto L_100e9f38;
    case 2: goto L_100e9f48;
    case 3: goto L_100e9f5c;
    default: x86_unimpl("switch@0x100e9eaa out of table"); return;
  }
  /* 100e9eb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 100e9eb4 aam 0x9e */
  x86_unimpl("aam @ 0x100e9eb4");
  /* 100e9eb6 push cs */
  push32((uint32_t)(C.seg_cs));
  /* 100e9eb7 adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 100e9eb9 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 100e9eba push cs */
  push32((uint32_t)(C.seg_cs));
  /* 100e9ebb adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 100e9ebd sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 100e9ebe push cs */
  push32((uint32_t)(C.seg_cs));
  /* 100e9ebf adc ah, ch */
  { uint32_t _a=(AH),_b=(C.c.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 100e9ec1 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 100e9ec2 push cs */
  push32((uint32_t)(C.seg_cs));
  /* 100e9ec3 adc ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 100e9ec5 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 100e9ec6 push cs */
  push32((uint32_t)(C.seg_cs));
  /* 100e9ec7 adc ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 100e9ec9 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 100e9eca push cs */
  push32((uint32_t)(C.seg_cs));
  /* 100e9ecb adc byte ptr [edi + ebx*4], al */
  { uint32_t _a=(r8((uint32_t)(EDI + EBX*4))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 100e9ece push cs */
  push32((uint32_t)(C.seg_cs));
  /* 100e9ed4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 100e9ed8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 100e9edc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 100e9ee0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 100e9ee4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 100e9ee8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 100e9eec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 100e9ef0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 100e9ef4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 100e9ef8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 100e9efc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 100e9f00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 100e9f04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 100e9f08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 100e9f0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 100e9f13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9f15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100e9f17:;
  /* 100e9f17 jmp dword ptr [edx*4 + 0x100e9f20] */
  switch (EDX) {
    case 0: goto L_100e9f30;
    case 1: goto L_100e9f38;
    case 2: goto L_100e9f48;
    case 3: goto L_100e9f5c;
    default: x86_unimpl("switch@0x100e9f17 out of table"); return;
  }
  /* 100e9f1e mov edi, edi */
  EDI = (EDI);
L_100e9f30:;
  /* 100e9f30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9f33 pop esi */
  ESI = (pop32());
  /* 100e9f34 pop edi */
  EDI = (pop32());
  /* 100e9f35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9f36 ret  */
  ESPCHK(0x100e9c40u, _esp0);
  ESP += 4; return;
  /* 100e9f37 nop  */
  /* nop */
L_100e9f38:;
  /* 100e9f38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100e9f3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100e9f3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9f41 pop esi */
  ESI = (pop32());
  /* 100e9f42 pop edi */
  EDI = (pop32());
  /* 100e9f43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9f44 ret  */
  ESPCHK(0x100e9c40u, _esp0);
  ESP += 4; return;
  /* 100e9f45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100e9f48:;
  /* 100e9f48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100e9f4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100e9f4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100e9f51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100e9f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9f57 pop esi */
  ESI = (pop32());
  /* 100e9f58 pop edi */
  EDI = (pop32());
  /* 100e9f59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9f5a ret  */
  ESPCHK(0x100e9c40u, _esp0);
  ESP += 4; return;
  /* 100e9f5b nop  */
  /* nop */
L_100e9f5c:;
  /* 100e9f5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100e9f5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100e9f62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100e9f65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100e9f68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100e9f6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100e9f6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100e9f71 pop esi */
  ESI = (pop32());
  /* 100e9f72 pop edi */
  EDI = (pop32());
  /* 100e9f73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100e9f74 ret  */
  ESPCHK(0x100e9c40u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x100e9f75 (9 bytes, 4 insns) */
void f_100e9f75(void) {
  FTRACE(0x100e9f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9f75 push 2 */
  push32((uint32_t)(0x2u));
  /* 100e9f77 call 0x100e70b1 */
  push32(0x100e9f7cu); f_100e70b1();
  /* 100e9f7c pop ecx */
  ECX = (pop32());
  /* 100e9f7d ret  */
  ESPCHK(0x100e9f75u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f7e @ 0x100e9f7e (41 bytes, 12 insns) */
void f_100e9f7e(void) {
  FTRACE(0x100e9f7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9f7e push esi */
  push32((uint32_t)(ESI));
  /* 100e9f7f mov esi, dword ptr [0x100ee094] */
  ESI = (r32((uint32_t)(0x100ee094)));
  /* 100e9f85 push dword ptr [0x100f0c64] */
  push32((uint32_t)(r32((uint32_t)(0x100f0c64))));
  /* 100e9f8b call esi */
  call_ind((uint32_t)(ESI), 0x100e9f8du);
  /* 100e9f8d push dword ptr [0x100f0c54] */
  push32((uint32_t)(r32((uint32_t)(0x100f0c54))));
  /* 100e9f93 call esi */
  call_ind((uint32_t)(ESI), 0x100e9f95u);
  /* 100e9f95 push dword ptr [0x100f0c44] */
  push32((uint32_t)(r32((uint32_t)(0x100f0c44))));
  /* 100e9f9b call esi */
  call_ind((uint32_t)(ESI), 0x100e9f9du);
  /* 100e9f9d push dword ptr [0x100f0c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f0c24))));
  /* 100e9fa3 call esi */
  call_ind((uint32_t)(ESI), 0x100e9fa5u);
  /* 100e9fa5 pop esi */
  ESI = (pop32());
  /* 100e9fa6 ret  */
  ESPCHK(0x100e9f7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009fa7 @ 0x100e9fa7 (108 bytes, 34 insns) */
void f_100e9fa7(void) {
  FTRACE(0x100e9fa7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100e9fa7 push esi */
  push32((uint32_t)(ESI));
  /* 100e9fa8 push edi */
  push32((uint32_t)(EDI));
  /* 100e9fa9 mov edi, dword ptr [0x100ee050] */
  EDI = (r32((uint32_t)(0x100ee050)));
  /* 100e9faf mov esi, 0x100f0c20 */
  ESI = (0x100f0c20u);
L_100e9fb4:;
  /* 100e9fb4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100e9fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100e9fb8 je 0x100e9fe5 */
  if (C.zf) goto L_100e9fe5;
  /* 100e9fba cmp esi, 0x100f0c64 */
  { uint32_t _a=(ESI),_b=(0x100f0c64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9fc0 je 0x100e9fe5 */
  if (C.zf) goto L_100e9fe5;
  /* 100e9fc2 cmp esi, 0x100f0c54 */
  { uint32_t _a=(ESI),_b=(0x100f0c54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9fc8 je 0x100e9fe5 */
  if (C.zf) goto L_100e9fe5;
  /* 100e9fca cmp esi, 0x100f0c44 */
  { uint32_t _a=(ESI),_b=(0x100f0c44u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9fd0 je 0x100e9fe5 */
  if (C.zf) goto L_100e9fe5;
  /* 100e9fd2 cmp esi, 0x100f0c24 */
  { uint32_t _a=(ESI),_b=(0x100f0c24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9fd8 je 0x100e9fe5 */
  if (C.zf) goto L_100e9fe5;
  /* 100e9fda push eax */
  push32((uint32_t)(EAX));
  /* 100e9fdb call edi */
  call_ind((uint32_t)(EDI), 0x100e9fddu);
  /* 100e9fdd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100e9fdf call 0x100ea1c6 */
  push32(0x100e9fe4u); f_100ea1c6();
  /* 100e9fe4 pop ecx */
  ECX = (pop32());
L_100e9fe5:;
  /* 100e9fe5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100e9fe8 cmp esi, 0x100f0ce0 */
  { uint32_t _a=(ESI),_b=(0x100f0ce0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100e9fee jl 0x100e9fb4 */
  if ((C.sf!=C.of)) goto L_100e9fb4;
  /* 100e9ff0 push dword ptr [0x100f0c44] */
  push32((uint32_t)(r32((uint32_t)(0x100f0c44))));
  /* 100e9ff6 call edi */
  call_ind((uint32_t)(EDI), 0x100e9ff8u);
  /* 100e9ff8 push dword ptr [0x100f0c54] */
  push32((uint32_t)(r32((uint32_t)(0x100f0c54))));
  /* 100e9ffe call edi */
  call_ind((uint32_t)(EDI), 0x100ea000u);
  /* 100ea000 push dword ptr [0x100f0c64] */
  push32((uint32_t)(r32((uint32_t)(0x100f0c64))));
  /* 100ea006 call edi */
  call_ind((uint32_t)(EDI), 0x100ea008u);
  /* 100ea008 push dword ptr [0x100f0c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f0c24))));
  /* 100ea00e call edi */
  call_ind((uint32_t)(EDI), 0x100ea010u);
  /* 100ea010 pop edi */
  EDI = (pop32());
  /* 100ea011 pop esi */
  ESI = (pop32());
  /* 100ea012 ret  */
  ESPCHK(0x100e9fa7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a013 @ 0x100ea013 (97 bytes, 37 insns) */
void f_100ea013(void) {
  FTRACE(0x100ea013u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea013 push ebp */
  push32((uint32_t)(EBP));
  /* 100ea014 mov ebp, esp */
  EBP = (ESP);
  /* 100ea016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ea019 push esi */
  push32((uint32_t)(ESI));
  /* 100ea01a cmp dword ptr [eax*4 + 0x100f0c20], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x100f0c20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea022 lea esi, [eax*4 + 0x100f0c20] */
  ESI = ((uint32_t)(EAX*4 + 0x100f0c20));
  /* 100ea029 jne 0x100ea069 */
  if (!C.zf) goto L_100ea069;
  /* 100ea02b push edi */
  push32((uint32_t)(EDI));
  /* 100ea02c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 100ea02e call 0x100ea2af */
  push32(0x100ea033u); f_100ea2af();
  /* 100ea033 mov edi, eax */
  EDI = (EAX);
  /* 100ea035 pop ecx */
  ECX = (pop32());
  /* 100ea036 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100ea038 jne 0x100ea042 */
  if (!C.zf) goto L_100ea042;
  /* 100ea03a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100ea03c call 0x100e70b1 */
  push32(0x100ea041u); f_100e70b1();
  /* 100ea041 pop ecx */
  ECX = (pop32());
L_100ea042:;
  /* 100ea042 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100ea044 call 0x100ea013 */
  push32(0x100ea049u); f_100ea013();
  /* 100ea049 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea04c pop ecx */
  ECX = (pop32());
  /* 100ea04d push edi */
  push32((uint32_t)(EDI));
  /* 100ea04e jne 0x100ea05a */
  if (!C.zf) goto L_100ea05a;
  /* 100ea050 call dword ptr [0x100ee094] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee094))), 0x100ea056u);
  /* 100ea056 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100ea058 jmp 0x100ea060 */
  goto L_100ea060;
L_100ea05a:;
  /* 100ea05a call 0x100ea1c6 */
  push32(0x100ea05fu); f_100ea1c6();
  /* 100ea05f pop ecx */
  ECX = (pop32());
L_100ea060:;
  /* 100ea060 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100ea062 call 0x100ea074 */
  push32(0x100ea067u); f_100ea074();
  /* 100ea067 pop ecx */
  ECX = (pop32());
  /* 100ea068 pop edi */
  EDI = (pop32());
L_100ea069:;
  /* 100ea069 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100ea06b call dword ptr [0x100ee00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee00c))), 0x100ea071u);
  /* 100ea071 pop esi */
  ESI = (pop32());
  /* 100ea072 pop ebp */
  EBP = (pop32());
  /* 100ea073 ret  */
  ESPCHK(0x100ea013u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a074 @ 0x100ea074 (21 bytes, 7 insns) */
void f_100ea074(void) {
  FTRACE(0x100ea074u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea074 push ebp */
  push32((uint32_t)(EBP));
  /* 100ea075 mov ebp, esp */
  EBP = (ESP);
  /* 100ea077 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ea07a push dword ptr [eax*4 + 0x100f0c20] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x100f0c20))));
  /* 100ea081 call dword ptr [0x100ee008] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee008))), 0x100ea087u);
  /* 100ea087 pop ebp */
  EBP = (pop32());
  /* 100ea088 ret  */
  ESPCHK(0x100ea074u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a089 @ 0x100ea089 (289 bytes, 98 insns) */
void f_100ea089(void) {
  FTRACE(0x100ea089u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea089 push ebp */
  push32((uint32_t)(EBP));
  /* 100ea08a mov ebp, esp */
  EBP = (ESP);
  /* 100ea08c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100ea08e push 0x100ee4d0 */
  push32((uint32_t)(0x100ee4d0u));
  /* 100ea093 push 0x100ed030 */
  push32((uint32_t)(0x100ed030u));
  /* 100ea098 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100ea09e push eax */
  push32((uint32_t)(EAX));
  /* 100ea09f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100ea0a6 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ea0a9 push ebx */
  push32((uint32_t)(EBX));
  /* 100ea0aa push esi */
  push32((uint32_t)(ESI));
  /* 100ea0ab push edi */
  push32((uint32_t)(EDI));
  /* 100ea0ac mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ea0af imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100ea0b3 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 100ea0b6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 100ea0b9 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea0bc ja 0x100ea0d2 */
  if ((!C.cf&&!C.zf)) goto L_100ea0d2;
  /* 100ea0be xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ea0c0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea0c2 jne 0x100ea0c7 */
  if (!C.zf) goto L_100ea0c7;
  /* 100ea0c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ea0c6 pop esi */
  ESI = (pop32());
L_100ea0c7:;
  /* 100ea0c7 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ea0ca and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 100ea0cd mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 100ea0d0 jmp 0x100ea0d4 */
  goto L_100ea0d4;
L_100ea0d2:;
  /* 100ea0d2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100ea0d4:;
  /* 100ea0d4 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 100ea0d7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea0da ja 0x100ea188 */
  if ((!C.cf&&!C.zf)) goto L_100ea188;
  /* 100ea0e0 mov eax, dword ptr [0x100f7c28] */
  EAX = (r32((uint32_t)(0x100f7c28)));
  /* 100ea0e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea0e8 jne 0x100ea12b */
  if (!C.zf) goto L_100ea12b;
  /* 100ea0ea mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 100ea0ed cmp edi, dword ptr [0x100f69d0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x100f69d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea0f3 ja 0x100ea171 */
  if ((!C.cf&&!C.zf)) goto L_100ea171;
  /* 100ea0f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea0f7 call 0x100ea013 */
  push32(0x100ea0fcu); f_100ea013();
  /* 100ea0fc pop ecx */
  ECX = (pop32());
  /* 100ea0fd mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 100ea100 push edi */
  push32((uint32_t)(EDI));
  /* 100ea101 call 0x100eb29b */
  push32(0x100ea106u); f_100eb29b();
  /* 100ea106 pop ecx */
  ECX = (pop32());
  /* 100ea107 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100ea10a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ea10e call 0x100ea122 */
  push32(0x100ea113u); f_100ea122();
  /* 100ea113 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea116 je 0x100ea176 */
  if (C.zf) goto L_100ea176;
  /* 100ea118 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 100ea11b jmp 0x100ea165 */
  goto L_100ea165;
  /* 100ea11d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ea11f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100ea122 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea124 call 0x100ea074 */
  push32(0x100ea129u); f_100ea074();
  /* 100ea129 pop ecx */
  ECX = (pop32());
  /* 100ea12a ret  */
  ESPCHK(0x100ea089u, _esp0);
  ESP += 4; return;
L_100ea12b:;
  /* 100ea12b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea12e jne 0x100ea171 */
  if (!C.zf) goto L_100ea171;
  /* 100ea130 cmp esi, dword ptr [0x100f2e84] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100f2e84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea136 ja 0x100ea171 */
  if ((!C.cf&&!C.zf)) goto L_100ea171;
  /* 100ea138 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea13a call 0x100ea013 */
  push32(0x100ea13fu); f_100ea013();
  /* 100ea13f pop ecx */
  ECX = (pop32());
  /* 100ea140 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 100ea147 mov eax, esi */
  EAX = (ESI);
  /* 100ea149 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100ea14c push eax */
  push32((uint32_t)(EAX));
  /* 100ea14d call 0x100eba48 */
  push32(0x100ea152u); f_100eba48();
  /* 100ea152 pop ecx */
  ECX = (pop32());
  /* 100ea153 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100ea156 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ea15a call 0x100ea1ab */
  push32(0x100ea15fu); f_100ea1ab();
  /* 100ea15f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea162 je 0x100ea176 */
  if (C.zf) goto L_100ea176;
  /* 100ea164 push esi */
  push32((uint32_t)(ESI));
L_100ea165:;
  /* 100ea165 push ebx */
  push32((uint32_t)(EBX));
  /* 100ea166 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 100ea169 call 0x100e9be0 */
  push32(0x100ea16eu); f_100e9be0();
  /* 100ea16e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100ea171:;
  /* 100ea171 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea174 jne 0x100ea1b4 */
  if (!C.zf) { jmp_ind(0x100ea1b4u); return; }
L_100ea176:;
  /* 100ea176 push esi */
  push32((uint32_t)(ESI));
  /* 100ea177 push 8 */
  push32((uint32_t)(0x8u));
  /* 100ea179 push dword ptr [0x100f7c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f7c24))));
  /* 100ea17f call dword ptr [0x100ee098] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee098))), 0x100ea185u);
  /* 100ea185 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_100ea188:;
  /* 100ea188 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea18b jne 0x100ea1b4 */
  if (!C.zf) { jmp_ind(0x100ea1b4u); return; }
  /* 100ea18d cmp dword ptr [0x100f6870], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100f6870))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea193 je 0x100ea1b4 */
  if (C.zf) { jmp_ind(0x100ea1b4u); return; }
  /* 100ea195 push esi */
  push32((uint32_t)(ESI));
  /* 100ea196 call 0x100ecf1a */
  push32(0x100ea19bu); f_100ecf1a();
  /* 100ea19b pop ecx */
  ECX = (pop32());
  /* 100ea19c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ea19e jne 0x100ea0d4 */
  if (!C.zf) goto L_100ea0d4;
  /* 100ea1a4 jmp 0x100ea1b7 */
  jmp_ind(0x100ea1b7u); return;
  /* 100ea1a6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a122 @ 0x100ea122 (9 bytes, 4 insns) */
void f_100ea122(void) {
  FTRACE(0x100ea122u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea122 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea124 call 0x100ea074 */
  push32(0x100ea129u); f_100ea074();
  /* 100ea129 pop ecx */
  ECX = (pop32());
  /* 100ea12a ret  */
  ESPCHK(0x100ea122u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1ab @ 0x100ea1ab (9 bytes, 4 insns) */
void f_100ea1ab(void) {
  FTRACE(0x100ea1abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea1ab push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea1ad call 0x100ea074 */
  push32(0x100ea1b2u); f_100ea074();
  /* 100ea1b2 pop ecx */
  ECX = (pop32());
  /* 100ea1b3 ret  */
  ESPCHK(0x100ea1abu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1c6 @ 0x100ea1c6 (215 bytes, 75 insns) */
void f_100ea1c6(void) {
  FTRACE(0x100ea1c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea1c6 push ebp */
  push32((uint32_t)(EBP));
  /* 100ea1c7 mov ebp, esp */
  EBP = (ESP);
  /* 100ea1c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100ea1cb push 0x100ee4e8 */
  push32((uint32_t)(0x100ee4e8u));
  /* 100ea1d0 push 0x100ed030 */
  push32((uint32_t)(0x100ed030u));
  /* 100ea1d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100ea1db push eax */
  push32((uint32_t)(EAX));
  /* 100ea1dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100ea1e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ea1e6 push ebx */
  push32((uint32_t)(EBX));
  /* 100ea1e7 push esi */
  push32((uint32_t)(ESI));
  /* 100ea1e8 push edi */
  push32((uint32_t)(EDI));
  /* 100ea1e9 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ea1ec test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100ea1ee je 0x100ea2a0 */
  if (C.zf) { jmp_ind(0x100ea2a0u); return; }
  /* 100ea1f4 mov eax, dword ptr [0x100f7c28] */
  EAX = (r32((uint32_t)(0x100f7c28)));
  /* 100ea1f9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea1fc jne 0x100ea239 */
  if (!C.zf) goto L_100ea239;
  /* 100ea1fe push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea200 call 0x100ea013 */
  push32(0x100ea205u); f_100ea013();
  /* 100ea205 pop ecx */
  ECX = (pop32());
  /* 100ea206 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ea20a push esi */
  push32((uint32_t)(ESI));
  /* 100ea20b call 0x100eaf47 */
  push32(0x100ea210u); f_100eaf47();
  /* 100ea210 pop ecx */
  ECX = (pop32());
  /* 100ea211 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 100ea214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ea216 je 0x100ea221 */
  if (C.zf) goto L_100ea221;
  /* 100ea218 push esi */
  push32((uint32_t)(ESI));
  /* 100ea219 push eax */
  push32((uint32_t)(EAX));
  /* 100ea21a call 0x100eaf72 */
  push32(0x100ea21fu); f_100eaf72();
  /* 100ea21f pop ecx */
  ECX = (pop32());
  /* 100ea220 pop ecx */
  ECX = (pop32());
L_100ea221:;
  /* 100ea221 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ea225 call 0x100ea230 */
  push32(0x100ea22au); f_100ea230();
  /* 100ea22a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea22e jmp 0x100ea281 */
  goto L_100ea281;
  /* 100ea230 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea232 call 0x100ea074 */
  push32(0x100ea237u); f_100ea074();
  /* 100ea237 pop ecx */
  ECX = (pop32());
  /* 100ea238 ret  */
  ESPCHK(0x100ea1c6u, _esp0);
  ESP += 4; return;
L_100ea239:;
  /* 100ea239 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea23c jne 0x100ea291 */
  if (!C.zf) goto L_100ea291;
  /* 100ea23e push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea240 call 0x100ea013 */
  push32(0x100ea245u); f_100ea013();
  /* 100ea245 pop ecx */
  ECX = (pop32());
  /* 100ea246 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 100ea24d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 100ea250 push eax */
  push32((uint32_t)(EAX));
  /* 100ea251 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 100ea254 push eax */
  push32((uint32_t)(EAX));
  /* 100ea255 push esi */
  push32((uint32_t)(ESI));
  /* 100ea256 call 0x100eb9ac */
  push32(0x100ea25bu); f_100eb9ac();
  /* 100ea25b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ea25e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 100ea261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ea263 je 0x100ea274 */
  if (C.zf) goto L_100ea274;
  /* 100ea265 push eax */
  push32((uint32_t)(EAX));
  /* 100ea266 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 100ea269 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 100ea26c call 0x100eba03 */
  push32(0x100ea271u); f_100eba03();
  /* 100ea271 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100ea274:;
  /* 100ea274 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ea278 call 0x100ea288 */
  push32(0x100ea27du); f_100ea288();
  /* 100ea27d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100ea281:;
  /* 100ea281 jne 0x100ea2a0 */
  if (!C.zf) { jmp_ind(0x100ea2a0u); return; }
  /* 100ea283 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ea286 jmp 0x100ea292 */
  goto L_100ea292;
  /* 100ea288 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea28a call 0x100ea074 */
  push32(0x100ea28fu); f_100ea074();
  /* 100ea28f pop ecx */
  ECX = (pop32());
  /* 100ea290 ret  */
  ESPCHK(0x100ea1c6u, _esp0);
  ESP += 4; return;
L_100ea291:;
  /* 100ea291 push esi */
  push32((uint32_t)(ESI));
L_100ea292:;
  /* 100ea292 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ea294 push dword ptr [0x100f7c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f7c24))));
}

/* FUN_1000a230 @ 0x100ea230 (9 bytes, 4 insns) */
void f_100ea230(void) {
  FTRACE(0x100ea230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea230 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea232 call 0x100ea074 */
  push32(0x100ea237u); f_100ea074();
  /* 100ea237 pop ecx */
  ECX = (pop32());
  /* 100ea238 ret  */
  ESPCHK(0x100ea230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a288 @ 0x100ea288 (9 bytes, 4 insns) */
void f_100ea288(void) {
  FTRACE(0x100ea288u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea288 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea28a call 0x100ea074 */
  push32(0x100ea28fu); f_100ea074();
  /* 100ea28f pop ecx */
  ECX = (pop32());
  /* 100ea290 ret  */
  ESPCHK(0x100ea288u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x100ea2af (18 bytes, 6 insns) */
void f_100ea2af(void) {
  FTRACE(0x100ea2afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea2af push dword ptr [0x100f6870] */
  push32((uint32_t)(r32((uint32_t)(0x100f6870))));
  /* 100ea2b5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100ea2b9 call 0x100ea2c1 */
  push32(0x100ea2beu); f_100ea2c1();
  /* 100ea2be pop ecx */
  ECX = (pop32());
  /* 100ea2bf pop ecx */
  ECX = (pop32());
  /* 100ea2c0 ret  */
  ESPCHK(0x100ea2afu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x100ea2c1 (44 bytes, 16 insns) */
void f_100ea2c1(void) {
  FTRACE(0x100ea2c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea2c1 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea2c6 ja 0x100ea2ea */
  if ((!C.cf&&!C.zf)) goto L_100ea2ea;
L_100ea2c8:;
  /* 100ea2c8 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 100ea2cc call 0x100ea2ed */
  push32(0x100ea2d1u); f_100ea2ed();
  /* 100ea2d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ea2d3 pop ecx */
  ECX = (pop32());
  /* 100ea2d4 jne 0x100ea2ec */
  if (!C.zf) goto L_100ea2ec;
  /* 100ea2d6 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea2da je 0x100ea2ec */
  if (C.zf) goto L_100ea2ec;
  /* 100ea2dc push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 100ea2e0 call 0x100ecf1a */
  push32(0x100ea2e5u); f_100ecf1a();
  /* 100ea2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ea2e7 pop ecx */
  ECX = (pop32());
  /* 100ea2e8 jne 0x100ea2c8 */
  if (!C.zf) goto L_100ea2c8;
L_100ea2ea:;
  /* 100ea2ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100ea2ec:;
  /* 100ea2ec ret  */
  ESPCHK(0x100ea2c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2ed @ 0x100ea2ed (231 bytes, 81 insns) */
void f_100ea2ed(void) {
  FTRACE(0x100ea2edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea2ed push ebp */
  push32((uint32_t)(EBP));
  /* 100ea2ee mov ebp, esp */
  EBP = (ESP);
  /* 100ea2f0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100ea2f2 push 0x100ee500 */
  push32((uint32_t)(0x100ee500u));
  /* 100ea2f7 push 0x100ed030 */
  push32((uint32_t)(0x100ed030u));
  /* 100ea2fc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100ea302 push eax */
  push32((uint32_t)(EAX));
  /* 100ea303 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100ea30a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ea30d push ebx */
  push32((uint32_t)(EBX));
  /* 100ea30e push esi */
  push32((uint32_t)(ESI));
  /* 100ea30f push edi */
  push32((uint32_t)(EDI));
  /* 100ea310 mov eax, dword ptr [0x100f7c28] */
  EAX = (r32((uint32_t)(0x100f7c28)));
  /* 100ea315 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea318 jne 0x100ea35d */
  if (!C.zf) goto L_100ea35d;
  /* 100ea31a mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ea31d cmp esi, dword ptr [0x100f69d0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100f69d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea323 ja 0x100ea3bc */
  if ((!C.cf&&!C.zf)) goto L_100ea3bc;
  /* 100ea329 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea32b call 0x100ea013 */
  push32(0x100ea330u); f_100ea013();
  /* 100ea330 pop ecx */
  ECX = (pop32());
  /* 100ea331 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ea335 push esi */
  push32((uint32_t)(ESI));
  /* 100ea336 call 0x100eb29b */
  push32(0x100ea33bu); f_100eb29b();
  /* 100ea33b pop ecx */
  ECX = (pop32());
  /* 100ea33c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 100ea33f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ea343 call 0x100ea354 */
  push32(0x100ea348u); f_100ea354();
  /* 100ea348 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 100ea34b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ea34d je 0x100ea3bc */
  if (C.zf) goto L_100ea3bc;
  /* 100ea34f jmp 0x100ea3da */
  jmp_ind(0x100ea3dau); return;
  /* 100ea354 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea356 call 0x100ea074 */
  push32(0x100ea35bu); f_100ea074();
  /* 100ea35b pop ecx */
  ECX = (pop32());
  /* 100ea35c ret  */
  ESPCHK(0x100ea2edu, _esp0);
  ESP += 4; return;
L_100ea35d:;
  /* 100ea35d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea360 jne 0x100ea3bc */
  if (!C.zf) goto L_100ea3bc;
  /* 100ea362 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ea365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ea367 je 0x100ea371 */
  if (C.zf) goto L_100ea371;
  /* 100ea369 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 100ea36c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 100ea36f jmp 0x100ea374 */
  goto L_100ea374;
L_100ea371:;
  /* 100ea371 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100ea373 pop esi */
  ESI = (pop32());
L_100ea374:;
  /* 100ea374 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 100ea377 cmp esi, dword ptr [0x100f2e84] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100f2e84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea37d ja 0x100ea3ad */
  if ((!C.cf&&!C.zf)) goto L_100ea3ad;
  /* 100ea37f push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea381 call 0x100ea013 */
  push32(0x100ea386u); f_100ea013();
  /* 100ea386 pop ecx */
  ECX = (pop32());
  /* 100ea387 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 100ea38e mov eax, esi */
  EAX = (ESI);
  /* 100ea390 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100ea393 push eax */
  push32((uint32_t)(EAX));
  /* 100ea394 call 0x100eba48 */
  push32(0x100ea399u); f_100eba48();
  /* 100ea399 pop ecx */
  ECX = (pop32());
  /* 100ea39a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 100ea39d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ea3a1 call 0x100ea3b3 */
  push32(0x100ea3a6u); f_100ea3b3();
  /* 100ea3a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 100ea3a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ea3ab jne 0x100ea3da */
  if (!C.zf) { jmp_ind(0x100ea3dau); return; }
L_100ea3ad:;
  /* 100ea3ad push esi */
  push32((uint32_t)(ESI));
  /* 100ea3ae jmp 0x100ea3cc */
  goto L_100ea3cc;
  /* 100ea3b0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ea3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea3b5 call 0x100ea074 */
  push32(0x100ea3bau); f_100ea074();
  /* 100ea3ba pop ecx */
  ECX = (pop32());
  /* 100ea3bb ret  */
  ESPCHK(0x100ea2edu, _esp0);
  ESP += 4; return;
L_100ea3bc:;
  /* 100ea3bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ea3bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ea3c1 jne 0x100ea3c6 */
  if (!C.zf) goto L_100ea3c6;
  /* 100ea3c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ea3c5 pop eax */
  EAX = (pop32());
L_100ea3c6:;
  /* 100ea3c6 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ea3c9 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 100ea3cb push eax */
  push32((uint32_t)(EAX));
L_100ea3cc:;
  /* 100ea3cc push 0 */
  push32((uint32_t)(0x0u));
  /* 100ea3ce push dword ptr [0x100f7c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f7c24))));
}

/* FUN_1000a354 @ 0x100ea354 (9 bytes, 4 insns) */
void f_100ea354(void) {
  FTRACE(0x100ea354u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea354 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea356 call 0x100ea074 */
  push32(0x100ea35bu); f_100ea074();
  /* 100ea35b pop ecx */
  ECX = (pop32());
  /* 100ea35c ret  */
  ESPCHK(0x100ea354u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3b3 @ 0x100ea3b3 (9 bytes, 4 insns) */
void f_100ea3b3(void) {
  FTRACE(0x100ea3b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea3b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 100ea3b5 call 0x100ea074 */
  push32(0x100ea3bau); f_100ea074();
  /* 100ea3ba pop ecx */
  ECX = (pop32());
  /* 100ea3bb ret  */
  ESPCHK(0x100ea3b3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3e9 @ 0x100ea3e9 (429 bytes, 143 insns) */
void f_100ea3e9(void) {
  FTRACE(0x100ea3e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea3e9 push ebp */
  push32((uint32_t)(EBP));
  /* 100ea3ea mov ebp, esp */
  EBP = (ESP);
  /* 100ea3ec sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ea3ef push ebx */
  push32((uint32_t)(EBX));
  /* 100ea3f0 push esi */
  push32((uint32_t)(ESI));
  /* 100ea3f1 push edi */
  push32((uint32_t)(EDI));
  /* 100ea3f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100ea3f4 call 0x100ea013 */
  push32(0x100ea3f9u); f_100ea013();
  /* 100ea3f9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ea3fc call 0x100ea596 */
  push32(0x100ea401u); f_100ea596();
  /* 100ea401 mov ebx, eax */
  EBX = (EAX);
  /* 100ea403 pop ecx */
  ECX = (pop32());
  /* 100ea404 cmp ebx, dword ptr [0x100f69d4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100f69d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea40a pop ecx */
  ECX = (pop32());
  /* 100ea40b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100ea40e jne 0x100ea417 */
  if (!C.zf) goto L_100ea417;
L_100ea410:;
  /* 100ea410 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100ea412 jmp 0x100ea587 */
  goto L_100ea587;
L_100ea417:;
  /* 100ea417 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100ea419 je 0x100ea575 */
  if (C.zf) goto L_100ea575;
  /* 100ea41f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ea421 mov eax, 0x100f0d70 */
  EAX = (0x100f0d70u);
L_100ea426:;
  /* 100ea426 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea428 je 0x100ea49e */
  if (C.zf) goto L_100ea49e;
  /* 100ea42a add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ea42d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100ea42e cmp eax, 0x100f0e60 */
  { uint32_t _a=(EAX),_b=(0x100f0e60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea433 jl 0x100ea426 */
  if ((C.sf!=C.of)) goto L_100ea426;
  /* 100ea435 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 100ea438 push eax */
  push32((uint32_t)(EAX));
  /* 100ea439 push ebx */
  push32((uint32_t)(EBX));
  /* 100ea43a call dword ptr [0x100ee09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee09c))), 0x100ea440u);
  /* 100ea440 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ea442 pop esi */
  ESI = (pop32());
  /* 100ea443 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea445 jne 0x100ea56c */
  if (!C.zf) goto L_100ea56c;
  /* 100ea44b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 100ea44d and dword ptr [0x100f6c04], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100f6c04)))&(0x0u); w32((uint32_t)(0x100f6c04), (_r)); fl_logic(_r,32); }
  /* 100ea454 pop ecx */
  ECX = (pop32());
  /* 100ea455 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ea457 mov edi, 0x100f6b00 */
  EDI = (0x100f6b00u);
  /* 100ea45c cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea45f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 100ea461 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100ea462 mov dword ptr [0x100f69d4], ebx */
  w32((uint32_t)(0x100f69d4), (EBX));
  /* 100ea468 jbe 0x100ea559 */
  if ((C.cf||C.zf)) goto L_100ea559;
  /* 100ea46e cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ea472 je 0x100ea534 */
  if (C.zf) goto L_100ea534;
  /* 100ea478 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_100ea47b:;
  /* 100ea47b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 100ea47d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100ea47f je 0x100ea534 */
  if (C.zf) goto L_100ea534;
  /* 100ea485 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 100ea489 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_100ea48c:;
  /* 100ea48c cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea48e ja 0x100ea528 */
  if ((!C.cf&&!C.zf)) goto L_100ea528;
  /* 100ea494 or byte ptr [eax + 0x100f6b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100f6b01)))|(0x4u); w8((uint32_t)(EAX + 0x100f6b01), (_r)); fl_logic(_r,8); }
  /* 100ea49b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ea49c jmp 0x100ea48c */
  goto L_100ea48c;
L_100ea49e:;
  /* 100ea49e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ea4a2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 100ea4a4 pop ecx */
  ECX = (pop32());
  /* 100ea4a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ea4a7 mov edi, 0x100f6b00 */
  EDI = (0x100f6b00u);
  /* 100ea4ac lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 100ea4af rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 100ea4b1 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 100ea4b4 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100ea4b5 lea ebx, [esi + 0x100f0d80] */
  EBX = ((uint32_t)(ESI + 0x100f0d80));
L_100ea4bb:;
  /* 100ea4bb cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ea4be mov ecx, ebx */
  ECX = (EBX);
  /* 100ea4c0 je 0x100ea4ee */
  if (C.zf) goto L_100ea4ee;
L_100ea4c2:;
  /* 100ea4c2 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 100ea4c5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100ea4c7 je 0x100ea4ee */
  if (C.zf) goto L_100ea4ee;
  /* 100ea4c9 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 100ea4cc movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 100ea4cf cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea4d1 ja 0x100ea4e7 */
  if ((!C.cf&&!C.zf)) goto L_100ea4e7;
  /* 100ea4d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ea4d6 mov dl, byte ptr [edx + 0x100f0d68] */
  DL = (r8((uint32_t)(EDX + 0x100f0d68)));
L_100ea4dc:;
  /* 100ea4dc or byte ptr [eax + 0x100f6b01], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100f6b01)))|(DL); w8((uint32_t)(EAX + 0x100f6b01), (_r)); fl_logic(_r,8); }
  /* 100ea4e2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ea4e3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea4e5 jbe 0x100ea4dc */
  if ((C.cf||C.zf)) goto L_100ea4dc;
L_100ea4e7:;
  /* 100ea4e7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ea4e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ea4e9 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ea4ec jne 0x100ea4c2 */
  if (!C.zf) goto L_100ea4c2;
L_100ea4ee:;
  /* 100ea4ee inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100ea4f1 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ea4f4 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea4f8 jb 0x100ea4bb */
  if (C.cf) goto L_100ea4bb;
  /* 100ea4fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ea4fd mov dword ptr [0x100f69ec], 1 */
  w32((uint32_t)(0x100f69ec), (0x1u));
  /* 100ea507 push eax */
  push32((uint32_t)(EAX));
  /* 100ea508 mov dword ptr [0x100f69d4], eax */
  w32((uint32_t)(0x100f69d4), (EAX));
  /* 100ea50d call 0x100ea5e0 */
  push32(0x100ea512u); f_100ea5e0();
  /* 100ea512 lea esi, [esi + 0x100f0d74] */
  ESI = ((uint32_t)(ESI + 0x100f0d74));
  /* 100ea518 mov edi, 0x100f69e0 */
  EDI = (0x100f69e0u);
  /* 100ea51d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ea51e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ea51f pop ecx */
  ECX = (pop32());
  /* 100ea520 mov dword ptr [0x100f6c04], eax */
  w32((uint32_t)(0x100f6c04), (EAX));
  /* 100ea525 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ea526 jmp 0x100ea57a */
  goto L_100ea57a;
L_100ea528:;
  /* 100ea528 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ea529 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ea52a cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ea52e jne 0x100ea47b */
  if (!C.zf) goto L_100ea47b;
L_100ea534:;
  /* 100ea534 mov eax, esi */
  EAX = (ESI);
L_100ea536:;
  /* 100ea536 or byte ptr [eax + 0x100f6b01], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100f6b01)))|(0x8u); w8((uint32_t)(EAX + 0x100f6b01), (_r)); fl_logic(_r,8); }
  /* 100ea53d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ea53e cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea543 jb 0x100ea536 */
  if (C.cf) goto L_100ea536;
  /* 100ea545 push ebx */
  push32((uint32_t)(EBX));
  /* 100ea546 call 0x100ea5e0 */
  push32(0x100ea54bu); f_100ea5e0();
  /* 100ea54b pop ecx */
  ECX = (pop32());
  /* 100ea54c mov dword ptr [0x100f6c04], eax */
  w32((uint32_t)(0x100f6c04), (EAX));
  /* 100ea551 mov dword ptr [0x100f69ec], esi */
  w32((uint32_t)(0x100f69ec), (ESI));
  /* 100ea557 jmp 0x100ea560 */
  goto L_100ea560;
L_100ea559:;
  /* 100ea559 and dword ptr [0x100f69ec], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100f69ec)))&(0x0u); w32((uint32_t)(0x100f69ec), (_r)); fl_logic(_r,32); }
L_100ea560:;
  /* 100ea560 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ea562 mov edi, 0x100f69e0 */
  EDI = (0x100f69e0u);
  /* 100ea567 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100ea568 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100ea569 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100ea56a jmp 0x100ea57a */
  goto L_100ea57a;
L_100ea56c:;
  /* 100ea56c cmp dword ptr [0x100f6810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100f6810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea573 je 0x100ea584 */
  if (C.zf) goto L_100ea584;
L_100ea575:;
  /* 100ea575 call 0x100ea613 */
  push32(0x100ea57au); f_100ea613();
L_100ea57a:;
  /* 100ea57a call 0x100ea63c */
  push32(0x100ea57fu); f_100ea63c();
  /* 100ea57f jmp 0x100ea410 */
  goto L_100ea410;
L_100ea584:;
  /* 100ea584 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_100ea587:;
  /* 100ea587 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 100ea589 call 0x100ea074 */
  push32(0x100ea58eu); f_100ea074();
  /* 100ea58e pop ecx */
  ECX = (pop32());
  /* 100ea58f mov eax, esi */
  EAX = (ESI);
  /* 100ea591 pop edi */
  EDI = (pop32());
  /* 100ea592 pop esi */
  ESI = (pop32());
  /* 100ea593 pop ebx */
  EBX = (pop32());
  /* 100ea594 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ea595 ret  */
  ESPCHK(0x100ea3e9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a596 @ 0x100ea596 (74 bytes, 15 insns) */
void f_100ea596(void) {
  FTRACE(0x100ea596u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea596 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ea59a and dword ptr [0x100f6810], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100f6810)))&(0x0u); w32((uint32_t)(0x100f6810), (_r)); fl_logic(_r,32); }
  /* 100ea5a1 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea5a4 jne 0x100ea5b6 */
  if (!C.zf) goto L_100ea5b6;
  /* 100ea5a6 mov dword ptr [0x100f6810], 1 */
  w32((uint32_t)(0x100f6810), (0x1u));
  /* 100ea5b0 jmp dword ptr [0x100ee0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100ee0a4)))); return;
L_100ea5b6:;
  /* 100ea5b6 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea5b9 jne 0x100ea5cb */
  if (!C.zf) goto L_100ea5cb;
  /* 100ea5bb mov dword ptr [0x100f6810], 1 */
  w32((uint32_t)(0x100f6810), (0x1u));
  /* 100ea5c5 jmp dword ptr [0x100ee0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100ee0a0)))); return;
L_100ea5cb:;
  /* 100ea5cb cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea5ce jne 0x100ea5df */
  if (!C.zf) goto L_100ea5df;
  /* 100ea5d0 mov eax, dword ptr [0x100f6848] */
  EAX = (r32((uint32_t)(0x100f6848)));
  /* 100ea5d5 mov dword ptr [0x100f6810], 1 */
  w32((uint32_t)(0x100f6810), (0x1u));
L_100ea5df:;
  /* 100ea5df ret  */
  ESPCHK(0x100ea596u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5e0 @ 0x100ea5e0 (51 bytes, 19 insns) */
void f_100ea5e0(void) {
  FTRACE(0x100ea5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea5e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ea5e4 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ea5e9 je 0x100ea60d */
  if (C.zf) goto L_100ea60d;
  /* 100ea5eb sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ea5ee je 0x100ea607 */
  if (C.zf) goto L_100ea607;
  /* 100ea5f0 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ea5f3 je 0x100ea601 */
  if (C.zf) goto L_100ea601;
  /* 100ea5f5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ea5f6 je 0x100ea5fb */
  if (C.zf) goto L_100ea5fb;
  /* 100ea5f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ea5fa ret  */
  ESPCHK(0x100ea5e0u, _esp0);
  ESP += 4; return;
L_100ea5fb:;
  /* 100ea5fb mov eax, 0x404 */
  EAX = (0x404u);
  /* 100ea600 ret  */
  ESPCHK(0x100ea5e0u, _esp0);
  ESP += 4; return;
L_100ea601:;
  /* 100ea601 mov eax, 0x412 */
  EAX = (0x412u);
  /* 100ea606 ret  */
  ESPCHK(0x100ea5e0u, _esp0);
  ESP += 4; return;
L_100ea607:;
  /* 100ea607 mov eax, 0x804 */
  EAX = (0x804u);
  /* 100ea60c ret  */
  ESPCHK(0x100ea5e0u, _esp0);
  ESP += 4; return;
L_100ea60d:;
  /* 100ea60d mov eax, 0x411 */
  EAX = (0x411u);
  /* 100ea612 ret  */
  ESPCHK(0x100ea5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a613 @ 0x100ea613 (41 bytes, 17 insns) */
void f_100ea613(void) {
  FTRACE(0x100ea613u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea613 push edi */
  push32((uint32_t)(EDI));
  /* 100ea614 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 100ea616 pop ecx */
  ECX = (pop32());
  /* 100ea617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ea619 mov edi, 0x100f6b00 */
  EDI = (0x100f6b00u);
  /* 100ea61e rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 100ea620 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100ea621 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ea623 mov edi, 0x100f69e0 */
  EDI = (0x100f69e0u);
  /* 100ea628 mov dword ptr [0x100f69d4], eax */
  w32((uint32_t)(0x100f69d4), (EAX));
  /* 100ea62d mov dword ptr [0x100f69ec], eax */
  w32((uint32_t)(0x100f69ec), (EAX));
  /* 100ea632 mov dword ptr [0x100f6c04], eax */
  w32((uint32_t)(0x100f6c04), (EAX));
  /* 100ea637 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100ea638 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100ea639 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 100ea63a pop edi */
  EDI = (pop32());
  /* 100ea63b ret  */
  ESPCHK(0x100ea613u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a63c @ 0x100ea63c (389 bytes, 124 insns) */
void f_100ea63c(void) {
  FTRACE(0x100ea63cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea63c push ebp */
  push32((uint32_t)(EBP));
  /* 100ea63d mov ebp, esp */
  EBP = (ESP);
  /* 100ea63f sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ea645 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 100ea648 push esi */
  push32((uint32_t)(ESI));
  /* 100ea649 push eax */
  push32((uint32_t)(EAX));
  /* 100ea64a push dword ptr [0x100f69d4] */
  push32((uint32_t)(r32((uint32_t)(0x100f69d4))));
  /* 100ea650 call dword ptr [0x100ee09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee09c))), 0x100ea656u);
  /* 100ea656 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea659 jne 0x100ea775 */
  if (!C.zf) goto L_100ea775;
  /* 100ea65f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ea661 mov esi, 0x100 */
  ESI = (0x100u);
L_100ea666:;
  /* 100ea666 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 100ea66d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ea66e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea670 jb 0x100ea666 */
  if (C.cf) goto L_100ea666;
  /* 100ea672 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 100ea675 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 100ea67c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100ea67e je 0x100ea6b7 */
  if (C.zf) goto L_100ea6b7;
  /* 100ea680 push ebx */
  push32((uint32_t)(EBX));
  /* 100ea681 push edi */
  push32((uint32_t)(EDI));
  /* 100ea682 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_100ea685:;
  /* 100ea685 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 100ea688 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 100ea68b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea68d ja 0x100ea6ac */
  if ((!C.cf&&!C.zf)) goto L_100ea6ac;
  /* 100ea68f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ea691 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 100ea698 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ea699 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 100ea69e mov ebx, ecx */
  EBX = (ECX);
  /* 100ea6a0 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ea6a3 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 100ea6a5 mov ecx, ebx */
  ECX = (EBX);
  /* 100ea6a7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100ea6aa rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_100ea6ac:;
  /* 100ea6ac inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100ea6ad inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100ea6ae mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 100ea6b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100ea6b3 jne 0x100ea685 */
  if (!C.zf) goto L_100ea685;
  /* 100ea6b5 pop edi */
  EDI = (pop32());
  /* 100ea6b6 pop ebx */
  EBX = (pop32());
L_100ea6b7:;
  /* 100ea6b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ea6b9 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 100ea6bf push dword ptr [0x100f6c04] */
  push32((uint32_t)(r32((uint32_t)(0x100f6c04))));
  /* 100ea6c5 push dword ptr [0x100f69d4] */
  push32((uint32_t)(r32((uint32_t)(0x100f69d4))));
  /* 100ea6cb push eax */
  push32((uint32_t)(EAX));
  /* 100ea6cc lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 100ea6d2 push esi */
  push32((uint32_t)(ESI));
  /* 100ea6d3 push eax */
  push32((uint32_t)(EAX));
  /* 100ea6d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ea6d6 call 0x100ec27d */
  push32(0x100ea6dbu); f_100ec27d();
  /* 100ea6db push 0 */
  push32((uint32_t)(0x0u));
  /* 100ea6dd lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 100ea6e3 push dword ptr [0x100f69d4] */
  push32((uint32_t)(r32((uint32_t)(0x100f69d4))));
  /* 100ea6e9 push esi */
  push32((uint32_t)(ESI));
  /* 100ea6ea push eax */
  push32((uint32_t)(EAX));
  /* 100ea6eb lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 100ea6f1 push esi */
  push32((uint32_t)(ESI));
  /* 100ea6f2 push eax */
  push32((uint32_t)(EAX));
  /* 100ea6f3 push esi */
  push32((uint32_t)(ESI));
  /* 100ea6f4 push dword ptr [0x100f6c04] */
  push32((uint32_t)(r32((uint32_t)(0x100f6c04))));
  /* 100ea6fa call 0x100ec3c6 */
  push32(0x100ea6ffu); f_100ec3c6();
  /* 100ea6ff push 0 */
  push32((uint32_t)(0x0u));
  /* 100ea701 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 100ea707 push dword ptr [0x100f69d4] */
  push32((uint32_t)(r32((uint32_t)(0x100f69d4))));
  /* 100ea70d push esi */
  push32((uint32_t)(ESI));
  /* 100ea70e push eax */
  push32((uint32_t)(EAX));
  /* 100ea70f lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 100ea715 push esi */
  push32((uint32_t)(ESI));
  /* 100ea716 push eax */
  push32((uint32_t)(EAX));
  /* 100ea717 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 100ea71c push dword ptr [0x100f6c04] */
  push32((uint32_t)(r32((uint32_t)(0x100f6c04))));
  /* 100ea722 call 0x100ec3c6 */
  push32(0x100ea727u); f_100ec3c6();
  /* 100ea727 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ea72a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ea72c lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_100ea732:;
  /* 100ea732 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 100ea735 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 100ea738 je 0x100ea750 */
  if (C.zf) goto L_100ea750;
  /* 100ea73a or byte ptr [eax + 0x100f6b01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100f6b01)))|(0x10u); w8((uint32_t)(EAX + 0x100f6b01), (_r)); fl_logic(_r,8); }
  /* 100ea741 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_100ea748:;
  /* 100ea748 mov byte ptr [eax + 0x100f6a00], dl */
  w8((uint32_t)(EAX + 0x100f6a00), (DL));
  /* 100ea74e jmp 0x100ea76c */
  goto L_100ea76c;
L_100ea750:;
  /* 100ea750 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 100ea753 je 0x100ea765 */
  if (C.zf) goto L_100ea765;
  /* 100ea755 or byte ptr [eax + 0x100f6b01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100f6b01)))|(0x20u); w8((uint32_t)(EAX + 0x100f6b01), (_r)); fl_logic(_r,8); }
  /* 100ea75c mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 100ea763 jmp 0x100ea748 */
  goto L_100ea748;
L_100ea765:;
  /* 100ea765 and byte ptr [eax + 0x100f6a00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100f6a00)))&(0x0u); w8((uint32_t)(EAX + 0x100f6a00), (_r)); fl_logic(_r,8); }
L_100ea76c:;
  /* 100ea76c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ea76d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ea76e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ea76f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea771 jb 0x100ea732 */
  if (C.cf) goto L_100ea732;
  /* 100ea773 jmp 0x100ea7be */
  goto L_100ea7be;
L_100ea775:;
  /* 100ea775 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ea777 mov esi, 0x100 */
  ESI = (0x100u);
L_100ea77c:;
  /* 100ea77c cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea77f jb 0x100ea79a */
  if (C.cf) goto L_100ea79a;
  /* 100ea781 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea784 ja 0x100ea79a */
  if ((!C.cf&&!C.zf)) goto L_100ea79a;
  /* 100ea786 or byte ptr [eax + 0x100f6b01], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100f6b01)))|(0x10u); w8((uint32_t)(EAX + 0x100f6b01), (_r)); fl_logic(_r,8); }
  /* 100ea78d mov cl, al */
  CL = (AL);
  /* 100ea78f add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_100ea792:;
  /* 100ea792 mov byte ptr [eax + 0x100f6a00], cl */
  w8((uint32_t)(EAX + 0x100f6a00), (CL));
  /* 100ea798 jmp 0x100ea7b9 */
  goto L_100ea7b9;
L_100ea79a:;
  /* 100ea79a cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea79d jb 0x100ea7b2 */
  if (C.cf) goto L_100ea7b2;
  /* 100ea79f cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea7a2 ja 0x100ea7b2 */
  if ((!C.cf&&!C.zf)) goto L_100ea7b2;
  /* 100ea7a4 or byte ptr [eax + 0x100f6b01], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100f6b01)))|(0x20u); w8((uint32_t)(EAX + 0x100f6b01), (_r)); fl_logic(_r,8); }
  /* 100ea7ab mov cl, al */
  CL = (AL);
  /* 100ea7ad sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ea7b0 jmp 0x100ea792 */
  goto L_100ea792;
L_100ea7b2:;
  /* 100ea7b2 and byte ptr [eax + 0x100f6a00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x100f6a00)))&(0x0u); w8((uint32_t)(EAX + 0x100f6a00), (_r)); fl_logic(_r,8); }
L_100ea7b9:;
  /* 100ea7b9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ea7ba cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea7bc jb 0x100ea77c */
  if (C.cf) goto L_100ea77c;
L_100ea7be:;
  /* 100ea7be pop esi */
  ESI = (pop32());
  /* 100ea7bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ea7c0 ret  */
  ESPCHK(0x100ea63cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c1 @ 0x100ea7c1 (28 bytes, 7 insns) */
void f_100ea7c1(void) {
  FTRACE(0x100ea7c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea7c1 cmp dword ptr [0x100f7d48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100f7d48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea7c8 jne 0x100ea7dc */
  if (!C.zf) goto L_100ea7dc;
  /* 100ea7ca push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 100ea7cc call 0x100ea3e9 */
  push32(0x100ea7d1u); f_100ea3e9();
  /* 100ea7d1 pop ecx */
  ECX = (pop32());
  /* 100ea7d2 mov dword ptr [0x100f7d48], 1 */
  w32((uint32_t)(0x100f7d48), (0x1u));
L_100ea7dc:;
  /* 100ea7dc ret  */
  ESPCHK(0x100ea7c1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7e0 @ 0x100ea7e0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_100ea7e0(void) {
  FTRACE(0x100ea7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ea7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 100ea7e1 mov ebp, esp */
  EBP = (ESP);
  /* 100ea7e3 push edi */
  push32((uint32_t)(EDI));
  /* 100ea7e4 push esi */
  push32((uint32_t)(ESI));
  /* 100ea7e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100ea7e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 100ea7eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ea7ee mov eax, ecx */
  EAX = (ECX);
  /* 100ea7f0 mov edx, ecx */
  EDX = (ECX);
  /* 100ea7f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ea7f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea7f6 jbe 0x100ea800 */
  if ((C.cf||C.zf)) goto L_100ea800;
  /* 100ea7f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea7fa jb 0x100ea978 */
  if (C.cf) goto L_100ea978;
L_100ea800:;
  /* 100ea800 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100ea806 jne 0x100ea81c */
  if (!C.zf) goto L_100ea81c;
  /* 100ea808 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ea80b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100ea80e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea811 jb 0x100ea83c */
  if (C.cf) goto L_100ea83c;
  /* 100ea813 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100ea815 jmp dword ptr [edx*4 + 0x100ea928] */
  switch (EDX) {
    case 0: goto L_100ea938;
    case 1: goto L_100ea940;
    case 2: goto L_100ea94c;
    case 3: goto L_100ea960;
    default: x86_unimpl("switch@0x100ea815 out of table"); return;
  }
L_100ea81c:;
  /* 100ea81c mov eax, edi */
  EAX = (EDI);
  /* 100ea81e mov edx, 3 */
  EDX = (0x3u);
  /* 100ea823 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ea826 jb 0x100ea834 */
  if (C.cf) goto L_100ea834;
  /* 100ea828 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 100ea82b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ea82d jmp dword ptr [eax*4 + 0x100ea840] */
  switch (EAX) {
    case 1: goto L_100ea850;
    case 2: goto L_100ea87c;
    case 3: goto L_100ea8a0;
    default: x86_unimpl("switch@0x100ea82d out of table"); return;
  }
L_100ea834:;
  /* 100ea834 jmp dword ptr [ecx*4 + 0x100ea938] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x100ea938)))); return;
  /* 100ea83b nop  */
  /* nop */
L_100ea83c:;
  /* 100ea83c jmp dword ptr [ecx*4 + 0x100ea8bc] */
  switch (ECX) {
    case 0: goto L_100ea91f;
    case 1: goto L_100ea90c;
    case 2: goto L_100ea904;
    case 3: goto L_100ea8fc;
    case 4: goto L_100ea8f4;
    case 5: goto L_100ea8ec;
    case 6: goto L_100ea8e4;
    case 7: goto L_100ea8dc;
    default: x86_unimpl("switch@0x100ea83c out of table"); return;
  }
  /* 100ea843 nop  */
  /* nop */
L_100ea850:;
  /* 100ea850 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100ea852 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ea854 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ea856 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100ea859 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100ea85c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100ea85f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ea862 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100ea865 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ea868 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ea86b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea86e jb 0x100ea83c */
  if (C.cf) goto L_100ea83c;
  /* 100ea870 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100ea872 jmp dword ptr [edx*4 + 0x100ea928] */
  switch (EDX) {
    case 0: goto L_100ea938;
    case 1: goto L_100ea940;
    case 2: goto L_100ea94c;
    case 3: goto L_100ea960;
    default: x86_unimpl("switch@0x100ea872 out of table"); return;
  }
  /* 100ea879 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ea87c:;
  /* 100ea87c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100ea87e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ea880 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ea882 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100ea885 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ea888 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100ea88b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ea88e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ea891 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea894 jb 0x100ea83c */
  if (C.cf) goto L_100ea83c;
  /* 100ea896 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100ea898 jmp dword ptr [edx*4 + 0x100ea928] */
  switch (EDX) {
    case 0: goto L_100ea938;
    case 1: goto L_100ea940;
    case 2: goto L_100ea94c;
    case 3: goto L_100ea960;
    default: x86_unimpl("switch@0x100ea898 out of table"); return;
  }
  /* 100ea89f nop  */
  /* nop */
L_100ea8a0:;
  /* 100ea8a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100ea8a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ea8a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ea8a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ea8a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ea8aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ea8ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea8ae jb 0x100ea83c */
  if (C.cf) goto L_100ea83c;
  /* 100ea8b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100ea8b2 jmp dword ptr [edx*4 + 0x100ea928] */
  switch (EDX) {
    case 0: goto L_100ea938;
    case 1: goto L_100ea940;
    case 2: goto L_100ea94c;
    case 3: goto L_100ea960;
    default: x86_unimpl("switch@0x100ea8b2 out of table"); return;
  }
  /* 100ea8b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ea8dc:;
  /* 100ea8dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 100ea8e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_100ea8e4:;
  /* 100ea8e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 100ea8e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_100ea8ec:;
  /* 100ea8ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 100ea8f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_100ea8f4:;
  /* 100ea8f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 100ea8f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_100ea8fc:;
  /* 100ea8fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 100ea900 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_100ea904:;
  /* 100ea904 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 100ea908 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_100ea90c:;
  /* 100ea90c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 100ea910 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 100ea914 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 100ea91b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ea91d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100ea91f:;
  /* 100ea91f jmp dword ptr [edx*4 + 0x100ea928] */
  switch (EDX) {
    case 0: goto L_100ea938;
    case 1: goto L_100ea940;
    case 2: goto L_100ea94c;
    case 3: goto L_100ea960;
    default: x86_unimpl("switch@0x100ea91f out of table"); return;
  }
  /* 100ea926 mov edi, edi */
  EDI = (EDI);
L_100ea938:;
  /* 100ea938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ea93b pop esi */
  ESI = (pop32());
  /* 100ea93c pop edi */
  EDI = (pop32());
  /* 100ea93d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ea93e ret  */
  ESPCHK(0x100ea7e0u, _esp0);
  ESP += 4; return;
  /* 100ea93f nop  */
  /* nop */
L_100ea940:;
  /* 100ea940 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ea942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ea944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ea947 pop esi */
  ESI = (pop32());
  /* 100ea948 pop edi */
  EDI = (pop32());
  /* 100ea949 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ea94a ret  */
  ESPCHK(0x100ea7e0u, _esp0);
  ESP += 4; return;
  /* 100ea94b nop  */
  /* nop */
L_100ea94c:;
  /* 100ea94c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ea94e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ea950 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100ea953 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100ea956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ea959 pop esi */
  ESI = (pop32());
  /* 100ea95a pop edi */
  EDI = (pop32());
  /* 100ea95b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ea95c ret  */
  ESPCHK(0x100ea7e0u, _esp0);
  ESP += 4; return;
  /* 100ea95d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ea960:;
  /* 100ea960 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ea962 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ea964 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100ea967 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100ea96a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100ea96d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100ea970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ea973 pop esi */
  ESI = (pop32());
  /* 100ea974 pop edi */
  EDI = (pop32());
  /* 100ea975 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ea976 ret  */
  ESPCHK(0x100ea7e0u, _esp0);
  ESP += 4; return;
  /* 100ea977 nop  */
  /* nop */
L_100ea978:;
  /* 100ea978 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 100ea97c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 100ea980 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100ea986 jne 0x100ea9ac */
  if (!C.zf) goto L_100ea9ac;
  /* 100ea988 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ea98b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 100ea98e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea991 jb 0x100ea9a0 */
  if (C.cf) goto L_100ea9a0;
  /* 100ea993 std  */
  C.df=1;
  /* 100ea994 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100ea996 cld  */
  C.df=0;
  /* 100ea997 jmp dword ptr [edx*4 + 0x100eaac0] */
  switch (EDX) {
    case 0: goto L_100eaad0;
    case 1: goto L_100eaad8;
    case 2: goto L_100eaae8;
    case 3: goto L_100eaafc;
    default: x86_unimpl("switch@0x100ea997 out of table"); return;
  }
  /* 100ea99e mov edi, edi */
  EDI = (EDI);
L_100ea9a0:;
  /* 100ea9a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ea9a2 jmp dword ptr [ecx*4 + 0x100eaa70] */
  switch (ECX) {
    case 0: goto L_100eaab7;
    default: x86_unimpl("switch@0x100ea9a2 out of table"); return;
  }
  /* 100ea9a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ea9ac:;
  /* 100ea9ac mov eax, edi */
  EAX = (EDI);
  /* 100ea9ae mov edx, 3 */
  EDX = (0x3u);
  /* 100ea9b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea9b6 jb 0x100ea9c4 */
  if (C.cf) goto L_100ea9c4;
  /* 100ea9b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 100ea9bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ea9bd jmp dword ptr [eax*4 + 0x100ea9c8] */
  switch (EAX) {
    case 1: goto L_100ea9d8;
    case 2: goto L_100ea9f8;
    case 3: goto L_100eaa20;
    default: x86_unimpl("switch@0x100ea9bd out of table"); return;
  }
L_100ea9c4:;
  /* 100ea9c4 jmp dword ptr [ecx*4 + 0x100eaac0] */
  switch (ECX) {
    case 0: goto L_100eaad0;
    case 1: goto L_100eaad8;
    case 2: goto L_100eaae8;
    case 3: goto L_100eaafc;
    default: x86_unimpl("switch@0x100ea9c4 out of table"); return;
  }
  /* 100ea9cb nop  */
  /* nop */
L_100ea9d8:;
  /* 100ea9d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100ea9db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100ea9dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100ea9e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100ea9e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ea9e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100ea9e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ea9e8 jb 0x100ea9a0 */
  if (C.cf) goto L_100ea9a0;
  /* 100ea9ea std  */
  C.df=1;
  /* 100ea9eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100ea9ed cld  */
  C.df=0;
  /* 100ea9ee jmp dword ptr [edx*4 + 0x100eaac0] */
  switch (EDX) {
    case 0: goto L_100eaad0;
    case 1: goto L_100eaad8;
    case 2: goto L_100eaae8;
    case 3: goto L_100eaafc;
    default: x86_unimpl("switch@0x100ea9ee out of table"); return;
  }
  /* 100ea9f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ea9f8:;
  /* 100ea9f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100ea9fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100ea9fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
L_100eaa00:;
  /* 100eaa00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100eaa03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100eaa06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100eaa09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eaa0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eaa0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eaa12 jb 0x100ea9a0 */
  if (C.cf) goto L_100ea9a0;
  /* 100eaa14 std  */
  C.df=1;
  /* 100eaa15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100eaa17 cld  */
  C.df=0;
  /* 100eaa18 jmp dword ptr [edx*4 + 0x100eaac0] */
  switch (EDX) {
    case 0: goto L_100eaad0;
    case 1: goto L_100eaad8;
    case 2: goto L_100eaae8;
    case 3: goto L_100eaafc;
    default: x86_unimpl("switch@0x100eaa18 out of table"); return;
  }
  /* 100eaa1f nop  */
  /* nop */
L_100eaa20:;
  /* 100eaa20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100eaa23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100eaa25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100eaa28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100eaa2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100eaa2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100eaa31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100eaa34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100eaa37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eaa3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eaa3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eaa40 jb 0x100ea9a0 */
  if (C.cf) goto L_100ea9a0;
  /* 100eaa46 std  */
  C.df=1;
  /* 100eaa47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 100eaa49 cld  */
  C.df=0;
  /* 100eaa4a jmp dword ptr [edx*4 + 0x100eaac0] */
  switch (EDX) {
    case 0: goto L_100eaad0;
    case 1: goto L_100eaad8;
    case 2: goto L_100eaae8;
    case 3: goto L_100eaafc;
    default: x86_unimpl("switch@0x100eaa4a out of table"); return;
  }
  /* 100eaa51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 100eaa54 je 0x100eaa00 */
  if (C.zf) goto L_100eaa00;
  /* 100eaa56 push cs */
  push32((uint32_t)(C.seg_cs));
  /* 100eaa57 adc byte ptr [edx + ebp*4 + 0xe], bh */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*4 + 0xe))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*4 + 0xe), (_r)); fl_add(_a,_b,_r,8); }
  /* 100eaa5b adc byte ptr [edx + ebp*4 - 0x5573eff2], al */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*4 + -0x5573eff2))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*4 + -0x5573eff2), (_r)); fl_add(_a,_b,_r,8); }
  /* 100eaa62 push cs */
  push32((uint32_t)(C.seg_cs));
  /* 100eaa63 adc byte ptr [edx + ebp*4 - 0x5563eff2], dl */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*4 + -0x5563eff2))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*4 + -0x5563eff2), (_r)); fl_add(_a,_b,_r,8); }
  /* 100eaa6a push cs */
  push32((uint32_t)(C.seg_cs));
  /* 100eaa6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 100eaa6d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 100eaa6e push cs */
  push32((uint32_t)(C.seg_cs));
  /* 100eaa74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 100eaa78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 100eaa7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 100eaa80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 100eaa84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 100eaa88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 100eaa8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 100eaa90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 100eaa94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 100eaa98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 100eaa9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 100eaaa0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 100eaaa4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 100eaaa8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 100eaaac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 100eaab3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100eaab5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_100eaab7:;
  /* 100eaab7 jmp dword ptr [edx*4 + 0x100eaac0] */
  switch (EDX) {
    case 0: goto L_100eaad0;
    case 1: goto L_100eaad8;
    case 2: goto L_100eaae8;
    case 3: goto L_100eaafc;
    default: x86_unimpl("switch@0x100eaab7 out of table"); return;
  }
  /* 100eaabe mov edi, edi */
  EDI = (EDI);
L_100eaad0:;
  /* 100eaad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eaad3 pop esi */
  ESI = (pop32());
  /* 100eaad4 pop edi */
  EDI = (pop32());
  /* 100eaad5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100eaad6 ret  */
  ESPCHK(0x100ea7e0u, _esp0);
  ESP += 4; return;
  /* 100eaad7 nop  */
  /* nop */
L_100eaad8:;
  /* 100eaad8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100eaadb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100eaade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eaae1 pop esi */
  ESI = (pop32());
  /* 100eaae2 pop edi */
  EDI = (pop32());
  /* 100eaae3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100eaae4 ret  */
  ESPCHK(0x100ea7e0u, _esp0);
  ESP += 4; return;
  /* 100eaae5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100eaae8:;
  /* 100eaae8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100eaaeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100eaaee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100eaaf1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100eaaf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eaaf7 pop esi */
  ESI = (pop32());
  /* 100eaaf8 pop edi */
  EDI = (pop32());
  /* 100eaaf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100eaafa ret  */
  ESPCHK(0x100ea7e0u, _esp0);
  ESP += 4; return;
  /* 100eaafb nop  */
  /* nop */
L_100eaafc:;
  /* 100eaafc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 100eaaff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 100eab02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 100eab05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 100eab08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 100eab0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 100eab0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eab11 pop esi */
  ESI = (pop32());
  /* 100eab12 pop edi */
  EDI = (pop32());
  /* 100eab13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100eab14 ret  */
  ESPCHK(0x100ea7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab15 @ 0x100eab15 (23 bytes, 7 insns) */
void f_100eab15(void) {
  FTRACE(0x100eab15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eab15 push 0 */
  push32((uint32_t)(0x0u));
  /* 100eab17 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100eab1b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100eab1f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100eab23 call 0x100eab2c */
  push32(0x100eab28u); f_100eab2c();
  /* 100eab28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100eab2b ret  */
  ESPCHK(0x100eab15u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab2c @ 0x100eab2c (517 bytes, 195 insns) */
void f_100eab2c(void) {
  FTRACE(0x100eab2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eab2c push ebp */
  push32((uint32_t)(EBP));
  /* 100eab2d mov ebp, esp */
  EBP = (ESP);
  /* 100eab2f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eab32 push ebx */
  push32((uint32_t)(EBX));
  /* 100eab33 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 100eab37 push esi */
  push32((uint32_t)(ESI));
  /* 100eab38 push edi */
  push32((uint32_t)(EDI));
  /* 100eab39 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100eab3c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100eab3e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 100eab41 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_100eab44:;
  /* 100eab44 cmp dword ptr [0x100f0be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100f0be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eab4b jle 0x100eab5c */
  if ((C.zf||C.sf!=C.of)) goto L_100eab5c;
  /* 100eab4d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100eab50 push 8 */
  push32((uint32_t)(0x8u));
  /* 100eab52 push eax */
  push32((uint32_t)(EAX));
  /* 100eab53 call 0x100e93cb */
  push32(0x100eab58u); f_100e93cb();
  /* 100eab58 pop ecx */
  ECX = (pop32());
  /* 100eab59 pop ecx */
  ECX = (pop32());
  /* 100eab5a jmp 0x100eab6b */
  goto L_100eab6b;
L_100eab5c:;
  /* 100eab5c mov ecx, dword ptr [0x100f09d0] */
  ECX = (r32((uint32_t)(0x100f09d0)));
  /* 100eab62 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100eab65 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100eab68 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_100eab6b:;
  /* 100eab6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100eab6d je 0x100eab74 */
  if (C.zf) goto L_100eab74;
  /* 100eab6f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 100eab71 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100eab72 jmp 0x100eab44 */
  goto L_100eab44;
L_100eab74:;
  /* 100eab74 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eab77 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 100eab7a jne 0x100eab82 */
  if (!C.zf) goto L_100eab82;
  /* 100eab7c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 100eab80 jmp 0x100eab87 */
  goto L_100eab87;
L_100eab82:;
  /* 100eab82 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eab85 jne 0x100eab8d */
  if (!C.zf) goto L_100eab8d;
L_100eab87:;
  /* 100eab87 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 100eab89 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100eab8a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_100eab8d:;
  /* 100eab8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100eab90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100eab92 jl 0x100ead21 */
  if ((C.sf!=C.of)) goto L_100ead21;
  /* 100eab98 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eab9b je 0x100ead21 */
  if (C.zf) goto L_100ead21;
  /* 100eaba1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eaba4 jg 0x100ead21 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ead21;
  /* 100eabaa push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100eabac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100eabae pop ecx */
  ECX = (pop32());
  /* 100eabaf jne 0x100eabd5 */
  if (!C.zf) goto L_100eabd5;
  /* 100eabb1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eabb4 je 0x100eabbf */
  if (C.zf) goto L_100eabbf;
  /* 100eabb6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 100eabbd jmp 0x100eabf1 */
  goto L_100eabf1;
L_100eabbf:;
  /* 100eabbf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100eabc1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eabc3 je 0x100eabd2 */
  if (C.zf) goto L_100eabd2;
  /* 100eabc5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eabc7 je 0x100eabd2 */
  if (C.zf) goto L_100eabd2;
  /* 100eabc9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 100eabd0 jmp 0x100eabf1 */
  goto L_100eabf1;
L_100eabd2:;
  /* 100eabd2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_100eabd5:;
  /* 100eabd5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eabd8 jne 0x100eabf1 */
  if (!C.zf) goto L_100eabf1;
  /* 100eabda cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eabdd jne 0x100eabf1 */
  if (!C.zf) goto L_100eabf1;
  /* 100eabdf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100eabe1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eabe3 je 0x100eabe9 */
  if (C.zf) goto L_100eabe9;
  /* 100eabe5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eabe7 jne 0x100eabf1 */
  if (!C.zf) goto L_100eabf1;
L_100eabe9:;
  /* 100eabe9 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 100eabec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100eabed inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100eabee mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_100eabf1:;
  /* 100eabf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100eabf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100eabf6 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100eabf9 mov edi, 0x103 */
  EDI = (0x103u);
  /* 100eabfe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_100eac01:;
  /* 100eac01 cmp dword ptr [0x100f0be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100f0be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eac08 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 100eac0b jle 0x100eac19 */
  if ((C.zf||C.sf!=C.of)) goto L_100eac19;
  /* 100eac0d push 4 */
  push32((uint32_t)(0x4u));
  /* 100eac0f push esi */
  push32((uint32_t)(ESI));
  /* 100eac10 call 0x100e93cb */
  push32(0x100eac15u); f_100e93cb();
  /* 100eac15 pop ecx */
  ECX = (pop32());
  /* 100eac16 pop ecx */
  ECX = (pop32());
  /* 100eac17 jmp 0x100eac24 */
  goto L_100eac24;
L_100eac19:;
  /* 100eac19 mov eax, dword ptr [0x100f09d0] */
  EAX = (r32((uint32_t)(0x100f09d0)));
  /* 100eac1e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 100eac21 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_100eac24:;
  /* 100eac24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100eac26 je 0x100eac30 */
  if (C.zf) goto L_100eac30;
  /* 100eac28 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100eac2b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eac2e jmp 0x100eac62 */
  goto L_100eac62;
L_100eac30:;
  /* 100eac30 cmp dword ptr [0x100f0be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100f0be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eac37 jle 0x100eac44 */
  if ((C.zf||C.sf!=C.of)) goto L_100eac44;
  /* 100eac39 push edi */
  push32((uint32_t)(EDI));
  /* 100eac3a push esi */
  push32((uint32_t)(ESI));
  /* 100eac3b call 0x100e93cb */
  push32(0x100eac40u); f_100e93cb();
  /* 100eac40 pop ecx */
  ECX = (pop32());
  /* 100eac41 pop ecx */
  ECX = (pop32());
  /* 100eac42 jmp 0x100eac4f */
  goto L_100eac4f;
L_100eac44:;
  /* 100eac44 mov eax, dword ptr [0x100f09d0] */
  EAX = (r32((uint32_t)(0x100f09d0)));
  /* 100eac49 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 100eac4d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_100eac4f:;
  /* 100eac4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100eac51 je 0x100eac9d */
  if (C.zf) goto L_100eac9d;
  /* 100eac53 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100eac56 push eax */
  push32((uint32_t)(EAX));
  /* 100eac57 call 0x100ed108 */
  push32(0x100eac5cu); f_100ed108();
  /* 100eac5c pop ecx */
  ECX = (pop32());
  /* 100eac5d mov ecx, eax */
  ECX = (EAX);
  /* 100eac5f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_100eac62:;
  /* 100eac62 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eac65 jae 0x100eac9d */
  if (!C.cf) goto L_100eac9d;
  /* 100eac67 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 100eac6a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 100eac6e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eac71 jb 0x100eac87 */
  if (C.cf) goto L_100eac87;
  /* 100eac73 jne 0x100eac81 */
  if (!C.zf) goto L_100eac81;
  /* 100eac75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100eac78 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100eac7a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100eac7d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eac7f jbe 0x100eac87 */
  if ((C.cf||C.zf)) goto L_100eac87;
L_100eac81:;
  /* 100eac81 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 100eac85 jmp 0x100eac90 */
  goto L_100eac90;
L_100eac87:;
  /* 100eac87 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100eac8b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100eac8d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_100eac90:;
  /* 100eac90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100eac93 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100eac96 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 100eac98 jmp 0x100eac01 */
  goto L_100eac01;
L_100eac9d:;
  /* 100eac9d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100eaca0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 100eaca3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 100eaca6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 100eaca8 jne 0x100eacba */
  if (!C.zf) goto L_100eacba;
  /* 100eacaa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100eacac je 0x100eacb4 */
  if (C.zf) goto L_100eacb4;
  /* 100eacae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eacb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_100eacb4:;
  /* 100eacb4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 100eacb8 jmp 0x100ead05 */
  goto L_100ead05;
L_100eacba:;
  /* 100eacba test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 100eacbc mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 100eacc1 jne 0x100eacde */
  if (!C.zf) goto L_100eacde;
  /* 100eacc3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 100eacc5 jne 0x100ead05 */
  if (!C.zf) goto L_100ead05;
  /* 100eacc7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 100eacca je 0x100eacd5 */
  if (C.zf) goto L_100eacd5;
  /* 100eaccc cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eacd3 ja 0x100eacde */
  if ((!C.cf&&!C.zf)) goto L_100eacde;
L_100eacd5:;
  /* 100eacd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100eacd7 jne 0x100ead05 */
  if (!C.zf) goto L_100ead05;
  /* 100eacd9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eacdc jbe 0x100ead05 */
  if ((C.cf||C.zf)) goto L_100ead05;
L_100eacde:;
  /* 100eacde call 0x100ebf71 */
  push32(0x100eace3u); f_100ebf71();
  /* 100eace3 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 100eace7 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 100eaced je 0x100eacf5 */
  if (C.zf) goto L_100eacf5;
  /* 100eacef or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 100eacf3 jmp 0x100ead05 */
  goto L_100ead05;
L_100eacf5:;
  /* 100eacf5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 100eacf8 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 100eacfa neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 100eacfc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eacfe neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ead00 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ead02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_100ead05:;
  /* 100ead05 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100ead07 je 0x100ead0e */
  if (C.zf) goto L_100ead0e;
  /* 100ead09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ead0c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_100ead0e:;
  /* 100ead0e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 100ead12 je 0x100ead1c */
  if (C.zf) goto L_100ead1c;
  /* 100ead14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100ead17 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ead19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_100ead1c:;
  /* 100ead1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100ead1f jmp 0x100ead2c */
  goto L_100ead2c;
L_100ead21:;
  /* 100ead21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ead24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ead26 je 0x100ead2a */
  if (C.zf) goto L_100ead2a;
  /* 100ead28 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_100ead2a:;
  /* 100ead2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100ead2c:;
  /* 100ead2c pop edi */
  EDI = (pop32());
  /* 100ead2d pop esi */
  ESI = (pop32());
  /* 100ead2e pop ebx */
  EBX = (pop32());
  /* 100ead2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ead30 ret  */
  ESPCHK(0x100eab2cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x100ead50 (193 bytes, 90 insns) */
void f_100ead50(void) {
  FTRACE(0x100ead50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ead50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ead52 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 100ead56 push ebx */
  push32((uint32_t)(EBX));
  /* 100ead57 mov ebx, eax */
  EBX = (EAX);
  /* 100ead59 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100ead5c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100ead60 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 100ead66 je 0x100ead7b */
  if (C.zf) goto L_100ead7b;
L_100ead68:;
  /* 100ead68 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 100ead6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100ead6b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ead6d je 0x100ead40 */
  if (C.zf) { jmp_ind(0x100ead40u); return; }
  /* 100ead6f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 100ead71 je 0x100eadc4 */
  if (C.zf) goto L_100eadc4;
  /* 100ead73 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 100ead79 jne 0x100ead68 */
  if (!C.zf) goto L_100ead68;
L_100ead7b:;
  /* 100ead7b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 100ead7d push edi */
  push32((uint32_t)(EDI));
  /* 100ead7e mov eax, ebx */
  EAX = (EBX);
  /* 100ead80 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 100ead83 push esi */
  push32((uint32_t)(ESI));
  /* 100ead84 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_100ead86:;
  /* 100ead86 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 100ead88 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 100ead8d mov eax, ecx */
  EAX = (ECX);
  /* 100ead8f mov esi, edi */
  ESI = (EDI);
  /* 100ead91 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 100ead93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ead95 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ead97 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 100ead9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100ead9d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100ead9f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 100eada1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eada4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 100eadaa jne 0x100eadc8 */
  if (!C.zf) goto L_100eadc8;
  /* 100eadac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 100eadb1 je 0x100ead86 */
  if (C.zf) goto L_100ead86;
  /* 100eadb3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 100eadb8 jne 0x100eadc2 */
  if (!C.zf) goto L_100eadc2;
  /* 100eadba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 100eadc0 jne 0x100ead86 */
  if (!C.zf) goto L_100ead86;
L_100eadc2:;
  /* 100eadc2 pop esi */
  ESI = (pop32());
  /* 100eadc3 pop edi */
  EDI = (pop32());
L_100eadc4:;
  /* 100eadc4 pop ebx */
  EBX = (pop32());
  /* 100eadc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100eadc7 ret  */
  ESPCHK(0x100ead50u, _esp0);
  ESP += 4; return;
L_100eadc8:;
  /* 100eadc8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 100eadcb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eadcd je 0x100eae05 */
  if (C.zf) goto L_100eae05;
  /* 100eadcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100eadd1 je 0x100eadc2 */
  if (C.zf) goto L_100eadc2;
  /* 100eadd3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eadd5 je 0x100eadfe */
  if (C.zf) goto L_100eadfe;
  /* 100eadd7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100eadd9 je 0x100eadc2 */
  if (C.zf) goto L_100eadc2;
  /* 100eaddb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100eadde cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eade0 je 0x100eadf7 */
  if (C.zf) goto L_100eadf7;
  /* 100eade2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100eade4 je 0x100eadc2 */
  if (C.zf) goto L_100eadc2;
  /* 100eade6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eade8 je 0x100eadf0 */
  if (C.zf) goto L_100eadf0;
  /* 100eadea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100eadec je 0x100eadc2 */
  if (C.zf) goto L_100eadc2;
  /* 100eadee jmp 0x100ead86 */
  goto L_100ead86;
L_100eadf0:;
  /* 100eadf0 pop esi */
  ESI = (pop32());
  /* 100eadf1 pop edi */
  EDI = (pop32());
  /* 100eadf2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 100eadf5 pop ebx */
  EBX = (pop32());
  /* 100eadf6 ret  */
  ESPCHK(0x100ead50u, _esp0);
  ESP += 4; return;
L_100eadf7:;
  /* 100eadf7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 100eadfa pop esi */
  ESI = (pop32());
  /* 100eadfb pop edi */
  EDI = (pop32());
  /* 100eadfc pop ebx */
  EBX = (pop32());
  /* 100eadfd ret  */
  ESPCHK(0x100ead50u, _esp0);
  ESP += 4; return;
L_100eadfe:;
  /* 100eadfe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 100eae01 pop esi */
  ESI = (pop32());
  /* 100eae02 pop edi */
  EDI = (pop32());
  /* 100eae03 pop ebx */
  EBX = (pop32());
  /* 100eae04 ret  */
  ESPCHK(0x100ead50u, _esp0);
  ESP += 4; return;
L_100eae05:;
  /* 100eae05 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 100eae08 pop esi */
  ESI = (pop32());
  /* 100eae09 pop edi */
  EDI = (pop32());
  /* 100eae0a pop ebx */
  EBX = (pop32());
  /* 100eae0b ret  */
  ESPCHK(0x100ead50u, _esp0);
  ESP += 4; return;
  /* 100eae0c int3  */
  x86_unimpl("int3 @ 0x100eae0c");
  /* 100eae0d int3  */
  x86_unimpl("int3 @ 0x100eae0d");
  /* 100eae0e int3  */
  x86_unimpl("int3 @ 0x100eae0e");
  /* 100eae0f int3  */
  x86_unimpl("int3 @ 0x100eae0f");
}

/* _strstr @ 0x100eae10 (128 bytes, 66 insns) */
void f_100eae10(void) {
  FTRACE(0x100eae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eae10 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100eae14 push edi */
  push32((uint32_t)(EDI));
  /* 100eae15 push ebx */
  push32((uint32_t)(EBX));
  /* 100eae16 push esi */
  push32((uint32_t)(ESI));
  /* 100eae17 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 100eae19 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 100eae1d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100eae1f je 0x100eae8a */
  if (C.zf) goto L_100eae8a;
  /* 100eae21 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 100eae24 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 100eae26 je 0x100eae77 */
  if (C.zf) goto L_100eae77;
L_100eae28:;
  /* 100eae28 mov esi, edi */
  ESI = (EDI);
  /* 100eae2a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 100eae2e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 100eae30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100eae31 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eae33 je 0x100eae4a */
  if (C.zf) goto L_100eae4a;
  /* 100eae35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100eae37 je 0x100eae44 */
  if (C.zf) goto L_100eae44;
L_100eae39:;
  /* 100eae39 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100eae3b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_100eae3c:;
  /* 100eae3c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eae3e je 0x100eae4a */
  if (C.zf) goto L_100eae4a;
  /* 100eae40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100eae42 jne 0x100eae39 */
  if (!C.zf) goto L_100eae39;
L_100eae44:;
  /* 100eae44 pop esi */
  ESI = (pop32());
  /* 100eae45 pop ebx */
  EBX = (pop32());
  /* 100eae46 pop edi */
  EDI = (pop32());
  /* 100eae47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100eae49 ret  */
  ESPCHK(0x100eae10u, _esp0);
  ESP += 4; return;
L_100eae4a:;
  /* 100eae4a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100eae4c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100eae4d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eae4f jne 0x100eae3c */
  if (!C.zf) goto L_100eae3c;
  /* 100eae51 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_100eae54:;
  /* 100eae54 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 100eae57 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 100eae59 je 0x100eae83 */
  if (C.zf) goto L_100eae83;
  /* 100eae5b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100eae5d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100eae60 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eae62 jne 0x100eae28 */
  if (!C.zf) goto L_100eae28;
  /* 100eae64 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 100eae67 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100eae69 je 0x100eae83 */
  if (C.zf) goto L_100eae83;
  /* 100eae6b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 100eae6e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eae71 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eae73 je 0x100eae54 */
  if (C.zf) goto L_100eae54;
  /* 100eae75 jmp 0x100eae28 */
  goto L_100eae28;
L_100eae77:;
  /* 100eae77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100eae79 pop esi */
  ESI = (pop32());
  /* 100eae7a pop ebx */
  EBX = (pop32());
  /* 100eae7b pop edi */
  EDI = (pop32());
  /* 100eae7c mov al, dl */
  AL = (DL);
  /* 100eae7e jmp 0x100ead56 */
  jmp_ind(0x100ead56u); return;
L_100eae83:;
  /* 100eae83 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 100eae86 pop esi */
  ESI = (pop32());
  /* 100eae87 pop ebx */
  EBX = (pop32());
  /* 100eae88 pop edi */
  EDI = (pop32());
  /* 100eae89 ret  */
  ESPCHK(0x100eae10u, _esp0);
  ESP += 4; return;
L_100eae8a:;
  /* 100eae8a mov eax, edi */
  EAX = (EDI);
  /* 100eae8c pop esi */
  ESI = (pop32());
  /* 100eae8d pop ebx */
  EBX = (pop32());
  /* 100eae8e pop edi */
  EDI = (pop32());
  /* 100eae8f ret  */
  ESPCHK(0x100eae10u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x100eae90 (56 bytes, 31 insns) */
void f_100eae90(void) {
  FTRACE(0x100eae90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eae90 push ebp */
  push32((uint32_t)(EBP));
  /* 100eae91 mov ebp, esp */
  EBP = (ESP);
  /* 100eae93 push edi */
  push32((uint32_t)(EDI));
  /* 100eae94 push esi */
  push32((uint32_t)(ESI));
  /* 100eae95 push ebx */
  push32((uint32_t)(EBX));
  /* 100eae96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 100eae99 jecxz 0x100eaec1 */
  x86_unimpl("jecxz @ 0x100eae99");
  /* 100eae9b mov ebx, ecx */
  EBX = (ECX);
  /* 100eae9d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100eaea0 mov esi, edi */
  ESI = (EDI);
  /* 100eaea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100eaea4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 100eaea6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100eaea8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eaeaa mov edi, esi */
  EDI = (ESI);
  /* 100eaeac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100eaeaf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 100eaeb1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 100eaeb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100eaeb6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eaeb9 ja 0x100eaebf */
  if ((!C.cf&&!C.zf)) goto L_100eaebf;
  /* 100eaebb je 0x100eaec1 */
  if (C.zf) goto L_100eaec1;
  /* 100eaebd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100eaebe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_100eaebf:;
  /* 100eaebf not ecx */
  ECX = (~(ECX));
L_100eaec1:;
  /* 100eaec1 mov eax, ecx */
  EAX = (ECX);
  /* 100eaec3 pop ebx */
  EBX = (pop32());
  /* 100eaec4 pop esi */
  ESI = (pop32());
  /* 100eaec5 pop edi */
  EDI = (pop32());
  /* 100eaec6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100eaec7 ret  */
  ESPCHK(0x100eae90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aed0 @ 0x100eaed0 (47 bytes, 17 insns) */
void f_100eaed0(void) {
  FTRACE(0x100eaed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eaed0 push ecx */
  push32((uint32_t)(ECX));
  /* 100eaed1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eaed6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 100eaeda jb 0x100eaef0 */
  if (C.cf) goto L_100eaef0;
L_100eaedc:;
  /* 100eaedc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eaee2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eaee7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 100eaee9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eaeee jae 0x100eaedc */
  if (!C.cf) goto L_100eaedc;
L_100eaef0:;
  /* 100eaef0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eaef2 mov eax, esp */
  EAX = (ESP);
  /* 100eaef4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 100eaef6 mov esp, ecx */
  ESP = (ECX);
  /* 100eaef8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100eaefa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 100eaefd push eax */
  push32((uint32_t)(EAX));
  /* 100eaefe ret  */
  ESPCHK(0x100eaed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aeff @ 0x100eaeff (72 bytes, 17 insns) */
void f_100eaeff(void) {
  FTRACE(0x100eaeffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eaeff push 0x140 */
  push32((uint32_t)(0x140u));
  /* 100eaf04 push 0 */
  push32((uint32_t)(0x0u));
  /* 100eaf06 push dword ptr [0x100f7c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f7c24))));
  /* 100eaf0c call dword ptr [0x100ee098] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee098))), 0x100eaf12u);
  /* 100eaf12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100eaf14 mov dword ptr [0x100f69cc], eax */
  w32((uint32_t)(0x100f69cc), (EAX));
  /* 100eaf19 jne 0x100eaf1c */
  if (!C.zf) goto L_100eaf1c;
  /* 100eaf1b ret  */
  ESPCHK(0x100eaeffu, _esp0);
  ESP += 4; return;
L_100eaf1c:;
  /* 100eaf1c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100eaf20 and dword ptr [0x100f69c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100f69c4)))&(0x0u); w32((uint32_t)(0x100f69c4), (_r)); fl_logic(_r,32); }
  /* 100eaf27 and dword ptr [0x100f69c8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100f69c8)))&(0x0u); w32((uint32_t)(0x100f69c8), (_r)); fl_logic(_r,32); }
  /* 100eaf2e push 1 */
  push32((uint32_t)(0x1u));
  /* 100eaf30 mov dword ptr [0x100f69c0], eax */
  w32((uint32_t)(0x100f69c0), (EAX));
  /* 100eaf35 mov dword ptr [0x100f69d0], ecx */
  w32((uint32_t)(0x100f69d0), (ECX));
  /* 100eaf3b mov dword ptr [0x100f69b8], 0x10 */
  w32((uint32_t)(0x100f69b8), (0x10u));
  /* 100eaf45 pop eax */
  EAX = (pop32());
  /* 100eaf46 ret  */
  ESPCHK(0x100eaeffu, _esp0);
  ESP += 4; return;
}

/* FUN_1000af47 @ 0x100eaf47 (43 bytes, 14 insns) */
void f_100eaf47(void) {
  FTRACE(0x100eaf47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eaf47 mov eax, dword ptr [0x100f69c8] */
  EAX = (r32((uint32_t)(0x100f69c8)));
  /* 100eaf4c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 100eaf4f mov eax, dword ptr [0x100f69cc] */
  EAX = (r32((uint32_t)(0x100f69cc)));
  /* 100eaf54 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_100eaf57:;
  /* 100eaf57 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eaf59 jae 0x100eaf6f */
  if (!C.cf) goto L_100eaf6f;
  /* 100eaf5b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 100eaf5f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eaf62 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eaf68 jb 0x100eaf71 */
  if (C.cf) goto L_100eaf71;
  /* 100eaf6a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eaf6d jmp 0x100eaf57 */
  goto L_100eaf57;
L_100eaf6f:;
  /* 100eaf6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100eaf71:;
  /* 100eaf71 ret  */
  ESPCHK(0x100eaf47u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af72 @ 0x100eaf72 (809 bytes, 265 insns) */
void f_100eaf72(void) {
  FTRACE(0x100eaf72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eaf72 push ebp */
  push32((uint32_t)(EBP));
  /* 100eaf73 mov ebp, esp */
  EBP = (ESP);
  /* 100eaf75 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eaf78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eaf7b push ebx */
  push32((uint32_t)(EBX));
  /* 100eaf7c push esi */
  push32((uint32_t)(ESI));
  /* 100eaf7d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100eaf80 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 100eaf83 push edi */
  push32((uint32_t)(EDI));
  /* 100eaf84 mov edi, esi */
  EDI = (ESI);
  /* 100eaf86 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100eaf89 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eaf8c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 100eaf8f mov ecx, edi */
  ECX = (EDI);
  /* 100eaf91 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100eaf97 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 100eaf9e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 100eafa1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 100eafa3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100eafa4 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 100eafa7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 100eafaa jne 0x100eb296 */
  if (!C.zf) goto L_100eb296;
  /* 100eafb0 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 100eafb3 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 100eafb6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 100eafb9 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 100eafbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 100eafbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 100eafc2 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 100eafc5 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 100eafc8 jne 0x100eb048 */
  if (!C.zf) goto L_100eb048;
  /* 100eafca sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 100eafcd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100eafce cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eafd1 jbe 0x100eafd6 */
  if ((C.cf||C.zf)) goto L_100eafd6;
  /* 100eafd3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100eafd5 pop edx */
  EDX = (pop32());
L_100eafd6:;
  /* 100eafd6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 100eafd9 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eafdc jne 0x100eb02a */
  if (!C.zf) goto L_100eb02a;
  /* 100eafde cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eafe1 jae 0x100eb001 */
  if (!C.cf) goto L_100eb001;
  /* 100eafe3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100eafe8 mov ecx, edx */
  ECX = (EDX);
  /* 100eafea shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100eafec lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 100eaff0 not ebx */
  EBX = (~(EBX));
  /* 100eaff2 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 100eaff6 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 100eaff8 jne 0x100eb022 */
  if (!C.zf) goto L_100eb022;
  /* 100eaffa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eaffd and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100eafff jmp 0x100eb022 */
  goto L_100eb022;
L_100eb001:;
  /* 100eb001 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 100eb004 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100eb009 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100eb00b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 100eb00f not ebx */
  EBX = (~(EBX));
  /* 100eb011 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 100eb018 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 100eb01a jne 0x100eb022 */
  if (!C.zf) goto L_100eb022;
  /* 100eb01c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eb01f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_100eb022:;
  /* 100eb022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100eb025 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 100eb028 jmp 0x100eb02d */
  goto L_100eb02d;
L_100eb02a:;
  /* 100eb02a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_100eb02d:;
  /* 100eb02d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 100eb030 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 100eb033 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb036 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 100eb039 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100eb03c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 100eb03f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 100eb042 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 100eb045 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_100eb048:;
  /* 100eb048 mov edx, ecx */
  EDX = (ECX);
  /* 100eb04a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 100eb04d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100eb04e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb051 jbe 0x100eb056 */
  if ((C.cf||C.zf)) goto L_100eb056;
  /* 100eb053 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100eb055 pop edx */
  EDX = (pop32());
L_100eb056:;
  /* 100eb056 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 100eb059 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 100eb05c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 100eb05f jne 0x100eb0f9 */
  if (!C.zf) goto L_100eb0f9;
  /* 100eb065 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eb068 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 100eb06b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 100eb06e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100eb070 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 100eb073 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100eb074 pop esi */
  ESI = (pop32());
  /* 100eb075 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb077 jbe 0x100eb07b */
  if ((C.cf||C.zf)) goto L_100eb07b;
  /* 100eb079 mov ebx, esi */
  EBX = (ESI);
L_100eb07b:;
  /* 100eb07b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb07e mov edx, ecx */
  EDX = (ECX);
  /* 100eb080 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 100eb083 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 100eb086 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100eb087 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb089 jbe 0x100eb08d */
  if ((C.cf||C.zf)) goto L_100eb08d;
  /* 100eb08b mov edx, esi */
  EDX = (ESI);
L_100eb08d:;
  /* 100eb08d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb08f je 0x100eb0f4 */
  if (C.zf) goto L_100eb0f4;
  /* 100eb091 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100eb094 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 100eb097 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb09a jne 0x100eb0dc */
  if (!C.zf) goto L_100eb0dc;
  /* 100eb09c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb09f jae 0x100eb0bd */
  if (!C.cf) goto L_100eb0bd;
  /* 100eb0a1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100eb0a6 mov ecx, ebx */
  ECX = (EBX);
  /* 100eb0a8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100eb0aa not esi */
  ESI = (~(ESI));
  /* 100eb0ac and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 100eb0b0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 100eb0b4 jne 0x100eb0dc */
  if (!C.zf) goto L_100eb0dc;
  /* 100eb0b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eb0b9 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100eb0bb jmp 0x100eb0dc */
  goto L_100eb0dc;
L_100eb0bd:;
  /* 100eb0bd lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 100eb0c0 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100eb0c5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100eb0c7 not esi */
  ESI = (~(ESI));
  /* 100eb0c9 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 100eb0d0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 100eb0d4 jne 0x100eb0dc */
  if (!C.zf) goto L_100eb0dc;
  /* 100eb0d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eb0d9 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_100eb0dc:;
  /* 100eb0dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100eb0df mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 100eb0e2 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 100eb0e5 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 100eb0e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 100eb0eb mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 100eb0ee mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 100eb0f1 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_100eb0f4:;
  /* 100eb0f4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100eb0f7 jmp 0x100eb0fc */
  goto L_100eb0fc;
L_100eb0f9:;
  /* 100eb0f9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_100eb0fc:;
  /* 100eb0fc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb100 jne 0x100eb10a */
  if (!C.zf) goto L_100eb10a;
  /* 100eb102 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb104 je 0x100eb18b */
  if (C.zf) goto L_100eb18b;
L_100eb10a:;
  /* 100eb10a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100eb10d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 100eb111 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 100eb114 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 100eb117 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 100eb11a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 100eb11d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 100eb120 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 100eb123 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 100eb126 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb129 jne 0x100eb18b */
  if (!C.zf) goto L_100eb18b;
  /* 100eb12b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 100eb12f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb132 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 100eb135 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100eb137 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 100eb13b jae 0x100eb162 */
  if (!C.cf) goto L_100eb162;
  /* 100eb13d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eb141 jne 0x100eb151 */
  if (!C.zf) goto L_100eb151;
  /* 100eb143 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100eb148 mov ecx, edx */
  ECX = (EDX);
  /* 100eb14a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100eb14c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eb14f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_100eb151:;
  /* 100eb151 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100eb156 mov ecx, edx */
  ECX = (EDX);
  /* 100eb158 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100eb15a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 100eb15e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100eb160 jmp 0x100eb18b */
  goto L_100eb18b;
L_100eb162:;
  /* 100eb162 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eb166 jne 0x100eb178 */
  if (!C.zf) goto L_100eb178;
  /* 100eb168 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 100eb16b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100eb170 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100eb172 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eb175 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_100eb178:;
  /* 100eb178 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 100eb17b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 100eb180 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100eb182 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 100eb189 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_100eb18b:;
  /* 100eb18b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100eb18e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100eb190 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 100eb194 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 100eb197 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 100eb199 jne 0x100eb296 */
  if (!C.zf) goto L_100eb296;
  /* 100eb19f mov eax, dword ptr [0x100f69c4] */
  EAX = (r32((uint32_t)(0x100f69c4)));
  /* 100eb1a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100eb1a6 je 0x100eb288 */
  if (C.zf) goto L_100eb288;
  /* 100eb1ac mov ecx, dword ptr [0x100f69bc] */
  ECX = (r32((uint32_t)(0x100f69bc)));
  /* 100eb1b2 mov esi, dword ptr [0x100ee07c] */
  ESI = (r32((uint32_t)(0x100ee07c)));
  /* 100eb1b8 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 100eb1bb add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb1be mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 100eb1c3 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 100eb1c8 push ebx */
  push32((uint32_t)(EBX));
  /* 100eb1c9 push ecx */
  push32((uint32_t)(ECX));
  /* 100eb1ca call esi */
  call_ind((uint32_t)(ESI), 0x100eb1ccu);
  /* 100eb1cc mov ecx, dword ptr [0x100f69bc] */
  ECX = (r32((uint32_t)(0x100f69bc)));
  /* 100eb1d2 mov eax, dword ptr [0x100f69c4] */
  EAX = (r32((uint32_t)(0x100f69c4)));
  /* 100eb1d7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 100eb1dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100eb1de or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 100eb1e1 mov eax, dword ptr [0x100f69c4] */
  EAX = (r32((uint32_t)(0x100f69c4)));
  /* 100eb1e6 mov ecx, dword ptr [0x100f69bc] */
  ECX = (r32((uint32_t)(0x100f69bc)));
  /* 100eb1ec mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 100eb1ef and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 100eb1f7 mov eax, dword ptr [0x100f69c4] */
  EAX = (r32((uint32_t)(0x100f69c4)));
  /* 100eb1fc mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 100eb1ff dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 100eb202 mov eax, dword ptr [0x100f69c4] */
  EAX = (r32((uint32_t)(0x100f69c4)));
  /* 100eb207 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 100eb20a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eb20e jne 0x100eb219 */
  if (!C.zf) goto L_100eb219;
  /* 100eb210 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100eb214 mov eax, dword ptr [0x100f69c4] */
  EAX = (r32((uint32_t)(0x100f69c4)));
L_100eb219:;
  /* 100eb219 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb21d jne 0x100eb288 */
  if (!C.zf) goto L_100eb288;
  /* 100eb21f push ebx */
  push32((uint32_t)(EBX));
  /* 100eb220 push 0 */
  push32((uint32_t)(0x0u));
  /* 100eb222 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 100eb225 call esi */
  call_ind((uint32_t)(ESI), 0x100eb227u);
  /* 100eb227 mov eax, dword ptr [0x100f69c4] */
  EAX = (r32((uint32_t)(0x100f69c4)));
  /* 100eb22c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 100eb22f push 0 */
  push32((uint32_t)(0x0u));
  /* 100eb231 push dword ptr [0x100f7c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f7c24))));
  /* 100eb237 call dword ptr [0x100ee080] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee080))), 0x100eb23du);
  /* 100eb23d mov eax, dword ptr [0x100f69c8] */
  EAX = (r32((uint32_t)(0x100f69c8)));
  /* 100eb242 mov edx, dword ptr [0x100f69cc] */
  EDX = (r32((uint32_t)(0x100f69cc)));
  /* 100eb248 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100eb24b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 100eb24e mov ecx, eax */
  ECX = (EAX);
  /* 100eb250 mov eax, dword ptr [0x100f69c4] */
  EAX = (r32((uint32_t)(0x100f69c4)));
  /* 100eb255 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eb257 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 100eb25b push ecx */
  push32((uint32_t)(ECX));
  /* 100eb25c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 100eb25f push ecx */
  push32((uint32_t)(ECX));
  /* 100eb260 push eax */
  push32((uint32_t)(EAX));
  /* 100eb261 call 0x100e9c40 */
  push32(0x100eb266u); f_100e9c40();
  /* 100eb266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eb269 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb26c dec dword ptr [0x100f69c8] */
  { uint32_t _r=(r32((uint32_t)(0x100f69c8)))-1; w32((uint32_t)(0x100f69c8), (_r)); fl_dec(_r,32); }
  /* 100eb272 cmp eax, dword ptr [0x100f69c4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x100f69c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb278 jbe 0x100eb27e */
  if ((C.cf||C.zf)) goto L_100eb27e;
  /* 100eb27a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_100eb27e:;
  /* 100eb27e mov eax, dword ptr [0x100f69cc] */
  EAX = (r32((uint32_t)(0x100f69cc)));
  /* 100eb283 mov dword ptr [0x100f69c0], eax */
  w32((uint32_t)(0x100f69c0), (EAX));
L_100eb288:;
  /* 100eb288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eb28b mov dword ptr [0x100f69bc], edi */
  w32((uint32_t)(0x100f69bc), (EDI));
  /* 100eb291 mov dword ptr [0x100f69c4], eax */
  w32((uint32_t)(0x100f69c4), (EAX));
L_100eb296:;
  /* 100eb296 pop edi */
  EDI = (pop32());
  /* 100eb297 pop esi */
  ESI = (pop32());
  /* 100eb298 pop ebx */
  EBX = (pop32());
  /* 100eb299 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100eb29a ret  */
  ESPCHK(0x100eaf72u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b29b @ 0x100eb29b (777 bytes, 275 insns) */
void f_100eb29b(void) {
  FTRACE(0x100eb29bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eb29b push ebp */
  push32((uint32_t)(EBP));
  /* 100eb29c mov ebp, esp */
  EBP = (ESP);
  /* 100eb29e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eb2a1 mov eax, dword ptr [0x100f69c8] */
  EAX = (r32((uint32_t)(0x100f69c8)));
  /* 100eb2a6 mov edx, dword ptr [0x100f69cc] */
  EDX = (r32((uint32_t)(0x100f69cc)));
  /* 100eb2ac push ebx */
  push32((uint32_t)(EBX));
  /* 100eb2ad push esi */
  push32((uint32_t)(ESI));
  /* 100eb2ae lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100eb2b1 push edi */
  push32((uint32_t)(EDI));
  /* 100eb2b2 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 100eb2b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eb2b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 100eb2bb lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 100eb2be and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 100eb2c1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 100eb2c4 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 100eb2c7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100eb2c8 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb2cb jge 0x100eb2db */
  if ((C.sf==C.of)) goto L_100eb2db;
  /* 100eb2cd or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 100eb2d0 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100eb2d2 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 100eb2d6 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 100eb2d9 jmp 0x100eb2eb */
  goto L_100eb2eb;
L_100eb2db:;
  /* 100eb2db add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb2de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100eb2e1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100eb2e3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 100eb2e5 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 100eb2e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_100eb2eb:;
  /* 100eb2eb mov eax, dword ptr [0x100f69c0] */
  EAX = (r32((uint32_t)(0x100f69c0)));
  /* 100eb2f0 mov ebx, eax */
  EBX = (EAX);
  /* 100eb2f2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb2f4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100eb2f7 jae 0x100eb312 */
  if (!C.cf) goto L_100eb312;
L_100eb2f9:;
  /* 100eb2f9 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 100eb2fc mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 100eb2fe and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 100eb301 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 100eb303 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100eb305 jne 0x100eb312 */
  if (!C.zf) goto L_100eb312;
  /* 100eb307 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb30a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb30d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100eb310 jb 0x100eb2f9 */
  if (C.cf) goto L_100eb2f9;
L_100eb312:;
  /* 100eb312 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb315 jne 0x100eb390 */
  if (!C.zf) goto L_100eb390;
  /* 100eb317 mov ebx, edx */
  EBX = (EDX);
L_100eb319:;
  /* 100eb319 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb31b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100eb31e jae 0x100eb335 */
  if (!C.cf) goto L_100eb335;
  /* 100eb320 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 100eb323 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 100eb325 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 100eb328 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 100eb32a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100eb32c jne 0x100eb333 */
  if (!C.zf) goto L_100eb333;
  /* 100eb32e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb331 jmp 0x100eb319 */
  goto L_100eb319;
L_100eb333:;
  /* 100eb333 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100eb335:;
  /* 100eb335 jne 0x100eb390 */
  if (!C.zf) goto L_100eb390;
L_100eb337:;
  /* 100eb337 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb33a jae 0x100eb34d */
  if (!C.cf) goto L_100eb34d;
  /* 100eb33c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb340 jne 0x100eb34a */
  if (!C.zf) goto L_100eb34a;
  /* 100eb342 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb345 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100eb348 jmp 0x100eb337 */
  goto L_100eb337;
L_100eb34a:;
  /* 100eb34a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100eb34d:;
  /* 100eb34d jne 0x100eb375 */
  if (!C.zf) goto L_100eb375;
  /* 100eb34f mov ebx, edx */
  EBX = (EDX);
L_100eb351:;
  /* 100eb351 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb353 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100eb356 jae 0x100eb365 */
  if (!C.cf) goto L_100eb365;
  /* 100eb358 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb35c jne 0x100eb363 */
  if (!C.zf) goto L_100eb363;
  /* 100eb35e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb361 jmp 0x100eb351 */
  goto L_100eb351;
L_100eb363:;
  /* 100eb363 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100eb365:;
  /* 100eb365 jne 0x100eb375 */
  if (!C.zf) goto L_100eb375;
  /* 100eb367 call 0x100eb5a4 */
  push32(0x100eb36cu); f_100eb5a4();
  /* 100eb36c mov ebx, eax */
  EBX = (EAX);
  /* 100eb36e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100eb370 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100eb373 je 0x100eb389 */
  if (C.zf) goto L_100eb389;
L_100eb375:;
  /* 100eb375 push ebx */
  push32((uint32_t)(EBX));
  /* 100eb376 call 0x100eb655 */
  push32(0x100eb37bu); f_100eb655();
  /* 100eb37b pop ecx */
  ECX = (pop32());
  /* 100eb37c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 100eb37f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 100eb381 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 100eb384 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb387 jne 0x100eb390 */
  if (!C.zf) goto L_100eb390;
L_100eb389:;
  /* 100eb389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100eb38b jmp 0x100eb59f */
  goto L_100eb59f;
L_100eb390:;
  /* 100eb390 mov dword ptr [0x100f69c0], ebx */
  w32((uint32_t)(0x100f69c0), (EBX));
  /* 100eb396 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 100eb399 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 100eb39b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb39e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 100eb3a1 je 0x100eb3b7 */
  if (C.zf) goto L_100eb3b7;
  /* 100eb3a3 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 100eb3aa mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 100eb3ae and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 100eb3b1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 100eb3b3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100eb3b5 jne 0x100eb3ee */
  if (!C.zf) goto L_100eb3ee;
L_100eb3b7:;
  /* 100eb3b7 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 100eb3bd mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 100eb3c0 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 100eb3c3 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 100eb3c6 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100eb3ca lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 100eb3cd or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 100eb3cf mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 100eb3d2 jne 0x100eb3eb */
  if (!C.zf) goto L_100eb3eb;
L_100eb3d4:;
  /* 100eb3d4 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 100eb3da inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100eb3dd and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 100eb3e0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb3e3 mov edi, esi */
  EDI = (ESI);
  /* 100eb3e5 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 100eb3e7 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 100eb3e9 je 0x100eb3d4 */
  if (C.zf) goto L_100eb3d4;
L_100eb3eb:;
  /* 100eb3eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_100eb3ee:;
  /* 100eb3ee mov ecx, edx */
  ECX = (EDX);
  /* 100eb3f0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100eb3f2 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100eb3f8 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 100eb3ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 100eb402 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 100eb406 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 100eb408 jne 0x100eb417 */
  if (!C.zf) goto L_100eb417;
  /* 100eb40a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 100eb411 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100eb413 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 100eb416 pop edi */
  EDI = (pop32());
L_100eb417:;
  /* 100eb417 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100eb419 jl 0x100eb420 */
  if ((C.sf!=C.of)) goto L_100eb420;
  /* 100eb41b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100eb41d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100eb41e jmp 0x100eb417 */
  goto L_100eb417;
L_100eb420:;
  /* 100eb420 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 100eb423 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 100eb427 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 100eb429 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eb42c mov esi, ecx */
  ESI = (ECX);
  /* 100eb42e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100eb431 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 100eb434 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100eb435 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb438 jle 0x100eb43d */
  if ((C.zf||C.sf!=C.of)) goto L_100eb43d;
  /* 100eb43a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100eb43c pop esi */
  ESI = (pop32());
L_100eb43d:;
  /* 100eb43d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb43f je 0x100eb552 */
  if (C.zf) goto L_100eb552;
  /* 100eb445 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 100eb448 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb44b jne 0x100eb4ae */
  if (!C.zf) goto L_100eb4ae;
  /* 100eb44d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb450 jge 0x100eb47d */
  if ((C.sf==C.of)) goto L_100eb47d;
  /* 100eb452 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100eb457 mov ecx, edi */
  ECX = (EDI);
  /* 100eb459 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100eb45b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100eb45e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 100eb462 not ebx */
  EBX = (~(EBX));
  /* 100eb464 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 100eb467 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 100eb46b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 100eb46f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 100eb471 jne 0x100eb4ab */
  if (!C.zf) goto L_100eb4ab;
  /* 100eb473 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eb476 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 100eb479 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 100eb47b jmp 0x100eb4ae */
  goto L_100eb4ae;
L_100eb47d:;
  /* 100eb47d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 100eb480 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 100eb485 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 100eb487 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100eb48a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 100eb48e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 100eb495 not ebx */
  EBX = (~(EBX));
  /* 100eb497 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 100eb499 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 100eb49b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 100eb49e jne 0x100eb4ab */
  if (!C.zf) goto L_100eb4ab;
  /* 100eb4a0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eb4a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 100eb4a6 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100eb4a9 jmp 0x100eb4ae */
  goto L_100eb4ae;
L_100eb4ab:;
  /* 100eb4ab mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_100eb4ae:;
  /* 100eb4ae mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 100eb4b1 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 100eb4b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb4b8 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 100eb4bb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 100eb4be mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 100eb4c1 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 100eb4c4 je 0x100eb55e */
  if (C.zf) goto L_100eb55e;
  /* 100eb4ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 100eb4cd mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 100eb4d1 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 100eb4d4 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 100eb4d7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 100eb4da mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 100eb4dd mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 100eb4e0 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 100eb4e3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 100eb4e6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb4e9 jne 0x100eb54f */
  if (!C.zf) goto L_100eb54f;
  /* 100eb4eb mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 100eb4ef cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb4f2 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 100eb4f5 jge 0x100eb520 */
  if ((C.sf==C.of)) goto L_100eb520;
  /* 100eb4f7 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100eb4f9 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eb4fd mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 100eb501 jne 0x100eb50e */
  if (!C.zf) goto L_100eb50e;
  /* 100eb503 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 100eb508 mov ecx, esi */
  ECX = (ESI);
  /* 100eb50a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 100eb50c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_100eb50e:;
  /* 100eb50e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 100eb513 mov ecx, esi */
  ECX = (ESI);
  /* 100eb515 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 100eb517 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100eb51a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 100eb51e jmp 0x100eb54f */
  goto L_100eb54f;
L_100eb520:;
  /* 100eb520 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100eb522 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eb526 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 100eb52a jne 0x100eb539 */
  if (!C.zf) goto L_100eb539;
  /* 100eb52c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 100eb52f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 100eb534 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 100eb536 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_100eb539:;
  /* 100eb539 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100eb53c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 100eb543 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 100eb546 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100eb54b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100eb54d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_100eb54f:;
  /* 100eb54f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_100eb552:;
  /* 100eb552 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100eb554 je 0x100eb561 */
  if (C.zf) goto L_100eb561;
  /* 100eb556 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 100eb558 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 100eb55c jmp 0x100eb561 */
  goto L_100eb561;
L_100eb55e:;
  /* 100eb55e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_100eb561:;
  /* 100eb561 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 100eb564 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb566 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 100eb569 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 100eb56b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 100eb56f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 100eb572 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 100eb574 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100eb576 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 100eb579 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100eb57b jne 0x100eb597 */
  if (!C.zf) goto L_100eb597;
  /* 100eb57d cmp ebx, dword ptr [0x100f69c4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100f69c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb583 jne 0x100eb597 */
  if (!C.zf) goto L_100eb597;
  /* 100eb585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100eb588 cmp ecx, dword ptr [0x100f69bc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x100f69bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb58e jne 0x100eb597 */
  if (!C.zf) goto L_100eb597;
  /* 100eb590 and dword ptr [0x100f69c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x100f69c4)))&(0x0u); w32((uint32_t)(0x100f69c4), (_r)); fl_logic(_r,32); }
L_100eb597:;
  /* 100eb597 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100eb59a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100eb59c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_100eb59f:;
  /* 100eb59f pop edi */
  EDI = (pop32());
  /* 100eb5a0 pop esi */
  ESI = (pop32());
  /* 100eb5a1 pop ebx */
  EBX = (pop32());
  /* 100eb5a2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100eb5a3 ret  */
  ESPCHK(0x100eb29bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5a4 @ 0x100eb5a4 (177 bytes, 53 insns) */
void f_100eb5a4(void) {
  FTRACE(0x100eb5a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eb5a4 mov eax, dword ptr [0x100f69c8] */
  EAX = (r32((uint32_t)(0x100f69c8)));
  /* 100eb5a9 mov ecx, dword ptr [0x100f69b8] */
  ECX = (r32((uint32_t)(0x100f69b8)));
  /* 100eb5af push esi */
  push32((uint32_t)(ESI));
  /* 100eb5b0 push edi */
  push32((uint32_t)(EDI));
  /* 100eb5b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100eb5b3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb5b5 jne 0x100eb5e7 */
  if (!C.zf) goto L_100eb5e7;
  /* 100eb5b7 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 100eb5bb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 100eb5be push eax */
  push32((uint32_t)(EAX));
  /* 100eb5bf push dword ptr [0x100f69cc] */
  push32((uint32_t)(r32((uint32_t)(0x100f69cc))));
  /* 100eb5c5 push edi */
  push32((uint32_t)(EDI));
  /* 100eb5c6 push dword ptr [0x100f7c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f7c24))));
  /* 100eb5cc call dword ptr [0x100ee0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0ac))), 0x100eb5d2u);
  /* 100eb5d2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb5d4 je 0x100eb637 */
  if (C.zf) goto L_100eb637;
  /* 100eb5d6 add dword ptr [0x100f69b8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x100f69b8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x100f69b8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100eb5dd mov dword ptr [0x100f69cc], eax */
  w32((uint32_t)(0x100f69cc), (EAX));
  /* 100eb5e2 mov eax, dword ptr [0x100f69c8] */
  EAX = (r32((uint32_t)(0x100f69c8)));
L_100eb5e7:;
  /* 100eb5e7 mov ecx, dword ptr [0x100f69cc] */
  ECX = (r32((uint32_t)(0x100f69cc)));
  /* 100eb5ed push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 100eb5f2 push 8 */
  push32((uint32_t)(0x8u));
  /* 100eb5f4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 100eb5f7 push dword ptr [0x100f7c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f7c24))));
  /* 100eb5fd lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 100eb600 call dword ptr [0x100ee098] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee098))), 0x100eb606u);
  /* 100eb606 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb608 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 100eb60b je 0x100eb637 */
  if (C.zf) goto L_100eb637;
  /* 100eb60d push 4 */
  push32((uint32_t)(0x4u));
  /* 100eb60f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 100eb614 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 100eb619 push edi */
  push32((uint32_t)(EDI));
  /* 100eb61a call dword ptr [0x100ee0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0a8))), 0x100eb620u);
  /* 100eb620 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb622 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 100eb625 jne 0x100eb63b */
  if (!C.zf) goto L_100eb63b;
  /* 100eb627 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100eb62a push edi */
  push32((uint32_t)(EDI));
  /* 100eb62b push dword ptr [0x100f7c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f7c24))));
  /* 100eb631 call dword ptr [0x100ee080] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee080))), 0x100eb637u);
L_100eb637:;
  /* 100eb637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100eb639 jmp 0x100eb652 */
  goto L_100eb652;
L_100eb63b:;
  /* 100eb63b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 100eb63f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 100eb641 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 100eb644 inc dword ptr [0x100f69c8] */
  { uint32_t _r=(r32((uint32_t)(0x100f69c8)))+1; w32((uint32_t)(0x100f69c8), (_r)); fl_inc(_r,32); }
  /* 100eb64a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 100eb64d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100eb650 mov eax, esi */
  EAX = (ESI);
L_100eb652:;
  /* 100eb652 pop edi */
  EDI = (pop32());
  /* 100eb653 pop esi */
  ESI = (pop32());
  /* 100eb654 ret  */
  ESPCHK(0x100eb5a4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b655 @ 0x100eb655 (251 bytes, 85 insns) */
void f_100eb655(void) {
  FTRACE(0x100eb655u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eb655 push ebp */
  push32((uint32_t)(EBP));
  /* 100eb656 mov ebp, esp */
  EBP = (ESP);
  /* 100eb658 push ecx */
  push32((uint32_t)(ECX));
  /* 100eb659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eb65c push ebx */
  push32((uint32_t)(EBX));
  /* 100eb65d push esi */
  push32((uint32_t)(ESI));
  /* 100eb65e push edi */
  push32((uint32_t)(EDI));
  /* 100eb65f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 100eb662 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 100eb665 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100eb667:;
  /* 100eb667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100eb669 jl 0x100eb670 */
  if ((C.sf!=C.of)) goto L_100eb670;
  /* 100eb66b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 100eb66d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100eb66e jmp 0x100eb667 */
  goto L_100eb667;
L_100eb670:;
  /* 100eb670 mov eax, ebx */
  EAX = (EBX);
  /* 100eb672 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 100eb674 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100eb67a pop edx */
  EDX = (pop32());
  /* 100eb67b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 100eb682 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_100eb685:;
  /* 100eb685 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 100eb688 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 100eb68b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb68e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100eb68f jne 0x100eb685 */
  if (!C.zf) goto L_100eb685;
  /* 100eb691 mov edi, ebx */
  EDI = (EBX);
  /* 100eb693 push 4 */
  push32((uint32_t)(0x4u));
  /* 100eb695 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 100eb698 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb69b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100eb6a0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100eb6a5 push edi */
  push32((uint32_t)(EDI));
  /* 100eb6a6 call dword ptr [0x100ee0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0a8))), 0x100eb6acu);
  /* 100eb6ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100eb6ae jne 0x100eb6b8 */
  if (!C.zf) goto L_100eb6b8;
  /* 100eb6b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100eb6b3 jmp 0x100eb74b */
  goto L_100eb74b;
L_100eb6b8:;
  /* 100eb6b8 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 100eb6be cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb6c0 ja 0x100eb6fe */
  if ((!C.cf&&!C.zf)) goto L_100eb6fe;
  /* 100eb6c2 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_100eb6c5:;
  /* 100eb6c5 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 100eb6c9 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 100eb6d0 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 100eb6d6 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 100eb6dd mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100eb6df lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 100eb6e5 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100eb6e8 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 100eb6f2 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb6f7 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 100eb6fa cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb6fc jbe 0x100eb6c5 */
  if ((C.cf||C.zf)) goto L_100eb6c5;
L_100eb6fe:;
  /* 100eb6fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100eb701 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 100eb704 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb709 push 1 */
  push32((uint32_t)(0x1u));
  /* 100eb70b pop edi */
  EDI = (pop32());
  /* 100eb70c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100eb70f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 100eb712 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 100eb715 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 100eb718 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 100eb71b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 100eb720 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 100eb727 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 100eb72a mov cl, al */
  CL = (AL);
  /* 100eb72c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 100eb72e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100eb730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eb733 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 100eb736 jne 0x100eb73b */
  if (!C.zf) goto L_100eb73b;
  /* 100eb738 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_100eb73b:;
  /* 100eb73b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 100eb740 mov ecx, ebx */
  ECX = (EBX);
  /* 100eb742 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100eb744 not edx */
  EDX = (~(EDX));
  /* 100eb746 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 100eb749 mov eax, ebx */
  EAX = (EBX);
L_100eb74b:;
  /* 100eb74b pop edi */
  EDI = (pop32());
  /* 100eb74c pop esi */
  ESI = (pop32());
  /* 100eb74d pop ebx */
  EBX = (pop32());
  /* 100eb74e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100eb74f ret  */
  ESPCHK(0x100eb655u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x100eb750 (324 bytes, 102 insns) */
void f_100eb750(void) {
  FTRACE(0x100eb750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eb750 cmp dword ptr [0x100f0e70], -1 */
  { uint32_t _a=(r32((uint32_t)(0x100f0e70))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb757 push ebx */
  push32((uint32_t)(EBX));
  /* 100eb758 push ebp */
  push32((uint32_t)(EBP));
  /* 100eb759 push esi */
  push32((uint32_t)(ESI));
  /* 100eb75a push edi */
  push32((uint32_t)(EDI));
  /* 100eb75b jne 0x100eb764 */
  if (!C.zf) goto L_100eb764;
  /* 100eb75d mov esi, 0x100f0e60 */
  ESI = (0x100f0e60u);
  /* 100eb762 jmp 0x100eb781 */
  goto L_100eb781;
L_100eb764:;
  /* 100eb764 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 100eb769 push 0 */
  push32((uint32_t)(0x0u));
  /* 100eb76b push dword ptr [0x100f7c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f7c24))));
  /* 100eb771 call dword ptr [0x100ee098] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee098))), 0x100eb777u);
  /* 100eb777 mov esi, eax */
  ESI = (EAX);
  /* 100eb779 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100eb77b je 0x100eb88d */
  if (C.zf) goto L_100eb88d;
L_100eb781:;
  /* 100eb781 mov ebp, dword ptr [0x100ee0a8] */
  EBP = (r32((uint32_t)(0x100ee0a8)));
  /* 100eb787 push 4 */
  push32((uint32_t)(0x4u));
  /* 100eb789 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 100eb78e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 100eb793 push 0 */
  push32((uint32_t)(0x0u));
  /* 100eb795 call ebp */
  call_ind((uint32_t)(EBP), 0x100eb797u);
  /* 100eb797 mov edi, eax */
  EDI = (EAX);
  /* 100eb799 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100eb79b je 0x100eb876 */
  if (C.zf) goto L_100eb876;
  /* 100eb7a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 100eb7a3 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 100eb7a8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100eb7ad push ebx */
  push32((uint32_t)(EBX));
  /* 100eb7ae push edi */
  push32((uint32_t)(EDI));
  /* 100eb7af call ebp */
  call_ind((uint32_t)(EBP), 0x100eb7b1u);
  /* 100eb7b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100eb7b3 je 0x100eb868 */
  if (C.zf) goto L_100eb868;
  /* 100eb7b9 mov eax, 0x100f0e60 */
  EAX = (0x100f0e60u);
  /* 100eb7be cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb7c0 jne 0x100eb7e0 */
  if (!C.zf) goto L_100eb7e0;
  /* 100eb7c2 cmp dword ptr [0x100f0e60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100f0e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb7c9 jne 0x100eb7d0 */
  if (!C.zf) goto L_100eb7d0;
  /* 100eb7cb mov dword ptr [0x100f0e60], eax */
  w32((uint32_t)(0x100f0e60), (EAX));
L_100eb7d0:;
  /* 100eb7d0 cmp dword ptr [0x100f0e64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100f0e64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb7d7 jne 0x100eb7f5 */
  if (!C.zf) goto L_100eb7f5;
  /* 100eb7d9 mov dword ptr [0x100f0e64], eax */
  w32((uint32_t)(0x100f0e64), (EAX));
  /* 100eb7de jmp 0x100eb7f5 */
  goto L_100eb7f5;
L_100eb7e0:;
  /* 100eb7e0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100eb7e2 mov eax, dword ptr [0x100f0e64] */
  EAX = (r32((uint32_t)(0x100f0e64)));
  /* 100eb7e7 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 100eb7ea mov dword ptr [0x100f0e64], esi */
  w32((uint32_t)(0x100f0e64), (ESI));
  /* 100eb7f0 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 100eb7f3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_100eb7f5:;
  /* 100eb7f5 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 100eb7fb lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 100eb801 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 100eb804 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 100eb807 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 100eb80a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 100eb80d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 100eb810 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 100eb812 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_100eb817:;
  /* 100eb817 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100eb819 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb81c setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 100eb81f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100eb820 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 100eb822 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100eb823 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 100eb824 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 100eb826 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100eb829 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb82c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb832 jl 0x100eb817 */
  if ((C.sf!=C.of)) goto L_100eb817;
  /* 100eb834 push ebx */
  push32((uint32_t)(EBX));
  /* 100eb835 push 0 */
  push32((uint32_t)(0x0u));
  /* 100eb837 push edi */
  push32((uint32_t)(EDI));
  /* 100eb838 call 0x100e9be0 */
  push32(0x100eb83du); f_100e9be0();
  /* 100eb83d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100eb840:;
  /* 100eb840 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 100eb843 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb845 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb847 jae 0x100eb864 */
  if (!C.cf) goto L_100eb864;
  /* 100eb849 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 100eb850 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 100eb853 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 100eb855 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 100eb85c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb862 jmp 0x100eb840 */
  goto L_100eb840;
L_100eb864:;
  /* 100eb864 mov eax, esi */
  EAX = (ESI);
  /* 100eb866 jmp 0x100eb88f */
  goto L_100eb88f;
L_100eb868:;
  /* 100eb868 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100eb86d push 0 */
  push32((uint32_t)(0x0u));
  /* 100eb86f push edi */
  push32((uint32_t)(EDI));
  /* 100eb870 call dword ptr [0x100ee07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee07c))), 0x100eb876u);
L_100eb876:;
  /* 100eb876 cmp esi, 0x100f0e60 */
  { uint32_t _a=(ESI),_b=(0x100f0e60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb87c je 0x100eb88d */
  if (C.zf) goto L_100eb88d;
  /* 100eb87e push esi */
  push32((uint32_t)(ESI));
  /* 100eb87f push 0 */
  push32((uint32_t)(0x0u));
  /* 100eb881 push dword ptr [0x100f7c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f7c24))));
  /* 100eb887 call dword ptr [0x100ee080] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee080))), 0x100eb88du);
L_100eb88d:;
  /* 100eb88d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100eb88f:;
  /* 100eb88f pop edi */
  EDI = (pop32());
  /* 100eb890 pop esi */
  ESI = (pop32());
  /* 100eb891 pop ebp */
  EBP = (pop32());
  /* 100eb892 pop ebx */
  EBX = (pop32());
  /* 100eb893 ret  */
  ESPCHK(0x100eb750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b894 @ 0x100eb894 (86 bytes, 27 insns) */
void f_100eb894(void) {
  FTRACE(0x100eb894u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eb894 push esi */
  push32((uint32_t)(ESI));
  /* 100eb895 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100eb899 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 100eb89e push 0 */
  push32((uint32_t)(0x0u));
  /* 100eb8a0 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100eb8a3 call dword ptr [0x100ee07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee07c))), 0x100eb8a9u);
  /* 100eb8a9 cmp dword ptr [0x100f2e80], esi */
  { uint32_t _a=(r32((uint32_t)(0x100f2e80))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb8af jne 0x100eb8b9 */
  if (!C.zf) goto L_100eb8b9;
  /* 100eb8b1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 100eb8b4 mov dword ptr [0x100f2e80], eax */
  w32((uint32_t)(0x100f2e80), (EAX));
L_100eb8b9:;
  /* 100eb8b9 cmp esi, 0x100f0e60 */
  { uint32_t _a=(ESI),_b=(0x100f0e60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb8bf je 0x100eb8e1 */
  if (C.zf) goto L_100eb8e1;
  /* 100eb8c1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 100eb8c4 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 100eb8c6 push esi */
  push32((uint32_t)(ESI));
  /* 100eb8c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 100eb8c9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100eb8cb mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100eb8cd mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 100eb8d0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100eb8d3 push dword ptr [0x100f7c24] */
  push32((uint32_t)(r32((uint32_t)(0x100f7c24))));
  /* 100eb8d9 call dword ptr [0x100ee080] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee080))), 0x100eb8dfu);
  /* 100eb8df pop esi */
  ESI = (pop32());
  /* 100eb8e0 ret  */
  ESPCHK(0x100eb894u, _esp0);
  ESP += 4; return;
L_100eb8e1:;
  /* 100eb8e1 or dword ptr [0x100f0e70], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x100f0e70)))|(0xffffffffu); w32((uint32_t)(0x100f0e70), (_r)); fl_logic(_r,32); }
  /* 100eb8e8 pop esi */
  ESI = (pop32());
  /* 100eb8e9 ret  */
  ESPCHK(0x100eb894u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8ea @ 0x100eb8ea (194 bytes, 66 insns) */
void f_100eb8ea(void) {
  FTRACE(0x100eb8eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eb8ea push ebp */
  push32((uint32_t)(EBP));
  /* 100eb8eb mov ebp, esp */
  EBP = (ESP);
  /* 100eb8ed push ecx */
  push32((uint32_t)(ECX));
  /* 100eb8ee push ebx */
  push32((uint32_t)(EBX));
  /* 100eb8ef push esi */
  push32((uint32_t)(ESI));
  /* 100eb8f0 mov esi, dword ptr [0x100f0e64] */
  ESI = (r32((uint32_t)(0x100f0e64)));
  /* 100eb8f6 push edi */
  push32((uint32_t)(EDI));
L_100eb8f7:;
  /* 100eb8f7 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb8fb je 0x100eb995 */
  if (C.zf) goto L_100eb995;
  /* 100eb901 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100eb905 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 100eb90b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_100eb910:;
  /* 100eb910 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb916 jne 0x100eb951 */
  if (!C.zf) goto L_100eb951;
  /* 100eb918 mov eax, ebx */
  EAX = (EBX);
  /* 100eb91a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 100eb91f add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb922 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100eb927 push eax */
  push32((uint32_t)(EAX));
  /* 100eb928 call dword ptr [0x100ee07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee07c))), 0x100eb92eu);
  /* 100eb92e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100eb930 je 0x100eb951 */
  if (C.zf) goto L_100eb951;
  /* 100eb932 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 100eb935 dec dword ptr [0x100f6814] */
  { uint32_t _r=(r32((uint32_t)(0x100f6814)))-1; w32((uint32_t)(0x100f6814), (_r)); fl_dec(_r,32); }
  /* 100eb93b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100eb93e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100eb940 je 0x100eb946 */
  if (C.zf) goto L_100eb946;
  /* 100eb942 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb944 jbe 0x100eb949 */
  if ((C.cf||C.zf)) goto L_100eb949;
L_100eb946:;
  /* 100eb946 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_100eb949:;
  /* 100eb949 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100eb94c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 100eb94f je 0x100eb95e */
  if (C.zf) goto L_100eb95e;
L_100eb951:;
  /* 100eb951 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eb957 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eb95a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100eb95c jge 0x100eb910 */
  if ((C.sf==C.of)) goto L_100eb910;
L_100eb95e:;
  /* 100eb95e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb962 mov ecx, esi */
  ECX = (ESI);
  /* 100eb964 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 100eb967 je 0x100eb995 */
  if (C.zf) goto L_100eb995;
  /* 100eb969 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb96d jne 0x100eb995 */
  if (!C.zf) goto L_100eb995;
  /* 100eb96f push 1 */
  push32((uint32_t)(0x1u));
  /* 100eb971 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 100eb974 pop edx */
  EDX = (pop32());
L_100eb975:;
  /* 100eb975 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb978 jne 0x100eb986 */
  if (!C.zf) goto L_100eb986;
  /* 100eb97a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100eb97b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eb97e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb984 jl 0x100eb975 */
  if ((C.sf!=C.of)) goto L_100eb975;
L_100eb986:;
  /* 100eb986 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb98c jne 0x100eb995 */
  if (!C.zf) goto L_100eb995;
  /* 100eb98e push ecx */
  push32((uint32_t)(ECX));
  /* 100eb98f call 0x100eb894 */
  push32(0x100eb994u); f_100eb894();
  /* 100eb994 pop ecx */
  ECX = (pop32());
L_100eb995:;
  /* 100eb995 cmp esi, dword ptr [0x100f0e64] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100f0e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb99b je 0x100eb9a7 */
  if (C.zf) goto L_100eb9a7;
  /* 100eb99d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb9a1 jg 0x100eb8f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_100eb8f7;
L_100eb9a7:;
  /* 100eb9a7 pop edi */
  EDI = (pop32());
  /* 100eb9a8 pop esi */
  ESI = (pop32());
  /* 100eb9a9 pop ebx */
  EBX = (pop32());
  /* 100eb9aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100eb9ab ret  */
  ESPCHK(0x100eb8eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9ac @ 0x100eb9ac (87 bytes, 34 insns) */
void f_100eb9ac(void) {
  FTRACE(0x100eb9acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eb9ac mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100eb9b0 mov edx, 0x100f0e60 */
  EDX = (0x100f0e60u);
  /* 100eb9b5 push esi */
  push32((uint32_t)(ESI));
  /* 100eb9b6 mov ecx, edx */
  ECX = (EDX);
L_100eb9b8:;
  /* 100eb9b8 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb9bb jbe 0x100eb9c2 */
  if ((C.cf||C.zf)) goto L_100eb9c2;
  /* 100eb9bd cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb9c0 jb 0x100eb9ca */
  if (C.cf) goto L_100eb9ca;
L_100eb9c2:;
  /* 100eb9c2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 100eb9c4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb9c6 je 0x100eb9ff */
  if (C.zf) goto L_100eb9ff;
  /* 100eb9c8 jmp 0x100eb9b8 */
  goto L_100eb9b8;
L_100eb9ca:;
  /* 100eb9ca test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 100eb9cc jne 0x100eb9ff */
  if (!C.zf) goto L_100eb9ff;
  /* 100eb9ce mov esi, eax */
  ESI = (EAX);
  /* 100eb9d0 mov edx, 0x100 */
  EDX = (0x100u);
  /* 100eb9d5 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 100eb9db cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eb9dd jb 0x100eb9ff */
  if (C.cf) goto L_100eb9ff;
  /* 100eb9df mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 100eb9e3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100eb9e5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 100eb9e9 mov ecx, eax */
  ECX = (EAX);
  /* 100eb9eb and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 100eb9f0 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eb9f2 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100eb9f4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eb9f6 pop esi */
  ESI = (pop32());
  /* 100eb9f7 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100eb9fa lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 100eb9fe ret  */
  ESPCHK(0x100eb9acu, _esp0);
  ESP += 4; return;
L_100eb9ff:;
  /* 100eb9ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100eba01 pop esi */
  ESI = (pop32());
  /* 100eba02 ret  */
  ESPCHK(0x100eb9acu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba03 @ 0x100eba03 (69 bytes, 19 insns) */
void f_100eba03(void) {
  FTRACE(0x100eba03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eba03 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100eba07 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100eba0b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eba0e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 100eba11 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 100eba15 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 100eba19 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 100eba1c add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100eba1e and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 100eba21 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eba27 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 100eba2e jne 0x100eba47 */
  if (!C.zf) goto L_100eba47;
  /* 100eba30 inc dword ptr [0x100f6814] */
  { uint32_t _r=(r32((uint32_t)(0x100f6814)))+1; w32((uint32_t)(0x100f6814), (_r)); fl_inc(_r,32); }
  /* 100eba36 cmp dword ptr [0x100f6814], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x100f6814))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eba3d jne 0x100eba47 */
  if (!C.zf) goto L_100eba47;
  /* 100eba3f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 100eba41 call 0x100eb8ea */
  push32(0x100eba46u); f_100eb8ea();
  /* 100eba46 pop ecx */
  ECX = (pop32());
L_100eba47:;
  /* 100eba47 ret  */
  ESPCHK(0x100eba03u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba48 @ 0x100eba48 (520 bytes, 180 insns) */
void f_100eba48(void) {
  FTRACE(0x100eba48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eba48 push ebp */
  push32((uint32_t)(EBP));
  /* 100eba49 mov ebp, esp */
  EBP = (ESP);
  /* 100eba4b push ecx */
  push32((uint32_t)(ECX));
  /* 100eba4c push ecx */
  push32((uint32_t)(ECX));
  /* 100eba4d push ebx */
  push32((uint32_t)(EBX));
  /* 100eba4e push esi */
  push32((uint32_t)(ESI));
  /* 100eba4f mov esi, dword ptr [0x100f2e80] */
  ESI = (r32((uint32_t)(0x100f2e80)));
  /* 100eba55 push edi */
  push32((uint32_t)(EDI));
L_100eba56:;
  /* 100eba56 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 100eba59 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eba5c je 0x100ebb01 */
  if (C.zf) goto L_100ebb01;
  /* 100eba62 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 100eba65 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 100eba6b mov eax, edi */
  EAX = (EDI);
  /* 100eba6d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eba6f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eba72 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 100eba75 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 100eba78 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100eba7a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eba7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100eba7f jae 0x100ebabb */
  if (!C.cf) goto L_100ebabb;
L_100eba81:;
  /* 100eba81 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 100eba83 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100eba86 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eba88 jl 0x100ebaa4 */
  if ((C.sf!=C.of)) goto L_100ebaa4;
  /* 100eba8a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eba8d jbe 0x100ebaa4 */
  if ((C.cf||C.zf)) goto L_100ebaa4;
  /* 100eba8f push ebx */
  push32((uint32_t)(EBX));
  /* 100eba90 push ecx */
  push32((uint32_t)(ECX));
  /* 100eba91 push eax */
  push32((uint32_t)(EAX));
  /* 100eba92 call 0x100ebc50 */
  push32(0x100eba97u); f_100ebc50();
  /* 100eba97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100eba9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100eba9c jne 0x100ebb13 */
  if (!C.zf) goto L_100ebb13;
  /* 100eba9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ebaa1 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_100ebaa4:;
  /* 100ebaa4 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebaa7 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 100ebaad add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebab2 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebab4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100ebab7 jb 0x100eba81 */
  if (C.cf) goto L_100eba81;
  /* 100ebab9 jmp 0x100ebabe */
  goto L_100ebabe;
L_100ebabb:;
  /* 100ebabb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_100ebabe:;
  /* 100ebabe mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100ebac1 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 100ebac4 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 100ebac7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100ebaca cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebacc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 100ebacf jae 0x100ebb04 */
  if (!C.cf) goto L_100ebb04;
L_100ebad1:;
  /* 100ebad1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100ebad3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebad5 jl 0x100ebaf0 */
  if ((C.sf!=C.of)) goto L_100ebaf0;
  /* 100ebad7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebada jbe 0x100ebaf0 */
  if ((C.cf||C.zf)) goto L_100ebaf0;
  /* 100ebadc push ebx */
  push32((uint32_t)(EBX));
  /* 100ebadd push eax */
  push32((uint32_t)(EAX));
  /* 100ebade push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 100ebae1 call 0x100ebc50 */
  push32(0x100ebae6u); f_100ebc50();
  /* 100ebae6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ebaeb jne 0x100ebb13 */
  if (!C.zf) goto L_100ebb13;
  /* 100ebaed mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_100ebaf0:;
  /* 100ebaf0 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ebaf7 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebafa cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebafd jb 0x100ebad1 */
  if (C.cf) goto L_100ebad1;
  /* 100ebaff jmp 0x100ebb04 */
  goto L_100ebb04;
L_100ebb01:;
  /* 100ebb01 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_100ebb04:;
  /* 100ebb04 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 100ebb06 cmp esi, dword ptr [0x100f2e80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100f2e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebb0c je 0x100ebb23 */
  if (C.zf) goto L_100ebb23;
  /* 100ebb0e jmp 0x100eba56 */
  goto L_100eba56;
L_100ebb13:;
  /* 100ebb13 mov dword ptr [0x100f2e80], esi */
  w32((uint32_t)(0x100f2e80), (ESI));
  /* 100ebb19 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100ebb1b mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 100ebb1e jmp 0x100ebc4b */
  goto L_100ebc4b;
L_100ebb23:;
  /* 100ebb23 mov eax, 0x100f0e60 */
  EAX = (0x100f0e60u);
  /* 100ebb28 mov edi, eax */
  EDI = (EAX);
L_100ebb2a:;
  /* 100ebb2a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebb2e je 0x100ebb36 */
  if (C.zf) goto L_100ebb36;
  /* 100ebb30 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebb34 jne 0x100ebb42 */
  if (!C.zf) goto L_100ebb42;
L_100ebb36:;
  /* 100ebb36 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 100ebb38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebb3a je 0x100ebc17 */
  if (C.zf) goto L_100ebc17;
  /* 100ebb40 jmp 0x100ebb2a */
  goto L_100ebb2a;
L_100ebb42:;
  /* 100ebb42 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 100ebb45 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ebb49 mov esi, ebx */
  ESI = (EBX);
  /* 100ebb4b mov eax, ebx */
  EAX = (EBX);
  /* 100ebb4d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ebb4f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ebb52 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 100ebb55 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 100ebb58 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebb5b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebb5e jne 0x100ebb71 */
  if (!C.zf) goto L_100ebb71;
L_100ebb60:;
  /* 100ebb60 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebb64 jge 0x100ebb71 */
  if ((C.sf==C.of)) goto L_100ebb71;
  /* 100ebb66 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebb69 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100ebb6c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebb6f je 0x100ebb60 */
  if (C.zf) goto L_100ebb60;
L_100ebb71:;
  /* 100ebb71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ebb74 push 4 */
  push32((uint32_t)(0x4u));
  /* 100ebb76 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 100ebb79 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 100ebb7e push eax */
  push32((uint32_t)(EAX));
  /* 100ebb7f push esi */
  push32((uint32_t)(ESI));
  /* 100ebb80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100ebb83 call dword ptr [0x100ee0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0a8))), 0x100ebb89u);
  /* 100ebb89 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebb8b jne 0x100ebc49 */
  if (!C.zf) goto L_100ebc49;
  /* 100ebb91 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ebb93 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 100ebb96 push esi */
  push32((uint32_t)(ESI));
  /* 100ebb97 call 0x100e9be0 */
  push32(0x100ebb9cu); f_100e9be0();
  /* 100ebb9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ebb9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebba2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100ebba4 mov ecx, ebx */
  ECX = (EBX);
  /* 100ebba6 jle 0x100ebbd8 */
  if ((C.zf||C.sf!=C.of)) goto L_100ebbd8;
  /* 100ebba8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 100ebbab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_100ebbae:;
  /* 100ebbae or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 100ebbb5 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 100ebbb8 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 100ebbbb mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 100ebbc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 100ebbc2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 100ebbc4 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 100ebbcb add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebbd0 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebbd3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 100ebbd6 jne 0x100ebbae */
  if (!C.zf) goto L_100ebbae;
L_100ebbd8:;
  /* 100ebbd8 mov dword ptr [0x100f2e80], edi */
  w32((uint32_t)(0x100f2e80), (EDI));
  /* 100ebbde lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_100ebbe4:;
  /* 100ebbe4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebbe6 jae 0x100ebbf4 */
  if (!C.cf) goto L_100ebbf4;
  /* 100ebbe8 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebbeb je 0x100ebbf2 */
  if (C.zf) goto L_100ebbf2;
  /* 100ebbed add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebbf0 jmp 0x100ebbe4 */
  goto L_100ebbe4;
L_100ebbf2:;
  /* 100ebbf2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_100ebbf4:;
  /* 100ebbf4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ebbf6 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 100ebbf8 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 100ebbfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ebbfe mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 100ebc01 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 100ebc04 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100ebc06 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100ebc09 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 100ebc0d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 100ebc13 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 100ebc15 jmp 0x100ebc4b */
  goto L_100ebc4b;
L_100ebc17:;
  /* 100ebc17 call 0x100eb750 */
  push32(0x100ebc1cu); f_100eb750();
  /* 100ebc1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ebc1e je 0x100ebc49 */
  if (C.zf) goto L_100ebc49;
  /* 100ebc20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 100ebc23 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 100ebc26 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 100ebc2a mov dword ptr [0x100f2e80], eax */
  w32((uint32_t)(0x100f2e80), (EAX));
  /* 100ebc2f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 100ebc31 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 100ebc36 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ebc38 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 100ebc3b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 100ebc3e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100ebc41 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 100ebc47 jmp 0x100ebc4b */
  goto L_100ebc4b;
L_100ebc49:;
  /* 100ebc49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100ebc4b:;
  /* 100ebc4b pop edi */
  EDI = (pop32());
  /* 100ebc4c pop esi */
  ESI = (pop32());
  /* 100ebc4d pop ebx */
  EBX = (pop32());
  /* 100ebc4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ebc4f ret  */
  ESPCHK(0x100eba48u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc50 @ 0x100ebc50 (292 bytes, 125 insns) */
void f_100ebc50(void) {
  FTRACE(0x100ebc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ebc50 push ebp */
  push32((uint32_t)(EBP));
  /* 100ebc51 mov ebp, esp */
  EBP = (ESP);
  /* 100ebc53 push ecx */
  push32((uint32_t)(ECX));
  /* 100ebc54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ebc57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 100ebc5a push ebx */
  push32((uint32_t)(EBX));
  /* 100ebc5b push esi */
  push32((uint32_t)(ESI));
  /* 100ebc5c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 100ebc5f push edi */
  push32((uint32_t)(EDI));
  /* 100ebc60 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 100ebc62 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 100ebc68 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebc6a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 100ebc6d mov eax, edi */
  EAX = (EDI);
  /* 100ebc6f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100ebc72 jb 0x100ebc95 */
  if (C.cf) goto L_100ebc95;
  /* 100ebc74 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 100ebc77 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 100ebc79 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebc7b jae 0x100ebc84 */
  if (!C.cf) goto L_100ebc84;
  /* 100ebc7d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ebc7f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100ebc82 jmp 0x100ebc8d */
  goto L_100ebc8d;
L_100ebc84:;
  /* 100ebc84 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100ebc88 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 100ebc8b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_100ebc8d:;
  /* 100ebc8d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 100ebc90 jmp 0x100ebd63 */
  goto L_100ebd63;
L_100ebc95:;
  /* 100ebc95 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebc97 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ebc9a je 0x100ebc9e */
  if (C.zf) goto L_100ebc9e;
  /* 100ebc9c mov eax, esi */
  EAX = (ESI);
L_100ebc9e:;
  /* 100ebc9e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 100ebca1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebca3 jae 0x100ebce8 */
  if (!C.cf) goto L_100ebce8;
L_100ebca5:;
  /* 100ebca5 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 100ebca7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 100ebca9 jne 0x100ebcdb */
  if (!C.zf) goto L_100ebcdb;
  /* 100ebcab push 1 */
  push32((uint32_t)(0x1u));
  /* 100ebcad lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 100ebcb0 pop esi */
  ESI = (pop32());
L_100ebcb1:;
  /* 100ebcb1 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ebcb4 jne 0x100ebcba */
  if (!C.zf) goto L_100ebcba;
  /* 100ebcb6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100ebcb7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ebcb8 jmp 0x100ebcb1 */
  goto L_100ebcb1;
L_100ebcba:;
  /* 100ebcba cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebcbc jae 0x100ebd0c */
  if (!C.cf) goto L_100ebd0c;
  /* 100ebcbe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebcc1 jne 0x100ebcc8 */
  if (!C.zf) goto L_100ebcc8;
  /* 100ebcc3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 100ebcc6 jmp 0x100ebcd4 */
  goto L_100ebcd4;
L_100ebcc8:;
  /* 100ebcc8 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100ebccb cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebcce jb 0x100ebd6d */
  if (C.cf) goto L_100ebd6d;
L_100ebcd4:;
  /* 100ebcd4 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 100ebcd7 mov eax, ebx */
  EAX = (EBX);
  /* 100ebcd9 jmp 0x100ebce0 */
  goto L_100ebce0;
L_100ebcdb:;
  /* 100ebcdb movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 100ebcde add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100ebce0:;
  /* 100ebce0 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 100ebce3 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebce6 jb 0x100ebca5 */
  if (C.cf) goto L_100ebca5;
L_100ebce8:;
  /* 100ebce8 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_100ebceb:;
  /* 100ebceb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebced jae 0x100ebd6d */
  if (!C.cf) goto L_100ebd6d;
  /* 100ebcef lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 100ebcf2 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebcf5 jae 0x100ebd6d */
  if (!C.cf) goto L_100ebd6d;
  /* 100ebcf7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ebcf9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100ebcfb jne 0x100ebd3d */
  if (!C.zf) goto L_100ebd3d;
  /* 100ebcfd push 1 */
  push32((uint32_t)(0x1u));
  /* 100ebcff lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 100ebd02 pop eax */
  EAX = (pop32());
L_100ebd03:;
  /* 100ebd03 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ebd06 jne 0x100ebd2d */
  if (!C.zf) goto L_100ebd2d;
  /* 100ebd08 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100ebd09 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ebd0a jmp 0x100ebd03 */
  goto L_100ebd03;
L_100ebd0c:;
  /* 100ebd0c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 100ebd0f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebd12 jae 0x100ebd1d */
  if (!C.cf) goto L_100ebd1d;
  /* 100ebd14 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ebd16 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 100ebd18 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 100ebd1b jmp 0x100ebd26 */
  goto L_100ebd26;
L_100ebd1d:;
  /* 100ebd1d and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100ebd21 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 100ebd24 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_100ebd26:;
  /* 100ebd26 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 100ebd28 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebd2b jmp 0x100ebd63 */
  goto L_100ebd63;
L_100ebd2d:;
  /* 100ebd2d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebd2f jae 0x100ebd44 */
  if (!C.cf) goto L_100ebd44;
  /* 100ebd31 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100ebd34 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebd37 jb 0x100ebd6d */
  if (C.cf) goto L_100ebd6d;
  /* 100ebd39 mov esi, ebx */
  ESI = (EBX);
  /* 100ebd3b jmp 0x100ebceb */
  goto L_100ebceb;
L_100ebd3d:;
  /* 100ebd3d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 100ebd40 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebd42 jmp 0x100ebceb */
  goto L_100ebceb;
L_100ebd44:;
  /* 100ebd44 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 100ebd47 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebd4a jae 0x100ebd55 */
  if (!C.cf) goto L_100ebd55;
  /* 100ebd4c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ebd4e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 100ebd50 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 100ebd53 jmp 0x100ebd5e */
  goto L_100ebd5e;
L_100ebd55:;
  /* 100ebd55 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 100ebd59 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 100ebd5c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_100ebd5e:;
  /* 100ebd5e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 100ebd60 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_100ebd63:;
  /* 100ebd63 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100ebd66 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 100ebd69 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ebd6b jmp 0x100ebd6f */
  goto L_100ebd6f;
L_100ebd6d:;
  /* 100ebd6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100ebd6f:;
  /* 100ebd6f pop edi */
  EDI = (pop32());
  /* 100ebd70 pop esi */
  ESI = (pop32());
  /* 100ebd71 pop ebx */
  EBX = (pop32());
  /* 100ebd72 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ebd73 ret  */
  ESPCHK(0x100ebc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd74 @ 0x100ebd74 (137 bytes, 50 insns) */
void f_100ebd74(void) {
  FTRACE(0x100ebd74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ebd74 push ebx */
  push32((uint32_t)(EBX));
  /* 100ebd75 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ebd77 cmp dword ptr [0x100f6818], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100f6818))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebd7d push esi */
  push32((uint32_t)(ESI));
  /* 100ebd7e push edi */
  push32((uint32_t)(EDI));
  /* 100ebd7f jne 0x100ebdc3 */
  if (!C.zf) goto L_100ebdc3;
  /* 100ebd81 push 0x100ee548 */
  push32((uint32_t)(0x100ee548u));
  /* 100ebd86 call dword ptr [0x100ee0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0b0))), 0x100ebd8cu);
  /* 100ebd8c mov edi, eax */
  EDI = (EAX);
  /* 100ebd8e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebd90 je 0x100ebdf9 */
  if (C.zf) goto L_100ebdf9;
  /* 100ebd92 mov esi, dword ptr [0x100ee088] */
  ESI = (r32((uint32_t)(0x100ee088)));
  /* 100ebd98 push 0x100ee53c */
  push32((uint32_t)(0x100ee53cu));
  /* 100ebd9d push edi */
  push32((uint32_t)(EDI));
  /* 100ebd9e call esi */
  call_ind((uint32_t)(ESI), 0x100ebda0u);
  /* 100ebda0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ebda2 mov dword ptr [0x100f6818], eax */
  w32((uint32_t)(0x100f6818), (EAX));
  /* 100ebda7 je 0x100ebdf9 */
  if (C.zf) goto L_100ebdf9;
  /* 100ebda9 push 0x100ee52c */
  push32((uint32_t)(0x100ee52cu));
  /* 100ebdae push edi */
  push32((uint32_t)(EDI));
  /* 100ebdaf call esi */
  call_ind((uint32_t)(ESI), 0x100ebdb1u);
  /* 100ebdb1 push 0x100ee518 */
  push32((uint32_t)(0x100ee518u));
  /* 100ebdb6 push edi */
  push32((uint32_t)(EDI));
  /* 100ebdb7 mov dword ptr [0x100f681c], eax */
  w32((uint32_t)(0x100f681c), (EAX));
  /* 100ebdbc call esi */
  call_ind((uint32_t)(ESI), 0x100ebdbeu);
  /* 100ebdbe mov dword ptr [0x100f6820], eax */
  w32((uint32_t)(0x100f6820), (EAX));
L_100ebdc3:;
  /* 100ebdc3 mov eax, dword ptr [0x100f681c] */
  EAX = (r32((uint32_t)(0x100f681c)));
  /* 100ebdc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ebdca je 0x100ebde2 */
  if (C.zf) goto L_100ebde2;
  /* 100ebdcc call eax */
  call_ind((uint32_t)(EAX), 0x100ebdceu);
  /* 100ebdce mov ebx, eax */
  EBX = (EAX);
  /* 100ebdd0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100ebdd2 je 0x100ebde2 */
  if (C.zf) goto L_100ebde2;
  /* 100ebdd4 mov eax, dword ptr [0x100f6820] */
  EAX = (r32((uint32_t)(0x100f6820)));
  /* 100ebdd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ebddb je 0x100ebde2 */
  if (C.zf) goto L_100ebde2;
  /* 100ebddd push ebx */
  push32((uint32_t)(EBX));
  /* 100ebdde call eax */
  call_ind((uint32_t)(EAX), 0x100ebde0u);
  /* 100ebde0 mov ebx, eax */
  EBX = (EAX);
L_100ebde2:;
  /* 100ebde2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100ebde6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100ebdea push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 100ebdee push ebx */
  push32((uint32_t)(EBX));
  /* 100ebdef call dword ptr [0x100f6818] */
  call_ind((uint32_t)(r32((uint32_t)(0x100f6818))), 0x100ebdf5u);
L_100ebdf5:;
  /* 100ebdf5 pop edi */
  EDI = (pop32());
  /* 100ebdf6 pop esi */
  ESI = (pop32());
  /* 100ebdf7 pop ebx */
  EBX = (pop32());
  /* 100ebdf8 ret  */
  ESPCHK(0x100ebd74u, _esp0);
  ESP += 4; return;
L_100ebdf9:;
  /* 100ebdf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ebdfb jmp 0x100ebdf5 */
  goto L_100ebdf5;
}

/* _strncpy @ 0x100ebe00 (254 bytes, 109 insns) */
void f_100ebe00(void) {
  FTRACE(0x100ebe00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ebe00 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 100ebe04 push edi */
  push32((uint32_t)(EDI));
  /* 100ebe05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100ebe07 je 0x100ebe83 */
  if (C.zf) goto L_100ebe83;
  /* 100ebe09 push esi */
  push32((uint32_t)(ESI));
  /* 100ebe0a push ebx */
  push32((uint32_t)(EBX));
  /* 100ebe0b mov ebx, ecx */
  EBX = (ECX);
  /* 100ebe0d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 100ebe11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 100ebe17 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 100ebe1b jne 0x100ebe24 */
  if (!C.zf) goto L_100ebe24;
  /* 100ebe1d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ebe20 jne 0x100ebe91 */
  if (!C.zf) goto L_100ebe91;
  /* 100ebe22 jmp 0x100ebe45 */
  goto L_100ebe45;
L_100ebe24:;
  /* 100ebe24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ebe26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ebe27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ebe29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ebe2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100ebe2b je 0x100ebe52 */
  if (C.zf) goto L_100ebe52;
  /* 100ebe2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100ebe2f je 0x100ebe5a */
  if (C.zf) goto L_100ebe5a;
  /* 100ebe31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 100ebe37 jne 0x100ebe24 */
  if (!C.zf) goto L_100ebe24;
  /* 100ebe39 mov ebx, ecx */
  EBX = (ECX);
  /* 100ebe3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ebe3e jne 0x100ebe91 */
  if (!C.zf) goto L_100ebe91;
L_100ebe40:;
  /* 100ebe40 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 100ebe43 je 0x100ebe52 */
  if (C.zf) goto L_100ebe52;
L_100ebe45:;
  /* 100ebe45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ebe47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ebe48 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ebe4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ebe4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 100ebe4d je 0x100ebe7e */
  if (C.zf) goto L_100ebe7e;
  /* 100ebe4f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100ebe50 jne 0x100ebe45 */
  if (!C.zf) goto L_100ebe45;
L_100ebe52:;
  /* 100ebe52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100ebe56 pop ebx */
  EBX = (pop32());
  /* 100ebe57 pop esi */
  ESI = (pop32());
  /* 100ebe58 pop edi */
  EDI = (pop32());
  /* 100ebe59 ret  */
  ESPCHK(0x100ebe00u, _esp0);
  ESP += 4; return;
L_100ebe5a:;
  /* 100ebe5a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100ebe60 je 0x100ebe74 */
  if (C.zf) goto L_100ebe74;
L_100ebe62:;
  /* 100ebe62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ebe64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ebe65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100ebe66 je 0x100ebef6 */
  if (C.zf) goto L_100ebef6;
  /* 100ebe6c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 100ebe72 jne 0x100ebe62 */
  if (!C.zf) goto L_100ebe62;
L_100ebe74:;
  /* 100ebe74 mov ebx, ecx */
  EBX = (ECX);
  /* 100ebe76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 100ebe79 jne 0x100ebee7 */
  if (!C.zf) goto L_100ebee7;
L_100ebe7b:;
  /* 100ebe7b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 100ebe7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_100ebe7e:;
  /* 100ebe7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100ebe7f jne 0x100ebe7b */
  if (!C.zf) goto L_100ebe7b;
  /* 100ebe81 pop ebx */
  EBX = (pop32());
  /* 100ebe82 pop esi */
  ESI = (pop32());
L_100ebe83:;
  /* 100ebe83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100ebe87 pop edi */
  EDI = (pop32());
  /* 100ebe88 ret  */
  ESPCHK(0x100ebe00u, _esp0);
  ESP += 4; return;
L_100ebe89:;
  /* 100ebe89 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100ebe8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebe8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100ebe8f je 0x100ebe40 */
  if (C.zf) goto L_100ebe40;
L_100ebe91:;
  /* 100ebe91 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 100ebe96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 100ebe98 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebe9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100ebe9d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100ebe9f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 100ebea1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebea4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 100ebea9 je 0x100ebe89 */
  if (C.zf) goto L_100ebe89;
  /* 100ebeab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100ebead je 0x100ebedb */
  if (C.zf) goto L_100ebedb;
  /* 100ebeaf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 100ebeb1 je 0x100ebed1 */
  if (C.zf) goto L_100ebed1;
  /* 100ebeb3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 100ebeb9 je 0x100ebec7 */
  if (C.zf) goto L_100ebec7;
  /* 100ebebb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 100ebec1 jne 0x100ebe89 */
  if (!C.zf) goto L_100ebe89;
  /* 100ebec3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100ebec5 jmp 0x100ebedf */
  goto L_100ebedf;
L_100ebec7:;
  /* 100ebec7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 100ebecd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100ebecf jmp 0x100ebedf */
  goto L_100ebedf;
L_100ebed1:;
  /* 100ebed1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 100ebed7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 100ebed9 jmp 0x100ebedf */
  goto L_100ebedf;
L_100ebedb:;
  /* 100ebedb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ebedd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_100ebedf:;
  /* 100ebedf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebee2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ebee4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100ebee5 je 0x100ebef1 */
  if (C.zf) goto L_100ebef1;
L_100ebee7:;
  /* 100ebee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100ebee9:;
  /* 100ebee9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 100ebeeb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebeee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100ebeef jne 0x100ebee9 */
  if (!C.zf) goto L_100ebee9;
L_100ebef1:;
  /* 100ebef1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 100ebef4 jne 0x100ebe7b */
  if (!C.zf) goto L_100ebe7b;
L_100ebef6:;
  /* 100ebef6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100ebefa pop ebx */
  EBX = (pop32());
  /* 100ebefb pop esi */
  ESI = (pop32());
  /* 100ebefc pop edi */
  EDI = (pop32());
  /* 100ebefd ret  */
  ESPCHK(0x100ebe00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000befe @ 0x100ebefe (115 bytes, 37 insns) */
void f_100ebefe(void) {
  FTRACE(0x100ebefeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ebefe push esi */
  push32((uint32_t)(ESI));
  /* 100ebeff call 0x100ebf7a */
  push32(0x100ebf04u); f_100ebf7a();
  /* 100ebf04 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100ebf08 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100ebf0a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100ebf0c mov eax, 0x100f2e90 */
  EAX = (0x100f2e90u);
L_100ebf11:;
  /* 100ebf11 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebf13 je 0x100ebf37 */
  if (C.zf) goto L_100ebf37;
  /* 100ebf15 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebf18 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ebf19 cmp eax, 0x100f2ff8 */
  { uint32_t _a=(EAX),_b=(0x100f2ff8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebf1e jl 0x100ebf11 */
  if ((C.sf!=C.of)) goto L_100ebf11;
  /* 100ebf20 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebf23 jb 0x100ebf47 */
  if (C.cf) goto L_100ebf47;
  /* 100ebf25 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebf28 ja 0x100ebf47 */
  if ((!C.cf&&!C.zf)) goto L_100ebf47;
  /* 100ebf2a call 0x100ebf71 */
  push32(0x100ebf2fu); f_100ebf71();
  /* 100ebf2f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 100ebf35 pop esi */
  ESI = (pop32());
  /* 100ebf36 ret  */
  ESPCHK(0x100ebefeu, _esp0);
  ESP += 4; return;
L_100ebf37:;
  /* 100ebf37 call 0x100ebf71 */
  push32(0x100ebf3cu); f_100ebf71();
  /* 100ebf3c mov ecx, dword ptr [esi*8 + 0x100f2e94] */
  ECX = (r32((uint32_t)(ESI*8 + 0x100f2e94)));
  /* 100ebf43 pop esi */
  ESI = (pop32());
  /* 100ebf44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100ebf46 ret  */
  ESPCHK(0x100ebefeu, _esp0);
  ESP += 4; return;
L_100ebf47:;
  /* 100ebf47 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebf4d jb 0x100ebf64 */
  if (C.cf) goto L_100ebf64;
  /* 100ebf4f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebf55 ja 0x100ebf64 */
  if ((!C.cf&&!C.zf)) goto L_100ebf64;
  /* 100ebf57 call 0x100ebf71 */
  push32(0x100ebf5cu); f_100ebf71();
  /* 100ebf5c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 100ebf62 pop esi */
  ESI = (pop32());
  /* 100ebf63 ret  */
  ESPCHK(0x100ebefeu, _esp0);
  ESP += 4; return;
L_100ebf64:;
  /* 100ebf64 call 0x100ebf71 */
  push32(0x100ebf69u); f_100ebf71();
  /* 100ebf69 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 100ebf6f pop esi */
  ESI = (pop32());
  /* 100ebf70 ret  */
  ESPCHK(0x100ebefeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf71 @ 0x100ebf71 (9 bytes, 3 insns) */
void f_100ebf71(void) {
  FTRACE(0x100ebf71u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ebf71 call 0x100e8048 */
  push32(0x100ebf76u); f_100e8048();
  /* 100ebf76 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebf79 ret  */
  ESPCHK(0x100ebf71u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf7a @ 0x100ebf7a (9 bytes, 3 insns) */
void f_100ebf7a(void) {
  FTRACE(0x100ebf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ebf7a call 0x100e8048 */
  push32(0x100ebf7fu); f_100e8048();
  /* 100ebf7f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebf82 ret  */
  ESPCHK(0x100ebf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf83 @ 0x100ebf83 (127 bytes, 48 insns) */
void f_100ebf83(void) {
  FTRACE(0x100ebf83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ebf83 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ebf87 push esi */
  push32((uint32_t)(ESI));
  /* 100ebf88 cmp ecx, dword ptr [0x100f7d40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x100f7d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebf8e push edi */
  push32((uint32_t)(EDI));
  /* 100ebf8f jae 0x100ebfe9 */
  if (!C.cf) goto L_100ebfe9;
  /* 100ebf91 mov eax, ecx */
  EAX = (ECX);
  /* 100ebf93 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100ebf96 lea edi, [eax*4 + 0x100f7c40] */
  EDI = ((uint32_t)(EAX*4 + 0x100f7c40));
  /* 100ebf9d mov eax, ecx */
  EAX = (ECX);
  /* 100ebf9f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100ebfa2 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 100ebfa5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100ebfa7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100ebfaa add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ebfac test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100ebfb0 je 0x100ebfe9 */
  if (C.zf) goto L_100ebfe9;
  /* 100ebfb2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebfb5 je 0x100ebfe9 */
  if (C.zf) goto L_100ebfe9;
  /* 100ebfb7 cmp dword ptr [0x100f6654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100f6654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ebfbe jne 0x100ebfdf */
  if (!C.zf) goto L_100ebfdf;
  /* 100ebfc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ebfc2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ebfc4 je 0x100ebfd6 */
  if (C.zf) goto L_100ebfd6;
  /* 100ebfc6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100ebfc7 je 0x100ebfd1 */
  if (C.zf) goto L_100ebfd1;
  /* 100ebfc9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100ebfca jne 0x100ebfdf */
  if (!C.zf) goto L_100ebfdf;
  /* 100ebfcc push eax */
  push32((uint32_t)(EAX));
  /* 100ebfcd push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 100ebfcf jmp 0x100ebfd9 */
  goto L_100ebfd9;
L_100ebfd1:;
  /* 100ebfd1 push eax */
  push32((uint32_t)(EAX));
  /* 100ebfd2 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 100ebfd4 jmp 0x100ebfd9 */
  goto L_100ebfd9;
L_100ebfd6:;
  /* 100ebfd6 push eax */
  push32((uint32_t)(EAX));
  /* 100ebfd7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_100ebfd9:;
  /* 100ebfd9 call dword ptr [0x100ee0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0b4))), 0x100ebfdfu);
L_100ebfdf:;
  /* 100ebfdf mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100ebfe1 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 100ebfe5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ebfe7 jmp 0x100ebfff */
  goto L_100ebfff;
L_100ebfe9:;
  /* 100ebfe9 call 0x100ebf71 */
  push32(0x100ebfeeu); f_100ebf71();
  /* 100ebfee mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100ebff4 call 0x100ebf7a */
  push32(0x100ebff9u); f_100ebf7a();
  /* 100ebff9 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100ebffc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100ebfff:;
  /* 100ebfff pop edi */
  EDI = (pop32());
  /* 100ec000 pop esi */
  ESI = (pop32());
  /* 100ec001 ret  */
  ESPCHK(0x100ebf83u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c002 @ 0x100ec002 (66 bytes, 19 insns) */
void f_100ec002(void) {
  FTRACE(0x100ec002u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ec002 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ec006 cmp eax, dword ptr [0x100f7d40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x100f7d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec00c jae 0x100ec02d */
  if (!C.cf) goto L_100ec02d;
  /* 100ec00e mov ecx, eax */
  ECX = (EAX);
  /* 100ec010 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100ec013 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100ec016 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100ec019 mov ecx, dword ptr [ecx*4 + 0x100f7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100f7c40)));
  /* 100ec020 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100ec025 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 100ec028 je 0x100ec02d */
  if (C.zf) goto L_100ec02d;
  /* 100ec02a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 100ec02c ret  */
  ESPCHK(0x100ec002u, _esp0);
  ESP += 4; return;
L_100ec02d:;
  /* 100ec02d call 0x100ebf71 */
  push32(0x100ec032u); f_100ebf71();
  /* 100ec032 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100ec038 call 0x100ebf7a */
  push32(0x100ec03du); f_100ebf7a();
  /* 100ec03d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100ec040 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100ec043 ret  */
  ESPCHK(0x100ec002u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c044 @ 0x100ec044 (95 bytes, 34 insns) */
void f_100ec044(void) {
  FTRACE(0x100ec044u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ec044 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ec048 push ebx */
  push32((uint32_t)(EBX));
  /* 100ec049 mov ecx, eax */
  ECX = (EAX);
  /* 100ec04b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100ec04e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100ec051 push esi */
  push32((uint32_t)(ESI));
  /* 100ec052 push edi */
  push32((uint32_t)(EDI));
  /* 100ec053 mov esi, dword ptr [ecx*4 + 0x100f7c40] */
  ESI = (r32((uint32_t)(ECX*4 + 0x100f7c40)));
  /* 100ec05a lea ebx, [ecx*4 + 0x100f7c40] */
  EBX = ((uint32_t)(ECX*4 + 0x100f7c40));
  /* 100ec061 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 100ec064 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 100ec067 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ec069 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec06d jne 0x100ec092 */
  if (!C.zf) goto L_100ec092;
  /* 100ec06f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100ec071 call 0x100ea013 */
  push32(0x100ec076u); f_100ea013();
  /* 100ec076 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec07a pop ecx */
  ECX = (pop32());
  /* 100ec07b jne 0x100ec08a */
  if (!C.zf) goto L_100ec08a;
  /* 100ec07d lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 100ec080 push eax */
  push32((uint32_t)(EAX));
  /* 100ec081 call dword ptr [0x100ee094] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee094))), 0x100ec087u);
  /* 100ec087 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_100ec08a:;
  /* 100ec08a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 100ec08c call 0x100ea074 */
  push32(0x100ec091u); f_100ea074();
  /* 100ec091 pop ecx */
  ECX = (pop32());
L_100ec092:;
  /* 100ec092 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100ec094 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 100ec098 push eax */
  push32((uint32_t)(EAX));
  /* 100ec099 call dword ptr [0x100ee00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee00c))), 0x100ec09fu);
  /* 100ec09f pop edi */
  EDI = (pop32());
  /* 100ec0a0 pop esi */
  ESI = (pop32());
  /* 100ec0a1 pop ebx */
  EBX = (pop32());
  /* 100ec0a2 ret  */
  ESPCHK(0x100ec044u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a3 @ 0x100ec0a3 (34 bytes, 10 insns) */
void f_100ec0a3(void) {
  FTRACE(0x100ec0a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ec0a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ec0a7 mov ecx, eax */
  ECX = (EAX);
  /* 100ec0a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100ec0ac sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100ec0af lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100ec0b2 mov ecx, dword ptr [ecx*4 + 0x100f7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100f7c40)));
  /* 100ec0b9 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 100ec0bd push eax */
  push32((uint32_t)(EAX));
  /* 100ec0be call dword ptr [0x100ee008] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee008))), 0x100ec0c4u);
  /* 100ec0c4 ret  */
  ESPCHK(0x100ec0a3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c146 @ 0x100ec146 (46 bytes, 22 insns) */
void f_100ec146(void) {
  FTRACE(0x100ec146u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ec146 push esi */
  push32((uint32_t)(ESI));
  /* 100ec147 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100ec14b push esi */
  push32((uint32_t)(ESI));
  /* 100ec14c call 0x100ec174 */
  push32(0x100ec151u); f_100ec174();
  /* 100ec151 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ec153 pop ecx */
  ECX = (pop32());
  /* 100ec154 je 0x100ec15b */
  if (C.zf) goto L_100ec15b;
  /* 100ec156 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100ec159 pop esi */
  ESI = (pop32());
  /* 100ec15a ret  */
  ESPCHK(0x100ec146u, _esp0);
  ESP += 4; return;
L_100ec15b:;
  /* 100ec15b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 100ec15f je 0x100ec170 */
  if (C.zf) goto L_100ec170;
  /* 100ec161 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100ec164 call 0x100ed2c0 */
  push32(0x100ec169u); f_100ed2c0();
  /* 100ec169 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ec16b pop ecx */
  ECX = (pop32());
  /* 100ec16c pop esi */
  ESI = (pop32());
  /* 100ec16d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ec16f ret  */
  ESPCHK(0x100ec146u, _esp0);
  ESP += 4; return;
L_100ec170:;
  /* 100ec170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ec172 pop esi */
  ESI = (pop32());
  /* 100ec173 ret  */
  ESPCHK(0x100ec146u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c174 @ 0x100ec174 (92 bytes, 40 insns) */
void f_100ec174(void) {
  FTRACE(0x100ec174u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ec174 push ebx */
  push32((uint32_t)(EBX));
  /* 100ec175 push esi */
  push32((uint32_t)(ESI));
  /* 100ec176 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 100ec17a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ec17c push edi */
  push32((uint32_t)(EDI));
  /* 100ec17d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100ec180 mov ecx, eax */
  ECX = (EAX);
  /* 100ec182 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 100ec185 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec188 jne 0x100ec1c1 */
  if (!C.zf) goto L_100ec1c1;
  /* 100ec18a test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 100ec18e je 0x100ec1c1 */
  if (C.zf) goto L_100ec1c1;
  /* 100ec190 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100ec193 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 100ec195 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ec197 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100ec199 jle 0x100ec1c1 */
  if ((C.zf||C.sf!=C.of)) goto L_100ec1c1;
  /* 100ec19b push edi */
  push32((uint32_t)(EDI));
  /* 100ec19c push eax */
  push32((uint32_t)(EAX));
  /* 100ec19d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100ec1a0 call 0x100e8c75 */
  push32(0x100ec1a5u); f_100e8c75();
  /* 100ec1a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ec1a8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec1aa jne 0x100ec1ba */
  if (!C.zf) goto L_100ec1ba;
  /* 100ec1ac mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100ec1af test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 100ec1b1 je 0x100ec1c1 */
  if (C.zf) goto L_100ec1c1;
  /* 100ec1b3 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 100ec1b5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 100ec1b8 jmp 0x100ec1c1 */
  goto L_100ec1c1;
L_100ec1ba:;
  /* 100ec1ba or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100ec1be or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_100ec1c1:;
  /* 100ec1c1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 100ec1c4 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100ec1c8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100ec1ca pop edi */
  EDI = (pop32());
  /* 100ec1cb mov eax, ebx */
  EAX = (EBX);
  /* 100ec1cd pop esi */
  ESI = (pop32());
  /* 100ec1ce pop ebx */
  EBX = (pop32());
  /* 100ec1cf ret  */
  ESPCHK(0x100ec174u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1d9 @ 0x100ec1d9 (164 bytes, 66 insns) */
void f_100ec1d9(void) {
  FTRACE(0x100ec1d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ec1d9 push ebx */
  push32((uint32_t)(EBX));
  /* 100ec1da push esi */
  push32((uint32_t)(ESI));
  /* 100ec1db push edi */
  push32((uint32_t)(EDI));
  /* 100ec1dc push 2 */
  push32((uint32_t)(0x2u));
  /* 100ec1de xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ec1e0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100ec1e2 call 0x100ea013 */
  push32(0x100ec1e7u); f_100ea013();
  /* 100ec1e7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100ec1e9 pop ecx */
  ECX = (pop32());
  /* 100ec1ea cmp dword ptr [0x100f7c20], esi */
  { uint32_t _a=(r32((uint32_t)(0x100f7c20))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec1f0 jle 0x100ec266 */
  if ((C.zf||C.sf!=C.of)) goto L_100ec266;
L_100ec1f2:;
  /* 100ec1f2 mov eax, dword ptr [0x100f6c08] */
  EAX = (r32((uint32_t)(0x100f6c08)));
  /* 100ec1f7 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 100ec1fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ec1fc je 0x100ec25d */
  if (C.zf) goto L_100ec25d;
  /* 100ec1fe test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 100ec202 je 0x100ec25d */
  if (C.zf) goto L_100ec25d;
  /* 100ec204 push eax */
  push32((uint32_t)(EAX));
  /* 100ec205 push esi */
  push32((uint32_t)(ESI));
  /* 100ec206 call 0x100e8fbd */
  push32(0x100ec20bu); f_100e8fbd();
  /* 100ec20b mov eax, dword ptr [0x100f6c08] */
  EAX = (r32((uint32_t)(0x100f6c08)));
  /* 100ec210 pop ecx */
  ECX = (pop32());
  /* 100ec211 pop ecx */
  ECX = (pop32());
  /* 100ec212 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 100ec215 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 100ec218 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 100ec21b je 0x100ec24d */
  if (C.zf) goto L_100ec24d;
  /* 100ec21d cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec222 jne 0x100ec233 */
  if (!C.zf) goto L_100ec233;
  /* 100ec224 push eax */
  push32((uint32_t)(EAX));
  /* 100ec225 call 0x100ec146 */
  push32(0x100ec22au); f_100ec146();
  /* 100ec22a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec22d pop ecx */
  ECX = (pop32());
  /* 100ec22e je 0x100ec24d */
  if (C.zf) goto L_100ec24d;
  /* 100ec230 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 100ec231 jmp 0x100ec24d */
  goto L_100ec24d;
L_100ec233:;
  /* 100ec233 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec238 jne 0x100ec24d */
  if (!C.zf) goto L_100ec24d;
  /* 100ec23a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 100ec23d je 0x100ec24d */
  if (C.zf) goto L_100ec24d;
  /* 100ec23f push eax */
  push32((uint32_t)(EAX));
  /* 100ec240 call 0x100ec146 */
  push32(0x100ec245u); f_100ec146();
  /* 100ec245 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec248 pop ecx */
  ECX = (pop32());
  /* 100ec249 jne 0x100ec24d */
  if (!C.zf) goto L_100ec24d;
  /* 100ec24b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_100ec24d:;
  /* 100ec24d mov eax, dword ptr [0x100f6c08] */
  EAX = (r32((uint32_t)(0x100f6c08)));
  /* 100ec252 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 100ec255 push esi */
  push32((uint32_t)(ESI));
  /* 100ec256 call 0x100e900f */
  push32(0x100ec25bu); f_100e900f();
  /* 100ec25b pop ecx */
  ECX = (pop32());
  /* 100ec25c pop ecx */
  ECX = (pop32());
L_100ec25d:;
  /* 100ec25d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ec25e cmp esi, dword ptr [0x100f7c20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100f7c20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec264 jl 0x100ec1f2 */
  if ((C.sf!=C.of)) goto L_100ec1f2;
L_100ec266:;
  /* 100ec266 push 2 */
  push32((uint32_t)(0x2u));
  /* 100ec268 call 0x100ea074 */
  push32(0x100ec26du); f_100ea074();
  /* 100ec26d cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec272 pop ecx */
  ECX = (pop32());
  /* 100ec273 mov eax, ebx */
  EAX = (EBX);
  /* 100ec275 je 0x100ec279 */
  if (C.zf) goto L_100ec279;
  /* 100ec277 mov eax, edi */
  EAX = (EDI);
L_100ec279:;
  /* 100ec279 pop edi */
  EDI = (pop32());
  /* 100ec27a pop esi */
  ESI = (pop32());
  /* 100ec27b pop ebx */
  EBX = (pop32());
  /* 100ec27c ret  */
  ESPCHK(0x100ec1d9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c27d @ 0x100ec27d (318 bytes, 123 insns) */
void f_100ec27d(void) {
  FTRACE(0x100ec27du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ec27d push ebp */
  push32((uint32_t)(EBP));
  /* 100ec27e mov ebp, esp */
  EBP = (ESP);
  /* 100ec280 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100ec282 push 0x100ee560 */
  push32((uint32_t)(0x100ee560u));
  /* 100ec287 push 0x100ed030 */
  push32((uint32_t)(0x100ed030u));
  /* 100ec28c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100ec292 push eax */
  push32((uint32_t)(EAX));
  /* 100ec293 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100ec29a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ec29d push ebx */
  push32((uint32_t)(EBX));
  /* 100ec29e push esi */
  push32((uint32_t)(ESI));
  /* 100ec29f push edi */
  push32((uint32_t)(EDI));
  /* 100ec2a0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100ec2a3 mov eax, dword ptr [0x100f6864] */
  EAX = (r32((uint32_t)(0x100f6864)));
  /* 100ec2a8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ec2aa cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec2ac jne 0x100ec2ec */
  if (!C.zf) goto L_100ec2ec;
  /* 100ec2ae lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 100ec2b1 push eax */
  push32((uint32_t)(EAX));
  /* 100ec2b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ec2b4 pop esi */
  ESI = (pop32());
  /* 100ec2b5 push esi */
  push32((uint32_t)(ESI));
  /* 100ec2b6 push 0x100ee558 */
  push32((uint32_t)(0x100ee558u));
  /* 100ec2bb push esi */
  push32((uint32_t)(ESI));
  /* 100ec2bc call dword ptr [0x100ee0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0c0))), 0x100ec2c2u);
  /* 100ec2c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ec2c4 je 0x100ec2ca */
  if (C.zf) goto L_100ec2ca;
  /* 100ec2c6 mov eax, esi */
  EAX = (ESI);
  /* 100ec2c8 jmp 0x100ec2e7 */
  goto L_100ec2e7;
L_100ec2ca:;
  /* 100ec2ca lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 100ec2cd push eax */
  push32((uint32_t)(EAX));
  /* 100ec2ce push esi */
  push32((uint32_t)(ESI));
  /* 100ec2cf push 0x100ee554 */
  push32((uint32_t)(0x100ee554u));
  /* 100ec2d4 push esi */
  push32((uint32_t)(ESI));
  /* 100ec2d5 push ebx */
  push32((uint32_t)(EBX));
  /* 100ec2d6 call dword ptr [0x100ee0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0bc))), 0x100ec2dcu);
  /* 100ec2dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ec2de je 0x100ec3b2 */
  if (C.zf) goto L_100ec3b2;
  /* 100ec2e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100ec2e6 pop eax */
  EAX = (pop32());
L_100ec2e7:;
  /* 100ec2e7 mov dword ptr [0x100f6864], eax */
  w32((uint32_t)(0x100f6864), (EAX));
L_100ec2ec:;
  /* 100ec2ec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec2ef jne 0x100ec315 */
  if (!C.zf) goto L_100ec315;
  /* 100ec2f1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 100ec2f4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec2f6 jne 0x100ec2fd */
  if (!C.zf) goto L_100ec2fd;
  /* 100ec2f8 mov eax, dword ptr [0x100f6838] */
  EAX = (r32((uint32_t)(0x100f6838)));
L_100ec2fd:;
  /* 100ec2fd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100ec300 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100ec303 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100ec306 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ec309 push eax */
  push32((uint32_t)(EAX));
  /* 100ec30a call dword ptr [0x100ee0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0bc))), 0x100ec310u);
  /* 100ec310 jmp 0x100ec3b4 */
  goto L_100ec3b4;
L_100ec315:;
  /* 100ec315 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec318 jne 0x100ec3b2 */
  if (!C.zf) goto L_100ec3b2;
  /* 100ec31e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec321 jne 0x100ec32b */
  if (!C.zf) goto L_100ec32b;
  /* 100ec323 mov eax, dword ptr [0x100f6848] */
  EAX = (r32((uint32_t)(0x100f6848)));
  /* 100ec328 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_100ec32b:;
  /* 100ec32b push ebx */
  push32((uint32_t)(EBX));
  /* 100ec32c push ebx */
  push32((uint32_t)(EBX));
  /* 100ec32d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100ec330 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100ec333 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 100ec336 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ec338 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ec33a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 100ec33d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ec33e push eax */
  push32((uint32_t)(EAX));
  /* 100ec33f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100ec342 call dword ptr [0x100ee0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0b8))), 0x100ec348u);
  /* 100ec348 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100ec34b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec34d je 0x100ec3b2 */
  if (C.zf) goto L_100ec3b2;
  /* 100ec34f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 100ec352 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 100ec355 mov eax, edi */
  EAX = (EDI);
  /* 100ec357 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ec35a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 100ec35c call 0x100eaed0 */
  push32(0x100ec361u); f_100eaed0();
  /* 100ec361 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100ec364 mov esi, esp */
  ESI = (ESP);
  /* 100ec366 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 100ec369 push edi */
  push32((uint32_t)(EDI));
  /* 100ec36a push ebx */
  push32((uint32_t)(EBX));
  /* 100ec36b push esi */
  push32((uint32_t)(ESI));
  /* 100ec36c call 0x100e9be0 */
  push32(0x100ec371u); f_100e9be0();
  /* 100ec371 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ec374 jmp 0x100ec381 */
  goto L_100ec381;
  /* 100ec376 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ec378 pop eax */
  EAX = (pop32());
  /* 100ec379 ret  */
  ESPCHK(0x100ec27du, _esp0);
  ESP += 4; return;
  /* 100ec37a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 100ec37d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ec37f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100ec381:;
  /* 100ec381 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ec385 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec387 je 0x100ec3b2 */
  if (C.zf) goto L_100ec3b2;
  /* 100ec389 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 100ec38c push esi */
  push32((uint32_t)(ESI));
  /* 100ec38d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100ec390 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100ec393 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ec395 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100ec398 call dword ptr [0x100ee0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0b8))), 0x100ec39eu);
  /* 100ec39e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec3a0 je 0x100ec3b2 */
  if (C.zf) goto L_100ec3b2;
  /* 100ec3a2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100ec3a5 push eax */
  push32((uint32_t)(EAX));
  /* 100ec3a6 push esi */
  push32((uint32_t)(ESI));
  /* 100ec3a7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ec3aa call dword ptr [0x100ee0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0c0))), 0x100ec3b0u);
  /* 100ec3b0 jmp 0x100ec3b4 */
  goto L_100ec3b4;
L_100ec3b2:;
  /* 100ec3b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100ec3b4:;
  /* 100ec3b4 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 100ec3b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100ec3ba mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 100ec3c1 pop edi */
  EDI = (pop32());
  /* 100ec3c2 pop esi */
  ESI = (pop32());
  /* 100ec3c3 pop ebx */
  EBX = (pop32());
  /* 100ec3c4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ec3c5 ret  */
  ESPCHK(0x100ec27du, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3c6 @ 0x100ec3c6 (511 bytes, 193 insns) */
void f_100ec3c6(void) {
  FTRACE(0x100ec3c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ec3c6 push ebp */
  push32((uint32_t)(EBP));
  /* 100ec3c7 mov ebp, esp */
  EBP = (ESP);
  /* 100ec3c9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 100ec3cb push 0x100ee570 */
  push32((uint32_t)(0x100ee570u));
  /* 100ec3d0 push 0x100ed030 */
  push32((uint32_t)(0x100ed030u));
  /* 100ec3d5 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 100ec3db push eax */
  push32((uint32_t)(EAX));
  /* 100ec3dc mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 100ec3e3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ec3e6 push ebx */
  push32((uint32_t)(EBX));
  /* 100ec3e7 push esi */
  push32((uint32_t)(ESI));
  /* 100ec3e8 push edi */
  push32((uint32_t)(EDI));
  /* 100ec3e9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100ec3ec xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100ec3ee cmp dword ptr [0x100f6868], edi */
  { uint32_t _a=(r32((uint32_t)(0x100f6868))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec3f4 jne 0x100ec43c */
  if (!C.zf) goto L_100ec43c;
  /* 100ec3f6 push edi */
  push32((uint32_t)(EDI));
  /* 100ec3f7 push edi */
  push32((uint32_t)(EDI));
  /* 100ec3f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ec3fa pop ebx */
  EBX = (pop32());
  /* 100ec3fb push ebx */
  push32((uint32_t)(EBX));
  /* 100ec3fc push 0x100ee558 */
  push32((uint32_t)(0x100ee558u));
  /* 100ec401 mov esi, 0x100 */
  ESI = (0x100u);
  /* 100ec406 push esi */
  push32((uint32_t)(ESI));
  /* 100ec407 push edi */
  push32((uint32_t)(EDI));
  /* 100ec408 call dword ptr [0x100ee0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0c8))), 0x100ec40eu);
  /* 100ec40e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ec410 je 0x100ec41a */
  if (C.zf) goto L_100ec41a;
  /* 100ec412 mov dword ptr [0x100f6868], ebx */
  w32((uint32_t)(0x100f6868), (EBX));
  /* 100ec418 jmp 0x100ec43c */
  goto L_100ec43c;
L_100ec41a:;
  /* 100ec41a push edi */
  push32((uint32_t)(EDI));
  /* 100ec41b push edi */
  push32((uint32_t)(EDI));
  /* 100ec41c push ebx */
  push32((uint32_t)(EBX));
  /* 100ec41d push 0x100ee554 */
  push32((uint32_t)(0x100ee554u));
  /* 100ec422 push esi */
  push32((uint32_t)(ESI));
  /* 100ec423 push edi */
  push32((uint32_t)(EDI));
  /* 100ec424 call dword ptr [0x100ee0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0c4))), 0x100ec42au);
  /* 100ec42a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ec42c je 0x100ec554 */
  if (C.zf) goto L_100ec554;
  /* 100ec432 mov dword ptr [0x100f6868], 2 */
  w32((uint32_t)(0x100f6868), (0x2u));
L_100ec43c:;
  /* 100ec43c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec43f jle 0x100ec451 */
  if ((C.zf||C.sf!=C.of)) goto L_100ec451;
  /* 100ec441 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100ec444 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100ec447 call 0x100ec5ea */
  push32(0x100ec44cu); f_100ec5ea();
  /* 100ec44c pop ecx */
  ECX = (pop32());
  /* 100ec44d pop ecx */
  ECX = (pop32());
  /* 100ec44e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_100ec451:;
  /* 100ec451 mov eax, dword ptr [0x100f6868] */
  EAX = (r32((uint32_t)(0x100f6868)));
  /* 100ec456 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec459 jne 0x100ec478 */
  if (!C.zf) goto L_100ec478;
  /* 100ec45b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 100ec45e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100ec461 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100ec464 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100ec467 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100ec46a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ec46d call dword ptr [0x100ee0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0c4))), 0x100ec473u);
  /* 100ec473 jmp 0x100ec556 */
  goto L_100ec556;
L_100ec478:;
  /* 100ec478 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec47b jne 0x100ec554 */
  if (!C.zf) goto L_100ec554;
  /* 100ec481 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec484 jne 0x100ec48e */
  if (!C.zf) goto L_100ec48e;
  /* 100ec486 mov eax, dword ptr [0x100f6848] */
  EAX = (r32((uint32_t)(0x100f6848)));
  /* 100ec48b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_100ec48e:;
  /* 100ec48e push edi */
  push32((uint32_t)(EDI));
  /* 100ec48f push edi */
  push32((uint32_t)(EDI));
  /* 100ec490 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100ec493 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100ec496 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 100ec499 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ec49b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ec49d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 100ec4a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ec4a1 push eax */
  push32((uint32_t)(EAX));
  /* 100ec4a2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 100ec4a5 call dword ptr [0x100ee0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0b8))), 0x100ec4abu);
  /* 100ec4ab mov ebx, eax */
  EBX = (EAX);
  /* 100ec4ad mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 100ec4b0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec4b2 je 0x100ec554 */
  if (C.zf) goto L_100ec554;
  /* 100ec4b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 100ec4bb lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 100ec4be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ec4c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 100ec4c3 call 0x100eaed0 */
  push32(0x100ec4c8u); f_100eaed0();
  /* 100ec4c8 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100ec4cb mov eax, esp */
  EAX = (ESP);
  /* 100ec4cd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 100ec4d0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ec4d4 jmp 0x100ec4e9 */
  goto L_100ec4e9;
  /* 100ec4d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ec4d8 pop eax */
  EAX = (pop32());
  /* 100ec4d9 ret  */
  ESPCHK(0x100ec3c6u, _esp0);
  ESP += 4; return;
  /* 100ec4da mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 100ec4dd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100ec4df mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 100ec4e2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ec4e6 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_100ec4e9:;
  /* 100ec4e9 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec4ec je 0x100ec554 */
  if (C.zf) goto L_100ec554;
  /* 100ec4ee push ebx */
  push32((uint32_t)(EBX));
  /* 100ec4ef push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 100ec4f2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100ec4f5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 100ec4f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ec4fa push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 100ec4fd call dword ptr [0x100ee0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0b8))), 0x100ec503u);
  /* 100ec503 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ec505 je 0x100ec554 */
  if (C.zf) goto L_100ec554;
  /* 100ec507 push edi */
  push32((uint32_t)(EDI));
  /* 100ec508 push edi */
  push32((uint32_t)(EDI));
  /* 100ec509 push ebx */
  push32((uint32_t)(EBX));
  /* 100ec50a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 100ec50d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100ec510 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ec513 call dword ptr [0x100ee0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0c8))), 0x100ec519u);
  /* 100ec519 mov esi, eax */
  ESI = (EAX);
  /* 100ec51b mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 100ec51e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec520 je 0x100ec554 */
  if (C.zf) goto L_100ec554;
  /* 100ec522 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 100ec526 je 0x100ec568 */
  if (C.zf) goto L_100ec568;
  /* 100ec528 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec52b je 0x100ec5e3 */
  if (C.zf) goto L_100ec5e3;
  /* 100ec531 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec534 jg 0x100ec554 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ec554;
  /* 100ec536 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 100ec539 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 100ec53c push ebx */
  push32((uint32_t)(EBX));
  /* 100ec53d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 100ec540 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100ec543 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ec546 call dword ptr [0x100ee0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0c8))), 0x100ec54cu);
  /* 100ec54c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ec54e jne 0x100ec5e3 */
  if (!C.zf) goto L_100ec5e3;
L_100ec554:;
  /* 100ec554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100ec556:;
  /* 100ec556 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 100ec559 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 100ec55c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 100ec563 pop edi */
  EDI = (pop32());
  /* 100ec564 pop esi */
  ESI = (pop32());
  /* 100ec565 pop ebx */
  EBX = (pop32());
  /* 100ec566 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ec567 ret  */
  ESPCHK(0x100ec3c6u, _esp0);
  ESP += 4; return;
L_100ec568:;
  /* 100ec568 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 100ec56f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 100ec572 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ec575 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 100ec577 call 0x100eaed0 */
  push32(0x100ec57cu); f_100eaed0();
  /* 100ec57c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 100ec57f mov ebx, esp */
  EBX = (ESP);
  /* 100ec581 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 100ec584 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ec588 jmp 0x100ec59c */
  goto L_100ec59c;
  /* 100ec58a push 1 */
  push32((uint32_t)(0x1u));
  /* 100ec58c pop eax */
  EAX = (pop32());
  /* 100ec58d ret  */
  ESPCHK(0x100ec3c6u, _esp0);
  ESP += 4; return;
  /* 100ec58e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 100ec591 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 100ec593 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ec595 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ec599 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_100ec59c:;
  /* 100ec59c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec59e je 0x100ec554 */
  if (C.zf) goto L_100ec554;
  /* 100ec5a0 push esi */
  push32((uint32_t)(ESI));
  /* 100ec5a1 push ebx */
  push32((uint32_t)(EBX));
  /* 100ec5a2 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 100ec5a5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 100ec5a8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 100ec5ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ec5ae call dword ptr [0x100ee0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0c8))), 0x100ec5b4u);
  /* 100ec5b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ec5b6 je 0x100ec554 */
  if (C.zf) goto L_100ec554;
  /* 100ec5b8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec5bb push edi */
  push32((uint32_t)(EDI));
  /* 100ec5bc push edi */
  push32((uint32_t)(EDI));
  /* 100ec5bd jne 0x100ec5c3 */
  if (!C.zf) goto L_100ec5c3;
  /* 100ec5bf push edi */
  push32((uint32_t)(EDI));
  /* 100ec5c0 push edi */
  push32((uint32_t)(EDI));
  /* 100ec5c1 jmp 0x100ec5c9 */
  goto L_100ec5c9;
L_100ec5c3:;
  /* 100ec5c3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 100ec5c6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_100ec5c9:;
  /* 100ec5c9 push esi */
  push32((uint32_t)(ESI));
  /* 100ec5ca push ebx */
  push32((uint32_t)(EBX));
  /* 100ec5cb push 0x220 */
  push32((uint32_t)(0x220u));
  /* 100ec5d0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 100ec5d3 call dword ptr [0x100ee060] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee060))), 0x100ec5d9u);
  /* 100ec5d9 mov esi, eax */
  ESI = (EAX);
  /* 100ec5db cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec5dd je 0x100ec554 */
  if (C.zf) goto L_100ec554;
L_100ec5e3:;
  /* 100ec5e3 mov eax, esi */
  EAX = (ESI);
  /* 100ec5e5 jmp 0x100ec556 */
  goto L_100ec556;
}

/* FUN_1000c5ea @ 0x100ec5ea (43 bytes, 20 insns) */
void f_100ec5ea(void) {
  FTRACE(0x100ec5eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ec5ea mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 100ec5ee mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ec5f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 100ec5f4 push esi */
  push32((uint32_t)(ESI));
  /* 100ec5f5 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 100ec5f8 je 0x100ec607 */
  if (C.zf) goto L_100ec607;
L_100ec5fa:;
  /* 100ec5fa cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec5fd je 0x100ec607 */
  if (C.zf) goto L_100ec607;
  /* 100ec5ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100ec600 mov esi, ecx */
  ESI = (ECX);
  /* 100ec602 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100ec603 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100ec605 jne 0x100ec5fa */
  if (!C.zf) goto L_100ec5fa;
L_100ec607:;
  /* 100ec607 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec60a pop esi */
  ESI = (pop32());
  /* 100ec60b jne 0x100ec612 */
  if (!C.zf) goto L_100ec612;
  /* 100ec60d sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ec611 ret  */
  ESPCHK(0x100ec5eau, _esp0);
  ESP += 4; return;
L_100ec612:;
  /* 100ec612 mov eax, edx */
  EAX = (EDX);
  /* 100ec614 ret  */
  ESPCHK(0x100ec5eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000c615 @ 0x100ec615 (33 bytes, 15 insns) */
void f_100ec615(void) {
  FTRACE(0x100ec615u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ec615 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ec619 push esi */
  push32((uint32_t)(ESI));
  /* 100ec61a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 100ec61e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ec620 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 100ec623 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec625 jb 0x100ec62b */
  if (C.cf) goto L_100ec62b;
  /* 100ec627 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec629 jae 0x100ec62e */
  if (!C.cf) goto L_100ec62e;
L_100ec62b:;
  /* 100ec62b push 1 */
  push32((uint32_t)(0x1u));
  /* 100ec62d pop eax */
  EAX = (pop32());
L_100ec62e:;
  /* 100ec62e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 100ec632 pop esi */
  ESI = (pop32());
  /* 100ec633 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 100ec635 ret  */
  ESPCHK(0x100ec615u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x100ec636 (94 bytes, 38 insns) */
void f_100ec636(void) {
  FTRACE(0x100ec636u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ec636 push esi */
  push32((uint32_t)(ESI));
  /* 100ec637 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100ec63b push edi */
  push32((uint32_t)(EDI));
  /* 100ec63c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 100ec640 push esi */
  push32((uint32_t)(ESI));
  /* 100ec641 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 100ec643 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 100ec645 call 0x100ec615 */
  push32(0x100ec64au); f_100ec615();
  /* 100ec64a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ec64d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ec64f je 0x100ec668 */
  if (C.zf) goto L_100ec668;
  /* 100ec651 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 100ec654 push eax */
  push32((uint32_t)(EAX));
  /* 100ec655 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ec657 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 100ec659 call 0x100ec615 */
  push32(0x100ec65eu); f_100ec615();
  /* 100ec65e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ec661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ec663 je 0x100ec668 */
  if (C.zf) goto L_100ec668;
  /* 100ec665 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_100ec668:;
  /* 100ec668 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 100ec66b push eax */
  push32((uint32_t)(EAX));
  /* 100ec66c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 100ec66f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 100ec671 call 0x100ec615 */
  push32(0x100ec676u); f_100ec615();
  /* 100ec676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ec679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ec67b je 0x100ec680 */
  if (C.zf) goto L_100ec680;
  /* 100ec67d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_100ec680:;
  /* 100ec680 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 100ec683 push eax */
  push32((uint32_t)(EAX));
  /* 100ec684 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 100ec687 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 100ec689 call 0x100ec615 */
  push32(0x100ec68eu); f_100ec615();
  /* 100ec68e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ec691 pop edi */
  EDI = (pop32());
  /* 100ec692 pop esi */
  ESI = (pop32());
  /* 100ec693 ret  */
  ESPCHK(0x100ec636u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c694 @ 0x100ec694 (46 bytes, 21 insns) */
void f_100ec694(void) {
  FTRACE(0x100ec694u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ec694 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ec698 push esi */
  push32((uint32_t)(ESI));
  /* 100ec699 push edi */
  push32((uint32_t)(EDI));
  /* 100ec69a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 100ec69c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 100ec69f mov ecx, esi */
  ECX = (ESI);
  /* 100ec6a1 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ec6a3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 100ec6a5 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 100ec6a8 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 100ec6ab or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 100ec6ad mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 100ec6b0 mov edx, edi */
  EDX = (EDI);
  /* 100ec6b2 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 100ec6b5 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 100ec6b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100ec6ba or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 100ec6bc pop edi */
  EDI = (pop32());
  /* 100ec6bd mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 100ec6c0 pop esi */
  ESI = (pop32());
  /* 100ec6c1 ret  */
  ESPCHK(0x100ec694u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6c2 @ 0x100ec6c2 (45 bytes, 21 insns) */
void f_100ec6c2(void) {
  FTRACE(0x100ec6c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ec6c2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 100ec6c6 push esi */
  push32((uint32_t)(ESI));
  /* 100ec6c7 push edi */
  push32((uint32_t)(EDI));
  /* 100ec6c8 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 100ec6cb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 100ec6ce mov esi, edx */
  ESI = (EDX);
  /* 100ec6d0 mov edi, ecx */
  EDI = (ECX);
  /* 100ec6d2 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 100ec6d5 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100ec6d7 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 100ec6d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 100ec6dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 100ec6de shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 100ec6e1 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 100ec6e3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 100ec6e5 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 100ec6e7 pop edi */
  EDI = (pop32());
  /* 100ec6e8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 100ec6eb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 100ec6ed pop esi */
  ESI = (pop32());
  /* 100ec6ee ret  */
  ESPCHK(0x100ec6c2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6ef @ 0x100ec6ef (199 bytes, 76 insns) */
void f_100ec6ef(void) {
  FTRACE(0x100ec6efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ec6ef push ebp */
  push32((uint32_t)(EBP));
  /* 100ec6f0 mov ebp, esp */
  EBP = (ESP);
  /* 100ec6f2 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ec6f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ec6f8 push ebx */
  push32((uint32_t)(EBX));
  /* 100ec6f9 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 100ec6fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ec6fe cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec700 push esi */
  push32((uint32_t)(ESI));
  /* 100ec701 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 100ec708 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 100ec70a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 100ec70d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 100ec710 jbe 0x100ec763 */
  if ((C.cf||C.zf)) goto L_100ec763;
  /* 100ec712 push edi */
  push32((uint32_t)(EDI));
  /* 100ec713 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_100ec716:;
  /* 100ec716 mov esi, ebx */
  ESI = (EBX);
  /* 100ec718 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 100ec71b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ec71c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ec71d push ebx */
  push32((uint32_t)(EBX));
  /* 100ec71e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ec71f call 0x100ec694 */
  push32(0x100ec724u); f_100ec694();
  /* 100ec724 push ebx */
  push32((uint32_t)(EBX));
  /* 100ec725 call 0x100ec694 */
  push32(0x100ec72au); f_100ec694();
  /* 100ec72a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ec72d push eax */
  push32((uint32_t)(EAX));
  /* 100ec72e push ebx */
  push32((uint32_t)(EBX));
  /* 100ec72f call 0x100ec636 */
  push32(0x100ec734u); f_100ec636();
  /* 100ec734 push ebx */
  push32((uint32_t)(EBX));
  /* 100ec735 call 0x100ec694 */
  push32(0x100ec73au); f_100ec694();
  /* 100ec73a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ec73d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 100ec741 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 100ec745 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 100ec748 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100ec74b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ec74e push eax */
  push32((uint32_t)(EAX));
  /* 100ec74f push ebx */
  push32((uint32_t)(EBX));
  /* 100ec750 call 0x100ec636 */
  push32(0x100ec755u); f_100ec636();
  /* 100ec755 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ec758 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 100ec75b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 100ec75e jne 0x100ec716 */
  if (!C.zf) goto L_100ec716;
  /* 100ec760 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ec762 pop edi */
  EDI = (pop32());
L_100ec763:;
  /* 100ec763 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec766 jne 0x100ec790 */
  if (!C.zf) goto L_100ec790;
  /* 100ec768 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 100ec76b mov eax, ecx */
  EAX = (ECX);
  /* 100ec76d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100ec770 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 100ec773 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 100ec775 mov esi, eax */
  ESI = (EAX);
  /* 100ec777 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 100ec77a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 100ec77d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 100ec77f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100ec782 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ec789 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 100ec78c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 100ec78e jmp 0x100ec763 */
  goto L_100ec763;
L_100ec790:;
  /* 100ec790 mov esi, 0x8000 */
  ESI = (0x8000u);
L_100ec795:;
  /* 100ec795 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 100ec798 jne 0x100ec7aa */
  if (!C.zf) goto L_100ec7aa;
  /* 100ec79a push ebx */
  push32((uint32_t)(EBX));
  /* 100ec79b call 0x100ec694 */
  push32(0x100ec7a0u); f_100ec694();
  /* 100ec7a0 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ec7a7 pop ecx */
  ECX = (pop32());
  /* 100ec7a8 jmp 0x100ec795 */
  goto L_100ec795;
L_100ec7aa:;
  /* 100ec7aa mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 100ec7ae pop esi */
  ESI = (pop32());
  /* 100ec7af mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 100ec7b3 pop ebx */
  EBX = (pop32());
  /* 100ec7b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ec7b5 ret  */
  ESPCHK(0x100ec6efu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7b6 @ 0x100ec7b6 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_100ec7b6(void) {
  FTRACE(0x100ec7b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ec7b6 push ebp */
  push32((uint32_t)(EBP));
  /* 100ec7b7 mov ebp, esp */
  EBP = (ESP);
  /* 100ec7b9 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ec7bc push ebx */
  push32((uint32_t)(EBX));
  /* 100ec7bd push esi */
  push32((uint32_t)(ESI));
  /* 100ec7be push edi */
  push32((uint32_t)(EDI));
  /* 100ec7bf mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 100ec7c2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 100ec7c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ec7c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 100ec7ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ec7cc pop edx */
  EDX = (pop32());
  /* 100ec7cd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 100ec7d0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 100ec7d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100ec7d6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100ec7d9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 100ec7dc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100ec7df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 100ec7e2 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 100ec7e5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 100ec7e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100ec7eb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 100ec7ee mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_100ec7f1:;
  /* 100ec7f1 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 100ec7f3 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec7f6 je 0x100ec807 */
  if (C.zf) goto L_100ec807;
  /* 100ec7f8 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec7fb je 0x100ec807 */
  if (C.zf) goto L_100ec807;
  /* 100ec7fd cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec800 je 0x100ec807 */
  if (C.zf) goto L_100ec807;
  /* 100ec802 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec805 jne 0x100ec80a */
  if (!C.zf) goto L_100ec80a;
L_100ec807:;
  /* 100ec807 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ec808 jmp 0x100ec7f1 */
  goto L_100ec7f1;
L_100ec80a:;
  /* 100ec80a push 4 */
  push32((uint32_t)(0x4u));
  /* 100ec80c pop esi */
  ESI = (pop32());
L_100ec80d:;
  /* 100ec80d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ec80f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ec810 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec813 ja 0x100eca90 */
  if ((!C.cf&&!C.zf)) goto L_100eca90;
  /* 100ec819 jmp dword ptr [eax*4 + 0x100ecc57] */
  switch (EAX) {
    case 0: goto L_100ec820;
    case 1: goto L_100ec86f;
    case 2: goto L_100ec8c6;
    case 3: goto L_100ec8f0;
    case 4: goto L_100ec94b;
    case 5: goto L_100ec9c2;
    case 6: goto L_100ec9f8;
    case 7: goto L_100eca42;
    case 8: goto L_100eca21;
    case 9: goto L_100ecaa6;
    case 10: goto L_100eca90;
    case 11: goto L_100eca5c;
    default: x86_unimpl("switch@0x100ec819 out of table"); return;
  }
L_100ec820:;
  /* 100ec820 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec823 jl 0x100ec831 */
  if ((C.sf!=C.of)) goto L_100ec831;
  /* 100ec825 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec828 jg 0x100ec831 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ec831;
L_100ec82a:;
  /* 100ec82a push 3 */
  push32((uint32_t)(0x3u));
  /* 100ec82c jmp 0x100eca4e */
  goto L_100eca4e;
L_100ec831:;
  /* 100ec831 cmp bl, byte ptr [0x100f0be4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x100f0be4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec837 jne 0x100ec840 */
  if (!C.zf) goto L_100ec840;
L_100ec839:;
  /* 100ec839 push 5 */
  push32((uint32_t)(0x5u));
  /* 100ec83b jmp 0x100eca86 */
  goto L_100eca86;
L_100ec840:;
  /* 100ec840 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100ec843 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ec846 je 0x100ec866 */
  if (C.zf) goto L_100ec866;
  /* 100ec848 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ec849 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ec84a je 0x100ec85a */
  if (C.zf) goto L_100ec85a;
  /* 100ec84c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ec84f jne 0x100ecb29 */
  if (!C.zf) goto L_100ecb29;
  /* 100ec855 jmp 0x100ec8e9 */
  goto L_100ec8e9;
L_100ec85a:;
  /* 100ec85a push 2 */
  push32((uint32_t)(0x2u));
  /* 100ec85c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 100ec863 pop eax */
  EAX = (pop32());
  /* 100ec864 jmp 0x100ec80d */
  goto L_100ec80d;
L_100ec866:;
  /* 100ec866 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 100ec86a push 2 */
  push32((uint32_t)(0x2u));
  /* 100ec86c pop eax */
  EAX = (pop32());
  /* 100ec86d jmp 0x100ec80d */
  goto L_100ec80d;
L_100ec86f:;
  /* 100ec86f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec872 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 100ec875 jl 0x100ec87c */
  if ((C.sf!=C.of)) goto L_100ec87c;
  /* 100ec877 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec87a jle 0x100ec82a */
  if ((C.zf||C.sf!=C.of)) goto L_100ec82a;
L_100ec87c:;
  /* 100ec87c cmp bl, byte ptr [0x100f0be4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x100f0be4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec882 je 0x100ec944 */
  if (C.zf) goto L_100ec944;
  /* 100ec888 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec88b je 0x100ec8be */
  if (C.zf) goto L_100ec8be;
  /* 100ec88d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec890 je 0x100ec8be */
  if (C.zf) goto L_100ec8be;
  /* 100ec892 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec895 je 0x100ec8e9 */
  if (C.zf) goto L_100ec8e9;
L_100ec897:;
  /* 100ec897 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec89a jle 0x100ecb29 */
  if ((C.zf||C.sf!=C.of)) goto L_100ecb29;
  /* 100ec8a0 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec8a3 jle 0x100ec8b7 */
  if ((C.zf||C.sf!=C.of)) goto L_100ec8b7;
  /* 100ec8a5 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec8a8 jle 0x100ecb29 */
  if ((C.zf||C.sf!=C.of)) goto L_100ecb29;
  /* 100ec8ae cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec8b1 jg 0x100ecb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ecb29;
L_100ec8b7:;
  /* 100ec8b7 push 6 */
  push32((uint32_t)(0x6u));
  /* 100ec8b9 jmp 0x100eca86 */
  goto L_100eca86;
L_100ec8be:;
  /* 100ec8be dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100ec8bf push 0xb */
  push32((uint32_t)(0xbu));
  /* 100ec8c1 jmp 0x100eca86 */
  goto L_100eca86;
L_100ec8c6:;
  /* 100ec8c6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec8c9 jl 0x100ec8d4 */
  if ((C.sf!=C.of)) goto L_100ec8d4;
  /* 100ec8cb cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec8ce jle 0x100ec82a */
  if ((C.zf||C.sf!=C.of)) goto L_100ec82a;
L_100ec8d4:;
  /* 100ec8d4 cmp bl, byte ptr [0x100f0be4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x100f0be4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec8da je 0x100ec839 */
  if (C.zf) goto L_100ec839;
  /* 100ec8e0 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec8e3 jne 0x100eca9e */
  if (!C.zf) goto L_100eca9e;
L_100ec8e9:;
  /* 100ec8e9 mov eax, edx */
  EAX = (EDX);
  /* 100ec8eb jmp 0x100ec80d */
  goto L_100ec80d;
L_100ec8f0:;
  /* 100ec8f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_100ec8f3:;
  /* 100ec8f3 cmp dword ptr [0x100f0be0], edx */
  { uint32_t _a=(r32((uint32_t)(0x100f0be0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec8f9 jle 0x100ec90c */
  if ((C.zf||C.sf!=C.of)) goto L_100ec90c;
  /* 100ec8fb movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ec8fe push esi */
  push32((uint32_t)(ESI));
  /* 100ec8ff push eax */
  push32((uint32_t)(EAX));
  /* 100ec900 call 0x100e93cb */
  push32(0x100ec905u); f_100e93cb();
  /* 100ec905 pop ecx */
  ECX = (pop32());
  /* 100ec906 pop ecx */
  ECX = (pop32());
  /* 100ec907 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ec909 pop edx */
  EDX = (pop32());
  /* 100ec90a jmp 0x100ec91a */
  goto L_100ec91a;
L_100ec90c:;
  /* 100ec90c mov ecx, dword ptr [0x100f09d0] */
  ECX = (r32((uint32_t)(0x100f09d0)));
  /* 100ec912 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ec915 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100ec918 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_100ec91a:;
  /* 100ec91a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ec91c je 0x100ec93c */
  if (C.zf) goto L_100ec93c;
  /* 100ec91e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec922 jae 0x100ec934 */
  if (!C.cf) goto L_100ec934;
  /* 100ec924 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100ec927 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100ec92a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ec92d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 100ec930 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 100ec932 jmp 0x100ec937 */
  goto L_100ec937;
L_100ec934:;
  /* 100ec934 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_100ec937:;
  /* 100ec937 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ec939 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ec93a jmp 0x100ec8f3 */
  goto L_100ec8f3;
L_100ec93c:;
  /* 100ec93c cmp bl, byte ptr [0x100f0be4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x100f0be4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec942 jne 0x100ec9ab */
  if (!C.zf) goto L_100ec9ab;
L_100ec944:;
  /* 100ec944 mov eax, esi */
  EAX = (ESI);
  /* 100ec946 jmp 0x100ec80d */
  goto L_100ec80d;
L_100ec94b:;
  /* 100ec94b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec94f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 100ec952 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100ec955 jne 0x100ec964 */
  if (!C.zf) goto L_100ec964;
L_100ec957:;
  /* 100ec957 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec95a jne 0x100ec964 */
  if (!C.zf) goto L_100ec964;
  /* 100ec95c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100ec95f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ec961 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ec962 jmp 0x100ec957 */
  goto L_100ec957;
L_100ec964:;
  /* 100ec964 cmp dword ptr [0x100f0be0], edx */
  { uint32_t _a=(r32((uint32_t)(0x100f0be0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec96a jle 0x100ec97d */
  if ((C.zf||C.sf!=C.of)) goto L_100ec97d;
  /* 100ec96c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ec96f push esi */
  push32((uint32_t)(ESI));
  /* 100ec970 push eax */
  push32((uint32_t)(EAX));
  /* 100ec971 call 0x100e93cb */
  push32(0x100ec976u); f_100e93cb();
  /* 100ec976 pop ecx */
  ECX = (pop32());
  /* 100ec977 pop ecx */
  ECX = (pop32());
  /* 100ec978 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ec97a pop edx */
  EDX = (pop32());
  /* 100ec97b jmp 0x100ec98b */
  goto L_100ec98b;
L_100ec97d:;
  /* 100ec97d mov ecx, dword ptr [0x100f09d0] */
  ECX = (r32((uint32_t)(0x100f09d0)));
  /* 100ec983 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ec986 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100ec989 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_100ec98b:;
  /* 100ec98b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ec98d je 0x100ec9ab */
  if (C.zf) goto L_100ec9ab;
  /* 100ec98f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec993 jae 0x100ec9a6 */
  if (!C.cf) goto L_100ec9a6;
  /* 100ec995 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100ec998 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 100ec99b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ec99e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 100ec9a1 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 100ec9a4 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_100ec9a6:;
  /* 100ec9a6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ec9a8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ec9a9 jmp 0x100ec964 */
  goto L_100ec964;
L_100ec9ab:;
  /* 100ec9ab cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec9ae je 0x100ec8be */
  if (C.zf) goto L_100ec8be;
  /* 100ec9b4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec9b7 je 0x100ec8be */
  if (C.zf) goto L_100ec8be;
  /* 100ec9bd jmp 0x100ec897 */
  goto L_100ec897;
L_100ec9c2:;
  /* 100ec9c2 cmp dword ptr [0x100f0be0], edx */
  { uint32_t _a=(r32((uint32_t)(0x100f0be0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ec9c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 100ec9cb jle 0x100ec9de */
  if ((C.zf||C.sf!=C.of)) goto L_100ec9de;
  /* 100ec9cd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ec9d0 push esi */
  push32((uint32_t)(ESI));
  /* 100ec9d1 push eax */
  push32((uint32_t)(EAX));
  /* 100ec9d2 call 0x100e93cb */
  push32(0x100ec9d7u); f_100e93cb();
  /* 100ec9d7 pop ecx */
  ECX = (pop32());
  /* 100ec9d8 pop ecx */
  ECX = (pop32());
  /* 100ec9d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ec9db pop edx */
  EDX = (pop32());
  /* 100ec9dc jmp 0x100ec9ec */
  goto L_100ec9ec;
L_100ec9de:;
  /* 100ec9de mov ecx, dword ptr [0x100f09d0] */
  ECX = (r32((uint32_t)(0x100f09d0)));
  /* 100ec9e4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ec9e7 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100ec9ea and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_100ec9ec:;
  /* 100ec9ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ec9ee je 0x100eca9e */
  if (C.zf) goto L_100eca9e;
  /* 100ec9f4 mov eax, esi */
  EAX = (ESI);
  /* 100ec9f6 jmp 0x100eca4f */
  goto L_100eca4f;
L_100ec9f8:;
  /* 100ec9f8 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 100ec9fb cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ec9fe mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 100eca01 jl 0x100eca08 */
  if ((C.sf!=C.of)) goto L_100eca08;
  /* 100eca03 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eca06 jle 0x100eca4c */
  if ((C.zf||C.sf!=C.of)) goto L_100eca4c;
L_100eca08:;
  /* 100eca08 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100eca0b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eca0e je 0x100eca84 */
  if (C.zf) goto L_100eca84;
  /* 100eca10 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100eca11 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100eca12 je 0x100eca78 */
  if (C.zf) goto L_100eca78;
  /* 100eca14 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eca17 jne 0x100ecb2c */
  if (!C.zf) goto L_100ecb2c;
L_100eca1d:;
  /* 100eca1d push 8 */
  push32((uint32_t)(0x8u));
  /* 100eca1f jmp 0x100eca86 */
  goto L_100eca86;
L_100eca21:;
  /* 100eca21 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_100eca24:;
  /* 100eca24 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eca27 jne 0x100eca2e */
  if (!C.zf) goto L_100eca2e;
  /* 100eca29 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100eca2b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100eca2c jmp 0x100eca24 */
  goto L_100eca24;
L_100eca2e:;
  /* 100eca2e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eca31 jl 0x100ecb29 */
  if ((C.sf!=C.of)) goto L_100ecb29;
  /* 100eca37 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eca3a jg 0x100ecb29 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ecb29;
  /* 100eca40 jmp 0x100eca4c */
  goto L_100eca4c;
L_100eca42:;
  /* 100eca42 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eca45 jl 0x100eca55 */
  if ((C.sf!=C.of)) goto L_100eca55;
  /* 100eca47 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eca4a jg 0x100eca55 */
  if ((!C.zf&&C.sf==C.of)) goto L_100eca55;
L_100eca4c:;
  /* 100eca4c push 9 */
  push32((uint32_t)(0x9u));
L_100eca4e:;
  /* 100eca4e pop eax */
  EAX = (pop32());
L_100eca4f:;
  /* 100eca4f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100eca50 jmp 0x100ec80d */
  goto L_100ec80d;
L_100eca55:;
  /* 100eca55 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100eca58 jne 0x100eca9e */
  if (!C.zf) goto L_100eca9e;
  /* 100eca5a jmp 0x100eca1d */
  goto L_100eca1d;
L_100eca5c:;
  /* 100eca5c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eca60 je 0x100eca8c */
  if (C.zf) goto L_100eca8c;
  /* 100eca62 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100eca65 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 100eca68 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100eca6b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 100eca6e je 0x100eca84 */
  if (C.zf) goto L_100eca84;
  /* 100eca70 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100eca71 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100eca72 jne 0x100ecb2c */
  if (!C.zf) goto L_100ecb2c;
L_100eca78:;
  /* 100eca78 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 100eca7c push 7 */
  push32((uint32_t)(0x7u));
  /* 100eca7e pop eax */
  EAX = (pop32());
  /* 100eca7f jmp 0x100ec80d */
  goto L_100ec80d;
L_100eca84:;
  /* 100eca84 push 7 */
  push32((uint32_t)(0x7u));
L_100eca86:;
  /* 100eca86 pop eax */
  EAX = (pop32());
  /* 100eca87 jmp 0x100ec80d */
  goto L_100ec80d;
L_100eca8c:;
  /* 100eca8c push 0xa */
  push32((uint32_t)(0xau));
  /* 100eca8e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100eca8f pop eax */
  EAX = (pop32());
L_100eca90:;
  /* 100eca90 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eca93 je 0x100ecb2e */
  if (C.zf) goto L_100ecb2e;
  /* 100eca99 jmp 0x100ec80d */
  goto L_100ec80d;
L_100eca9e:;
  /* 100eca9e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 100ecaa1 jmp 0x100ecb2e */
  goto L_100ecb2e;
L_100ecaa6:;
  /* 100ecaa6 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 100ecaad xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100ecaaf:;
  /* 100ecaaf cmp dword ptr [0x100f0be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100f0be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecab6 jle 0x100ecac7 */
  if ((C.zf||C.sf!=C.of)) goto L_100ecac7;
  /* 100ecab8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ecabb push 4 */
  push32((uint32_t)(0x4u));
  /* 100ecabd push eax */
  push32((uint32_t)(EAX));
  /* 100ecabe call 0x100e93cb */
  push32(0x100ecac3u); f_100e93cb();
  /* 100ecac3 pop ecx */
  ECX = (pop32());
  /* 100ecac4 pop ecx */
  ECX = (pop32());
  /* 100ecac5 jmp 0x100ecad6 */
  goto L_100ecad6;
L_100ecac7:;
  /* 100ecac7 mov ecx, dword ptr [0x100f09d0] */
  ECX = (r32((uint32_t)(0x100f09d0)));
  /* 100ecacd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ecad0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100ecad3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_100ecad6:;
  /* 100ecad6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ecad8 je 0x100ecaf6 */
  if (C.zf) goto L_100ecaf6;
  /* 100ecada movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 100ecadd lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 100ecae0 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 100ecae4 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecaea jg 0x100ecaf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ecaf1;
  /* 100ecaec mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ecaee inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ecaef jmp 0x100ecaaf */
  goto L_100ecaaf;
L_100ecaf1:;
  /* 100ecaf1 mov esi, 0x1451 */
  ESI = (0x1451u);
L_100ecaf6:;
  /* 100ecaf6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_100ecaf9:;
  /* 100ecaf9 cmp dword ptr [0x100f0be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100f0be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecb00 jle 0x100ecb11 */
  if ((C.zf||C.sf!=C.of)) goto L_100ecb11;
  /* 100ecb02 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ecb05 push 4 */
  push32((uint32_t)(0x4u));
  /* 100ecb07 push eax */
  push32((uint32_t)(EAX));
  /* 100ecb08 call 0x100e93cb */
  push32(0x100ecb0du); f_100e93cb();
  /* 100ecb0d pop ecx */
  ECX = (pop32());
  /* 100ecb0e pop ecx */
  ECX = (pop32());
  /* 100ecb0f jmp 0x100ecb20 */
  goto L_100ecb20;
L_100ecb11:;
  /* 100ecb11 mov ecx, dword ptr [0x100f09d0] */
  ECX = (r32((uint32_t)(0x100f09d0)));
  /* 100ecb17 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 100ecb1a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 100ecb1d and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_100ecb20:;
  /* 100ecb20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ecb22 je 0x100ecb29 */
  if (C.zf) goto L_100ecb29;
  /* 100ecb24 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ecb26 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ecb27 jmp 0x100ecaf9 */
  goto L_100ecaf9;
L_100ecb29:;
  /* 100ecb29 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 100ecb2a jmp 0x100ecb2e */
  goto L_100ecb2e;
L_100ecb2c:;
  /* 100ecb2c mov edi, ecx */
  EDI = (ECX);
L_100ecb2e:;
  /* 100ecb2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ecb31 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecb35 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 100ecb37 je 0x100ecc16 */
  if (C.zf) goto L_100ecc16;
  /* 100ecb3d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 100ecb3f pop eax */
  EAX = (pop32());
  /* 100ecb40 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecb43 jbe 0x100ecb5a */
  if ((C.cf||C.zf)) goto L_100ecb5a;
  /* 100ecb45 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ecb49 jl 0x100ecb4e */
  if ((C.sf!=C.of)) goto L_100ecb4e;
  /* 100ecb4b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_100ecb4e:;
  /* 100ecb4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100ecb51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 100ecb54 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ecb55 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 100ecb58 jmp 0x100ecb5d */
  goto L_100ecb5d;
L_100ecb5a:;
  /* 100ecb5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_100ecb5d:;
  /* 100ecb5d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecb61 jbe 0x100ecc0c */
  if ((C.cf||C.zf)) goto L_100ecc0c;
L_100ecb67:;
  /* 100ecb67 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ecb68 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ecb6b jne 0x100ecb75 */
  if (!C.zf) goto L_100ecb75;
  /* 100ecb6d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 100ecb70 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 100ecb73 jmp 0x100ecb67 */
  goto L_100ecb67;
L_100ecb75:;
  /* 100ecb75 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 100ecb78 push eax */
  push32((uint32_t)(EAX));
  /* 100ecb79 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 100ecb7c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 100ecb7f push eax */
  push32((uint32_t)(EAX));
  /* 100ecb80 call 0x100ec6ef */
  push32(0x100ecb85u); f_100ec6ef();
  /* 100ecb85 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 100ecb88 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100ecb8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ecb8d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecb90 jge 0x100ecb94 */
  if ((C.sf==C.of)) goto L_100ecb94;
  /* 100ecb92 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_100ecb94:;
  /* 100ecb94 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ecb97 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecb9a jne 0x100ecb9f */
  if (!C.zf) goto L_100ecb9f;
  /* 100ecb9c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_100ecb9f:;
  /* 100ecb9f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecba2 jne 0x100ecba7 */
  if (!C.zf) goto L_100ecba7;
  /* 100ecba4 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_100ecba7:;
  /* 100ecba7 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecbac jle 0x100ecbde */
  if ((C.zf||C.sf!=C.of)) goto L_100ecbde;
  /* 100ecbae mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_100ecbb5:;
  /* 100ecbb5 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 100ecbb8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 100ecbbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100ecbbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_100ecbc1:;
  /* 100ecbc1 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecbc5 je 0x100ecc27 */
  if (C.zf) goto L_100ecc27;
  /* 100ecbc7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ecbc9 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 100ecbce mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 100ecbd3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ecbd5 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 100ecbdc jmp 0x100ecc3c */
  goto L_100ecc3c;
L_100ecbde:;
  /* 100ecbde cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecbe3 jge 0x100ecbee */
  if ((C.sf==C.of)) goto L_100ecbee;
  /* 100ecbe5 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 100ecbec jmp 0x100ecbb5 */
  goto L_100ecbb5;
L_100ecbee:;
  /* 100ecbee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 100ecbf1 push eax */
  push32((uint32_t)(EAX));
  /* 100ecbf2 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 100ecbf5 push eax */
  push32((uint32_t)(EAX));
  /* 100ecbf6 call 0x100ed68a */
  push32(0x100ecbfbu); f_100ed68a();
  /* 100ecbfb mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 100ecbfe mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 100ecc01 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 100ecc04 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 100ecc07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ecc0a jmp 0x100ecbc1 */
  goto L_100ecbc1;
L_100ecc0c:;
  /* 100ecc0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ecc0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ecc10 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100ecc12 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ecc14 jmp 0x100ecbc1 */
  goto L_100ecbc1;
L_100ecc16:;
  /* 100ecc16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ecc18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ecc1a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100ecc1c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ecc1e mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 100ecc25 jmp 0x100ecc3c */
  goto L_100ecc3c;
L_100ecc27:;
  /* 100ecc27 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecc2b je 0x100ecc3c */
  if (C.zf) goto L_100ecc3c;
  /* 100ecc2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 100ecc2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ecc31 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 100ecc33 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ecc35 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_100ecc3c:;
  /* 100ecc3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ecc3f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 100ecc42 pop edi */
  EDI = (pop32());
  /* 100ecc43 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 100ecc46 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 100ecc49 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 100ecc4d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 100ecc50 pop esi */
  ESI = (pop32());
  /* 100ecc51 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 100ecc54 pop ebx */
  EBX = (pop32());
  /* 100ecc55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ecc56 ret  */
  ESPCHK(0x100ec7b6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc87 @ 0x100ecc87 (659 bytes, 232 insns) */
void f_100ecc87(void) {
  FTRACE(0x100ecc87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ecc87 push ebp */
  push32((uint32_t)(EBP));
  /* 100ecc88 mov ebp, esp */
  EBP = (ESP);
  /* 100ecc8a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ecc8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 100ecc90 push ebx */
  push32((uint32_t)(EBX));
  /* 100ecc91 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 100ecc94 push esi */
  push32((uint32_t)(ESI));
  /* 100ecc95 mov ecx, eax */
  ECX = (EAX);
  /* 100ecc97 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 100ecc9c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 100ecca2 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 100ecca4 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 100ecca7 push edi */
  push32((uint32_t)(EDI));
  /* 100ecca8 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 100eccac mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 100eccb0 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 100eccb4 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 100eccb8 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 100eccbc mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 100eccc0 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 100eccc4 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 100eccc8 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 100ecccc mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 100eccd0 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 100eccd4 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 100eccd8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 100eccdf mov edx, eax */
  EDX = (EAX);
  /* 100ecce1 je 0x100ecce9 */
  if (C.zf) goto L_100ecce9;
  /* 100ecce3 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 100ecce7 jmp 0x100ecced */
  goto L_100ecced;
L_100ecce9:;
  /* 100ecce9 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_100ecced:;
  /* 100ecced mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100eccf0 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 100eccf3 jne 0x100ecd13 */
  if (!C.zf) goto L_100ecd13;
  /* 100eccf5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100eccf7 jne 0x100ecd13 */
  if (!C.zf) goto L_100ecd13;
  /* 100eccf9 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eccfc jne 0x100ecd13 */
  if (!C.zf) goto L_100ecd13;
L_100eccfe:;
  /* 100eccfe and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 100ecd02 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 100ecd06 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 100ecd0a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 100ecd0e jmp 0x100ecf11 */
  goto L_100ecf11;
L_100ecd13:;
  /* 100ecd13 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ecd16 jne 0x100ecd92 */
  if (!C.zf) goto L_100ecd92;
  /* 100ecd18 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 100ecd1d mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 100ecd22 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecd24 jne 0x100ecd2c */
  if (!C.zf) goto L_100ecd2c;
  /* 100ecd26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecd2a je 0x100ecd3b */
  if (C.zf) goto L_100ecd3b;
L_100ecd2c:;
  /* 100ecd2c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 100ecd32 jne 0x100ecd3b */
  if (!C.zf) goto L_100ecd3b;
  /* 100ecd34 push 0x100ee5a0 */
  push32((uint32_t)(0x100ee5a0u));
  /* 100ecd39 jmp 0x100ecd81 */
  goto L_100ecd81;
L_100ecd3b:;
  /* 100ecd3b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 100ecd3e je 0x100ecd55 */
  if (C.zf) goto L_100ecd55;
  /* 100ecd40 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecd46 jne 0x100ecd55 */
  if (!C.zf) goto L_100ecd55;
  /* 100ecd48 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecd4c jne 0x100ecd7c */
  if (!C.zf) goto L_100ecd7c;
  /* 100ecd4e push 0x100ee598 */
  push32((uint32_t)(0x100ee598u));
  /* 100ecd53 jmp 0x100ecd64 */
  goto L_100ecd64;
L_100ecd55:;
  /* 100ecd55 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecd57 jne 0x100ecd7c */
  if (!C.zf) goto L_100ecd7c;
  /* 100ecd59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecd5d jne 0x100ecd7c */
  if (!C.zf) goto L_100ecd7c;
  /* 100ecd5f push 0x100ee590 */
  push32((uint32_t)(0x100ee590u));
L_100ecd64:;
  /* 100ecd64 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 100ecd67 push eax */
  push32((uint32_t)(EAX));
  /* 100ecd68 call 0x100e9af0 */
  push32(0x100ecd6du); f_100e9af0();
  /* 100ecd6d pop ecx */
  ECX = (pop32());
  /* 100ecd6e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 100ecd72 pop ecx */
  ECX = (pop32());
L_100ecd73:;
  /* 100ecd73 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 100ecd77 jmp 0x100eceea */
  goto L_100eceea;
L_100ecd7c:;
  /* 100ecd7c push 0x100ee588 */
  push32((uint32_t)(0x100ee588u));
L_100ecd81:;
  /* 100ecd81 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 100ecd84 push eax */
  push32((uint32_t)(EAX));
  /* 100ecd85 call 0x100e9af0 */
  push32(0x100ecd8au); f_100e9af0();
  /* 100ecd8a pop ecx */
  ECX = (pop32());
  /* 100ecd8b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 100ecd8f pop ecx */
  ECX = (pop32());
  /* 100ecd90 jmp 0x100ecd73 */
  goto L_100ecd73;
L_100ecd92:;
  /* 100ecd92 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 100ecd95 mov ecx, edi */
  ECX = (EDI);
  /* 100ecd97 mov esi, eax */
  ESI = (EAX);
  /* 100ecd99 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 100ecd9c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100ecda2 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 100ecda5 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 100ecdaa push 1 */
  push32((uint32_t)(0x1u));
  /* 100ecdac lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 100ecdaf mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 100ecdb3 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100ecdb6 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 100ecdb9 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 100ecdc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ecdc3 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 100ecdc6 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 100ecdc9 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 100ecdcc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ecdce push eax */
  push32((uint32_t)(EAX));
  /* 100ecdcf lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ecdd2 push eax */
  push32((uint32_t)(EAX));
  /* 100ecdd3 call 0x100ed68a */
  push32(0x100ecdd8u); f_100ed68a();
  /* 100ecdd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ecddb cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ecde1 jb 0x100ecdf3 */
  if (C.cf) goto L_100ecdf3;
  /* 100ecde3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 100ecde6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ecde7 push eax */
  push32((uint32_t)(EAX));
  /* 100ecde8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ecdeb push eax */
  push32((uint32_t)(EAX));
  /* 100ecdec call 0x100ed46a */
  push32(0x100ecdf1u); f_100ed46a();
  /* 100ecdf1 pop ecx */
  ECX = (pop32());
  /* 100ecdf2 pop ecx */
  ECX = (pop32());
L_100ecdf3:;
  /* 100ecdf3 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 100ecdf7 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 100ecdfa je 0x100ece0d */
  if (C.zf) goto L_100ece0d;
  /* 100ecdfc mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 100ecdff movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 100ece02 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ece04 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100ece06 jg 0x100ece10 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ece10;
  /* 100ece08 jmp 0x100eccfe */
  goto L_100eccfe;
L_100ece0d:;
  /* 100ece0d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_100ece10:;
  /* 100ece10 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ece13 jle 0x100ece18 */
  if ((C.zf||C.sf!=C.of)) goto L_100ece18;
  /* 100ece15 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 100ece17 pop edi */
  EDI = (pop32());
L_100ece18:;
  /* 100ece18 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 100ece1c sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ece22 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 100ece27 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_100ece2e:;
  /* 100ece2e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ece31 push eax */
  push32((uint32_t)(EAX));
  /* 100ece32 call 0x100ec694 */
  push32(0x100ece37u); f_100ec694();
  /* 100ece37 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 100ece3a pop ecx */
  ECX = (pop32());
  /* 100ece3b jne 0x100ece2e */
  if (!C.zf) goto L_100ece2e;
  /* 100ece3d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100ece3f jge 0x100ece58 */
  if ((C.sf==C.of)) goto L_100ece58;
  /* 100ece41 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 100ece43 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 100ece49 jle 0x100ece58 */
  if ((C.zf||C.sf!=C.of)) goto L_100ece58;
L_100ece4b:;
  /* 100ece4b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ece4e push eax */
  push32((uint32_t)(EAX));
  /* 100ece4f call 0x100ec6c2 */
  push32(0x100ece54u); f_100ec6c2();
  /* 100ece54 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 100ece55 pop ecx */
  ECX = (pop32());
  /* 100ece56 jne 0x100ece4b */
  if (!C.zf) goto L_100ece4b;
L_100ece58:;
  /* 100ece58 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 100ece5b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 100ece5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 100ece60 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 100ece63 jle 0x100eceb5 */
  if ((C.zf||C.sf!=C.of)) goto L_100eceb5;
  /* 100ece65 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_100ece68:;
  /* 100ece68 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 100ece6b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 100ece6e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ece6f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ece70 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ece73 push eax */
  push32((uint32_t)(EAX));
  /* 100ece74 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ece75 call 0x100ec694 */
  push32(0x100ece7au); f_100ec694();
  /* 100ece7a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ece7d push eax */
  push32((uint32_t)(EAX));
  /* 100ece7e call 0x100ec694 */
  push32(0x100ece83u); f_100ec694();
  /* 100ece83 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100ece86 push eax */
  push32((uint32_t)(EAX));
  /* 100ece87 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ece8a push eax */
  push32((uint32_t)(EAX));
  /* 100ece8b call 0x100ec636 */
  push32(0x100ece90u); f_100ec636();
  /* 100ece90 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 100ece93 push eax */
  push32((uint32_t)(EAX));
  /* 100ece94 call 0x100ec694 */
  push32(0x100ece99u); f_100ec694();
  /* 100ece99 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 100ece9c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 100ece9f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 100ecea3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ecea6 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100ecea8 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 100eceab dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 100eceae mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 100eceb0 jne 0x100ece68 */
  if (!C.zf) goto L_100ece68;
  /* 100eceb2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_100eceb5:;
  /* 100eceb5 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 100eceb8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100eceb9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100eceba cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ecebd lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 100ecec0 jl 0x100ecef2 */
  if ((C.sf!=C.of)) goto L_100ecef2;
L_100ecec2:;
  /* 100ecec2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecec4 jb 0x100eced5 */
  if (C.cf) goto L_100eced5;
  /* 100ecec6 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ecec9 jne 0x100eced1 */
  if (!C.zf) goto L_100eced1;
  /* 100ececb mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 100ecece dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ececf jmp 0x100ecec2 */
  goto L_100ecec2;
L_100eced1:;
  /* 100eced1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100eced3 jae 0x100eced9 */
  if (!C.cf) goto L_100eced9;
L_100eced5:;
  /* 100eced5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100eced6 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_100eced9:;
  /* 100eced9 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_100ecedb:;
  /* 100ecedb sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ecedd sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ecedf mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 100ecee2 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 100ecee5 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_100eceea:;
  /* 100eceea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_100eceed:;
  /* 100eceed pop edi */
  EDI = (pop32());
  /* 100eceee pop esi */
  ESI = (pop32());
  /* 100eceef pop ebx */
  EBX = (pop32());
  /* 100ecef0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ecef1 ret  */
  ESPCHK(0x100ecc87u, _esp0);
  ESP += 4; return;
L_100ecef2:;
  /* 100ecef2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecef4 jb 0x100ecf02 */
  if (C.cf) goto L_100ecf02;
  /* 100ecef6 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ecef9 jne 0x100ecefe */
  if (!C.zf) goto L_100ecefe;
  /* 100ecefb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100ecefc jmp 0x100ecef2 */
  goto L_100ecef2;
L_100ecefe:;
  /* 100ecefe cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecf00 jae 0x100ecedb */
  if (!C.cf) goto L_100ecedb;
L_100ecf02:;
  /* 100ecf02 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 100ecf06 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 100ecf0a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 100ecf0e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_100ecf11:;
  /* 100ecf11 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 100ecf15 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ecf17 pop eax */
  EAX = (pop32());
  /* 100ecf18 jmp 0x100eceed */
  goto L_100eceed;
}

/* FUN_1000cf1a @ 0x100ecf1a (27 bytes, 13 insns) */
void f_100ecf1a(void) {
  FTRACE(0x100ecf1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ecf1a mov eax, dword ptr [0x100f686c] */
  EAX = (r32((uint32_t)(0x100f686c)));
  /* 100ecf1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ecf21 je 0x100ecf32 */
  if (C.zf) goto L_100ecf32;
  /* 100ecf23 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 100ecf27 call eax */
  call_ind((uint32_t)(EAX), 0x100ecf29u);
  /* 100ecf29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ecf2b pop ecx */
  ECX = (pop32());
  /* 100ecf2c je 0x100ecf32 */
  if (C.zf) goto L_100ecf32;
  /* 100ecf2e push 1 */
  push32((uint32_t)(0x1u));
  /* 100ecf30 pop eax */
  EAX = (pop32());
  /* 100ecf31 ret  */
  ESPCHK(0x100ecf1au, _esp0);
  ESP += 4; return;
L_100ecf32:;
  /* 100ecf32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ecf34 ret  */
  ESPCHK(0x100ecf1au, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x100ecf38 (32 bytes, 18 insns) */
void f_100ecf38(void) {
  FTRACE(0x100ecf38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ecf38 push ebp */
  push32((uint32_t)(EBP));
  /* 100ecf39 mov ebp, esp */
  EBP = (ESP);
  /* 100ecf3b push ebx */
  push32((uint32_t)(EBX));
  /* 100ecf3c push esi */
  push32((uint32_t)(ESI));
  /* 100ecf3d push edi */
  push32((uint32_t)(EDI));
  /* 100ecf3e push ebp */
  push32((uint32_t)(EBP));
  /* 100ecf3f push 0 */
  push32((uint32_t)(0x0u));
  /* 100ecf41 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ecf43 push 0x100ecf50 */
  push32((uint32_t)(0x100ecf50u));
  /* 100ecf48 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ecf4b call 0x100eda34 */
  push32(0x100ecf50u); f_100eda34();
  /* 100ecf50 pop ebp */
  EBP = (pop32());
  /* 100ecf51 pop edi */
  EDI = (pop32());
  /* 100ecf52 pop esi */
  ESI = (pop32());
  /* 100ecf53 pop ebx */
  EBX = (pop32());
  /* 100ecf54 mov esp, ebp */
  ESP = (EBP);
  /* 100ecf56 pop ebp */
  EBP = (pop32());
  /* 100ecf57 ret  */
  ESPCHK(0x100ecf38u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x100ecf7a (104 bytes, 33 insns) */
void f_100ecf7a(void) {
  FTRACE(0x100ecf7au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ecf7a push ebx */
  push32((uint32_t)(EBX));
  /* 100ecf7b push esi */
  push32((uint32_t)(ESI));
  /* 100ecf7c push edi */
  push32((uint32_t)(EDI));
  /* 100ecf7d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100ecf81 push eax */
  push32((uint32_t)(EAX));
  /* 100ecf82 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 100ecf84 push 0x100ecf58 */
  push32((uint32_t)(0x100ecf58u));
  /* 100ecf89 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 100ecf90 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_100ecf97:;
  /* 100ecf97 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 100ecf9b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 100ecf9e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 100ecfa1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecfa4 je 0x100ecfd4 */
  if (C.zf) goto L_100ecfd4;
  /* 100ecfa6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecfaa je 0x100ecfd4 */
  if (C.zf) goto L_100ecfd4;
  /* 100ecfac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 100ecfaf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 100ecfb2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 100ecfb6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 100ecfb9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ecfbe jne 0x100ecfd2 */
  if (!C.zf) goto L_100ecfd2;
  /* 100ecfc0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 100ecfc5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 100ecfc9 call 0x100ed00e */
  push32(0x100ecfceu); f_100ed00e();
  /* 100ecfce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x100ecfd2u);
L_100ecfd2:;
  /* 100ecfd2 jmp 0x100ecf97 */
  goto L_100ecf97;
L_100ecfd4:;
  /* 100ecfd4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 100ecfdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ecfde pop edi */
  EDI = (pop32());
  /* 100ecfdf pop esi */
  ESI = (pop32());
  /* 100ecfe0 pop ebx */
  EBX = (pop32());
  /* 100ecfe1 ret  */
  ESPCHK(0x100ecf7au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d00e @ 0x100ed00e (24 bytes, 10 insns) */
void f_100ed00e(void) {
  FTRACE(0x100ed00eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed00e push ebx */
  push32((uint32_t)(EBX));
  /* 100ed00f push ecx */
  push32((uint32_t)(ECX));
  /* 100ed010 mov ebx, 0x100f3104 */
  EBX = (0x100f3104u);
  /* 100ed015 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ed018 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 100ed01b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 100ed01e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 100ed021 pop ecx */
  ECX = (pop32());
  /* 100ed022 pop ebx */
  EBX = (pop32());
  /* 100ed023 ret 4 */
  ESPCHK(0x100ed00eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d0ed @ 0x100ed0ed (27 bytes, 11 insns) */
void f_100ed0ed(void) {
  FTRACE(0x100ed0edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed0ed push ebp */
  push32((uint32_t)(EBP));
  /* 100ed0ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 100ed0f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 100ed0f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 100ed0f7 push eax */
  push32((uint32_t)(EAX));
  /* 100ed0f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 100ed0fb push eax */
  push32((uint32_t)(EAX));
  /* 100ed0fc call 0x100ecf7a */
  push32(0x100ed101u); f_100ecf7a();
  /* 100ed101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed104 pop ebp */
  EBP = (pop32());
  /* 100ed105 ret 4 */
  ESPCHK(0x100ed0edu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d108 @ 0x100ed108 (111 bytes, 44 insns) */
void f_100ed108(void) {
  FTRACE(0x100ed108u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed108 push ebx */
  push32((uint32_t)(EBX));
  /* 100ed109 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ed10b cmp dword ptr [0x100f6838], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100f6838))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed111 jne 0x100ed126 */
  if (!C.zf) goto L_100ed126;
  /* 100ed113 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100ed117 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed11a jl 0x100ed175 */
  if ((C.sf!=C.of)) goto L_100ed175;
  /* 100ed11c cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed11f jg 0x100ed175 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ed175;
  /* 100ed121 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ed124 pop ebx */
  EBX = (pop32());
  /* 100ed125 ret  */
  ESPCHK(0x100ed108u, _esp0);
  ESP += 4; return;
L_100ed126:;
  /* 100ed126 push esi */
  push32((uint32_t)(ESI));
  /* 100ed127 mov esi, 0x100f69b4 */
  ESI = (0x100f69b4u);
  /* 100ed12c push edi */
  push32((uint32_t)(EDI));
  /* 100ed12d push esi */
  push32((uint32_t)(ESI));
  /* 100ed12e call dword ptr [0x100ee090] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee090))), 0x100ed134u);
  /* 100ed134 cmp dword ptr [0x100f69b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100f69b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed13a mov edi, dword ptr [0x100ee08c] */
  EDI = (r32((uint32_t)(0x100ee08c)));
  /* 100ed140 je 0x100ed150 */
  if (C.zf) goto L_100ed150;
  /* 100ed142 push esi */
  push32((uint32_t)(ESI));
  /* 100ed143 call edi */
  call_ind((uint32_t)(EDI), 0x100ed145u);
  /* 100ed145 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100ed147 call 0x100ea013 */
  push32(0x100ed14cu); f_100ea013();
  /* 100ed14c pop ecx */
  ECX = (pop32());
  /* 100ed14d push 1 */
  push32((uint32_t)(0x1u));
  /* 100ed14f pop ebx */
  EBX = (pop32());
L_100ed150:;
  /* 100ed150 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100ed154 call 0x100ed177 */
  push32(0x100ed159u); f_100ed177();
  /* 100ed159 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100ed15b pop ecx */
  ECX = (pop32());
  /* 100ed15c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 100ed160 je 0x100ed16c */
  if (C.zf) goto L_100ed16c;
  /* 100ed162 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100ed164 call 0x100ea074 */
  push32(0x100ed169u); f_100ea074();
  /* 100ed169 pop ecx */
  ECX = (pop32());
  /* 100ed16a jmp 0x100ed16f */
  goto L_100ed16f;
L_100ed16c:;
  /* 100ed16c push esi */
  push32((uint32_t)(ESI));
  /* 100ed16d call edi */
  call_ind((uint32_t)(EDI), 0x100ed16fu);
L_100ed16f:;
  /* 100ed16f mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100ed173 pop edi */
  EDI = (pop32());
  /* 100ed174 pop esi */
  ESI = (pop32());
L_100ed175:;
  /* 100ed175 pop ebx */
  EBX = (pop32());
  /* 100ed176 ret  */
  ESPCHK(0x100ed108u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d177 @ 0x100ed177 (204 bytes, 71 insns) */
void f_100ed177(void) {
  FTRACE(0x100ed177u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed177 push ebp */
  push32((uint32_t)(EBP));
  /* 100ed178 mov ebp, esp */
  EBP = (ESP);
  /* 100ed17a push ecx */
  push32((uint32_t)(ECX));
  /* 100ed17b cmp dword ptr [0x100f6838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100f6838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed182 push ebx */
  push32((uint32_t)(EBX));
  /* 100ed183 jne 0x100ed1a2 */
  if (!C.zf) goto L_100ed1a2;
  /* 100ed185 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ed188 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed18b jl 0x100ed240 */
  if ((C.sf!=C.of)) goto L_100ed240;
  /* 100ed191 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed194 jg 0x100ed240 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ed240;
  /* 100ed19a sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ed19d jmp 0x100ed240 */
  goto L_100ed240;
L_100ed1a2:;
  /* 100ed1a2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ed1a5 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed1ab jge 0x100ed1d5 */
  if ((C.sf==C.of)) goto L_100ed1d5;
  /* 100ed1ad cmp dword ptr [0x100f0be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x100f0be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed1b4 jle 0x100ed1c2 */
  if ((C.zf||C.sf!=C.of)) goto L_100ed1c2;
  /* 100ed1b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 100ed1b8 push ebx */
  push32((uint32_t)(EBX));
  /* 100ed1b9 call 0x100e93cb */
  push32(0x100ed1beu); f_100e93cb();
  /* 100ed1be pop ecx */
  ECX = (pop32());
  /* 100ed1bf pop ecx */
  ECX = (pop32());
  /* 100ed1c0 jmp 0x100ed1cd */
  goto L_100ed1cd;
L_100ed1c2:;
  /* 100ed1c2 mov eax, dword ptr [0x100f09d0] */
  EAX = (r32((uint32_t)(0x100f09d0)));
  /* 100ed1c7 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 100ed1ca and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_100ed1cd:;
  /* 100ed1cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ed1cf jne 0x100ed1d5 */
  if (!C.zf) goto L_100ed1d5;
L_100ed1d1:;
  /* 100ed1d1 mov eax, ebx */
  EAX = (EBX);
  /* 100ed1d3 jmp 0x100ed240 */
  goto L_100ed240;
L_100ed1d5:;
  /* 100ed1d5 mov edx, dword ptr [0x100f09d0] */
  EDX = (r32((uint32_t)(0x100f09d0)));
  /* 100ed1db mov eax, ebx */
  EAX = (EBX);
  /* 100ed1dd sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100ed1e0 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 100ed1e3 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 100ed1e8 je 0x100ed1f8 */
  if (C.zf) goto L_100ed1f8;
  /* 100ed1ea and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 100ed1ee mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 100ed1f1 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 100ed1f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 100ed1f6 jmp 0x100ed201 */
  goto L_100ed201;
L_100ed1f8:;
  /* 100ed1f8 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 100ed1fc mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 100ed1ff push 1 */
  push32((uint32_t)(0x1u));
L_100ed201:;
  /* 100ed201 pop eax */
  EAX = (pop32());
  /* 100ed202 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 100ed205 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ed207 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ed209 push 3 */
  push32((uint32_t)(0x3u));
  /* 100ed20b push ecx */
  push32((uint32_t)(ECX));
  /* 100ed20c push eax */
  push32((uint32_t)(EAX));
  /* 100ed20d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 100ed210 push eax */
  push32((uint32_t)(EAX));
  /* 100ed211 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 100ed216 push dword ptr [0x100f6838] */
  push32((uint32_t)(r32((uint32_t)(0x100f6838))));
  /* 100ed21c call 0x100ec3c6 */
  push32(0x100ed221u); f_100ec3c6();
  /* 100ed221 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ed226 je 0x100ed1d1 */
  if (C.zf) goto L_100ed1d1;
  /* 100ed228 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed22b jne 0x100ed233 */
  if (!C.zf) goto L_100ed233;
  /* 100ed22d movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100ed231 jmp 0x100ed240 */
  goto L_100ed240;
L_100ed233:;
  /* 100ed233 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 100ed237 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100ed23b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100ed23e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_100ed240:;
  /* 100ed240 pop ebx */
  EBX = (pop32());
  /* 100ed241 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ed242 ret  */
  ESPCHK(0x100ed177u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d243 @ 0x100ed243 (49 bytes, 20 insns) */
void f_100ed243(void) {
  FTRACE(0x100ed243u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed243 push esi */
  push32((uint32_t)(ESI));
  /* 100ed244 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100ed248 push edi */
  push32((uint32_t)(EDI));
  /* 100ed249 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 100ed24c test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 100ed250 je 0x100ed258 */
  if (C.zf) goto L_100ed258;
  /* 100ed252 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100ed256 jmp 0x100ed26f */
  goto L_100ed26f;
L_100ed258:;
  /* 100ed258 push esi */
  push32((uint32_t)(ESI));
  /* 100ed259 call 0x100e8f8e */
  push32(0x100ed25eu); f_100e8f8e();
  /* 100ed25e push esi */
  push32((uint32_t)(ESI));
  /* 100ed25f call 0x100ed274 */
  push32(0x100ed264u); f_100ed274();
  /* 100ed264 push esi */
  push32((uint32_t)(ESI));
  /* 100ed265 mov edi, eax */
  EDI = (EAX);
  /* 100ed267 call 0x100e8fe0 */
  push32(0x100ed26cu); f_100e8fe0();
  /* 100ed26c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100ed26f:;
  /* 100ed26f mov eax, edi */
  EAX = (EDI);
  /* 100ed271 pop edi */
  EDI = (pop32());
  /* 100ed272 pop esi */
  ESI = (pop32());
  /* 100ed273 ret  */
  ESPCHK(0x100ed243u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x100ed274 (76 bytes, 30 insns) */
void f_100ed274(void) {
  FTRACE(0x100ed274u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed274 push esi */
  push32((uint32_t)(ESI));
  /* 100ed275 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100ed279 push edi */
  push32((uint32_t)(EDI));
  /* 100ed27a or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 100ed27d test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 100ed281 je 0x100ed2b7 */
  if (C.zf) goto L_100ed2b7;
  /* 100ed283 push esi */
  push32((uint32_t)(ESI));
  /* 100ed284 call 0x100ec174 */
  push32(0x100ed289u); f_100ec174();
  /* 100ed289 push esi */
  push32((uint32_t)(ESI));
  /* 100ed28a mov edi, eax */
  EDI = (EAX);
  /* 100ed28c call 0x100ed7e6 */
  push32(0x100ed291u); f_100ed7e6();
  /* 100ed291 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 100ed294 call 0x100ed706 */
  push32(0x100ed299u); f_100ed706();
  /* 100ed299 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed29c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ed29e jge 0x100ed2a5 */
  if ((C.sf==C.of)) goto L_100ed2a5;
  /* 100ed2a0 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 100ed2a3 jmp 0x100ed2b7 */
  goto L_100ed2b7;
L_100ed2a5:;
  /* 100ed2a5 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 100ed2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ed2aa je 0x100ed2b7 */
  if (C.zf) goto L_100ed2b7;
  /* 100ed2ac push eax */
  push32((uint32_t)(EAX));
  /* 100ed2ad call 0x100ea1c6 */
  push32(0x100ed2b2u); f_100ea1c6();
  /* 100ed2b2 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 100ed2b6 pop ecx */
  ECX = (pop32());
L_100ed2b7:;
  /* 100ed2b7 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 100ed2bb mov eax, edi */
  EAX = (EDI);
  /* 100ed2bd pop edi */
  EDI = (pop32());
  /* 100ed2be pop esi */
  ESI = (pop32());
  /* 100ed2bf ret  */
  ESPCHK(0x100ed274u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2c0 @ 0x100ed2c0 (147 bytes, 52 insns) */
void f_100ed2c0(void) {
  FTRACE(0x100ed2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed2c0 push ebx */
  push32((uint32_t)(EBX));
  /* 100ed2c1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 100ed2c5 cmp ebx, dword ptr [0x100f7d40] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x100f7d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed2cb push esi */
  push32((uint32_t)(ESI));
  /* 100ed2cc push edi */
  push32((uint32_t)(EDI));
  /* 100ed2cd jae 0x100ed341 */
  if (!C.cf) goto L_100ed341;
  /* 100ed2cf mov eax, ebx */
  EAX = (EBX);
  /* 100ed2d1 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100ed2d4 lea edi, [eax*4 + 0x100f7c40] */
  EDI = ((uint32_t)(EAX*4 + 0x100f7c40));
  /* 100ed2db mov eax, ebx */
  EAX = (EBX);
  /* 100ed2dd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100ed2e0 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 100ed2e3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100ed2e5 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 100ed2e8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100ed2ed je 0x100ed341 */
  if (C.zf) goto L_100ed341;
  /* 100ed2ef push ebx */
  push32((uint32_t)(EBX));
  /* 100ed2f0 call 0x100ec044 */
  push32(0x100ed2f5u); f_100ec044();
  /* 100ed2f5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 100ed2f7 pop ecx */
  ECX = (pop32());
  /* 100ed2f8 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100ed2fd je 0x100ed328 */
  if (C.zf) goto L_100ed328;
  /* 100ed2ff push ebx */
  push32((uint32_t)(EBX));
  /* 100ed300 call 0x100ec002 */
  push32(0x100ed305u); f_100ec002();
  /* 100ed305 pop ecx */
  ECX = (pop32());
  /* 100ed306 push eax */
  push32((uint32_t)(EAX));
  /* 100ed307 call dword ptr [0x100ee0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0d0))), 0x100ed30du);
  /* 100ed30d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ed30f jne 0x100ed31b */
  if (!C.zf) goto L_100ed31b;
  /* 100ed311 call dword ptr [0x100ee03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee03c))), 0x100ed317u);
  /* 100ed317 mov esi, eax */
  ESI = (EAX);
  /* 100ed319 jmp 0x100ed31d */
  goto L_100ed31d;
L_100ed31b:;
  /* 100ed31b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_100ed31d:;
  /* 100ed31d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 100ed31f je 0x100ed336 */
  if (C.zf) goto L_100ed336;
  /* 100ed321 call 0x100ebf7a */
  push32(0x100ed326u); f_100ebf7a();
  /* 100ed326 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_100ed328:;
  /* 100ed328 call 0x100ebf71 */
  push32(0x100ed32du); f_100ebf71();
  /* 100ed32d mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100ed333 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_100ed336:;
  /* 100ed336 push ebx */
  push32((uint32_t)(EBX));
  /* 100ed337 call 0x100ec0a3 */
  push32(0x100ed33cu); f_100ec0a3();
  /* 100ed33c pop ecx */
  ECX = (pop32());
  /* 100ed33d mov eax, esi */
  EAX = (ESI);
  /* 100ed33f jmp 0x100ed34f */
  goto L_100ed34f;
L_100ed341:;
  /* 100ed341 call 0x100ebf71 */
  push32(0x100ed346u); f_100ebf71();
  /* 100ed346 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100ed34c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_100ed34f:;
  /* 100ed34f pop edi */
  EDI = (pop32());
  /* 100ed350 pop esi */
  ESI = (pop32());
  /* 100ed351 pop ebx */
  EBX = (pop32());
  /* 100ed352 ret  */
  ESPCHK(0x100ed2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x100ed3f0 (62 bytes, 35 insns) */
void f_100ed3f0(void) {
  FTRACE(0x100ed3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 100ed3f1 mov ebp, esp */
  EBP = (ESP);
  /* 100ed3f3 push esi */
  push32((uint32_t)(ESI));
  /* 100ed3f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ed3f6 push eax */
  push32((uint32_t)(EAX));
  /* 100ed3f7 push eax */
  push32((uint32_t)(EAX));
  /* 100ed3f8 push eax */
  push32((uint32_t)(EAX));
  /* 100ed3f9 push eax */
  push32((uint32_t)(EAX));
  /* 100ed3fa push eax */
  push32((uint32_t)(EAX));
  /* 100ed3fb push eax */
  push32((uint32_t)(EAX));
  /* 100ed3fc push eax */
  push32((uint32_t)(EAX));
  /* 100ed3fd push eax */
  push32((uint32_t)(EAX));
  /* 100ed3fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ed401 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ed404:;
  /* 100ed404 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 100ed406 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100ed408 je 0x100ed411 */
  if (C.zf) goto L_100ed411;
  /* 100ed40a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100ed40b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x100ed40b");
  /* 100ed40f jmp 0x100ed404 */
  goto L_100ed404;
L_100ed411:;
  /* 100ed411 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ed414 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 100ed417 nop  */
  /* nop */
L_100ed418:;
  /* 100ed418 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100ed419 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ed41b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100ed41d je 0x100ed426 */
  if (C.zf) goto L_100ed426;
  /* 100ed41f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ed420 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x100ed420");
  /* 100ed424 jae 0x100ed418 */
  if (!C.cf) goto L_100ed418;
L_100ed426:;
  /* 100ed426 mov eax, ecx */
  EAX = (ECX);
  /* 100ed428 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed42b pop esi */
  ESI = (pop32());
  /* 100ed42c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ed42d ret  */
  ESPCHK(0x100ed3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x100ed430 (58 bytes, 32 insns) */
void f_100ed430(void) {
  FTRACE(0x100ed430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed430 push ebp */
  push32((uint32_t)(EBP));
  /* 100ed431 mov ebp, esp */
  EBP = (ESP);
  /* 100ed433 push esi */
  push32((uint32_t)(ESI));
  /* 100ed434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ed436 push eax */
  push32((uint32_t)(EAX));
  /* 100ed437 push eax */
  push32((uint32_t)(EAX));
  /* 100ed438 push eax */
  push32((uint32_t)(EAX));
  /* 100ed439 push eax */
  push32((uint32_t)(EAX));
  /* 100ed43a push eax */
  push32((uint32_t)(EAX));
  /* 100ed43b push eax */
  push32((uint32_t)(EAX));
  /* 100ed43c push eax */
  push32((uint32_t)(EAX));
  /* 100ed43d push eax */
  push32((uint32_t)(EAX));
  /* 100ed43e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ed441 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ed444:;
  /* 100ed444 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 100ed446 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100ed448 je 0x100ed451 */
  if (C.zf) goto L_100ed451;
  /* 100ed44a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 100ed44b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x100ed44b");
  /* 100ed44f jmp 0x100ed444 */
  goto L_100ed444;
L_100ed451:;
  /* 100ed451 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_100ed454:;
  /* 100ed454 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ed456 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100ed458 je 0x100ed464 */
  if (C.zf) goto L_100ed464;
  /* 100ed45a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ed45b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x100ed45b");
  /* 100ed45f jae 0x100ed454 */
  if (!C.cf) goto L_100ed454;
  /* 100ed461 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_100ed464:;
  /* 100ed464 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed467 pop esi */
  ESI = (pop32());
  /* 100ed468 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ed469 ret  */
  ESPCHK(0x100ed430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d46a @ 0x100ed46a (544 bytes, 177 insns) */
void f_100ed46a(void) {
  FTRACE(0x100ed46au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed46a push ebp */
  push32((uint32_t)(EBP));
  /* 100ed46b mov ebp, esp */
  EBP = (ESP);
  /* 100ed46d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ed470 push ebx */
  push32((uint32_t)(EBX));
  /* 100ed471 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ed474 push esi */
  push32((uint32_t)(ESI));
  /* 100ed475 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ed478 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 100ed47c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ed47e push edi */
  push32((uint32_t)(EDI));
  /* 100ed47f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 100ed482 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 100ed485 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 100ed488 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 100ed48b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 100ed48f mov edi, ecx */
  EDI = (ECX);
  /* 100ed491 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 100ed496 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 100ed498 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 100ed49a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 100ed49c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 100ed4a2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ed4a6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 100ed4a9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 100ed4ac jae 0x100ed66a */
  if (!C.cf) goto L_100ed66a;
  /* 100ed4b2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ed4b7 jae 0x100ed66a */
  if (!C.cf) goto L_100ed66a;
  /* 100ed4bd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ed4c2 ja 0x100ed66a */
  if ((!C.cf&&!C.zf)) goto L_100ed66a;
  /* 100ed4c8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ed4cd ja 0x100ed4d3 */
  if ((!C.cf&&!C.zf)) goto L_100ed4d3;
  /* 100ed4cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ed4d1 jmp 0x100ed50d */
  goto L_100ed50d;
L_100ed4d3:;
  /* 100ed4d3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 100ed4d6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 100ed4db jne 0x100ed4f5 */
  if (!C.zf) goto L_100ed4f5;
  /* 100ed4dd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 100ed4e0 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 100ed4e3 jne 0x100ed4f5 */
  if (!C.zf) goto L_100ed4f5;
  /* 100ed4e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ed4e7 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed4ea jne 0x100ed4f7 */
  if (!C.zf) goto L_100ed4f7;
  /* 100ed4ec cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed4ee jne 0x100ed4f7 */
  if (!C.zf) goto L_100ed4f7;
  /* 100ed4f0 jmp 0x100ed664 */
  goto L_100ed664;
L_100ed4f5:;
  /* 100ed4f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100ed4f7:;
  /* 100ed4f7 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ed4fa jne 0x100ed51a */
  if (!C.zf) goto L_100ed51a;
  /* 100ed4fc inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 100ed4ff test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 100ed502 jne 0x100ed51a */
  if (!C.zf) goto L_100ed51a;
  /* 100ed504 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed507 jne 0x100ed51a */
  if (!C.zf) goto L_100ed51a;
  /* 100ed509 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed50b jne 0x100ed51a */
  if (!C.zf) goto L_100ed51a;
L_100ed50d:;
  /* 100ed50d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 100ed510 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 100ed513 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100ed515 jmp 0x100ed685 */
  goto L_100ed685;
L_100ed51a:;
  /* 100ed51a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 100ed51d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 100ed520 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100ed523 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_100ed52a:;
  /* 100ed52a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 100ed52d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed52f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed533 jle 0x100ed57e */
  if ((C.zf||C.sf!=C.of)) goto L_100ed57e;
  /* 100ed535 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed537 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 100ed53a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 100ed53d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ed540 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 100ed543 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_100ed546:;
  /* 100ed546 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100ed549 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 100ed54c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 100ed54f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 100ed552 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 100ed555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ed558 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed55b push ecx */
  push32((uint32_t)(ECX));
  /* 100ed55c push eax */
  push32((uint32_t)(EAX));
  /* 100ed55d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 100ed55f call 0x100ec615 */
  push32(0x100ed564u); f_100ec615();
  /* 100ed564 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ed569 je 0x100ed571 */
  if (C.zf) goto L_100ed571;
  /* 100ed56b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100ed56e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_100ed571:;
  /* 100ed571 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ed575 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 100ed579 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 100ed57c jne 0x100ed546 */
  if (!C.zf) goto L_100ed546;
L_100ed57e:;
  /* 100ed57e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ed582 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 100ed585 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 100ed588 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed58c jg 0x100ed52a */
  if ((!C.zf&&C.sf==C.of)) goto L_100ed52a;
  /* 100ed58e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ed595 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ed59a jle 0x100ed5c1 */
  if ((C.zf||C.sf!=C.of)) goto L_100ed5c1;
L_100ed59c:;
  /* 100ed59c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 100ed5a0 jne 0x100ed5ba */
  if (!C.zf) goto L_100ed5ba;
  /* 100ed5a2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 100ed5a5 push eax */
  push32((uint32_t)(EAX));
  /* 100ed5a6 call 0x100ec694 */
  push32(0x100ed5abu); f_100ec694();
  /* 100ed5ab add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ed5b2 pop ecx */
  ECX = (pop32());
  /* 100ed5b3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ed5b8 jg 0x100ed59c */
  if ((!C.zf&&C.sf==C.of)) goto L_100ed59c;
L_100ed5ba:;
  /* 100ed5ba cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ed5bf jg 0x100ed5fa */
  if ((!C.zf&&C.sf==C.of)) goto L_100ed5fa;
L_100ed5c1:;
  /* 100ed5c1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ed5c8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ed5cd jge 0x100ed5fa */
  if ((C.sf==C.of)) goto L_100ed5fa;
  /* 100ed5cf movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 100ed5d3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ed5d5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 100ed5d8 mov ebx, eax */
  EBX = (EAX);
L_100ed5da:;
  /* 100ed5da test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 100ed5de je 0x100ed5e3 */
  if (C.zf) goto L_100ed5e3;
  /* 100ed5e0 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_100ed5e3:;
  /* 100ed5e3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 100ed5e6 push eax */
  push32((uint32_t)(EAX));
  /* 100ed5e7 call 0x100ec6c2 */
  push32(0x100ed5ecu); f_100ec6c2();
  /* 100ed5ec dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100ed5ed pop ecx */
  ECX = (pop32());
  /* 100ed5ee jne 0x100ed5da */
  if (!C.zf) goto L_100ed5da;
  /* 100ed5f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed5f4 je 0x100ed5fa */
  if (C.zf) goto L_100ed5fa;
  /* 100ed5f6 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_100ed5fa:;
  /* 100ed5fa cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ed600 ja 0x100ed611 */
  if ((!C.cf&&!C.zf)) goto L_100ed611;
  /* 100ed602 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 100ed605 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100ed60a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed60f jne 0x100ed646 */
  if (!C.zf) goto L_100ed646;
L_100ed611:;
  /* 100ed611 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed615 jne 0x100ed643 */
  if (!C.zf) goto L_100ed643;
  /* 100ed617 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 100ed61b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed61f jne 0x100ed63e */
  if (!C.zf) goto L_100ed63e;
  /* 100ed621 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 100ed625 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ed62b jne 0x100ed638 */
  if (!C.zf) goto L_100ed638;
  /* 100ed62d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 100ed630 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 100ed636 jmp 0x100ed646 */
  goto L_100ed646;
L_100ed638:;
  /* 100ed638 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 100ed63c jmp 0x100ed646 */
  goto L_100ed646;
L_100ed63e:;
  /* 100ed63e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 100ed641 jmp 0x100ed646 */
  goto L_100ed646;
L_100ed643:;
  /* 100ed643 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_100ed646:;
  /* 100ed646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ed649 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ed64d jae 0x100ed66a */
  if (!C.cf) goto L_100ed66a;
  /* 100ed64f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 100ed653 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 100ed655 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 100ed658 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 100ed65b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 100ed65e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 100ed661 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_100ed664:;
  /* 100ed664 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 100ed668 jmp 0x100ed685 */
  goto L_100ed685;
L_100ed66a:;
  /* 100ed66a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 100ed66d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ed66f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 100ed673 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 100ed679 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed67f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 100ed682 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_100ed685:;
  /* 100ed685 pop edi */
  EDI = (pop32());
  /* 100ed686 pop esi */
  ESI = (pop32());
  /* 100ed687 pop ebx */
  EBX = (pop32());
  /* 100ed688 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ed689 ret  */
  ESPCHK(0x100ed46au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d68a @ 0x100ed68a (124 bytes, 52 insns) */
void f_100ed68a(void) {
  FTRACE(0x100ed68au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed68a push ebp */
  push32((uint32_t)(EBP));
  /* 100ed68b mov ebp, esp */
  EBP = (ESP);
  /* 100ed68d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ed690 push ebx */
  push32((uint32_t)(EBX));
  /* 100ed691 mov ebx, 0x100f3220 */
  EBX = (0x100f3220u);
  /* 100ed696 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100ed698 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ed69b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed69e je 0x100ed703 */
  if (C.zf) goto L_100ed703;
  /* 100ed6a0 jge 0x100ed6b2 */
  if ((C.sf==C.of)) goto L_100ed6b2;
  /* 100ed6a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ed6a5 mov ebx, 0x100f3380 */
  EBX = (0x100f3380u);
  /* 100ed6aa neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ed6ac mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100ed6af sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_100ed6b2:;
  /* 100ed6b2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed6b5 jne 0x100ed6bd */
  if (!C.zf) goto L_100ed6bd;
  /* 100ed6b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100ed6ba mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_100ed6bd:;
  /* 100ed6bd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed6c0 je 0x100ed703 */
  if (C.zf) goto L_100ed703;
  /* 100ed6c2 push esi */
  push32((uint32_t)(ESI));
  /* 100ed6c3 push edi */
  push32((uint32_t)(EDI));
L_100ed6c4:;
  /* 100ed6c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100ed6c7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed6ca sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 100ed6ce and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 100ed6d1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed6d3 je 0x100ed6fc */
  if (C.zf) goto L_100ed6fc;
  /* 100ed6d5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 100ed6d8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 100ed6de lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 100ed6e1 jb 0x100ed6ef */
  if (C.cf) goto L_100ed6ef;
  /* 100ed6e3 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 100ed6e6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ed6e7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ed6e8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 100ed6e9 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 100ed6ec lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_100ed6ef:;
  /* 100ed6ef push esi */
  push32((uint32_t)(ESI));
  /* 100ed6f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100ed6f3 call 0x100ed46a */
  push32(0x100ed6f8u); f_100ed46a();
  /* 100ed6f8 pop ecx */
  ECX = (pop32());
  /* 100ed6f9 pop ecx */
  ECX = (pop32());
  /* 100ed6fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_100ed6fc:;
  /* 100ed6fc cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed6ff jne 0x100ed6c4 */
  if (!C.zf) goto L_100ed6c4;
  /* 100ed701 pop edi */
  EDI = (pop32());
  /* 100ed702 pop esi */
  ESI = (pop32());
L_100ed703:;
  /* 100ed703 pop ebx */
  EBX = (pop32());
  /* 100ed704 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ed705 ret  */
  ESPCHK(0x100ed68au, _esp0);
  ESP += 4; return;
}

/* FUN_1000d706 @ 0x100ed706 (93 bytes, 32 insns) */
void f_100ed706(void) {
  FTRACE(0x100ed706u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed706 push esi */
  push32((uint32_t)(ESI));
  /* 100ed707 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100ed70b cmp esi, dword ptr [0x100f7d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x100f7d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed711 jae 0x100ed74b */
  if (!C.cf) goto L_100ed74b;
  /* 100ed713 mov ecx, esi */
  ECX = (ESI);
  /* 100ed715 mov eax, esi */
  EAX = (ESI);
  /* 100ed717 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 100ed71a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 100ed71d mov ecx, dword ptr [ecx*4 + 0x100f7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x100f7c40)));
  /* 100ed724 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 100ed727 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 100ed72c je 0x100ed74b */
  if (C.zf) goto L_100ed74b;
  /* 100ed72e push edi */
  push32((uint32_t)(EDI));
  /* 100ed72f push esi */
  push32((uint32_t)(ESI));
  /* 100ed730 call 0x100ec044 */
  push32(0x100ed735u); f_100ec044();
  /* 100ed735 push esi */
  push32((uint32_t)(ESI));
  /* 100ed736 call 0x100ed763 */
  push32(0x100ed73bu); f_100ed763();
  /* 100ed73b push esi */
  push32((uint32_t)(ESI));
  /* 100ed73c mov edi, eax */
  EDI = (EAX);
  /* 100ed73e call 0x100ec0a3 */
  push32(0x100ed743u); f_100ec0a3();
  /* 100ed743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed746 mov eax, edi */
  EAX = (EDI);
  /* 100ed748 pop edi */
  EDI = (pop32());
  /* 100ed749 pop esi */
  ESI = (pop32());
  /* 100ed74a ret  */
  ESPCHK(0x100ed706u, _esp0);
  ESP += 4; return;
L_100ed74b:;
  /* 100ed74b call 0x100ebf71 */
  push32(0x100ed750u); f_100ebf71();
  /* 100ed750 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 100ed756 call 0x100ebf7a */
  push32(0x100ed75bu); f_100ebf7a();
  /* 100ed75b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100ed75e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100ed761 pop esi */
  ESI = (pop32());
  /* 100ed762 ret  */
  ESPCHK(0x100ed706u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d763 @ 0x100ed763 (131 bytes, 52 insns) */
void f_100ed763(void) {
  FTRACE(0x100ed763u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed763 push esi */
  push32((uint32_t)(ESI));
  /* 100ed764 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100ed768 push edi */
  push32((uint32_t)(EDI));
  /* 100ed769 push esi */
  push32((uint32_t)(ESI));
  /* 100ed76a call 0x100ec002 */
  push32(0x100ed76fu); f_100ec002();
  /* 100ed76f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed772 pop ecx */
  ECX = (pop32());
  /* 100ed773 je 0x100ed7b1 */
  if (C.zf) goto L_100ed7b1;
  /* 100ed775 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed778 je 0x100ed77f */
  if (C.zf) goto L_100ed77f;
  /* 100ed77a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed77d jne 0x100ed795 */
  if (!C.zf) goto L_100ed795;
L_100ed77f:;
  /* 100ed77f push 2 */
  push32((uint32_t)(0x2u));
  /* 100ed781 call 0x100ec002 */
  push32(0x100ed786u); f_100ec002();
  /* 100ed786 push 1 */
  push32((uint32_t)(0x1u));
  /* 100ed788 mov edi, eax */
  EDI = (EAX);
  /* 100ed78a call 0x100ec002 */
  push32(0x100ed78fu); f_100ec002();
  /* 100ed78f pop ecx */
  ECX = (pop32());
  /* 100ed790 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed792 pop ecx */
  ECX = (pop32());
  /* 100ed793 je 0x100ed7b1 */
  if (C.zf) goto L_100ed7b1;
L_100ed795:;
  /* 100ed795 push esi */
  push32((uint32_t)(ESI));
  /* 100ed796 call 0x100ec002 */
  push32(0x100ed79bu); f_100ec002();
  /* 100ed79b pop ecx */
  ECX = (pop32());
  /* 100ed79c push eax */
  push32((uint32_t)(EAX));
  /* 100ed79d call dword ptr [0x100ee0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee0d4))), 0x100ed7a3u);
  /* 100ed7a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100ed7a5 jne 0x100ed7b1 */
  if (!C.zf) goto L_100ed7b1;
  /* 100ed7a7 call dword ptr [0x100ee03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x100ee03c))), 0x100ed7adu);
  /* 100ed7ad mov edi, eax */
  EDI = (EAX);
  /* 100ed7af jmp 0x100ed7b3 */
  goto L_100ed7b3;
L_100ed7b1:;
  /* 100ed7b1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_100ed7b3:;
  /* 100ed7b3 push esi */
  push32((uint32_t)(ESI));
  /* 100ed7b4 call 0x100ebf83 */
  push32(0x100ed7b9u); f_100ebf83();
  /* 100ed7b9 mov eax, esi */
  EAX = (ESI);
  /* 100ed7bb and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 100ed7be sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 100ed7c1 pop ecx */
  ECX = (pop32());
  /* 100ed7c2 mov eax, dword ptr [eax*4 + 0x100f7c40] */
  EAX = (r32((uint32_t)(EAX*4 + 0x100f7c40)));
  /* 100ed7c9 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 100ed7cc and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 100ed7d1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 100ed7d3 je 0x100ed7e1 */
  if (C.zf) goto L_100ed7e1;
  /* 100ed7d5 push edi */
  push32((uint32_t)(EDI));
  /* 100ed7d6 call 0x100ebefe */
  push32(0x100ed7dbu); f_100ebefe();
  /* 100ed7db pop ecx */
  ECX = (pop32());
  /* 100ed7dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100ed7df jmp 0x100ed7e3 */
  goto L_100ed7e3;
L_100ed7e1:;
  /* 100ed7e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100ed7e3:;
  /* 100ed7e3 pop edi */
  EDI = (pop32());
  /* 100ed7e4 pop esi */
  ESI = (pop32());
  /* 100ed7e5 ret  */
  ESPCHK(0x100ed763u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x100ed7e6 (43 bytes, 17 insns) */
void f_100ed7e6(void) {
  FTRACE(0x100ed7e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed7e6 push esi */
  push32((uint32_t)(ESI));
  /* 100ed7e7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 100ed7eb mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 100ed7ee test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 100ed7f0 je 0x100ed80f */
  if (C.zf) goto L_100ed80f;
  /* 100ed7f2 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 100ed7f4 je 0x100ed80f */
  if (C.zf) goto L_100ed80f;
  /* 100ed7f6 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 100ed7f9 call 0x100ea1c6 */
  push32(0x100ed7feu); f_100ea1c6();
  /* 100ed7fe and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 100ed804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ed806 pop ecx */
  ECX = (pop32());
  /* 100ed807 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 100ed809 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 100ed80c mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_100ed80f:;
  /* 100ed80f pop esi */
  ESI = (pop32());
  /* 100ed810 ret  */
  ESPCHK(0x100ed7e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x100ed820 (208 bytes, 85 insns) */
void f_100ed820(void) {
  FTRACE(0x100ed820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed820 push ebp */
  push32((uint32_t)(EBP));
  /* 100ed821 mov ebp, esp */
  EBP = (ESP);
  /* 100ed823 push edi */
  push32((uint32_t)(EDI));
  /* 100ed824 push esi */
  push32((uint32_t)(ESI));
  /* 100ed825 push ebx */
  push32((uint32_t)(EBX));
  /* 100ed826 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 100ed829 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ed82c lea eax, [0x100f6830] */
  EAX = ((uint32_t)(0x100f6830));
  /* 100ed832 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed836 jne 0x100ed873 */
  if (!C.zf) goto L_100ed873;
  /* 100ed838 mov al, 0xff */
  AL = (0xffu);
  /* 100ed83a mov edi, edi */
  EDI = (EDI);
L_100ed83c:;
  /* 100ed83c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100ed83e je 0x100ed86e */
  if (C.zf) goto L_100ed86e;
  /* 100ed840 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ed842 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ed843 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 100ed845 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ed846 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ed848 je 0x100ed83c */
  if (C.zf) goto L_100ed83c;
  /* 100ed84a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ed84c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ed84e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ed850 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 100ed853 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100ed855 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100ed857 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 100ed859 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ed85b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ed85d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ed85f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 100ed862 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100ed864 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 100ed866 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ed868 je 0x100ed83c */
  if (C.zf) goto L_100ed83c;
  /* 100ed86a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 100ed86c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_100ed86e:;
  /* 100ed86e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 100ed871 jmp 0x100ed8eb */
  goto L_100ed8eb;
L_100ed873:;
  /* 100ed873 lock inc dword ptr [0x100f69b4] */
  x86_unimpl("lock inc @ 0x100ed873");
  /* 100ed87a cmp dword ptr [0x100f69b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100f69b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed881 jg 0x100ed887 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ed887;
  /* 100ed883 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ed885 jmp 0x100ed89c */
  goto L_100ed89c;
L_100ed887:;
  /* 100ed887 lock dec dword ptr [0x100f69b4] */
  x86_unimpl("lock dec @ 0x100ed887");
  /* 100ed88e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100ed890 call 0x100ea013 */
  push32(0x100ed895u); f_100ea013();
  /* 100ed895 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_100ed89c:;
  /* 100ed89c mov eax, 0xff */
  EAX = (0xffu);
  /* 100ed8a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ed8a3 nop  */
  /* nop */
L_100ed8a4:;
  /* 100ed8a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100ed8a6 je 0x100ed8cf */
  if (C.zf) goto L_100ed8cf;
  /* 100ed8a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ed8aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ed8ab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ed8ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ed8ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ed8b0 je 0x100ed8a4 */
  if (C.zf) goto L_100ed8a4;
  /* 100ed8b2 push eax */
  push32((uint32_t)(EAX));
  /* 100ed8b3 push ebx */
  push32((uint32_t)(EBX));
  /* 100ed8b4 call 0x100e94af */
  push32(0x100ed8b9u); f_100e94af();
  /* 100ed8b9 mov ebx, eax */
  EBX = (EAX);
  /* 100ed8bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed8be call 0x100e94af */
  push32(0x100ed8c3u); f_100e94af();
  /* 100ed8c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed8c6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ed8c8 je 0x100ed8a4 */
  if (C.zf) goto L_100ed8a4;
  /* 100ed8ca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100ed8cc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_100ed8cf:;
  /* 100ed8cf mov ebx, eax */
  EBX = (EAX);
  /* 100ed8d1 pop eax */
  EAX = (pop32());
  /* 100ed8d2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ed8d4 jne 0x100ed8df */
  if (!C.zf) goto L_100ed8df;
  /* 100ed8d6 lock dec dword ptr [0x100f69b4] */
  x86_unimpl("lock dec @ 0x100ed8d6");
  /* 100ed8dd jmp 0x100ed8e9 */
  goto L_100ed8e9;
L_100ed8df:;
  /* 100ed8df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100ed8e1 call 0x100ea074 */
  push32(0x100ed8e6u); f_100ea074();
  /* 100ed8e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_100ed8e9:;
  /* 100ed8e9 mov eax, ebx */
  EAX = (EBX);
L_100ed8eb:;
  /* 100ed8eb pop ebx */
  EBX = (pop32());
  /* 100ed8ec pop esi */
  ESI = (pop32());
  /* 100ed8ed pop edi */
  EDI = (pop32());
  /* 100ed8ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ed8ef ret  */
  ESPCHK(0x100ed820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8f0 @ 0x100ed8f0 (257 bytes, 103 insns) */
void f_100ed8f0(void) {
  FTRACE(0x100ed8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100ed8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 100ed8f1 mov ebp, esp */
  EBP = (ESP);
  /* 100ed8f3 push edi */
  push32((uint32_t)(EDI));
  /* 100ed8f4 push esi */
  push32((uint32_t)(ESI));
  /* 100ed8f5 push ebx */
  push32((uint32_t)(EBX));
  /* 100ed8f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 100ed8f9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100ed8fb je 0x100ed9ea */
  if (C.zf) goto L_100ed9ea;
  /* 100ed901 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100ed904 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 100ed907 lea eax, [0x100f6830] */
  EAX = ((uint32_t)(0x100f6830));
  /* 100ed90d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed911 jne 0x100ed961 */
  if (!C.zf) goto L_100ed961;
  /* 100ed913 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 100ed915 mov bl, 0x5a */
  BL = (0x5au);
  /* 100ed917 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 100ed919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_100ed91c:;
  /* 100ed91c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 100ed91e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 100ed920 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 100ed922 je 0x100ed945 */
  if (C.zf) goto L_100ed945;
  /* 100ed924 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 100ed926 je 0x100ed945 */
  if (C.zf) goto L_100ed945;
  /* 100ed928 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ed929 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ed92a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ed92c jb 0x100ed934 */
  if (C.cf) goto L_100ed934;
  /* 100ed92e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ed930 ja 0x100ed934 */
  if ((!C.cf&&!C.zf)) goto L_100ed934;
  /* 100ed932 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_100ed934:;
  /* 100ed934 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ed936 jb 0x100ed93e */
  if (C.cf) goto L_100ed93e;
  /* 100ed938 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ed93a ja 0x100ed93e */
  if ((!C.cf&&!C.zf)) goto L_100ed93e;
  /* 100ed93c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_100ed93e:;
  /* 100ed93e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ed940 jne 0x100ed94f */
  if (!C.zf) goto L_100ed94f;
  /* 100ed942 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100ed943 jne 0x100ed91c */
  if (!C.zf) goto L_100ed91c;
L_100ed945:;
  /* 100ed945 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100ed947 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100ed949 je 0x100ed9ea */
  if (C.zf) goto L_100ed9ea;
L_100ed94f:;
  /* 100ed94f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 100ed954 jb 0x100ed9ea */
  if (C.cf) goto L_100ed9ea;
  /* 100ed95a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100ed95c jmp 0x100ed9ea */
  goto L_100ed9ea;
L_100ed961:;
  /* 100ed961 lock inc dword ptr [0x100f69b4] */
  x86_unimpl("lock inc @ 0x100ed961");
  /* 100ed968 cmp dword ptr [0x100f69b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100f69b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed96f jg 0x100ed975 */
  if ((!C.zf&&C.sf==C.of)) goto L_100ed975;
  /* 100ed971 push 0 */
  push32((uint32_t)(0x0u));
  /* 100ed973 jmp 0x100ed98e */
  goto L_100ed98e;
L_100ed975:;
  /* 100ed975 lock dec dword ptr [0x100f69b4] */
  x86_unimpl("lock dec @ 0x100ed975");
  /* 100ed97c mov ebx, ecx */
  EBX = (ECX);
  /* 100ed97e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100ed980 call 0x100ea013 */
  push32(0x100ed985u); f_100ea013();
  /* 100ed985 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 100ed98c mov ecx, ebx */
  ECX = (EBX);
L_100ed98e:;
  /* 100ed98e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ed990 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ed992 mov edi, edi */
  EDI = (EDI);
L_100ed994:;
  /* 100ed994 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 100ed996 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ed998 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 100ed99a je 0x100ed9bf */
  if (C.zf) goto L_100ed9bf;
  /* 100ed99c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 100ed99e je 0x100ed9bf */
  if (C.zf) goto L_100ed9bf;
  /* 100ed9a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100ed9a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 100ed9a2 push ecx */
  push32((uint32_t)(ECX));
  /* 100ed9a3 push eax */
  push32((uint32_t)(EAX));
  /* 100ed9a4 push ebx */
  push32((uint32_t)(EBX));
  /* 100ed9a5 call 0x100e94af */
  push32(0x100ed9aau); f_100e94af();
  /* 100ed9aa mov ebx, eax */
  EBX = (EAX);
  /* 100ed9ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed9af call 0x100e94af */
  push32(0x100ed9b4u); f_100e94af();
  /* 100ed9b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed9b7 pop ecx */
  ECX = (pop32());
  /* 100ed9b8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed9ba jne 0x100ed9c5 */
  if (!C.zf) goto L_100ed9c5;
  /* 100ed9bc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 100ed9bd jne 0x100ed994 */
  if (!C.zf) goto L_100ed994;
L_100ed9bf:;
  /* 100ed9bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 100ed9c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100ed9c3 je 0x100ed9ce */
  if (C.zf) goto L_100ed9ce;
L_100ed9c5:;
  /* 100ed9c5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 100ed9ca jb 0x100ed9ce */
  if (C.cf) goto L_100ed9ce;
  /* 100ed9cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_100ed9ce:;
  /* 100ed9ce pop eax */
  EAX = (pop32());
  /* 100ed9cf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100ed9d1 jne 0x100ed9dc */
  if (!C.zf) goto L_100ed9dc;
  /* 100ed9d3 lock dec dword ptr [0x100f69b4] */
  x86_unimpl("lock dec @ 0x100ed9d3");
  /* 100ed9da jmp 0x100ed9ea */
  goto L_100ed9ea;
L_100ed9dc:;
  /* 100ed9dc mov ebx, ecx */
  EBX = (ECX);
  /* 100ed9de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100ed9e0 call 0x100ea074 */
  push32(0x100ed9e5u); f_100ea074();
  /* 100ed9e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100ed9e8 mov ecx, ebx */
  ECX = (EBX);
L_100ed9ea:;
  /* 100ed9ea mov eax, ecx */
  EAX = (ECX);
  /* 100ed9ec pop ebx */
  EBX = (pop32());
  /* 100ed9ed pop esi */
  ESI = (pop32());
  /* 100ed9ee pop edi */
  EDI = (pop32());
  /* 100ed9ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100ed9f0 ret  */
  ESPCHK(0x100ed8f0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x100eda34 (6 bytes, 1 insns) */
void f_100eda34(void) {
  FTRACE(0x100eda34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100eda34 jmp dword ptr [0x100ee0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100ee0cc)))); return;
}

