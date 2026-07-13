#include "recomp.h"

/* FUN_10012400 @ 0x10e62400 (62 bytes, 35 insns) */
void f_10e62400(void) {
  FTRACE(0x10e62400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62400 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62401 mov ebp, esp */
  EBP = (ESP);
  /* 10e62403 push esi */
  push32((uint32_t)(ESI));
  /* 10e62404 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e62406 push eax */
  push32((uint32_t)(EAX));
  /* 10e62407 push eax */
  push32((uint32_t)(EAX));
  /* 10e62408 push eax */
  push32((uint32_t)(EAX));
  /* 10e62409 push eax */
  push32((uint32_t)(EAX));
  /* 10e6240a push eax */
  push32((uint32_t)(EAX));
  /* 10e6240b push eax */
  push32((uint32_t)(EAX));
  /* 10e6240c push eax */
  push32((uint32_t)(EAX));
  /* 10e6240d push eax */
  push32((uint32_t)(EAX));
  /* 10e6240e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e62411 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e62414:;
  /* 10e62414 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e62416 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e62418 je 0x10e62421 */
  if (C.zf) goto L_10e62421;
  /* 10e6241a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10e6241b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10e6241b");
  /* 10e6241f jmp 0x10e62414 */
  goto L_10e62414;
L_10e62421:;
  /* 10e62421 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e62424 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e62427 nop  */
  /* nop */
L_10e62428:;
  /* 10e62428 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10e62429 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e6242b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e6242d je 0x10e62436 */
  if (C.zf) goto L_10e62436;
  /* 10e6242f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e62430 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10e62430");
  /* 10e62434 jae 0x10e62428 */
  if (!C.cf) goto L_10e62428;
L_10e62436:;
  /* 10e62436 mov eax, ecx */
  EAX = (ECX);
  /* 10e62438 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6243b pop esi */
  ESI = (pop32());
  /* 10e6243c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e6243d ret  */
  ESPCHK(0x10e62400u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10e62440 (56 bytes, 31 insns) */
void f_10e62440(void) {
  FTRACE(0x10e62440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62440 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62441 mov ebp, esp */
  EBP = (ESP);
  /* 10e62443 push edi */
  push32((uint32_t)(EDI));
  /* 10e62444 push esi */
  push32((uint32_t)(ESI));
  /* 10e62445 push ebx */
  push32((uint32_t)(EBX));
  /* 10e62446 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e62449 jecxz 0x10e62471 */
  x86_unimpl("jecxz @ 0x10e62449");
  /* 10e6244b mov ebx, ecx */
  EBX = (ECX);
  /* 10e6244d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e62450 mov esi, edi */
  ESI = (EDI);
  /* 10e62452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e62454 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10e62456 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e62458 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6245a mov edi, esi */
  EDI = (ESI);
  /* 10e6245c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e6245f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10e62461 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10e62464 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e62466 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e62469 ja 0x10e6246f */
  if ((!C.cf&&!C.zf)) goto L_10e6246f;
  /* 10e6246b je 0x10e62471 */
  if (C.zf) goto L_10e62471;
  /* 10e6246d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e6246e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10e6246f:;
  /* 10e6246f not ecx */
  ECX = (~(ECX));
L_10e62471:;
  /* 10e62471 mov eax, ecx */
  EAX = (ECX);
  /* 10e62473 pop ebx */
  EBX = (pop32());
  /* 10e62474 pop esi */
  ESI = (pop32());
  /* 10e62475 pop edi */
  EDI = (pop32());
  /* 10e62476 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e62477 ret  */
  ESPCHK(0x10e62440u, _esp0);
  ESP += 4; return;
}

/* FUN_10012480 @ 0x10e62480 (58 bytes, 32 insns) */
void f_10e62480(void) {
  FTRACE(0x10e62480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62480 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62481 mov ebp, esp */
  EBP = (ESP);
  /* 10e62483 push esi */
  push32((uint32_t)(ESI));
  /* 10e62484 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e62486 push eax */
  push32((uint32_t)(EAX));
  /* 10e62487 push eax */
  push32((uint32_t)(EAX));
  /* 10e62488 push eax */
  push32((uint32_t)(EAX));
  /* 10e62489 push eax */
  push32((uint32_t)(EAX));
  /* 10e6248a push eax */
  push32((uint32_t)(EAX));
  /* 10e6248b push eax */
  push32((uint32_t)(EAX));
  /* 10e6248c push eax */
  push32((uint32_t)(EAX));
  /* 10e6248d push eax */
  push32((uint32_t)(EAX));
  /* 10e6248e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e62491 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e62494:;
  /* 10e62494 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e62496 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e62498 je 0x10e624a1 */
  if (C.zf) goto L_10e624a1;
  /* 10e6249a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10e6249b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10e6249b");
  /* 10e6249f jmp 0x10e62494 */
  goto L_10e62494;
L_10e624a1:;
  /* 10e624a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10e624a4:;
  /* 10e624a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e624a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e624a8 je 0x10e624b4 */
  if (C.zf) goto L_10e624b4;
  /* 10e624aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e624ab bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10e624ab");
  /* 10e624af jae 0x10e624a4 */
  if (!C.cf) goto L_10e624a4;
  /* 10e624b1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10e624b4:;
  /* 10e624b4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e624b7 pop esi */
  ESI = (pop32());
  /* 10e624b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e624b9 ret  */
  ESPCHK(0x10e62480u, _esp0);
  ESP += 4; return;
}

/* FUN_100124c0 @ 0x10e624c0 (512 bytes, 147 insns) */
void f_10e624c0(void) {
  FTRACE(0x10e624c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e624c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e624c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e624c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e624c6 cmp dword ptr [0x10e82a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e624cd jne 0x10e624f2 */
  if (!C.zf) goto L_10e624f2;
  /* 10e624cf call 0x10e62f90 */
  push32(0x10e624d4u); f_10e62f90();
  /* 10e624d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e624d6 je 0x10e624e2 */
  if (C.zf) goto L_10e624e2;
  /* 10e624d8 mov eax, dword ptr [0x10e85318] */
  EAX = (r32((uint32_t)(0x10e85318)));
  /* 10e624dd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e624e0 jmp 0x10e624e9 */
  goto L_10e624e9;
L_10e624e2:;
  /* 10e624e2 mov dword ptr [ebp - 8], 0x10e62fe0 */
  w32((uint32_t)(EBP + -0x8), (0x10e62fe0u));
L_10e624e9:;
  /* 10e624e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e624ec mov dword ptr [0x10e82a3c], ecx */
  w32((uint32_t)(0x10e82a3c), (ECX));
L_10e624f2:;
  /* 10e624f2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e624f6 jne 0x10e62502 */
  if (!C.zf) goto L_10e62502;
  /* 10e624f8 call 0x10e62de0 */
  push32(0x10e624fdu); f_10e62de0();
  /* 10e624fd jmp 0x10e625ce */
  goto L_10e625ce;
L_10e62502:;
  /* 10e62502 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e62505 mov dword ptr [0x10e82a2c], edx */
  w32((uint32_t)(0x10e82a2c), (EDX));
  /* 10e6250b cmp dword ptr [0x10e82a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62512 je 0x10e62534 */
  if (C.zf) goto L_10e62534;
  /* 10e62514 mov eax, dword ptr [0x10e82a2c] */
  EAX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e62519 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e6251c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e6251e je 0x10e62534 */
  if (C.zf) goto L_10e62534;
  /* 10e62520 push 0x10e82a2c */
  push32((uint32_t)(0x10e82a2cu));
  /* 10e62525 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e62527 push 0x10e81aa0 */
  push32((uint32_t)(0x10e81aa0u));
  /* 10e6252c call 0x10e626c0 */
  push32(0x10e62531u); f_10e626c0();
  /* 10e62531 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e62534:;
  /* 10e62534 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e62537 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6253a mov dword ptr [0x10e82a30], edx */
  w32((uint32_t)(0x10e82a30), (EDX));
  /* 10e62540 cmp dword ptr [0x10e82a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62547 je 0x10e62569 */
  if (C.zf) goto L_10e62569;
  /* 10e62549 mov eax, dword ptr [0x10e82a30] */
  EAX = (r32((uint32_t)(0x10e82a30)));
  /* 10e6254e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e62551 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e62553 je 0x10e62569 */
  if (C.zf) goto L_10e62569;
  /* 10e62555 push 0x10e82a30 */
  push32((uint32_t)(0x10e82a30u));
  /* 10e6255a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10e6255c push 0x10e819e8 */
  push32((uint32_t)(0x10e819e8u));
  /* 10e62561 call 0x10e626c0 */
  push32(0x10e62566u); f_10e626c0();
  /* 10e62566 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e62569:;
  /* 10e62569 mov dword ptr [0x10e82a34], 0 */
  w32((uint32_t)(0x10e82a34), (0x0u));
  /* 10e62573 cmp dword ptr [0x10e82a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6257a je 0x10e625ad */
  if (C.zf) goto L_10e625ad;
  /* 10e6257c mov edx, dword ptr [0x10e82a2c] */
  EDX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e62582 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e62585 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62587 je 0x10e625ad */
  if (C.zf) goto L_10e625ad;
  /* 10e62589 cmp dword ptr [0x10e82a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62590 je 0x10e625a6 */
  if (C.zf) goto L_10e625a6;
  /* 10e62592 mov ecx, dword ptr [0x10e82a30] */
  ECX = (r32((uint32_t)(0x10e82a30)));
  /* 10e62598 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e6259b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e6259d je 0x10e625a6 */
  if (C.zf) goto L_10e625a6;
  /* 10e6259f call 0x10e62750 */
  push32(0x10e625a4u); f_10e62750();
  /* 10e625a4 jmp 0x10e625ab */
  goto L_10e625ab;
L_10e625a6:;
  /* 10e625a6 call 0x10e62b40 */
  push32(0x10e625abu); f_10e62b40();
L_10e625ab:;
  /* 10e625ab jmp 0x10e625ce */
  goto L_10e625ce;
L_10e625ad:;
  /* 10e625ad cmp dword ptr [0x10e82a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e625b4 je 0x10e625c9 */
  if (C.zf) goto L_10e625c9;
  /* 10e625b6 mov eax, dword ptr [0x10e82a30] */
  EAX = (r32((uint32_t)(0x10e82a30)));
  /* 10e625bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e625be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e625c0 je 0x10e625c9 */
  if (C.zf) goto L_10e625c9;
  /* 10e625c2 call 0x10e62ce0 */
  push32(0x10e625c7u); f_10e62ce0();
  /* 10e625c7 jmp 0x10e625ce */
  goto L_10e625ce;
L_10e625c9:;
  /* 10e625c9 call 0x10e62de0 */
  push32(0x10e625ceu); f_10e62de0();
L_10e625ce:;
  /* 10e625ce cmp dword ptr [0x10e82a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e625d5 jne 0x10e625de */
  if (!C.zf) goto L_10e625de;
  /* 10e625d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e625d9 jmp 0x10e626bc */
  goto L_10e626bc;
L_10e625de:;
  /* 10e625de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e625e1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e625e7 push edx */
  push32((uint32_t)(EDX));
  /* 10e625e8 call 0x10e62e10 */
  push32(0x10e625edu); f_10e62e10();
  /* 10e625ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e625f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e625f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e625f7 je 0x10e6260c */
  if (C.zf) goto L_10e6260c;
  /* 10e625f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e625fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e62601 push eax */
  push32((uint32_t)(EAX));
  /* 10e62602 call dword ptr [0x10e8531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8531c))), 0x10e62608u);
  /* 10e62608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e6260a jne 0x10e62613 */
  if (!C.zf) goto L_10e62613;
L_10e6260c:;
  /* 10e6260c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6260e jmp 0x10e626bc */
  goto L_10e626bc;
L_10e62613:;
  /* 10e62613 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e62615 mov ecx, dword ptr [0x10e82a1c] */
  ECX = (r32((uint32_t)(0x10e82a1c)));
  /* 10e6261b push ecx */
  push32((uint32_t)(ECX));
  /* 10e6261c call dword ptr [0x10e85320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85320))), 0x10e62622u);
  /* 10e62622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62624 jne 0x10e6262d */
  if (!C.zf) goto L_10e6262d;
  /* 10e62626 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e62628 jmp 0x10e626bc */
  goto L_10e626bc;
L_10e6262d:;
  /* 10e6262d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62631 je 0x10e62658 */
  if (C.zf) goto L_10e62658;
  /* 10e62633 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e62636 mov ax, word ptr [0x10e82a1c] */
  AX = (r16((uint32_t)(0x10e82a1c)));
  /* 10e6263c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10e6263f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e62642 mov dx, word ptr [0x10e82a38] */
  DX = (r16((uint32_t)(0x10e82a38)));
  /* 10e62649 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10e6264d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e62650 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10e62654 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10e62658:;
  /* 10e62658 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6265c je 0x10e626b7 */
  if (C.zf) goto L_10e626b7;
  /* 10e6265e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e62660 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e62663 push edx */
  push32((uint32_t)(EDX));
  /* 10e62664 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10e62669 mov eax, dword ptr [0x10e82a1c] */
  EAX = (r32((uint32_t)(0x10e82a1c)));
  /* 10e6266e push eax */
  push32((uint32_t)(EAX));
  /* 10e6266f call dword ptr [0x10e82a3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e82a3c))), 0x10e62675u);
  /* 10e62675 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62677 jne 0x10e6267d */
  if (!C.zf) goto L_10e6267d;
  /* 10e62679 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6267b jmp 0x10e626bc */
  goto L_10e626bc;
L_10e6267d:;
  /* 10e6267d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10e6267f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e62682 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62685 push ecx */
  push32((uint32_t)(ECX));
  /* 10e62686 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10e6268b mov edx, dword ptr [0x10e82a38] */
  EDX = (r32((uint32_t)(0x10e82a38)));
  /* 10e62691 push edx */
  push32((uint32_t)(EDX));
  /* 10e62692 call dword ptr [0x10e82a3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e82a3c))), 0x10e62698u);
  /* 10e62698 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e6269a jne 0x10e626a0 */
  if (!C.zf) goto L_10e626a0;
  /* 10e6269c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6269e jmp 0x10e626bc */
  goto L_10e626bc;
L_10e626a0:;
  /* 10e626a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10e626a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e626a5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e626aa push eax */
  push32((uint32_t)(EAX));
  /* 10e626ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e626ae push ecx */
  push32((uint32_t)(ECX));
  /* 10e626af call 0x10e59220 */
  push32(0x10e626b4u); f_10e59220();
  /* 10e626b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e626b7:;
  /* 10e626b7 mov eax, 1 */
  EAX = (0x1u);
L_10e626bc:;
  /* 10e626bc mov esp, ebp */
  ESP = (EBP);
  /* 10e626be pop ebp */
  EBP = (pop32());
  /* 10e626bf ret  */
  ESPCHK(0x10e624c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126c0 @ 0x10e626c0 (130 bytes, 47 insns) */
void f_10e626c0(void) {
  FTRACE(0x10e626c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e626c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e626c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e626c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e626c6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10e626cd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10e626d4:;
  /* 10e626d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e626d7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e626da jg 0x10e6273e */
  if ((!C.zf&&C.sf==C.of)) goto L_10e6273e;
  /* 10e626dc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e626e0 je 0x10e6273e */
  if (C.zf) goto L_10e6273e;
  /* 10e626e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e626e5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e626e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e626e9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e626eb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e626ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e626f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e626f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e626f6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10e626f9 push eax */
  push32((uint32_t)(EAX));
  /* 10e626fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e626fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e626ff push edx */
  push32((uint32_t)(EDX));
  /* 10e62700 call 0x10e64db0 */
  push32(0x10e62705u); f_10e64db0();
  /* 10e62705 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62708 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e6270b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6270f jne 0x10e62722 */
  if (!C.zf) goto L_10e62722;
  /* 10e62711 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e62714 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e62717 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10e6271b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6271e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e62720 jmp 0x10e6273c */
  goto L_10e6273c;
L_10e62722:;
  /* 10e62722 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62726 jge 0x10e62733 */
  if ((C.sf==C.of)) goto L_10e62733;
  /* 10e62728 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6272b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e6272e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10e62731 jmp 0x10e6273c */
  goto L_10e6273c;
L_10e62733:;
  /* 10e62733 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e62736 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62739 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e6273c:;
  /* 10e6273c jmp 0x10e626d4 */
  goto L_10e626d4;
L_10e6273e:;
  /* 10e6273e mov esp, ebp */
  ESP = (EBP);
  /* 10e62740 pop ebp */
  EBP = (pop32());
  /* 10e62741 ret  */
  ESPCHK(0x10e626c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012750 @ 0x10e62750 (186 bytes, 50 insns) */
void f_10e62750(void) {
  FTRACE(0x10e62750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62750 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62751 mov ebp, esp */
  EBP = (ESP);
  /* 10e62753 push ecx */
  push32((uint32_t)(ECX));
  /* 10e62754 mov eax, dword ptr [0x10e82a2c] */
  EAX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e62759 push eax */
  push32((uint32_t)(EAX));
  /* 10e6275a call 0x10e59510 */
  push32(0x10e6275fu); f_10e59510();
  /* 10e6275f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62762 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e62764 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62767 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10e6276a mov dword ptr [0x10e82a28], ecx */
  w32((uint32_t)(0x10e82a28), (ECX));
  /* 10e62770 mov edx, dword ptr [0x10e82a30] */
  EDX = (r32((uint32_t)(0x10e82a30)));
  /* 10e62776 push edx */
  push32((uint32_t)(EDX));
  /* 10e62777 call 0x10e59510 */
  push32(0x10e6277cu); f_10e59510();
  /* 10e6277c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6277f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e62781 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62784 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10e62787 mov dword ptr [0x10e82a20], ecx */
  w32((uint32_t)(0x10e82a20), (ECX));
  /* 10e6278d mov dword ptr [0x10e82a1c], 0 */
  w32((uint32_t)(0x10e82a1c), (0x0u));
  /* 10e62797 cmp dword ptr [0x10e82a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6279e je 0x10e627a9 */
  if (C.zf) goto L_10e627a9;
  /* 10e627a0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10e627a7 jmp 0x10e627bb */
  goto L_10e627bb;
L_10e627a9:;
  /* 10e627a9 mov edx, dword ptr [0x10e82a2c] */
  EDX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e627af push edx */
  push32((uint32_t)(EDX));
  /* 10e627b0 call 0x10e631f0 */
  push32(0x10e627b5u); f_10e631f0();
  /* 10e627b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e627b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e627bb:;
  /* 10e627bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e627be mov dword ptr [0x10e82a24], eax */
  w32((uint32_t)(0x10e82a24), (EAX));
  /* 10e627c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e627c5 push 0x10e62810 */
  push32((uint32_t)(0x10e62810u));
  /* 10e627ca call dword ptr [0x10e85314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85314))), 0x10e627d0u);
  /* 10e627d0 mov ecx, dword ptr [0x10e82a34] */
  ECX = (r32((uint32_t)(0x10e82a34)));
  /* 10e627d6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10e627dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e627de je 0x10e627fc */
  if (C.zf) goto L_10e627fc;
  /* 10e627e0 mov edx, dword ptr [0x10e82a34] */
  EDX = (r32((uint32_t)(0x10e82a34)));
  /* 10e627e6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10e627ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e627ee je 0x10e627fc */
  if (C.zf) goto L_10e627fc;
  /* 10e627f0 mov eax, dword ptr [0x10e82a34] */
  EAX = (r32((uint32_t)(0x10e82a34)));
  /* 10e627f5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10e627f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e627fa jne 0x10e62806 */
  if (!C.zf) goto L_10e62806;
L_10e627fc:;
  /* 10e627fc mov dword ptr [0x10e82a34], 0 */
  w32((uint32_t)(0x10e82a34), (0x0u));
L_10e62806:;
  /* 10e62806 mov esp, ebp */
  ESP = (EBP);
  /* 10e62808 pop ebp */
  EBP = (pop32());
  /* 10e62809 ret  */
  ESPCHK(0x10e62750u, _esp0);
  ESP += 4; return;
}

/* FUN_10012810 @ 0x10e62810 (804 bytes, 220 insns) */
void f_10e62810(void) {
  FTRACE(0x10e62810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62810 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62811 mov ebp, esp */
  EBP = (ESP);
  /* 10e62813 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e62816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e62819 push eax */
  push32((uint32_t)(EAX));
  /* 10e6281a call 0x10e63170 */
  push32(0x10e6281fu); f_10e63170();
  /* 10e6281f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62822 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10e62825 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e62827 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e6282a push ecx */
  push32((uint32_t)(ECX));
  /* 10e6282b mov edx, dword ptr [0x10e82a20] */
  EDX = (r32((uint32_t)(0x10e82a20)));
  /* 10e62831 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e62833 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e62835 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10e6283b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62841 push edx */
  push32((uint32_t)(EDX));
  /* 10e62842 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62845 push eax */
  push32((uint32_t)(EAX));
  /* 10e62846 call dword ptr [0x10e82a3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e82a3c))), 0x10e6284cu);
  /* 10e6284c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e6284e jne 0x10e62864 */
  if (!C.zf) goto L_10e62864;
  /* 10e62850 mov dword ptr [0x10e82a34], 0 */
  w32((uint32_t)(0x10e82a34), (0x0u));
  /* 10e6285a mov eax, 1 */
  EAX = (0x1u);
  /* 10e6285f jmp 0x10e62b2e */
  goto L_10e62b2e;
L_10e62864:;
  /* 10e62864 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e62867 push ecx */
  push32((uint32_t)(ECX));
  /* 10e62868 mov edx, dword ptr [0x10e82a30] */
  EDX = (r32((uint32_t)(0x10e82a30)));
  /* 10e6286e push edx */
  push32((uint32_t)(EDX));
  /* 10e6286f call 0x10e64db0 */
  push32(0x10e62874u); f_10e64db0();
  /* 10e62874 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62877 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62879 jne 0x10e6299f */
  if (!C.zf) goto L_10e6299f;
  /* 10e6287f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e62881 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10e62884 push eax */
  push32((uint32_t)(EAX));
  /* 10e62885 mov ecx, dword ptr [0x10e82a28] */
  ECX = (r32((uint32_t)(0x10e82a28)));
  /* 10e6288b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e6288d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e6288f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10e62895 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6289b push ecx */
  push32((uint32_t)(ECX));
  /* 10e6289c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e6289f push edx */
  push32((uint32_t)(EDX));
  /* 10e628a0 call dword ptr [0x10e82a3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e82a3c))), 0x10e628a6u);
  /* 10e628a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e628a8 jne 0x10e628be */
  if (!C.zf) goto L_10e628be;
  /* 10e628aa mov dword ptr [0x10e82a34], 0 */
  w32((uint32_t)(0x10e82a34), (0x0u));
  /* 10e628b4 mov eax, 1 */
  EAX = (0x1u);
  /* 10e628b9 jmp 0x10e62b2e */
  goto L_10e62b2e;
L_10e628be:;
  /* 10e628be lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10e628c1 push eax */
  push32((uint32_t)(EAX));
  /* 10e628c2 mov ecx, dword ptr [0x10e82a2c] */
  ECX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e628c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e628c9 call 0x10e64db0 */
  push32(0x10e628ceu); f_10e64db0();
  /* 10e628ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e628d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e628d3 jne 0x10e62900 */
  if (!C.zf) goto L_10e62900;
  /* 10e628d5 mov edx, dword ptr [0x10e82a34] */
  EDX = (r32((uint32_t)(0x10e82a34)));
  /* 10e628db or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10e628e1 mov dword ptr [0x10e82a34], edx */
  w32((uint32_t)(0x10e82a34), (EDX));
  /* 10e628e7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e628ea mov dword ptr [0x10e82a38], eax */
  w32((uint32_t)(0x10e82a38), (EAX));
  /* 10e628ef mov ecx, dword ptr [0x10e82a38] */
  ECX = (r32((uint32_t)(0x10e82a38)));
  /* 10e628f5 mov dword ptr [0x10e82a1c], ecx */
  w32((uint32_t)(0x10e82a1c), (ECX));
  /* 10e628fb jmp 0x10e6299f */
  goto L_10e6299f;
L_10e62900:;
  /* 10e62900 mov edx, dword ptr [0x10e82a34] */
  EDX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62906 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10e62909 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e6290b jne 0x10e6299f */
  if (!C.zf) goto L_10e6299f;
  /* 10e62911 cmp dword ptr [0x10e82a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62918 je 0x10e6296d */
  if (C.zf) goto L_10e6296d;
  /* 10e6291a mov eax, dword ptr [0x10e82a24] */
  EAX = (r32((uint32_t)(0x10e82a24)));
  /* 10e6291f push eax */
  push32((uint32_t)(EAX));
  /* 10e62920 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e62923 push ecx */
  push32((uint32_t)(ECX));
  /* 10e62924 mov edx, dword ptr [0x10e82a2c] */
  EDX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e6292a push edx */
  push32((uint32_t)(EDX));
  /* 10e6292b call 0x10e64e80 */
  push32(0x10e62930u); f_10e64e80();
  /* 10e62930 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62933 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62935 jne 0x10e6296d */
  if (!C.zf) goto L_10e6296d;
  /* 10e62937 mov eax, dword ptr [0x10e82a34] */
  EAX = (r32((uint32_t)(0x10e82a34)));
  /* 10e6293c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10e6293e mov dword ptr [0x10e82a34], eax */
  w32((uint32_t)(0x10e82a34), (EAX));
  /* 10e62943 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62946 mov dword ptr [0x10e82a38], ecx */
  w32((uint32_t)(0x10e82a38), (ECX));
  /* 10e6294c mov edx, dword ptr [0x10e82a2c] */
  EDX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e62952 push edx */
  push32((uint32_t)(EDX));
  /* 10e62953 call 0x10e59510 */
  push32(0x10e62958u); f_10e59510();
  /* 10e62958 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6295b cmp eax, dword ptr [0x10e82a24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e82a24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62961 jne 0x10e6296b */
  if (!C.zf) goto L_10e6296b;
  /* 10e62963 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62966 mov dword ptr [0x10e82a1c], eax */
  w32((uint32_t)(0x10e82a1c), (EAX));
L_10e6296b:;
  /* 10e6296b jmp 0x10e6299f */
  goto L_10e6299f;
L_10e6296d:;
  /* 10e6296d mov ecx, dword ptr [0x10e82a34] */
  ECX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62973 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e62976 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e62978 jne 0x10e6299f */
  if (!C.zf) goto L_10e6299f;
  /* 10e6297a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e6297d push edx */
  push32((uint32_t)(EDX));
  /* 10e6297e call 0x10e62eb0 */
  push32(0x10e62983u); f_10e62eb0();
  /* 10e62983 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62988 je 0x10e6299f */
  if (C.zf) goto L_10e6299f;
  /* 10e6298a mov eax, dword ptr [0x10e82a34] */
  EAX = (r32((uint32_t)(0x10e82a34)));
  /* 10e6298f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10e62991 mov dword ptr [0x10e82a34], eax */
  w32((uint32_t)(0x10e82a34), (EAX));
  /* 10e62996 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62999 mov dword ptr [0x10e82a38], ecx */
  w32((uint32_t)(0x10e82a38), (ECX));
L_10e6299f:;
  /* 10e6299f mov edx, dword ptr [0x10e82a34] */
  EDX = (r32((uint32_t)(0x10e82a34)));
  /* 10e629a5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10e629ab cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e629b1 je 0x10e62b21 */
  if (C.zf) goto L_10e62b21;
  /* 10e629b7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e629b9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10e629bc push eax */
  push32((uint32_t)(EAX));
  /* 10e629bd mov ecx, dword ptr [0x10e82a28] */
  ECX = (r32((uint32_t)(0x10e82a28)));
  /* 10e629c3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e629c5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e629c7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10e629cd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e629d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e629d4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e629d7 push edx */
  push32((uint32_t)(EDX));
  /* 10e629d8 call dword ptr [0x10e82a3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e82a3c))), 0x10e629deu);
  /* 10e629de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e629e0 jne 0x10e629f6 */
  if (!C.zf) goto L_10e629f6;
  /* 10e629e2 mov dword ptr [0x10e82a34], 0 */
  w32((uint32_t)(0x10e82a34), (0x0u));
  /* 10e629ec mov eax, 1 */
  EAX = (0x1u);
  /* 10e629f1 jmp 0x10e62b2e */
  goto L_10e62b2e;
L_10e629f6:;
  /* 10e629f6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10e629f9 push eax */
  push32((uint32_t)(EAX));
  /* 10e629fa mov ecx, dword ptr [0x10e82a2c] */
  ECX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e62a00 push ecx */
  push32((uint32_t)(ECX));
  /* 10e62a01 call 0x10e64db0 */
  push32(0x10e62a06u); f_10e64db0();
  /* 10e62a06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62a0b jne 0x10e62ac0 */
  if (!C.zf) goto L_10e62ac0;
  /* 10e62a11 mov edx, dword ptr [0x10e82a34] */
  EDX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62a17 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10e62a1a mov dword ptr [0x10e82a34], edx */
  w32((uint32_t)(0x10e82a34), (EDX));
  /* 10e62a20 cmp dword ptr [0x10e82a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62a27 je 0x10e62a4a */
  if (C.zf) goto L_10e62a4a;
  /* 10e62a29 mov eax, dword ptr [0x10e82a34] */
  EAX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62a2e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10e62a31 mov dword ptr [0x10e82a34], eax */
  w32((uint32_t)(0x10e82a34), (EAX));
  /* 10e62a36 cmp dword ptr [0x10e82a1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62a3d jne 0x10e62a48 */
  if (!C.zf) goto L_10e62a48;
  /* 10e62a3f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62a42 mov dword ptr [0x10e82a1c], ecx */
  w32((uint32_t)(0x10e82a1c), (ECX));
L_10e62a48:;
  /* 10e62a48 jmp 0x10e62abe */
  goto L_10e62abe;
L_10e62a4a:;
  /* 10e62a4a cmp dword ptr [0x10e82a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62a51 je 0x10e62a9f */
  if (C.zf) goto L_10e62a9f;
  /* 10e62a53 mov edx, dword ptr [0x10e82a2c] */
  EDX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e62a59 push edx */
  push32((uint32_t)(EDX));
  /* 10e62a5a call 0x10e59510 */
  push32(0x10e62a5fu); f_10e59510();
  /* 10e62a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62a62 cmp eax, dword ptr [0x10e82a24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e82a24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62a68 jne 0x10e62a9f */
  if (!C.zf) goto L_10e62a9f;
  /* 10e62a6a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e62a6c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62a6f push eax */
  push32((uint32_t)(EAX));
  /* 10e62a70 call 0x10e62f00 */
  push32(0x10e62a75u); f_10e62f00();
  /* 10e62a75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62a78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62a7a je 0x10e62a9d */
  if (C.zf) goto L_10e62a9d;
  /* 10e62a7c mov ecx, dword ptr [0x10e82a34] */
  ECX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62a82 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10e62a85 mov dword ptr [0x10e82a34], ecx */
  w32((uint32_t)(0x10e82a34), (ECX));
  /* 10e62a8b cmp dword ptr [0x10e82a1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62a92 jne 0x10e62a9d */
  if (!C.zf) goto L_10e62a9d;
  /* 10e62a94 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62a97 mov dword ptr [0x10e82a1c], edx */
  w32((uint32_t)(0x10e82a1c), (EDX));
L_10e62a9d:;
  /* 10e62a9d jmp 0x10e62abe */
  goto L_10e62abe;
L_10e62a9f:;
  /* 10e62a9f mov eax, dword ptr [0x10e82a34] */
  EAX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62aa4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10e62aa7 mov dword ptr [0x10e82a34], eax */
  w32((uint32_t)(0x10e82a34), (EAX));
  /* 10e62aac cmp dword ptr [0x10e82a1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62ab3 jne 0x10e62abe */
  if (!C.zf) goto L_10e62abe;
  /* 10e62ab5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62ab8 mov dword ptr [0x10e82a1c], ecx */
  w32((uint32_t)(0x10e82a1c), (ECX));
L_10e62abe:;
  /* 10e62abe jmp 0x10e62b21 */
  goto L_10e62b21;
L_10e62ac0:;
  /* 10e62ac0 cmp dword ptr [0x10e82a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62ac7 jne 0x10e62b21 */
  if (!C.zf) goto L_10e62b21;
  /* 10e62ac9 cmp dword ptr [0x10e82a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62ad0 je 0x10e62b21 */
  if (C.zf) goto L_10e62b21;
  /* 10e62ad2 mov edx, dword ptr [0x10e82a24] */
  EDX = (r32((uint32_t)(0x10e82a24)));
  /* 10e62ad8 push edx */
  push32((uint32_t)(EDX));
  /* 10e62ad9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10e62adc push eax */
  push32((uint32_t)(EAX));
  /* 10e62add mov ecx, dword ptr [0x10e82a2c] */
  ECX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e62ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e62ae4 call 0x10e64e80 */
  push32(0x10e62ae9u); f_10e64e80();
  /* 10e62ae9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62aec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62aee jne 0x10e62b21 */
  if (!C.zf) goto L_10e62b21;
  /* 10e62af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e62af2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62af5 push edx */
  push32((uint32_t)(EDX));
  /* 10e62af6 call 0x10e62f00 */
  push32(0x10e62afbu); f_10e62f00();
  /* 10e62afb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62afe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62b00 je 0x10e62b21 */
  if (C.zf) goto L_10e62b21;
  /* 10e62b02 mov eax, dword ptr [0x10e82a34] */
  EAX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62b07 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10e62b0a mov dword ptr [0x10e82a34], eax */
  w32((uint32_t)(0x10e82a34), (EAX));
  /* 10e62b0f cmp dword ptr [0x10e82a1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62b16 jne 0x10e62b21 */
  if (!C.zf) goto L_10e62b21;
  /* 10e62b18 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62b1b mov dword ptr [0x10e82a1c], ecx */
  w32((uint32_t)(0x10e82a1c), (ECX));
L_10e62b21:;
  /* 10e62b21 mov eax, dword ptr [0x10e82a34] */
  EAX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62b26 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e62b29 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e62b2b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e62b2d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10e62b2e:;
  /* 10e62b2e mov esp, ebp */
  ESP = (EBP);
  /* 10e62b30 pop ebp */
  EBP = (pop32());
  /* 10e62b31 ret 4 */
  ESPCHK(0x10e62810u, _esp0);
  ESP += 8; return;
}

/* FUN_10012b40 @ 0x10e62b40 (116 bytes, 33 insns) */
void f_10e62b40(void) {
  FTRACE(0x10e62b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62b41 mov ebp, esp */
  EBP = (ESP);
  /* 10e62b43 push ecx */
  push32((uint32_t)(ECX));
  /* 10e62b44 mov eax, dword ptr [0x10e82a2c] */
  EAX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e62b49 push eax */
  push32((uint32_t)(EAX));
  /* 10e62b4a call 0x10e59510 */
  push32(0x10e62b4fu); f_10e59510();
  /* 10e62b4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62b52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e62b54 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62b57 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10e62b5a mov dword ptr [0x10e82a28], ecx */
  w32((uint32_t)(0x10e82a28), (ECX));
  /* 10e62b60 cmp dword ptr [0x10e82a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62b67 je 0x10e62b72 */
  if (C.zf) goto L_10e62b72;
  /* 10e62b69 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10e62b70 jmp 0x10e62b84 */
  goto L_10e62b84;
L_10e62b72:;
  /* 10e62b72 mov edx, dword ptr [0x10e82a2c] */
  EDX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e62b78 push edx */
  push32((uint32_t)(EDX));
  /* 10e62b79 call 0x10e631f0 */
  push32(0x10e62b7eu); f_10e631f0();
  /* 10e62b7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62b81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e62b84:;
  /* 10e62b84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e62b87 mov dword ptr [0x10e82a24], eax */
  w32((uint32_t)(0x10e82a24), (EAX));
  /* 10e62b8c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e62b8e push 0x10e62bc0 */
  push32((uint32_t)(0x10e62bc0u));
  /* 10e62b93 call dword ptr [0x10e85314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85314))), 0x10e62b99u);
  /* 10e62b99 mov ecx, dword ptr [0x10e82a34] */
  ECX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62b9f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e62ba2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e62ba4 jne 0x10e62bb0 */
  if (!C.zf) goto L_10e62bb0;
  /* 10e62ba6 mov dword ptr [0x10e82a34], 0 */
  w32((uint32_t)(0x10e82a34), (0x0u));
L_10e62bb0:;
  /* 10e62bb0 mov esp, ebp */
  ESP = (EBP);
  /* 10e62bb2 pop ebp */
  EBP = (pop32());
  /* 10e62bb3 ret  */
  ESPCHK(0x10e62b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012bc0 @ 0x10e62bc0 (287 bytes, 86 insns) */
void f_10e62bc0(void) {
  FTRACE(0x10e62bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e62bc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e62bc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e62bc9 push eax */
  push32((uint32_t)(EAX));
  /* 10e62bca call 0x10e63170 */
  push32(0x10e62bcfu); f_10e63170();
  /* 10e62bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62bd2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10e62bd5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e62bd7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e62bda push ecx */
  push32((uint32_t)(ECX));
  /* 10e62bdb mov edx, dword ptr [0x10e82a28] */
  EDX = (r32((uint32_t)(0x10e82a28)));
  /* 10e62be1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e62be3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e62be5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10e62beb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62bf1 push edx */
  push32((uint32_t)(EDX));
  /* 10e62bf2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62bf5 push eax */
  push32((uint32_t)(EAX));
  /* 10e62bf6 call dword ptr [0x10e82a3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e82a3c))), 0x10e62bfcu);
  /* 10e62bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62bfe jne 0x10e62c14 */
  if (!C.zf) goto L_10e62c14;
  /* 10e62c00 mov dword ptr [0x10e82a34], 0 */
  w32((uint32_t)(0x10e82a34), (0x0u));
  /* 10e62c0a mov eax, 1 */
  EAX = (0x1u);
  /* 10e62c0f jmp 0x10e62cd9 */
  goto L_10e62cd9;
L_10e62c14:;
  /* 10e62c14 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e62c17 push ecx */
  push32((uint32_t)(ECX));
  /* 10e62c18 mov edx, dword ptr [0x10e82a2c] */
  EDX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e62c1e push edx */
  push32((uint32_t)(EDX));
  /* 10e62c1f call 0x10e64db0 */
  push32(0x10e62c24u); f_10e64db0();
  /* 10e62c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62c27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62c29 jne 0x10e62c69 */
  if (!C.zf) goto L_10e62c69;
  /* 10e62c2b cmp dword ptr [0x10e82a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62c32 jne 0x10e62c46 */
  if (!C.zf) goto L_10e62c46;
  /* 10e62c34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e62c36 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62c39 push eax */
  push32((uint32_t)(EAX));
  /* 10e62c3a call 0x10e62f00 */
  push32(0x10e62c3fu); f_10e62f00();
  /* 10e62c3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62c42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62c44 je 0x10e62c67 */
  if (C.zf) goto L_10e62c67;
L_10e62c46:;
  /* 10e62c46 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62c49 mov dword ptr [0x10e82a38], ecx */
  w32((uint32_t)(0x10e82a38), (ECX));
  /* 10e62c4f mov edx, dword ptr [0x10e82a38] */
  EDX = (r32((uint32_t)(0x10e82a38)));
  /* 10e62c55 mov dword ptr [0x10e82a1c], edx */
  w32((uint32_t)(0x10e82a1c), (EDX));
  /* 10e62c5b mov eax, dword ptr [0x10e82a34] */
  EAX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62c60 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10e62c62 mov dword ptr [0x10e82a34], eax */
  w32((uint32_t)(0x10e82a34), (EAX));
L_10e62c67:;
  /* 10e62c67 jmp 0x10e62ccc */
  goto L_10e62ccc;
L_10e62c69:;
  /* 10e62c69 cmp dword ptr [0x10e82a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62c70 jne 0x10e62ccc */
  if (!C.zf) goto L_10e62ccc;
  /* 10e62c72 cmp dword ptr [0x10e82a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62c79 je 0x10e62ccc */
  if (C.zf) goto L_10e62ccc;
  /* 10e62c7b mov ecx, dword ptr [0x10e82a24] */
  ECX = (r32((uint32_t)(0x10e82a24)));
  /* 10e62c81 push ecx */
  push32((uint32_t)(ECX));
  /* 10e62c82 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10e62c85 push edx */
  push32((uint32_t)(EDX));
  /* 10e62c86 mov eax, dword ptr [0x10e82a2c] */
  EAX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e62c8b push eax */
  push32((uint32_t)(EAX));
  /* 10e62c8c call 0x10e64e80 */
  push32(0x10e62c91u); f_10e64e80();
  /* 10e62c91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62c94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62c96 jne 0x10e62ccc */
  if (!C.zf) goto L_10e62ccc;
  /* 10e62c98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e62c9a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62c9d push ecx */
  push32((uint32_t)(ECX));
  /* 10e62c9e call 0x10e62f00 */
  push32(0x10e62ca3u); f_10e62f00();
  /* 10e62ca3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62ca6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62ca8 je 0x10e62ccc */
  if (C.zf) goto L_10e62ccc;
  /* 10e62caa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62cad mov dword ptr [0x10e82a38], edx */
  w32((uint32_t)(0x10e82a38), (EDX));
  /* 10e62cb3 mov eax, dword ptr [0x10e82a38] */
  EAX = (r32((uint32_t)(0x10e82a38)));
  /* 10e62cb8 mov dword ptr [0x10e82a1c], eax */
  w32((uint32_t)(0x10e82a1c), (EAX));
  /* 10e62cbd mov ecx, dword ptr [0x10e82a34] */
  ECX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62cc3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e62cc6 mov dword ptr [0x10e82a34], ecx */
  w32((uint32_t)(0x10e82a34), (ECX));
L_10e62ccc:;
  /* 10e62ccc mov eax, dword ptr [0x10e82a34] */
  EAX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62cd1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e62cd4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e62cd6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e62cd8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10e62cd9:;
  /* 10e62cd9 mov esp, ebp */
  ESP = (EBP);
  /* 10e62cdb pop ebp */
  EBP = (pop32());
  /* 10e62cdc ret 4 */
  ESPCHK(0x10e62bc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10012ce0 @ 0x10e62ce0 (69 bytes, 20 insns) */
void f_10e62ce0(void) {
  FTRACE(0x10e62ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10e62ce3 mov eax, dword ptr [0x10e82a30] */
  EAX = (r32((uint32_t)(0x10e82a30)));
  /* 10e62ce8 push eax */
  push32((uint32_t)(EAX));
  /* 10e62ce9 call 0x10e59510 */
  push32(0x10e62ceeu); f_10e59510();
  /* 10e62cee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62cf1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e62cf3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62cf6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10e62cf9 mov dword ptr [0x10e82a20], ecx */
  w32((uint32_t)(0x10e82a20), (ECX));
  /* 10e62cff push 1 */
  push32((uint32_t)(0x1u));
  /* 10e62d01 push 0x10e62d30 */
  push32((uint32_t)(0x10e62d30u));
  /* 10e62d06 call dword ptr [0x10e85314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85314))), 0x10e62d0cu);
  /* 10e62d0c mov edx, dword ptr [0x10e82a34] */
  EDX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62d12 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e62d15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e62d17 jne 0x10e62d23 */
  if (!C.zf) goto L_10e62d23;
  /* 10e62d19 mov dword ptr [0x10e82a34], 0 */
  w32((uint32_t)(0x10e82a34), (0x0u));
L_10e62d23:;
  /* 10e62d23 pop ebp */
  EBP = (pop32());
  /* 10e62d24 ret  */
  ESPCHK(0x10e62ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d30 @ 0x10e62d30 (172 bytes, 54 insns) */
void f_10e62d30(void) {
  FTRACE(0x10e62d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62d31 mov ebp, esp */
  EBP = (ESP);
  /* 10e62d33 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e62d36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e62d39 push eax */
  push32((uint32_t)(EAX));
  /* 10e62d3a call 0x10e63170 */
  push32(0x10e62d3fu); f_10e63170();
  /* 10e62d3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62d42 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10e62d45 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e62d47 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e62d4a push ecx */
  push32((uint32_t)(ECX));
  /* 10e62d4b mov edx, dword ptr [0x10e82a20] */
  EDX = (r32((uint32_t)(0x10e82a20)));
  /* 10e62d51 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e62d53 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e62d55 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10e62d5b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62d61 push edx */
  push32((uint32_t)(EDX));
  /* 10e62d62 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62d65 push eax */
  push32((uint32_t)(EAX));
  /* 10e62d66 call dword ptr [0x10e82a3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e82a3c))), 0x10e62d6cu);
  /* 10e62d6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62d6e jne 0x10e62d81 */
  if (!C.zf) goto L_10e62d81;
  /* 10e62d70 mov dword ptr [0x10e82a34], 0 */
  w32((uint32_t)(0x10e82a34), (0x0u));
  /* 10e62d7a mov eax, 1 */
  EAX = (0x1u);
  /* 10e62d7f jmp 0x10e62dd6 */
  goto L_10e62dd6;
L_10e62d81:;
  /* 10e62d81 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10e62d84 push ecx */
  push32((uint32_t)(ECX));
  /* 10e62d85 mov edx, dword ptr [0x10e82a30] */
  EDX = (r32((uint32_t)(0x10e82a30)));
  /* 10e62d8b push edx */
  push32((uint32_t)(EDX));
  /* 10e62d8c call 0x10e64db0 */
  push32(0x10e62d91u); f_10e64db0();
  /* 10e62d91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62d94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62d96 jne 0x10e62dc9 */
  if (!C.zf) goto L_10e62dc9;
  /* 10e62d98 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62d9b push eax */
  push32((uint32_t)(EAX));
  /* 10e62d9c call 0x10e62eb0 */
  push32(0x10e62da1u); f_10e62eb0();
  /* 10e62da1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62da4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62da6 je 0x10e62dc9 */
  if (C.zf) goto L_10e62dc9;
  /* 10e62da8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10e62dab mov dword ptr [0x10e82a38], ecx */
  w32((uint32_t)(0x10e82a38), (ECX));
  /* 10e62db1 mov edx, dword ptr [0x10e82a38] */
  EDX = (r32((uint32_t)(0x10e82a38)));
  /* 10e62db7 mov dword ptr [0x10e82a1c], edx */
  w32((uint32_t)(0x10e82a1c), (EDX));
  /* 10e62dbd mov eax, dword ptr [0x10e82a34] */
  EAX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62dc2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10e62dc4 mov dword ptr [0x10e82a34], eax */
  w32((uint32_t)(0x10e82a34), (EAX));
L_10e62dc9:;
  /* 10e62dc9 mov eax, dword ptr [0x10e82a34] */
  EAX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62dce and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e62dd1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e62dd3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e62dd5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10e62dd6:;
  /* 10e62dd6 mov esp, ebp */
  ESP = (EBP);
  /* 10e62dd8 pop ebp */
  EBP = (pop32());
  /* 10e62dd9 ret 4 */
  ESPCHK(0x10e62d30u, _esp0);
  ESP += 8; return;
}

/* FUN_10012de0 @ 0x10e62de0 (43 bytes, 11 insns) */
void f_10e62de0(void) {
  FTRACE(0x10e62de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62de1 mov ebp, esp */
  EBP = (ESP);
  /* 10e62de3 mov eax, dword ptr [0x10e82a34] */
  EAX = (r32((uint32_t)(0x10e82a34)));
  /* 10e62de8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10e62ded mov dword ptr [0x10e82a34], eax */
  w32((uint32_t)(0x10e82a34), (EAX));
  /* 10e62df2 call dword ptr [0x10e85310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85310))), 0x10e62df8u);
  /* 10e62df8 mov dword ptr [0x10e82a38], eax */
  w32((uint32_t)(0x10e82a38), (EAX));
  /* 10e62dfd mov ecx, dword ptr [0x10e82a38] */
  ECX = (r32((uint32_t)(0x10e82a38)));
  /* 10e62e03 mov dword ptr [0x10e82a1c], ecx */
  w32((uint32_t)(0x10e82a1c), (ECX));
  /* 10e62e09 pop ebp */
  EBP = (pop32());
  /* 10e62e0a ret  */
  ESPCHK(0x10e62de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e10 @ 0x10e62e10 (155 bytes, 57 insns) */
void f_10e62e10(void) {
  FTRACE(0x10e62e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62e11 mov ebp, esp */
  EBP = (ESP);
  /* 10e62e13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e62e16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62e1a je 0x10e62e3b */
  if (C.zf) goto L_10e62e3b;
  /* 10e62e1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e62e1f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e62e22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e62e24 je 0x10e62e3b */
  if (C.zf) goto L_10e62e3b;
  /* 10e62e26 push 0x10e7ea6c */
  push32((uint32_t)(0x10e7ea6cu));
  /* 10e62e2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e62e2e push edx */
  push32((uint32_t)(EDX));
  /* 10e62e2f call 0x10e62370 */
  push32(0x10e62e34u); f_10e62370();
  /* 10e62e34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62e37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62e39 jne 0x10e62e63 */
  if (!C.zf) goto L_10e62e63;
L_10e62e3b:;
  /* 10e62e3b push 8 */
  push32((uint32_t)(0x8u));
  /* 10e62e3d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10e62e40 push eax */
  push32((uint32_t)(EAX));
  /* 10e62e41 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10e62e46 mov ecx, dword ptr [0x10e82a38] */
  ECX = (r32((uint32_t)(0x10e82a38)));
  /* 10e62e4c push ecx */
  push32((uint32_t)(ECX));
  /* 10e62e4d call dword ptr [0x10e82a3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e82a3c))), 0x10e62e53u);
  /* 10e62e53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62e55 jne 0x10e62e5b */
  if (!C.zf) goto L_10e62e5b;
  /* 10e62e57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e62e59 jmp 0x10e62ea7 */
  goto L_10e62ea7;
L_10e62e5b:;
  /* 10e62e5b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10e62e5e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e62e61 jmp 0x10e62e9b */
  goto L_10e62e9b;
L_10e62e63:;
  /* 10e62e63 push 0x10e7ea68 */
  push32((uint32_t)(0x10e7ea68u));
  /* 10e62e68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e62e6b push eax */
  push32((uint32_t)(EAX));
  /* 10e62e6c call 0x10e62370 */
  push32(0x10e62e71u); f_10e62370();
  /* 10e62e71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62e74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62e76 jne 0x10e62e9b */
  if (!C.zf) goto L_10e62e9b;
  /* 10e62e78 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e62e7a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10e62e7d push ecx */
  push32((uint32_t)(ECX));
  /* 10e62e7e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e62e80 mov edx, dword ptr [0x10e82a38] */
  EDX = (r32((uint32_t)(0x10e82a38)));
  /* 10e62e86 push edx */
  push32((uint32_t)(EDX));
  /* 10e62e87 call dword ptr [0x10e82a3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e82a3c))), 0x10e62e8du);
  /* 10e62e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62e8f jne 0x10e62e95 */
  if (!C.zf) goto L_10e62e95;
  /* 10e62e91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e62e93 jmp 0x10e62ea7 */
  goto L_10e62ea7;
L_10e62e95:;
  /* 10e62e95 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10e62e98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e62e9b:;
  /* 10e62e9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e62e9e push ecx */
  push32((uint32_t)(ECX));
  /* 10e62e9f call 0x10e64f90 */
  push32(0x10e62ea4u); f_10e64f90();
  /* 10e62ea4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e62ea7:;
  /* 10e62ea7 mov esp, ebp */
  ESP = (EBP);
  /* 10e62ea9 pop ebp */
  EBP = (pop32());
  /* 10e62eaa ret  */
  ESPCHK(0x10e62e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012eb0 @ 0x10e62eb0 (79 bytes, 26 insns) */
void f_10e62eb0(void) {
  FTRACE(0x10e62eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10e62eb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e62eb6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10e62eba mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10e62ebe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e62ec5 jmp 0x10e62ed0 */
  goto L_10e62ed0;
L_10e62ec7:;
  /* 10e62ec7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e62eca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62ecd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e62ed0:;
  /* 10e62ed0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62ed4 jae 0x10e62ef6 */
  if (!C.cf) goto L_10e62ef6;
  /* 10e62ed6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e62ed9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e62edf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e62ee2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e62ee4 mov cx, word ptr [eax*2 + 0x10e819d4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10e819d4)));
  /* 10e62eec cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62eee jne 0x10e62ef4 */
  if (!C.zf) goto L_10e62ef4;
  /* 10e62ef0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e62ef2 jmp 0x10e62efb */
  goto L_10e62efb;
L_10e62ef4:;
  /* 10e62ef4 jmp 0x10e62ec7 */
  goto L_10e62ec7;
L_10e62ef6:;
  /* 10e62ef6 mov eax, 1 */
  EAX = (0x1u);
L_10e62efb:;
  /* 10e62efb mov esp, ebp */
  ESP = (EBP);
  /* 10e62efd pop ebp */
  EBP = (pop32());
  /* 10e62efe ret  */
  ESPCHK(0x10e62eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f00 @ 0x10e62f00 (135 bytes, 48 insns) */
void f_10e62f00(void) {
  FTRACE(0x10e62f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62f01 mov ebp, esp */
  EBP = (ESP);
  /* 10e62f03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e62f06 push esi */
  push32((uint32_t)(ESI));
  /* 10e62f07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e62f0a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e62f0f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e62f14 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e62f19 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10e62f1c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e62f21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e62f24 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10e62f26 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10e62f29 push ecx */
  push32((uint32_t)(ECX));
  /* 10e62f2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e62f2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e62f2f push edx */
  push32((uint32_t)(EDX));
  /* 10e62f30 call dword ptr [0x10e82a3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e82a3c))), 0x10e62f36u);
  /* 10e62f36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62f38 jne 0x10e62f3e */
  if (!C.zf) goto L_10e62f3e;
  /* 10e62f3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e62f3c jmp 0x10e62f82 */
  goto L_10e62f82;
L_10e62f3e:;
  /* 10e62f3e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10e62f41 push eax */
  push32((uint32_t)(EAX));
  /* 10e62f42 call 0x10e63170 */
  push32(0x10e62f47u); f_10e63170();
  /* 10e62f47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62f4a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62f4d je 0x10e62f7d */
  if (C.zf) goto L_10e62f7d;
  /* 10e62f4f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62f53 je 0x10e62f7d */
  if (C.zf) goto L_10e62f7d;
  /* 10e62f55 mov ecx, dword ptr [0x10e82a2c] */
  ECX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e62f5b push ecx */
  push32((uint32_t)(ECX));
  /* 10e62f5c call 0x10e631f0 */
  push32(0x10e62f61u); f_10e631f0();
  /* 10e62f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62f64 mov esi, eax */
  ESI = (EAX);
  /* 10e62f66 mov edx, dword ptr [0x10e82a2c] */
  EDX = (r32((uint32_t)(0x10e82a2c)));
  /* 10e62f6c push edx */
  push32((uint32_t)(EDX));
  /* 10e62f6d call 0x10e59510 */
  push32(0x10e62f72u); f_10e59510();
  /* 10e62f72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e62f75 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62f77 jne 0x10e62f7d */
  if (!C.zf) goto L_10e62f7d;
  /* 10e62f79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e62f7b jmp 0x10e62f82 */
  goto L_10e62f82;
L_10e62f7d:;
  /* 10e62f7d mov eax, 1 */
  EAX = (0x1u);
L_10e62f82:;
  /* 10e62f82 pop esi */
  ESI = (pop32());
  /* 10e62f83 mov esp, ebp */
  ESP = (EBP);
  /* 10e62f85 pop ebp */
  EBP = (pop32());
  /* 10e62f86 ret  */
  ESPCHK(0x10e62f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f90 @ 0x10e62f90 (77 bytes, 18 insns) */
void f_10e62f90(void) {
  FTRACE(0x10e62f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62f91 mov ebp, esp */
  EBP = (ESP);
  /* 10e62f93 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e62f99 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10e62fa3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10e62fa9 push eax */
  push32((uint32_t)(EAX));
  /* 10e62faa call dword ptr [0x10e8530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e8530c))), 0x10e62fb0u);
  /* 10e62fb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e62fb2 je 0x10e62fc9 */
  if (C.zf) goto L_10e62fc9;
  /* 10e62fb4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e62fbb jne 0x10e62fc9 */
  if (!C.zf) goto L_10e62fc9;
  /* 10e62fbd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10e62fc7 jmp 0x10e62fd3 */
  goto L_10e62fd3;
L_10e62fc9:;
  /* 10e62fc9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10e62fd3:;
  /* 10e62fd3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10e62fd9 mov esp, ebp */
  ESP = (EBP);
  /* 10e62fdb pop ebp */
  EBP = (pop32());
  /* 10e62fdc ret  */
  ESPCHK(0x10e62f90u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10e62fe0 (388 bytes, 118 insns) */
void f_10e62fe0(void) {
  FTRACE(0x10e62fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e62fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e62fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10e62fe3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e62fe6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e62fed mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10e62ff4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e62ffb:;
  /* 10e62ffb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e62ffe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63001 jg 0x10e63148 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e63148;
  /* 10e63007 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e6300a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6300d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e6300e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e63010 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e63012 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e63015 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63018 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e6301b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6301e cmp edx, dword ptr [ecx + 0x10e81530] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10e81530))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63024 jne 0x10e6311e */
  if (!C.zf) goto L_10e6311e;
  /* 10e6302a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e6302d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e63030 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63034 ja 0x10e63057 */
  if ((!C.cf&&!C.zf)) goto L_10e63057;
  /* 10e63036 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6303a je 0x10e630c9 */
  if (C.zf) goto L_10e630c9;
  /* 10e63040 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63044 je 0x10e63074 */
  if (C.zf) goto L_10e63074;
  /* 10e63046 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6304a je 0x10e63096 */
  if (C.zf) goto L_10e63096;
  /* 10e6304c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63050 je 0x10e630b8 */
  if (C.zf) goto L_10e630b8;
  /* 10e63052 jmp 0x10e630e8 */
  goto L_10e630e8;
L_10e63057:;
  /* 10e63057 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6305e je 0x10e63085 */
  if (C.zf) goto L_10e63085;
  /* 10e63060 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63067 je 0x10e630a7 */
  if (C.zf) goto L_10e630a7;
  /* 10e63069 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63070 je 0x10e630da */
  if (C.zf) goto L_10e630da;
  /* 10e63072 jmp 0x10e630e8 */
  goto L_10e630e8;
L_10e63074:;
  /* 10e63074 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63077 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e6307a add ecx, 0x10e81534 */
  { uint32_t _a=(ECX),_b=(0x10e81534u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63080 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e63083 jmp 0x10e630e8 */
  goto L_10e630e8;
L_10e63085:;
  /* 10e63085 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63088 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e6308b mov eax, dword ptr [edx + 0x10e8153c] */
  EAX = (r32((uint32_t)(EDX + 0x10e8153c)));
  /* 10e63091 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e63094 jmp 0x10e630e8 */
  goto L_10e630e8;
L_10e63096:;
  /* 10e63096 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63099 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e6309c add ecx, 0x10e81540 */
  { uint32_t _a=(ECX),_b=(0x10e81540u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e630a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e630a5 jmp 0x10e630e8 */
  goto L_10e630e8;
L_10e630a7:;
  /* 10e630a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e630aa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e630ad mov eax, dword ptr [edx + 0x10e81544] */
  EAX = (r32((uint32_t)(EDX + 0x10e81544)));
  /* 10e630b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e630b6 jmp 0x10e630e8 */
  goto L_10e630e8;
L_10e630b8:;
  /* 10e630b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e630bb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e630be add ecx, 0x10e81548 */
  { uint32_t _a=(ECX),_b=(0x10e81548u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e630c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e630c7 jmp 0x10e630e8 */
  goto L_10e630e8;
L_10e630c9:;
  /* 10e630c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e630cc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e630cf add edx, 0x10e8154c */
  { uint32_t _a=(EDX),_b=(0x10e8154cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e630d5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e630d8 jmp 0x10e630e8 */
  goto L_10e630e8;
L_10e630da:;
  /* 10e630da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e630dd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e630e0 add eax, 0x10e81554 */
  { uint32_t _a=(EAX),_b=(0x10e81554u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e630e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e630e8:;
  /* 10e630e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e630ec je 0x10e630f4 */
  if (C.zf) goto L_10e630f4;
  /* 10e630ee cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e630f2 jge 0x10e630f6 */
  if ((C.sf==C.of)) goto L_10e630f6;
L_10e630f4:;
  /* 10e630f4 jmp 0x10e63148 */
  goto L_10e63148;
L_10e630f6:;
  /* 10e630f6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e630f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e630fc push ecx */
  push32((uint32_t)(ECX));
  /* 10e630fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e63100 push edx */
  push32((uint32_t)(EDX));
  /* 10e63101 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63104 push eax */
  push32((uint32_t)(EAX));
  /* 10e63105 call 0x10e59f00 */
  push32(0x10e6310au); f_10e59f00();
  /* 10e6310a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6310d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63110 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63113 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10e63117 mov eax, 1 */
  EAX = (0x1u);
  /* 10e6311c jmp 0x10e6315e */
  goto L_10e6315e;
L_10e6311e:;
  /* 10e6311e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63121 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e63124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63127 cmp eax, dword ptr [edx + 0x10e81530] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10e81530))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6312d jae 0x10e6313a */
  if (!C.cf) goto L_10e6313a;
  /* 10e6312f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63132 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e63135 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e63138 jmp 0x10e63143 */
  goto L_10e63143;
L_10e6313a:;
  /* 10e6313a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6313d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63140 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e63143:;
  /* 10e63143 jmp 0x10e62ffb */
  goto L_10e62ffb;
L_10e63148:;
  /* 10e63148 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e6314b push eax */
  push32((uint32_t)(EAX));
  /* 10e6314c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6314f push ecx */
  push32((uint32_t)(ECX));
  /* 10e63150 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63153 push edx */
  push32((uint32_t)(EDX));
  /* 10e63154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63157 push eax */
  push32((uint32_t)(EAX));
  /* 10e63158 call dword ptr [0x10e85318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85318))), 0x10e6315eu);
L_10e6315e:;
  /* 10e6315e mov esp, ebp */
  ESP = (EBP);
  /* 10e63160 pop ebp */
  EBP = (pop32());
  /* 10e63161 ret 0x10 */
  ESPCHK(0x10e62fe0u, _esp0);
  ESP += 20; return;
}

/* FUN_10013170 @ 0x10e63170 (118 bytes, 42 insns) */
void f_10e63170(void) {
  FTRACE(0x10e63170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e63170 push ebp */
  push32((uint32_t)(EBP));
  /* 10e63171 mov ebp, esp */
  EBP = (ESP);
  /* 10e63173 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e63176 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e6317d:;
  /* 10e6317d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63180 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e63182 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10e63185 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e63189 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6318c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6318f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e63192 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e63194 je 0x10e631df */
  if (C.zf) goto L_10e631df;
  /* 10e63196 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e6319a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6319d jl 0x10e631b2 */
  if ((C.sf!=C.of)) goto L_10e631b2;
  /* 10e6319f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e631a3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e631a6 jg 0x10e631b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e631b2;
  /* 10e631a8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10e631ab add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e631ad mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10e631b0 jmp 0x10e631cc */
  goto L_10e631cc;
L_10e631b2:;
  /* 10e631b2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e631b6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e631b9 jl 0x10e631cc */
  if ((C.sf!=C.of)) goto L_10e631cc;
  /* 10e631bb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e631bf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e631c2 jg 0x10e631cc */
  if ((!C.zf&&C.sf==C.of)) goto L_10e631cc;
  /* 10e631c4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10e631c7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e631c9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10e631cc:;
  /* 10e631cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e631cf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10e631d2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e631d6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10e631da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e631dd jmp 0x10e6317d */
  goto L_10e6317d;
L_10e631df:;
  /* 10e631df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e631e2 mov esp, ebp */
  ESP = (EBP);
  /* 10e631e4 pop ebp */
  EBP = (pop32());
  /* 10e631e5 ret  */
  ESPCHK(0x10e63170u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10e631f0 (101 bytes, 36 insns) */
void f_10e631f0(void) {
  FTRACE(0x10e631f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e631f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e631f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e631f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e631f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e631fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63200 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e63202 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10e63205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63208 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6320b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10e6320e:;
  /* 10e6320e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10e63212 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63215 jl 0x10e63220 */
  if ((C.sf!=C.of)) goto L_10e63220;
  /* 10e63217 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10e6321b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6321e jle 0x10e63232 */
  if ((C.zf||C.sf!=C.of)) goto L_10e63232;
L_10e63220:;
  /* 10e63220 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10e63224 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63227 jl 0x10e6324e */
  if ((C.sf!=C.of)) goto L_10e6324e;
  /* 10e63229 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10e6322d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63230 jg 0x10e6324e */
  if ((!C.zf&&C.sf==C.of)) goto L_10e6324e;
L_10e63232:;
  /* 10e63232 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e63235 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63238 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e6323b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6323e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e63240 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10e63243 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63246 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63249 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10e6324c jmp 0x10e6320e */
  goto L_10e6320e;
L_10e6324e:;
  /* 10e6324e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e63251 mov esp, ebp */
  ESP = (EBP);
  /* 10e63253 pop ebp */
  EBP = (pop32());
  /* 10e63254 ret  */
  ESPCHK(0x10e631f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013260 @ 0x10e63260 (122 bytes, 39 insns) */
void f_10e63260(void) {
  FTRACE(0x10e63260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e63260 push ebp */
  push32((uint32_t)(EBP));
  /* 10e63261 mov ebp, esp */
  EBP = (ESP);
  /* 10e63263 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63267 cmp eax, dword ptr [0x10e842bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e842bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6326d jae 0x10e63291 */
  if (!C.cf) goto L_10e63291;
  /* 10e6326f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63272 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10e63275 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63278 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10e6327b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e6327e mov eax, dword ptr [ecx*4 + 0x10e84180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10e84180)));
  /* 10e63285 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10e6328a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e6328d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e6328f jne 0x10e632ac */
  if (!C.zf) goto L_10e632ac;
L_10e63291:;
  /* 10e63291 call 0x10e5e5b0 */
  push32(0x10e63296u); f_10e5e5b0();
  /* 10e63296 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10e6329c call 0x10e5e5c0 */
  push32(0x10e632a1u); f_10e5e5c0();
  /* 10e632a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e632a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e632aa jmp 0x10e632d6 */
  goto L_10e632d6;
L_10e632ac:;
  /* 10e632ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e632af push edx */
  push32((uint32_t)(EDX));
  /* 10e632b0 call 0x10e5fdd0 */
  push32(0x10e632b5u); f_10e5fdd0();
  /* 10e632b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e632b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e632bb push eax */
  push32((uint32_t)(EAX));
  /* 10e632bc call 0x10e632e0 */
  push32(0x10e632c1u); f_10e632e0();
  /* 10e632c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e632c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e632c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e632ca push ecx */
  push32((uint32_t)(ECX));
  /* 10e632cb call 0x10e5fe60 */
  push32(0x10e632d0u); f_10e5fe60();
  /* 10e632d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e632d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e632d6:;
  /* 10e632d6 mov esp, ebp */
  ESP = (EBP);
  /* 10e632d8 pop ebp */
  EBP = (pop32());
  /* 10e632d9 ret  */
  ESPCHK(0x10e63260u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10e632e0 (170 bytes, 59 insns) */
void f_10e632e0(void) {
  FTRACE(0x10e632e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e632e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e632e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e632e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e632e4 push esi */
  push32((uint32_t)(ESI));
  /* 10e632e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e632e8 push eax */
  push32((uint32_t)(EAX));
  /* 10e632e9 call 0x10e5fc50 */
  push32(0x10e632eeu); f_10e5fc50();
  /* 10e632ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e632f1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e632f4 je 0x10e63333 */
  if (C.zf) goto L_10e63333;
  /* 10e632f6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e632fa je 0x10e63302 */
  if (C.zf) goto L_10e63302;
  /* 10e632fc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63300 jne 0x10e6331c */
  if (!C.zf) goto L_10e6331c;
L_10e63302:;
  /* 10e63302 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e63304 call 0x10e5fc50 */
  push32(0x10e63309u); f_10e5fc50();
  /* 10e63309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6330c mov esi, eax */
  ESI = (EAX);
  /* 10e6330e push 2 */
  push32((uint32_t)(0x2u));
  /* 10e63310 call 0x10e5fc50 */
  push32(0x10e63315u); f_10e5fc50();
  /* 10e63315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63318 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6331a je 0x10e63333 */
  if (C.zf) goto L_10e63333;
L_10e6331c:;
  /* 10e6331c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6331f push ecx */
  push32((uint32_t)(ECX));
  /* 10e63320 call 0x10e5fc50 */
  push32(0x10e63325u); f_10e5fc50();
  /* 10e63325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63328 push eax */
  push32((uint32_t)(EAX));
  /* 10e63329 call dword ptr [0x10e85308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85308))), 0x10e6332fu);
  /* 10e6332f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e63331 je 0x10e6333c */
  if (C.zf) goto L_10e6333c;
L_10e63333:;
  /* 10e63333 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e6333a jmp 0x10e63345 */
  goto L_10e63345;
L_10e6333c:;
  /* 10e6333c call dword ptr [0x10e853c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853c0))), 0x10e63342u);
  /* 10e63342 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e63345:;
  /* 10e63345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63348 push edx */
  push32((uint32_t)(EDX));
  /* 10e63349 call 0x10e5fb70 */
  push32(0x10e6334eu); f_10e5fb70();
  /* 10e6334e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63351 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63354 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e63357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6335a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e6335d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e63360 mov edx, dword ptr [eax*4 + 0x10e84180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10e84180)));
  /* 10e63367 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10e6336c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63370 je 0x10e63383 */
  if (C.zf) goto L_10e63383;
  /* 10e63372 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e63375 push eax */
  push32((uint32_t)(EAX));
  /* 10e63376 call 0x10e5e510 */
  push32(0x10e6337bu); f_10e5e510();
  /* 10e6337b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6337e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e63381 jmp 0x10e63385 */
  goto L_10e63385;
L_10e63383:;
  /* 10e63383 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e63385:;
  /* 10e63385 pop esi */
  ESI = (pop32());
  /* 10e63386 mov esp, ebp */
  ESP = (EBP);
  /* 10e63388 pop ebp */
  EBP = (pop32());
  /* 10e63389 ret  */
  ESPCHK(0x10e632e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013390 @ 0x10e63390 (146 bytes, 52 insns) */
void f_10e63390(void) {
  FTRACE(0x10e63390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e63390 push ebp */
  push32((uint32_t)(EBP));
  /* 10e63391 mov ebp, esp */
  EBP = (ESP);
  /* 10e63393 push ebx */
  push32((uint32_t)(EBX));
  /* 10e63394 push esi */
  push32((uint32_t)(ESI));
  /* 10e63395 push edi */
  push32((uint32_t)(EDI));
L_10e63396:;
  /* 10e63396 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6339a jne 0x10e633ba */
  if (!C.zf) goto L_10e633ba;
  /* 10e6339c push 0x10e7e3a8 */
  push32((uint32_t)(0x10e7e3a8u));
  /* 10e633a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e633a3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10e633a5 push 0x10e7ea70 */
  push32((uint32_t)(0x10e7ea70u));
  /* 10e633aa push 2 */
  push32((uint32_t)(0x2u));
  /* 10e633ac call 0x10e557a0 */
  push32(0x10e633b1u); f_10e557a0();
  /* 10e633b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e633b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e633b7 jne 0x10e633ba */
  if (!C.zf) goto L_10e633ba;
  /* 10e633b9 int3  */
  x86_unimpl("int3 @ 0x10e633b9");
L_10e633ba:;
  /* 10e633ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e633bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e633be jne 0x10e63396 */
  if (!C.zf) goto L_10e63396;
  /* 10e633c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e633c3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e633c6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10e633cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e633ce je 0x10e6341d */
  if (C.zf) goto L_10e6341d;
  /* 10e633d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e633d3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e633d6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10e633d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e633db je 0x10e6341d */
  if (C.zf) goto L_10e6341d;
  /* 10e633dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e633df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e633e2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e633e5 push eax */
  push32((uint32_t)(EAX));
  /* 10e633e6 call 0x10e57170 */
  push32(0x10e633ebu); f_10e57170();
  /* 10e633eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e633ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e633f1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e633f4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10e633fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e633fd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10e63400 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63403 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10e63409 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6340c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10e63413 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63416 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10e6341d:;
  /* 10e6341d pop edi */
  EDI = (pop32());
  /* 10e6341e pop esi */
  ESI = (pop32());
  /* 10e6341f pop ebx */
  EBX = (pop32());
  /* 10e63420 pop ebp */
  EBP = (pop32());
  /* 10e63421 ret  */
  ESPCHK(0x10e63390u, _esp0);
  ESP += 4; return;
}

/* FUN_10013430 @ 0x10e63430 (289 bytes, 97 insns) */
void f_10e63430(void) {
  FTRACE(0x10e63430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e63430 push ebp */
  push32((uint32_t)(EBP));
  /* 10e63431 mov ebp, esp */
  EBP = (ESP);
  /* 10e63433 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e63436 push esi */
  push32((uint32_t)(ESI));
  /* 10e63437 mov eax, dword ptr [0x10e81ca8] */
  EAX = (r32((uint32_t)(0x10e81ca8)));
  /* 10e6343c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e6343f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e63446 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e6344d jmp 0x10e63458 */
  goto L_10e63458;
L_10e6344f:;
  /* 10e6344f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e63452 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63455 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e63458:;
  /* 10e63458 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6345c jae 0x10e63491 */
  if (!C.cf) goto L_10e63491;
  /* 10e6345e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e63461 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63464 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e63467 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63468 call 0x10e59510 */
  push32(0x10e6346du); f_10e59510();
  /* 10e6346d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63470 mov esi, eax */
  ESI = (EAX);
  /* 10e63472 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e63475 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63478 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10e6347c push ecx */
  push32((uint32_t)(ECX));
  /* 10e6347d call 0x10e59510 */
  push32(0x10e63482u); f_10e59510();
  /* 10e63482 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63485 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63488 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10e6348c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e6348f jmp 0x10e6344f */
  goto L_10e6344f;
L_10e63491:;
  /* 10e63491 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e63494 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63497 push eax */
  push32((uint32_t)(EAX));
  /* 10e63498 call 0x10e566c0 */
  push32(0x10e6349du); f_10e566c0();
  /* 10e6349d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e634a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e634a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e634a7 je 0x10e63549 */
  if (C.zf) goto L_10e63549;
  /* 10e634ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e634b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e634b3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e634ba jmp 0x10e634c5 */
  goto L_10e634c5;
L_10e634bc:;
  /* 10e634bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e634bf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e634c2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e634c5:;
  /* 10e634c5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e634c9 jae 0x10e6353a */
  if (!C.cf) goto L_10e6353a;
  /* 10e634cb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e634ce mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10e634d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e634d4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e634d7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e634da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e634dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e634e0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e634e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e634e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e634e7 push edx */
  push32((uint32_t)(EDX));
  /* 10e634e8 call 0x10e59690 */
  push32(0x10e634edu); f_10e59690();
  /* 10e634ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e634f0 push eax */
  push32((uint32_t)(EAX));
  /* 10e634f1 call 0x10e59510 */
  push32(0x10e634f6u); f_10e59510();
  /* 10e634f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e634f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e634fc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e634fe mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e63501 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63504 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10e63507 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e6350a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6350d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e63510 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e63513 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63516 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10e6351a push eax */
  push32((uint32_t)(EAX));
  /* 10e6351b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e6351e push ecx */
  push32((uint32_t)(ECX));
  /* 10e6351f call 0x10e59690 */
  push32(0x10e63524u); f_10e59690();
  /* 10e63524 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63527 push eax */
  push32((uint32_t)(EAX));
  /* 10e63528 call 0x10e59510 */
  push32(0x10e6352du); f_10e59510();
  /* 10e6352d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63530 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63533 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63535 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e63538 jmp 0x10e634bc */
  goto L_10e634bc;
L_10e6353a:;
  /* 10e6353a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e6353d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e63540 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63543 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63546 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10e63549:;
  /* 10e63549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6354c pop esi */
  ESI = (pop32());
  /* 10e6354d mov esp, ebp */
  ESP = (EBP);
  /* 10e6354f pop ebp */
  EBP = (pop32());
  /* 10e63550 ret  */
  ESPCHK(0x10e63430u, _esp0);
  ESP += 4; return;
}

/* FUN_10013560 @ 0x10e63560 (291 bytes, 97 insns) */
void f_10e63560(void) {
  FTRACE(0x10e63560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e63560 push ebp */
  push32((uint32_t)(EBP));
  /* 10e63561 mov ebp, esp */
  EBP = (ESP);
  /* 10e63563 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e63566 push esi */
  push32((uint32_t)(ESI));
  /* 10e63567 mov eax, dword ptr [0x10e81ca8] */
  EAX = (r32((uint32_t)(0x10e81ca8)));
  /* 10e6356c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e6356f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e63576 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e6357d jmp 0x10e63588 */
  goto L_10e63588;
L_10e6357f:;
  /* 10e6357f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e63582 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63585 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e63588:;
  /* 10e63588 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6358c jae 0x10e635c2 */
  if (!C.cf) goto L_10e635c2;
  /* 10e6358e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e63591 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63594 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10e63598 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63599 call 0x10e59510 */
  push32(0x10e6359eu); f_10e59510();
  /* 10e6359e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e635a1 mov esi, eax */
  ESI = (EAX);
  /* 10e635a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e635a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e635a9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10e635ad push ecx */
  push32((uint32_t)(ECX));
  /* 10e635ae call 0x10e59510 */
  push32(0x10e635b3u); f_10e59510();
  /* 10e635b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e635b6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e635b9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10e635bd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e635c0 jmp 0x10e6357f */
  goto L_10e6357f;
L_10e635c2:;
  /* 10e635c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e635c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e635c8 push eax */
  push32((uint32_t)(EAX));
  /* 10e635c9 call 0x10e566c0 */
  push32(0x10e635ceu); f_10e566c0();
  /* 10e635ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e635d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e635d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e635d8 je 0x10e6367b */
  if (C.zf) goto L_10e6367b;
  /* 10e635de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e635e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e635e4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e635eb jmp 0x10e635f6 */
  goto L_10e635f6;
L_10e635ed:;
  /* 10e635ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e635f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e635f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e635f6:;
  /* 10e635f6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e635fa jae 0x10e6366c */
  if (!C.cf) goto L_10e6366c;
  /* 10e635fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e635ff mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10e63602 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63605 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63608 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e6360b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e6360e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63611 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10e63615 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63616 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63619 push edx */
  push32((uint32_t)(EDX));
  /* 10e6361a call 0x10e59690 */
  push32(0x10e6361fu); f_10e59690();
  /* 10e6361f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63622 push eax */
  push32((uint32_t)(EAX));
  /* 10e63623 call 0x10e59510 */
  push32(0x10e63628u); f_10e59510();
  /* 10e63628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6362b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e6362e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63630 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e63633 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63636 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10e63639 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e6363c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6363f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e63642 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e63645 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63648 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10e6364c push eax */
  push32((uint32_t)(EAX));
  /* 10e6364d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63650 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63651 call 0x10e59690 */
  push32(0x10e63656u); f_10e59690();
  /* 10e63656 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63659 push eax */
  push32((uint32_t)(EAX));
  /* 10e6365a call 0x10e59510 */
  push32(0x10e6365fu); f_10e59510();
  /* 10e6365f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63662 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63665 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63667 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e6366a jmp 0x10e635ed */
  goto L_10e635ed;
L_10e6366c:;
  /* 10e6366c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e6366f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e63672 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63675 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63678 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10e6367b:;
  /* 10e6367b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6367e pop esi */
  ESI = (pop32());
  /* 10e6367f mov esp, ebp */
  ESP = (EBP);
  /* 10e63681 pop ebp */
  EBP = (pop32());
  /* 10e63682 ret  */
  ESPCHK(0x10e63560u, _esp0);
  ESP += 4; return;
}

/* FUN_10013690 @ 0x10e63690 (878 bytes, 273 insns) */
void f_10e63690(void) {
  FTRACE(0x10e63690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e63690 push ebp */
  push32((uint32_t)(EBP));
  /* 10e63691 mov ebp, esp */
  EBP = (ESP);
  /* 10e63693 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e63696 push esi */
  push32((uint32_t)(ESI));
  /* 10e63697 mov eax, dword ptr [0x10e81ca8] */
  EAX = (r32((uint32_t)(0x10e81ca8)));
  /* 10e6369c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e6369f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e636a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e636ad jmp 0x10e636b8 */
  goto L_10e636b8;
L_10e636af:;
  /* 10e636af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e636b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e636b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e636b8:;
  /* 10e636b8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e636bc jae 0x10e636f1 */
  if (!C.cf) goto L_10e636f1;
  /* 10e636be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e636c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e636c4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10e636c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e636c8 call 0x10e59510 */
  push32(0x10e636cdu); f_10e59510();
  /* 10e636cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e636d0 mov esi, eax */
  ESI = (EAX);
  /* 10e636d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e636d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e636d8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10e636dc push ecx */
  push32((uint32_t)(ECX));
  /* 10e636dd call 0x10e59510 */
  push32(0x10e636e2u); f_10e59510();
  /* 10e636e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e636e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e636e8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10e636ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e636ef jmp 0x10e636af */
  goto L_10e636af;
L_10e636f1:;
  /* 10e636f1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e636f8 jmp 0x10e63703 */
  goto L_10e63703;
L_10e636fa:;
  /* 10e636fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e636fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63700 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10e63703:;
  /* 10e63703 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63707 jae 0x10e6373d */
  if (!C.cf) goto L_10e6373d;
  /* 10e63709 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e6370c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6370f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10e63713 push eax */
  push32((uint32_t)(EAX));
  /* 10e63714 call 0x10e59510 */
  push32(0x10e63719u); f_10e59510();
  /* 10e63719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6371c mov esi, eax */
  ESI = (EAX);
  /* 10e6371e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e63721 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63724 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10e63728 push eax */
  push32((uint32_t)(EAX));
  /* 10e63729 call 0x10e59510 */
  push32(0x10e6372eu); f_10e59510();
  /* 10e6372e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63731 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63734 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10e63738 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e6373b jmp 0x10e636fa */
  goto L_10e636fa;
L_10e6373d:;
  /* 10e6373d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63740 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10e63746 push eax */
  push32((uint32_t)(EAX));
  /* 10e63747 call 0x10e59510 */
  push32(0x10e6374cu); f_10e59510();
  /* 10e6374c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6374f mov esi, eax */
  ESI = (EAX);
  /* 10e63751 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63754 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10e6375a push edx */
  push32((uint32_t)(EDX));
  /* 10e6375b call 0x10e59510 */
  push32(0x10e63760u); f_10e59510();
  /* 10e63760 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63763 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63766 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10e6376a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e6376d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63770 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10e63776 push edx */
  push32((uint32_t)(EDX));
  /* 10e63777 call 0x10e59510 */
  push32(0x10e6377cu); f_10e59510();
  /* 10e6377c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6377f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e63782 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10e63786 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e63789 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6378c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10e63792 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63793 call 0x10e59510 */
  push32(0x10e63798u); f_10e59510();
  /* 10e63798 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6379b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e6379e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10e637a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e637a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e637a8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10e637ae push edx */
  push32((uint32_t)(EDX));
  /* 10e637af call 0x10e59510 */
  push32(0x10e637b4u); f_10e59510();
  /* 10e637b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e637b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e637ba lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10e637be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e637c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e637c4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e637c9 push eax */
  push32((uint32_t)(EAX));
  /* 10e637ca call 0x10e566c0 */
  push32(0x10e637cfu); f_10e566c0();
  /* 10e637cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e637d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e637d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e637d9 je 0x10e639f6 */
  if (C.zf) goto L_10e639f6;
  /* 10e637df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e637e2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e637e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e637e8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e637ee mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e637f1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10e637f6 mov eax, dword ptr [0x10e81ca8] */
  EAX = (r32((uint32_t)(0x10e81ca8)));
  /* 10e637fb push eax */
  push32((uint32_t)(EAX));
  /* 10e637fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e637ff push ecx */
  push32((uint32_t)(ECX));
  /* 10e63800 call 0x10e5cfc0 */
  push32(0x10e63805u); f_10e5cfc0();
  /* 10e63805 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63808 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e6380f jmp 0x10e6381a */
  goto L_10e6381a;
L_10e63811:;
  /* 10e63811 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e63814 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63817 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e6381a:;
  /* 10e6381a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6381e jae 0x10e6388e */
  if (!C.cf) goto L_10e6388e;
  /* 10e63820 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e63823 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e63826 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63829 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10e6382c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e6382f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63832 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e63835 push edx */
  push32((uint32_t)(EDX));
  /* 10e63836 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63839 push eax */
  push32((uint32_t)(EAX));
  /* 10e6383a call 0x10e59690 */
  push32(0x10e6383fu); f_10e59690();
  /* 10e6383f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63842 push eax */
  push32((uint32_t)(EAX));
  /* 10e63843 call 0x10e59510 */
  push32(0x10e63848u); f_10e59510();
  /* 10e63848 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6384b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e6384e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10e63852 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e63855 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e63858 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e6385b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e6385e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10e63862 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e63865 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63868 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10e6386c push edx */
  push32((uint32_t)(EDX));
  /* 10e6386d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63870 push eax */
  push32((uint32_t)(EAX));
  /* 10e63871 call 0x10e59690 */
  push32(0x10e63876u); f_10e59690();
  /* 10e63876 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63879 push eax */
  push32((uint32_t)(EAX));
  /* 10e6387a call 0x10e59510 */
  push32(0x10e6387fu); f_10e59510();
  /* 10e6387f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63882 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63885 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10e63889 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e6388c jmp 0x10e63811 */
  goto L_10e63811;
L_10e6388e:;
  /* 10e6388e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e63895 jmp 0x10e638a0 */
  goto L_10e638a0;
L_10e63897:;
  /* 10e63897 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e6389a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6389d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10e638a0:;
  /* 10e638a0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e638a4 jae 0x10e63916 */
  if (!C.cf) goto L_10e63916;
  /* 10e638a6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e638a9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e638ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e638af mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10e638b3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e638b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e638b9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10e638bd push eax */
  push32((uint32_t)(EAX));
  /* 10e638be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e638c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e638c2 call 0x10e59690 */
  push32(0x10e638c7u); f_10e59690();
  /* 10e638c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e638ca push eax */
  push32((uint32_t)(EAX));
  /* 10e638cb call 0x10e59510 */
  push32(0x10e638d0u); f_10e59510();
  /* 10e638d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e638d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e638d6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10e638da mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e638dd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e638e0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e638e3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e638e6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10e638ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e638ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e638f0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10e638f4 push eax */
  push32((uint32_t)(EAX));
  /* 10e638f5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e638f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e638f9 call 0x10e59690 */
  push32(0x10e638feu); f_10e59690();
  /* 10e638fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63901 push eax */
  push32((uint32_t)(EAX));
  /* 10e63902 call 0x10e59510 */
  push32(0x10e63907u); f_10e59510();
  /* 10e63907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6390a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e6390d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10e63911 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e63914 jmp 0x10e63897 */
  goto L_10e63897;
L_10e63916:;
  /* 10e63916 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e63919 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e6391c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10e63922 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63925 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10e6392b push ecx */
  push32((uint32_t)(ECX));
  /* 10e6392c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e6392f push edx */
  push32((uint32_t)(EDX));
  /* 10e63930 call 0x10e59690 */
  push32(0x10e63935u); f_10e59690();
  /* 10e63935 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63938 push eax */
  push32((uint32_t)(EAX));
  /* 10e63939 call 0x10e59510 */
  push32(0x10e6393eu); f_10e59510();
  /* 10e6393e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63941 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63944 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10e63948 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e6394b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e6394e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63951 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10e63957 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6395a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10e63960 push eax */
  push32((uint32_t)(EAX));
  /* 10e63961 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63964 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63965 call 0x10e59690 */
  push32(0x10e6396au); f_10e59690();
  /* 10e6396a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6396d push eax */
  push32((uint32_t)(EAX));
  /* 10e6396e call 0x10e59510 */
  push32(0x10e63973u); f_10e59510();
  /* 10e63973 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63976 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63979 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10e6397d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e63980 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e63983 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63986 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10e6398c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6398f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10e63995 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63996 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e63999 push edx */
  push32((uint32_t)(EDX));
  /* 10e6399a call 0x10e59690 */
  push32(0x10e6399fu); f_10e59690();
  /* 10e6399f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e639a2 push eax */
  push32((uint32_t)(EAX));
  /* 10e639a3 call 0x10e59510 */
  push32(0x10e639a8u); f_10e59510();
  /* 10e639a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e639ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e639ae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10e639b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e639b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e639b8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e639bb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10e639c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e639c4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10e639ca push eax */
  push32((uint32_t)(EAX));
  /* 10e639cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e639ce push ecx */
  push32((uint32_t)(ECX));
  /* 10e639cf call 0x10e59690 */
  push32(0x10e639d4u); f_10e59690();
  /* 10e639d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e639d7 push eax */
  push32((uint32_t)(EAX));
  /* 10e639d8 call 0x10e59510 */
  push32(0x10e639ddu); f_10e59510();
  /* 10e639dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e639e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e639e3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10e639e7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e639ea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e639ed mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e639f0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10e639f6:;
  /* 10e639f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e639f9 pop esi */
  ESI = (pop32());
  /* 10e639fa mov esp, ebp */
  ESP = (EBP);
  /* 10e639fc pop ebp */
  EBP = (pop32());
  /* 10e639fd ret  */
  ESPCHK(0x10e63690u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a00 @ 0x10e63a00 (31 bytes, 15 insns) */
void f_10e63a00(void) {
  FTRACE(0x10e63a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e63a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10e63a01 mov ebp, esp */
  EBP = (ESP);
  /* 10e63a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e63a05 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63a08 push eax */
  push32((uint32_t)(EAX));
  /* 10e63a09 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63a0c push ecx */
  push32((uint32_t)(ECX));
  /* 10e63a0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63a10 push edx */
  push32((uint32_t)(EDX));
  /* 10e63a11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63a14 push eax */
  push32((uint32_t)(EAX));
  /* 10e63a15 call 0x10e63a20 */
  push32(0x10e63a1au); f_10e63a20();
  /* 10e63a1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63a1d pop ebp */
  EBP = (pop32());
  /* 10e63a1e ret  */
  ESPCHK(0x10e63a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a20 @ 0x10e63a20 (393 bytes, 123 insns) */
void f_10e63a20(void) {
  FTRACE(0x10e63a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e63a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10e63a21 mov ebp, esp */
  EBP = (ESP);
  /* 10e63a23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e63a26 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63a2a jne 0x10e63a36 */
  if (!C.zf) goto L_10e63a36;
  /* 10e63a2c mov eax, dword ptr [0x10e81ca8] */
  EAX = (r32((uint32_t)(0x10e81ca8)));
  /* 10e63a31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e63a34 jmp 0x10e63a3c */
  goto L_10e63a3c;
L_10e63a36:;
  /* 10e63a36 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63a39 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e63a3c:;
  /* 10e63a3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e63a3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e63a42 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63a45 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e63a48 push 0x10e82b3c */
  push32((uint32_t)(0x10e82b3cu));
  /* 10e63a4d call dword ptr [0x10e852ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e852ec))), 0x10e63a53u);
  /* 10e63a53 cmp dword ptr [0x10e82b2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63a5a je 0x10e63a7a */
  if (C.zf) goto L_10e63a7a;
  /* 10e63a5c push 0x10e82b3c */
  push32((uint32_t)(0x10e82b3cu));
  /* 10e63a61 call dword ptr [0x10e853d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d8))), 0x10e63a67u);
  /* 10e63a67 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e63a69 call 0x10e5a0e0 */
  push32(0x10e63a6eu); f_10e5a0e0();
  /* 10e63a6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63a71 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10e63a78 jmp 0x10e63a81 */
  goto L_10e63a81;
L_10e63a7a:;
  /* 10e63a7a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e63a81:;
  /* 10e63a81 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63a85 jbe 0x10e63b72 */
  if ((C.cf||C.zf)) goto L_10e63b72;
  /* 10e63a8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63a8e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e63a90 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 10e63a93 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e63a97 je 0x10e63aa1 */
  if (C.zf) goto L_10e63aa1;
  /* 10e63a99 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e63a9d je 0x10e63aa6 */
  if (C.zf) goto L_10e63aa6;
  /* 10e63a9f jmp 0x10e63b00 */
  goto L_10e63b00;
L_10e63aa1:;
  /* 10e63aa1 jmp 0x10e63b72 */
  goto L_10e63b72;
L_10e63aa6:;
  /* 10e63aa6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63aa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63aac mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10e63aaf mov dword ptr [0x10e82b18], 0 */
  w32((uint32_t)(0x10e82b18), (0x0u));
  /* 10e63ab9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63abc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e63abf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63ac2 jne 0x10e63ad7 */
  if (!C.zf) goto L_10e63ad7;
  /* 10e63ac4 mov dword ptr [0x10e82b18], 1 */
  w32((uint32_t)(0x10e82b18), (0x1u));
  /* 10e63ace mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63ad1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63ad4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10e63ad7:;
  /* 10e63ad7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e63ada push ecx */
  push32((uint32_t)(ECX));
  /* 10e63adb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10e63ade push edx */
  push32((uint32_t)(EDX));
  /* 10e63adf lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10e63ae2 push eax */
  push32((uint32_t)(EAX));
  /* 10e63ae3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63ae6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63ae7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63aea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e63aec push eax */
  push32((uint32_t)(EAX));
  /* 10e63aed call 0x10e63bb0 */
  push32(0x10e63af2u); f_10e63bb0();
  /* 10e63af2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63af5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63af8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63afb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10e63afe jmp 0x10e63b6d */
  goto L_10e63b6d;
L_10e63b00:;
  /* 10e63b00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63b03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e63b05 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e63b07 mov ecx, dword ptr [0x10e80ca8] */
  ECX = (r32((uint32_t)(0x10e80ca8)));
  /* 10e63b0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e63b0f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e63b13 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10e63b19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e63b1b je 0x10e63b48 */
  if (C.zf) goto L_10e63b48;
  /* 10e63b1d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63b21 jbe 0x10e63b48 */
  if ((C.cf||C.zf)) goto L_10e63b48;
  /* 10e63b23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63b26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63b29 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e63b2b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e63b2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63b30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63b33 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e63b36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63b39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63b3c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10e63b3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63b42 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e63b45 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e63b48:;
  /* 10e63b48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63b4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63b4e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e63b50 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e63b52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63b55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63b58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e63b5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63b5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63b61 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10e63b64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63b67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e63b6a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e63b6d:;
  /* 10e63b6d jmp 0x10e63a81 */
  goto L_10e63a81;
L_10e63b72:;
  /* 10e63b72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63b76 je 0x10e63b84 */
  if (C.zf) goto L_10e63b84;
  /* 10e63b78 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e63b7a call 0x10e5a180 */
  push32(0x10e63b7fu); f_10e5a180();
  /* 10e63b7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63b82 jmp 0x10e63b8f */
  goto L_10e63b8f;
L_10e63b84:;
  /* 10e63b84 push 0x10e82b3c */
  push32((uint32_t)(0x10e82b3cu));
  /* 10e63b89 call dword ptr [0x10e853d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d8))), 0x10e63b8fu);
L_10e63b8f:;
  /* 10e63b8f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63b93 jbe 0x10e63ba3 */
  if ((C.cf||C.zf)) goto L_10e63ba3;
  /* 10e63b95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e63b98 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e63b9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63b9e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e63ba1 jmp 0x10e63ba5 */
  goto L_10e63ba5;
L_10e63ba3:;
  /* 10e63ba3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e63ba5:;
  /* 10e63ba5 mov esp, ebp */
  ESP = (EBP);
  /* 10e63ba7 pop ebp */
  EBP = (pop32());
  /* 10e63ba8 ret  */
  ESPCHK(0x10e63a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013bb0 @ 0x10e63bb0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_10e63bb0(void) {
  FTRACE(0x10e63bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e63bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e63bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10e63bb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e63bb6 push esi */
  push32((uint32_t)(ESI));
  /* 10e63bb7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10e63bbb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e63bbe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63bc1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e63bc4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e63bc7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63bcb ja 0x10e64118 */
  if ((!C.cf&&!C.zf)) goto L_10e64118;
  /* 10e63bd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e63bd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e63bd6 mov dl, byte ptr [eax + 0x10e64179] */
  DL = (r8((uint32_t)(EAX + 0x10e64179)));
  /* 10e63bdc jmp dword ptr [edx*4 + 0x10e6411d] */
  switch (EDX) {
    case 0: goto L_10e640f6;
    case 1: goto L_10e63c05;
    case 2: goto L_10e63c4b;
    case 3: goto L_10e63d98;
    case 4: goto L_10e63dc0;
    case 5: goto L_10e63e5f;
    case 6: goto L_10e63ecb;
    case 7: goto L_10e63ef4;
    case 8: goto L_10e63f35;
    case 9: goto L_10e64017;
    case 10: goto L_10e6407e;
    case 11: goto L_10e640cb;
    case 12: goto L_10e63be3;
    case 13: goto L_10e63c28;
    case 14: goto L_10e63c6e;
    case 15: goto L_10e63d6e;
    case 16: goto L_10e63e05;
    case 17: goto L_10e63e32;
    case 18: goto L_10e63e87;
    case 19: goto L_10e63f0b;
    case 20: goto L_10e63fb9;
    case 21: goto L_10e64048;
    case 22: goto L_10e64118;
    default: x86_unimpl("switch@0x10e63bdc out of table"); return;
  }
L_10e63be3:;
  /* 10e63be3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63be6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63be7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63bea push edx */
  push32((uint32_t)(EDX));
  /* 10e63beb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63bee mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10e63bf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63bf4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10e63bf7 push eax */
  push32((uint32_t)(EAX));
  /* 10e63bf8 call 0x10e641d0 */
  push32(0x10e63bfdu); f_10e641d0();
  /* 10e63bfd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63c00 jmp 0x10e64118 */
  goto L_10e64118;
L_10e63c05:;
  /* 10e63c05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63c08 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63c09 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63c0c push edx */
  push32((uint32_t)(EDX));
  /* 10e63c0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63c10 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10e63c13 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63c16 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10e63c1a push eax */
  push32((uint32_t)(EAX));
  /* 10e63c1b call 0x10e641d0 */
  push32(0x10e63c20u); f_10e641d0();
  /* 10e63c20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63c23 jmp 0x10e64118 */
  goto L_10e64118;
L_10e63c28:;
  /* 10e63c28 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63c2b push ecx */
  push32((uint32_t)(ECX));
  /* 10e63c2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63c2f push edx */
  push32((uint32_t)(EDX));
  /* 10e63c30 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63c33 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e63c36 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63c39 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10e63c3d push eax */
  push32((uint32_t)(EAX));
  /* 10e63c3e call 0x10e641d0 */
  push32(0x10e63c43u); f_10e641d0();
  /* 10e63c43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63c46 jmp 0x10e64118 */
  goto L_10e64118;
L_10e63c4b:;
  /* 10e63c4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63c4e push ecx */
  push32((uint32_t)(ECX));
  /* 10e63c4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63c52 push edx */
  push32((uint32_t)(EDX));
  /* 10e63c53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63c56 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e63c59 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63c5c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10e63c60 push eax */
  push32((uint32_t)(EAX));
  /* 10e63c61 call 0x10e641d0 */
  push32(0x10e63c66u); f_10e641d0();
  /* 10e63c66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63c69 jmp 0x10e64118 */
  goto L_10e64118;
L_10e63c6e:;
  /* 10e63c6e cmp dword ptr [0x10e82b18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63c75 je 0x10e63cf6 */
  if (C.zf) goto L_10e63cf6;
  /* 10e63c77 mov dword ptr [0x10e82b18], 0 */
  w32((uint32_t)(0x10e82b18), (0x0u));
  /* 10e63c81 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63c84 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63c85 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63c88 push edx */
  push32((uint32_t)(EDX));
  /* 10e63c89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63c8c push eax */
  push32((uint32_t)(EAX));
  /* 10e63c8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63c90 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63c91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63c94 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10e63c9a push eax */
  push32((uint32_t)(EAX));
  /* 10e63c9b call 0x10e64380 */
  push32(0x10e63ca0u); f_10e64380();
  /* 10e63ca0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63ca3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63ca6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63ca9 jne 0x10e63cb0 */
  if (!C.zf) goto L_10e63cb0;
  /* 10e63cab jmp 0x10e64118 */
  goto L_10e64118;
L_10e63cb0:;
  /* 10e63cb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63cb3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e63cb5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10e63cb8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63cbb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e63cbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63cc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63cc3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e63cc5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63cc8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e63cca sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e63ccd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63cd0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e63cd2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63cd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63cd6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63cd9 push edx */
  push32((uint32_t)(EDX));
  /* 10e63cda mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63cdd push eax */
  push32((uint32_t)(EAX));
  /* 10e63cde mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63ce1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63ce2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63ce5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10e63ceb push eax */
  push32((uint32_t)(EAX));
  /* 10e63cec call 0x10e64380 */
  push32(0x10e63cf1u); f_10e64380();
  /* 10e63cf1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63cf4 jmp 0x10e63d69 */
  goto L_10e63d69;
L_10e63cf6:;
  /* 10e63cf6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63cf9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63cfa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63cfd push edx */
  push32((uint32_t)(EDX));
  /* 10e63cfe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63d01 push eax */
  push32((uint32_t)(EAX));
  /* 10e63d02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63d05 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63d06 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63d09 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10e63d0f push eax */
  push32((uint32_t)(EAX));
  /* 10e63d10 call 0x10e64380 */
  push32(0x10e63d15u); f_10e64380();
  /* 10e63d15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63d18 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63d1b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63d1e jne 0x10e63d25 */
  if (!C.zf) goto L_10e63d25;
  /* 10e63d20 jmp 0x10e64118 */
  goto L_10e64118;
L_10e63d25:;
  /* 10e63d25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63d28 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e63d2a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 10e63d2d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63d30 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e63d32 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63d35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63d38 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e63d3a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63d3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e63d3f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e63d42 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63d45 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e63d47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63d4a push ecx */
  push32((uint32_t)(ECX));
  /* 10e63d4b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63d4e push edx */
  push32((uint32_t)(EDX));
  /* 10e63d4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63d52 push eax */
  push32((uint32_t)(EAX));
  /* 10e63d53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63d56 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63d57 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63d5a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10e63d60 push eax */
  push32((uint32_t)(EAX));
  /* 10e63d61 call 0x10e64380 */
  push32(0x10e63d66u); f_10e64380();
  /* 10e63d66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e63d69:;
  /* 10e63d69 jmp 0x10e64118 */
  goto L_10e64118;
L_10e63d6e:;
  /* 10e63d6e mov ecx, dword ptr [0x10e82b18] */
  ECX = (r32((uint32_t)(0x10e82b18)));
  /* 10e63d74 mov dword ptr [0x10e82b28], ecx */
  w32((uint32_t)(0x10e82b28), (ECX));
  /* 10e63d7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63d7d push edx */
  push32((uint32_t)(EDX));
  /* 10e63d7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63d81 push eax */
  push32((uint32_t)(EAX));
  /* 10e63d82 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e63d84 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63d87 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e63d8a push edx */
  push32((uint32_t)(EDX));
  /* 10e63d8b call 0x10e64220 */
  push32(0x10e63d90u); f_10e64220();
  /* 10e63d90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63d93 jmp 0x10e64118 */
  goto L_10e64118;
L_10e63d98:;
  /* 10e63d98 mov eax, dword ptr [0x10e82b18] */
  EAX = (r32((uint32_t)(0x10e82b18)));
  /* 10e63d9d mov dword ptr [0x10e82b28], eax */
  w32((uint32_t)(0x10e82b28), (EAX));
  /* 10e63da2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63da5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63da6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63da9 push edx */
  push32((uint32_t)(EDX));
  /* 10e63daa push 2 */
  push32((uint32_t)(0x2u));
  /* 10e63dac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63daf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e63db2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63db3 call 0x10e64220 */
  push32(0x10e63db8u); f_10e64220();
  /* 10e63db8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63dbb jmp 0x10e64118 */
  goto L_10e64118;
L_10e63dc0:;
  /* 10e63dc0 mov edx, dword ptr [0x10e82b18] */
  EDX = (r32((uint32_t)(0x10e82b18)));
  /* 10e63dc6 mov dword ptr [0x10e82b28], edx */
  w32((uint32_t)(0x10e82b28), (EDX));
  /* 10e63dcc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63dcf mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e63dd2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e63dd3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10e63dd8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e63dda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e63ddd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63de1 jne 0x10e63dea */
  if (!C.zf) goto L_10e63dea;
  /* 10e63de3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_10e63dea:;
  /* 10e63dea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63ded push edx */
  push32((uint32_t)(EDX));
  /* 10e63dee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63df1 push eax */
  push32((uint32_t)(EAX));
  /* 10e63df2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e63df4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e63df7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63df8 call 0x10e64220 */
  push32(0x10e63dfdu); f_10e64220();
  /* 10e63dfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63e00 jmp 0x10e64118 */
  goto L_10e64118;
L_10e63e05:;
  /* 10e63e05 mov edx, dword ptr [0x10e82b18] */
  EDX = (r32((uint32_t)(0x10e82b18)));
  /* 10e63e0b mov dword ptr [0x10e82b28], edx */
  w32((uint32_t)(0x10e82b28), (EDX));
  /* 10e63e11 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63e14 push eax */
  push32((uint32_t)(EAX));
  /* 10e63e15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63e18 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63e19 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e63e1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63e1e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e63e21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63e24 push eax */
  push32((uint32_t)(EAX));
  /* 10e63e25 call 0x10e64220 */
  push32(0x10e63e2au); f_10e64220();
  /* 10e63e2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63e2d jmp 0x10e64118 */
  goto L_10e64118;
L_10e63e32:;
  /* 10e63e32 mov ecx, dword ptr [0x10e82b18] */
  ECX = (r32((uint32_t)(0x10e82b18)));
  /* 10e63e38 mov dword ptr [0x10e82b28], ecx */
  w32((uint32_t)(0x10e82b28), (ECX));
  /* 10e63e3e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63e41 push edx */
  push32((uint32_t)(EDX));
  /* 10e63e42 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63e45 push eax */
  push32((uint32_t)(EAX));
  /* 10e63e46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e63e48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63e4b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e63e4e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63e51 push edx */
  push32((uint32_t)(EDX));
  /* 10e63e52 call 0x10e64220 */
  push32(0x10e63e57u); f_10e64220();
  /* 10e63e57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63e5a jmp 0x10e64118 */
  goto L_10e64118;
L_10e63e5f:;
  /* 10e63e5f mov eax, dword ptr [0x10e82b18] */
  EAX = (r32((uint32_t)(0x10e82b18)));
  /* 10e63e64 mov dword ptr [0x10e82b28], eax */
  w32((uint32_t)(0x10e82b28), (EAX));
  /* 10e63e69 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63e6c push ecx */
  push32((uint32_t)(ECX));
  /* 10e63e6d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63e70 push edx */
  push32((uint32_t)(EDX));
  /* 10e63e71 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e63e73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63e76 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e63e79 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63e7a call 0x10e64220 */
  push32(0x10e63e7fu); f_10e64220();
  /* 10e63e7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63e82 jmp 0x10e64118 */
  goto L_10e64118;
L_10e63e87:;
  /* 10e63e87 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63e8a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63e8e jg 0x10e63eac */
  if ((!C.zf&&C.sf==C.of)) goto L_10e63eac;
  /* 10e63e90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63e93 push eax */
  push32((uint32_t)(EAX));
  /* 10e63e94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63e97 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63e98 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63e9b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10e63ea1 push eax */
  push32((uint32_t)(EAX));
  /* 10e63ea2 call 0x10e641d0 */
  push32(0x10e63ea7u); f_10e641d0();
  /* 10e63ea7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63eaa jmp 0x10e63ec6 */
  goto L_10e63ec6;
L_10e63eac:;
  /* 10e63eac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63eaf push ecx */
  push32((uint32_t)(ECX));
  /* 10e63eb0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63eb3 push edx */
  push32((uint32_t)(EDX));
  /* 10e63eb4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63eb7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10e63ebd push ecx */
  push32((uint32_t)(ECX));
  /* 10e63ebe call 0x10e641d0 */
  push32(0x10e63ec3u); f_10e641d0();
  /* 10e63ec3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e63ec6:;
  /* 10e63ec6 jmp 0x10e64118 */
  goto L_10e64118;
L_10e63ecb:;
  /* 10e63ecb mov edx, dword ptr [0x10e82b18] */
  EDX = (r32((uint32_t)(0x10e82b18)));
  /* 10e63ed1 mov dword ptr [0x10e82b28], edx */
  w32((uint32_t)(0x10e82b28), (EDX));
  /* 10e63ed7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63eda push eax */
  push32((uint32_t)(EAX));
  /* 10e63edb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63ede push ecx */
  push32((uint32_t)(ECX));
  /* 10e63edf push 2 */
  push32((uint32_t)(0x2u));
  /* 10e63ee1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63ee4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e63ee6 push eax */
  push32((uint32_t)(EAX));
  /* 10e63ee7 call 0x10e64220 */
  push32(0x10e63eecu); f_10e64220();
  /* 10e63eec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63eef jmp 0x10e64118 */
  goto L_10e64118;
L_10e63ef4:;
  /* 10e63ef4 mov ecx, dword ptr [0x10e82b18] */
  ECX = (r32((uint32_t)(0x10e82b18)));
  /* 10e63efa mov dword ptr [0x10e82b28], ecx */
  w32((uint32_t)(0x10e82b28), (ECX));
  /* 10e63f00 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63f03 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10e63f06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e63f09 jmp 0x10e63f5d */
  goto L_10e63f5d;
L_10e63f0b:;
  /* 10e63f0b mov ecx, dword ptr [0x10e82b18] */
  ECX = (r32((uint32_t)(0x10e82b18)));
  /* 10e63f11 mov dword ptr [0x10e82b28], ecx */
  w32((uint32_t)(0x10e82b28), (ECX));
  /* 10e63f17 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63f1a push edx */
  push32((uint32_t)(EDX));
  /* 10e63f1b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63f1e push eax */
  push32((uint32_t)(EAX));
  /* 10e63f1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e63f21 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63f24 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e63f27 push edx */
  push32((uint32_t)(EDX));
  /* 10e63f28 call 0x10e64220 */
  push32(0x10e63f2du); f_10e64220();
  /* 10e63f2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63f30 jmp 0x10e64118 */
  goto L_10e64118;
L_10e63f35:;
  /* 10e63f35 mov eax, dword ptr [0x10e82b18] */
  EAX = (r32((uint32_t)(0x10e82b18)));
  /* 10e63f3a mov dword ptr [0x10e82b28], eax */
  w32((uint32_t)(0x10e82b28), (EAX));
  /* 10e63f3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63f42 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63f46 jne 0x10e63f51 */
  if (!C.zf) goto L_10e63f51;
  /* 10e63f48 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 10e63f4f jmp 0x10e63f5d */
  goto L_10e63f5d;
L_10e63f51:;
  /* 10e63f51 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63f54 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10e63f57 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e63f5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e63f5d:;
  /* 10e63f5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63f60 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10e63f63 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63f66 jge 0x10e63f71 */
  if ((C.sf==C.of)) goto L_10e63f71;
  /* 10e63f68 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e63f6f jmp 0x10e63f9e */
  goto L_10e63f9e;
L_10e63f71:;
  /* 10e63f71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63f74 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10e63f77 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e63f78 mov ecx, 7 */
  ECX = (0x7u);
  /* 10e63f7d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e63f7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e63f82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63f85 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e63f88 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e63f89 mov ecx, 7 */
  ECX = (0x7u);
  /* 10e63f8e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e63f90 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63f93 jl 0x10e63f9e */
  if ((C.sf!=C.of)) goto L_10e63f9e;
  /* 10e63f95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e63f98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63f9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e63f9e:;
  /* 10e63f9e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63fa1 push eax */
  push32((uint32_t)(EAX));
  /* 10e63fa2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63fa6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e63fa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e63fab push edx */
  push32((uint32_t)(EDX));
  /* 10e63fac call 0x10e64220 */
  push32(0x10e63fb1u); f_10e64220();
  /* 10e63fb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63fb4 jmp 0x10e64118 */
  goto L_10e64118;
L_10e63fb9:;
  /* 10e63fb9 cmp dword ptr [0x10e82b18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e63fc0 je 0x10e63ff0 */
  if (C.zf) goto L_10e63ff0;
  /* 10e63fc2 mov dword ptr [0x10e82b18], 0 */
  w32((uint32_t)(0x10e82b18), (0x0u));
  /* 10e63fcc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63fcf push eax */
  push32((uint32_t)(EAX));
  /* 10e63fd0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63fd4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63fd7 push edx */
  push32((uint32_t)(EDX));
  /* 10e63fd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63fdb push eax */
  push32((uint32_t)(EAX));
  /* 10e63fdc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63fdf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10e63fe5 push edx */
  push32((uint32_t)(EDX));
  /* 10e63fe6 call 0x10e64380 */
  push32(0x10e63febu); f_10e64380();
  /* 10e63feb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e63fee jmp 0x10e64012 */
  goto L_10e64012;
L_10e63ff0:;
  /* 10e63ff0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e63ff3 push eax */
  push32((uint32_t)(EAX));
  /* 10e63ff4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e63ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e63ff8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e63ffb push edx */
  push32((uint32_t)(EDX));
  /* 10e63ffc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e63fff push eax */
  push32((uint32_t)(EAX));
  /* 10e64000 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e64003 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10e64009 push edx */
  push32((uint32_t)(EDX));
  /* 10e6400a call 0x10e64380 */
  push32(0x10e6400fu); f_10e64380();
  /* 10e6400f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e64012:;
  /* 10e64012 jmp 0x10e64118 */
  goto L_10e64118;
L_10e64017:;
  /* 10e64017 mov dword ptr [0x10e82b18], 0 */
  w32((uint32_t)(0x10e82b18), (0x0u));
  /* 10e64021 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e64024 push eax */
  push32((uint32_t)(EAX));
  /* 10e64025 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e64028 push ecx */
  push32((uint32_t)(ECX));
  /* 10e64029 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6402c push edx */
  push32((uint32_t)(EDX));
  /* 10e6402d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e64030 push eax */
  push32((uint32_t)(EAX));
  /* 10e64031 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e64034 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10e6403a push edx */
  push32((uint32_t)(EDX));
  /* 10e6403b call 0x10e64380 */
  push32(0x10e64040u); f_10e64380();
  /* 10e64040 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64043 jmp 0x10e64118 */
  goto L_10e64118;
L_10e64048:;
  /* 10e64048 mov eax, dword ptr [0x10e82b18] */
  EAX = (r32((uint32_t)(0x10e82b18)));
  /* 10e6404d mov dword ptr [0x10e82b28], eax */
  w32((uint32_t)(0x10e82b28), (EAX));
  /* 10e64052 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e64055 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e64058 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e64059 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10e6405e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e64060 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e64063 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e64066 push edx */
  push32((uint32_t)(EDX));
  /* 10e64067 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6406a push eax */
  push32((uint32_t)(EAX));
  /* 10e6406b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6406d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e64070 push ecx */
  push32((uint32_t)(ECX));
  /* 10e64071 call 0x10e64220 */
  push32(0x10e64076u); f_10e64220();
  /* 10e64076 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64079 jmp 0x10e64118 */
  goto L_10e64118;
L_10e6407e:;
  /* 10e6407e mov edx, dword ptr [0x10e82b18] */
  EDX = (r32((uint32_t)(0x10e82b18)));
  /* 10e64084 mov dword ptr [0x10e82b28], edx */
  w32((uint32_t)(0x10e82b28), (EDX));
  /* 10e6408a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e6408d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e64090 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e64091 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 10e64096 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e64098 mov ecx, eax */
  ECX = (EAX);
  /* 10e6409a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6409d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e640a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e640a3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e640a6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e640a7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 10e640ac idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e640ae add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e640b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e640b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e640b6 push eax */
  push32((uint32_t)(EAX));
  /* 10e640b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e640ba push ecx */
  push32((uint32_t)(ECX));
  /* 10e640bb push 4 */
  push32((uint32_t)(0x4u));
  /* 10e640bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e640c0 push edx */
  push32((uint32_t)(EDX));
  /* 10e640c1 call 0x10e64220 */
  push32(0x10e640c6u); f_10e64220();
  /* 10e640c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e640c9 jmp 0x10e64118 */
  goto L_10e64118;
L_10e640cb:;
  /* 10e640cb call 0x10e651e0 */
  push32(0x10e640d0u); f_10e651e0();
  /* 10e640d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e640d3 push eax */
  push32((uint32_t)(EAX));
  /* 10e640d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e640d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e640d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e640db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e640dd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e640e1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10e640e4 mov ecx, dword ptr [eax*4 + 0x10e81e2c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e81e2c)));
  /* 10e640eb push ecx */
  push32((uint32_t)(ECX));
  /* 10e640ec call 0x10e641d0 */
  push32(0x10e640f1u); f_10e641d0();
  /* 10e640f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e640f4 jmp 0x10e64118 */
  goto L_10e64118;
L_10e640f6:;
  /* 10e640f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e640f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e640fb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 10e640fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64101 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e64103 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64106 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64109 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e6410b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e6410e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e64110 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e64113 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e64116 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e64118:;
  /* 10e64118 pop esi */
  ESI = (pop32());
  /* 10e64119 mov esp, ebp */
  ESP = (EBP);
  /* 10e6411b pop ebp */
  EBP = (pop32());
  /* 10e6411c ret  */
  ESPCHK(0x10e63bb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10e641d0 (72 bytes, 30 insns) */
void f_10e641d0(void) {
  FTRACE(0x10e641d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e641d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e641d1 mov ebp, esp */
  EBP = (ESP);
L_10e641d3:;
  /* 10e641d3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e641d6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e641d9 je 0x10e64216 */
  if (C.zf) goto L_10e64216;
  /* 10e641db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e641de movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e641e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e641e3 je 0x10e64216 */
  if (C.zf) goto L_10e64216;
  /* 10e641e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e641e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e641ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e641ed mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e641ef mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e641f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e641f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e641f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e641f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e641fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e641fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64201 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64204 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10e64207 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6420a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e6420c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e6420f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64212 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e64214 jmp 0x10e641d3 */
  goto L_10e641d3;
L_10e64216:;
  /* 10e64216 pop ebp */
  EBP = (pop32());
  /* 10e64217 ret  */
  ESPCHK(0x10e641d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014220 @ 0x10e64220 (173 bytes, 64 insns) */
void f_10e64220(void) {
  FTRACE(0x10e64220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e64220 push ebp */
  push32((uint32_t)(EBP));
  /* 10e64221 mov ebp, esp */
  EBP = (ESP);
  /* 10e64223 push ecx */
  push32((uint32_t)(ECX));
  /* 10e64224 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e6422b cmp dword ptr [0x10e82b28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64232 je 0x10e6424a */
  if (C.zf) goto L_10e6424a;
  /* 10e64234 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e64237 push eax */
  push32((uint32_t)(EAX));
  /* 10e64238 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6423b push ecx */
  push32((uint32_t)(ECX));
  /* 10e6423c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6423f push edx */
  push32((uint32_t)(EDX));
  /* 10e64240 call 0x10e642d0 */
  push32(0x10e64245u); f_10e642d0();
  /* 10e64245 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64248 jmp 0x10e642c9 */
  goto L_10e642c9;
L_10e6424a:;
  /* 10e6424a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e6424d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e64250 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64252 jae 0x10e642c0 */
  if (!C.cf) goto L_10e642c0;
  /* 10e64254 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e64257 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e6425a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10e6425d jmp 0x10e64268 */
  goto L_10e64268;
L_10e6425f:;
  /* 10e6425f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e64262 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e64265 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10e64268:;
  /* 10e64268 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e6426b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6426e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e64270 je 0x10e642a4 */
  if (C.zf) goto L_10e642a4;
  /* 10e64272 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64275 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e64276 mov ecx, 0xa */
  ECX = (0xau);
  /* 10e6427b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e6427d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64280 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64283 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e64285 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e64288 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10e6428b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6428e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e6428f mov ecx, 0xa */
  ECX = (0xau);
  /* 10e64294 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e64296 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e64299 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6429c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6429f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e642a2 jmp 0x10e6425f */
  goto L_10e6425f;
L_10e642a4:;
  /* 10e642a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e642a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e642a9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e642ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e642af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e642b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e642b4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e642b6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e642b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e642bc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e642be jmp 0x10e642c9 */
  goto L_10e642c9;
L_10e642c0:;
  /* 10e642c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e642c3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10e642c9:;
  /* 10e642c9 mov esp, ebp */
  ESP = (EBP);
  /* 10e642cb pop ebp */
  EBP = (pop32());
  /* 10e642cc ret  */
  ESPCHK(0x10e64220u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10e642d0 (172 bytes, 65 insns) */
void f_10e642d0(void) {
  FTRACE(0x10e642d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e642d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e642d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e642d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e642d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e642d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e642db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e642de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e642e1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e642e4 jbe 0x10e6432b */
  if ((C.cf||C.zf)) goto L_10e6432b;
L_10e642e6:;
  /* 10e642e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e642e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e642ea mov ecx, 0xa */
  ECX = (0xau);
  /* 10e642ef idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e642f1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e642f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e642f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e642f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e642fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e642ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e64302 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64305 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e64307 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e6430a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6430d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e6430f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64312 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e64313 mov ecx, 0xa */
  ECX = (0xau);
  /* 10e64318 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e6431a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e6431d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64321 jle 0x10e6432b */
  if ((C.zf||C.sf!=C.of)) goto L_10e6432b;
  /* 10e64323 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64326 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64329 ja 0x10e642e6 */
  if ((!C.cf&&!C.zf)) goto L_10e642e6;
L_10e6432b:;
  /* 10e6432b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e6432e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e64330 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e64333 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e64336 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e64339 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e6433b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6433e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e64341 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e64344:;
  /* 10e64344 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e64347 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e64349 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10e6434c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6434f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e64352 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e64354 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e64356 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e64359 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e6435c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e6435f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e64362 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10e64365 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10e64367 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e6436a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6436d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e64370 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e64373 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64376 jb 0x10e64344 */
  if (C.cf) goto L_10e64344;
  /* 10e64378 mov esp, ebp */
  ESP = (EBP);
  /* 10e6437a pop ebp */
  EBP = (pop32());
  /* 10e6437b ret  */
  ESPCHK(0x10e642d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014380 @ 0x10e64380 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10e64380(void) {
  FTRACE(0x10e64380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e64380 push ebp */
  push32((uint32_t)(EBP));
  /* 10e64381 mov ebp, esp */
  EBP = (ESP);
  /* 10e64383 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10e64386:;
  /* 10e64386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64389 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e6438c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e6438e je 0x10e647fc */
  if (C.zf) goto L_10e647fc;
  /* 10e64394 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e64397 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6439a je 0x10e647fc */
  if (C.zf) goto L_10e647fc;
  /* 10e643a0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e643a4 mov dword ptr [0x10e82b28], 0 */
  w32((uint32_t)(0x10e82b28), (0x0u));
  /* 10e643ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e643b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e643b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e643bb jmp 0x10e643c6 */
  goto L_10e643c6;
L_10e643bd:;
  /* 10e643bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e643c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e643c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10e643c6:;
  /* 10e643c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e643c9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e643cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e643cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e643d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e643d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e643d8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e643db cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e643dd jne 0x10e643e1 */
  if (!C.zf) goto L_10e643e1;
  /* 10e643df jmp 0x10e643bd */
  goto L_10e643bd;
L_10e643e1:;
  /* 10e643e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e643e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e643e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e643ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e643ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e643f0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e643f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e643f6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e643f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e643fc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64400 ja 0x10e64750 */
  if ((!C.cf&&!C.zf)) goto L_10e64750;
  /* 10e64406 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e64409 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6440b mov al, byte ptr [ecx + 0x10e6482c] */
  AL = (r8((uint32_t)(ECX + 0x10e6482c)));
  /* 10e64411 jmp dword ptr [eax*4 + 0x10e64800] */
  switch (EAX) {
    case 0: goto L_10e6466f;
    case 1: goto L_10e64553;
    case 2: goto L_10e644de;
    case 3: goto L_10e64418;
    case 4: goto L_10e64456;
    case 5: goto L_10e644b7;
    case 6: goto L_10e64505;
    case 7: goto L_10e6452c;
    case 8: goto L_10e6459a;
    case 9: goto L_10e64494;
    case 10: goto L_10e64750;
    default: x86_unimpl("switch@0x10e64411 out of table"); return;
  }
L_10e64418:;
  /* 10e64418 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6441b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e6441e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e64421 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e64424 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e64427 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6442b ja 0x10e64451 */
  if ((!C.cf&&!C.zf)) goto L_10e64451;
  /* 10e6442d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e64430 jmp dword ptr [ecx*4 + 0x10e6487f] */
  switch (ECX) {
    case 0: goto L_10e64437;
    case 1: goto L_10e64441;
    case 2: goto L_10e64447;
    case 3: goto L_10e6444d;
    case 4: goto L_10e64475;
    case 5: goto L_10e6447f;
    case 6: goto L_10e64485;
    case 7: goto L_10e6448b;
    default: x86_unimpl("switch@0x10e64430 out of table"); return;
  }
L_10e64437:;
  /* 10e64437 mov dword ptr [0x10e82b28], 1 */
  w32((uint32_t)(0x10e82b28), (0x1u));
L_10e64441:;
  /* 10e64441 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10e64445 jmp 0x10e64451 */
  goto L_10e64451;
L_10e64447:;
  /* 10e64447 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10e6444b jmp 0x10e64451 */
  goto L_10e64451;
L_10e6444d:;
  /* 10e6444d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10e64451:;
  /* 10e64451 jmp 0x10e64750 */
  goto L_10e64750;
L_10e64456:;
  /* 10e64456 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e64459 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e6445c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e6445f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e64462 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e64465 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64469 ja 0x10e6448f */
  if ((!C.cf&&!C.zf)) goto L_10e6448f;
  /* 10e6446b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e6446e jmp dword ptr [ecx*4 + 0x10e6488f] */
  switch (ECX) {
    case 0: goto L_10e64475;
    case 1: goto L_10e6447f;
    case 2: goto L_10e64485;
    case 3: goto L_10e6448b;
    default: x86_unimpl("switch@0x10e6446e out of table"); return;
  }
L_10e64475:;
  /* 10e64475 mov dword ptr [0x10e82b28], 1 */
  w32((uint32_t)(0x10e82b28), (0x1u));
L_10e6447f:;
  /* 10e6447f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10e64483 jmp 0x10e6448f */
  goto L_10e6448f;
L_10e64485:;
  /* 10e64485 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10e64489 jmp 0x10e6448f */
  goto L_10e6448f;
L_10e6448b:;
  /* 10e6448b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10e6448f:;
  /* 10e6448f jmp 0x10e64750 */
  goto L_10e64750;
L_10e64494:;
  /* 10e64494 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e64497 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10e6449a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6449e je 0x10e644a8 */
  if (C.zf) goto L_10e644a8;
  /* 10e644a0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e644a4 je 0x10e644ae */
  if (C.zf) goto L_10e644ae;
  /* 10e644a6 jmp 0x10e644b2 */
  goto L_10e644b2;
L_10e644a8:;
  /* 10e644a8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10e644ac jmp 0x10e644b2 */
  goto L_10e644b2;
L_10e644ae:;
  /* 10e644ae mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10e644b2:;
  /* 10e644b2 jmp 0x10e64750 */
  goto L_10e64750;
L_10e644b7:;
  /* 10e644b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e644ba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e644bd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e644c1 je 0x10e644cb */
  if (C.zf) goto L_10e644cb;
  /* 10e644c3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e644c7 je 0x10e644d5 */
  if (C.zf) goto L_10e644d5;
  /* 10e644c9 jmp 0x10e644d9 */
  goto L_10e644d9;
L_10e644cb:;
  /* 10e644cb mov dword ptr [0x10e82b28], 1 */
  w32((uint32_t)(0x10e82b28), (0x1u));
L_10e644d5:;
  /* 10e644d5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10e644d9:;
  /* 10e644d9 jmp 0x10e64750 */
  goto L_10e64750;
L_10e644de:;
  /* 10e644de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e644e1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10e644e4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e644e8 je 0x10e644f2 */
  if (C.zf) goto L_10e644f2;
  /* 10e644ea cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e644ee je 0x10e644fc */
  if (C.zf) goto L_10e644fc;
  /* 10e644f0 jmp 0x10e64500 */
  goto L_10e64500;
L_10e644f2:;
  /* 10e644f2 mov dword ptr [0x10e82b28], 1 */
  w32((uint32_t)(0x10e82b28), (0x1u));
L_10e644fc:;
  /* 10e644fc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10e64500:;
  /* 10e64500 jmp 0x10e64750 */
  goto L_10e64750;
L_10e64505:;
  /* 10e64505 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e64508 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10e6450b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6450f je 0x10e64519 */
  if (C.zf) goto L_10e64519;
  /* 10e64511 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64515 je 0x10e64523 */
  if (C.zf) goto L_10e64523;
  /* 10e64517 jmp 0x10e64527 */
  goto L_10e64527;
L_10e64519:;
  /* 10e64519 mov dword ptr [0x10e82b28], 1 */
  w32((uint32_t)(0x10e82b28), (0x1u));
L_10e64523:;
  /* 10e64523 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10e64527:;
  /* 10e64527 jmp 0x10e64750 */
  goto L_10e64750;
L_10e6452c:;
  /* 10e6452c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6452f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10e64532 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64536 je 0x10e64540 */
  if (C.zf) goto L_10e64540;
  /* 10e64538 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6453c je 0x10e6454a */
  if (C.zf) goto L_10e6454a;
  /* 10e6453e jmp 0x10e6454e */
  goto L_10e6454e;
L_10e64540:;
  /* 10e64540 mov dword ptr [0x10e82b28], 1 */
  w32((uint32_t)(0x10e82b28), (0x1u));
L_10e6454a:;
  /* 10e6454a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10e6454e:;
  /* 10e6454e jmp 0x10e64750 */
  goto L_10e64750;
L_10e64553:;
  /* 10e64553 push 0x10e7eba4 */
  push32((uint32_t)(0x10e7eba4u));
  /* 10e64558 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6455b push ecx */
  push32((uint32_t)(ECX));
  /* 10e6455c call 0x10e64db0 */
  push32(0x10e64561u); f_10e64db0();
  /* 10e64561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e64566 jne 0x10e64573 */
  if (!C.zf) goto L_10e64573;
  /* 10e64568 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6456b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6456e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e64571 jmp 0x10e64591 */
  goto L_10e64591;
L_10e64573:;
  /* 10e64573 push 0x10e7eba0 */
  push32((uint32_t)(0x10e7eba0u));
  /* 10e64578 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6457b push eax */
  push32((uint32_t)(EAX));
  /* 10e6457c call 0x10e64db0 */
  push32(0x10e64581u); f_10e64db0();
  /* 10e64581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e64586 jne 0x10e64591 */
  if (!C.zf) goto L_10e64591;
  /* 10e64588 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6458b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6458e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e64591:;
  /* 10e64591 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10e64595 jmp 0x10e64750 */
  goto L_10e64750;
L_10e6459a:;
  /* 10e6459a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e6459d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e645a1 jg 0x10e645b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e645b1;
  /* 10e645a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e645a6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10e645ac mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e645af jmp 0x10e645bd */
  goto L_10e645bd;
L_10e645b1:;
  /* 10e645b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e645b4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10e645ba mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10e645bd:;
  /* 10e645bd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e645c1 jle 0x10e64664 */
  if ((C.zf||C.sf!=C.of)) goto L_10e64664;
  /* 10e645c7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e645ca cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e645cd jbe 0x10e64664 */
  if ((C.cf||C.zf)) goto L_10e64664;
  /* 10e645d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e645d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e645d8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e645da mov ecx, dword ptr [0x10e80ca8] */
  ECX = (r32((uint32_t)(0x10e80ca8)));
  /* 10e645e0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e645e2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e645e6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10e645ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e645ee je 0x10e64627 */
  if (C.zf) goto L_10e64627;
  /* 10e645f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e645f3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e645f6 jbe 0x10e64627 */
  if ((C.cf||C.zf)) goto L_10e64627;
  /* 10e645f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e645fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e645fd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e64600 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e64602 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10e64604 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64607 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e64609 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6460c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6460f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e64611 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e64614 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64617 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e6461a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e6461d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e6461f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e64622 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e64625 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e64627:;
  /* 10e64627 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6462a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e6462c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e6462f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e64631 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e64633 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64636 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e64638 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6463b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6463e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e64640 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e64643 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64646 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e64649 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e6464c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e6464e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e64651 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e64654 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e64656 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e64659 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e6465c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e6465f jmp 0x10e645bd */
  goto L_10e645bd;
L_10e64664:;
  /* 10e64664 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e64667 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e6466a jmp 0x10e64386 */
  goto L_10e64386;
L_10e6466f:;
  /* 10e6466f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e64672 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e64675 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e64677 je 0x10e64742 */
  if (C.zf) goto L_10e64742;
  /* 10e6467d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64680 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64683 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10e64686:;
  /* 10e64686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64689 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e6468c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e6468e je 0x10e64740 */
  if (C.zf) goto L_10e64740;
  /* 10e64694 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e64697 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6469a je 0x10e64740 */
  if (C.zf) goto L_10e64740;
  /* 10e646a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e646a3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e646a6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e646a9 jne 0x10e646b9 */
  if (!C.zf) goto L_10e646b9;
  /* 10e646ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e646ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e646b1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e646b4 jmp 0x10e64740 */
  goto L_10e64740;
L_10e646b9:;
  /* 10e646b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e646bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e646be mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e646c0 mov edx, dword ptr [0x10e80ca8] */
  EDX = (r32((uint32_t)(0x10e80ca8)));
  /* 10e646c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e646c8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10e646cc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10e646d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e646d3 je 0x10e6470c */
  if (C.zf) goto L_10e6470c;
  /* 10e646d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e646d8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e646db jbe 0x10e6470c */
  if ((C.cf||C.zf)) goto L_10e6470c;
  /* 10e646dd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e646e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e646e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e646e5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e646e7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e646e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e646ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e646ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e646f1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e646f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e646f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e646f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e646fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e646ff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e64702 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e64704 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e64707 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e6470a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e6470c:;
  /* 10e6470c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6470f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e64711 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64714 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e64716 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10e64718 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6471b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e6471d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64720 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64723 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e64725 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64728 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6472b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e6472e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e64731 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e64733 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e64736 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e64739 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e6473b jmp 0x10e64686 */
  goto L_10e64686;
L_10e64740:;
  /* 10e64740 jmp 0x10e6474b */
  goto L_10e6474b;
L_10e64742:;
  /* 10e64742 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64745 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64748 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e6474b:;
  /* 10e6474b jmp 0x10e64386 */
  goto L_10e64386;
L_10e64750:;
  /* 10e64750 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10e64754 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e64756 je 0x10e6477c */
  if (C.zf) goto L_10e6477c;
  /* 10e64758 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e6475b push edx */
  push32((uint32_t)(EDX));
  /* 10e6475c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e6475f push eax */
  push32((uint32_t)(EAX));
  /* 10e64760 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64763 push ecx */
  push32((uint32_t)(ECX));
  /* 10e64764 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e64767 push edx */
  push32((uint32_t)(EDX));
  /* 10e64768 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10e6476b push eax */
  push32((uint32_t)(EAX));
  /* 10e6476c call 0x10e63bb0 */
  push32(0x10e64771u); f_10e63bb0();
  /* 10e64771 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64774 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e64777 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10e6477a jmp 0x10e647f7 */
  goto L_10e647f7;
L_10e6477c:;
  /* 10e6477c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6477f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e64781 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e64783 mov ecx, dword ptr [0x10e80ca8] */
  ECX = (r32((uint32_t)(0x10e80ca8)));
  /* 10e64789 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e6478b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e6478f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10e64795 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e64797 je 0x10e647c8 */
  if (C.zf) goto L_10e647c8;
  /* 10e64799 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6479c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e6479e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e647a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e647a3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e647a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e647a8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e647aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e647ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e647b0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e647b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e647b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e647b8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10e647bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e647be mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e647c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e647c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e647c6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10e647c8:;
  /* 10e647c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e647cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e647cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e647d0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e647d2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e647d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e647d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e647d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e647dc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e647df mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e647e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e647e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e647e7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e647ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e647ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e647ef sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e647f2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e647f5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e647f7:;
  /* 10e647f7 jmp 0x10e64386 */
  goto L_10e64386;
L_10e647fc:;
  /* 10e647fc mov esp, ebp */
  ESP = (EBP);
  /* 10e647fe pop ebp */
  EBP = (pop32());
  /* 10e647ff ret  */
  ESPCHK(0x10e64380u, _esp0);
  ESP += 4; return;
}

/* FUN_100148a0 @ 0x10e648a0 (650 bytes, 178 insns) */
void f_10e648a0(void) {
  FTRACE(0x10e648a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e648a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e648a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e648a3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e648a9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e648ad jne 0x10e64a09 */
  if (!C.zf) goto L_10e64a09;
  /* 10e648b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e648b6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 10e648bc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 10e648c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e648c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e648cc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10e648d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e648d8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10e648de push edx */
  push32((uint32_t)(EDX));
  /* 10e648df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e648e2 push eax */
  push32((uint32_t)(EAX));
  /* 10e648e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e648e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e648e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e648ea push edx */
  push32((uint32_t)(EDX));
  /* 10e648eb call 0x10e65cc0 */
  push32(0x10e648f0u); f_10e65cc0();
  /* 10e648f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e648f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e648f6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e648fa jne 0x10e6498f */
  if (!C.zf) goto L_10e6498f;
  /* 10e64900 call dword ptr [0x10e853c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853c0))), 0x10e64906u);
  /* 10e64906 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64909 je 0x10e64910 */
  if (C.zf) goto L_10e64910;
  /* 10e6490b jmp 0x10e649ed */
  goto L_10e649ed;
L_10e64910:;
  /* 10e64910 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e64912 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e64914 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e64916 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64919 push eax */
  push32((uint32_t)(EAX));
  /* 10e6491a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e6491d push ecx */
  push32((uint32_t)(ECX));
  /* 10e6491e call 0x10e65cc0 */
  push32(0x10e64923u); f_10e65cc0();
  /* 10e64923 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64926 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 10e6492c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64933 jne 0x10e6493a */
  if (!C.zf) goto L_10e6493a;
  /* 10e64935 jmp 0x10e649ed */
  goto L_10e649ed;
L_10e6493a:;
  /* 10e6493a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10e6493c push 0x10e7ebac */
  push32((uint32_t)(0x10e7ebacu));
  /* 10e64941 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e64943 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10e64949 push edx */
  push32((uint32_t)(EDX));
  /* 10e6494a call 0x10e566e0 */
  push32(0x10e6494fu); f_10e566e0();
  /* 10e6494f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64952 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e64955 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64959 jne 0x10e64960 */
  if (!C.zf) goto L_10e64960;
  /* 10e6495b jmp 0x10e649ed */
  goto L_10e649ed;
L_10e64960:;
  /* 10e64960 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e64967 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e64969 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 10e6496f push eax */
  push32((uint32_t)(EAX));
  /* 10e64970 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e64973 push ecx */
  push32((uint32_t)(ECX));
  /* 10e64974 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64977 push edx */
  push32((uint32_t)(EDX));
  /* 10e64978 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e6497b push eax */
  push32((uint32_t)(EAX));
  /* 10e6497c call 0x10e65cc0 */
  push32(0x10e64981u); f_10e65cc0();
  /* 10e64981 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64984 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e64987 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6498b jne 0x10e6498f */
  if (!C.zf) goto L_10e6498f;
  /* 10e6498d jmp 0x10e649ed */
  goto L_10e649ed;
L_10e6498f:;
  /* 10e6498f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10e64991 push 0x10e7ebac */
  push32((uint32_t)(0x10e7ebacu));
  /* 10e64996 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e64998 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e6499b push ecx */
  push32((uint32_t)(ECX));
  /* 10e6499c call 0x10e566e0 */
  push32(0x10e649a1u); f_10e566e0();
  /* 10e649a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e649a4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 10e649aa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e649ac mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10e649b2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e649b5 jne 0x10e649b9 */
  if (!C.zf) goto L_10e649b9;
  /* 10e649b7 jmp 0x10e649ed */
  goto L_10e649ed;
L_10e649b9:;
  /* 10e649b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e649bc push ecx */
  push32((uint32_t)(ECX));
  /* 10e649bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e649c0 push edx */
  push32((uint32_t)(EDX));
  /* 10e649c1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 10e649c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e649c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e649ca call 0x10e59f00 */
  push32(0x10e649cfu); f_10e59f00();
  /* 10e649cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e649d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e649d6 je 0x10e649e6 */
  if (C.zf) goto L_10e649e6;
  /* 10e649d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e649da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e649dd push edx */
  push32((uint32_t)(EDX));
  /* 10e649de call 0x10e57170 */
  push32(0x10e649e3u); f_10e57170();
  /* 10e649e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e649e6:;
  /* 10e649e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e649e8 jmp 0x10e64b26 */
  goto L_10e64b26;
L_10e649ed:;
  /* 10e649ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e649f1 je 0x10e64a01 */
  if (C.zf) goto L_10e64a01;
  /* 10e649f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e649f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e649f8 push eax */
  push32((uint32_t)(EAX));
  /* 10e649f9 call 0x10e57170 */
  push32(0x10e649feu); f_10e57170();
  /* 10e649fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e64a01:;
  /* 10e64a01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e64a04 jmp 0x10e64b26 */
  goto L_10e64b26;
L_10e64a09:;
  /* 10e64a09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64a0d jne 0x10e64b23 */
  if (!C.zf) goto L_10e64b23;
  /* 10e64a13 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 10e64a1d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e64a20 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10e64a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e64a28 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10e64a2e push edx */
  push32((uint32_t)(EDX));
  /* 10e64a2f push 0x10e82a40 */
  push32((uint32_t)(0x10e82a40u));
  /* 10e64a34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64a37 push eax */
  push32((uint32_t)(EAX));
  /* 10e64a38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e64a3b push ecx */
  push32((uint32_t)(ECX));
  /* 10e64a3c call 0x10e65b20 */
  push32(0x10e64a41u); f_10e65b20();
  /* 10e64a41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e64a46 jne 0x10e64a50 */
  if (!C.zf) goto L_10e64a50;
  /* 10e64a48 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e64a4b jmp 0x10e64b26 */
  goto L_10e64b26;
L_10e64a50:;
  /* 10e64a50 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e64a56 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e64a59 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10e64a63 jmp 0x10e64a74 */
  goto L_10e64a74;
L_10e64a65:;
  /* 10e64a65 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e64a6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64a6e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_10e64a74:;
  /* 10e64a74 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64a7b jge 0x10e64b1f */
  if ((C.sf==C.of)) goto L_10e64b1f;
  /* 10e64a81 cmp dword ptr [0x10e80eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e80eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64a88 jle 0x10e64abb */
  if ((C.zf||C.sf!=C.of)) goto L_10e64abb;
  /* 10e64a8a push 4 */
  push32((uint32_t)(0x4u));
  /* 10e64a8c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e64a92 mov dl, byte ptr [ecx*2 + 0x10e82a40] */
  DL = (r8((uint32_t)(ECX*2 + 0x10e82a40)));
  /* 10e64a99 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10e64a9f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10e64aa5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e64aaa push eax */
  push32((uint32_t)(EAX));
  /* 10e64aab call 0x10e5c6f0 */
  push32(0x10e64ab0u); f_10e5c6f0();
  /* 10e64ab0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64ab3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10e64ab9 jmp 0x10e64aee */
  goto L_10e64aee;
L_10e64abb:;
  /* 10e64abb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10e64ac1 mov dl, byte ptr [ecx*2 + 0x10e82a40] */
  DL = (r8((uint32_t)(ECX*2 + 0x10e82a40)));
  /* 10e64ac8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 10e64ace mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10e64ad4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e64ad9 mov ecx, dword ptr [0x10e80ca8] */
  ECX = (r32((uint32_t)(0x10e80ca8)));
  /* 10e64adf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e64ae1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e64ae5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e64ae8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_10e64aee:;
  /* 10e64aee cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64af5 je 0x10e64b18 */
  if (C.zf) goto L_10e64b18;
  /* 10e64af7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e64afd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e64b00 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e64b03 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 10e64b0a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10e64b0e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10e64b14 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e64b16 jmp 0x10e64b1a */
  goto L_10e64b1a;
L_10e64b18:;
  /* 10e64b18 jmp 0x10e64b1f */
  goto L_10e64b1f;
L_10e64b1a:;
  /* 10e64b1a jmp 0x10e64a65 */
  goto L_10e64a65;
L_10e64b1f:;
  /* 10e64b1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e64b21 jmp 0x10e64b26 */
  goto L_10e64b26;
L_10e64b23:;
  /* 10e64b23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e64b26:;
  /* 10e64b26 mov esp, ebp */
  ESP = (EBP);
  /* 10e64b28 pop ebp */
  EBP = (pop32());
  /* 10e64b29 ret  */
  ESPCHK(0x10e648a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b30 @ 0x10e64b30 (10 bytes, 5 insns) */
void f_10e64b30(void) {
  FTRACE(0x10e64b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e64b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10e64b31 mov ebp, esp */
  EBP = (ESP);
  /* 10e64b33 mov eax, dword ptr [0x10e81d98] */
  EAX = (r32((uint32_t)(0x10e81d98)));
  /* 10e64b38 pop ebp */
  EBP = (pop32());
  /* 10e64b39 ret  */
  ESPCHK(0x10e64b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b40 @ 0x10e64b40 (575 bytes, 196 insns) */
void f_10e64b40(void) {
  FTRACE(0x10e64b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e64b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e64b41 mov ebp, esp */
  EBP = (ESP);
  /* 10e64b43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e64b45 push 0x10e7ebb8 */
  push32((uint32_t)(0x10e7ebb8u));
  /* 10e64b4a push 0x10e5f7e8 */
  push32((uint32_t)(0x10e5f7e8u));
  /* 10e64b4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10e64b55 push eax */
  push32((uint32_t)(EAX));
  /* 10e64b56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10e64b5d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64b60 push ebx */
  push32((uint32_t)(EBX));
  /* 10e64b61 push esi */
  push32((uint32_t)(ESI));
  /* 10e64b62 push edi */
  push32((uint32_t)(EDI));
  /* 10e64b63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e64b66 cmp dword ptr [0x10e82a4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64b6d jne 0x10e64bbe */
  if (!C.zf) goto L_10e64bbe;
  /* 10e64b6f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10e64b72 push eax */
  push32((uint32_t)(EAX));
  /* 10e64b73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e64b75 push 0x10e7e2ec */
  push32((uint32_t)(0x10e7e2ecu));
  /* 10e64b7a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e64b7c call dword ptr [0x10e85340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85340))), 0x10e64b82u);
  /* 10e64b82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e64b84 je 0x10e64b92 */
  if (C.zf) goto L_10e64b92;
  /* 10e64b86 mov dword ptr [0x10e82a4c], 1 */
  w32((uint32_t)(0x10e82a4c), (0x1u));
  /* 10e64b90 jmp 0x10e64bbe */
  goto L_10e64bbe;
L_10e64b92:;
  /* 10e64b92 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10e64b95 push ecx */
  push32((uint32_t)(ECX));
  /* 10e64b96 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e64b98 push 0x10e7e2e8 */
  push32((uint32_t)(0x10e7e2e8u));
  /* 10e64b9d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e64b9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e64ba1 call dword ptr [0x10e85344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85344))), 0x10e64ba7u);
  /* 10e64ba7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e64ba9 je 0x10e64bb7 */
  if (C.zf) goto L_10e64bb7;
  /* 10e64bab mov dword ptr [0x10e82a4c], 2 */
  w32((uint32_t)(0x10e82a4c), (0x2u));
  /* 10e64bb5 jmp 0x10e64bbe */
  goto L_10e64bbe;
L_10e64bb7:;
  /* 10e64bb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e64bb9 jmp 0x10e64d99 */
  goto L_10e64d99;
L_10e64bbe:;
  /* 10e64bbe cmp dword ptr [0x10e82a4c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a4c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64bc5 jne 0x10e64be2 */
  if (!C.zf) goto L_10e64be2;
  /* 10e64bc7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e64bca push edx */
  push32((uint32_t)(EDX));
  /* 10e64bcb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64bce push eax */
  push32((uint32_t)(EAX));
  /* 10e64bcf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e64bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e64bd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64bd6 push edx */
  push32((uint32_t)(EDX));
  /* 10e64bd7 call dword ptr [0x10e85340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85340))), 0x10e64bddu);
  /* 10e64bdd jmp 0x10e64d99 */
  goto L_10e64d99;
L_10e64be2:;
  /* 10e64be2 cmp dword ptr [0x10e82a4c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a4c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64be9 jne 0x10e64d97 */
  if (!C.zf) goto L_10e64d97;
  /* 10e64bef cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64bf3 jne 0x10e64bfd */
  if (!C.zf) goto L_10e64bfd;
  /* 10e64bf5 mov eax, dword ptr [0x10e829c0] */
  EAX = (r32((uint32_t)(0x10e829c0)));
  /* 10e64bfa mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10e64bfd:;
  /* 10e64bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e64bff push 0 */
  push32((uint32_t)(0x0u));
  /* 10e64c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e64c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e64c05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64c08 push ecx */
  push32((uint32_t)(ECX));
  /* 10e64c09 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e64c0c push edx */
  push32((uint32_t)(EDX));
  /* 10e64c0d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e64c12 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e64c15 push eax */
  push32((uint32_t)(EAX));
  /* 10e64c16 call dword ptr [0x10e85394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85394))), 0x10e64c1cu);
  /* 10e64c1c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e64c1f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64c23 jne 0x10e64c2c */
  if (!C.zf) goto L_10e64c2c;
  /* 10e64c25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e64c27 jmp 0x10e64d99 */
  goto L_10e64d99;
L_10e64c2c:;
  /* 10e64c2c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e64c33 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e64c36 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64c39 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e64c3b call 0x10e59880 */
  push32(0x10e64c40u); f_10e59880();
  /* 10e64c40 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10e64c43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e64c46 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10e64c49 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e64c4c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e64c4f push edx */
  push32((uint32_t)(EDX));
  /* 10e64c50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e64c52 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e64c55 push eax */
  push32((uint32_t)(EAX));
  /* 10e64c56 call 0x10e5a450 */
  push32(0x10e64c5bu); f_10e5a450();
  /* 10e64c5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64c5e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e64c65 jmp 0x10e64c7e */
  goto L_10e64c7e;
  /* 10e64c67 mov eax, 1 */
  EAX = (0x1u);
  /* 10e64c6c ret  */
  ESPCHK(0x10e64b40u, _esp0);
  ESP += 4; return;
  /* 10e64c6d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e64c70 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10e64c77 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e64c7e:;
  /* 10e64c7e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64c82 jne 0x10e64c8b */
  if (!C.zf) goto L_10e64c8b;
  /* 10e64c84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e64c86 jmp 0x10e64d99 */
  goto L_10e64d99;
L_10e64c8b:;
  /* 10e64c8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e64c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e64c8f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e64c92 push ecx */
  push32((uint32_t)(ECX));
  /* 10e64c93 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e64c96 push edx */
  push32((uint32_t)(EDX));
  /* 10e64c97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64c9a push eax */
  push32((uint32_t)(EAX));
  /* 10e64c9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e64c9e push ecx */
  push32((uint32_t)(ECX));
  /* 10e64c9f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e64ca4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e64ca7 push edx */
  push32((uint32_t)(EDX));
  /* 10e64ca8 call dword ptr [0x10e85394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85394))), 0x10e64caeu);
  /* 10e64cae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e64cb0 jne 0x10e64cb9 */
  if (!C.zf) goto L_10e64cb9;
  /* 10e64cb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e64cb4 jmp 0x10e64d99 */
  goto L_10e64d99;
L_10e64cb9:;
  /* 10e64cb9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e64cc0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e64cc3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 10e64cc7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64cca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e64ccc call 0x10e59880 */
  push32(0x10e64cd1u); f_10e59880();
  /* 10e64cd1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10e64cd4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e64cd7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10e64cda mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e64cdd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e64ce4 jmp 0x10e64cfd */
  goto L_10e64cfd;
  /* 10e64ce6 mov eax, 1 */
  EAX = (0x1u);
  /* 10e64ceb ret  */
  ESPCHK(0x10e64b40u, _esp0);
  ESP += 4; return;
  /* 10e64cec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e64cef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e64cf6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e64cfd:;
  /* 10e64cfd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64d01 jne 0x10e64d0a */
  if (!C.zf) goto L_10e64d0a;
  /* 10e64d03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e64d05 jmp 0x10e64d99 */
  goto L_10e64d99;
L_10e64d0a:;
  /* 10e64d0a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64d0e jne 0x10e64d19 */
  if (!C.zf) goto L_10e64d19;
  /* 10e64d10 mov edx, dword ptr [0x10e829b0] */
  EDX = (r32((uint32_t)(0x10e829b0)));
  /* 10e64d16 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10e64d19:;
  /* 10e64d19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64d1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e64d1f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10e64d25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64d28 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e64d2b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10e64d32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e64d35 push ecx */
  push32((uint32_t)(ECX));
  /* 10e64d36 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e64d39 push edx */
  push32((uint32_t)(EDX));
  /* 10e64d3a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e64d3d push eax */
  push32((uint32_t)(EAX));
  /* 10e64d3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64d41 push ecx */
  push32((uint32_t)(ECX));
  /* 10e64d42 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e64d45 push edx */
  push32((uint32_t)(EDX));
  /* 10e64d46 call dword ptr [0x10e85344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85344))), 0x10e64d4cu);
  /* 10e64d4c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e64d4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64d52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e64d55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e64d57 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 10e64d5c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64d62 je 0x10e64d78 */
  if (C.zf) goto L_10e64d78;
  /* 10e64d64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64d67 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e64d6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e64d6c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e64d70 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64d76 je 0x10e64d7c */
  if (C.zf) goto L_10e64d7c;
L_10e64d78:;
  /* 10e64d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e64d7a jmp 0x10e64d99 */
  goto L_10e64d99;
L_10e64d7c:;
  /* 10e64d7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64d7f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e64d81 push eax */
  push32((uint32_t)(EAX));
  /* 10e64d82 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e64d85 push ecx */
  push32((uint32_t)(ECX));
  /* 10e64d86 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e64d89 push edx */
  push32((uint32_t)(EDX));
  /* 10e64d8a call 0x10e5e5d0 */
  push32(0x10e64d8fu); f_10e5e5d0();
  /* 10e64d8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64d92 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e64d95 jmp 0x10e64d99 */
  goto L_10e64d99;
L_10e64d97:;
  /* 10e64d97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e64d99:;
  /* 10e64d99 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10e64d9c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e64d9f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10e64da6 pop edi */
  EDI = (pop32());
  /* 10e64da7 pop esi */
  ESI = (pop32());
  /* 10e64da8 pop ebx */
  EBX = (pop32());
  /* 10e64da9 mov esp, ebp */
  ESP = (EBP);
  /* 10e64dab pop ebp */
  EBP = (pop32());
  /* 10e64dac ret  */
  ESPCHK(0x10e64b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014db0 @ 0x10e64db0 (208 bytes, 85 insns) */
void f_10e64db0(void) {
  FTRACE(0x10e64db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e64db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e64db1 mov ebp, esp */
  EBP = (ESP);
  /* 10e64db3 push edi */
  push32((uint32_t)(EDI));
  /* 10e64db4 push esi */
  push32((uint32_t)(ESI));
  /* 10e64db5 push ebx */
  push32((uint32_t)(EBX));
  /* 10e64db6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e64db9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64dbc lea eax, [0x10e829a8] */
  EAX = ((uint32_t)(0x10e829a8));
  /* 10e64dc2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64dc6 jne 0x10e64e03 */
  if (!C.zf) goto L_10e64e03;
  /* 10e64dc8 mov al, 0xff */
  AL = (0xffu);
  /* 10e64dca mov edi, edi */
  EDI = (EDI);
L_10e64dcc:;
  /* 10e64dcc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e64dce je 0x10e64dfe */
  if (C.zf) goto L_10e64dfe;
  /* 10e64dd0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e64dd2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e64dd3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10e64dd5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e64dd6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e64dd8 je 0x10e64dcc */
  if (C.zf) goto L_10e64dcc;
  /* 10e64dda sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e64ddc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e64dde sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e64de0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10e64de3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e64de5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e64de7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10e64de9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e64deb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e64ded sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e64def and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10e64df2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e64df4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10e64df6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e64df8 je 0x10e64dcc */
  if (C.zf) goto L_10e64dcc;
  /* 10e64dfa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10e64dfc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10e64dfe:;
  /* 10e64dfe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10e64e01 jmp 0x10e64e7b */
  goto L_10e64e7b;
L_10e64e03:;
  /* 10e64e03 lock inc dword ptr [0x10e82b3c] */
  x86_unimpl("lock inc @ 0x10e64e03");
  /* 10e64e0a cmp dword ptr [0x10e82b2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64e11 jg 0x10e64e17 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e64e17;
  /* 10e64e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e64e15 jmp 0x10e64e2c */
  goto L_10e64e2c;
L_10e64e17:;
  /* 10e64e17 lock dec dword ptr [0x10e82b3c] */
  x86_unimpl("lock dec @ 0x10e64e17");
  /* 10e64e1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e64e20 call 0x10e5a0e0 */
  push32(0x10e64e25u); f_10e5a0e0();
  /* 10e64e25 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10e64e2c:;
  /* 10e64e2c mov eax, 0xff */
  EAX = (0xffu);
  /* 10e64e31 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10e64e33 nop  */
  /* nop */
L_10e64e34:;
  /* 10e64e34 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e64e36 je 0x10e64e5f */
  if (C.zf) goto L_10e64e5f;
  /* 10e64e38 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e64e3a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e64e3b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10e64e3d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e64e3e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e64e40 je 0x10e64e34 */
  if (C.zf) goto L_10e64e34;
  /* 10e64e42 push eax */
  push32((uint32_t)(EAX));
  /* 10e64e43 push ebx */
  push32((uint32_t)(EBX));
  /* 10e64e44 call 0x10e65f20 */
  push32(0x10e64e49u); f_10e65f20();
  /* 10e64e49 mov ebx, eax */
  EBX = (EAX);
  /* 10e64e4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64e4e call 0x10e65f20 */
  push32(0x10e64e53u); f_10e65f20();
  /* 10e64e53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64e56 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e64e58 je 0x10e64e34 */
  if (C.zf) goto L_10e64e34;
  /* 10e64e5a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e64e5c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10e64e5f:;
  /* 10e64e5f mov ebx, eax */
  EBX = (EAX);
  /* 10e64e61 pop eax */
  EAX = (pop32());
  /* 10e64e62 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e64e64 jne 0x10e64e6f */
  if (!C.zf) goto L_10e64e6f;
  /* 10e64e66 lock dec dword ptr [0x10e82b3c] */
  x86_unimpl("lock dec @ 0x10e64e66");
  /* 10e64e6d jmp 0x10e64e79 */
  goto L_10e64e79;
L_10e64e6f:;
  /* 10e64e6f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e64e71 call 0x10e5a180 */
  push32(0x10e64e76u); f_10e5a180();
  /* 10e64e76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e64e79:;
  /* 10e64e79 mov eax, ebx */
  EAX = (EBX);
L_10e64e7b:;
  /* 10e64e7b pop ebx */
  EBX = (pop32());
  /* 10e64e7c pop esi */
  ESI = (pop32());
  /* 10e64e7d pop edi */
  EDI = (pop32());
  /* 10e64e7e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e64e7f ret  */
  ESPCHK(0x10e64db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e80 @ 0x10e64e80 (257 bytes, 103 insns) */
void f_10e64e80(void) {
  FTRACE(0x10e64e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e64e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e64e81 mov ebp, esp */
  EBP = (ESP);
  /* 10e64e83 push edi */
  push32((uint32_t)(EDI));
  /* 10e64e84 push esi */
  push32((uint32_t)(ESI));
  /* 10e64e85 push ebx */
  push32((uint32_t)(EBX));
  /* 10e64e86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e64e89 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e64e8b je 0x10e64f7a */
  if (C.zf) goto L_10e64f7a;
  /* 10e64e91 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64e94 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e64e97 lea eax, [0x10e829a8] */
  EAX = ((uint32_t)(0x10e829a8));
  /* 10e64e9d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64ea1 jne 0x10e64ef1 */
  if (!C.zf) goto L_10e64ef1;
  /* 10e64ea3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10e64ea5 mov bl, 0x5a */
  BL = (0x5au);
  /* 10e64ea7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10e64ea9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10e64eac:;
  /* 10e64eac mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10e64eae or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10e64eb0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10e64eb2 je 0x10e64ed5 */
  if (C.zf) goto L_10e64ed5;
  /* 10e64eb4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10e64eb6 je 0x10e64ed5 */
  if (C.zf) goto L_10e64ed5;
  /* 10e64eb8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e64eb9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e64eba cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e64ebc jb 0x10e64ec4 */
  if (C.cf) goto L_10e64ec4;
  /* 10e64ebe cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e64ec0 ja 0x10e64ec4 */
  if ((!C.cf&&!C.zf)) goto L_10e64ec4;
  /* 10e64ec2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10e64ec4:;
  /* 10e64ec4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e64ec6 jb 0x10e64ece */
  if (C.cf) goto L_10e64ece;
  /* 10e64ec8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e64eca ja 0x10e64ece */
  if ((!C.cf&&!C.zf)) goto L_10e64ece;
  /* 10e64ecc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10e64ece:;
  /* 10e64ece cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e64ed0 jne 0x10e64edf */
  if (!C.zf) goto L_10e64edf;
  /* 10e64ed2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e64ed3 jne 0x10e64eac */
  if (!C.zf) goto L_10e64eac;
L_10e64ed5:;
  /* 10e64ed5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e64ed7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e64ed9 je 0x10e64f7a */
  if (C.zf) goto L_10e64f7a;
L_10e64edf:;
  /* 10e64edf mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10e64ee4 jb 0x10e64f7a */
  if (C.cf) goto L_10e64f7a;
  /* 10e64eea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e64eec jmp 0x10e64f7a */
  goto L_10e64f7a;
L_10e64ef1:;
  /* 10e64ef1 lock inc dword ptr [0x10e82b3c] */
  x86_unimpl("lock inc @ 0x10e64ef1");
  /* 10e64ef8 cmp dword ptr [0x10e82b2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64eff jg 0x10e64f05 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e64f05;
  /* 10e64f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e64f03 jmp 0x10e64f1e */
  goto L_10e64f1e;
L_10e64f05:;
  /* 10e64f05 lock dec dword ptr [0x10e82b3c] */
  x86_unimpl("lock dec @ 0x10e64f05");
  /* 10e64f0c mov ebx, ecx */
  EBX = (ECX);
  /* 10e64f0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e64f10 call 0x10e5a0e0 */
  push32(0x10e64f15u); f_10e5a0e0();
  /* 10e64f15 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10e64f1c mov ecx, ebx */
  ECX = (EBX);
L_10e64f1e:;
  /* 10e64f1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e64f20 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10e64f22 mov edi, edi */
  EDI = (EDI);
L_10e64f24:;
  /* 10e64f24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e64f26 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e64f28 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10e64f2a je 0x10e64f4f */
  if (C.zf) goto L_10e64f4f;
  /* 10e64f2c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10e64f2e je 0x10e64f4f */
  if (C.zf) goto L_10e64f4f;
  /* 10e64f30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e64f31 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e64f32 push ecx */
  push32((uint32_t)(ECX));
  /* 10e64f33 push eax */
  push32((uint32_t)(EAX));
  /* 10e64f34 push ebx */
  push32((uint32_t)(EBX));
  /* 10e64f35 call 0x10e65f20 */
  push32(0x10e64f3au); f_10e65f20();
  /* 10e64f3a mov ebx, eax */
  EBX = (EAX);
  /* 10e64f3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64f3f call 0x10e65f20 */
  push32(0x10e64f44u); f_10e65f20();
  /* 10e64f44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64f47 pop ecx */
  ECX = (pop32());
  /* 10e64f48 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64f4a jne 0x10e64f55 */
  if (!C.zf) goto L_10e64f55;
  /* 10e64f4c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e64f4d jne 0x10e64f24 */
  if (!C.zf) goto L_10e64f24;
L_10e64f4f:;
  /* 10e64f4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e64f51 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64f53 je 0x10e64f5e */
  if (C.zf) goto L_10e64f5e;
L_10e64f55:;
  /* 10e64f55 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10e64f5a jb 0x10e64f5e */
  if (C.cf) goto L_10e64f5e;
  /* 10e64f5c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10e64f5e:;
  /* 10e64f5e pop eax */
  EAX = (pop32());
  /* 10e64f5f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e64f61 jne 0x10e64f6c */
  if (!C.zf) goto L_10e64f6c;
  /* 10e64f63 lock dec dword ptr [0x10e82b3c] */
  x86_unimpl("lock dec @ 0x10e64f63");
  /* 10e64f6a jmp 0x10e64f7a */
  goto L_10e64f7a;
L_10e64f6c:;
  /* 10e64f6c mov ebx, ecx */
  EBX = (ECX);
  /* 10e64f6e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e64f70 call 0x10e5a180 */
  push32(0x10e64f75u); f_10e5a180();
  /* 10e64f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64f78 mov ecx, ebx */
  ECX = (EBX);
L_10e64f7a:;
  /* 10e64f7a mov eax, ecx */
  EAX = (ECX);
  /* 10e64f7c pop ebx */
  EBX = (pop32());
  /* 10e64f7d pop esi */
  ESI = (pop32());
  /* 10e64f7e pop edi */
  EDI = (pop32());
  /* 10e64f7f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10e64f80 ret  */
  ESPCHK(0x10e64e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f90 @ 0x10e64f90 (255 bytes, 88 insns) */
void f_10e64f90(void) {
  FTRACE(0x10e64f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e64f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10e64f91 mov ebp, esp */
  EBP = (ESP);
  /* 10e64f93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10e64f96:;
  /* 10e64f96 cmp dword ptr [0x10e80eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e80eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64f9d jle 0x10e64fb6 */
  if ((C.zf||C.sf!=C.of)) goto L_10e64fb6;
  /* 10e64f9f push 8 */
  push32((uint32_t)(0x8u));
  /* 10e64fa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64fa4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e64fa6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e64fa8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e64fa9 call 0x10e5c6f0 */
  push32(0x10e64faeu); f_10e5c6f0();
  /* 10e64fae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64fb1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e64fb4 jmp 0x10e64fcf */
  goto L_10e64fcf;
L_10e64fb6:;
  /* 10e64fb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64fb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e64fbb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e64fbd mov ecx, dword ptr [0x10e80ca8] */
  ECX = (r32((uint32_t)(0x10e80ca8)));
  /* 10e64fc3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e64fc5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e64fc9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10e64fcc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e64fcf:;
  /* 10e64fcf cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64fd3 je 0x10e64fe0 */
  if (C.zf) goto L_10e64fe0;
  /* 10e64fd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64fd8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64fdb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e64fde jmp 0x10e64f96 */
  goto L_10e64f96;
L_10e64fe0:;
  /* 10e64fe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64fe3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e64fe5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e64fe7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e64fea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e64fed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e64ff0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e64ff3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e64ff6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e64ff9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e64ffd je 0x10e65005 */
  if (C.zf) goto L_10e65005;
  /* 10e64fff cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65003 jne 0x10e65018 */
  if (!C.zf) goto L_10e65018;
L_10e65005:;
  /* 10e65005 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65008 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6500a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e6500c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e6500f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65012 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65015 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10e65018:;
  /* 10e65018 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e6501f:;
  /* 10e6501f cmp dword ptr [0x10e80eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e80eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65026 jle 0x10e6503b */
  if ((C.zf||C.sf!=C.of)) goto L_10e6503b;
  /* 10e65028 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e6502a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6502d push edx */
  push32((uint32_t)(EDX));
  /* 10e6502e call 0x10e5c6f0 */
  push32(0x10e65033u); f_10e5c6f0();
  /* 10e65033 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65036 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e65039 jmp 0x10e65050 */
  goto L_10e65050;
L_10e6503b:;
  /* 10e6503b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6503e mov ecx, dword ptr [0x10e80ca8] */
  ECX = (r32((uint32_t)(0x10e80ca8)));
  /* 10e65044 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e65046 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e6504a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e6504d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10e65050:;
  /* 10e65050 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65054 je 0x10e6507b */
  if (C.zf) goto L_10e6507b;
  /* 10e65056 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e65059 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e6505c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6505f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10e65063 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e65066 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65069 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6506b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e6506d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e65070 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65073 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65076 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e65079 jmp 0x10e6501f */
  goto L_10e6501f;
L_10e6507b:;
  /* 10e6507b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6507f jne 0x10e65088 */
  if (!C.zf) goto L_10e65088;
  /* 10e65081 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e65084 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e65086 jmp 0x10e6508b */
  goto L_10e6508b;
L_10e65088:;
  /* 10e65088 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e6508b:;
  /* 10e6508b mov esp, ebp */
  ESP = (EBP);
  /* 10e6508d pop ebp */
  EBP = (pop32());
  /* 10e6508e ret  */
  ESPCHK(0x10e64f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10015090 @ 0x10e65090 (17 bytes, 8 insns) */
void f_10e65090(void) {
  FTRACE(0x10e65090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e65090 push ebp */
  push32((uint32_t)(EBP));
  /* 10e65091 mov ebp, esp */
  EBP = (ESP);
  /* 10e65093 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65096 push eax */
  push32((uint32_t)(EAX));
  /* 10e65097 call 0x10e64f90 */
  push32(0x10e6509cu); f_10e64f90();
  /* 10e6509c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6509f pop ebp */
  EBP = (pop32());
  /* 10e650a0 ret  */
  ESPCHK(0x10e65090u, _esp0);
  ESP += 4; return;
}

/* FUN_100150b0 @ 0x10e650b0 (297 bytes, 106 insns) */
void f_10e650b0(void) {
  FTRACE(0x10e650b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e650b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e650b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e650b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e650b6 push esi */
  push32((uint32_t)(ESI));
L_10e650b7:;
  /* 10e650b7 cmp dword ptr [0x10e80eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e80eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e650be jle 0x10e650d7 */
  if ((C.zf||C.sf!=C.of)) goto L_10e650d7;
  /* 10e650c0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e650c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e650c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e650c7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e650c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e650ca call 0x10e5c6f0 */
  push32(0x10e650cfu); f_10e5c6f0();
  /* 10e650cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e650d2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e650d5 jmp 0x10e650f0 */
  goto L_10e650f0;
L_10e650d7:;
  /* 10e650d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e650da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e650dc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e650de mov ecx, dword ptr [0x10e80ca8] */
  ECX = (r32((uint32_t)(0x10e80ca8)));
  /* 10e650e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e650e6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e650ea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10e650ed mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10e650f0:;
  /* 10e650f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e650f4 je 0x10e65101 */
  if (C.zf) goto L_10e65101;
  /* 10e650f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e650f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e650fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e650ff jmp 0x10e650b7 */
  goto L_10e650b7;
L_10e65101:;
  /* 10e65101 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65104 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e65106 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e65108 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e6510b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6510e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65111 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e65114 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e65117 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e6511a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6511e je 0x10e65126 */
  if (C.zf) goto L_10e65126;
  /* 10e65120 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65124 jne 0x10e65139 */
  if (!C.zf) goto L_10e65139;
L_10e65126:;
  /* 10e65126 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65129 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6512b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e6512d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e65130 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65133 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65136 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10e65139:;
  /* 10e65139 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e65140 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e65147:;
  /* 10e65147 cmp dword ptr [0x10e80eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e80eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6514e jle 0x10e65163 */
  if ((C.zf||C.sf!=C.of)) goto L_10e65163;
  /* 10e65150 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e65152 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e65155 push edx */
  push32((uint32_t)(EDX));
  /* 10e65156 call 0x10e5c6f0 */
  push32(0x10e6515bu); f_10e5c6f0();
  /* 10e6515b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6515e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e65161 jmp 0x10e65178 */
  goto L_10e65178;
L_10e65163:;
  /* 10e65163 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e65166 mov ecx, dword ptr [0x10e80ca8] */
  ECX = (r32((uint32_t)(0x10e80ca8)));
  /* 10e6516c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e6516e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10e65172 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e65175 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_10e65178:;
  /* 10e65178 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6517c je 0x10e651b9 */
  if (C.zf) goto L_10e651b9;
  /* 10e6517e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65180 push 0xa */
  push32((uint32_t)(0xau));
  /* 10e65182 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e65185 push eax */
  push32((uint32_t)(EAX));
  /* 10e65186 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e65189 push ecx */
  push32((uint32_t)(ECX));
  /* 10e6518a call 0x10e66050 */
  push32(0x10e6518fu); f_10e66050();
  /* 10e6518f mov ecx, eax */
  ECX = (EAX);
  /* 10e65191 mov esi, edx */
  ESI = (EDX);
  /* 10e65193 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e65196 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e65199 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e6519a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6519c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6519e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e651a1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 10e651a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e651a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e651a9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e651ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e651ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e651b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e651b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10e651b7 jmp 0x10e65147 */
  goto L_10e65147;
L_10e651b9:;
  /* 10e651b9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e651bd jne 0x10e651ce */
  if (!C.zf) goto L_10e651ce;
  /* 10e651bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e651c2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e651c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e651c7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e651ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e651cc jmp 0x10e651d4 */
  goto L_10e651d4;
L_10e651ce:;
  /* 10e651ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e651d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10e651d4:;
  /* 10e651d4 pop esi */
  ESI = (pop32());
  /* 10e651d5 mov esp, ebp */
  ESP = (EBP);
  /* 10e651d7 pop ebp */
  EBP = (pop32());
  /* 10e651d8 ret  */
  ESPCHK(0x10e650b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100151e0 @ 0x10e651e0 (61 bytes, 18 insns) */
void f_10e651e0(void) {
  FTRACE(0x10e651e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e651e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e651e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e651e3 cmp dword ptr [0x10e82b08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e651ea jne 0x10e6521b */
  if (!C.zf) goto L_10e6521b;
  /* 10e651ec push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e651ee call 0x10e5a0e0 */
  push32(0x10e651f3u); f_10e5a0e0();
  /* 10e651f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e651f6 cmp dword ptr [0x10e82b08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e651fd jne 0x10e65211 */
  if (!C.zf) goto L_10e65211;
  /* 10e651ff call 0x10e65240 */
  push32(0x10e65204u); f_10e65240();
  /* 10e65204 mov eax, dword ptr [0x10e82b08] */
  EAX = (r32((uint32_t)(0x10e82b08)));
  /* 10e65209 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6520c mov dword ptr [0x10e82b08], eax */
  w32((uint32_t)(0x10e82b08), (EAX));
L_10e65211:;
  /* 10e65211 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e65213 call 0x10e5a180 */
  push32(0x10e65218u); f_10e5a180();
  /* 10e65218 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e6521b:;
  /* 10e6521b pop ebp */
  EBP = (pop32());
  /* 10e6521c ret  */
  ESPCHK(0x10e651e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015220 @ 0x10e65220 (30 bytes, 11 insns) */
void f_10e65220(void) {
  FTRACE(0x10e65220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e65220 push ebp */
  push32((uint32_t)(EBP));
  /* 10e65221 mov ebp, esp */
  EBP = (ESP);
  /* 10e65223 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e65225 call 0x10e5a0e0 */
  push32(0x10e6522au); f_10e5a0e0();
  /* 10e6522a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6522d call 0x10e65240 */
  push32(0x10e65232u); f_10e65240();
  /* 10e65232 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e65234 call 0x10e5a180 */
  push32(0x10e65239u); f_10e5a180();
  /* 10e65239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6523c pop ebp */
  EBP = (pop32());
  /* 10e6523d ret  */
  ESPCHK(0x10e65220u, _esp0);
  ESP += 4; return;
}

/* FUN_10015240 @ 0x10e65240 (939 bytes, 266 insns) */
void f_10e65240(void) {
  FTRACE(0x10e65240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e65240 push ebp */
  push32((uint32_t)(EBP));
  /* 10e65241 mov ebp, esp */
  EBP = (ESP);
  /* 10e65243 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e65246 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e6524d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e6524f call 0x10e5a0e0 */
  push32(0x10e65254u); f_10e5a0e0();
  /* 10e65254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65257 mov dword ptr [0x10e82a50], 0 */
  w32((uint32_t)(0x10e82a50), (0x0u));
  /* 10e65261 mov dword ptr [0x10e81e48], 0xffffffff */
  w32((uint32_t)(0x10e81e48), (0xffffffffu));
  /* 10e6526b mov eax, dword ptr [0x10e81e48] */
  EAX = (r32((uint32_t)(0x10e81e48)));
  /* 10e65270 mov dword ptr [0x10e81e38], eax */
  w32((uint32_t)(0x10e81e38), (EAX));
  /* 10e65275 push 0x10e7ec18 */
  push32((uint32_t)(0x10e7ec18u));
  /* 10e6527a call 0x10e660c0 */
  push32(0x10e6527fu); f_10e660c0();
  /* 10e6527f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65282 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e65285 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65289 jne 0x10e653c3 */
  if (!C.zf) goto L_10e653c3;
  /* 10e6528f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e65291 call 0x10e5a180 */
  push32(0x10e65296u); f_10e5a180();
  /* 10e65296 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65299 push 0x10e82a58 */
  push32((uint32_t)(0x10e82a58u));
  /* 10e6529e call dword ptr [0x10e85304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85304))), 0x10e652a4u);
  /* 10e652a4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e652a7 je 0x10e653be */
  if (C.zf) goto L_10e653be;
  /* 10e652ad mov dword ptr [0x10e82a50], 1 */
  w32((uint32_t)(0x10e82a50), (0x1u));
  /* 10e652b7 mov ecx, dword ptr [0x10e82a58] */
  ECX = (r32((uint32_t)(0x10e82a58)));
  /* 10e652bd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e652c0 mov dword ptr [0x10e81da0], ecx */
  w32((uint32_t)(0x10e81da0), (ECX));
  /* 10e652c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e652c8 mov dx, word ptr [0x10e82a9e] */
  DX = (r16((uint32_t)(0x10e82a9e)));
  /* 10e652cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e652d1 je 0x10e652e9 */
  if (C.zf) goto L_10e652e9;
  /* 10e652d3 mov eax, dword ptr [0x10e82aac] */
  EAX = (r32((uint32_t)(0x10e82aac)));
  /* 10e652d8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e652db mov ecx, dword ptr [0x10e81da0] */
  ECX = (r32((uint32_t)(0x10e81da0)));
  /* 10e652e1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e652e3 mov dword ptr [0x10e81da0], ecx */
  w32((uint32_t)(0x10e81da0), (ECX));
L_10e652e9:;
  /* 10e652e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e652eb mov dx, word ptr [0x10e82af2] */
  DX = (r16((uint32_t)(0x10e82af2)));
  /* 10e652f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e652f4 je 0x10e6531e */
  if (C.zf) goto L_10e6531e;
  /* 10e652f6 cmp dword ptr [0x10e82b00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e652fd je 0x10e6531e */
  if (C.zf) goto L_10e6531e;
  /* 10e652ff mov dword ptr [0x10e81da4], 1 */
  w32((uint32_t)(0x10e81da4), (0x1u));
  /* 10e65309 mov eax, dword ptr [0x10e82b00] */
  EAX = (r32((uint32_t)(0x10e82b00)));
  /* 10e6530e sub eax, dword ptr [0x10e82aac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e82aac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e65314 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e65317 mov dword ptr [0x10e81da8], eax */
  w32((uint32_t)(0x10e81da8), (EAX));
  /* 10e6531c jmp 0x10e65332 */
  goto L_10e65332;
L_10e6531e:;
  /* 10e6531e mov dword ptr [0x10e81da4], 0 */
  w32((uint32_t)(0x10e81da4), (0x0u));
  /* 10e65328 mov dword ptr [0x10e81da8], 0 */
  w32((uint32_t)(0x10e81da8), (0x0u));
L_10e65332:;
  /* 10e65332 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10e65335 push ecx */
  push32((uint32_t)(ECX));
  /* 10e65336 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65338 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10e6533a mov edx, dword ptr [0x10e81e2c] */
  EDX = (r32((uint32_t)(0x10e81e2c)));
  /* 10e65340 push edx */
  push32((uint32_t)(EDX));
  /* 10e65341 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e65343 push 0x10e82a5c */
  push32((uint32_t)(0x10e82a5cu));
  /* 10e65348 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e6534d mov eax, dword ptr [0x10e829c0] */
  EAX = (r32((uint32_t)(0x10e829c0)));
  /* 10e65352 push eax */
  push32((uint32_t)(EAX));
  /* 10e65353 call dword ptr [0x10e85394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85394))), 0x10e65359u);
  /* 10e65359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e6535b je 0x10e6536f */
  if (C.zf) goto L_10e6536f;
  /* 10e6535d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65361 jne 0x10e6536f */
  if (!C.zf) goto L_10e6536f;
  /* 10e65363 mov ecx, dword ptr [0x10e81e2c] */
  ECX = (r32((uint32_t)(0x10e81e2c)));
  /* 10e65369 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10e6536d jmp 0x10e65378 */
  goto L_10e65378;
L_10e6536f:;
  /* 10e6536f mov edx, dword ptr [0x10e81e2c] */
  EDX = (r32((uint32_t)(0x10e81e2c)));
  /* 10e65375 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10e65378:;
  /* 10e65378 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10e6537b push eax */
  push32((uint32_t)(EAX));
  /* 10e6537c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e6537e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10e65380 mov ecx, dword ptr [0x10e81e30] */
  ECX = (r32((uint32_t)(0x10e81e30)));
  /* 10e65386 push ecx */
  push32((uint32_t)(ECX));
  /* 10e65387 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e65389 push 0x10e82ab0 */
  push32((uint32_t)(0x10e82ab0u));
  /* 10e6538e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e65393 mov edx, dword ptr [0x10e829c0] */
  EDX = (r32((uint32_t)(0x10e829c0)));
  /* 10e65399 push edx */
  push32((uint32_t)(EDX));
  /* 10e6539a call dword ptr [0x10e85394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85394))), 0x10e653a0u);
  /* 10e653a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e653a2 je 0x10e653b5 */
  if (C.zf) goto L_10e653b5;
  /* 10e653a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e653a8 jne 0x10e653b5 */
  if (!C.zf) goto L_10e653b5;
  /* 10e653aa mov eax, dword ptr [0x10e81e30] */
  EAX = (r32((uint32_t)(0x10e81e30)));
  /* 10e653af mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10e653b3 jmp 0x10e653be */
  goto L_10e653be;
L_10e653b5:;
  /* 10e653b5 mov ecx, dword ptr [0x10e81e30] */
  ECX = (r32((uint32_t)(0x10e81e30)));
  /* 10e653bb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10e653be:;
  /* 10e653be jmp 0x10e655e7 */
  goto L_10e655e7;
L_10e653c3:;
  /* 10e653c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e653c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e653c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e653cb je 0x10e653ed */
  if (C.zf) goto L_10e653ed;
  /* 10e653cd cmp dword ptr [0x10e82b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e653d4 je 0x10e653fc */
  if (C.zf) goto L_10e653fc;
  /* 10e653d6 mov ecx, dword ptr [0x10e82b04] */
  ECX = (r32((uint32_t)(0x10e82b04)));
  /* 10e653dc push ecx */
  push32((uint32_t)(ECX));
  /* 10e653dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e653e0 push edx */
  push32((uint32_t)(EDX));
  /* 10e653e1 call 0x10e62370 */
  push32(0x10e653e6u); f_10e62370();
  /* 10e653e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e653e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e653eb jne 0x10e653fc */
  if (!C.zf) goto L_10e653fc;
L_10e653ed:;
  /* 10e653ed push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e653ef call 0x10e5a180 */
  push32(0x10e653f4u); f_10e5a180();
  /* 10e653f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e653f7 jmp 0x10e655e7 */
  goto L_10e655e7;
L_10e653fc:;
  /* 10e653fc push 2 */
  push32((uint32_t)(0x2u));
  /* 10e653fe mov eax, dword ptr [0x10e82b04] */
  EAX = (r32((uint32_t)(0x10e82b04)));
  /* 10e65403 push eax */
  push32((uint32_t)(EAX));
  /* 10e65404 call 0x10e57170 */
  push32(0x10e65409u); f_10e57170();
  /* 10e65409 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6540c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10e65411 push 0x10e7ec10 */
  push32((uint32_t)(0x10e7ec10u));
  /* 10e65416 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e65418 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6541b push ecx */
  push32((uint32_t)(ECX));
  /* 10e6541c call 0x10e59510 */
  push32(0x10e65421u); f_10e59510();
  /* 10e65421 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65424 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65427 push eax */
  push32((uint32_t)(EAX));
  /* 10e65428 call 0x10e566e0 */
  push32(0x10e6542du); f_10e566e0();
  /* 10e6542d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65430 mov dword ptr [0x10e82b04], eax */
  w32((uint32_t)(0x10e82b04), (EAX));
  /* 10e65435 cmp dword ptr [0x10e82b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6543c jne 0x10e6544d */
  if (!C.zf) goto L_10e6544d;
  /* 10e6543e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e65440 call 0x10e5a180 */
  push32(0x10e65445u); f_10e5a180();
  /* 10e65445 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65448 jmp 0x10e655e7 */
  goto L_10e655e7;
L_10e6544d:;
  /* 10e6544d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e65450 push edx */
  push32((uint32_t)(EDX));
  /* 10e65451 mov eax, dword ptr [0x10e82b04] */
  EAX = (r32((uint32_t)(0x10e82b04)));
  /* 10e65456 push eax */
  push32((uint32_t)(EAX));
  /* 10e65457 call 0x10e59690 */
  push32(0x10e6545cu); f_10e59690();
  /* 10e6545c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6545f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e65461 call 0x10e5a180 */
  push32(0x10e65466u); f_10e5a180();
  /* 10e65466 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65469 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e6546b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6546e push ecx */
  push32((uint32_t)(ECX));
  /* 10e6546f mov edx, dword ptr [0x10e81e2c] */
  EDX = (r32((uint32_t)(0x10e81e2c)));
  /* 10e65475 push edx */
  push32((uint32_t)(EDX));
  /* 10e65476 call 0x10e59f00 */
  push32(0x10e6547bu); f_10e59f00();
  /* 10e6547b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6547e mov eax, dword ptr [0x10e81e2c] */
  EAX = (r32((uint32_t)(0x10e81e2c)));
  /* 10e65483 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10e65487 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6548a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6548d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e65490 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e65493 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e65496 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65499 jne 0x10e654ad */
  if (!C.zf) goto L_10e654ad;
  /* 10e6549b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6549e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e654a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e654a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e654a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e654aa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e654ad:;
  /* 10e654ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e654b0 push eax */
  push32((uint32_t)(EAX));
  /* 10e654b1 call 0x10e64f90 */
  push32(0x10e654b6u); f_10e64f90();
  /* 10e654b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e654b9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e654bf mov dword ptr [0x10e81da0], eax */
  w32((uint32_t)(0x10e81da0), (EAX));
L_10e654c4:;
  /* 10e654c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e654c7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e654ca cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e654cd je 0x10e654e5 */
  if (C.zf) goto L_10e654e5;
  /* 10e654cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e654d2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e654d5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e654d8 jl 0x10e654f0 */
  if ((C.sf!=C.of)) goto L_10e654f0;
  /* 10e654da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e654dd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e654e0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e654e3 jg 0x10e654f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e654f0;
L_10e654e5:;
  /* 10e654e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e654e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e654eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e654ee jmp 0x10e654c4 */
  goto L_10e654c4;
L_10e654f0:;
  /* 10e654f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e654f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e654f6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e654f9 jne 0x10e65595 */
  if (!C.zf) goto L_10e65595;
  /* 10e654ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e65502 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65505 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e65508 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6550b push edx */
  push32((uint32_t)(EDX));
  /* 10e6550c call 0x10e64f90 */
  push32(0x10e65511u); f_10e64f90();
  /* 10e65511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65514 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e65517 mov ecx, dword ptr [0x10e81da0] */
  ECX = (r32((uint32_t)(0x10e81da0)));
  /* 10e6551d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6551f mov dword ptr [0x10e81da0], ecx */
  w32((uint32_t)(0x10e81da0), (ECX));
L_10e65525:;
  /* 10e65525 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e65528 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e6552b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6552e jl 0x10e65546 */
  if ((C.sf!=C.of)) goto L_10e65546;
  /* 10e65530 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e65533 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e65536 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65539 jg 0x10e65546 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e65546;
  /* 10e6553b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6553e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65541 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e65544 jmp 0x10e65525 */
  goto L_10e65525;
L_10e65546:;
  /* 10e65546 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e65549 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e6554c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6554f jne 0x10e65595 */
  if (!C.zf) goto L_10e65595;
  /* 10e65551 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e65554 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65557 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e6555a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6555d push ecx */
  push32((uint32_t)(ECX));
  /* 10e6555e call 0x10e64f90 */
  push32(0x10e65563u); f_10e64f90();
  /* 10e65563 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65566 mov edx, dword ptr [0x10e81da0] */
  EDX = (r32((uint32_t)(0x10e81da0)));
  /* 10e6556c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6556e mov dword ptr [0x10e81da0], edx */
  w32((uint32_t)(0x10e81da0), (EDX));
L_10e65574:;
  /* 10e65574 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e65577 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e6557a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6557d jl 0x10e65595 */
  if ((C.sf!=C.of)) goto L_10e65595;
  /* 10e6557f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e65582 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e65585 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65588 jg 0x10e65595 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e65595;
  /* 10e6558a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6558d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65590 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e65593 jmp 0x10e65574 */
  goto L_10e65574;
L_10e65595:;
  /* 10e65595 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65599 je 0x10e655a9 */
  if (C.zf) goto L_10e655a9;
  /* 10e6559b mov edx, dword ptr [0x10e81da0] */
  EDX = (r32((uint32_t)(0x10e81da0)));
  /* 10e655a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e655a3 mov dword ptr [0x10e81da0], edx */
  w32((uint32_t)(0x10e81da0), (EDX));
L_10e655a9:;
  /* 10e655a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e655ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e655af mov dword ptr [0x10e81da4], ecx */
  w32((uint32_t)(0x10e81da4), (ECX));
  /* 10e655b5 cmp dword ptr [0x10e81da4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e81da4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e655bc je 0x10e655de */
  if (C.zf) goto L_10e655de;
  /* 10e655be push 3 */
  push32((uint32_t)(0x3u));
  /* 10e655c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e655c3 push edx */
  push32((uint32_t)(EDX));
  /* 10e655c4 mov eax, dword ptr [0x10e81e30] */
  EAX = (r32((uint32_t)(0x10e81e30)));
  /* 10e655c9 push eax */
  push32((uint32_t)(EAX));
  /* 10e655ca call 0x10e59f00 */
  push32(0x10e655cfu); f_10e59f00();
  /* 10e655cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e655d2 mov ecx, dword ptr [0x10e81e30] */
  ECX = (r32((uint32_t)(0x10e81e30)));
  /* 10e655d8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10e655dc jmp 0x10e655e7 */
  goto L_10e655e7;
L_10e655de:;
  /* 10e655de mov edx, dword ptr [0x10e81e30] */
  EDX = (r32((uint32_t)(0x10e81e30)));
  /* 10e655e4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10e655e7:;
  /* 10e655e7 mov esp, ebp */
  ESP = (EBP);
  /* 10e655e9 pop ebp */
  EBP = (pop32());
  /* 10e655ea ret  */
  ESPCHK(0x10e65240u, _esp0);
  ESP += 4; return;
}

/* FUN_100155f0 @ 0x10e655f0 (46 bytes, 18 insns) */
void f_10e655f0(void) {
  FTRACE(0x10e655f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e655f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e655f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e655f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e655f4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e655f6 call 0x10e5a0e0 */
  push32(0x10e655fbu); f_10e5a0e0();
  /* 10e655fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e655fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65601 push eax */
  push32((uint32_t)(EAX));
  /* 10e65602 call 0x10e65620 */
  push32(0x10e65607u); f_10e65620();
  /* 10e65607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6560a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e6560d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10e6560f call 0x10e5a180 */
  push32(0x10e65614u); f_10e5a180();
  /* 10e65614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6561a mov esp, ebp */
  ESP = (EBP);
  /* 10e6561c pop ebp */
  EBP = (pop32());
  /* 10e6561d ret  */
  ESPCHK(0x10e655f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015620 @ 0x10e65620 (762 bytes, 246 insns) */
void f_10e65620(void) {
  FTRACE(0x10e65620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e65620 push ebp */
  push32((uint32_t)(EBP));
  /* 10e65621 mov ebp, esp */
  EBP = (ESP);
  /* 10e65623 push ecx */
  push32((uint32_t)(ECX));
  /* 10e65624 cmp dword ptr [0x10e81da4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e81da4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6562b jne 0x10e65634 */
  if (!C.zf) goto L_10e65634;
  /* 10e6562d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6562f jmp 0x10e65916 */
  goto L_10e65916;
L_10e65634:;
  /* 10e65634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65637 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e6563a cmp ecx, dword ptr [0x10e81e38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e81e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65640 jne 0x10e65654 */
  if (!C.zf) goto L_10e65654;
  /* 10e65642 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65645 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e65648 cmp eax, dword ptr [0x10e81e48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e81e48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6564e je 0x10e6581b */
  if (C.zf) goto L_10e6581b;
L_10e65654:;
  /* 10e65654 cmp dword ptr [0x10e82a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6565b je 0x10e657d5 */
  if (C.zf) goto L_10e657d5;
  /* 10e65661 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e65663 mov cx, word ptr [0x10e82af0] */
  CX = (r16((uint32_t)(0x10e82af0)));
  /* 10e6566a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e6566c jne 0x10e656c9 */
  if (!C.zf) goto L_10e656c9;
  /* 10e6566e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e65670 mov dx, word ptr [0x10e82afe] */
  DX = (r16((uint32_t)(0x10e82afe)));
  /* 10e65677 push edx */
  push32((uint32_t)(EDX));
  /* 10e65678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6567a mov ax, word ptr [0x10e82afc] */
  AX = (r16((uint32_t)(0x10e82afc)));
  /* 10e65680 push eax */
  push32((uint32_t)(EAX));
  /* 10e65681 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e65683 mov cx, word ptr [0x10e82afa] */
  CX = (r16((uint32_t)(0x10e82afa)));
  /* 10e6568a push ecx */
  push32((uint32_t)(ECX));
  /* 10e6568b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e6568d mov dx, word ptr [0x10e82af8] */
  DX = (r16((uint32_t)(0x10e82af8)));
  /* 10e65694 push edx */
  push32((uint32_t)(EDX));
  /* 10e65695 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65697 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e65699 mov ax, word ptr [0x10e82af4] */
  AX = (r16((uint32_t)(0x10e82af4)));
  /* 10e6569f push eax */
  push32((uint32_t)(EAX));
  /* 10e656a0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e656a2 mov cx, word ptr [0x10e82af6] */
  CX = (r16((uint32_t)(0x10e82af6)));
  /* 10e656a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e656aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e656ac mov dx, word ptr [0x10e82af2] */
  DX = (r16((uint32_t)(0x10e82af2)));
  /* 10e656b3 push edx */
  push32((uint32_t)(EDX));
  /* 10e656b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e656b7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e656ba push ecx */
  push32((uint32_t)(ECX));
  /* 10e656bb push 1 */
  push32((uint32_t)(0x1u));
  /* 10e656bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10e656bf call 0x10e65920 */
  push32(0x10e656c4u); f_10e65920();
  /* 10e656c4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e656c7 jmp 0x10e6571a */
  goto L_10e6571a;
L_10e656c9:;
  /* 10e656c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e656cb mov dx, word ptr [0x10e82afe] */
  DX = (r16((uint32_t)(0x10e82afe)));
  /* 10e656d2 push edx */
  push32((uint32_t)(EDX));
  /* 10e656d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e656d5 mov ax, word ptr [0x10e82afc] */
  AX = (r16((uint32_t)(0x10e82afc)));
  /* 10e656db push eax */
  push32((uint32_t)(EAX));
  /* 10e656dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e656de mov cx, word ptr [0x10e82afa] */
  CX = (r16((uint32_t)(0x10e82afa)));
  /* 10e656e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e656e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e656e8 mov dx, word ptr [0x10e82af8] */
  DX = (r16((uint32_t)(0x10e82af8)));
  /* 10e656ef push edx */
  push32((uint32_t)(EDX));
  /* 10e656f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e656f2 mov ax, word ptr [0x10e82af6] */
  AX = (r16((uint32_t)(0x10e82af6)));
  /* 10e656f8 push eax */
  push32((uint32_t)(EAX));
  /* 10e656f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e656fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e656fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e656ff mov cx, word ptr [0x10e82af2] */
  CX = (r16((uint32_t)(0x10e82af2)));
  /* 10e65706 push ecx */
  push32((uint32_t)(ECX));
  /* 10e65707 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6570a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e6570d push eax */
  push32((uint32_t)(EAX));
  /* 10e6570e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65710 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e65712 call 0x10e65920 */
  push32(0x10e65717u); f_10e65920();
  /* 10e65717 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e6571a:;
  /* 10e6571a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6571c mov cx, word ptr [0x10e82a9c] */
  CX = (r16((uint32_t)(0x10e82a9c)));
  /* 10e65723 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e65725 jne 0x10e65782 */
  if (!C.zf) goto L_10e65782;
  /* 10e65727 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e65729 mov dx, word ptr [0x10e82aaa] */
  DX = (r16((uint32_t)(0x10e82aaa)));
  /* 10e65730 push edx */
  push32((uint32_t)(EDX));
  /* 10e65731 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e65733 mov ax, word ptr [0x10e82aa8] */
  AX = (r16((uint32_t)(0x10e82aa8)));
  /* 10e65739 push eax */
  push32((uint32_t)(EAX));
  /* 10e6573a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6573c mov cx, word ptr [0x10e82aa6] */
  CX = (r16((uint32_t)(0x10e82aa6)));
  /* 10e65743 push ecx */
  push32((uint32_t)(ECX));
  /* 10e65744 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e65746 mov dx, word ptr [0x10e82aa4] */
  DX = (r16((uint32_t)(0x10e82aa4)));
  /* 10e6574d push edx */
  push32((uint32_t)(EDX));
  /* 10e6574e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65750 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e65752 mov ax, word ptr [0x10e82aa0] */
  AX = (r16((uint32_t)(0x10e82aa0)));
  /* 10e65758 push eax */
  push32((uint32_t)(EAX));
  /* 10e65759 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6575b mov cx, word ptr [0x10e82aa2] */
  CX = (r16((uint32_t)(0x10e82aa2)));
  /* 10e65762 push ecx */
  push32((uint32_t)(ECX));
  /* 10e65763 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e65765 mov dx, word ptr [0x10e82a9e] */
  DX = (r16((uint32_t)(0x10e82a9e)));
  /* 10e6576c push edx */
  push32((uint32_t)(EDX));
  /* 10e6576d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65770 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e65773 push ecx */
  push32((uint32_t)(ECX));
  /* 10e65774 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e65776 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65778 call 0x10e65920 */
  push32(0x10e6577du); f_10e65920();
  /* 10e6577d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65780 jmp 0x10e657d3 */
  goto L_10e657d3;
L_10e65782:;
  /* 10e65782 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e65784 mov dx, word ptr [0x10e82aaa] */
  DX = (r16((uint32_t)(0x10e82aaa)));
  /* 10e6578b push edx */
  push32((uint32_t)(EDX));
  /* 10e6578c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6578e mov ax, word ptr [0x10e82aa8] */
  AX = (r16((uint32_t)(0x10e82aa8)));
  /* 10e65794 push eax */
  push32((uint32_t)(EAX));
  /* 10e65795 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e65797 mov cx, word ptr [0x10e82aa6] */
  CX = (r16((uint32_t)(0x10e82aa6)));
  /* 10e6579e push ecx */
  push32((uint32_t)(ECX));
  /* 10e6579f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e657a1 mov dx, word ptr [0x10e82aa4] */
  DX = (r16((uint32_t)(0x10e82aa4)));
  /* 10e657a8 push edx */
  push32((uint32_t)(EDX));
  /* 10e657a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e657ab mov ax, word ptr [0x10e82aa2] */
  AX = (r16((uint32_t)(0x10e82aa2)));
  /* 10e657b1 push eax */
  push32((uint32_t)(EAX));
  /* 10e657b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e657b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e657b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e657b8 mov cx, word ptr [0x10e82a9e] */
  CX = (r16((uint32_t)(0x10e82a9e)));
  /* 10e657bf push ecx */
  push32((uint32_t)(ECX));
  /* 10e657c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e657c3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e657c6 push eax */
  push32((uint32_t)(EAX));
  /* 10e657c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e657c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e657cb call 0x10e65920 */
  push32(0x10e657d0u); f_10e65920();
  /* 10e657d0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e657d3:;
  /* 10e657d3 jmp 0x10e6581b */
  goto L_10e6581b;
L_10e657d5:;
  /* 10e657d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e657d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e657d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e657db push 2 */
  push32((uint32_t)(0x2u));
  /* 10e657dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e657df push 0 */
  push32((uint32_t)(0x0u));
  /* 10e657e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e657e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e657e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e657e8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e657eb push edx */
  push32((uint32_t)(EDX));
  /* 10e657ec push 1 */
  push32((uint32_t)(0x1u));
  /* 10e657ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10e657f0 call 0x10e65920 */
  push32(0x10e657f5u); f_10e65920();
  /* 10e657f5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e657f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e657fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e657fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10e657fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10e65800 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65802 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65804 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e65806 push 0xa */
  push32((uint32_t)(0xau));
  /* 10e65808 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6580b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e6580e push ecx */
  push32((uint32_t)(ECX));
  /* 10e6580f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e65811 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65813 call 0x10e65920 */
  push32(0x10e65818u); f_10e65920();
  /* 10e65818 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e6581b:;
  /* 10e6581b mov edx, dword ptr [0x10e81e3c] */
  EDX = (r32((uint32_t)(0x10e81e3c)));
  /* 10e65821 cmp edx, dword ptr [0x10e81e4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e81e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65827 jge 0x10e65874 */
  if ((C.sf==C.of)) goto L_10e65874;
  /* 10e65829 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6582c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10e6582f cmp ecx, dword ptr [0x10e81e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e81e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65835 jl 0x10e65845 */
  if ((C.sf!=C.of)) goto L_10e65845;
  /* 10e65837 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6583a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e6583d cmp eax, dword ptr [0x10e81e4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e81e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65843 jle 0x10e6584c */
  if ((C.zf||C.sf!=C.of)) goto L_10e6584c;
L_10e65845:;
  /* 10e65845 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e65847 jmp 0x10e65916 */
  goto L_10e65916;
L_10e6584c:;
  /* 10e6584c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6584f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10e65852 cmp edx, dword ptr [0x10e81e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e81e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65858 jle 0x10e65872 */
  if ((C.zf||C.sf!=C.of)) goto L_10e65872;
  /* 10e6585a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6585d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10e65860 cmp ecx, dword ptr [0x10e81e4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e81e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65866 jge 0x10e65872 */
  if ((C.sf==C.of)) goto L_10e65872;
  /* 10e65868 mov eax, 1 */
  EAX = (0x1u);
  /* 10e6586d jmp 0x10e65916 */
  goto L_10e65916;
L_10e65872:;
  /* 10e65872 jmp 0x10e658b7 */
  goto L_10e658b7;
L_10e65874:;
  /* 10e65874 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65877 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e6587a cmp eax, dword ptr [0x10e81e4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e81e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65880 jl 0x10e65890 */
  if ((C.sf!=C.of)) goto L_10e65890;
  /* 10e65882 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65885 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10e65888 cmp edx, dword ptr [0x10e81e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e81e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6588e jle 0x10e65897 */
  if ((C.zf||C.sf!=C.of)) goto L_10e65897;
L_10e65890:;
  /* 10e65890 mov eax, 1 */
  EAX = (0x1u);
  /* 10e65895 jmp 0x10e65916 */
  goto L_10e65916;
L_10e65897:;
  /* 10e65897 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6589a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10e6589d cmp ecx, dword ptr [0x10e81e4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e81e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e658a3 jle 0x10e658b7 */
  if ((C.zf||C.sf!=C.of)) goto L_10e658b7;
  /* 10e658a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e658a8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10e658ab cmp eax, dword ptr [0x10e81e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e81e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e658b1 jge 0x10e658b7 */
  if ((C.sf==C.of)) goto L_10e658b7;
  /* 10e658b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e658b5 jmp 0x10e65916 */
  goto L_10e65916;
L_10e658b7:;
  /* 10e658b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e658ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e658bd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e658c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e658c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e658c5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e658c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e658ca mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e658cd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e658d3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e658d5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e658db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e658de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e658e1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10e658e4 cmp edx, dword ptr [0x10e81e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10e81e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e658ea jne 0x10e65902 */
  if (!C.zf) goto L_10e65902;
  /* 10e658ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e658ef cmp eax, dword ptr [0x10e81e40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e81e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e658f5 jl 0x10e658fe */
  if ((C.sf!=C.of)) goto L_10e658fe;
  /* 10e658f7 mov eax, 1 */
  EAX = (0x1u);
  /* 10e658fc jmp 0x10e65916 */
  goto L_10e65916;
L_10e658fe:;
  /* 10e658fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e65900 jmp 0x10e65916 */
  goto L_10e65916;
L_10e65902:;
  /* 10e65902 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e65905 cmp ecx, dword ptr [0x10e81e50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e81e50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6590b jge 0x10e65914 */
  if ((C.sf==C.of)) goto L_10e65914;
  /* 10e6590d mov eax, 1 */
  EAX = (0x1u);
  /* 10e65912 jmp 0x10e65916 */
  goto L_10e65916;
L_10e65914:;
  /* 10e65914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e65916:;
  /* 10e65916 mov esp, ebp */
  ESP = (EBP);
  /* 10e65918 pop ebp */
  EBP = (pop32());
  /* 10e65919 ret  */
  ESPCHK(0x10e65620u, _esp0);
  ESP += 4; return;
}

/* FUN_10015920 @ 0x10e65920 (504 bytes, 145 insns) */
void f_10e65920(void) {
  FTRACE(0x10e65920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e65920 push ebp */
  push32((uint32_t)(EBP));
  /* 10e65921 mov ebp, esp */
  EBP = (ESP);
  /* 10e65923 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e65926 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6592a jne 0x10e659fc */
  if (!C.zf) goto L_10e659fc;
  /* 10e65930 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e65933 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10e65936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e65938 jne 0x10e65949 */
  if (!C.zf) goto L_10e65949;
  /* 10e6593a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e6593d mov edx, dword ptr [ecx*4 + 0x10e81e5c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e81e5c)));
  /* 10e65944 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e65947 jmp 0x10e65956 */
  goto L_10e65956;
L_10e65949:;
  /* 10e65949 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e6594c mov ecx, dword ptr [eax*4 + 0x10e81e90] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e81e90)));
  /* 10e65953 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10e65956:;
  /* 10e65956 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e65959 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6595c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e6595f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e65962 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e65965 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e6596b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e6596e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65970 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e65973 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e65976 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10e65979 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 10e6597d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10e6597e mov ecx, 7 */
  ECX = (0x7u);
  /* 10e65983 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e65985 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e65988 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6598b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6598e jge 0x10e659a9 */
  if ((C.sf==C.of)) goto L_10e659a9;
  /* 10e65990 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e65993 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e65996 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e65999 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e6599c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e6599f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e659a2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e659a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e659a7 jmp 0x10e659bd */
  goto L_10e659bd;
L_10e659a9:;
  /* 10e659a9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e659ac sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e659af mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e659b2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e659b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e659b8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e659ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e659bd:;
  /* 10e659bd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e659c1 jne 0x10e659fa */
  if (!C.zf) goto L_10e659fa;
  /* 10e659c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e659c6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10e659c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e659cb jne 0x10e659dc */
  if (!C.zf) goto L_10e659dc;
  /* 10e659cd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e659d0 mov eax, dword ptr [edx*4 + 0x10e81e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e81e60)));
  /* 10e659d7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e659da jmp 0x10e659e9 */
  goto L_10e659e9;
L_10e659dc:;
  /* 10e659dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e659df mov edx, dword ptr [ecx*4 + 0x10e81e94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10e81e94)));
  /* 10e659e6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10e659e9:;
  /* 10e659e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e659ec cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e659ef jle 0x10e659fa */
  if ((C.zf||C.sf!=C.of)) goto L_10e659fa;
  /* 10e659f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e659f4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e659f7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e659fa:;
  /* 10e659fa jmp 0x10e65a31 */
  goto L_10e65a31;
L_10e659fc:;
  /* 10e659fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e659ff and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e65a02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e65a04 jne 0x10e65a15 */
  if (!C.zf) goto L_10e65a15;
  /* 10e65a06 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e65a09 mov ecx, dword ptr [eax*4 + 0x10e81e5c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10e81e5c)));
  /* 10e65a10 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e65a13 jmp 0x10e65a22 */
  goto L_10e65a22;
L_10e65a15:;
  /* 10e65a15 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e65a18 mov eax, dword ptr [edx*4 + 0x10e81e90] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10e81e90)));
  /* 10e65a1f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10e65a22:;
  /* 10e65a22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e65a25 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e65a28 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e65a2b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65a2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e65a31:;
  /* 10e65a31 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65a35 jne 0x10e65a71 */
  if (!C.zf) goto L_10e65a71;
  /* 10e65a37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e65a3a mov dword ptr [0x10e81e3c], eax */
  w32((uint32_t)(0x10e81e3c), (EAX));
  /* 10e65a3f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10e65a42 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e65a45 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10e65a48 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65a4a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e65a4d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10e65a50 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65a52 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e65a58 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10e65a5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65a5d mov dword ptr [0x10e81e40], ecx */
  w32((uint32_t)(0x10e81e40), (ECX));
  /* 10e65a63 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e65a66 mov dword ptr [0x10e81e38], edx */
  w32((uint32_t)(0x10e81e38), (EDX));
  /* 10e65a6c jmp 0x10e65b14 */
  goto L_10e65b14;
L_10e65a71:;
  /* 10e65a71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e65a74 mov dword ptr [0x10e81e4c], eax */
  w32((uint32_t)(0x10e81e4c), (EAX));
  /* 10e65a79 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10e65a7c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e65a7f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10e65a82 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65a84 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e65a87 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10e65a8a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65a8c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e65a92 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 10e65a95 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65a97 mov dword ptr [0x10e81e50], ecx */
  w32((uint32_t)(0x10e81e50), (ECX));
  /* 10e65a9d mov edx, dword ptr [0x10e81da8] */
  EDX = (r32((uint32_t)(0x10e81da8)));
  /* 10e65aa3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e65aa9 mov eax, dword ptr [0x10e81e50] */
  EAX = (r32((uint32_t)(0x10e81e50)));
  /* 10e65aae add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65ab0 mov dword ptr [0x10e81e50], eax */
  w32((uint32_t)(0x10e81e50), (EAX));
  /* 10e65ab5 cmp dword ptr [0x10e81e50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e81e50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65abc jge 0x10e65ae1 */
  if ((C.sf==C.of)) goto L_10e65ae1;
  /* 10e65abe mov ecx, dword ptr [0x10e81e50] */
  ECX = (r32((uint32_t)(0x10e81e50)));
  /* 10e65ac4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65aca mov dword ptr [0x10e81e50], ecx */
  w32((uint32_t)(0x10e81e50), (ECX));
  /* 10e65ad0 mov edx, dword ptr [0x10e81e4c] */
  EDX = (r32((uint32_t)(0x10e81e4c)));
  /* 10e65ad6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e65ad9 mov dword ptr [0x10e81e4c], edx */
  w32((uint32_t)(0x10e81e4c), (EDX));
  /* 10e65adf jmp 0x10e65b0b */
  goto L_10e65b0b;
L_10e65ae1:;
  /* 10e65ae1 cmp dword ptr [0x10e81e50], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x10e81e50))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65aeb jl 0x10e65b0b */
  if ((C.sf!=C.of)) goto L_10e65b0b;
  /* 10e65aed mov eax, dword ptr [0x10e81e50] */
  EAX = (r32((uint32_t)(0x10e81e50)));
  /* 10e65af2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e65af7 mov dword ptr [0x10e81e50], eax */
  w32((uint32_t)(0x10e81e50), (EAX));
  /* 10e65afc mov ecx, dword ptr [0x10e81e4c] */
  ECX = (r32((uint32_t)(0x10e81e4c)));
  /* 10e65b02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65b05 mov dword ptr [0x10e81e4c], ecx */
  w32((uint32_t)(0x10e81e4c), (ECX));
L_10e65b0b:;
  /* 10e65b0b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e65b0e mov dword ptr [0x10e81e48], edx */
  w32((uint32_t)(0x10e81e48), (EDX));
L_10e65b14:;
  /* 10e65b14 mov esp, ebp */
  ESP = (EBP);
  /* 10e65b16 pop ebp */
  EBP = (pop32());
  /* 10e65b17 ret  */
  ESPCHK(0x10e65920u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b20 @ 0x10e65b20 (382 bytes, 135 insns) */
void f_10e65b20(void) {
  FTRACE(0x10e65b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e65b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10e65b21 mov ebp, esp */
  EBP = (ESP);
  /* 10e65b23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e65b25 push 0x10e7ec20 */
  push32((uint32_t)(0x10e7ec20u));
  /* 10e65b2a push 0x10e5f7e8 */
  push32((uint32_t)(0x10e5f7e8u));
  /* 10e65b2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10e65b35 push eax */
  push32((uint32_t)(EAX));
  /* 10e65b36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10e65b3d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65b40 push ebx */
  push32((uint32_t)(EBX));
  /* 10e65b41 push esi */
  push32((uint32_t)(ESI));
  /* 10e65b42 push edi */
  push32((uint32_t)(EDI));
  /* 10e65b43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e65b46 cmp dword ptr [0x10e82b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65b4d jne 0x10e65b92 */
  if (!C.zf) goto L_10e65b92;
  /* 10e65b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65b51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65b53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e65b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65b57 call dword ptr [0x10e85300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85300))), 0x10e65b5du);
  /* 10e65b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e65b5f je 0x10e65b6d */
  if (C.zf) goto L_10e65b6d;
  /* 10e65b61 mov dword ptr [0x10e82b0c], 1 */
  w32((uint32_t)(0x10e82b0c), (0x1u));
  /* 10e65b6b jmp 0x10e65b92 */
  goto L_10e65b92;
L_10e65b6d:;
  /* 10e65b6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65b6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65b71 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e65b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65b75 call dword ptr [0x10e85318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85318))), 0x10e65b7bu);
  /* 10e65b7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e65b7d je 0x10e65b8b */
  if (C.zf) goto L_10e65b8b;
  /* 10e65b7f mov dword ptr [0x10e82b0c], 2 */
  w32((uint32_t)(0x10e82b0c), (0x2u));
  /* 10e65b89 jmp 0x10e65b92 */
  goto L_10e65b92;
L_10e65b8b:;
  /* 10e65b8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e65b8d jmp 0x10e65ca1 */
  goto L_10e65ca1;
L_10e65b92:;
  /* 10e65b92 cmp dword ptr [0x10e82b0c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b0c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65b99 jne 0x10e65bb6 */
  if (!C.zf) goto L_10e65bb6;
  /* 10e65b9b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e65b9e push eax */
  push32((uint32_t)(EAX));
  /* 10e65b9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e65ba2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e65ba3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e65ba6 push edx */
  push32((uint32_t)(EDX));
  /* 10e65ba7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65baa push eax */
  push32((uint32_t)(EAX));
  /* 10e65bab call dword ptr [0x10e85300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85300))), 0x10e65bb1u);
  /* 10e65bb1 jmp 0x10e65ca1 */
  goto L_10e65ca1;
L_10e65bb6:;
  /* 10e65bb6 cmp dword ptr [0x10e82b0c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b0c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65bbd jne 0x10e65c9f */
  if (!C.zf) goto L_10e65c9f;
  /* 10e65bc3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65bc7 jne 0x10e65bd2 */
  if (!C.zf) goto L_10e65bd2;
  /* 10e65bc9 mov ecx, dword ptr [0x10e829c0] */
  ECX = (r32((uint32_t)(0x10e829c0)));
  /* 10e65bcf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10e65bd2:;
  /* 10e65bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65bd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e65bd9 push edx */
  push32((uint32_t)(EDX));
  /* 10e65bda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65bdd push eax */
  push32((uint32_t)(EAX));
  /* 10e65bde call dword ptr [0x10e85318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85318))), 0x10e65be4u);
  /* 10e65be4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e65be7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65beb jne 0x10e65bf4 */
  if (!C.zf) goto L_10e65bf4;
  /* 10e65bed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e65bef jmp 0x10e65ca1 */
  goto L_10e65ca1;
L_10e65bf4:;
  /* 10e65bf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e65bfb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e65bfe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65c01 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e65c03 call 0x10e59880 */
  push32(0x10e65c08u); f_10e59880();
  /* 10e65c08 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10e65c0b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e65c0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e65c11 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e65c14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e65c1b jmp 0x10e65c34 */
  goto L_10e65c34;
  /* 10e65c1d mov eax, 1 */
  EAX = (0x1u);
  /* 10e65c22 ret  */
  ESPCHK(0x10e65b20u, _esp0);
  ESP += 4; return;
  /* 10e65c23 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e65c26 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e65c2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e65c34:;
  /* 10e65c34 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65c38 jne 0x10e65c3e */
  if (!C.zf) goto L_10e65c3e;
  /* 10e65c3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e65c3c jmp 0x10e65ca1 */
  goto L_10e65ca1;
L_10e65c3e:;
  /* 10e65c3e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e65c41 push edx */
  push32((uint32_t)(EDX));
  /* 10e65c42 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e65c45 push eax */
  push32((uint32_t)(EAX));
  /* 10e65c46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e65c49 push ecx */
  push32((uint32_t)(ECX));
  /* 10e65c4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65c4d push edx */
  push32((uint32_t)(EDX));
  /* 10e65c4e call dword ptr [0x10e85318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85318))), 0x10e65c54u);
  /* 10e65c54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e65c56 jne 0x10e65c5c */
  if (!C.zf) goto L_10e65c5c;
  /* 10e65c58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e65c5a jmp 0x10e65ca1 */
  goto L_10e65ca1;
L_10e65c5c:;
  /* 10e65c5c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65c60 jne 0x10e65c7d */
  if (!C.zf) goto L_10e65c7d;
  /* 10e65c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65c66 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e65c68 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e65c6b push eax */
  push32((uint32_t)(EAX));
  /* 10e65c6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e65c6e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e65c71 push ecx */
  push32((uint32_t)(ECX));
  /* 10e65c72 call dword ptr [0x10e85348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85348))), 0x10e65c78u);
  /* 10e65c78 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e65c7b jmp 0x10e65c9a */
  goto L_10e65c9a;
L_10e65c7d:;
  /* 10e65c7d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e65c80 push edx */
  push32((uint32_t)(EDX));
  /* 10e65c81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e65c84 push eax */
  push32((uint32_t)(EAX));
  /* 10e65c85 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e65c87 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e65c8a push ecx */
  push32((uint32_t)(ECX));
  /* 10e65c8b push 1 */
  push32((uint32_t)(0x1u));
  /* 10e65c8d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e65c90 push edx */
  push32((uint32_t)(EDX));
  /* 10e65c91 call dword ptr [0x10e85348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85348))), 0x10e65c97u);
  /* 10e65c97 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e65c9a:;
  /* 10e65c9a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e65c9d jmp 0x10e65ca1 */
  goto L_10e65ca1;
L_10e65c9f:;
  /* 10e65c9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e65ca1:;
  /* 10e65ca1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10e65ca4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e65ca7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10e65cae pop edi */
  EDI = (pop32());
  /* 10e65caf pop esi */
  ESI = (pop32());
  /* 10e65cb0 pop ebx */
  EBX = (pop32());
  /* 10e65cb1 mov esp, ebp */
  ESP = (EBP);
  /* 10e65cb3 pop ebp */
  EBP = (pop32());
  /* 10e65cb4 ret  */
  ESPCHK(0x10e65b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10015cc0 @ 0x10e65cc0 (398 bytes, 140 insns) */
void f_10e65cc0(void) {
  FTRACE(0x10e65cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e65cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e65cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e65cc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e65cc5 push 0x10e7ec30 */
  push32((uint32_t)(0x10e7ec30u));
  /* 10e65cca push 0x10e5f7e8 */
  push32((uint32_t)(0x10e5f7e8u));
  /* 10e65ccf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10e65cd5 push eax */
  push32((uint32_t)(EAX));
  /* 10e65cd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10e65cdd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65ce0 push ebx */
  push32((uint32_t)(EBX));
  /* 10e65ce1 push esi */
  push32((uint32_t)(ESI));
  /* 10e65ce2 push edi */
  push32((uint32_t)(EDI));
  /* 10e65ce3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e65ce6 cmp dword ptr [0x10e82b10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65ced jne 0x10e65d32 */
  if (!C.zf) goto L_10e65d32;
  /* 10e65cef push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65cf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e65cf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65cf7 call dword ptr [0x10e85300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85300))), 0x10e65cfdu);
  /* 10e65cfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e65cff je 0x10e65d0d */
  if (C.zf) goto L_10e65d0d;
  /* 10e65d01 mov dword ptr [0x10e82b10], 1 */
  w32((uint32_t)(0x10e82b10), (0x1u));
  /* 10e65d0b jmp 0x10e65d32 */
  goto L_10e65d32;
L_10e65d0d:;
  /* 10e65d0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65d11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e65d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65d15 call dword ptr [0x10e85318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85318))), 0x10e65d1bu);
  /* 10e65d1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e65d1d je 0x10e65d2b */
  if (C.zf) goto L_10e65d2b;
  /* 10e65d1f mov dword ptr [0x10e82b10], 2 */
  w32((uint32_t)(0x10e82b10), (0x2u));
  /* 10e65d29 jmp 0x10e65d32 */
  goto L_10e65d32;
L_10e65d2b:;
  /* 10e65d2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e65d2d jmp 0x10e65e51 */
  goto L_10e65e51;
L_10e65d32:;
  /* 10e65d32 cmp dword ptr [0x10e82b10], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b10))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65d39 jne 0x10e65d56 */
  if (!C.zf) goto L_10e65d56;
  /* 10e65d3b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e65d3e push eax */
  push32((uint32_t)(EAX));
  /* 10e65d3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e65d42 push ecx */
  push32((uint32_t)(ECX));
  /* 10e65d43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e65d46 push edx */
  push32((uint32_t)(EDX));
  /* 10e65d47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65d4a push eax */
  push32((uint32_t)(EAX));
  /* 10e65d4b call dword ptr [0x10e85318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85318))), 0x10e65d51u);
  /* 10e65d51 jmp 0x10e65e51 */
  goto L_10e65e51;
L_10e65d56:;
  /* 10e65d56 cmp dword ptr [0x10e82b10], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65d5d jne 0x10e65e4f */
  if (!C.zf) goto L_10e65e4f;
  /* 10e65d63 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65d67 jne 0x10e65d72 */
  if (!C.zf) goto L_10e65d72;
  /* 10e65d69 mov ecx, dword ptr [0x10e829c0] */
  ECX = (r32((uint32_t)(0x10e829c0)));
  /* 10e65d6f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10e65d72:;
  /* 10e65d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65d74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65d76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e65d79 push edx */
  push32((uint32_t)(EDX));
  /* 10e65d7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65d7d push eax */
  push32((uint32_t)(EAX));
  /* 10e65d7e call dword ptr [0x10e85300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85300))), 0x10e65d84u);
  /* 10e65d84 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e65d87 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65d8b jne 0x10e65d94 */
  if (!C.zf) goto L_10e65d94;
  /* 10e65d8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e65d8f jmp 0x10e65e51 */
  goto L_10e65e51;
L_10e65d94:;
  /* 10e65d94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e65d9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e65d9e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e65da0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65da3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e65da5 call 0x10e59880 */
  push32(0x10e65daau); f_10e59880();
  /* 10e65daa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 10e65dad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e65db0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e65db3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e65db6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e65dbd jmp 0x10e65dd6 */
  goto L_10e65dd6;
  /* 10e65dbf mov eax, 1 */
  EAX = (0x1u);
  /* 10e65dc4 ret  */
  ESPCHK(0x10e65cc0u, _esp0);
  ESP += 4; return;
  /* 10e65dc5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e65dc8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10e65dcf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e65dd6:;
  /* 10e65dd6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65dda jne 0x10e65de0 */
  if (!C.zf) goto L_10e65de0;
  /* 10e65ddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e65dde jmp 0x10e65e51 */
  goto L_10e65e51;
L_10e65de0:;
  /* 10e65de0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e65de3 push edx */
  push32((uint32_t)(EDX));
  /* 10e65de4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e65de7 push eax */
  push32((uint32_t)(EAX));
  /* 10e65de8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e65deb push ecx */
  push32((uint32_t)(ECX));
  /* 10e65dec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65def push edx */
  push32((uint32_t)(EDX));
  /* 10e65df0 call dword ptr [0x10e85300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85300))), 0x10e65df6u);
  /* 10e65df6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e65df8 jne 0x10e65dfe */
  if (!C.zf) goto L_10e65dfe;
  /* 10e65dfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e65dfc jmp 0x10e65e51 */
  goto L_10e65e51;
L_10e65dfe:;
  /* 10e65dfe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65e02 jne 0x10e65e26 */
  if (!C.zf) goto L_10e65e26;
  /* 10e65e04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65e08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65e0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65e0c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e65e0e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e65e11 push eax */
  push32((uint32_t)(EAX));
  /* 10e65e12 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e65e17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e65e1a push ecx */
  push32((uint32_t)(ECX));
  /* 10e65e1b call dword ptr [0x10e85394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85394))), 0x10e65e21u);
  /* 10e65e21 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e65e24 jmp 0x10e65e4a */
  goto L_10e65e4a;
L_10e65e26:;
  /* 10e65e26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65e28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65e2a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e65e2d push edx */
  push32((uint32_t)(EDX));
  /* 10e65e2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e65e31 push eax */
  push32((uint32_t)(EAX));
  /* 10e65e32 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e65e34 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e65e37 push ecx */
  push32((uint32_t)(ECX));
  /* 10e65e38 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10e65e3d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e65e40 push edx */
  push32((uint32_t)(EDX));
  /* 10e65e41 call dword ptr [0x10e85394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85394))), 0x10e65e47u);
  /* 10e65e47 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e65e4a:;
  /* 10e65e4a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e65e4d jmp 0x10e65e51 */
  goto L_10e65e51;
L_10e65e4f:;
  /* 10e65e4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e65e51:;
  /* 10e65e51 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10e65e54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e65e57 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10e65e5e pop edi */
  EDI = (pop32());
  /* 10e65e5f pop esi */
  ESI = (pop32());
  /* 10e65e60 pop ebx */
  EBX = (pop32());
  /* 10e65e61 mov esp, ebp */
  ESP = (EBP);
  /* 10e65e63 pop ebp */
  EBP = (pop32());
  /* 10e65e64 ret  */
  ESPCHK(0x10e65cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e70 @ 0x10e65e70 (11 bytes, 6 insns) */
void f_10e65e70(void) {
  FTRACE(0x10e65e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e65e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e65e71 mov ebp, esp */
  EBP = (ESP);
  /* 10e65e73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65e76 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65e79 pop ebp */
  EBP = (pop32());
  /* 10e65e7a ret  */
  ESPCHK(0x10e65e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10015e80 @ 0x10e65e80 (147 bytes, 43 insns) */
void f_10e65e80(void) {
  FTRACE(0x10e65e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e65e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e65e81 mov ebp, esp */
  EBP = (ESP);
  /* 10e65e83 push ecx */
  push32((uint32_t)(ECX));
  /* 10e65e84 cmp dword ptr [0x10e829b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e829b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65e8b jne 0x10e65ea7 */
  if (!C.zf) goto L_10e65ea7;
  /* 10e65e8d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65e91 jl 0x10e65ea2 */
  if ((C.sf!=C.of)) goto L_10e65ea2;
  /* 10e65e93 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65e97 jg 0x10e65ea2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e65ea2;
  /* 10e65e99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65e9c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65e9f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e65ea2:;
  /* 10e65ea2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65ea5 jmp 0x10e65f0f */
  goto L_10e65f0f;
L_10e65ea7:;
  /* 10e65ea7 push 0x10e82b3c */
  push32((uint32_t)(0x10e82b3cu));
  /* 10e65eac call dword ptr [0x10e852ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e852ec))), 0x10e65eb2u);
  /* 10e65eb2 cmp dword ptr [0x10e82b2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65eb9 je 0x10e65ed9 */
  if (C.zf) goto L_10e65ed9;
  /* 10e65ebb push 0x10e82b3c */
  push32((uint32_t)(0x10e82b3cu));
  /* 10e65ec0 call dword ptr [0x10e853d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d8))), 0x10e65ec6u);
  /* 10e65ec6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e65ec8 call 0x10e5a0e0 */
  push32(0x10e65ecdu); f_10e5a0e0();
  /* 10e65ecd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65ed0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e65ed7 jmp 0x10e65ee0 */
  goto L_10e65ee0;
L_10e65ed9:;
  /* 10e65ed9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e65ee0:;
  /* 10e65ee0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e65ee4 call 0x10e65f20 */
  push32(0x10e65ee9u); f_10e65f20();
  /* 10e65ee9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65eec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e65eef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65ef3 je 0x10e65f01 */
  if (C.zf) goto L_10e65f01;
  /* 10e65ef5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10e65ef7 call 0x10e5a180 */
  push32(0x10e65efcu); f_10e5a180();
  /* 10e65efc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65eff jmp 0x10e65f0c */
  goto L_10e65f0c;
L_10e65f01:;
  /* 10e65f01 push 0x10e82b3c */
  push32((uint32_t)(0x10e82b3cu));
  /* 10e65f06 call dword ptr [0x10e853d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e853d8))), 0x10e65f0cu);
L_10e65f0c:;
  /* 10e65f0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10e65f0f:;
  /* 10e65f0f mov esp, ebp */
  ESP = (EBP);
  /* 10e65f11 pop ebp */
  EBP = (pop32());
  /* 10e65f12 ret  */
  ESPCHK(0x10e65e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f20 @ 0x10e65f20 (299 bytes, 91 insns) */
void f_10e65f20(void) {
  FTRACE(0x10e65f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e65f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10e65f21 mov ebp, esp */
  EBP = (ESP);
  /* 10e65f23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e65f26 cmp dword ptr [0x10e829b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e829b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65f2d jne 0x10e65f4c */
  if (!C.zf) goto L_10e65f4c;
  /* 10e65f2f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65f33 jl 0x10e65f44 */
  if ((C.sf!=C.of)) goto L_10e65f44;
  /* 10e65f35 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65f39 jg 0x10e65f44 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e65f44;
  /* 10e65f3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65f3e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65f41 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e65f44:;
  /* 10e65f44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65f47 jmp 0x10e66047 */
  goto L_10e66047;
L_10e65f4c:;
  /* 10e65f4c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65f53 jge 0x10e65f93 */
  if ((C.sf==C.of)) goto L_10e65f93;
  /* 10e65f55 cmp dword ptr [0x10e80eb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e80eb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65f5c jle 0x10e65f71 */
  if ((C.zf||C.sf!=C.of)) goto L_10e65f71;
  /* 10e65f5e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e65f60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65f63 push ecx */
  push32((uint32_t)(ECX));
  /* 10e65f64 call 0x10e5c6f0 */
  push32(0x10e65f69u); f_10e5c6f0();
  /* 10e65f69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e65f6c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e65f6f jmp 0x10e65f85 */
  goto L_10e65f85;
L_10e65f71:;
  /* 10e65f71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65f74 mov eax, dword ptr [0x10e80ca8] */
  EAX = (r32((uint32_t)(0x10e80ca8)));
  /* 10e65f79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e65f7b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10e65f7f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e65f82 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e65f85:;
  /* 10e65f85 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e65f89 jne 0x10e65f93 */
  if (!C.zf) goto L_10e65f93;
  /* 10e65f8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65f8e jmp 0x10e66047 */
  goto L_10e66047;
L_10e65f93:;
  /* 10e65f93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65f96 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10e65f99 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e65f9f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e65fa5 mov eax, dword ptr [0x10e80ca8] */
  EAX = (r32((uint32_t)(0x10e80ca8)));
  /* 10e65faa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e65fac mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10e65fb0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10e65fb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e65fb8 je 0x10e65fdc */
  if (C.zf) goto L_10e65fdc;
  /* 10e65fba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e65fbd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10e65fc0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e65fc6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 10e65fc9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e65fcc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 10e65fcf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10e65fd3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10e65fda jmp 0x10e65fed */
  goto L_10e65fed;
L_10e65fdc:;
  /* 10e65fdc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10e65fdf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10e65fe2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10e65fe6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10e65fed:;
  /* 10e65fed push 1 */
  push32((uint32_t)(0x1u));
  /* 10e65fef push 0 */
  push32((uint32_t)(0x0u));
  /* 10e65ff1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e65ff3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10e65ff6 push edx */
  push32((uint32_t)(EDX));
  /* 10e65ff7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e65ffa push eax */
  push32((uint32_t)(EAX));
  /* 10e65ffb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10e65ffe push ecx */
  push32((uint32_t)(ECX));
  /* 10e65fff push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10e66004 mov edx, dword ptr [0x10e829b0] */
  EDX = (r32((uint32_t)(0x10e829b0)));
  /* 10e6600a push edx */
  push32((uint32_t)(EDX));
  /* 10e6600b call 0x10e5ead0 */
  push32(0x10e66010u); f_10e5ead0();
  /* 10e66010 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66013 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e66016 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6601a jne 0x10e66021 */
  if (!C.zf) goto L_10e66021;
  /* 10e6601c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6601f jmp 0x10e66047 */
  goto L_10e66047;
L_10e66021:;
  /* 10e66021 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66025 jne 0x10e66031 */
  if (!C.zf) goto L_10e66031;
  /* 10e66027 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6602a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e6602f jmp 0x10e66047 */
  goto L_10e66047;
L_10e66031:;
  /* 10e66031 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e66034 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e66039 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 10e6603c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e66042 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10e66045 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10e66047:;
  /* 10e66047 mov esp, ebp */
  ESP = (EBP);
  /* 10e66049 pop ebp */
  EBP = (pop32());
  /* 10e6604a ret  */
  ESPCHK(0x10e65f20u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10e66050 (52 bytes, 19 insns) */
void f_10e66050(void) {
  FTRACE(0x10e66050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e66050 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e66054 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e66058 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6605a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e6605e jne 0x10e66069 */
  if (!C.zf) goto L_10e66069;
  /* 10e66060 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e66064 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e66066 ret 0x10 */
  ESPCHK(0x10e66050u, _esp0);
  ESP += 20; return;
L_10e66069:;
  /* 10e66069 push ebx */
  push32((uint32_t)(EBX));
  /* 10e6606a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e6606c mov ebx, eax */
  EBX = (EAX);
  /* 10e6606e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e66072 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e66076 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66078 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e6607c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10e6607e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66080 pop ebx */
  EBX = (pop32());
  /* 10e66081 ret 0x10 */
  ESPCHK(0x10e66050u, _esp0);
  ESP += 20; return;
}

/* FUN_10016090 @ 0x10e66090 (46 bytes, 18 insns) */
void f_10e66090(void) {
  FTRACE(0x10e66090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e66090 push ebp */
  push32((uint32_t)(EBP));
  /* 10e66091 mov ebp, esp */
  EBP = (ESP);
  /* 10e66093 push ecx */
  push32((uint32_t)(ECX));
  /* 10e66094 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e66096 call 0x10e5a0e0 */
  push32(0x10e6609bu); f_10e5a0e0();
  /* 10e6609b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6609e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e660a1 push eax */
  push32((uint32_t)(EAX));
  /* 10e660a2 call 0x10e660c0 */
  push32(0x10e660a7u); f_10e660c0();
  /* 10e660a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e660aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e660ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 10e660af call 0x10e5a180 */
  push32(0x10e660b4u); f_10e5a180();
  /* 10e660b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e660b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e660ba mov esp, ebp */
  ESP = (EBP);
  /* 10e660bc pop ebp */
  EBP = (pop32());
  /* 10e660bd ret  */
  ESPCHK(0x10e66090u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x10e660c0 (198 bytes, 69 insns) */
void f_10e660c0(void) {
  FTRACE(0x10e660c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e660c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e660c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e660c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e660c6 mov eax, dword ptr [0x10e827d0] */
  EAX = (r32((uint32_t)(0x10e827d0)));
  /* 10e660cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e660ce cmp dword ptr [0x10e842c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e842c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e660d5 jne 0x10e660de */
  if (!C.zf) goto L_10e660de;
  /* 10e660d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e660d9 jmp 0x10e66182 */
  goto L_10e66182;
L_10e660de:;
  /* 10e660de cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e660e2 jne 0x10e66106 */
  if (!C.zf) goto L_10e66106;
  /* 10e660e4 cmp dword ptr [0x10e827d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e827d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e660eb je 0x10e66106 */
  if (C.zf) goto L_10e66106;
  /* 10e660ed call 0x10e661e0 */
  push32(0x10e660f2u); f_10e661e0();
  /* 10e660f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e660f4 je 0x10e660fd */
  if (C.zf) goto L_10e660fd;
  /* 10e660f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e660f8 jmp 0x10e66182 */
  goto L_10e66182;
L_10e660fd:;
  /* 10e660fd mov ecx, dword ptr [0x10e827d0] */
  ECX = (r32((uint32_t)(0x10e827d0)));
  /* 10e66103 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e66106:;
  /* 10e66106 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6610a je 0x10e66180 */
  if (C.zf) goto L_10e66180;
  /* 10e6610c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66110 je 0x10e66180 */
  if (C.zf) goto L_10e66180;
  /* 10e66112 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66115 push edx */
  push32((uint32_t)(EDX));
  /* 10e66116 call 0x10e59510 */
  push32(0x10e6611bu); f_10e59510();
  /* 10e6611b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6611e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e66121:;
  /* 10e66121 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66124 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66127 je 0x10e66180 */
  if (C.zf) goto L_10e66180;
  /* 10e66129 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e6612c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e6612e push edx */
  push32((uint32_t)(EDX));
  /* 10e6612f call 0x10e59510 */
  push32(0x10e66134u); f_10e59510();
  /* 10e66134 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66137 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6613a jbe 0x10e66175 */
  if ((C.cf||C.zf)) goto L_10e66175;
  /* 10e6613c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e6613f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e66141 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e66144 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10e66148 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6614b jne 0x10e66175 */
  if (!C.zf) goto L_10e66175;
  /* 10e6614d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e66150 push ecx */
  push32((uint32_t)(ECX));
  /* 10e66151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66154 push edx */
  push32((uint32_t)(EDX));
  /* 10e66155 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66158 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e6615a push ecx */
  push32((uint32_t)(ECX));
  /* 10e6615b call 0x10e66190 */
  push32(0x10e66160u); f_10e66190();
  /* 10e66160 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e66165 jne 0x10e66175 */
  if (!C.zf) goto L_10e66175;
  /* 10e66167 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e6616a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e6616c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6616f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 10e66173 jmp 0x10e66182 */
  goto L_10e66182;
L_10e66175:;
  /* 10e66175 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66178 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6617b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e6617e jmp 0x10e66121 */
  goto L_10e66121;
L_10e66180:;
  /* 10e66180 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e66182:;
  /* 10e66182 mov esp, ebp */
  ESP = (EBP);
  /* 10e66184 pop ebp */
  EBP = (pop32());
  /* 10e66185 ret  */
  ESPCHK(0x10e660c0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x10e66190 (79 bytes, 32 insns) */
void f_10e66190(void) {
  FTRACE(0x10e66190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e66190 push ebp */
  push32((uint32_t)(EBP));
  /* 10e66191 mov ebp, esp */
  EBP = (ESP);
  /* 10e66193 push ecx */
  push32((uint32_t)(ECX));
  /* 10e66194 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66198 jne 0x10e6619e */
  if (!C.zf) goto L_10e6619e;
  /* 10e6619a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6619c jmp 0x10e661db */
  goto L_10e661db;
L_10e6619e:;
  /* 10e6619e mov eax, dword ptr [0x10e83e84] */
  EAX = (r32((uint32_t)(0x10e83e84)));
  /* 10e661a3 push eax */
  push32((uint32_t)(EAX));
  /* 10e661a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e661a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e661a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e661ab push edx */
  push32((uint32_t)(EDX));
  /* 10e661ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e661af push eax */
  push32((uint32_t)(EAX));
  /* 10e661b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e661b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e661b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e661b6 mov edx, dword ptr [0x10e84124] */
  EDX = (r32((uint32_t)(0x10e84124)));
  /* 10e661bc push edx */
  push32((uint32_t)(EDX));
  /* 10e661bd call 0x10e66290 */
  push32(0x10e661c2u); f_10e66290();
  /* 10e661c2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e661c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e661c8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e661cc jne 0x10e661d5 */
  if (!C.zf) goto L_10e661d5;
  /* 10e661ce mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10e661d3 jmp 0x10e661db */
  goto L_10e661db;
L_10e661d5:;
  /* 10e661d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e661d8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10e661db:;
  /* 10e661db mov esp, ebp */
  ESP = (EBP);
  /* 10e661dd pop ebp */
  EBP = (pop32());
  /* 10e661de ret  */
  ESPCHK(0x10e66190u, _esp0);
  ESP += 4; return;
}

/* FUN_100161e0 @ 0x10e661e0 (174 bytes, 66 insns) */
void f_10e661e0(void) {
  FTRACE(0x10e661e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e661e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e661e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e661e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e661e6 mov eax, dword ptr [0x10e827d8] */
  EAX = (r32((uint32_t)(0x10e827d8)));
  /* 10e661eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e661ee:;
  /* 10e661ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e661f1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e661f4 je 0x10e66288 */
  if (C.zf) goto L_10e66288;
  /* 10e661fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e661fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10e661fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10e66200 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e66202 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e66204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e66207 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e66209 push eax */
  push32((uint32_t)(EAX));
  /* 10e6620a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e6620c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e6620e call dword ptr [0x10e85394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85394))), 0x10e66214u);
  /* 10e66214 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e66217 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6621b jne 0x10e66222 */
  if (!C.zf) goto L_10e66222;
  /* 10e6621d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e66220 jmp 0x10e6628a */
  goto L_10e6628a;
L_10e66222:;
  /* 10e66222 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10e66224 push 0x10e7ec3c */
  push32((uint32_t)(0x10e7ec3cu));
  /* 10e66229 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6622b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6622e push ecx */
  push32((uint32_t)(ECX));
  /* 10e6622f call 0x10e566e0 */
  push32(0x10e66234u); f_10e566e0();
  /* 10e66234 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66237 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e6623a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6623e jne 0x10e66245 */
  if (!C.zf) goto L_10e66245;
  /* 10e66240 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e66243 jmp 0x10e6628a */
  goto L_10e6628a;
L_10e66245:;
  /* 10e66245 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e66247 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e66249 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6624c push edx */
  push32((uint32_t)(EDX));
  /* 10e6624d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66250 push eax */
  push32((uint32_t)(EAX));
  /* 10e66251 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e66253 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e66256 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e66258 push edx */
  push32((uint32_t)(EDX));
  /* 10e66259 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e6625b push 1 */
  push32((uint32_t)(0x1u));
  /* 10e6625d call dword ptr [0x10e85394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85394))), 0x10e66263u);
  /* 10e66263 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e66265 jne 0x10e6626c */
  if (!C.zf) goto L_10e6626c;
  /* 10e66267 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e6626a jmp 0x10e6628a */
  goto L_10e6628a;
L_10e6626c:;
  /* 10e6626c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e6626e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66271 push eax */
  push32((uint32_t)(EAX));
  /* 10e66272 call 0x10e666e0 */
  push32(0x10e66277u); f_10e666e0();
  /* 10e66277 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6627a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6627d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66280 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e66283 jmp 0x10e661ee */
  goto L_10e661ee;
L_10e66288:;
  /* 10e66288 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e6628a:;
  /* 10e6628a mov esp, ebp */
  ESP = (EBP);
  /* 10e6628c pop ebp */
  EBP = (pop32());
  /* 10e6628d ret  */
  ESPCHK(0x10e661e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016290 @ 0x10e66290 (970 bytes, 340 insns) */
void f_10e66290(void) {
  FTRACE(0x10e66290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e66290 push ebp */
  push32((uint32_t)(EBP));
  /* 10e66291 mov ebp, esp */
  EBP = (ESP);
  /* 10e66293 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e66295 push 0x10e7ec90 */
  push32((uint32_t)(0x10e7ec90u));
  /* 10e6629a push 0x10e5f7e8 */
  push32((uint32_t)(0x10e5f7e8u));
  /* 10e6629f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10e662a5 push eax */
  push32((uint32_t)(EAX));
  /* 10e662a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10e662ad add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e662b0 push ebx */
  push32((uint32_t)(EBX));
  /* 10e662b1 push esi */
  push32((uint32_t)(ESI));
  /* 10e662b2 push edi */
  push32((uint32_t)(EDI));
  /* 10e662b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e662b6 cmp dword ptr [0x10e82b14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e662bd jne 0x10e66316 */
  if (!C.zf) goto L_10e66316;
  /* 10e662bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10e662c1 push 0x10e7e2ec */
  push32((uint32_t)(0x10e7e2ecu));
  /* 10e662c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e662c8 push 0x10e7e2ec */
  push32((uint32_t)(0x10e7e2ecu));
  /* 10e662cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e662cf push 0 */
  push32((uint32_t)(0x0u));
  /* 10e662d1 call dword ptr [0x10e852f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e852f8))), 0x10e662d7u);
  /* 10e662d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e662d9 je 0x10e662e7 */
  if (C.zf) goto L_10e662e7;
  /* 10e662db mov dword ptr [0x10e82b14], 1 */
  w32((uint32_t)(0x10e82b14), (0x1u));
  /* 10e662e5 jmp 0x10e66316 */
  goto L_10e66316;
L_10e662e7:;
  /* 10e662e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e662e9 push 0x10e7e2e8 */
  push32((uint32_t)(0x10e7e2e8u));
  /* 10e662ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10e662f0 push 0x10e7e2e8 */
  push32((uint32_t)(0x10e7e2e8u));
  /* 10e662f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e662f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e662f9 call dword ptr [0x10e852fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e852fc))), 0x10e662ffu);
  /* 10e662ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e66301 je 0x10e6630f */
  if (C.zf) goto L_10e6630f;
  /* 10e66303 mov dword ptr [0x10e82b14], 2 */
  w32((uint32_t)(0x10e82b14), (0x2u));
  /* 10e6630d jmp 0x10e66316 */
  goto L_10e66316;
L_10e6630f:;
  /* 10e6630f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e66311 jmp 0x10e66674 */
  goto L_10e66674;
L_10e66316:;
  /* 10e66316 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6631a jle 0x10e6632f */
  if ((C.zf||C.sf!=C.of)) goto L_10e6632f;
  /* 10e6631c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e6631f push eax */
  push32((uint32_t)(EAX));
  /* 10e66320 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e66323 push ecx */
  push32((uint32_t)(ECX));
  /* 10e66324 call 0x10e66690 */
  push32(0x10e66329u); f_10e66690();
  /* 10e66329 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6632c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10e6632f:;
  /* 10e6632f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66333 jle 0x10e66348 */
  if ((C.zf||C.sf!=C.of)) goto L_10e66348;
  /* 10e66335 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e66338 push edx */
  push32((uint32_t)(EDX));
  /* 10e66339 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e6633c push eax */
  push32((uint32_t)(EAX));
  /* 10e6633d call 0x10e66690 */
  push32(0x10e66342u); f_10e66690();
  /* 10e66342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66345 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10e66348:;
  /* 10e66348 cmp dword ptr [0x10e82b14], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6634f jne 0x10e66374 */
  if (!C.zf) goto L_10e66374;
  /* 10e66351 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e66354 push ecx */
  push32((uint32_t)(ECX));
  /* 10e66355 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e66358 push edx */
  push32((uint32_t)(EDX));
  /* 10e66359 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e6635c push eax */
  push32((uint32_t)(EAX));
  /* 10e6635d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e66360 push ecx */
  push32((uint32_t)(ECX));
  /* 10e66361 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e66364 push edx */
  push32((uint32_t)(EDX));
  /* 10e66365 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66368 push eax */
  push32((uint32_t)(EAX));
  /* 10e66369 call dword ptr [0x10e852fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e852fc))), 0x10e6636fu);
  /* 10e6636f jmp 0x10e66674 */
  goto L_10e66674;
L_10e66374:;
  /* 10e66374 cmp dword ptr [0x10e82b14], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10e82b14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6637b jne 0x10e66672 */
  if (!C.zf) goto L_10e66672;
  /* 10e66381 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66385 jne 0x10e66390 */
  if (!C.zf) goto L_10e66390;
  /* 10e66387 mov ecx, dword ptr [0x10e829c0] */
  ECX = (r32((uint32_t)(0x10e829c0)));
  /* 10e6638d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10e66390:;
  /* 10e66390 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66394 je 0x10e663a0 */
  if (C.zf) goto L_10e663a0;
  /* 10e66396 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6639a jne 0x10e6651c */
  if (!C.zf) goto L_10e6651c;
L_10e663a0:;
  /* 10e663a0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e663a3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e663a6 jne 0x10e663b2 */
  if (!C.zf) goto L_10e663b2;
  /* 10e663a8 mov eax, 2 */
  EAX = (0x2u);
  /* 10e663ad jmp 0x10e66674 */
  goto L_10e66674;
L_10e663b2:;
  /* 10e663b2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e663b6 jle 0x10e663c2 */
  if ((C.zf||C.sf!=C.of)) goto L_10e663c2;
  /* 10e663b8 mov eax, 1 */
  EAX = (0x1u);
  /* 10e663bd jmp 0x10e66674 */
  goto L_10e66674;
L_10e663c2:;
  /* 10e663c2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e663c6 jle 0x10e663d2 */
  if ((C.zf||C.sf!=C.of)) goto L_10e663d2;
  /* 10e663c8 mov eax, 3 */
  EAX = (0x3u);
  /* 10e663cd jmp 0x10e66674 */
  goto L_10e66674;
L_10e663d2:;
  /* 10e663d2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10e663d5 push eax */
  push32((uint32_t)(EAX));
  /* 10e663d6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e663d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10e663da call dword ptr [0x10e85354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85354))), 0x10e663e0u);
  /* 10e663e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e663e2 jne 0x10e663eb */
  if (!C.zf) goto L_10e663eb;
  /* 10e663e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e663e6 jmp 0x10e66674 */
  goto L_10e66674;
L_10e663eb:;
  /* 10e663eb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e663ef jne 0x10e663f7 */
  if (!C.zf) goto L_10e663f7;
  /* 10e663f1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e663f5 je 0x10e66424 */
  if (C.zf) goto L_10e66424;
L_10e663f7:;
  /* 10e663f7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e663fb jne 0x10e66403 */
  if (!C.zf) goto L_10e66403;
  /* 10e663fd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66401 je 0x10e66424 */
  if (C.zf) goto L_10e66424;
L_10e66403:;
  /* 10e66403 push 0x10e7ec50 */
  push32((uint32_t)(0x10e7ec50u));
  /* 10e66408 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e6640a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10e6640f push 0x10e7ec48 */
  push32((uint32_t)(0x10e7ec48u));
  /* 10e66414 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e66416 call 0x10e557a0 */
  push32(0x10e6641bu); f_10e557a0();
  /* 10e6641b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6641e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66421 jne 0x10e66424 */
  if (!C.zf) goto L_10e66424;
  /* 10e66423 int3  */
  x86_unimpl("int3 @ 0x10e66423");
L_10e66424:;
  /* 10e66424 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e66426 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e66428 jne 0x10e663eb */
  if (!C.zf) goto L_10e663eb;
  /* 10e6642a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6642e jle 0x10e664a3 */
  if ((C.zf||C.sf!=C.of)) goto L_10e664a3;
  /* 10e66430 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66434 jae 0x10e66440 */
  if (!C.cf) goto L_10e66440;
  /* 10e66436 mov eax, 3 */
  EAX = (0x3u);
  /* 10e6643b jmp 0x10e66674 */
  goto L_10e66674;
L_10e66440:;
  /* 10e66440 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10e66443 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10e66446 jmp 0x10e66451 */
  goto L_10e66451;
L_10e66448:;
  /* 10e66448 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e6644b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6644e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10e66451:;
  /* 10e66451 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e66454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e66456 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e66458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e6645a je 0x10e66499 */
  if (C.zf) goto L_10e66499;
  /* 10e6645c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e6645f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e66461 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10e66464 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e66466 je 0x10e66499 */
  if (C.zf) goto L_10e66499;
  /* 10e66468 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6646b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e6646d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e6646f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e66472 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e66474 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e66476 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66478 jl 0x10e66497 */
  if ((C.sf!=C.of)) goto L_10e66497;
  /* 10e6647a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e6647d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e6647f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e66481 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e66484 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e66486 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10e66489 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6648b jg 0x10e66497 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e66497;
  /* 10e6648d mov eax, 2 */
  EAX = (0x2u);
  /* 10e66492 jmp 0x10e66674 */
  goto L_10e66674;
L_10e66497:;
  /* 10e66497 jmp 0x10e66448 */
  goto L_10e66448;
L_10e66499:;
  /* 10e66499 mov eax, 3 */
  EAX = (0x3u);
  /* 10e6649e jmp 0x10e66674 */
  goto L_10e66674;
L_10e664a3:;
  /* 10e664a3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e664a7 jle 0x10e6651c */
  if ((C.zf||C.sf!=C.of)) goto L_10e6651c;
  /* 10e664a9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e664ad jae 0x10e664b9 */
  if (!C.cf) goto L_10e664b9;
  /* 10e664af mov eax, 1 */
  EAX = (0x1u);
  /* 10e664b4 jmp 0x10e66674 */
  goto L_10e66674;
L_10e664b9:;
  /* 10e664b9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10e664bc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10e664bf jmp 0x10e664ca */
  goto L_10e664ca;
L_10e664c1:;
  /* 10e664c1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e664c4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e664c7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10e664ca:;
  /* 10e664ca mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e664cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e664cf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e664d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e664d3 je 0x10e66512 */
  if (C.zf) goto L_10e66512;
  /* 10e664d5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e664d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e664da mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10e664dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e664df je 0x10e66512 */
  if (C.zf) goto L_10e66512;
  /* 10e664e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e664e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e664e6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e664e8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e664eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e664ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e664ef cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e664f1 jl 0x10e66510 */
  if ((C.sf!=C.of)) goto L_10e66510;
  /* 10e664f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e664f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e664f8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e664fa mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10e664fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e664ff mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10e66502 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66504 jg 0x10e66510 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e66510;
  /* 10e66506 mov eax, 2 */
  EAX = (0x2u);
  /* 10e6650b jmp 0x10e66674 */
  goto L_10e66674;
L_10e66510:;
  /* 10e66510 jmp 0x10e664c1 */
  goto L_10e664c1;
L_10e66512:;
  /* 10e66512 mov eax, 1 */
  EAX = (0x1u);
  /* 10e66517 jmp 0x10e66674 */
  goto L_10e66674;
L_10e6651c:;
  /* 10e6651c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e6651e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e66520 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e66523 push ecx */
  push32((uint32_t)(ECX));
  /* 10e66524 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e66527 push edx */
  push32((uint32_t)(EDX));
  /* 10e66528 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e6652a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e6652d push eax */
  push32((uint32_t)(EAX));
  /* 10e6652e call dword ptr [0x10e85348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85348))), 0x10e66534u);
  /* 10e66534 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10e66537 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6653b jne 0x10e66544 */
  if (!C.zf) goto L_10e66544;
  /* 10e6653d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6653f jmp 0x10e66674 */
  goto L_10e66674;
L_10e66544:;
  /* 10e66544 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e6654b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e6654e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e66550 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66553 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e66555 call 0x10e59880 */
  push32(0x10e6655au); f_10e59880();
  /* 10e6655a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10e6655d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e66560 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10e66563 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10e66566 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e6656d jmp 0x10e66586 */
  goto L_10e66586;
  /* 10e6656f mov eax, 1 */
  EAX = (0x1u);
  /* 10e66574 ret  */
  ESPCHK(0x10e66290u, _esp0);
  ESP += 4; return;
  /* 10e66575 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e66578 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10e6657f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e66586:;
  /* 10e66586 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6658a jne 0x10e66593 */
  if (!C.zf) goto L_10e66593;
  /* 10e6658c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6658e jmp 0x10e66674 */
  goto L_10e66674;
L_10e66593:;
  /* 10e66593 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e66596 push edx */
  push32((uint32_t)(EDX));
  /* 10e66597 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e6659a push eax */
  push32((uint32_t)(EAX));
  /* 10e6659b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e6659e push ecx */
  push32((uint32_t)(ECX));
  /* 10e6659f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e665a2 push edx */
  push32((uint32_t)(EDX));
  /* 10e665a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e665a5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e665a8 push eax */
  push32((uint32_t)(EAX));
  /* 10e665a9 call dword ptr [0x10e85348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85348))), 0x10e665afu);
  /* 10e665af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e665b1 jne 0x10e665ba */
  if (!C.zf) goto L_10e665ba;
  /* 10e665b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e665b5 jmp 0x10e66674 */
  goto L_10e66674;
L_10e665ba:;
  /* 10e665ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10e665bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10e665be mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e665c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e665c2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e665c5 push edx */
  push32((uint32_t)(EDX));
  /* 10e665c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e665c8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e665cb push eax */
  push32((uint32_t)(EAX));
  /* 10e665cc call dword ptr [0x10e85348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85348))), 0x10e665d2u);
  /* 10e665d2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e665d5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e665d9 jne 0x10e665e2 */
  if (!C.zf) goto L_10e665e2;
  /* 10e665db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e665dd jmp 0x10e66674 */
  goto L_10e66674;
L_10e665e2:;
  /* 10e665e2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e665e9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e665ec shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e665ee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e665f1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10e665f3 call 0x10e59880 */
  push32(0x10e665f8u); f_10e59880();
  /* 10e665f8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10e665fb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10e665fe mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10e66601 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10e66604 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10e6660b jmp 0x10e66624 */
  goto L_10e66624;
  /* 10e6660d mov eax, 1 */
  EAX = (0x1u);
  /* 10e66612 ret  */
  ESPCHK(0x10e66290u, _esp0);
  ESP += 4; return;
  /* 10e66613 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10e66616 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10e6661d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10e66624:;
  /* 10e66624 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66628 jne 0x10e6662e */
  if (!C.zf) goto L_10e6662e;
  /* 10e6662a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6662c jmp 0x10e66674 */
  goto L_10e66674;
L_10e6662e:;
  /* 10e6662e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e66631 push edx */
  push32((uint32_t)(EDX));
  /* 10e66632 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e66635 push eax */
  push32((uint32_t)(EAX));
  /* 10e66636 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10e66639 push ecx */
  push32((uint32_t)(ECX));
  /* 10e6663a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e6663d push edx */
  push32((uint32_t)(EDX));
  /* 10e6663e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e66640 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10e66643 push eax */
  push32((uint32_t)(EAX));
  /* 10e66644 call dword ptr [0x10e85348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e85348))), 0x10e6664au);
  /* 10e6664a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e6664c jne 0x10e66652 */
  if (!C.zf) goto L_10e66652;
  /* 10e6664e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e66650 jmp 0x10e66674 */
  goto L_10e66674;
L_10e66652:;
  /* 10e66652 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e66655 push ecx */
  push32((uint32_t)(ECX));
  /* 10e66656 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e66659 push edx */
  push32((uint32_t)(EDX));
  /* 10e6665a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10e6665d push eax */
  push32((uint32_t)(EAX));
  /* 10e6665e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e66661 push ecx */
  push32((uint32_t)(ECX));
  /* 10e66662 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e66665 push edx */
  push32((uint32_t)(EDX));
  /* 10e66666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66669 push eax */
  push32((uint32_t)(EAX));
  /* 10e6666a call dword ptr [0x10e852f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e852f8))), 0x10e66670u);
  /* 10e66670 jmp 0x10e66674 */
  goto L_10e66674;
L_10e66672:;
  /* 10e66672 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e66674:;
  /* 10e66674 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10e66677 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e6667a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10e66681 pop edi */
  EDI = (pop32());
  /* 10e66682 pop esi */
  ESI = (pop32());
  /* 10e66683 pop ebx */
  EBX = (pop32());
  /* 10e66684 mov esp, ebp */
  ESP = (EBP);
  /* 10e66686 pop ebp */
  EBP = (pop32());
  /* 10e66687 ret  */
  ESPCHK(0x10e66290u, _esp0);
  ESP += 4; return;
}

/* FUN_10016690 @ 0x10e66690 (80 bytes, 32 insns) */
void f_10e66690(void) {
  FTRACE(0x10e66690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e66690 push ebp */
  push32((uint32_t)(EBP));
  /* 10e66691 mov ebp, esp */
  EBP = (ESP);
  /* 10e66693 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e66696 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e66699 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e6669c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6669f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e666a2:;
  /* 10e666a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e666a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e666a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e666ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e666ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e666b0 je 0x10e666c7 */
  if (C.zf) goto L_10e666c7;
  /* 10e666b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e666b5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e666b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e666ba je 0x10e666c7 */
  if (C.zf) goto L_10e666c7;
  /* 10e666bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e666bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e666c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e666c5 jmp 0x10e666a2 */
  goto L_10e666a2;
L_10e666c7:;
  /* 10e666c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e666ca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e666cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e666cf jne 0x10e666d9 */
  if (!C.zf) goto L_10e666d9;
  /* 10e666d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e666d4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e666d7 jmp 0x10e666dc */
  goto L_10e666dc;
L_10e666d9:;
  /* 10e666d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10e666dc:;
  /* 10e666dc mov esp, ebp */
  ESP = (EBP);
  /* 10e666de pop ebp */
  EBP = (pop32());
  /* 10e666df ret  */
  ESPCHK(0x10e66690u, _esp0);
  ESP += 4; return;
}

/* FUN_100166e0 @ 0x10e666e0 (736 bytes, 224 insns) */
void f_10e666e0(void) {
  FTRACE(0x10e666e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e666e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e666e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e666e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e666e6 push esi */
  push32((uint32_t)(ESI));
  /* 10e666e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e666eb je 0x10e6670c */
  if (C.zf) goto L_10e6670c;
  /* 10e666ed push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10e666ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e666f2 push eax */
  push32((uint32_t)(EAX));
  /* 10e666f3 call 0x10e66b30 */
  push32(0x10e666f8u); f_10e66b30();
  /* 10e666f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e666fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e666fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66702 je 0x10e6670c */
  if (C.zf) goto L_10e6670c;
  /* 10e66704 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66707 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6670a jne 0x10e66714 */
  if (!C.zf) goto L_10e66714;
L_10e6670c:;
  /* 10e6670c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e6670f jmp 0x10e669bb */
  goto L_10e669bb;
L_10e66714:;
  /* 10e66714 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e66717 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e6671b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e6671d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e6671f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10e66720 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e66723 mov ecx, dword ptr [0x10e827d0] */
  ECX = (r32((uint32_t)(0x10e827d0)));
  /* 10e66729 cmp ecx, dword ptr [0x10e827d4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10e827d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6672f jne 0x10e66745 */
  if (!C.zf) goto L_10e66745;
  /* 10e66731 mov edx, dword ptr [0x10e827d0] */
  EDX = (r32((uint32_t)(0x10e827d0)));
  /* 10e66737 push edx */
  push32((uint32_t)(EDX));
  /* 10e66738 call 0x10e66a40 */
  push32(0x10e6673du); f_10e66a40();
  /* 10e6673d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66740 mov dword ptr [0x10e827d0], eax */
  w32((uint32_t)(0x10e827d0), (EAX));
L_10e66745:;
  /* 10e66745 cmp dword ptr [0x10e827d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e827d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6674c jne 0x10e66805 */
  if (!C.zf) goto L_10e66805;
  /* 10e66752 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66756 je 0x10e66777 */
  if (C.zf) goto L_10e66777;
  /* 10e66758 cmp dword ptr [0x10e827d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e827d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6675f je 0x10e66777 */
  if (C.zf) goto L_10e66777;
  /* 10e66761 call 0x10e661e0 */
  push32(0x10e66766u); f_10e661e0();
  /* 10e66766 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e66768 je 0x10e66772 */
  if (C.zf) goto L_10e66772;
  /* 10e6676a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e6676d jmp 0x10e669bb */
  goto L_10e669bb;
L_10e66772:;
  /* 10e66772 jmp 0x10e66805 */
  goto L_10e66805;
L_10e66777:;
  /* 10e66777 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6677b je 0x10e66784 */
  if (C.zf) goto L_10e66784;
  /* 10e6677d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6677f jmp 0x10e669bb */
  goto L_10e669bb;
L_10e66784:;
  /* 10e66784 cmp dword ptr [0x10e827d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e827d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6678b jne 0x10e667c4 */
  if (!C.zf) goto L_10e667c4;
  /* 10e6678d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10e66792 push 0x10e7eca8 */
  push32((uint32_t)(0x10e7eca8u));
  /* 10e66797 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e66799 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e6679b call 0x10e566e0 */
  push32(0x10e667a0u); f_10e566e0();
  /* 10e667a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e667a3 mov dword ptr [0x10e827d0], eax */
  w32((uint32_t)(0x10e827d0), (EAX));
  /* 10e667a8 cmp dword ptr [0x10e827d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e827d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e667af jne 0x10e667b9 */
  if (!C.zf) goto L_10e667b9;
  /* 10e667b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e667b4 jmp 0x10e669bb */
  goto L_10e669bb;
L_10e667b9:;
  /* 10e667b9 mov eax, dword ptr [0x10e827d0] */
  EAX = (r32((uint32_t)(0x10e827d0)));
  /* 10e667be mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10e667c4:;
  /* 10e667c4 cmp dword ptr [0x10e827d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e827d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e667cb jne 0x10e66805 */
  if (!C.zf) goto L_10e66805;
  /* 10e667cd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10e667d2 push 0x10e7eca8 */
  push32((uint32_t)(0x10e7eca8u));
  /* 10e667d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e667d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e667db call 0x10e566e0 */
  push32(0x10e667e0u); f_10e566e0();
  /* 10e667e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e667e3 mov dword ptr [0x10e827d8], eax */
  w32((uint32_t)(0x10e827d8), (EAX));
  /* 10e667e8 cmp dword ptr [0x10e827d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e827d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e667ef jne 0x10e667f9 */
  if (!C.zf) goto L_10e667f9;
  /* 10e667f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e667f4 jmp 0x10e669bb */
  goto L_10e669bb;
L_10e667f9:;
  /* 10e667f9 mov ecx, dword ptr [0x10e827d8] */
  ECX = (r32((uint32_t)(0x10e827d8)));
  /* 10e667ff mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10e66805:;
  /* 10e66805 mov edx, dword ptr [0x10e827d0] */
  EDX = (r32((uint32_t)(0x10e827d0)));
  /* 10e6680b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e6680e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e66811 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e66814 push eax */
  push32((uint32_t)(EAX));
  /* 10e66815 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66818 push ecx */
  push32((uint32_t)(ECX));
  /* 10e66819 call 0x10e669c0 */
  push32(0x10e6681eu); f_10e669c0();
  /* 10e6681e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66821 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e66824 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66828 jl 0x10e668c1 */
  if ((C.sf!=C.of)) goto L_10e668c1;
  /* 10e6682e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e66831 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66834 je 0x10e668c1 */
  if (C.zf) goto L_10e668c1;
  /* 10e6683a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e6683e je 0x10e668b3 */
  if (C.zf) goto L_10e668b3;
  /* 10e66840 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e66842 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66845 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e66848 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10e6684b push edx */
  push32((uint32_t)(EDX));
  /* 10e6684c call 0x10e57170 */
  push32(0x10e66851u); f_10e57170();
  /* 10e66851 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66854 jmp 0x10e6685f */
  goto L_10e6685f;
L_10e66856:;
  /* 10e66856 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66859 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6685c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e6685f:;
  /* 10e6685f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66862 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e66865 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66869 je 0x10e66880 */
  if (C.zf) goto L_10e66880;
  /* 10e6686b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e6686e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e66871 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66874 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10e66877 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 10e6687b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10e6687e jmp 0x10e66856 */
  goto L_10e66856;
L_10e66880:;
  /* 10e66880 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 10e66885 push 0x10e7eca8 */
  push32((uint32_t)(0x10e7eca8u));
  /* 10e6688a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e6688c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e6688f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10e66892 push eax */
  push32((uint32_t)(EAX));
  /* 10e66893 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e66896 push ecx */
  push32((uint32_t)(ECX));
  /* 10e66897 call 0x10e56b70 */
  push32(0x10e6689cu); f_10e56b70();
  /* 10e6689c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6689f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e668a2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e668a6 je 0x10e668b1 */
  if (C.zf) goto L_10e668b1;
  /* 10e668a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e668ab mov dword ptr [0x10e827d0], edx */
  w32((uint32_t)(0x10e827d0), (EDX));
L_10e668b1:;
  /* 10e668b1 jmp 0x10e668bf */
  goto L_10e668bf;
L_10e668b3:;
  /* 10e668b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e668b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e668b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e668bc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_10e668bf:;
  /* 10e668bf jmp 0x10e66934 */
  goto L_10e66934;
L_10e668c1:;
  /* 10e668c1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e668c5 jne 0x10e6692d */
  if (!C.zf) goto L_10e6692d;
  /* 10e668c7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e668cb jge 0x10e668d5 */
  if ((C.sf==C.of)) goto L_10e668d5;
  /* 10e668cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e668d0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e668d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e668d5:;
  /* 10e668d5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 10e668da push 0x10e7eca8 */
  push32((uint32_t)(0x10e7eca8u));
  /* 10e668df push 2 */
  push32((uint32_t)(0x2u));
  /* 10e668e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e668e4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 10e668eb push edx */
  push32((uint32_t)(EDX));
  /* 10e668ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e668ef push eax */
  push32((uint32_t)(EAX));
  /* 10e668f0 call 0x10e56b70 */
  push32(0x10e668f5u); f_10e56b70();
  /* 10e668f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e668f8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e668fb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e668ff jne 0x10e66909 */
  if (!C.zf) goto L_10e66909;
  /* 10e66901 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e66904 jmp 0x10e669bb */
  goto L_10e669bb;
L_10e66909:;
  /* 10e66909 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e6690c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6690f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66912 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10e66915 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66918 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e6691b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10e66923 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e66926 mov dword ptr [0x10e827d0], eax */
  w32((uint32_t)(0x10e827d0), (EAX));
  /* 10e6692b jmp 0x10e66934 */
  goto L_10e66934;
L_10e6692d:;
  /* 10e6692d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e6692f jmp 0x10e669bb */
  goto L_10e669bb;
L_10e66934:;
  /* 10e66934 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66938 je 0x10e669b9 */
  if (C.zf) goto L_10e669b9;
  /* 10e6693a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 10e6693f push 0x10e7eca8 */
  push32((uint32_t)(0x10e7eca8u));
  /* 10e66944 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e66946 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66949 push ecx */
  push32((uint32_t)(ECX));
  /* 10e6694a call 0x10e59510 */
  push32(0x10e6694fu); f_10e59510();
  /* 10e6694f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66952 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66955 push eax */
  push32((uint32_t)(EAX));
  /* 10e66956 call 0x10e566e0 */
  push32(0x10e6695bu); f_10e566e0();
  /* 10e6695b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e6695e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e66961 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66965 je 0x10e669b9 */
  if (C.zf) goto L_10e669b9;
  /* 10e66967 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e6696a push edx */
  push32((uint32_t)(EDX));
  /* 10e6696b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e6696e push eax */
  push32((uint32_t)(EAX));
  /* 10e6696f call 0x10e59690 */
  push32(0x10e66974u); f_10e59690();
  /* 10e66974 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66977 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e6697a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e6697d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e66980 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66982 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e66985 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e66988 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e6698b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e6698e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66991 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e66994 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e66997 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e66999 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e6699b not edx */
  EDX = (~(EDX));
  /* 10e6699d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10e669a0 push edx */
  push32((uint32_t)(EDX));
  /* 10e669a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e669a4 push eax */
  push32((uint32_t)(EAX));
  /* 10e669a5 call dword ptr [0x10e852f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10e852f4))), 0x10e669abu);
  /* 10e669ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10e669ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e669b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e669b1 call 0x10e57170 */
  push32(0x10e669b6u); f_10e57170();
  /* 10e669b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e669b9:;
  /* 10e669b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e669bb:;
  /* 10e669bb pop esi */
  ESI = (pop32());
  /* 10e669bc mov esp, ebp */
  ESP = (EBP);
  /* 10e669be pop ebp */
  EBP = (pop32());
  /* 10e669bf ret  */
  ESPCHK(0x10e666e0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x10e669c0 (124 bytes, 47 insns) */
void f_10e669c0(void) {
  FTRACE(0x10e669c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e669c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e669c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e669c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e669c4 mov eax, dword ptr [0x10e827d0] */
  EAX = (r32((uint32_t)(0x10e827d0)));
  /* 10e669c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e669cc jmp 0x10e669d7 */
  goto L_10e669d7;
L_10e669ce:;
  /* 10e669ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e669d1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e669d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e669d7:;
  /* 10e669d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e669da cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e669dd je 0x10e66a2a */
  if (C.zf) goto L_10e66a2a;
  /* 10e669df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e669e2 push eax */
  push32((uint32_t)(EAX));
  /* 10e669e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e669e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e669e8 push edx */
  push32((uint32_t)(EDX));
  /* 10e669e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e669ec push eax */
  push32((uint32_t)(EAX));
  /* 10e669ed call 0x10e66190 */
  push32(0x10e669f2u); f_10e66190();
  /* 10e669f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e669f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e669f7 jne 0x10e66a28 */
  if (!C.zf) goto L_10e66a28;
  /* 10e669f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e669fc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e669fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e66a01 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10e66a05 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66a08 je 0x10e66a1a */
  if (C.zf) goto L_10e66a1a;
  /* 10e66a0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e66a0d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e66a0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e66a12 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10e66a16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e66a18 jne 0x10e66a28 */
  if (!C.zf) goto L_10e66a28;
L_10e66a1a:;
  /* 10e66a1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e66a1d sub eax, dword ptr [0x10e827d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e827d0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e66a23 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10e66a26 jmp 0x10e66a38 */
  goto L_10e66a38;
L_10e66a28:;
  /* 10e66a28 jmp 0x10e669ce */
  goto L_10e669ce;
L_10e66a2a:;
  /* 10e66a2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e66a2d sub eax, dword ptr [0x10e827d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10e827d0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e66a33 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10e66a36 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10e66a38:;
  /* 10e66a38 mov esp, ebp */
  ESP = (EBP);
  /* 10e66a3a pop ebp */
  EBP = (pop32());
  /* 10e66a3b ret  */
  ESPCHK(0x10e669c0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10e66a40 (238 bytes, 80 insns) */
void f_10e66a40(void) {
  FTRACE(0x10e66a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e66a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e66a41 mov ebp, esp */
  EBP = (ESP);
  /* 10e66a43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e66a46 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10e66a4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66a50 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e66a53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66a57 jne 0x10e66a60 */
  if (!C.zf) goto L_10e66a60;
  /* 10e66a59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e66a5b jmp 0x10e66b2a */
  goto L_10e66b2a;
L_10e66a60:;
  /* 10e66a60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e66a63 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e66a65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e66a68 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66a6b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e66a6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e66a70 je 0x10e66a7d */
  if (C.zf) goto L_10e66a7d;
  /* 10e66a72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e66a75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66a78 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e66a7b jmp 0x10e66a60 */
  goto L_10e66a60;
L_10e66a7d:;
  /* 10e66a7d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 10e66a82 push 0x10e7eca8 */
  push32((uint32_t)(0x10e7eca8u));
  /* 10e66a87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e66a89 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e66a8c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 10e66a93 push eax */
  push32((uint32_t)(EAX));
  /* 10e66a94 call 0x10e566e0 */
  push32(0x10e66a99u); f_10e566e0();
  /* 10e66a99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66a9c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e66a9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66aa2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e66aa5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66aa9 jne 0x10e66ab5 */
  if (!C.zf) goto L_10e66ab5;
  /* 10e66aab push 9 */
  push32((uint32_t)(0x9u));
  /* 10e66aad call 0x10e55650 */
  push32(0x10e66ab2u); f_10e55650();
  /* 10e66ab2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e66ab5:;
  /* 10e66ab5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66ab8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e66abb:;
  /* 10e66abb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e66abe cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66ac1 je 0x10e66b1e */
  if (C.zf) goto L_10e66b1e;
  /* 10e66ac3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 10e66ac8 push 0x10e7eca8 */
  push32((uint32_t)(0x10e7eca8u));
  /* 10e66acd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e66acf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e66ad2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e66ad4 push edx */
  push32((uint32_t)(EDX));
  /* 10e66ad5 call 0x10e59510 */
  push32(0x10e66adau); f_10e59510();
  /* 10e66ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66add add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66ae0 push eax */
  push32((uint32_t)(EAX));
  /* 10e66ae1 call 0x10e566e0 */
  push32(0x10e66ae6u); f_10e566e0();
  /* 10e66ae6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66ae9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66aec mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e66aee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66af1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66af4 je 0x10e66b0a */
  if (C.zf) goto L_10e66b0a;
  /* 10e66af6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e66af9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e66afb push ecx */
  push32((uint32_t)(ECX));
  /* 10e66afc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66aff mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e66b01 push eax */
  push32((uint32_t)(EAX));
  /* 10e66b02 call 0x10e59690 */
  push32(0x10e66b07u); f_10e59690();
  /* 10e66b07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e66b0a:;
  /* 10e66b0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e66b0d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66b10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e66b13 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66b16 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66b19 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e66b1c jmp 0x10e66abb */
  goto L_10e66abb;
L_10e66b1e:;
  /* 10e66b1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e66b21 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e66b27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e66b2a:;
  /* 10e66b2a mov esp, ebp */
  ESP = (EBP);
  /* 10e66b2c pop ebp */
  EBP = (pop32());
  /* 10e66b2d ret  */
  ESPCHK(0x10e66a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10016b30 @ 0x10e66b30 (237 bytes, 81 insns) */
void f_10e66b30(void) {
  FTRACE(0x10e66b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e66b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10e66b31 mov ebp, esp */
  EBP = (ESP);
  /* 10e66b33 push ecx */
  push32((uint32_t)(ECX));
  /* 10e66b34 cmp dword ptr [0x10e83f0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10e83f0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66b3b jne 0x10e66b52 */
  if (!C.zf) goto L_10e66b52;
  /* 10e66b3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e66b40 push eax */
  push32((uint32_t)(EAX));
  /* 10e66b41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66b44 push ecx */
  push32((uint32_t)(ECX));
  /* 10e66b45 call 0x10e66c30 */
  push32(0x10e66b4au); f_10e66c30();
  /* 10e66b4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66b4d jmp 0x10e66c19 */
  goto L_10e66c19;
L_10e66b52:;
  /* 10e66b52 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e66b54 call 0x10e5a0e0 */
  push32(0x10e66b59u); f_10e5a0e0();
  /* 10e66b59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66b5c jmp 0x10e66b67 */
  goto L_10e66b67;
L_10e66b5e:;
  /* 10e66b5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66b61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66b64 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10e66b67:;
  /* 10e66b67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66b6a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 10e66b6e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 10e66b72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e66b75 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e66b7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e66b7d je 0x10e66bfb */
  if (C.zf) goto L_10e66bfb;
  /* 10e66b7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e66b82 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e66b87 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e66b89 mov cl, byte ptr [eax + 0x10e84021] */
  CL = (r8((uint32_t)(EAX + 0x10e84021)));
  /* 10e66b8f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e66b92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e66b94 je 0x10e66be6 */
  if (C.zf) goto L_10e66be6;
  /* 10e66b96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66b99 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66b9c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e66b9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66ba2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e66ba4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e66ba6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e66ba8 jne 0x10e66bb8 */
  if (!C.zf) goto L_10e66bb8;
  /* 10e66baa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e66bac call 0x10e5a180 */
  push32(0x10e66bb1u); f_10e5a180();
  /* 10e66bb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66bb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e66bb6 jmp 0x10e66c19 */
  goto L_10e66c19;
L_10e66bb8:;
  /* 10e66bb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e66bbb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e66bc1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10e66bc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66bc7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e66bc9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e66bcb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10e66bcd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66bd0 jne 0x10e66be4 */
  if (!C.zf) goto L_10e66be4;
  /* 10e66bd2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e66bd4 call 0x10e5a180 */
  push32(0x10e66bd9u); f_10e5a180();
  /* 10e66bd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66bdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66bdf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e66be2 jmp 0x10e66c19 */
  goto L_10e66c19;
L_10e66be4:;
  /* 10e66be4 jmp 0x10e66bf6 */
  goto L_10e66bf6;
L_10e66be6:;
  /* 10e66be6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e66be9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e66bef cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66bf2 jne 0x10e66bf6 */
  if (!C.zf) goto L_10e66bf6;
  /* 10e66bf4 jmp 0x10e66bfb */
  goto L_10e66bfb;
L_10e66bf6:;
  /* 10e66bf6 jmp 0x10e66b5e */
  goto L_10e66b5e;
L_10e66bfb:;
  /* 10e66bfb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10e66bfd call 0x10e5a180 */
  push32(0x10e66c02u); f_10e5a180();
  /* 10e66c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e66c08 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e66c0d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e66c10 jne 0x10e66c17 */
  if (!C.zf) goto L_10e66c17;
  /* 10e66c12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e66c15 jmp 0x10e66c19 */
  goto L_10e66c19;
L_10e66c17:;
  /* 10e66c17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e66c19:;
  /* 10e66c19 mov esp, ebp */
  ESP = (EBP);
  /* 10e66c1b pop ebp */
  EBP = (pop32());
  /* 10e66c1c ret  */
  ESPCHK(0x10e66b30u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10e66c30 (193 bytes, 87 insns) */
void f_10e66c30(void) {
  FTRACE(0x10e66c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e66c30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e66c32 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10e66c36 push ebx */
  push32((uint32_t)(EBX));
  /* 10e66c37 mov ebx, eax */
  EBX = (EAX);
  /* 10e66c39 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10e66c3c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e66c40 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10e66c46 je 0x10e66c5b */
  if (C.zf) goto L_10e66c5b;
L_10e66c48:;
  /* 10e66c48 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 10e66c4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10e66c4b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e66c4d je 0x10e66c20 */
  if (C.zf) { jmp_ind(0x10e66c20u); return; }
  /* 10e66c4f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10e66c51 je 0x10e66ca4 */
  if (C.zf) goto L_10e66ca4;
  /* 10e66c53 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10e66c59 jne 0x10e66c48 */
  if (!C.zf) goto L_10e66c48;
L_10e66c5b:;
  /* 10e66c5b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 10e66c5d push edi */
  push32((uint32_t)(EDI));
  /* 10e66c5e mov eax, ebx */
  EAX = (EBX);
  /* 10e66c60 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10e66c63 push esi */
  push32((uint32_t)(ESI));
  /* 10e66c64 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10e66c66:;
  /* 10e66c66 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10e66c68 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 10e66c6d mov eax, ecx */
  EAX = (ECX);
  /* 10e66c6f mov esi, edi */
  ESI = (EDI);
  /* 10e66c71 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 10e66c73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66c75 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66c77 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e66c7a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e66c7d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10e66c7f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10e66c81 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e66c84 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 10e66c8a jne 0x10e66ca8 */
  if (!C.zf) goto L_10e66ca8;
  /* 10e66c8c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10e66c91 je 0x10e66c66 */
  if (C.zf) goto L_10e66c66;
  /* 10e66c93 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 10e66c98 jne 0x10e66ca2 */
  if (!C.zf) goto L_10e66ca2;
  /* 10e66c9a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 10e66ca0 jne 0x10e66c66 */
  if (!C.zf) goto L_10e66c66;
L_10e66ca2:;
  /* 10e66ca2 pop esi */
  ESI = (pop32());
  /* 10e66ca3 pop edi */
  EDI = (pop32());
L_10e66ca4:;
  /* 10e66ca4 pop ebx */
  EBX = (pop32());
  /* 10e66ca5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e66ca7 ret  */
  ESPCHK(0x10e66c30u, _esp0);
  ESP += 4; return;
L_10e66ca8:;
  /* 10e66ca8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10e66cab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e66cad je 0x10e66ce5 */
  if (C.zf) goto L_10e66ce5;
  /* 10e66caf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e66cb1 je 0x10e66ca2 */
  if (C.zf) goto L_10e66ca2;
  /* 10e66cb3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e66cb5 je 0x10e66cde */
  if (C.zf) goto L_10e66cde;
  /* 10e66cb7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10e66cb9 je 0x10e66ca2 */
  if (C.zf) goto L_10e66ca2;
  /* 10e66cbb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e66cbe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e66cc0 je 0x10e66cd7 */
  if (C.zf) goto L_10e66cd7;
  /* 10e66cc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e66cc4 je 0x10e66ca2 */
  if (C.zf) goto L_10e66ca2;
  /* 10e66cc6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10e66cc8 je 0x10e66cd0 */
  if (C.zf) goto L_10e66cd0;
  /* 10e66cca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10e66ccc je 0x10e66ca2 */
  if (C.zf) goto L_10e66ca2;
  /* 10e66cce jmp 0x10e66c66 */
  goto L_10e66c66;
L_10e66cd0:;
  /* 10e66cd0 pop esi */
  ESI = (pop32());
  /* 10e66cd1 pop edi */
  EDI = (pop32());
  /* 10e66cd2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10e66cd5 pop ebx */
  EBX = (pop32());
  /* 10e66cd6 ret  */
  ESPCHK(0x10e66c30u, _esp0);
  ESP += 4; return;
L_10e66cd7:;
  /* 10e66cd7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 10e66cda pop esi */
  ESI = (pop32());
  /* 10e66cdb pop edi */
  EDI = (pop32());
  /* 10e66cdc pop ebx */
  EBX = (pop32());
  /* 10e66cdd ret  */
  ESPCHK(0x10e66c30u, _esp0);
  ESP += 4; return;
L_10e66cde:;
  /* 10e66cde lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10e66ce1 pop esi */
  ESI = (pop32());
  /* 10e66ce2 pop edi */
  EDI = (pop32());
  /* 10e66ce3 pop ebx */
  EBX = (pop32());
  /* 10e66ce4 ret  */
  ESPCHK(0x10e66c30u, _esp0);
  ESP += 4; return;
L_10e66ce5:;
  /* 10e66ce5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10e66ce8 pop esi */
  ESI = (pop32());
  /* 10e66ce9 pop edi */
  EDI = (pop32());
  /* 10e66cea pop ebx */
  EBX = (pop32());
  /* 10e66ceb ret  */
  ESPCHK(0x10e66c30u, _esp0);
  ESP += 4; return;
  /* 10e66cec jmp dword ptr [0x10e853c4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10e853c4)))); return;
}

/* RtlUnwind @ 0x10e66e3c (6 bytes, 1 insns) */
void f_10e66e3c(void) {
  FTRACE(0x10e66e3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e66e3c jmp dword ptr [0x10e85330] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10e85330)))); return;
}

