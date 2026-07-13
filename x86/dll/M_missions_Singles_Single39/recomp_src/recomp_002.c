#include "recomp.h"

/* _memset @ 0x1164b3f0 (88 bytes, 40 insns) */
void f_1164b3f0(void) {
  FTRACE(0x1164b3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164b3f0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1164b3f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1164b3f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164b3fa je 0x1164b443 */
  if (C.zf) goto L_1164b443;
  /* 1164b3fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164b3fe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1164b402 push edi */
  push32((uint32_t)(EDI));
  /* 1164b403 mov edi, ecx */
  EDI = (ECX);
  /* 1164b405 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b408 jb 0x1164b437 */
  if (C.cf) goto L_1164b437;
  /* 1164b40a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1164b40c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1164b40f je 0x1164b419 */
  if (C.zf) goto L_1164b419;
  /* 1164b411 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1164b413:;
  /* 1164b413 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164b415 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1164b416 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1164b417 jne 0x1164b413 */
  if (!C.zf) goto L_1164b413;
L_1164b419:;
  /* 1164b419 mov ecx, eax */
  ECX = (EAX);
  /* 1164b41b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1164b41e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b420 mov ecx, eax */
  ECX = (EAX);
  /* 1164b422 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1164b425 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b427 mov ecx, edx */
  ECX = (EDX);
  /* 1164b429 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1164b42c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164b42f je 0x1164b437 */
  if (C.zf) goto L_1164b437;
  /* 1164b431 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1164b433 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164b435 je 0x1164b43d */
  if (C.zf) goto L_1164b43d;
L_1164b437:;
  /* 1164b437 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164b439 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1164b43a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1164b43b jne 0x1164b437 */
  if (!C.zf) goto L_1164b437;
L_1164b43d:;
  /* 1164b43d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1164b441 pop edi */
  EDI = (pop32());
  /* 1164b442 ret  */
  ESPCHK(0x1164b3f0u, _esp0);
  ESP += 4; return;
L_1164b443:;
  /* 1164b443 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1164b447 ret  */
  ESPCHK(0x1164b3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b450 @ 0x1164b450 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1164b450(void) {
  FTRACE(0x1164b450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164b450 push ebp */
  push32((uint32_t)(EBP));
  /* 1164b451 mov ebp, esp */
  EBP = (ESP);
  /* 1164b453 push edi */
  push32((uint32_t)(EDI));
  /* 1164b454 push esi */
  push32((uint32_t)(ESI));
  /* 1164b455 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1164b458 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164b45b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b45e mov eax, ecx */
  EAX = (ECX);
  /* 1164b460 mov edx, ecx */
  EDX = (ECX);
  /* 1164b462 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b464 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b466 jbe 0x1164b470 */
  if ((C.cf||C.zf)) goto L_1164b470;
  /* 1164b468 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b46a jb 0x1164b5e8 */
  if (C.cf) goto L_1164b5e8;
L_1164b470:;
  /* 1164b470 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1164b476 jne 0x1164b48c */
  if (!C.zf) goto L_1164b48c;
  /* 1164b478 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164b47b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1164b47e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b481 jb 0x1164b4ac */
  if (C.cf) goto L_1164b4ac;
  /* 1164b483 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164b485 jmp dword ptr [edx*4 + 0x1164b598] */
  switch (EDX) {
    case 0: goto L_1164b5a8;
    case 1: goto L_1164b5b0;
    case 2: goto L_1164b5bc;
    case 3: goto L_1164b5d0;
    default: x86_unimpl("switch@0x1164b485 out of table"); return;
  }
L_1164b48c:;
  /* 1164b48c mov eax, edi */
  EAX = (EDI);
  /* 1164b48e mov edx, 3 */
  EDX = (0x3u);
  /* 1164b493 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b496 jb 0x1164b4a4 */
  if (C.cf) goto L_1164b4a4;
  /* 1164b498 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1164b49b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b49d jmp dword ptr [eax*4 + 0x1164b4b0] */
  switch (EAX) {
    case 1: goto L_1164b4c0;
    case 2: goto L_1164b4ec;
    case 3: goto L_1164b510;
    default: x86_unimpl("switch@0x1164b49d out of table"); return;
  }
L_1164b4a4:;
  /* 1164b4a4 jmp dword ptr [ecx*4 + 0x1164b5a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1164b5a8)))); return;
  /* 1164b4ab nop  */
  /* nop */
L_1164b4ac:;
  /* 1164b4ac jmp dword ptr [ecx*4 + 0x1164b52c] */
  switch (ECX) {
    case 0: goto L_1164b58f;
    case 1: goto L_1164b57c;
    case 2: goto L_1164b574;
    case 3: goto L_1164b56c;
    case 4: goto L_1164b564;
    case 5: goto L_1164b55c;
    case 6: goto L_1164b554;
    case 7: goto L_1164b54c;
    default: x86_unimpl("switch@0x1164b4ac out of table"); return;
  }
  /* 1164b4b3 nop  */
  /* nop */
L_1164b4c0:;
  /* 1164b4c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1164b4c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1164b4c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164b4c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1164b4c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1164b4cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1164b4cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164b4d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1164b4d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b4d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b4db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b4de jb 0x1164b4ac */
  if (C.cf) goto L_1164b4ac;
  /* 1164b4e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164b4e2 jmp dword ptr [edx*4 + 0x1164b598] */
  switch (EDX) {
    case 0: goto L_1164b5a8;
    case 1: goto L_1164b5b0;
    case 2: goto L_1164b5bc;
    case 3: goto L_1164b5d0;
    default: x86_unimpl("switch@0x1164b4e2 out of table"); return;
  }
  /* 1164b4e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1164b4ec:;
  /* 1164b4ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1164b4ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1164b4f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164b4f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1164b4f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164b4f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1164b4fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b4fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b501 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b504 jb 0x1164b4ac */
  if (C.cf) goto L_1164b4ac;
  /* 1164b506 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164b508 jmp dword ptr [edx*4 + 0x1164b598] */
  switch (EDX) {
    case 0: goto L_1164b5a8;
    case 1: goto L_1164b5b0;
    case 2: goto L_1164b5bc;
    case 3: goto L_1164b5d0;
    default: x86_unimpl("switch@0x1164b508 out of table"); return;
  }
  /* 1164b50f nop  */
  /* nop */
L_1164b510:;
  /* 1164b510 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1164b512 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1164b514 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164b516 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1164b517 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164b51a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1164b51b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b51e jb 0x1164b4ac */
  if (C.cf) goto L_1164b4ac;
  /* 1164b520 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164b522 jmp dword ptr [edx*4 + 0x1164b598] */
  switch (EDX) {
    case 0: goto L_1164b5a8;
    case 1: goto L_1164b5b0;
    case 2: goto L_1164b5bc;
    case 3: goto L_1164b5d0;
    default: x86_unimpl("switch@0x1164b522 out of table"); return;
  }
  /* 1164b529 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1164b54c:;
  /* 1164b54c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1164b550 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1164b554:;
  /* 1164b554 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1164b558 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1164b55c:;
  /* 1164b55c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1164b560 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1164b564:;
  /* 1164b564 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1164b568 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1164b56c:;
  /* 1164b56c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1164b570 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1164b574:;
  /* 1164b574 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1164b578 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1164b57c:;
  /* 1164b57c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1164b580 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1164b584 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1164b58b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b58d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1164b58f:;
  /* 1164b58f jmp dword ptr [edx*4 + 0x1164b598] */
  switch (EDX) {
    case 0: goto L_1164b5a8;
    case 1: goto L_1164b5b0;
    case 2: goto L_1164b5bc;
    case 3: goto L_1164b5d0;
    default: x86_unimpl("switch@0x1164b58f out of table"); return;
  }
  /* 1164b596 mov edi, edi */
  EDI = (EDI);
L_1164b5a8:;
  /* 1164b5a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b5ab pop esi */
  ESI = (pop32());
  /* 1164b5ac pop edi */
  EDI = (pop32());
  /* 1164b5ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164b5ae ret  */
  ESPCHK(0x1164b450u, _esp0);
  ESP += 4; return;
  /* 1164b5af nop  */
  /* nop */
L_1164b5b0:;
  /* 1164b5b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1164b5b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164b5b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b5b7 pop esi */
  ESI = (pop32());
  /* 1164b5b8 pop edi */
  EDI = (pop32());
  /* 1164b5b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164b5ba ret  */
  ESPCHK(0x1164b450u, _esp0);
  ESP += 4; return;
  /* 1164b5bb nop  */
  /* nop */
L_1164b5bc:;
  /* 1164b5bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1164b5be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164b5c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1164b5c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1164b5c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b5c9 pop esi */
  ESI = (pop32());
  /* 1164b5ca pop edi */
  EDI = (pop32());
  /* 1164b5cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164b5cc ret  */
  ESPCHK(0x1164b450u, _esp0);
  ESP += 4; return;
  /* 1164b5cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1164b5d0:;
  /* 1164b5d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1164b5d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164b5d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1164b5d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1164b5da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1164b5dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1164b5e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b5e3 pop esi */
  ESI = (pop32());
  /* 1164b5e4 pop edi */
  EDI = (pop32());
  /* 1164b5e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164b5e6 ret  */
  ESPCHK(0x1164b450u, _esp0);
  ESP += 4; return;
  /* 1164b5e7 nop  */
  /* nop */
L_1164b5e8:;
  /* 1164b5e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1164b5ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1164b5f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1164b5f6 jne 0x1164b61c */
  if (!C.zf) goto L_1164b61c;
  /* 1164b5f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164b5fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1164b5fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b601 jb 0x1164b610 */
  if (C.cf) goto L_1164b610;
  /* 1164b603 std  */
  C.df=1;
  /* 1164b604 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164b606 cld  */
  C.df=0;
  /* 1164b607 jmp dword ptr [edx*4 + 0x1164b730] */
  switch (EDX) {
    case 0: goto L_1164b740;
    case 1: goto L_1164b748;
    case 2: goto L_1164b758;
    case 3: goto L_1164b76c;
    default: x86_unimpl("switch@0x1164b607 out of table"); return;
  }
  /* 1164b60e mov edi, edi */
  EDI = (EDI);
L_1164b610:;
  /* 1164b610 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1164b612 jmp dword ptr [ecx*4 + 0x1164b6e0] */
  switch (ECX) {
    case 0: goto L_1164b727;
    default: x86_unimpl("switch@0x1164b612 out of table"); return;
  }
  /* 1164b619 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1164b61c:;
  /* 1164b61c mov eax, edi */
  EAX = (EDI);
  /* 1164b61e mov edx, 3 */
  EDX = (0x3u);
  /* 1164b623 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b626 jb 0x1164b634 */
  if (C.cf) goto L_1164b634;
  /* 1164b628 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1164b62b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b62d jmp dword ptr [eax*4 + 0x1164b638] */
  switch (EAX) {
    case 1: goto L_1164b648;
    case 2: goto L_1164b668;
    case 3: goto L_1164b690;
    default: x86_unimpl("switch@0x1164b62d out of table"); return;
  }
L_1164b634:;
  /* 1164b634 jmp dword ptr [ecx*4 + 0x1164b730] */
  switch (ECX) {
    case 0: goto L_1164b740;
    case 1: goto L_1164b748;
    case 2: goto L_1164b758;
    case 3: goto L_1164b76c;
    default: x86_unimpl("switch@0x1164b634 out of table"); return;
  }
  /* 1164b63b nop  */
  /* nop */
L_1164b648:;
  /* 1164b648 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1164b64b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1164b64d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1164b650 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1164b651 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164b654 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1164b655 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b658 jb 0x1164b610 */
  if (C.cf) goto L_1164b610;
  /* 1164b65a std  */
  C.df=1;
  /* 1164b65b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164b65d cld  */
  C.df=0;
  /* 1164b65e jmp dword ptr [edx*4 + 0x1164b730] */
  switch (EDX) {
    case 0: goto L_1164b740;
    case 1: goto L_1164b748;
    case 2: goto L_1164b758;
    case 3: goto L_1164b76c;
    default: x86_unimpl("switch@0x1164b65e out of table"); return;
  }
  /* 1164b665 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1164b668:;
  /* 1164b668 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1164b66b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1164b66d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1164b670 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1164b673 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164b676 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1164b679 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b67c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b67f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b682 jb 0x1164b610 */
  if (C.cf) goto L_1164b610;
  /* 1164b684 std  */
  C.df=1;
  /* 1164b685 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164b687 cld  */
  C.df=0;
  /* 1164b688 jmp dword ptr [edx*4 + 0x1164b730] */
  switch (EDX) {
    case 0: goto L_1164b740;
    case 1: goto L_1164b748;
    case 2: goto L_1164b758;
    case 3: goto L_1164b76c;
    default: x86_unimpl("switch@0x1164b688 out of table"); return;
  }
  /* 1164b68f nop  */
  /* nop */
L_1164b690:;
  /* 1164b690 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1164b693 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1164b695 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1164b698 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1164b69b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1164b69e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1164b6a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164b6a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1164b6a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b6aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b6ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b6b0 jb 0x1164b610 */
  if (C.cf) goto L_1164b610;
  /* 1164b6b6 std  */
  C.df=1;
  /* 1164b6b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164b6b9 cld  */
  C.df=0;
  /* 1164b6ba jmp dword ptr [edx*4 + 0x1164b730] */
  switch (EDX) {
    case 0: goto L_1164b740;
    case 1: goto L_1164b748;
    case 2: goto L_1164b758;
    case 3: goto L_1164b76c;
    default: x86_unimpl("switch@0x1164b6ba out of table"); return;
  }
  /* 1164b6c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1164b6c4 in al, 0xb6 */
  x86_unimpl("in @ 0x1164b6c4");
  /* 1164b6c6 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b6c9 mov dh, 0x64 */
  C.d.b.h = (0x64u);
  /* 1164b6cb adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b6cd mov dh, 0x64 */
  C.d.b.h = (0x64u);
  /* 1164b6cf adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b6d1 mov dh, 0x64 */
  C.d.b.h = (0x64u);
  /* 1164b6d3 adc dword ptr [edi + esi*4], eax */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*4))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1164b6d6 adc dword ptr fs:[edi + esi*4], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*4))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1164b6da adc dword ptr fs:[edi + esi*4], edx */
  { uint32_t _a=(r32((uint32_t)(EDI + ESI*4))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ESI*4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1164b6e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1164b6e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1164b6ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1164b6f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1164b6f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1164b6f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1164b6fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1164b700 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1164b704 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1164b708 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1164b70c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1164b710 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1164b714 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1164b718 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1164b71c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1164b723 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b725 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1164b727:;
  /* 1164b727 jmp dword ptr [edx*4 + 0x1164b730] */
  switch (EDX) {
    case 0: goto L_1164b740;
    case 1: goto L_1164b748;
    case 2: goto L_1164b758;
    case 3: goto L_1164b76c;
    default: x86_unimpl("switch@0x1164b727 out of table"); return;
  }
  /* 1164b72e mov edi, edi */
  EDI = (EDI);
L_1164b740:;
  /* 1164b740 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b743 pop esi */
  ESI = (pop32());
  /* 1164b744 pop edi */
  EDI = (pop32());
  /* 1164b745 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164b746 ret  */
  ESPCHK(0x1164b450u, _esp0);
  ESP += 4; return;
  /* 1164b747 nop  */
  /* nop */
L_1164b748:;
  /* 1164b748 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1164b74b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1164b74e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b751 pop esi */
  ESI = (pop32());
  /* 1164b752 pop edi */
  EDI = (pop32());
  /* 1164b753 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164b754 ret  */
  ESPCHK(0x1164b450u, _esp0);
  ESP += 4; return;
  /* 1164b755 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1164b758:;
  /* 1164b758 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1164b75b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1164b75e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1164b761 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1164b764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b767 pop esi */
  ESI = (pop32());
  /* 1164b768 pop edi */
  EDI = (pop32());
  /* 1164b769 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164b76a ret  */
  ESPCHK(0x1164b450u, _esp0);
  ESP += 4; return;
  /* 1164b76b nop  */
  /* nop */
L_1164b76c:;
  /* 1164b76c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1164b76f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1164b772 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1164b775 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1164b778 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1164b77b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1164b77e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b781 pop esi */
  ESI = (pop32());
  /* 1164b782 pop edi */
  EDI = (pop32());
  /* 1164b783 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164b784 ret  */
  ESPCHK(0x1164b450u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1164b790 (15 bytes, 7 insns) */
void f_1164b790(void) {
  FTRACE(0x1164b790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164b790 push ebp */
  push32((uint32_t)(EBP));
  /* 1164b791 mov ebp, esp */
  EBP = (ESP);
  /* 1164b793 push 2 */
  push32((uint32_t)(0x2u));
  /* 1164b795 call 0x11645030 */
  push32(0x1164b79au); f_11645030();
  /* 1164b79a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b79d pop ebp */
  EBP = (pop32());
  /* 1164b79e ret  */
  ESPCHK(0x1164b790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7a0 @ 0x1164b7a0 (55 bytes, 16 insns) */
void f_1164b7a0(void) {
  FTRACE(0x1164b7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164b7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164b7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1164b7a3 mov eax, dword ptr [0x11673f24] */
  EAX = (r32((uint32_t)(0x11673f24)));
  /* 1164b7a8 push eax */
  push32((uint32_t)(EAX));
  /* 1164b7a9 call dword ptr [0x11678334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678334))), 0x1164b7afu);
  /* 1164b7af mov ecx, dword ptr [0x11673f14] */
  ECX = (r32((uint32_t)(0x11673f14)));
  /* 1164b7b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1164b7b6 call dword ptr [0x11678334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678334))), 0x1164b7bcu);
  /* 1164b7bc mov edx, dword ptr [0x11673f04] */
  EDX = (r32((uint32_t)(0x11673f04)));
  /* 1164b7c2 push edx */
  push32((uint32_t)(EDX));
  /* 1164b7c3 call dword ptr [0x11678334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678334))), 0x1164b7c9u);
  /* 1164b7c9 mov eax, dword ptr [0x11673ee4] */
  EAX = (r32((uint32_t)(0x11673ee4)));
  /* 1164b7ce push eax */
  push32((uint32_t)(EAX));
  /* 1164b7cf call dword ptr [0x11678334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678334))), 0x1164b7d5u);
  /* 1164b7d5 pop ebp */
  EBP = (pop32());
  /* 1164b7d6 ret  */
  ESPCHK(0x1164b7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7e0 @ 0x1164b7e0 (159 bytes, 47 insns) */
void f_1164b7e0(void) {
  FTRACE(0x1164b7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164b7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164b7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1164b7e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1164b7e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164b7eb jmp 0x1164b7f6 */
  goto L_1164b7f6;
L_1164b7ed:;
  /* 1164b7ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b7f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b7f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1164b7f6:;
  /* 1164b7f6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b7fa jge 0x1164b849 */
  if ((C.sf==C.of)) goto L_1164b849;
  /* 1164b7fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b7ff cmp dword ptr [ecx*4 + 0x11673ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11673ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b807 je 0x1164b847 */
  if (C.zf) goto L_1164b847;
  /* 1164b809 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b80d je 0x1164b847 */
  if (C.zf) goto L_1164b847;
  /* 1164b80f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b813 je 0x1164b847 */
  if (C.zf) goto L_1164b847;
  /* 1164b815 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b819 je 0x1164b847 */
  if (C.zf) goto L_1164b847;
  /* 1164b81b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b81f je 0x1164b847 */
  if (C.zf) goto L_1164b847;
  /* 1164b821 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b824 mov eax, dword ptr [edx*4 + 0x11673ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11673ee0)));
  /* 1164b82b push eax */
  push32((uint32_t)(EAX));
  /* 1164b82c call dword ptr [0x116783a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783a4))), 0x1164b832u);
  /* 1164b832 push 2 */
  push32((uint32_t)(0x2u));
  /* 1164b834 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b837 mov edx, dword ptr [ecx*4 + 0x11673ee0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11673ee0)));
  /* 1164b83e push edx */
  push32((uint32_t)(EDX));
  /* 1164b83f call 0x11647350 */
  push32(0x1164b844u); f_11647350();
  /* 1164b844 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164b847:;
  /* 1164b847 jmp 0x1164b7ed */
  goto L_1164b7ed;
L_1164b849:;
  /* 1164b849 mov eax, dword ptr [0x11673f04] */
  EAX = (r32((uint32_t)(0x11673f04)));
  /* 1164b84e push eax */
  push32((uint32_t)(EAX));
  /* 1164b84f call dword ptr [0x116783a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783a4))), 0x1164b855u);
  /* 1164b855 mov ecx, dword ptr [0x11673f14] */
  ECX = (r32((uint32_t)(0x11673f14)));
  /* 1164b85b push ecx */
  push32((uint32_t)(ECX));
  /* 1164b85c call dword ptr [0x116783a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783a4))), 0x1164b862u);
  /* 1164b862 mov edx, dword ptr [0x11673f24] */
  EDX = (r32((uint32_t)(0x11673f24)));
  /* 1164b868 push edx */
  push32((uint32_t)(EDX));
  /* 1164b869 call dword ptr [0x116783a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783a4))), 0x1164b86fu);
  /* 1164b86f mov eax, dword ptr [0x11673ee4] */
  EAX = (r32((uint32_t)(0x11673ee4)));
  /* 1164b874 push eax */
  push32((uint32_t)(EAX));
  /* 1164b875 call dword ptr [0x116783a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783a4))), 0x1164b87bu);
  /* 1164b87b mov esp, ebp */
  ESP = (EBP);
  /* 1164b87d pop ebp */
  EBP = (pop32());
  /* 1164b87e ret  */
  ESPCHK(0x1164b7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b880 @ 0x1164b880 (151 bytes, 46 insns) */
void f_1164b880(void) {
  FTRACE(0x1164b880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164b880 push ebp */
  push32((uint32_t)(EBP));
  /* 1164b881 mov ebp, esp */
  EBP = (ESP);
  /* 1164b883 push ecx */
  push32((uint32_t)(ECX));
  /* 1164b884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b887 cmp dword ptr [eax*4 + 0x11673ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11673ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b88f jne 0x1164b902 */
  if (!C.zf) goto L_1164b902;
  /* 1164b891 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1164b896 push 0x11671028 */
  push32((uint32_t)(0x11671028u));
  /* 1164b89b push 2 */
  push32((uint32_t)(0x2u));
  /* 1164b89d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1164b89f call 0x116468c0 */
  push32(0x1164b8a4u); f_116468c0();
  /* 1164b8a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b8a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164b8aa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b8ae jne 0x1164b8ba */
  if (!C.zf) goto L_1164b8ba;
  /* 1164b8b0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1164b8b2 call 0x11645030 */
  push32(0x1164b8b7u); f_11645030();
  /* 1164b8b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164b8ba:;
  /* 1164b8ba push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1164b8bc call 0x1164b880 */
  push32(0x1164b8c1u); f_1164b880();
  /* 1164b8c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b8c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b8c7 cmp dword ptr [ecx*4 + 0x11673ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11673ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b8cf jne 0x1164b8ea */
  if (!C.zf) goto L_1164b8ea;
  /* 1164b8d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b8d4 push edx */
  push32((uint32_t)(EDX));
  /* 1164b8d5 call dword ptr [0x11678334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678334))), 0x1164b8dbu);
  /* 1164b8db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b8de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b8e1 mov dword ptr [eax*4 + 0x11673ee0], ecx */
  w32((uint32_t)(EAX*4 + 0x11673ee0), (ECX));
  /* 1164b8e8 jmp 0x1164b8f8 */
  goto L_1164b8f8;
L_1164b8ea:;
  /* 1164b8ea push 2 */
  push32((uint32_t)(0x2u));
  /* 1164b8ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164b8ef push edx */
  push32((uint32_t)(EDX));
  /* 1164b8f0 call 0x11647350 */
  push32(0x1164b8f5u); f_11647350();
  /* 1164b8f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164b8f8:;
  /* 1164b8f8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1164b8fa call 0x1164b920 */
  push32(0x1164b8ffu); f_1164b920();
  /* 1164b8ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164b902:;
  /* 1164b902 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b905 mov ecx, dword ptr [eax*4 + 0x11673ee0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11673ee0)));
  /* 1164b90c push ecx */
  push32((uint32_t)(ECX));
  /* 1164b90d call dword ptr [0x11678324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678324))), 0x1164b913u);
  /* 1164b913 mov esp, ebp */
  ESP = (EBP);
  /* 1164b915 pop ebp */
  EBP = (pop32());
  /* 1164b916 ret  */
  ESPCHK(0x1164b880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b920 @ 0x1164b920 (22 bytes, 8 insns) */
void f_1164b920(void) {
  FTRACE(0x1164b920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164b920 push ebp */
  push32((uint32_t)(EBP));
  /* 1164b921 mov ebp, esp */
  EBP = (ESP);
  /* 1164b923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b926 mov ecx, dword ptr [eax*4 + 0x11673ee0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11673ee0)));
  /* 1164b92d push ecx */
  push32((uint32_t)(ECX));
  /* 1164b92e call dword ptr [0x11678320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678320))), 0x1164b934u);
  /* 1164b934 pop ebp */
  EBP = (pop32());
  /* 1164b935 ret  */
  ESPCHK(0x1164b920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b940 @ 0x1164b940 (26 bytes, 10 insns) */
void f_1164b940(void) {
  FTRACE(0x1164b940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164b940 push ebp */
  push32((uint32_t)(EBP));
  /* 1164b941 mov ebp, esp */
  EBP = (ESP);
  /* 1164b943 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b946 push eax */
  push32((uint32_t)(EAX));
  /* 1164b947 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164b949 call dword ptr [0x11678328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678328))), 0x1164b94fu);
  /* 1164b94f push 0xff */
  push32((uint32_t)(0xffu));
  /* 1164b954 call dword ptr [0x1167836c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167836c))), 0x1164b95au);
  /* 1164b95a pop ebp */
  EBP = (pop32());
  /* 1164b95b ret  */
  ESPCHK(0x1164b940u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1164b960 (446 bytes, 130 insns) */
void f_1164b960(void) {
  FTRACE(0x1164b960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164b960 push ebp */
  push32((uint32_t)(EBP));
  /* 1164b961 mov ebp, esp */
  EBP = (ESP);
  /* 1164b963 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164b966 call 0x11646300 */
  push32(0x1164b96bu); f_11646300();
  /* 1164b96b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164b96e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164b971 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1164b974 push ecx */
  push32((uint32_t)(ECX));
  /* 1164b975 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164b978 push edx */
  push32((uint32_t)(EDX));
  /* 1164b979 call 0x1164bb20 */
  push32(0x1164b97eu); f_1164bb20();
  /* 1164b97e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164b981 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1164b984 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b988 je 0x1164b993 */
  if (C.zf) goto L_1164b993;
  /* 1164b98a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164b98d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b991 jne 0x1164b9a2 */
  if (!C.zf) goto L_1164b9a2;
L_1164b993:;
  /* 1164b993 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164b996 push ecx */
  push32((uint32_t)(ECX));
  /* 1164b997 call dword ptr [0x11678318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678318))), 0x1164b99du);
  /* 1164b99d jmp 0x1164bb1a */
  goto L_1164bb1a;
L_1164b9a2:;
  /* 1164b9a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164b9a5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b9a9 jne 0x1164b9bf */
  if (!C.zf) goto L_1164b9bf;
  /* 1164b9ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164b9ae mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1164b9b5 mov eax, 1 */
  EAX = (0x1u);
  /* 1164b9ba jmp 0x1164bb1a */
  goto L_1164bb1a;
L_1164b9bf:;
  /* 1164b9bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164b9c2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b9c6 jne 0x1164b9d0 */
  if (!C.zf) goto L_1164b9d0;
  /* 1164b9c8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164b9cb jmp 0x1164bb1a */
  goto L_1164bb1a;
L_1164b9d0:;
  /* 1164b9d0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164b9d3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1164b9d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164b9d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164b9dc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1164b9df mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1164b9e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164b9e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164b9e8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1164b9eb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164b9ee cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164b9f2 jne 0x1164baf7 */
  if (!C.zf) goto L_1164baf7;
  /* 1164b9f8 mov eax, dword ptr [0x11674018] */
  EAX = (r32((uint32_t)(0x11674018)));
  /* 1164b9fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1164ba00 jmp 0x1164ba0b */
  goto L_1164ba0b;
L_1164ba02:;
  /* 1164ba02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164ba05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ba08 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1164ba0b:;
  /* 1164ba0b mov edx, dword ptr [0x11674018] */
  EDX = (r32((uint32_t)(0x11674018)));
  /* 1164ba11 add edx, dword ptr [0x1167401c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1167401c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ba17 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ba1a jge 0x1164ba32 */
  if ((C.sf==C.of)) goto L_1164ba32;
  /* 1164ba1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164ba1f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164ba22 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ba25 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1164ba28 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1164ba30 jmp 0x1164ba02 */
  goto L_1164ba02;
L_1164ba32:;
  /* 1164ba32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ba35 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1164ba38 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1164ba3b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ba3e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ba44 jne 0x1164ba55 */
  if (!C.zf) goto L_1164ba55;
  /* 1164ba46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ba49 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1164ba50 jmp 0x1164badd */
  goto L_1164badd;
L_1164ba55:;
  /* 1164ba55 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ba58 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ba5e jne 0x1164ba6c */
  if (!C.zf) goto L_1164ba6c;
  /* 1164ba60 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ba63 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1164ba6a jmp 0x1164badd */
  goto L_1164badd;
L_1164ba6c:;
  /* 1164ba6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ba6f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ba75 jne 0x1164ba83 */
  if (!C.zf) goto L_1164ba83;
  /* 1164ba77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ba7a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1164ba81 jmp 0x1164badd */
  goto L_1164badd;
L_1164ba83:;
  /* 1164ba83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ba86 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ba8c jne 0x1164ba9a */
  if (!C.zf) goto L_1164ba9a;
  /* 1164ba8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ba91 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1164ba98 jmp 0x1164badd */
  goto L_1164badd;
L_1164ba9a:;
  /* 1164ba9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ba9d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164baa3 jne 0x1164bab1 */
  if (!C.zf) goto L_1164bab1;
  /* 1164baa5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164baa8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1164baaf jmp 0x1164badd */
  goto L_1164badd;
L_1164bab1:;
  /* 1164bab1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164bab4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164baba jne 0x1164bac8 */
  if (!C.zf) goto L_1164bac8;
  /* 1164babc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164babf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1164bac6 jmp 0x1164badd */
  goto L_1164badd;
L_1164bac8:;
  /* 1164bac8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164bacb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bad1 jne 0x1164badd */
  if (!C.zf) goto L_1164badd;
  /* 1164bad3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164bad6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1164badd:;
  /* 1164badd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164bae0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1164bae3 push edx */
  push32((uint32_t)(EDX));
  /* 1164bae4 push 8 */
  push32((uint32_t)(0x8u));
  /* 1164bae6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1164bae9u);
  /* 1164bae9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164baec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164baef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164baf2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1164baf5 jmp 0x1164bb0e */
  goto L_1164bb0e;
L_1164baf7:;
  /* 1164baf7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164bafa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1164bb01 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164bb04 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164bb07 push ecx */
  push32((uint32_t)(ECX));
  /* 1164bb08 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1164bb0bu);
  /* 1164bb0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164bb0e:;
  /* 1164bb0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164bb11 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164bb14 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1164bb17 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1164bb1a:;
  /* 1164bb1a mov esp, ebp */
  ESP = (EBP);
  /* 1164bb1c pop ebp */
  EBP = (pop32());
  /* 1164bb1d ret  */
  ESPCHK(0x1164b960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb20 @ 0x1164bb20 (89 bytes, 35 insns) */
void f_1164bb20(void) {
  FTRACE(0x1164bb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164bb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1164bb21 mov ebp, esp */
  EBP = (ESP);
  /* 1164bb23 push ecx */
  push32((uint32_t)(ECX));
  /* 1164bb24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164bb27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1164bb2a:;
  /* 1164bb2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164bb2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164bb2f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bb32 je 0x1164bb52 */
  if (C.zf) goto L_1164bb52;
  /* 1164bb34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164bb37 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bb3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164bb3d mov ecx, dword ptr [0x11674024] */
  ECX = (r32((uint32_t)(0x11674024)));
  /* 1164bb43 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164bb46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164bb49 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bb4b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bb4e jae 0x1164bb52 */
  if (!C.cf) goto L_1164bb52;
  /* 1164bb50 jmp 0x1164bb2a */
  goto L_1164bb2a;
L_1164bb52:;
  /* 1164bb52 mov eax, dword ptr [0x11674024] */
  EAX = (r32((uint32_t)(0x11674024)));
  /* 1164bb57 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164bb5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164bb5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bb5f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bb62 jae 0x1164bb6e */
  if (!C.cf) goto L_1164bb6e;
  /* 1164bb64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164bb67 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1164bb69 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bb6c je 0x1164bb72 */
  if (C.zf) goto L_1164bb72;
L_1164bb6e:;
  /* 1164bb6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164bb70 jmp 0x1164bb75 */
  goto L_1164bb75;
L_1164bb72:;
  /* 1164bb72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1164bb75:;
  /* 1164bb75 mov esp, ebp */
  ESP = (EBP);
  /* 1164bb77 pop ebp */
  EBP = (pop32());
  /* 1164bb78 ret  */
  ESPCHK(0x1164bb20u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1164bb80 (48 bytes, 17 insns) */
void f_1164bb80(void) {
  FTRACE(0x1164bb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164bb80 push ebp */
  push32((uint32_t)(EBP));
  /* 1164bb81 mov ebp, esp */
  EBP = (ESP);
  /* 1164bb83 push ecx */
  push32((uint32_t)(ECX));
  /* 1164bb84 push 9 */
  push32((uint32_t)(0x9u));
  /* 1164bb86 call 0x1164b880 */
  push32(0x1164bb8bu); f_1164b880();
  /* 1164bb8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bb8e mov eax, dword ptr [0x11676194] */
  EAX = (r32((uint32_t)(0x11676194)));
  /* 1164bb93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164bb96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bb99 mov dword ptr [0x11676194], ecx */
  w32((uint32_t)(0x11676194), (ECX));
  /* 1164bb9f push 9 */
  push32((uint32_t)(0x9u));
  /* 1164bba1 call 0x1164b920 */
  push32(0x1164bba6u); f_1164b920();
  /* 1164bba6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bba9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164bbac mov esp, ebp */
  ESP = (EBP);
  /* 1164bbae pop ebp */
  EBP = (pop32());
  /* 1164bbaf ret  */
  ESPCHK(0x1164bb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbb0 @ 0x1164bbb0 (10 bytes, 5 insns) */
void f_1164bbb0(void) {
  FTRACE(0x1164bbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164bbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164bbb1 mov ebp, esp */
  EBP = (ESP);
  /* 1164bbb3 mov eax, dword ptr [0x11676194] */
  EAX = (r32((uint32_t)(0x11676194)));
  /* 1164bbb8 pop ebp */
  EBP = (pop32());
  /* 1164bbb9 ret  */
  ESPCHK(0x1164bbb0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1164bbc0 (45 bytes, 19 insns) */
void f_1164bbc0(void) {
  FTRACE(0x1164bbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164bbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164bbc1 mov ebp, esp */
  EBP = (ESP);
  /* 1164bbc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1164bbc4 mov eax, dword ptr [0x11676194] */
  EAX = (r32((uint32_t)(0x11676194)));
  /* 1164bbc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164bbcc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bbd0 je 0x1164bbe0 */
  if (C.zf) goto L_1164bbe0;
  /* 1164bbd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bbd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1164bbd6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1164bbd9u);
  /* 1164bbd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bbdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164bbde jne 0x1164bbe4 */
  if (!C.zf) goto L_1164bbe4;
L_1164bbe0:;
  /* 1164bbe0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164bbe2 jmp 0x1164bbe9 */
  goto L_1164bbe9;
L_1164bbe4:;
  /* 1164bbe4 mov eax, 1 */
  EAX = (0x1u);
L_1164bbe9:;
  /* 1164bbe9 mov esp, ebp */
  ESP = (EBP);
  /* 1164bbeb pop ebp */
  EBP = (pop32());
  /* 1164bbec ret  */
  ESPCHK(0x1164bbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbf0 @ 0x1164bbf0 (23 bytes, 10 insns) */
void f_1164bbf0(void) {
  FTRACE(0x1164bbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164bbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164bbf1 mov ebp, esp */
  EBP = (ESP);
  /* 1164bbf3 mov eax, dword ptr [0x11676190] */
  EAX = (r32((uint32_t)(0x11676190)));
  /* 1164bbf8 push eax */
  push32((uint32_t)(EAX));
  /* 1164bbf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bbfc push ecx */
  push32((uint32_t)(ECX));
  /* 1164bbfd call 0x1164bc10 */
  push32(0x1164bc02u); f_1164bc10();
  /* 1164bc02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bc05 pop ebp */
  EBP = (pop32());
  /* 1164bc06 ret  */
  ESPCHK(0x1164bbf0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1164bc10 (87 bytes, 34 insns) */
void f_1164bc10(void) {
  FTRACE(0x1164bc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164bc10 push ebp */
  push32((uint32_t)(EBP));
  /* 1164bc11 mov ebp, esp */
  EBP = (ESP);
  /* 1164bc13 push ecx */
  push32((uint32_t)(ECX));
  /* 1164bc14 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bc18 jbe 0x1164bc1e */
  if ((C.cf||C.zf)) goto L_1164bc1e;
  /* 1164bc1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164bc1c jmp 0x1164bc63 */
  goto L_1164bc63;
L_1164bc1e:;
  /* 1164bc1e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bc22 ja 0x1164bc35 */
  if ((!C.cf&&!C.zf)) goto L_1164bc35;
  /* 1164bc24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bc27 push eax */
  push32((uint32_t)(EAX));
  /* 1164bc28 call 0x1164bc70 */
  push32(0x1164bc2du); f_1164bc70();
  /* 1164bc2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bc30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164bc33 jmp 0x1164bc3c */
  goto L_1164bc3c;
L_1164bc35:;
  /* 1164bc35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1164bc3c:;
  /* 1164bc3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bc40 jne 0x1164bc48 */
  if (!C.zf) goto L_1164bc48;
  /* 1164bc42 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bc46 jne 0x1164bc4d */
  if (!C.zf) goto L_1164bc4d;
L_1164bc48:;
  /* 1164bc48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164bc4b jmp 0x1164bc63 */
  goto L_1164bc63;
L_1164bc4d:;
  /* 1164bc4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bc50 push ecx */
  push32((uint32_t)(ECX));
  /* 1164bc51 call 0x1164bbc0 */
  push32(0x1164bc56u); f_1164bbc0();
  /* 1164bc56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bc59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164bc5b jne 0x1164bc61 */
  if (!C.zf) goto L_1164bc61;
  /* 1164bc5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164bc5f jmp 0x1164bc63 */
  goto L_1164bc63;
L_1164bc61:;
  /* 1164bc61 jmp 0x1164bc1e */
  goto L_1164bc1e;
L_1164bc63:;
  /* 1164bc63 mov esp, ebp */
  ESP = (EBP);
  /* 1164bc65 pop ebp */
  EBP = (pop32());
  /* 1164bc66 ret  */
  ESPCHK(0x1164bc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc70 @ 0x1164bc70 (109 bytes, 37 insns) */
void f_1164bc70(void) {
  FTRACE(0x1164bc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164bc70 push ebp */
  push32((uint32_t)(EBP));
  /* 1164bc71 mov ebp, esp */
  EBP = (ESP);
  /* 1164bc73 push ecx */
  push32((uint32_t)(ECX));
  /* 1164bc74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bc77 cmp eax, dword ptr [0x1167402c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1167402c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bc7d ja 0x1164bcad */
  if ((!C.cf&&!C.zf)) goto L_1164bcad;
  /* 1164bc7f push 9 */
  push32((uint32_t)(0x9u));
  /* 1164bc81 call 0x1164b880 */
  push32(0x1164bc86u); f_1164b880();
  /* 1164bc86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bc89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bc8c push ecx */
  push32((uint32_t)(ECX));
  /* 1164bc8d call 0x1164c7b0 */
  push32(0x1164bc92u); f_1164c7b0();
  /* 1164bc92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bc95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164bc98 push 9 */
  push32((uint32_t)(0x9u));
  /* 1164bc9a call 0x1164b920 */
  push32(0x1164bc9fu); f_1164b920();
  /* 1164bc9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bca2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bca6 je 0x1164bcad */
  if (C.zf) goto L_1164bcad;
  /* 1164bca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164bcab jmp 0x1164bcd9 */
  goto L_1164bcd9;
L_1164bcad:;
  /* 1164bcad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bcb1 jne 0x1164bcba */
  if (!C.zf) goto L_1164bcba;
  /* 1164bcb3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1164bcba:;
  /* 1164bcba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bcbd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bcc0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1164bcc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1164bcc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bcc9 push eax */
  push32((uint32_t)(EAX));
  /* 1164bcca push 0 */
  push32((uint32_t)(0x0u));
  /* 1164bccc mov ecx, dword ptr [0x1167794c] */
  ECX = (r32((uint32_t)(0x1167794c)));
  /* 1164bcd2 push ecx */
  push32((uint32_t)(ECX));
  /* 1164bcd3 call dword ptr [0x11678314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678314))), 0x1164bcd9u);
L_1164bcd9:;
  /* 1164bcd9 mov esp, ebp */
  ESP = (EBP);
  /* 1164bcdb pop ebp */
  EBP = (pop32());
  /* 1164bcdc ret  */
  ESPCHK(0x1164bc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bce0 @ 0x1164bce0 (10 bytes, 5 insns) */
void f_1164bce0(void) {
  FTRACE(0x1164bce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164bce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164bce1 mov ebp, esp */
  EBP = (ESP);
  /* 1164bce3 mov eax, 1 */
  EAX = (0x1u);
  /* 1164bce8 pop ebp */
  EBP = (pop32());
  /* 1164bce9 ret  */
  ESPCHK(0x1164bce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcf0 @ 0x1164bcf0 (173 bytes, 59 insns) */
void f_1164bcf0(void) {
  FTRACE(0x1164bcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164bcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164bcf1 mov ebp, esp */
  EBP = (ESP);
  /* 1164bcf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164bcf6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bcfa jbe 0x1164bd03 */
  if ((C.cf||C.zf)) goto L_1164bd03;
  /* 1164bcfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164bcfe jmp 0x1164bd99 */
  goto L_1164bd99;
L_1164bd03:;
  /* 1164bd03 push 9 */
  push32((uint32_t)(0x9u));
  /* 1164bd05 call 0x1164b880 */
  push32(0x1164bd0au); f_1164b880();
  /* 1164bd0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bd0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bd10 push eax */
  push32((uint32_t)(EAX));
  /* 1164bd11 call 0x1164c120 */
  push32(0x1164bd16u); f_1164c120();
  /* 1164bd16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bd19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164bd1c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bd20 je 0x1164bd61 */
  if (C.zf) goto L_1164bd61;
  /* 1164bd22 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164bd29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164bd2c cmp ecx, dword ptr [0x1167402c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1167402c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bd32 ja 0x1164bd52 */
  if ((!C.cf&&!C.zf)) goto L_1164bd52;
  /* 1164bd34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164bd37 push edx */
  push32((uint32_t)(EDX));
  /* 1164bd38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bd3b push eax */
  push32((uint32_t)(EAX));
  /* 1164bd3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164bd3f push ecx */
  push32((uint32_t)(ECX));
  /* 1164bd40 call 0x1164cff0 */
  push32(0x1164bd45u); f_1164cff0();
  /* 1164bd45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bd48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164bd4a je 0x1164bd52 */
  if (C.zf) goto L_1164bd52;
  /* 1164bd4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bd4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164bd52:;
  /* 1164bd52 push 9 */
  push32((uint32_t)(0x9u));
  /* 1164bd54 call 0x1164b920 */
  push32(0x1164bd59u); f_1164b920();
  /* 1164bd59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bd5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164bd5f jmp 0x1164bd99 */
  goto L_1164bd99;
L_1164bd61:;
  /* 1164bd61 push 9 */
  push32((uint32_t)(0x9u));
  /* 1164bd63 call 0x1164b920 */
  push32(0x1164bd68u); f_1164b920();
  /* 1164bd68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bd6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bd6f jne 0x1164bd78 */
  if (!C.zf) goto L_1164bd78;
  /* 1164bd71 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1164bd78:;
  /* 1164bd78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164bd7b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bd7e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1164bd80 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1164bd83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164bd86 push ecx */
  push32((uint32_t)(ECX));
  /* 1164bd87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bd8a push edx */
  push32((uint32_t)(EDX));
  /* 1164bd8b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1164bd8d mov eax, dword ptr [0x1167794c] */
  EAX = (r32((uint32_t)(0x1167794c)));
  /* 1164bd92 push eax */
  push32((uint32_t)(EAX));
  /* 1164bd93 call dword ptr [0x1167831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167831c))), 0x1164bd99u);
L_1164bd99:;
  /* 1164bd99 mov esp, ebp */
  ESP = (EBP);
  /* 1164bd9b pop ebp */
  EBP = (pop32());
  /* 1164bd9c ret  */
  ESPCHK(0x1164bcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bda0 @ 0x1164bda0 (490 bytes, 165 insns) */
void f_1164bda0(void) {
  FTRACE(0x1164bda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164bda0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164bda1 mov ebp, esp */
  EBP = (ESP);
  /* 1164bda3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164bda6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bdaa jne 0x1164bdbd */
  if (!C.zf) goto L_1164bdbd;
  /* 1164bdac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164bdaf push eax */
  push32((uint32_t)(EAX));
  /* 1164bdb0 call 0x1164bbf0 */
  push32(0x1164bdb5u); f_1164bbf0();
  /* 1164bdb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bdb8 jmp 0x1164bf86 */
  goto L_1164bf86;
L_1164bdbd:;
  /* 1164bdbd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bdc1 jne 0x1164bdd6 */
  if (!C.zf) goto L_1164bdd6;
  /* 1164bdc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bdc6 push ecx */
  push32((uint32_t)(ECX));
  /* 1164bdc7 call 0x1164bf90 */
  push32(0x1164bdccu); f_1164bf90();
  /* 1164bdcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bdcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164bdd1 jmp 0x1164bf86 */
  goto L_1164bf86;
L_1164bdd6:;
  /* 1164bdd6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1164bddd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bde1 ja 0x1164bf59 */
  if ((!C.cf&&!C.zf)) goto L_1164bf59;
  /* 1164bde7 push 9 */
  push32((uint32_t)(0x9u));
  /* 1164bde9 call 0x1164b880 */
  push32(0x1164bdeeu); f_1164b880();
  /* 1164bdee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bdf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bdf4 push edx */
  push32((uint32_t)(EDX));
  /* 1164bdf5 call 0x1164c120 */
  push32(0x1164bdfau); f_1164c120();
  /* 1164bdfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bdfd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1164be00 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164be04 je 0x1164bf1c */
  if (C.zf) goto L_1164bf1c;
  /* 1164be0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164be0d cmp eax, dword ptr [0x1167402c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1167402c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164be13 ja 0x1164be90 */
  if ((!C.cf&&!C.zf)) goto L_1164be90;
  /* 1164be15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164be18 push ecx */
  push32((uint32_t)(ECX));
  /* 1164be19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164be1c push edx */
  push32((uint32_t)(EDX));
  /* 1164be1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164be20 push eax */
  push32((uint32_t)(EAX));
  /* 1164be21 call 0x1164cff0 */
  push32(0x1164be26u); f_1164cff0();
  /* 1164be26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164be29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164be2b je 0x1164be35 */
  if (C.zf) goto L_1164be35;
  /* 1164be2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164be30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1164be33 jmp 0x1164be90 */
  goto L_1164be90;
L_1164be35:;
  /* 1164be35 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164be38 push edx */
  push32((uint32_t)(EDX));
  /* 1164be39 call 0x1164c7b0 */
  push32(0x1164be3eu); f_1164c7b0();
  /* 1164be3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164be41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164be44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164be48 je 0x1164be90 */
  if (C.zf) goto L_1164be90;
  /* 1164be4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164be4d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1164be50 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164be53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164be56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164be59 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164be5c jae 0x1164be66 */
  if (!C.cf) goto L_1164be66;
  /* 1164be5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164be61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1164be64 jmp 0x1164be6c */
  goto L_1164be6c;
L_1164be66:;
  /* 1164be66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164be69 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1164be6c:;
  /* 1164be6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164be6f push edx */
  push32((uint32_t)(EDX));
  /* 1164be70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164be73 push eax */
  push32((uint32_t)(EAX));
  /* 1164be74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164be77 push ecx */
  push32((uint32_t)(ECX));
  /* 1164be78 call 0x1164e640 */
  push32(0x1164be7du); f_1164e640();
  /* 1164be7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164be80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164be83 push edx */
  push32((uint32_t)(EDX));
  /* 1164be84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164be87 push eax */
  push32((uint32_t)(EAX));
  /* 1164be88 call 0x1164c1e0 */
  push32(0x1164be8du); f_1164c1e0();
  /* 1164be8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164be90:;
  /* 1164be90 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164be94 jne 0x1164bf10 */
  if (!C.zf) goto L_1164bf10;
  /* 1164be96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164be9a jne 0x1164bea3 */
  if (!C.zf) goto L_1164bea3;
  /* 1164be9c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1164bea3:;
  /* 1164bea3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164bea6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bea9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1164beac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1164beaf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164beb2 push edx */
  push32((uint32_t)(EDX));
  /* 1164beb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164beb5 mov eax, dword ptr [0x1167794c] */
  EAX = (r32((uint32_t)(0x1167794c)));
  /* 1164beba push eax */
  push32((uint32_t)(EAX));
  /* 1164bebb call dword ptr [0x11678314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678314))), 0x1164bec1u);
  /* 1164bec1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164bec4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bec8 je 0x1164bf10 */
  if (C.zf) goto L_1164bf10;
  /* 1164beca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164becd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1164bed0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164bed3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1164bed6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164bed9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bedc jae 0x1164bee6 */
  if (!C.cf) goto L_1164bee6;
  /* 1164bede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164bee1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1164bee4 jmp 0x1164beec */
  goto L_1164beec;
L_1164bee6:;
  /* 1164bee6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164bee9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1164beec:;
  /* 1164beec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164beef push eax */
  push32((uint32_t)(EAX));
  /* 1164bef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bef3 push ecx */
  push32((uint32_t)(ECX));
  /* 1164bef4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164bef7 push edx */
  push32((uint32_t)(EDX));
  /* 1164bef8 call 0x1164e640 */
  push32(0x1164befdu); f_1164e640();
  /* 1164befd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bf00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bf03 push eax */
  push32((uint32_t)(EAX));
  /* 1164bf04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164bf07 push ecx */
  push32((uint32_t)(ECX));
  /* 1164bf08 call 0x1164c1e0 */
  push32(0x1164bf0du); f_1164c1e0();
  /* 1164bf0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164bf10:;
  /* 1164bf10 push 9 */
  push32((uint32_t)(0x9u));
  /* 1164bf12 call 0x1164b920 */
  push32(0x1164bf17u); f_1164b920();
  /* 1164bf17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bf1a jmp 0x1164bf59 */
  goto L_1164bf59;
L_1164bf1c:;
  /* 1164bf1c push 9 */
  push32((uint32_t)(0x9u));
  /* 1164bf1e call 0x1164b920 */
  push32(0x1164bf23u); f_1164b920();
  /* 1164bf23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bf26 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bf2a jne 0x1164bf33 */
  if (!C.zf) goto L_1164bf33;
  /* 1164bf2c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1164bf33:;
  /* 1164bf33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164bf36 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bf39 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1164bf3c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1164bf3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164bf42 push eax */
  push32((uint32_t)(EAX));
  /* 1164bf43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bf46 push ecx */
  push32((uint32_t)(ECX));
  /* 1164bf47 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164bf49 mov edx, dword ptr [0x1167794c] */
  EDX = (r32((uint32_t)(0x1167794c)));
  /* 1164bf4f push edx */
  push32((uint32_t)(EDX));
  /* 1164bf50 call dword ptr [0x1167831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167831c))), 0x1164bf56u);
  /* 1164bf56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1164bf59:;
  /* 1164bf59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bf5d jne 0x1164bf68 */
  if (!C.zf) goto L_1164bf68;
  /* 1164bf5f cmp dword ptr [0x11676190], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676190))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bf66 jne 0x1164bf6d */
  if (!C.zf) goto L_1164bf6d;
L_1164bf68:;
  /* 1164bf68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164bf6b jmp 0x1164bf86 */
  goto L_1164bf86;
L_1164bf6d:;
  /* 1164bf6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164bf70 push eax */
  push32((uint32_t)(EAX));
  /* 1164bf71 call 0x1164bbc0 */
  push32(0x1164bf76u); f_1164bbc0();
  /* 1164bf76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bf79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164bf7b jne 0x1164bf81 */
  if (!C.zf) goto L_1164bf81;
  /* 1164bf7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164bf7f jmp 0x1164bf86 */
  goto L_1164bf86;
L_1164bf81:;
  /* 1164bf81 jmp 0x1164bdd6 */
  goto L_1164bdd6;
L_1164bf86:;
  /* 1164bf86 mov esp, ebp */
  ESP = (EBP);
  /* 1164bf88 pop ebp */
  EBP = (pop32());
  /* 1164bf89 ret  */
  ESPCHK(0x1164bda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf90 @ 0x1164bf90 (104 bytes, 38 insns) */
void f_1164bf90(void) {
  FTRACE(0x1164bf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164bf90 push ebp */
  push32((uint32_t)(EBP));
  /* 1164bf91 mov ebp, esp */
  EBP = (ESP);
  /* 1164bf93 push ecx */
  push32((uint32_t)(ECX));
  /* 1164bf94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bf98 jne 0x1164bf9c */
  if (!C.zf) goto L_1164bf9c;
  /* 1164bf9a jmp 0x1164bff4 */
  goto L_1164bff4;
L_1164bf9c:;
  /* 1164bf9c push 9 */
  push32((uint32_t)(0x9u));
  /* 1164bf9e call 0x1164b880 */
  push32(0x1164bfa3u); f_1164b880();
  /* 1164bfa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bfa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bfa9 push eax */
  push32((uint32_t)(EAX));
  /* 1164bfaa call 0x1164c120 */
  push32(0x1164bfafu); f_1164c120();
  /* 1164bfaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bfb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164bfb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164bfb9 je 0x1164bfd7 */
  if (C.zf) goto L_1164bfd7;
  /* 1164bfbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bfbe push ecx */
  push32((uint32_t)(ECX));
  /* 1164bfbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164bfc2 push edx */
  push32((uint32_t)(EDX));
  /* 1164bfc3 call 0x1164c1e0 */
  push32(0x1164bfc8u); f_1164c1e0();
  /* 1164bfc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bfcb push 9 */
  push32((uint32_t)(0x9u));
  /* 1164bfcd call 0x1164b920 */
  push32(0x1164bfd2u); f_1164b920();
  /* 1164bfd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bfd5 jmp 0x1164bff4 */
  goto L_1164bff4;
L_1164bfd7:;
  /* 1164bfd7 push 9 */
  push32((uint32_t)(0x9u));
  /* 1164bfd9 call 0x1164b920 */
  push32(0x1164bfdeu); f_1164b920();
  /* 1164bfde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164bfe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164bfe4 push eax */
  push32((uint32_t)(EAX));
  /* 1164bfe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164bfe7 mov ecx, dword ptr [0x1167794c] */
  ECX = (r32((uint32_t)(0x1167794c)));
  /* 1164bfed push ecx */
  push32((uint32_t)(ECX));
  /* 1164bfee call dword ptr [0x11678384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678384))), 0x1164bff4u);
L_1164bff4:;
  /* 1164bff4 mov esp, ebp */
  ESP = (EBP);
  /* 1164bff6 pop ebp */
  EBP = (pop32());
  /* 1164bff7 ret  */
  ESPCHK(0x1164bf90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c000 @ 0x1164c000 (116 bytes, 34 insns) */
void f_1164c000(void) {
  FTRACE(0x1164c000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164c000 push ebp */
  push32((uint32_t)(EBP));
  /* 1164c001 mov ebp, esp */
  EBP = (ESP);
  /* 1164c003 push ecx */
  push32((uint32_t)(ECX));
  /* 1164c004 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1164c00b push 9 */
  push32((uint32_t)(0x9u));
  /* 1164c00d call 0x1164b880 */
  push32(0x1164c012u); f_1164b880();
  /* 1164c012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c015 call 0x1164d710 */
  push32(0x1164c01au); f_1164d710();
  /* 1164c01a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164c01c jge 0x1164c025 */
  if ((C.sf==C.of)) goto L_1164c025;
  /* 1164c01e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1164c025:;
  /* 1164c025 push 9 */
  push32((uint32_t)(0x9u));
  /* 1164c027 call 0x1164b920 */
  push32(0x1164c02cu); f_1164b920();
  /* 1164c02c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c02f push 0 */
  push32((uint32_t)(0x0u));
  /* 1164c031 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164c033 mov eax, dword ptr [0x1167794c] */
  EAX = (r32((uint32_t)(0x1167794c)));
  /* 1164c038 push eax */
  push32((uint32_t)(EAX));
  /* 1164c039 call dword ptr [0x116783b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783b0))), 0x1164c03fu);
  /* 1164c03f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164c041 jne 0x1164c06d */
  if (!C.zf) goto L_1164c06d;
  /* 1164c043 call dword ptr [0x11678390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678390))), 0x1164c049u);
  /* 1164c049 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c04c jne 0x1164c066 */
  if (!C.zf) goto L_1164c066;
  /* 1164c04e call 0x1164fc40 */
  push32(0x1164c053u); f_1164fc40();
  /* 1164c053 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1164c059 call 0x1164fc30 */
  push32(0x1164c05eu); f_1164fc30();
  /* 1164c05e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1164c064 jmp 0x1164c06d */
  goto L_1164c06d;
L_1164c066:;
  /* 1164c066 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1164c06d:;
  /* 1164c06d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c070 mov esp, ebp */
  ESP = (EBP);
  /* 1164c072 pop ebp */
  EBP = (pop32());
  /* 1164c073 ret  */
  ESPCHK(0x1164c000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c080 @ 0x1164c080 (10 bytes, 5 insns) */
void f_1164c080(void) {
  FTRACE(0x1164c080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164c080 push ebp */
  push32((uint32_t)(EBP));
  /* 1164c081 mov ebp, esp */
  EBP = (ESP);
  /* 1164c083 call 0x1164c000 */
  push32(0x1164c088u); f_1164c000();
  /* 1164c088 pop ebp */
  EBP = (pop32());
  /* 1164c089 ret  */
  ESPCHK(0x1164c080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c090 @ 0x1164c090 (10 bytes, 5 insns) */
void f_1164c090(void) {
  FTRACE(0x1164c090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164c090 push ebp */
  push32((uint32_t)(EBP));
  /* 1164c091 mov ebp, esp */
  EBP = (ESP);
  /* 1164c093 mov eax, dword ptr [0x1167402c] */
  EAX = (r32((uint32_t)(0x1167402c)));
  /* 1164c098 pop ebp */
  EBP = (pop32());
  /* 1164c099 ret  */
  ESPCHK(0x1164c090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a0 @ 0x1164c0a0 (31 bytes, 11 insns) */
void f_1164c0a0(void) {
  FTRACE(0x1164c0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164c0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164c0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1164c0a3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c0aa jbe 0x1164c0b0 */
  if ((C.cf||C.zf)) goto L_1164c0b0;
  /* 1164c0ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164c0ae jmp 0x1164c0bd */
  goto L_1164c0bd;
L_1164c0b0:;
  /* 1164c0b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c0b3 mov dword ptr [0x1167402c], eax */
  w32((uint32_t)(0x1167402c), (EAX));
  /* 1164c0b8 mov eax, 1 */
  EAX = (0x1u);
L_1164c0bd:;
  /* 1164c0bd pop ebp */
  EBP = (pop32());
  /* 1164c0be ret  */
  ESPCHK(0x1164c0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0c0 @ 0x1164c0c0 (89 bytes, 20 insns) */
void f_1164c0c0(void) {
  FTRACE(0x1164c0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164c0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164c0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1164c0c3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1164c0c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164c0ca mov eax, dword ptr [0x1167794c] */
  EAX = (r32((uint32_t)(0x1167794c)));
  /* 1164c0cf push eax */
  push32((uint32_t)(EAX));
  /* 1164c0d0 call dword ptr [0x11678314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678314))), 0x1164c0d6u);
  /* 1164c0d6 mov dword ptr [0x11677948], eax */
  w32((uint32_t)(0x11677948), (EAX));
  /* 1164c0db cmp dword ptr [0x11677948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c0e2 jne 0x1164c0e8 */
  if (!C.zf) goto L_1164c0e8;
  /* 1164c0e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164c0e6 jmp 0x1164c117 */
  goto L_1164c117;
L_1164c0e8:;
  /* 1164c0e8 mov ecx, dword ptr [0x11677948] */
  ECX = (r32((uint32_t)(0x11677948)));
  /* 1164c0ee mov dword ptr [0x1167793c], ecx */
  w32((uint32_t)(0x1167793c), (ECX));
  /* 1164c0f4 mov dword ptr [0x11677940], 0 */
  w32((uint32_t)(0x11677940), (0x0u));
  /* 1164c0fe mov dword ptr [0x11677944], 0 */
  w32((uint32_t)(0x11677944), (0x0u));
  /* 1164c108 mov dword ptr [0x11677928], 0x10 */
  w32((uint32_t)(0x11677928), (0x10u));
  /* 1164c112 mov eax, 1 */
  EAX = (0x1u);
L_1164c117:;
  /* 1164c117 pop ebp */
  EBP = (pop32());
  /* 1164c118 ret  */
  ESPCHK(0x1164c0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c120 @ 0x1164c120 (85 bytes, 29 insns) */
void f_1164c120(void) {
  FTRACE(0x1164c120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164c120 push ebp */
  push32((uint32_t)(EBP));
  /* 1164c121 mov ebp, esp */
  EBP = (ESP);
  /* 1164c123 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c126 mov eax, dword ptr [0x11677944] */
  EAX = (r32((uint32_t)(0x11677944)));
  /* 1164c12b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164c12e mov ecx, dword ptr [0x11677948] */
  ECX = (r32((uint32_t)(0x11677948)));
  /* 1164c134 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c136 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1164c139 mov edx, dword ptr [0x11677948] */
  EDX = (r32((uint32_t)(0x11677948)));
  /* 1164c13f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1164c142:;
  /* 1164c142 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164c145 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c148 jae 0x1164c16f */
  if (!C.cf) goto L_1164c16f;
  /* 1164c14a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164c14d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c150 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c153 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1164c156 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c15d jae 0x1164c164 */
  if (!C.cf) goto L_1164c164;
  /* 1164c15f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164c162 jmp 0x1164c171 */
  goto L_1164c171;
L_1164c164:;
  /* 1164c164 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164c167 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c16a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164c16d jmp 0x1164c142 */
  goto L_1164c142;
L_1164c16f:;
  /* 1164c16f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1164c171:;
  /* 1164c171 mov esp, ebp */
  ESP = (EBP);
  /* 1164c173 pop ebp */
  EBP = (pop32());
  /* 1164c174 ret  */
  ESPCHK(0x1164c120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c180 @ 0x1164c180 (95 bytes, 33 insns) */
void f_1164c180(void) {
  FTRACE(0x1164c180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164c180 push ebp */
  push32((uint32_t)(EBP));
  /* 1164c181 mov ebp, esp */
  EBP = (ESP);
  /* 1164c183 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c189 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164c18c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c18f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1164c192 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164c195 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1164c198 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1164c19b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164c1a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c1a3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164c1a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c1a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1164c1ab and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1164c1ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164c1af jne 0x1164c1d1 */
  if (!C.zf) goto L_1164c1d1;
  /* 1164c1b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164c1b4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1164c1b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164c1b9 jne 0x1164c1d1 */
  if (!C.zf) goto L_1164c1d1;
  /* 1164c1bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164c1be and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164c1c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164c1c6 je 0x1164c1d1 */
  if (C.zf) goto L_1164c1d1;
  /* 1164c1c8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1164c1cf jmp 0x1164c1d8 */
  goto L_1164c1d8;
L_1164c1d1:;
  /* 1164c1d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1164c1d8:;
  /* 1164c1d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164c1db mov esp, ebp */
  ESP = (EBP);
  /* 1164c1dd pop ebp */
  EBP = (pop32());
  /* 1164c1de ret  */
  ESPCHK(0x1164c180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1e0 @ 0x1164c1e0 (1485 bytes, 453 insns) */
void f_1164c1e0(void) {
  FTRACE(0x1164c1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164c1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164c1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1164c1e3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c1e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c1e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1164c1ec mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1164c1ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c1f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164c1f5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c1f8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1164c1fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164c1fe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1164c201 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164c204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c207 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164c20d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c210 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1164c217 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1164c21a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164c21d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c220 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1164c223 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164c226 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164c228 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c22b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1164c22e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164c231 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c234 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1164c237 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164c23a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164c23c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1164c23f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164c242 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1164c245 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1164c248 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164c24b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1164c24e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164c250 jne 0x1164c378 */
  if (!C.zf) goto L_1164c378;
  /* 1164c256 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164c259 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1164c25c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c25f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1164c262 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c266 jbe 0x1164c26f */
  if ((C.cf||C.zf)) goto L_1164c26f;
  /* 1164c268 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1164c26f:;
  /* 1164c26f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164c272 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164c275 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164c278 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c27b jne 0x1164c351 */
  if (!C.zf) goto L_1164c351;
  /* 1164c281 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c285 jae 0x1164c2e6 */
  if (!C.cf) goto L_1164c2e6;
  /* 1164c287 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164c28c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164c28f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164c291 not eax */
  EAX = (~(EAX));
  /* 1164c293 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c296 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c299 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1164c29d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1164c29f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c2a2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c2a5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1164c2a9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c2ac add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c2af mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1164c2b2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1164c2b5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c2b8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c2bb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1164c2be mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c2c1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c2c4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1164c2c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164c2ca jne 0x1164c2e4 */
  if (!C.zf) goto L_1164c2e4;
  /* 1164c2cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164c2d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164c2d4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164c2d6 not eax */
  EAX = (~(EAX));
  /* 1164c2d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c2db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164c2dd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1164c2df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c2e2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1164c2e4:;
  /* 1164c2e4 jmp 0x1164c351 */
  goto L_1164c351;
L_1164c2e6:;
  /* 1164c2e6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164c2e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c2ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164c2f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164c2f3 not edx */
  EDX = (~(EDX));
  /* 1164c2f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c2f8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c2fb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1164c302 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164c304 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c307 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c30a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1164c311 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c314 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c317 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1164c31a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1164c31d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c320 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c323 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1164c326 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c329 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c32c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1164c330 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164c332 jne 0x1164c351 */
  if (!C.zf) goto L_1164c351;
  /* 1164c334 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164c337 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c33a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164c33f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164c341 not edx */
  EDX = (~(EDX));
  /* 1164c343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c346 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164c349 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1164c34b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c34e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1164c351:;
  /* 1164c351 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164c354 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1164c357 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164c35a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1164c35d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1164c360 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164c363 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164c366 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164c369 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1164c36c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1164c36f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164c372 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c375 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1164c378:;
  /* 1164c378 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164c37b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1164c37e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c381 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1164c384 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c388 jbe 0x1164c391 */
  if ((C.cf||C.zf)) goto L_1164c391;
  /* 1164c38a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1164c391:;
  /* 1164c391 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164c394 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1164c397 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164c399 jne 0x1164c4f5 */
  if (!C.zf) goto L_1164c4f5;
  /* 1164c39f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164c3a2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c3a5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1164c3a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164c3ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1164c3ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c3b1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1164c3b4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c3b8 jbe 0x1164c3c1 */
  if ((C.cf||C.zf)) goto L_1164c3c1;
  /* 1164c3ba mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1164c3c1:;
  /* 1164c3c1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164c3c4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c3c7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1164c3ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164c3cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1164c3d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c3d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1164c3d6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c3da jbe 0x1164c3e3 */
  if ((C.cf||C.zf)) goto L_1164c3e3;
  /* 1164c3dc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1164c3e3:;
  /* 1164c3e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164c3e6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c3e9 je 0x1164c4ef */
  if (C.zf) goto L_1164c4ef;
  /* 1164c3ef mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1164c3f2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1164c3f5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164c3f8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c3fb jne 0x1164c4d1 */
  if (!C.zf) goto L_1164c4d1;
  /* 1164c401 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c405 jae 0x1164c466 */
  if (!C.cf) goto L_1164c466;
  /* 1164c407 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164c40c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164c40f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164c411 not edx */
  EDX = (~(EDX));
  /* 1164c413 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c416 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c419 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1164c41d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164c41f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c422 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c425 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1164c429 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c42c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c42f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1164c432 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1164c435 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c438 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c43b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1164c43e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c441 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c444 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1164c448 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164c44a jne 0x1164c464 */
  if (!C.zf) goto L_1164c464;
  /* 1164c44c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164c451 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164c454 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164c456 not edx */
  EDX = (~(EDX));
  /* 1164c458 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c45b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164c45d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1164c45f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c462 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1164c464:;
  /* 1164c464 jmp 0x1164c4d1 */
  goto L_1164c4d1;
L_1164c466:;
  /* 1164c466 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164c469 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c46c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164c471 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164c473 not eax */
  EAX = (~(EAX));
  /* 1164c475 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c478 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c47b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1164c482 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1164c484 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c487 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c48a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1164c491 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c494 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c497 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1164c49a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1164c49d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c4a0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c4a3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1164c4a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c4a9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c4ac movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1164c4b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164c4b2 jne 0x1164c4d1 */
  if (!C.zf) goto L_1164c4d1;
  /* 1164c4b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164c4b7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c4ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164c4bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164c4c1 not eax */
  EAX = (~(EAX));
  /* 1164c4c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c4c6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164c4c9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1164c4cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c4ce mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1164c4d1:;
  /* 1164c4d1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1164c4d4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1164c4d7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1164c4da mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164c4dd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1164c4e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1164c4e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1164c4e6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1164c4e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1164c4ec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1164c4ef:;
  /* 1164c4ef mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1164c4f2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1164c4f5:;
  /* 1164c4f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164c4f8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1164c4fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164c4fd jne 0x1164c50b */
  if (!C.zf) goto L_1164c50b;
  /* 1164c4ff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164c502 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c505 je 0x1164c61b */
  if (C.zf) goto L_1164c61b;
L_1164c50b:;
  /* 1164c50b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164c50e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164c511 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1164c514 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1164c517 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164c51a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164c51d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164c520 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1164c523 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164c526 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164c529 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1164c52c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164c52f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164c532 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1164c535 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164c538 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164c53b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164c53e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1164c541 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164c544 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164c547 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164c54a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c54d jne 0x1164c61b */
  if (!C.zf) goto L_1164c61b;
  /* 1164c553 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c557 jae 0x1164c5b4 */
  if (!C.cf) goto L_1164c5b4;
  /* 1164c559 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c55c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c55f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1164c563 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c566 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c569 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1164c56c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1164c56f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c572 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c575 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1164c578 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164c57a jne 0x1164c592 */
  if (!C.zf) goto L_1164c592;
  /* 1164c57c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164c581 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164c584 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164c586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c589 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164c58b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1164c58d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c590 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1164c592:;
  /* 1164c592 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164c597 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164c59a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164c59c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c59f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c5a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1164c5a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1164c5a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c5ab mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c5ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1164c5b2 jmp 0x1164c61b */
  goto L_1164c61b;
L_1164c5b4:;
  /* 1164c5b4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c5b7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c5ba movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1164c5be mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c5c1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c5c4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1164c5c7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1164c5ca mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c5cd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c5d0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1164c5d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164c5d5 jne 0x1164c5f2 */
  if (!C.zf) goto L_1164c5f2;
  /* 1164c5d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164c5da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c5dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164c5e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164c5e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c5e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164c5ea or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1164c5ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c5ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1164c5f2:;
  /* 1164c5f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164c5f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c5f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164c5fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164c5ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c602 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c605 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1164c60c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1164c60e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c611 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1164c614 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1164c61b:;
  /* 1164c61b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164c61e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164c621 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1164c623 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164c626 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c629 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164c62c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1164c62f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164c632 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1164c634 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c637 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164c63a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1164c63c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164c63f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c642 jne 0x1164c7a9 */
  if (!C.zf) goto L_1164c7a9;
  /* 1164c648 cmp dword ptr [0x11677940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c64f je 0x1164c798 */
  if (C.zf) goto L_1164c798;
  /* 1164c655 mov eax, dword ptr [0x11677938] */
  EAX = (r32((uint32_t)(0x11677938)));
  /* 1164c65a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1164c65d mov ecx, dword ptr [0x11677940] */
  ECX = (r32((uint32_t)(0x11677940)));
  /* 1164c663 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1164c666 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c668 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1164c66b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1164c670 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1164c675 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c678 push eax */
  push32((uint32_t)(EAX));
  /* 1164c679 call dword ptr [0x11678330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678330))), 0x1164c67fu);
  /* 1164c67f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164c684 mov ecx, dword ptr [0x11677938] */
  ECX = (r32((uint32_t)(0x11677938)));
  /* 1164c68a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164c68c mov eax, dword ptr [0x11677940] */
  EAX = (r32((uint32_t)(0x11677940)));
  /* 1164c691 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1164c694 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1164c696 mov edx, dword ptr [0x11677940] */
  EDX = (r32((uint32_t)(0x11677940)));
  /* 1164c69c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1164c69f mov eax, dword ptr [0x11677940] */
  EAX = (r32((uint32_t)(0x11677940)));
  /* 1164c6a4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1164c6a7 mov edx, dword ptr [0x11677938] */
  EDX = (r32((uint32_t)(0x11677938)));
  /* 1164c6ad mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1164c6b8 mov eax, dword ptr [0x11677940] */
  EAX = (r32((uint32_t)(0x11677940)));
  /* 1164c6bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1164c6c0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1164c6c3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1164c6c6 mov eax, dword ptr [0x11677940] */
  EAX = (r32((uint32_t)(0x11677940)));
  /* 1164c6cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1164c6ce mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1164c6d1 mov edx, dword ptr [0x11677940] */
  EDX = (r32((uint32_t)(0x11677940)));
  /* 1164c6d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1164c6da movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1164c6de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164c6e0 jne 0x1164c6f6 */
  if (!C.zf) goto L_1164c6f6;
  /* 1164c6e2 mov edx, dword ptr [0x11677940] */
  EDX = (r32((uint32_t)(0x11677940)));
  /* 1164c6e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1164c6eb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1164c6ed mov ecx, dword ptr [0x11677940] */
  ECX = (r32((uint32_t)(0x11677940)));
  /* 1164c6f3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1164c6f6:;
  /* 1164c6f6 mov edx, dword ptr [0x11677940] */
  EDX = (r32((uint32_t)(0x11677940)));
  /* 1164c6fc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c700 jne 0x1164c798 */
  if (!C.zf) goto L_1164c798;
  /* 1164c706 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1164c70b push 0 */
  push32((uint32_t)(0x0u));
  /* 1164c70d mov eax, dword ptr [0x11677940] */
  EAX = (r32((uint32_t)(0x11677940)));
  /* 1164c712 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1164c715 push ecx */
  push32((uint32_t)(ECX));
  /* 1164c716 call dword ptr [0x11678330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678330))), 0x1164c71cu);
  /* 1164c71c mov edx, dword ptr [0x11677940] */
  EDX = (r32((uint32_t)(0x11677940)));
  /* 1164c722 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1164c725 push eax */
  push32((uint32_t)(EAX));
  /* 1164c726 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164c728 mov ecx, dword ptr [0x1167794c] */
  ECX = (r32((uint32_t)(0x1167794c)));
  /* 1164c72e push ecx */
  push32((uint32_t)(ECX));
  /* 1164c72f call dword ptr [0x11678384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678384))), 0x1164c735u);
  /* 1164c735 mov edx, dword ptr [0x11677944] */
  EDX = (r32((uint32_t)(0x11677944)));
  /* 1164c73b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164c73e mov eax, dword ptr [0x11677948] */
  EAX = (r32((uint32_t)(0x11677948)));
  /* 1164c743 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c745 mov ecx, dword ptr [0x11677940] */
  ECX = (r32((uint32_t)(0x11677940)));
  /* 1164c74b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c74e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c750 push eax */
  push32((uint32_t)(EAX));
  /* 1164c751 mov edx, dword ptr [0x11677940] */
  EDX = (r32((uint32_t)(0x11677940)));
  /* 1164c757 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c75a push edx */
  push32((uint32_t)(EDX));
  /* 1164c75b mov eax, dword ptr [0x11677940] */
  EAX = (r32((uint32_t)(0x11677940)));
  /* 1164c760 push eax */
  push32((uint32_t)(EAX));
  /* 1164c761 call 0x1164b450 */
  push32(0x1164c766u); f_1164b450();
  /* 1164c766 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c769 mov ecx, dword ptr [0x11677944] */
  ECX = (r32((uint32_t)(0x11677944)));
  /* 1164c76f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c772 mov dword ptr [0x11677944], ecx */
  w32((uint32_t)(0x11677944), (ECX));
  /* 1164c778 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c77b cmp edx, dword ptr [0x11677940] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11677940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c781 jbe 0x1164c78c */
  if ((C.cf||C.zf)) goto L_1164c78c;
  /* 1164c783 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c786 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c789 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1164c78c:;
  /* 1164c78c mov ecx, dword ptr [0x11677948] */
  ECX = (r32((uint32_t)(0x11677948)));
  /* 1164c792 mov dword ptr [0x1167793c], ecx */
  w32((uint32_t)(0x1167793c), (ECX));
L_1164c798:;
  /* 1164c798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c79b mov dword ptr [0x11677940], edx */
  w32((uint32_t)(0x11677940), (EDX));
  /* 1164c7a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164c7a4 mov dword ptr [0x11677938], eax */
  w32((uint32_t)(0x11677938), (EAX));
L_1164c7a9:;
  /* 1164c7a9 mov esp, ebp */
  ESP = (EBP);
  /* 1164c7ab pop ebp */
  EBP = (pop32());
  /* 1164c7ac ret  */
  ESPCHK(0x1164c1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7b0 @ 0x1164c7b0 (1334 bytes, 427 insns) */
void f_1164c7b0(void) {
  FTRACE(0x1164c7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164c7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164c7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1164c7b3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c7b6 push esi */
  push32((uint32_t)(ESI));
  /* 1164c7b7 mov eax, dword ptr [0x11677944] */
  EAX = (r32((uint32_t)(0x11677944)));
  /* 1164c7bc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164c7bf mov ecx, dword ptr [0x11677948] */
  ECX = (r32((uint32_t)(0x11677948)));
  /* 1164c7c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c7c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1164c7ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164c7cd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c7d0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1164c7d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1164c7d6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164c7d9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1164c7dc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c7df mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1164c7e2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c7e6 jge 0x1164c7fc */
  if ((C.sf==C.of)) goto L_1164c7fc;
  /* 1164c7e8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164c7eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164c7ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164c7f0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1164c7f3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1164c7fa jmp 0x1164c811 */
  goto L_1164c811;
L_1164c7fc:;
  /* 1164c7fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1164c803 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164c806 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164c809 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164c80c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164c80e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1164c811:;
  /* 1164c811 mov ecx, dword ptr [0x1167793c] */
  ECX = (r32((uint32_t)(0x1167793c)));
  /* 1164c817 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1164c81a:;
  /* 1164c81a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c81d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c820 jae 0x1164c846 */
  if (!C.cf) goto L_1164c846;
  /* 1164c822 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c825 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164c828 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1164c82a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c82d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1164c830 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1164c833 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1164c835 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164c837 je 0x1164c83b */
  if (C.zf) goto L_1164c83b;
  /* 1164c839 jmp 0x1164c846 */
  goto L_1164c846;
L_1164c83b:;
  /* 1164c83b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c83e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c841 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1164c844 jmp 0x1164c81a */
  goto L_1164c81a;
L_1164c846:;
  /* 1164c846 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c849 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c84c jne 0x1164c92d */
  if (!C.zf) goto L_1164c92d;
  /* 1164c852 mov eax, dword ptr [0x11677948] */
  EAX = (r32((uint32_t)(0x11677948)));
  /* 1164c857 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1164c85a:;
  /* 1164c85a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c85d cmp ecx, dword ptr [0x1167793c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1167793c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c863 jae 0x1164c889 */
  if (!C.cf) goto L_1164c889;
  /* 1164c865 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c868 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164c86b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1164c86d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c870 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1164c873 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1164c876 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164c878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164c87a je 0x1164c87e */
  if (C.zf) goto L_1164c87e;
  /* 1164c87c jmp 0x1164c889 */
  goto L_1164c889;
L_1164c87e:;
  /* 1164c87e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c881 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c884 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1164c887 jmp 0x1164c85a */
  goto L_1164c85a;
L_1164c889:;
  /* 1164c889 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c88c cmp ecx, dword ptr [0x1167793c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1167793c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c892 jne 0x1164c92d */
  if (!C.zf) goto L_1164c92d;
L_1164c898:;
  /* 1164c898 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c89b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c89e jae 0x1164c8b6 */
  if (!C.cf) goto L_1164c8b6;
  /* 1164c8a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c8a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c8a7 je 0x1164c8ab */
  if (C.zf) goto L_1164c8ab;
  /* 1164c8a9 jmp 0x1164c8b6 */
  goto L_1164c8b6;
L_1164c8ab:;
  /* 1164c8ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c8ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c8b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1164c8b4 jmp 0x1164c898 */
  goto L_1164c898;
L_1164c8b6:;
  /* 1164c8b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c8b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c8bc jne 0x1164c907 */
  if (!C.zf) goto L_1164c907;
  /* 1164c8be mov eax, dword ptr [0x11677948] */
  EAX = (r32((uint32_t)(0x11677948)));
  /* 1164c8c3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1164c8c6:;
  /* 1164c8c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c8c9 cmp ecx, dword ptr [0x1167793c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1167793c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c8cf jae 0x1164c8e7 */
  if (!C.cf) goto L_1164c8e7;
  /* 1164c8d1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c8d4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c8d8 je 0x1164c8dc */
  if (C.zf) goto L_1164c8dc;
  /* 1164c8da jmp 0x1164c8e7 */
  goto L_1164c8e7;
L_1164c8dc:;
  /* 1164c8dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c8df add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c8e2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1164c8e5 jmp 0x1164c8c6 */
  goto L_1164c8c6;
L_1164c8e7:;
  /* 1164c8e7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c8ea cmp ecx, dword ptr [0x1167793c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1167793c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c8f0 jne 0x1164c907 */
  if (!C.zf) goto L_1164c907;
  /* 1164c8f2 call 0x1164ccf0 */
  push32(0x1164c8f7u); f_1164ccf0();
  /* 1164c8f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1164c8fa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c8fe jne 0x1164c907 */
  if (!C.zf) goto L_1164c907;
  /* 1164c900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164c902 jmp 0x1164cce1 */
  goto L_1164cce1;
L_1164c907:;
  /* 1164c907 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c90a push edx */
  push32((uint32_t)(EDX));
  /* 1164c90b call 0x1164ce00 */
  push32(0x1164c910u); f_1164ce00();
  /* 1164c910 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c913 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c916 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1164c919 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1164c91b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c91e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1164c921 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c924 jne 0x1164c92d */
  if (!C.zf) goto L_1164c92d;
  /* 1164c926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164c928 jmp 0x1164cce1 */
  goto L_1164cce1;
L_1164c92d:;
  /* 1164c92d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c930 mov dword ptr [0x1167793c], edx */
  w32((uint32_t)(0x1167793c), (EDX));
  /* 1164c936 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164c939 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1164c93c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1164c93f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164c942 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1164c944 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1164c947 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c94b je 0x1164c970 */
  if (C.zf) goto L_1164c970;
  /* 1164c94d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164c950 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164c953 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164c956 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1164c95a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164c95d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164c960 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1164c963 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1164c96a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1164c96c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164c96e jne 0x1164c9a5 */
  if (!C.zf) goto L_1164c9a5;
L_1164c970:;
  /* 1164c970 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1164c977:;
  /* 1164c977 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164c97a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164c97d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164c980 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1164c984 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164c987 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164c98a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1164c98d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1164c994 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1164c996 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164c998 jne 0x1164c9a5 */
  if (!C.zf) goto L_1164c9a5;
  /* 1164c99a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164c99d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164c9a0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1164c9a3 jmp 0x1164c977 */
  goto L_1164c977;
L_1164c9a5:;
  /* 1164c9a5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164c9a8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164c9ae mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164c9b1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1164c9b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1164c9bb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1164c9c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164c9c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164c9c8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164c9cb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1164c9cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1164c9d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c9d6 jne 0x1164c9f2 */
  if (!C.zf) goto L_1164c9f2;
  /* 1164c9d8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1164c9df mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164c9e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164c9e5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1164c9e8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1164c9ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1164c9f2:;
  /* 1164c9f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164c9f6 jl 0x1164ca0b */
  if ((C.sf!=C.of)) goto L_1164ca0b;
  /* 1164c9f8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164c9fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1164c9fd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1164ca00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164ca03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ca06 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1164ca09 jmp 0x1164c9f2 */
  goto L_1164c9f2;
L_1164ca0b:;
  /* 1164ca0b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164ca0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164ca11 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1164ca15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1164ca18 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ca1b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1164ca1d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ca20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164ca23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ca26 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1164ca29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ca2c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1164ca2f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ca33 jle 0x1164ca3c */
  if ((C.zf||C.sf!=C.of)) goto L_1164ca3c;
  /* 1164ca35 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1164ca3c:;
  /* 1164ca3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164ca3f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ca42 je 0x1164cc60 */
  if (C.zf) goto L_1164cc60;
  /* 1164ca48 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ca4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ca4e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164ca51 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ca54 jne 0x1164cb2a */
  if (!C.zf) goto L_1164cb2a;
  /* 1164ca5a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ca5e jge 0x1164cabf */
  if ((C.sf==C.of)) goto L_1164cabf;
  /* 1164ca60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164ca65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164ca68 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164ca6a not eax */
  EAX = (~(EAX));
  /* 1164ca6c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164ca6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164ca72 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1164ca76 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1164ca78 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164ca7b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164ca7e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1164ca82 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164ca85 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ca88 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1164ca8b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1164ca8e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164ca91 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ca94 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1164ca97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164ca9a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ca9d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1164caa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164caa3 jne 0x1164cabd */
  if (!C.zf) goto L_1164cabd;
  /* 1164caa5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164caaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164caad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164caaf not eax */
  EAX = (~(EAX));
  /* 1164cab1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cab4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164cab6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1164cab8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cabb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1164cabd:;
  /* 1164cabd jmp 0x1164cb2a */
  goto L_1164cb2a;
L_1164cabf:;
  /* 1164cabf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164cac2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164cac5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164caca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164cacc not edx */
  EDX = (~(EDX));
  /* 1164cace mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164cad1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164cad4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1164cadb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164cadd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164cae0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164cae3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1164caea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164caed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164caf0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1164caf3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1164caf6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164caf9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cafc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1164caff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164cb02 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cb05 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1164cb09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164cb0b jne 0x1164cb2a */
  if (!C.zf) goto L_1164cb2a;
  /* 1164cb0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164cb10 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164cb13 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164cb18 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164cb1a not edx */
  EDX = (~(EDX));
  /* 1164cb1c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cb1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164cb22 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1164cb24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cb27 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1164cb2a:;
  /* 1164cb2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cb2d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1164cb30 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cb33 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1164cb36 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1164cb39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cb3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164cb3f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cb42 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1164cb45 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1164cb48 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164cb4c je 0x1164cc60 */
  if (C.zf) goto L_1164cc60;
  /* 1164cb52 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164cb55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cb58 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1164cb5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1164cb5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cb61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164cb64 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164cb67 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1164cb6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cb6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164cb70 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1164cb73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164cb76 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cb79 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1164cb7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cb7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164cb82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cb85 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1164cb88 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cb8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cb8e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164cb91 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164cb94 jne 0x1164cc60 */
  if (!C.zf) goto L_1164cc60;
  /* 1164cb9a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164cb9e jge 0x1164cbfa */
  if ((C.sf==C.of)) goto L_1164cbfa;
  /* 1164cba0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164cba3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cba6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1164cbaa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164cbad add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cbb0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1164cbb3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1164cbb5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164cbb8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cbbb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1164cbbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164cbc0 jne 0x1164cbd8 */
  if (!C.zf) goto L_1164cbd8;
  /* 1164cbc2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164cbc7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164cbca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164cbcc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cbcf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164cbd1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1164cbd3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cbd6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1164cbd8:;
  /* 1164cbd8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164cbdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164cbe0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164cbe2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164cbe5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164cbe8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1164cbec or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164cbee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164cbf1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164cbf4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1164cbf8 jmp 0x1164cc60 */
  goto L_1164cc60;
L_1164cbfa:;
  /* 1164cbfa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164cbfd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cc00 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1164cc04 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164cc07 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cc0a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1164cc0d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1164cc0f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164cc12 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cc15 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1164cc18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164cc1a jne 0x1164cc37 */
  if (!C.zf) goto L_1164cc37;
  /* 1164cc1c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164cc1f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164cc22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164cc27 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164cc29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cc2c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164cc2f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1164cc31 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cc34 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1164cc37:;
  /* 1164cc37 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164cc3a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164cc3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164cc42 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164cc44 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164cc47 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164cc4a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1164cc51 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164cc53 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164cc56 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164cc59 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1164cc60:;
  /* 1164cc60 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164cc64 je 0x1164cc7a */
  if (C.zf) goto L_1164cc7a;
  /* 1164cc66 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cc69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164cc6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1164cc6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cc71 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cc74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164cc77 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1164cc7a:;
  /* 1164cc7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cc7d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cc80 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1164cc83 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164cc86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cc89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cc8c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1164cc8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164cc91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cc94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cc97 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cc9a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1164cc9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cca0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164cca2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cca5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1164cca7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ccaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164ccad mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1164ccaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164ccb1 jne 0x1164ccd3 */
  if (!C.zf) goto L_1164ccd3;
  /* 1164ccb3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164ccb6 cmp eax, dword ptr [0x11677940] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11677940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ccbc jne 0x1164ccd3 */
  if (!C.zf) goto L_1164ccd3;
  /* 1164ccbe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164ccc1 cmp ecx, dword ptr [0x11677938] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11677938))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ccc7 jne 0x1164ccd3 */
  if (!C.zf) goto L_1164ccd3;
  /* 1164ccc9 mov dword ptr [0x11677940], 0 */
  w32((uint32_t)(0x11677940), (0x0u));
L_1164ccd3:;
  /* 1164ccd3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1164ccd6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164ccd9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1164ccdb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ccde add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1164cce1:;
  /* 1164cce1 pop esi */
  ESI = (pop32());
  /* 1164cce2 mov esp, ebp */
  ESP = (EBP);
  /* 1164cce4 pop ebp */
  EBP = (pop32());
  /* 1164cce5 ret  */
  ESPCHK(0x1164c7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccf0 @ 0x1164ccf0 (271 bytes, 78 insns) */
void f_1164ccf0(void) {
  FTRACE(0x1164ccf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164ccf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164ccf1 mov ebp, esp */
  EBP = (ESP);
  /* 1164ccf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1164ccf4 mov eax, dword ptr [0x11677944] */
  EAX = (r32((uint32_t)(0x11677944)));
  /* 1164ccf9 cmp eax, dword ptr [0x11677928] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11677928))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ccff jne 0x1164cd4b */
  if (!C.zf) goto L_1164cd4b;
  /* 1164cd01 mov ecx, dword ptr [0x11677928] */
  ECX = (r32((uint32_t)(0x11677928)));
  /* 1164cd07 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cd0a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164cd0d push ecx */
  push32((uint32_t)(ECX));
  /* 1164cd0e mov edx, dword ptr [0x11677948] */
  EDX = (r32((uint32_t)(0x11677948)));
  /* 1164cd14 push edx */
  push32((uint32_t)(EDX));
  /* 1164cd15 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164cd17 mov eax, dword ptr [0x1167794c] */
  EAX = (r32((uint32_t)(0x1167794c)));
  /* 1164cd1c push eax */
  push32((uint32_t)(EAX));
  /* 1164cd1d call dword ptr [0x1167831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167831c))), 0x1164cd23u);
  /* 1164cd23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164cd26 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164cd2a jne 0x1164cd33 */
  if (!C.zf) goto L_1164cd33;
  /* 1164cd2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164cd2e jmp 0x1164cdfb */
  goto L_1164cdfb;
L_1164cd33:;
  /* 1164cd33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cd36 mov dword ptr [0x11677948], ecx */
  w32((uint32_t)(0x11677948), (ECX));
  /* 1164cd3c mov edx, dword ptr [0x11677928] */
  EDX = (r32((uint32_t)(0x11677928)));
  /* 1164cd42 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cd45 mov dword ptr [0x11677928], edx */
  w32((uint32_t)(0x11677928), (EDX));
L_1164cd4b:;
  /* 1164cd4b mov eax, dword ptr [0x11677944] */
  EAX = (r32((uint32_t)(0x11677944)));
  /* 1164cd50 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164cd53 mov ecx, dword ptr [0x11677948] */
  ECX = (r32((uint32_t)(0x11677948)));
  /* 1164cd59 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cd5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164cd5e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1164cd63 push 8 */
  push32((uint32_t)(0x8u));
  /* 1164cd65 mov edx, dword ptr [0x1167794c] */
  EDX = (r32((uint32_t)(0x1167794c)));
  /* 1164cd6b push edx */
  push32((uint32_t)(EDX));
  /* 1164cd6c call dword ptr [0x11678314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678314))), 0x1164cd72u);
  /* 1164cd72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cd75 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1164cd78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cd7b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164cd7f jne 0x1164cd85 */
  if (!C.zf) goto L_1164cd85;
  /* 1164cd81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164cd83 jmp 0x1164cdfb */
  goto L_1164cdfb;
L_1164cd85:;
  /* 1164cd85 push 4 */
  push32((uint32_t)(0x4u));
  /* 1164cd87 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1164cd8c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1164cd91 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164cd93 call dword ptr [0x1167830c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167830c))), 0x1164cd99u);
  /* 1164cd99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cd9c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1164cd9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cda2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164cda6 jne 0x1164cdc2 */
  if (!C.zf) goto L_1164cdc2;
  /* 1164cda8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cdab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1164cdae push ecx */
  push32((uint32_t)(ECX));
  /* 1164cdaf push 0 */
  push32((uint32_t)(0x0u));
  /* 1164cdb1 mov edx, dword ptr [0x1167794c] */
  EDX = (r32((uint32_t)(0x1167794c)));
  /* 1164cdb7 push edx */
  push32((uint32_t)(EDX));
  /* 1164cdb8 call dword ptr [0x11678384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678384))), 0x1164cdbeu);
  /* 1164cdbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164cdc0 jmp 0x1164cdfb */
  goto L_1164cdfb;
L_1164cdc2:;
  /* 1164cdc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cdc5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1164cdcb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cdce mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1164cdd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cdd8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1164cddf mov eax, dword ptr [0x11677944] */
  EAX = (r32((uint32_t)(0x11677944)));
  /* 1164cde4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cde7 mov dword ptr [0x11677944], eax */
  w32((uint32_t)(0x11677944), (EAX));
  /* 1164cdec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cdef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1164cdf2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1164cdf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1164cdfb:;
  /* 1164cdfb mov esp, ebp */
  ESP = (EBP);
  /* 1164cdfd pop ebp */
  EBP = (pop32());
  /* 1164cdfe ret  */
  ESPCHK(0x1164ccf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce00 @ 0x1164ce00 (494 bytes, 149 insns) */
void f_1164ce00(void) {
  FTRACE(0x1164ce00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164ce00 push ebp */
  push32((uint32_t)(EBP));
  /* 1164ce01 mov ebp, esp */
  EBP = (ESP);
  /* 1164ce03 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ce06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ce09 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1164ce0c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1164ce0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ce12 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1164ce15 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164ce18 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1164ce1f:;
  /* 1164ce1f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ce23 jl 0x1164ce38 */
  if ((C.sf!=C.of)) goto L_1164ce38;
  /* 1164ce25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ce28 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1164ce2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1164ce2d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164ce30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ce33 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1164ce36 jmp 0x1164ce1f */
  goto L_1164ce1f;
L_1164ce38:;
  /* 1164ce38 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164ce3b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164ce41 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164ce44 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1164ce4b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1164ce4e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1164ce55 jmp 0x1164ce60 */
  goto L_1164ce60;
L_1164ce57:;
  /* 1164ce57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164ce5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ce5d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1164ce60:;
  /* 1164ce60 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ce64 jge 0x1164ce86 */
  if ((C.sf==C.of)) goto L_1164ce86;
  /* 1164ce66 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164ce69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164ce6c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1164ce6f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1164ce72 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164ce75 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164ce78 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1164ce7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164ce7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164ce81 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1164ce84 jmp 0x1164ce57 */
  goto L_1164ce57;
L_1164ce86:;
  /* 1164ce86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164ce89 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1164ce8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ce8f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1164ce92 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ce94 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1164ce97 push 4 */
  push32((uint32_t)(0x4u));
  /* 1164ce99 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1164ce9e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1164cea3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cea6 push edx */
  push32((uint32_t)(EDX));
  /* 1164cea7 call dword ptr [0x1167830c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167830c))), 0x1164ceadu);
  /* 1164cead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164ceaf jne 0x1164ceb9 */
  if (!C.zf) goto L_1164ceb9;
  /* 1164ceb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164ceb4 jmp 0x1164cfea */
  goto L_1164cfea;
L_1164ceb9:;
  /* 1164ceb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cebc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cec1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1164cec4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cec7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164ceca jmp 0x1164ced8 */
  goto L_1164ced8;
L_1164cecc:;
  /* 1164cecc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cecf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ced5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164ced8:;
  /* 1164ced8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cedb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164cede ja 0x1164cf3d */
  if ((!C.cf&&!C.zf)) goto L_1164cf3d;
  /* 1164cee0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cee3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1164ceea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164ceed mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1164cef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164cefa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cefd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1164cf00 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cf03 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1164cf09 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cf0c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cf12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cf15 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1164cf18 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cf1b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164cf21 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cf24 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1164cf27 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cf2a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cf2f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1164cf32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164cf35 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1164cf3b jmp 0x1164cecc */
  goto L_1164cecc;
L_1164cf3d:;
  /* 1164cf3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164cf40 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cf46 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1164cf49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164cf4c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cf4f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164cf52 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1164cf55 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164cf58 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1164cf5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1164cf5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cf61 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164cf64 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1164cf67 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164cf6a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cf6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164cf70 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1164cf73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164cf76 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1164cf79 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1164cf7c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164cf7f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164cf82 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1164cf85 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164cf88 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164cf8b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1164cf93 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164cf96 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164cf99 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1164cfa4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164cfa7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1164cfab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164cfae mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1164cfb1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1164cfb4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164cfb7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1164cfba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164cfbc jne 0x1164cfcd */
  if (!C.zf) goto L_1164cfcd;
  /* 1164cfbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164cfc1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164cfc4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1164cfc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164cfca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1164cfcd:;
  /* 1164cfcd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164cfd2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164cfd5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164cfd7 not edx */
  EDX = (~(EDX));
  /* 1164cfd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164cfdc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1164cfdf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1164cfe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164cfe4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1164cfe7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1164cfea:;
  /* 1164cfea mov esp, ebp */
  ESP = (EBP);
  /* 1164cfec pop ebp */
  EBP = (pop32());
  /* 1164cfed ret  */
  ESPCHK(0x1164ce00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cff0 @ 0x1164cff0 (1515 bytes, 489 insns) */
void f_1164cff0(void) {
  FTRACE(0x1164cff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164cff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164cff1 mov ebp, esp */
  EBP = (ESP);
  /* 1164cff3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164cff6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164cff9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164cffc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1164cffe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1164d001 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d004 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1164d007 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1164d00a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d00d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164d010 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d013 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1164d016 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164d019 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1164d01c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1164d01f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d022 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164d028 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d02b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1164d032 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1164d035 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164d038 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d03b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1164d03e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d041 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164d043 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d046 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1164d049 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d04c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d04f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1164d052 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d055 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164d057 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1164d05a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164d05d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d060 jle 0x1164d316 */
  if ((C.zf||C.sf!=C.of)) goto L_1164d316;
  /* 1164d066 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164d069 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1164d06c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164d06e jne 0x1164d07b */
  if (!C.zf) goto L_1164d07b;
  /* 1164d070 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164d073 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d076 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d079 jle 0x1164d082 */
  if ((C.zf||C.sf!=C.of)) goto L_1164d082;
L_1164d07b:;
  /* 1164d07b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164d07d jmp 0x1164d5d7 */
  goto L_1164d5d7;
L_1164d082:;
  /* 1164d082 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164d085 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1164d088 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d08b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1164d08e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d092 jbe 0x1164d09b */
  if ((C.cf||C.zf)) goto L_1164d09b;
  /* 1164d094 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1164d09b:;
  /* 1164d09b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d09e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d0a1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164d0a4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d0a7 jne 0x1164d17d */
  if (!C.zf) goto L_1164d17d;
  /* 1164d0ad cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d0b1 jae 0x1164d112 */
  if (!C.cf) goto L_1164d112;
  /* 1164d0b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164d0b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164d0bb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164d0bd not edx */
  EDX = (~(EDX));
  /* 1164d0bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d0c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d0c5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1164d0c9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164d0cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d0ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d0d1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1164d0d5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d0d8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d0db mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1164d0de sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1164d0e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d0e4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d0e7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1164d0ea mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d0ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d0f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1164d0f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164d0f6 jne 0x1164d110 */
  if (!C.zf) goto L_1164d110;
  /* 1164d0f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164d0fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164d100 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164d102 not edx */
  EDX = (~(EDX));
  /* 1164d104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d107 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164d109 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1164d10b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d10e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1164d110:;
  /* 1164d110 jmp 0x1164d17d */
  goto L_1164d17d;
L_1164d112:;
  /* 1164d112 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164d115 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d118 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164d11d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164d11f not eax */
  EAX = (~(EAX));
  /* 1164d121 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d124 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d127 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1164d12e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1164d130 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d133 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d136 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1164d13d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d140 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d143 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1164d146 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1164d149 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d14c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d14f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1164d152 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d155 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d158 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1164d15c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164d15e jne 0x1164d17d */
  if (!C.zf) goto L_1164d17d;
  /* 1164d160 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164d163 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d166 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164d16b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164d16d not eax */
  EAX = (~(EAX));
  /* 1164d16f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d172 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164d175 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1164d177 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d17a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1164d17d:;
  /* 1164d17d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d180 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1164d183 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d186 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164d189 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1164d18c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d18f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1164d192 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d195 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1164d198 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1164d19b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164d19e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d1a1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d1a4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1164d1a7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d1ab jle 0x1164d2f7 */
  if ((C.zf||C.sf!=C.of)) goto L_1164d2f7;
  /* 1164d1b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d1b4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d1b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1164d1ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164d1bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1164d1c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d1c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1164d1c6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d1ca jbe 0x1164d1d3 */
  if ((C.cf||C.zf)) goto L_1164d1d3;
  /* 1164d1cc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1164d1d3:;
  /* 1164d1d3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164d1d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164d1d9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1164d1dc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1164d1df mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d1e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164d1e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164d1e8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1164d1eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d1ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164d1f1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1164d1f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164d1f7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d1fa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1164d1fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d200 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164d203 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d206 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1164d209 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d20c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d20f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164d212 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d215 jne 0x1164d2e3 */
  if (!C.zf) goto L_1164d2e3;
  /* 1164d21b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d21f jae 0x1164d27c */
  if (!C.cf) goto L_1164d27c;
  /* 1164d221 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d224 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d227 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1164d22b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d22e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d231 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1164d234 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1164d237 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d23a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d23d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1164d240 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164d242 jne 0x1164d25a */
  if (!C.zf) goto L_1164d25a;
  /* 1164d244 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164d249 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164d24c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164d24e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d251 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164d253 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1164d255 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d258 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1164d25a:;
  /* 1164d25a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164d25f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164d262 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164d264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d267 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d26a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1164d26e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1164d270 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d273 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d276 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1164d27a jmp 0x1164d2e3 */
  goto L_1164d2e3;
L_1164d27c:;
  /* 1164d27c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d27f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d282 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1164d286 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d289 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d28c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1164d28f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1164d292 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d295 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d298 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1164d29b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164d29d jne 0x1164d2ba */
  if (!C.zf) goto L_1164d2ba;
  /* 1164d29f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164d2a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d2a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164d2aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164d2ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d2af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164d2b2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1164d2b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d2b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1164d2ba:;
  /* 1164d2ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164d2bd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d2c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164d2c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164d2c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d2ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d2cd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1164d2d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1164d2d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d2d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d2dc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1164d2e3:;
  /* 1164d2e3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d2e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164d2e9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1164d2eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d2ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d2f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164d2f4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1164d2f7:;
  /* 1164d2f7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164d2fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d2fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d300 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1164d302 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164d305 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d308 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d30b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d30e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1164d311 jmp 0x1164d5d2 */
  goto L_1164d5d2;
L_1164d316:;
  /* 1164d316 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164d319 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d31c jge 0x1164d5d2 */
  if ((C.sf==C.of)) goto L_1164d5d2;
  /* 1164d322 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164d325 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d328 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d32b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1164d32d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1164d330 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d333 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d336 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d339 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1164d33c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d33f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d342 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1164d345 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164d348 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d34b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1164d34e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164d351 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1164d354 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d357 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1164d35a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d35e jbe 0x1164d367 */
  if ((C.cf||C.zf)) goto L_1164d367;
  /* 1164d360 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1164d367:;
  /* 1164d367 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164d36a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1164d36d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164d36f jne 0x1164d4b0 */
  if (!C.zf) goto L_1164d4b0;
  /* 1164d375 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164d378 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1164d37b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d37e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1164d381 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d385 jbe 0x1164d38e */
  if ((C.cf||C.zf)) goto L_1164d38e;
  /* 1164d387 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1164d38e:;
  /* 1164d38e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d391 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d394 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164d397 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d39a jne 0x1164d470 */
  if (!C.zf) goto L_1164d470;
  /* 1164d3a0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d3a4 jae 0x1164d405 */
  if (!C.cf) goto L_1164d405;
  /* 1164d3a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164d3ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164d3ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164d3b0 not edx */
  EDX = (~(EDX));
  /* 1164d3b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d3b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d3b8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1164d3bc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164d3be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d3c1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d3c4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1164d3c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d3cb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d3ce mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1164d3d1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1164d3d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d3d7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d3da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1164d3dd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d3e0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d3e3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1164d3e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164d3e9 jne 0x1164d403 */
  if (!C.zf) goto L_1164d403;
  /* 1164d3eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164d3f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164d3f3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164d3f5 not edx */
  EDX = (~(EDX));
  /* 1164d3f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d3fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164d3fc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1164d3fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d401 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1164d403:;
  /* 1164d403 jmp 0x1164d470 */
  goto L_1164d470;
L_1164d405:;
  /* 1164d405 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164d408 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d40b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164d410 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164d412 not eax */
  EAX = (~(EAX));
  /* 1164d414 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d417 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d41a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1164d421 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1164d423 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d426 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d429 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1164d430 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d433 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d436 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1164d439 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1164d43c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d43f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d442 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1164d445 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d448 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d44b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1164d44f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164d451 jne 0x1164d470 */
  if (!C.zf) goto L_1164d470;
  /* 1164d453 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164d456 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d459 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164d45e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164d460 not eax */
  EAX = (~(EAX));
  /* 1164d462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d465 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164d468 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1164d46a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d46d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1164d470:;
  /* 1164d470 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d473 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1164d476 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d479 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164d47c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1164d47f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d482 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1164d485 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164d488 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1164d48b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1164d48e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164d491 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d494 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1164d497 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164d49a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1164d49d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d4a0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1164d4a3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d4a7 jbe 0x1164d4b0 */
  if ((C.cf||C.zf)) goto L_1164d4b0;
  /* 1164d4a9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1164d4b0:;
  /* 1164d4b0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164d4b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164d4b6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1164d4b9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1164d4bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d4bf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164d4c2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164d4c5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1164d4c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d4cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164d4ce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1164d4d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164d4d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d4d7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1164d4da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d4dd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164d4e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d4e3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1164d4e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d4e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d4ec mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164d4ef cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d4f2 jne 0x1164d5be */
  if (!C.zf) goto L_1164d5be;
  /* 1164d4f8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d4fc jae 0x1164d558 */
  if (!C.cf) goto L_1164d558;
  /* 1164d4fe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d501 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d504 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1164d508 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d50b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d50e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1164d511 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1164d513 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d516 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d519 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1164d51c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164d51e jne 0x1164d536 */
  if (!C.zf) goto L_1164d536;
  /* 1164d520 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164d525 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164d528 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164d52a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d52d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164d52f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1164d531 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d534 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1164d536:;
  /* 1164d536 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164d53b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164d53e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164d540 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d543 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d546 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1164d54a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164d54c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d54f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d552 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1164d556 jmp 0x1164d5be */
  goto L_1164d5be;
L_1164d558:;
  /* 1164d558 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d55b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d55e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1164d562 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d565 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d568 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1164d56b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1164d56d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d570 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d573 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1164d576 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164d578 jne 0x1164d595 */
  if (!C.zf) goto L_1164d595;
  /* 1164d57a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164d57d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d580 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1164d585 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1164d587 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d58a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164d58d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1164d58f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164d592 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1164d595:;
  /* 1164d595 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164d598 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d59b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164d5a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164d5a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d5a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d5a8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1164d5af or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164d5b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d5b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1164d5b7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1164d5be:;
  /* 1164d5be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d5c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164d5c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1164d5c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164d5c9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d5cc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164d5cf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1164d5d2:;
  /* 1164d5d2 mov eax, 1 */
  EAX = (0x1u);
L_1164d5d7:;
  /* 1164d5d7 mov esp, ebp */
  ESP = (EBP);
  /* 1164d5d9 pop ebp */
  EBP = (pop32());
  /* 1164d5da ret  */
  ESPCHK(0x1164cff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5e0 @ 0x1164d5e0 (304 bytes, 79 insns) */
void f_1164d5e0(void) {
  FTRACE(0x1164d5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164d5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164d5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1164d5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1164d5e4 cmp dword ptr [0x11677940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d5eb je 0x1164d70c */
  if (C.zf) goto L_1164d70c;
  /* 1164d5f1 mov eax, dword ptr [0x11677938] */
  EAX = (r32((uint32_t)(0x11677938)));
  /* 1164d5f6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1164d5f9 mov ecx, dword ptr [0x11677940] */
  ECX = (r32((uint32_t)(0x11677940)));
  /* 1164d5ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1164d602 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d604 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1164d607 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1164d60c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1164d611 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164d614 push eax */
  push32((uint32_t)(EAX));
  /* 1164d615 call dword ptr [0x11678330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678330))), 0x1164d61bu);
  /* 1164d61b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164d620 mov ecx, dword ptr [0x11677938] */
  ECX = (r32((uint32_t)(0x11677938)));
  /* 1164d626 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164d628 mov eax, dword ptr [0x11677940] */
  EAX = (r32((uint32_t)(0x11677940)));
  /* 1164d62d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1164d630 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1164d632 mov edx, dword ptr [0x11677940] */
  EDX = (r32((uint32_t)(0x11677940)));
  /* 1164d638 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1164d63b mov eax, dword ptr [0x11677940] */
  EAX = (r32((uint32_t)(0x11677940)));
  /* 1164d640 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1164d643 mov edx, dword ptr [0x11677938] */
  EDX = (r32((uint32_t)(0x11677938)));
  /* 1164d649 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1164d654 mov eax, dword ptr [0x11677940] */
  EAX = (r32((uint32_t)(0x11677940)));
  /* 1164d659 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1164d65c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1164d65f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1164d662 mov eax, dword ptr [0x11677940] */
  EAX = (r32((uint32_t)(0x11677940)));
  /* 1164d667 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1164d66a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1164d66d mov edx, dword ptr [0x11677940] */
  EDX = (r32((uint32_t)(0x11677940)));
  /* 1164d673 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1164d676 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1164d67a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164d67c jne 0x1164d692 */
  if (!C.zf) goto L_1164d692;
  /* 1164d67e mov edx, dword ptr [0x11677940] */
  EDX = (r32((uint32_t)(0x11677940)));
  /* 1164d684 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1164d687 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1164d689 mov ecx, dword ptr [0x11677940] */
  ECX = (r32((uint32_t)(0x11677940)));
  /* 1164d68f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1164d692:;
  /* 1164d692 mov edx, dword ptr [0x11677940] */
  EDX = (r32((uint32_t)(0x11677940)));
  /* 1164d698 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d69c jne 0x1164d702 */
  if (!C.zf) goto L_1164d702;
  /* 1164d69e cmp dword ptr [0x11677944], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11677944))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d6a5 jle 0x1164d702 */
  if ((C.zf||C.sf!=C.of)) goto L_1164d702;
  /* 1164d6a7 mov eax, dword ptr [0x11677940] */
  EAX = (r32((uint32_t)(0x11677940)));
  /* 1164d6ac mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1164d6af push ecx */
  push32((uint32_t)(ECX));
  /* 1164d6b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164d6b2 mov edx, dword ptr [0x1167794c] */
  EDX = (r32((uint32_t)(0x1167794c)));
  /* 1164d6b8 push edx */
  push32((uint32_t)(EDX));
  /* 1164d6b9 call dword ptr [0x11678384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678384))), 0x1164d6bfu);
  /* 1164d6bf mov eax, dword ptr [0x11677944] */
  EAX = (r32((uint32_t)(0x11677944)));
  /* 1164d6c4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164d6c7 mov ecx, dword ptr [0x11677948] */
  ECX = (r32((uint32_t)(0x11677948)));
  /* 1164d6cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d6cf mov edx, dword ptr [0x11677940] */
  EDX = (r32((uint32_t)(0x11677940)));
  /* 1164d6d5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d6d8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d6da push ecx */
  push32((uint32_t)(ECX));
  /* 1164d6db mov eax, dword ptr [0x11677940] */
  EAX = (r32((uint32_t)(0x11677940)));
  /* 1164d6e0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d6e3 push eax */
  push32((uint32_t)(EAX));
  /* 1164d6e4 mov ecx, dword ptr [0x11677940] */
  ECX = (r32((uint32_t)(0x11677940)));
  /* 1164d6ea push ecx */
  push32((uint32_t)(ECX));
  /* 1164d6eb call 0x1164b450 */
  push32(0x1164d6f0u); f_1164b450();
  /* 1164d6f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d6f3 mov edx, dword ptr [0x11677944] */
  EDX = (r32((uint32_t)(0x11677944)));
  /* 1164d6f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d6fc mov dword ptr [0x11677944], edx */
  w32((uint32_t)(0x11677944), (EDX));
L_1164d702:;
  /* 1164d702 mov dword ptr [0x11677940], 0 */
  w32((uint32_t)(0x11677940), (0x0u));
L_1164d70c:;
  /* 1164d70c mov esp, ebp */
  ESP = (EBP);
  /* 1164d70e pop ebp */
  EBP = (pop32());
  /* 1164d70f ret  */
  ESPCHK(0x1164d5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d710 @ 0x1164d710 (1565 bytes, 343 insns) */
void f_1164d710(void) {
  FTRACE(0x1164d710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164d710 push ebp */
  push32((uint32_t)(EBP));
  /* 1164d711 mov ebp, esp */
  EBP = (ESP);
  /* 1164d713 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d719 mov eax, dword ptr [0x11677944] */
  EAX = (r32((uint32_t)(0x11677944)));
  /* 1164d71e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164d721 push eax */
  push32((uint32_t)(EAX));
  /* 1164d722 mov ecx, dword ptr [0x11677948] */
  ECX = (r32((uint32_t)(0x11677948)));
  /* 1164d728 push ecx */
  push32((uint32_t)(ECX));
  /* 1164d729 call dword ptr [0x116783a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783a8))), 0x1164d72fu);
  /* 1164d72f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164d731 je 0x1164d73b */
  if (C.zf) goto L_1164d73b;
  /* 1164d733 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164d736 jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164d73b:;
  /* 1164d73b mov edx, dword ptr [0x11677948] */
  EDX = (r32((uint32_t)(0x11677948)));
  /* 1164d741 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1164d747 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1164d751 jmp 0x1164d762 */
  goto L_1164d762;
L_1164d753:;
  /* 1164d753 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1164d759 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d75c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1164d762:;
  /* 1164d762 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1164d768 cmp ecx, dword ptr [0x11677944] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11677944))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d76e jge 0x1164dd27 */
  if ((C.sf==C.of)) goto L_1164dd27;
  /* 1164d774 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1164d77a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1164d77d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1164d783 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1164d788 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1164d78e push ecx */
  push32((uint32_t)(ECX));
  /* 1164d78f call dword ptr [0x116783a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783a8))), 0x1164d795u);
  /* 1164d795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164d797 je 0x1164d7a3 */
  if (C.zf) goto L_1164d7a3;
  /* 1164d799 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1164d79e jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164d7a3:;
  /* 1164d7a3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1164d7a9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1164d7ac mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1164d7b2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1164d7b8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d7be mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1164d7c1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1164d7c7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1164d7ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164d7cd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1164d7d7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1164d7e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1164d7e8 jmp 0x1164d7f3 */
  goto L_1164d7f3;
L_1164d7ea:;
  /* 1164d7ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164d7ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d7f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1164d7f3:;
  /* 1164d7f3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d7f7 jge 0x1164dceb */
  if ((C.sf==C.of)) goto L_1164dceb;
  /* 1164d7fd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1164d807 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1164d811 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1164d81b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1164d825 jmp 0x1164d836 */
  goto L_1164d836;
L_1164d827:;
  /* 1164d827 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1164d82d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d830 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1164d836:;
  /* 1164d836 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d83d jge 0x1164d852 */
  if ((C.sf==C.of)) goto L_1164d852;
  /* 1164d83f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1164d845 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1164d850 jmp 0x1164d827 */
  goto L_1164d827;
L_1164d852:;
  /* 1164d852 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d856 jl 0x1164dc8d */
  if ((C.sf!=C.of)) goto L_1164dc8d;
  /* 1164d85c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1164d861 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1164d867 push ecx */
  push32((uint32_t)(ECX));
  /* 1164d868 call dword ptr [0x116783a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783a8))), 0x1164d86eu);
  /* 1164d86e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164d870 je 0x1164d87c */
  if (C.zf) goto L_1164d87c;
  /* 1164d872 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1164d877 jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164d87c:;
  /* 1164d87c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1164d882 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1164d885 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1164d88f jmp 0x1164d8a0 */
  goto L_1164d8a0;
L_1164d891:;
  /* 1164d891 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1164d897 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d89a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1164d8a0:;
  /* 1164d8a0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d8a7 jge 0x1164da24 */
  if ((C.sf==C.of)) goto L_1164da24;
  /* 1164d8ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164d8b0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d8b3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1164d8b9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1164d8bf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d8c5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1164d8cb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1164d8d1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d8d5 jne 0x1164d8e2 */
  if (!C.zf) goto L_1164d8e2;
  /* 1164d8d7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1164d8dd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d8e0 je 0x1164d8ec */
  if (C.zf) goto L_1164d8ec;
L_1164d8e2:;
  /* 1164d8e2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1164d8e7 jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164d8ec:;
  /* 1164d8ec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1164d8f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1164d8f4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1164d8fa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1164d900 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1164d906 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1164d90c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1164d90f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164d911 je 0x1164d949 */
  if (C.zf) goto L_1164d949;
  /* 1164d913 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1164d919 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d91c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1164d922 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d92c jle 0x1164d938 */
  if ((C.zf||C.sf!=C.of)) goto L_1164d938;
  /* 1164d92e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1164d933 jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164d938:;
  /* 1164d938 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1164d93e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d941 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1164d947 jmp 0x1164d98b */
  goto L_1164d98b;
L_1164d949:;
  /* 1164d949 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1164d94f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1164d952 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164d955 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1164d95b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d962 jle 0x1164d96e */
  if ((C.zf||C.sf!=C.of)) goto L_1164d96e;
  /* 1164d964 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1164d96e:;
  /* 1164d96e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1164d974 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1164d97b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d97e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1164d984 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1164d98b:;
  /* 1164d98b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d992 jl 0x1164d9ad */
  if ((C.sf!=C.of)) goto L_1164d9ad;
  /* 1164d994 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1164d99a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1164d99d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164d99f jne 0x1164d9ad */
  if (!C.zf) goto L_1164d9ad;
  /* 1164d9a1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d9ab jle 0x1164d9b7 */
  if ((C.zf||C.sf!=C.of)) goto L_1164d9b7;
L_1164d9ad:;
  /* 1164d9ad mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1164d9b2 jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164d9b7:;
  /* 1164d9b7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1164d9bd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d9c3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1164d9c6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d9cc je 0x1164d9d8 */
  if (C.zf) goto L_1164d9d8;
  /* 1164d9ce mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1164d9d3 jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164d9d8:;
  /* 1164d9d8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1164d9de add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164d9e4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1164d9ea mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1164d9f0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164d9f6 jb 0x1164d8ec */
  if (C.cf) goto L_1164d8ec;
  /* 1164d9fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1164da02 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164da08 je 0x1164da14 */
  if (C.zf) goto L_1164da14;
  /* 1164da0a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1164da0f jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164da14:;
  /* 1164da14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164da17 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164da1c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1164da1f jmp 0x1164d891 */
  goto L_1164d891;
L_1164da24:;
  /* 1164da24 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164da27 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164da29 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164da2f je 0x1164da3b */
  if (C.zf) goto L_1164da3b;
  /* 1164da31 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1164da36 jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164da3b:;
  /* 1164da3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164da3e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1164da44 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1164da4b jmp 0x1164da56 */
  goto L_1164da56;
L_1164da4d:;
  /* 1164da4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164da50 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164da53 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1164da56:;
  /* 1164da56 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164da5a jge 0x1164dc8d */
  if ((C.sf==C.of)) goto L_1164dc8d;
  /* 1164da60 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1164da6a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1164da70 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1164da76:;
  /* 1164da76 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1164da7c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164da7f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1164da85 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1164da8b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164da91 je 0x1164dbba */
  if (C.zf) goto L_1164dbba;
  /* 1164da97 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164da9a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1164daa0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164daa7 je 0x1164dbba */
  if (C.zf) goto L_1164dbba;
  /* 1164daad mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1164dab3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dab9 jb 0x1164dace */
  if (C.cf) goto L_1164dace;
  /* 1164dabb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1164dac1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164dac6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dacc jb 0x1164dad8 */
  if (C.cf) goto L_1164dad8;
L_1164dace:;
  /* 1164dace mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1164dad3 jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164dad8:;
  /* 1164dad8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1164dade and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1164dae4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1164daea mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1164daf0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164daf3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1164daf6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164daf9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164dafe mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1164db04:;
  /* 1164db04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164db07 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164db0d je 0x1164db2e */
  if (C.zf) goto L_1164db2e;
  /* 1164db0f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164db12 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164db18 jne 0x1164db1c */
  if (!C.zf) goto L_1164db1c;
  /* 1164db1a jmp 0x1164db2e */
  goto L_1164db2e;
L_1164db1c:;
  /* 1164db1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164db1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164db21 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1164db24 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164db27 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164db29 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1164db2c jmp 0x1164db04 */
  goto L_1164db04;
L_1164db2e:;
  /* 1164db2e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164db31 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164db37 jne 0x1164db43 */
  if (!C.zf) goto L_1164db43;
  /* 1164db39 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1164db3e jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164db43:;
  /* 1164db43 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1164db49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164db4b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1164db4e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164db51 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1164db57 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164db5e jle 0x1164db6a */
  if ((C.zf||C.sf!=C.of)) goto L_1164db6a;
  /* 1164db60 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1164db6a:;
  /* 1164db6a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1164db70 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164db73 je 0x1164db7f */
  if (C.zf) goto L_1164db7f;
  /* 1164db75 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1164db7a jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164db7f:;
  /* 1164db7f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1164db85 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1164db88 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164db8e je 0x1164db9a */
  if (C.zf) goto L_1164db9a;
  /* 1164db90 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1164db95 jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164db9a:;
  /* 1164db9a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1164dba0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1164dba6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1164dbac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164dbaf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1164dbb5 jmp 0x1164da76 */
  goto L_1164da76;
L_1164dbba:;
  /* 1164dbba cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dbc1 je 0x1164dc31 */
  if (C.zf) goto L_1164dc31;
  /* 1164dbc3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dbc7 jge 0x1164dbfb */
  if ((C.sf==C.of)) goto L_1164dbfb;
  /* 1164dbc9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164dbce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164dbd1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164dbd3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1164dbd9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164dbdb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1164dbe1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164dbe6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164dbe9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164dbeb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1164dbf1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164dbf3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1164dbf9 jmp 0x1164dc31 */
  goto L_1164dc31;
L_1164dbfb:;
  /* 1164dbfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164dbfe sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164dc01 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164dc06 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164dc08 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1164dc0e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164dc10 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1164dc16 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164dc19 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164dc1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1164dc21 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1164dc23 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1164dc29 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1164dc2b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1164dc31:;
  /* 1164dc31 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1164dc37 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164dc3a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dc40 jne 0x1164dc54 */
  if (!C.zf) goto L_1164dc54;
  /* 1164dc42 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164dc45 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1164dc4b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dc52 je 0x1164dc5e */
  if (C.zf) goto L_1164dc5e;
L_1164dc54:;
  /* 1164dc54 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1164dc59 jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164dc5e:;
  /* 1164dc5e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1164dc64 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1164dc67 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dc6d je 0x1164dc79 */
  if (C.zf) goto L_1164dc79;
  /* 1164dc6f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1164dc74 jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164dc79:;
  /* 1164dc79 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1164dc7f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164dc82 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1164dc88 jmp 0x1164da4d */
  goto L_1164da4d;
L_1164dc8d:;
  /* 1164dc8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164dc90 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1164dc96 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1164dc9c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dca0 jne 0x1164dcba */
  if (!C.zf) goto L_1164dcba;
  /* 1164dca2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164dca5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1164dcab mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1164dcb1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dcb8 je 0x1164dcc1 */
  if (C.zf) goto L_1164dcc1;
L_1164dcba:;
  /* 1164dcba mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1164dcbf jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164dcc1:;
  /* 1164dcc1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1164dcc7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164dccd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1164dcd3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164dcd6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164dcdb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1164dcde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164dce1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1164dce3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164dce6 jmp 0x1164d7ea */
  goto L_1164d7ea;
L_1164dceb:;
  /* 1164dceb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1164dcf1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1164dcf7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dcf9 jne 0x1164dd0c */
  if (!C.zf) goto L_1164dd0c;
  /* 1164dcfb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1164dd01 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1164dd07 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dd0a je 0x1164dd13 */
  if (C.zf) goto L_1164dd13;
L_1164dd0c:;
  /* 1164dd0c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1164dd11 jmp 0x1164dd29 */
  goto L_1164dd29;
L_1164dd13:;
  /* 1164dd13 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1164dd19 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164dd1c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1164dd22 jmp 0x1164d753 */
  goto L_1164d753;
L_1164dd27:;
  /* 1164dd27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1164dd29:;
  /* 1164dd29 mov esp, ebp */
  ESP = (EBP);
  /* 1164dd2b pop ebp */
  EBP = (pop32());
  /* 1164dd2c ret  */
  ESPCHK(0x1164d710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd30 @ 0x1164dd30 (250 bytes, 92 insns) */
void f_1164dd30(void) {
  FTRACE(0x1164dd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164dd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1164dd31 mov ebp, esp */
  EBP = (ESP);
  /* 1164dd33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164dd36 push ebx */
  push32((uint32_t)(EBX));
  /* 1164dd37 push esi */
  push32((uint32_t)(ESI));
  /* 1164dd38 push edi */
  push32((uint32_t)(EDI));
  /* 1164dd39 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1164dd3c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1164dd3f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1164dd42 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1164dd45:;
  /* 1164dd45 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dd49 jne 0x1164dd69 */
  if (!C.zf) goto L_1164dd69;
  /* 1164dd4b push 0x11670fd0 */
  push32((uint32_t)(0x11670fd0u));
  /* 1164dd50 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164dd52 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1164dd54 push 0x11670fc4 */
  push32((uint32_t)(0x11670fc4u));
  /* 1164dd59 push 2 */
  push32((uint32_t)(0x2u));
  /* 1164dd5b call 0x11645180 */
  push32(0x1164dd60u); f_11645180();
  /* 1164dd60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164dd63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dd66 jne 0x1164dd69 */
  if (!C.zf) goto L_1164dd69;
  /* 1164dd68 int3  */
  x86_unimpl("int3 @ 0x1164dd68");
L_1164dd69:;
  /* 1164dd69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164dd6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164dd6d jne 0x1164dd45 */
  if (!C.zf) goto L_1164dd45;
L_1164dd6f:;
  /* 1164dd6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dd73 jne 0x1164dd93 */
  if (!C.zf) goto L_1164dd93;
  /* 1164dd75 push 0x11670fb4 */
  push32((uint32_t)(0x11670fb4u));
  /* 1164dd7a push 0 */
  push32((uint32_t)(0x0u));
  /* 1164dd7c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1164dd7e push 0x11670fc4 */
  push32((uint32_t)(0x11670fc4u));
  /* 1164dd83 push 2 */
  push32((uint32_t)(0x2u));
  /* 1164dd85 call 0x11645180 */
  push32(0x1164dd8au); f_11645180();
  /* 1164dd8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164dd8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dd90 jne 0x1164dd93 */
  if (!C.zf) goto L_1164dd93;
  /* 1164dd92 int3  */
  x86_unimpl("int3 @ 0x1164dd92");
L_1164dd93:;
  /* 1164dd93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164dd95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164dd97 jne 0x1164dd6f */
  if (!C.zf) goto L_1164dd6f;
  /* 1164dd99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164dd9c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1164dda3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164dda6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164dda9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1164ddac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164ddaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ddb2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1164ddb4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164ddb7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1164ddbe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164ddc1 push ecx */
  push32((uint32_t)(ECX));
  /* 1164ddc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164ddc5 push edx */
  push32((uint32_t)(EDX));
  /* 1164ddc6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164ddc9 push eax */
  push32((uint32_t)(EAX));
  /* 1164ddca call 0x1164ecf0 */
  push32(0x1164ddcfu); f_1164ecf0();
  /* 1164ddcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ddd2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1164ddd5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164ddd8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164dddb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ddde mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164dde1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1164dde4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164dde7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ddeb jl 0x1164de0f */
  if ((C.sf!=C.of)) goto L_1164de0f;
  /* 1164dded mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164ddf0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1164ddf2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1164ddf5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164ddf7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164ddfd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1164de00 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164de03 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1164de05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164de08 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164de0b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1164de0d jmp 0x1164de20 */
  goto L_1164de20;
L_1164de0f:;
  /* 1164de0f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164de12 push edx */
  push32((uint32_t)(EDX));
  /* 1164de13 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164de15 call 0x1164ea70 */
  push32(0x1164de1au); f_1164ea70();
  /* 1164de1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164de1d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1164de20:;
  /* 1164de20 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164de23 pop edi */
  EDI = (pop32());
  /* 1164de24 pop esi */
  ESI = (pop32());
  /* 1164de25 pop ebx */
  EBX = (pop32());
  /* 1164de26 mov esp, ebp */
  ESP = (EBP);
  /* 1164de28 pop ebp */
  EBP = (pop32());
  /* 1164de29 ret  */
  ESPCHK(0x1164dd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de30 @ 0x1164de30 (836 bytes, 238 insns) */
void f_1164de30(void) {
  FTRACE(0x1164de30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164de30 push ebp */
  push32((uint32_t)(EBP));
  /* 1164de31 mov ebp, esp */
  EBP = (ESP);
  /* 1164de33 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164de36 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1164de38 call 0x1164b880 */
  push32(0x1164de3du); f_1164b880();
  /* 1164de3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164de40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164de43 push eax */
  push32((uint32_t)(EAX));
  /* 1164de44 call 0x1164e180 */
  push32(0x1164de49u); f_1164e180();
  /* 1164de49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164de4c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1164de4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164de52 cmp ecx, dword ptr [0x11677698] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11677698))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164de58 jne 0x1164de6b */
  if (!C.zf) goto L_1164de6b;
  /* 1164de5a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1164de5c call 0x1164b920 */
  push32(0x1164de61u); f_1164b920();
  /* 1164de61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164de64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164de66 jmp 0x1164e170 */
  goto L_1164e170;
L_1164de6b:;
  /* 1164de6b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164de6f jne 0x1164de8c */
  if (!C.zf) goto L_1164de8c;
  /* 1164de71 call 0x1164e260 */
  push32(0x1164de76u); f_1164e260();
  /* 1164de76 call 0x1164e2e0 */
  push32(0x1164de7bu); f_1164e2e0();
  /* 1164de7b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1164de7d call 0x1164b920 */
  push32(0x1164de82u); f_1164b920();
  /* 1164de82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164de85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164de87 jmp 0x1164e170 */
  goto L_1164e170;
L_1164de8c:;
  /* 1164de8c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164de93 jmp 0x1164de9e */
  goto L_1164de9e;
L_1164de95:;
  /* 1164de95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164de98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164de9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164de9e:;
  /* 1164de9e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dea2 jae 0x1164dfef */
  if (!C.cf) goto L_1164dfef;
  /* 1164dea8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164deab imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164deae mov ecx, dword ptr [eax + 0x11674038] */
  ECX = (r32((uint32_t)(EAX + 0x11674038)));
  /* 1164deb4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164deb7 jne 0x1164dfea */
  if (!C.zf) goto L_1164dfea;
  /* 1164debd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1164dec4 jmp 0x1164decf */
  goto L_1164decf;
L_1164dec6:;
  /* 1164dec6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164dec9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164decc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1164decf:;
  /* 1164decf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ded6 jae 0x1164dee4 */
  if (!C.cf) goto L_1164dee4;
  /* 1164ded8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164dedb mov byte ptr [eax + 0x11677820], 0 */
  w8((uint32_t)(EAX + 0x11677820), (0x0u));
  /* 1164dee2 jmp 0x1164dec6 */
  goto L_1164dec6;
L_1164dee4:;
  /* 1164dee4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1164deeb jmp 0x1164def6 */
  goto L_1164def6;
L_1164deed:;
  /* 1164deed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164def0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164def3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1164def6:;
  /* 1164def6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164defa jae 0x1164df77 */
  if (!C.cf) goto L_1164df77;
  /* 1164defc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164deff imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164df02 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164df05 lea ecx, [edx + eax*8 + 0x11674048] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11674048));
  /* 1164df0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1164df0f jmp 0x1164df1a */
  goto L_1164df1a;
L_1164df11:;
  /* 1164df11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164df14 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164df17 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1164df1a:;
  /* 1164df1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164df1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164df1f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1164df21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164df23 je 0x1164df72 */
  if (C.zf) goto L_1164df72;
  /* 1164df25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164df28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164df2a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1164df2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164df2f je 0x1164df72 */
  if (C.zf) goto L_1164df72;
  /* 1164df31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164df34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164df36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1164df38 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1164df3b jmp 0x1164df46 */
  goto L_1164df46;
L_1164df3d:;
  /* 1164df3d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164df40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164df43 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1164df46:;
  /* 1164df46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164df49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164df4b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1164df4e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164df51 ja 0x1164df70 */
  if ((!C.cf&&!C.zf)) goto L_1164df70;
  /* 1164df53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164df56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164df59 mov dl, byte ptr [eax + 0x11677821] */
  DL = (r8((uint32_t)(EAX + 0x11677821)));
  /* 1164df5f or dl, byte ptr [ecx + 0x11674030] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11674030))); DL = (_r); fl_logic(_r,8); }
  /* 1164df65 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164df68 mov byte ptr [eax + 0x11677821], dl */
  w8((uint32_t)(EAX + 0x11677821), (DL));
  /* 1164df6e jmp 0x1164df3d */
  goto L_1164df3d;
L_1164df70:;
  /* 1164df70 jmp 0x1164df11 */
  goto L_1164df11;
L_1164df72:;
  /* 1164df72 jmp 0x1164deed */
  goto L_1164deed;
L_1164df77:;
  /* 1164df77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164df7a mov dword ptr [0x11677698], ecx */
  w32((uint32_t)(0x11677698), (ECX));
  /* 1164df80 mov dword ptr [0x1167771c], 1 */
  w32((uint32_t)(0x1167771c), (0x1u));
  /* 1164df8a mov edx, dword ptr [0x11677698] */
  EDX = (r32((uint32_t)(0x11677698)));
  /* 1164df90 push edx */
  push32((uint32_t)(EDX));
  /* 1164df91 call 0x1164e1e0 */
  push32(0x1164df96u); f_1164e1e0();
  /* 1164df96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164df99 mov dword ptr [0x11677924], eax */
  w32((uint32_t)(0x11677924), (EAX));
  /* 1164df9e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1164dfa5 jmp 0x1164dfb0 */
  goto L_1164dfb0;
L_1164dfa7:;
  /* 1164dfa7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164dfaa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164dfad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1164dfb0:;
  /* 1164dfb0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164dfb4 jae 0x1164dfd4 */
  if (!C.cf) goto L_1164dfd4;
  /* 1164dfb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164dfb9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164dfbc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164dfbf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164dfc2 mov cx, word ptr [ecx + eax*2 + 0x1167403c] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1167403c)));
  /* 1164dfca mov word ptr [edx*2 + 0x11677710], cx */
  w16((uint32_t)(EDX*2 + 0x11677710), (CX));
  /* 1164dfd2 jmp 0x1164dfa7 */
  goto L_1164dfa7;
L_1164dfd4:;
  /* 1164dfd4 call 0x1164e2e0 */
  push32(0x1164dfd9u); f_1164e2e0();
  /* 1164dfd9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1164dfdb call 0x1164b920 */
  push32(0x1164dfe0u); f_1164b920();
  /* 1164dfe0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164dfe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164dfe5 jmp 0x1164e170 */
  goto L_1164e170;
L_1164dfea:;
  /* 1164dfea jmp 0x1164de95 */
  goto L_1164de95;
L_1164dfef:;
  /* 1164dfef lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1164dff2 push edx */
  push32((uint32_t)(EDX));
  /* 1164dff3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164dff6 push eax */
  push32((uint32_t)(EAX));
  /* 1164dff7 call dword ptr [0x11678308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678308))), 0x1164dffdu);
  /* 1164dffd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e000 jne 0x1164e142 */
  if (!C.zf) goto L_1164e142;
  /* 1164e006 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1164e00d jmp 0x1164e018 */
  goto L_1164e018;
L_1164e00f:;
  /* 1164e00f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164e012 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e015 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1164e018:;
  /* 1164e018 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e01f jae 0x1164e02d */
  if (!C.cf) goto L_1164e02d;
  /* 1164e021 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164e024 mov byte ptr [edx + 0x11677820], 0 */
  w8((uint32_t)(EDX + 0x11677820), (0x0u));
  /* 1164e02b jmp 0x1164e00f */
  goto L_1164e00f;
L_1164e02d:;
  /* 1164e02d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164e030 mov dword ptr [0x11677698], eax */
  w32((uint32_t)(0x11677698), (EAX));
  /* 1164e035 mov dword ptr [0x11677924], 0 */
  w32((uint32_t)(0x11677924), (0x0u));
  /* 1164e03f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e043 jbe 0x1164e0fe */
  if ((C.cf||C.zf)) goto L_1164e0fe;
  /* 1164e049 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1164e04c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1164e04f jmp 0x1164e05a */
  goto L_1164e05a;
L_1164e051:;
  /* 1164e051 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164e054 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e057 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1164e05a:;
  /* 1164e05a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164e05d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164e05f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1164e061 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164e063 je 0x1164e0ac */
  if (C.zf) goto L_1164e0ac;
  /* 1164e065 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164e068 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164e06a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1164e06d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164e06f je 0x1164e0ac */
  if (C.zf) goto L_1164e0ac;
  /* 1164e071 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164e074 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164e076 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1164e078 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1164e07b jmp 0x1164e086 */
  goto L_1164e086;
L_1164e07d:;
  /* 1164e07d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164e080 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e083 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1164e086:;
  /* 1164e086 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164e089 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164e08b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1164e08e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e091 ja 0x1164e0aa */
  if ((!C.cf&&!C.zf)) goto L_1164e0aa;
  /* 1164e093 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164e096 mov cl, byte ptr [eax + 0x11677821] */
  CL = (r8((uint32_t)(EAX + 0x11677821)));
  /* 1164e09c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1164e09f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164e0a2 mov byte ptr [edx + 0x11677821], cl */
  w8((uint32_t)(EDX + 0x11677821), (CL));
  /* 1164e0a8 jmp 0x1164e07d */
  goto L_1164e07d;
L_1164e0aa:;
  /* 1164e0aa jmp 0x1164e051 */
  goto L_1164e051;
L_1164e0ac:;
  /* 1164e0ac mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1164e0b3 jmp 0x1164e0be */
  goto L_1164e0be;
L_1164e0b5:;
  /* 1164e0b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164e0b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e0bb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1164e0be:;
  /* 1164e0be cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e0c5 jae 0x1164e0de */
  if (!C.cf) goto L_1164e0de;
  /* 1164e0c7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164e0ca mov dl, byte ptr [ecx + 0x11677821] */
  DL = (r8((uint32_t)(ECX + 0x11677821)));
  /* 1164e0d0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1164e0d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164e0d6 mov byte ptr [eax + 0x11677821], dl */
  w8((uint32_t)(EAX + 0x11677821), (DL));
  /* 1164e0dc jmp 0x1164e0b5 */
  goto L_1164e0b5;
L_1164e0de:;
  /* 1164e0de mov ecx, dword ptr [0x11677698] */
  ECX = (r32((uint32_t)(0x11677698)));
  /* 1164e0e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1164e0e5 call 0x1164e1e0 */
  push32(0x1164e0eau); f_1164e1e0();
  /* 1164e0ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e0ed mov dword ptr [0x11677924], eax */
  w32((uint32_t)(0x11677924), (EAX));
  /* 1164e0f2 mov dword ptr [0x1167771c], 1 */
  w32((uint32_t)(0x1167771c), (0x1u));
  /* 1164e0fc jmp 0x1164e108 */
  goto L_1164e108;
L_1164e0fe:;
  /* 1164e0fe mov dword ptr [0x1167771c], 0 */
  w32((uint32_t)(0x1167771c), (0x0u));
L_1164e108:;
  /* 1164e108 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1164e10f jmp 0x1164e11a */
  goto L_1164e11a;
L_1164e111:;
  /* 1164e111 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164e114 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e117 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1164e11a:;
  /* 1164e11a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e11e jae 0x1164e12f */
  if (!C.cf) goto L_1164e12f;
  /* 1164e120 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164e123 mov word ptr [eax*2 + 0x11677710], 0 */
  w16((uint32_t)(EAX*2 + 0x11677710), (0x0u));
  /* 1164e12d jmp 0x1164e111 */
  goto L_1164e111;
L_1164e12f:;
  /* 1164e12f call 0x1164e2e0 */
  push32(0x1164e134u); f_1164e2e0();
  /* 1164e134 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1164e136 call 0x1164b920 */
  push32(0x1164e13bu); f_1164b920();
  /* 1164e13b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e13e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164e140 jmp 0x1164e170 */
  goto L_1164e170;
L_1164e142:;
  /* 1164e142 cmp dword ptr [0x11676198], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676198))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e149 je 0x1164e163 */
  if (C.zf) goto L_1164e163;
  /* 1164e14b call 0x1164e260 */
  push32(0x1164e150u); f_1164e260();
  /* 1164e150 call 0x1164e2e0 */
  push32(0x1164e155u); f_1164e2e0();
  /* 1164e155 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1164e157 call 0x1164b920 */
  push32(0x1164e15cu); f_1164b920();
  /* 1164e15c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e15f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164e161 jmp 0x1164e170 */
  goto L_1164e170;
L_1164e163:;
  /* 1164e163 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1164e165 call 0x1164b920 */
  push32(0x1164e16au); f_1164b920();
  /* 1164e16a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e16d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1164e170:;
  /* 1164e170 mov esp, ebp */
  ESP = (EBP);
  /* 1164e172 pop ebp */
  EBP = (pop32());
  /* 1164e173 ret  */
  ESPCHK(0x1164de30u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1164e180 (89 bytes, 21 insns) */
void f_1164e180(void) {
  FTRACE(0x1164e180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164e180 push ebp */
  push32((uint32_t)(EBP));
  /* 1164e181 mov ebp, esp */
  EBP = (ESP);
  /* 1164e183 mov dword ptr [0x11676198], 0 */
  w32((uint32_t)(0x11676198), (0x0u));
  /* 1164e18d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e191 jne 0x1164e1a5 */
  if (!C.zf) goto L_1164e1a5;
  /* 1164e193 mov dword ptr [0x11676198], 1 */
  w32((uint32_t)(0x11676198), (0x1u));
  /* 1164e19d call dword ptr [0x11678300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678300))), 0x1164e1a3u);
  /* 1164e1a3 jmp 0x1164e1d7 */
  goto L_1164e1d7;
L_1164e1a5:;
  /* 1164e1a5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e1a9 jne 0x1164e1bd */
  if (!C.zf) goto L_1164e1bd;
  /* 1164e1ab mov dword ptr [0x11676198], 1 */
  w32((uint32_t)(0x11676198), (0x1u));
  /* 1164e1b5 call dword ptr [0x11678310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678310))), 0x1164e1bbu);
  /* 1164e1bb jmp 0x1164e1d7 */
  goto L_1164e1d7;
L_1164e1bd:;
  /* 1164e1bd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e1c1 jne 0x1164e1d4 */
  if (!C.zf) goto L_1164e1d4;
  /* 1164e1c3 mov dword ptr [0x11676198], 1 */
  w32((uint32_t)(0x11676198), (0x1u));
  /* 1164e1cd mov eax, dword ptr [0x116761c4] */
  EAX = (r32((uint32_t)(0x116761c4)));
  /* 1164e1d2 jmp 0x1164e1d7 */
  goto L_1164e1d7;
L_1164e1d4:;
  /* 1164e1d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1164e1d7:;
  /* 1164e1d7 pop ebp */
  EBP = (pop32());
  /* 1164e1d8 ret  */
  ESPCHK(0x1164e180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1e0 @ 0x1164e1e0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1164e1e0(void) {
  FTRACE(0x1164e1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164e1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164e1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1164e1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1164e1e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164e1e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164e1ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164e1ed sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164e1f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164e1f6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e1fa ja 0x1164e22a */
  if ((!C.cf&&!C.zf)) goto L_1164e22a;
  /* 1164e1fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164e1ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164e201 mov dl, byte ptr [eax + 0x1164e244] */
  DL = (r8((uint32_t)(EAX + 0x1164e244)));
  /* 1164e207 jmp dword ptr [edx*4 + 0x1164e230] */
  switch (EDX) {
    case 0: goto L_1164e20e;
    case 1: goto L_1164e215;
    case 2: goto L_1164e21c;
    case 3: goto L_1164e223;
    case 4: goto L_1164e22a;
    default: x86_unimpl("switch@0x1164e207 out of table"); return;
  }
L_1164e20e:;
  /* 1164e20e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1164e213 jmp 0x1164e22c */
  goto L_1164e22c;
L_1164e215:;
  /* 1164e215 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1164e21a jmp 0x1164e22c */
  goto L_1164e22c;
L_1164e21c:;
  /* 1164e21c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1164e221 jmp 0x1164e22c */
  goto L_1164e22c;
L_1164e223:;
  /* 1164e223 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1164e228 jmp 0x1164e22c */
  goto L_1164e22c;
L_1164e22a:;
  /* 1164e22a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1164e22c:;
  /* 1164e22c mov esp, ebp */
  ESP = (EBP);
  /* 1164e22e pop ebp */
  EBP = (pop32());
  /* 1164e22f ret  */
  ESPCHK(0x1164e1e0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1164e260 (116 bytes, 29 insns) */
void f_1164e260(void) {
  FTRACE(0x1164e260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164e260 push ebp */
  push32((uint32_t)(EBP));
  /* 1164e261 mov ebp, esp */
  EBP = (ESP);
  /* 1164e263 push ecx */
  push32((uint32_t)(ECX));
  /* 1164e264 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164e26b jmp 0x1164e276 */
  goto L_1164e276;
L_1164e26d:;
  /* 1164e26d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164e270 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e273 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1164e276:;
  /* 1164e276 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e27d jge 0x1164e28b */
  if ((C.sf==C.of)) goto L_1164e28b;
  /* 1164e27f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164e282 mov byte ptr [ecx + 0x11677820], 0 */
  w8((uint32_t)(ECX + 0x11677820), (0x0u));
  /* 1164e289 jmp 0x1164e26d */
  goto L_1164e26d;
L_1164e28b:;
  /* 1164e28b mov dword ptr [0x11677698], 0 */
  w32((uint32_t)(0x11677698), (0x0u));
  /* 1164e295 mov dword ptr [0x1167771c], 0 */
  w32((uint32_t)(0x1167771c), (0x0u));
  /* 1164e29f mov dword ptr [0x11677924], 0 */
  w32((uint32_t)(0x11677924), (0x0u));
  /* 1164e2a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164e2b0 jmp 0x1164e2bb */
  goto L_1164e2bb;
L_1164e2b2:;
  /* 1164e2b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164e2b5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e2b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164e2bb:;
  /* 1164e2bb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e2bf jge 0x1164e2d0 */
  if ((C.sf==C.of)) goto L_1164e2d0;
  /* 1164e2c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164e2c4 mov word ptr [eax*2 + 0x11677710], 0 */
  w16((uint32_t)(EAX*2 + 0x11677710), (0x0u));
  /* 1164e2ce jmp 0x1164e2b2 */
  goto L_1164e2b2;
L_1164e2d0:;
  /* 1164e2d0 mov esp, ebp */
  ESP = (EBP);
  /* 1164e2d2 pop ebp */
  EBP = (pop32());
  /* 1164e2d3 ret  */
  ESPCHK(0x1164e260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2e0 @ 0x1164e2e0 (770 bytes, 175 insns) */
void f_1164e2e0(void) {
  FTRACE(0x1164e2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164e2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164e2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1164e2e3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164e2e9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1164e2ef push eax */
  push32((uint32_t)(EAX));
  /* 1164e2f0 mov ecx, dword ptr [0x11677698] */
  ECX = (r32((uint32_t)(0x11677698)));
  /* 1164e2f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1164e2f7 call dword ptr [0x11678308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678308))), 0x1164e2fdu);
  /* 1164e2fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e300 jne 0x1164e519 */
  if (!C.zf) goto L_1164e519;
  /* 1164e306 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1164e310 jmp 0x1164e321 */
  goto L_1164e321;
L_1164e312:;
  /* 1164e312 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e318 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e31b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1164e321:;
  /* 1164e321 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e32b jae 0x1164e342 */
  if (!C.cf) goto L_1164e342;
  /* 1164e32d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e333 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1164e339 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1164e340 jmp 0x1164e312 */
  goto L_1164e312;
L_1164e342:;
  /* 1164e342 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1164e349 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1164e34f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1164e352 jmp 0x1164e35d */
  goto L_1164e35d;
L_1164e354:;
  /* 1164e354 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164e357 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e35a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1164e35d:;
  /* 1164e35d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164e360 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164e362 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1164e364 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164e366 je 0x1164e3a8 */
  if (C.zf) goto L_1164e3a8;
  /* 1164e368 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164e36b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164e36d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1164e36f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1164e375 jmp 0x1164e386 */
  goto L_1164e386;
L_1164e377:;
  /* 1164e377 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e37d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e380 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1164e386:;
  /* 1164e386 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164e389 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164e38b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1164e38e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e394 ja 0x1164e3a6 */
  if ((!C.cf&&!C.zf)) goto L_1164e3a6;
  /* 1164e396 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e39c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1164e3a4 jmp 0x1164e377 */
  goto L_1164e377;
L_1164e3a6:;
  /* 1164e3a6 jmp 0x1164e354 */
  goto L_1164e354;
L_1164e3a8:;
  /* 1164e3a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164e3aa mov eax, dword ptr [0x11677924] */
  EAX = (r32((uint32_t)(0x11677924)));
  /* 1164e3af push eax */
  push32((uint32_t)(EAX));
  /* 1164e3b0 mov ecx, dword ptr [0x11677698] */
  ECX = (r32((uint32_t)(0x11677698)));
  /* 1164e3b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1164e3b7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1164e3bd push edx */
  push32((uint32_t)(EDX));
  /* 1164e3be push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1164e3c3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1164e3c9 push eax */
  push32((uint32_t)(EAX));
  /* 1164e3ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1164e3cc call 0x1164fc50 */
  push32(0x1164e3d1u); f_1164fc50();
  /* 1164e3d1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e3d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164e3d6 mov ecx, dword ptr [0x11677698] */
  ECX = (r32((uint32_t)(0x11677698)));
  /* 1164e3dc push ecx */
  push32((uint32_t)(ECX));
  /* 1164e3dd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1164e3e2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1164e3e8 push edx */
  push32((uint32_t)(EDX));
  /* 1164e3e9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1164e3ee lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1164e3f4 push eax */
  push32((uint32_t)(EAX));
  /* 1164e3f5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1164e3fa mov ecx, dword ptr [0x11677924] */
  ECX = (r32((uint32_t)(0x11677924)));
  /* 1164e400 push ecx */
  push32((uint32_t)(ECX));
  /* 1164e401 call 0x11650860 */
  push32(0x1164e406u); f_11650860();
  /* 1164e406 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e409 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164e40b mov edx, dword ptr [0x11677698] */
  EDX = (r32((uint32_t)(0x11677698)));
  /* 1164e411 push edx */
  push32((uint32_t)(EDX));
  /* 1164e412 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1164e417 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1164e41d push eax */
  push32((uint32_t)(EAX));
  /* 1164e41e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1164e423 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1164e429 push ecx */
  push32((uint32_t)(ECX));
  /* 1164e42a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1164e42f mov edx, dword ptr [0x11677924] */
  EDX = (r32((uint32_t)(0x11677924)));
  /* 1164e435 push edx */
  push32((uint32_t)(EDX));
  /* 1164e436 call 0x11650860 */
  push32(0x1164e43bu); f_11650860();
  /* 1164e43b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e43e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1164e448 jmp 0x1164e459 */
  goto L_1164e459;
L_1164e44a:;
  /* 1164e44a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e450 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e453 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1164e459:;
  /* 1164e459 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e463 jae 0x1164e514 */
  if (!C.cf) goto L_1164e514;
  /* 1164e469 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e46f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164e471 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1164e479 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1164e47c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164e47e je 0x1164e4b6 */
  if (C.zf) goto L_1164e4b6;
  /* 1164e480 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e486 mov cl, byte ptr [eax + 0x11677821] */
  CL = (r8((uint32_t)(EAX + 0x11677821)));
  /* 1164e48c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1164e48f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e495 mov byte ptr [edx + 0x11677821], cl */
  w8((uint32_t)(EDX + 0x11677821), (CL));
  /* 1164e49b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e4a1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e4a7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1164e4ae mov byte ptr [eax + 0x11677720], dl */
  w8((uint32_t)(EAX + 0x11677720), (DL));
  /* 1164e4b4 jmp 0x1164e50f */
  goto L_1164e50f;
L_1164e4b6:;
  /* 1164e4b6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e4bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164e4be mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1164e4c6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1164e4c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164e4cb je 0x1164e502 */
  if (C.zf) goto L_1164e502;
  /* 1164e4cd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e4d3 mov al, byte ptr [edx + 0x11677821] */
  AL = (r8((uint32_t)(EDX + 0x11677821)));
  /* 1164e4d9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1164e4db mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e4e1 mov byte ptr [ecx + 0x11677821], al */
  w8((uint32_t)(ECX + 0x11677821), (AL));
  /* 1164e4e7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e4ed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e4f3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1164e4fa mov byte ptr [edx + 0x11677720], cl */
  w8((uint32_t)(EDX + 0x11677720), (CL));
  /* 1164e500 jmp 0x1164e50f */
  goto L_1164e50f;
L_1164e502:;
  /* 1164e502 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e508 mov byte ptr [edx + 0x11677720], 0 */
  w8((uint32_t)(EDX + 0x11677720), (0x0u));
L_1164e50f:;
  /* 1164e50f jmp 0x1164e44a */
  goto L_1164e44a;
L_1164e514:;
  /* 1164e514 jmp 0x1164e5de */
  goto L_1164e5de;
L_1164e519:;
  /* 1164e519 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1164e523 jmp 0x1164e534 */
  goto L_1164e534;
L_1164e525:;
  /* 1164e525 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e52b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e52e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1164e534:;
  /* 1164e534 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e53e jae 0x1164e5de */
  if (!C.cf) goto L_1164e5de;
  /* 1164e544 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e54b jb 0x1164e588 */
  if (C.cf) goto L_1164e588;
  /* 1164e54d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e554 ja 0x1164e588 */
  if ((!C.cf&&!C.zf)) goto L_1164e588;
  /* 1164e556 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e55c mov dl, byte ptr [ecx + 0x11677821] */
  DL = (r8((uint32_t)(ECX + 0x11677821)));
  /* 1164e562 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1164e565 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e56b mov byte ptr [eax + 0x11677821], dl */
  w8((uint32_t)(EAX + 0x11677821), (DL));
  /* 1164e571 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e577 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e57a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e580 mov byte ptr [edx + 0x11677720], cl */
  w8((uint32_t)(EDX + 0x11677720), (CL));
  /* 1164e586 jmp 0x1164e5d9 */
  goto L_1164e5d9;
L_1164e588:;
  /* 1164e588 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e58f jb 0x1164e5cc */
  if (C.cf) goto L_1164e5cc;
  /* 1164e591 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e598 ja 0x1164e5cc */
  if ((!C.cf&&!C.zf)) goto L_1164e5cc;
  /* 1164e59a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e5a0 mov cl, byte ptr [eax + 0x11677821] */
  CL = (r8((uint32_t)(EAX + 0x11677821)));
  /* 1164e5a6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1164e5a9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e5af mov byte ptr [edx + 0x11677821], cl */
  w8((uint32_t)(EDX + 0x11677821), (CL));
  /* 1164e5b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e5bb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164e5be mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e5c4 mov byte ptr [ecx + 0x11677720], al */
  w8((uint32_t)(ECX + 0x11677720), (AL));
  /* 1164e5ca jmp 0x1164e5d9 */
  goto L_1164e5d9;
L_1164e5cc:;
  /* 1164e5cc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1164e5d2 mov byte ptr [edx + 0x11677720], 0 */
  w8((uint32_t)(EDX + 0x11677720), (0x0u));
L_1164e5d9:;
  /* 1164e5d9 jmp 0x1164e525 */
  goto L_1164e525;
L_1164e5de:;
  /* 1164e5de mov esp, ebp */
  ESP = (EBP);
  /* 1164e5e0 pop ebp */
  EBP = (pop32());
  /* 1164e5e1 ret  */
  ESPCHK(0x1164e2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5f0 @ 0x1164e5f0 (23 bytes, 9 insns) */
void f_1164e5f0(void) {
  FTRACE(0x1164e5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164e5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164e5f1 mov ebp, esp */
  EBP = (ESP);
  /* 1164e5f3 cmp dword ptr [0x1167771c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1167771c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e5fa je 0x1164e603 */
  if (C.zf) goto L_1164e603;
  /* 1164e5fc mov eax, dword ptr [0x11677698] */
  EAX = (r32((uint32_t)(0x11677698)));
  /* 1164e601 jmp 0x1164e605 */
  goto L_1164e605;
L_1164e603:;
  /* 1164e603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1164e605:;
  /* 1164e605 pop ebp */
  EBP = (pop32());
  /* 1164e606 ret  */
  ESPCHK(0x1164e5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e610 @ 0x1164e610 (34 bytes, 10 insns) */
void f_1164e610(void) {
  FTRACE(0x1164e610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164e610 push ebp */
  push32((uint32_t)(EBP));
  /* 1164e611 mov ebp, esp */
  EBP = (ESP);
  /* 1164e613 cmp dword ptr [0x11677ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e61a jne 0x1164e630 */
  if (!C.zf) goto L_1164e630;
  /* 1164e61c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1164e61e call 0x1164de30 */
  push32(0x1164e623u); f_1164de30();
  /* 1164e623 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e626 mov dword ptr [0x11677ad0], 1 */
  w32((uint32_t)(0x11677ad0), (0x1u));
L_1164e630:;
  /* 1164e630 pop ebp */
  EBP = (pop32());
  /* 1164e631 ret  */
  ESPCHK(0x1164e610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e640 @ 0x1164e640 (664 bytes, 258 insns) [15 switch table(s)] */
void f_1164e640(void) {
  FTRACE(0x1164e640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164e640 push ebp */
  push32((uint32_t)(EBP));
  /* 1164e641 mov ebp, esp */
  EBP = (ESP);
  /* 1164e643 push edi */
  push32((uint32_t)(EDI));
  /* 1164e644 push esi */
  push32((uint32_t)(ESI));
  /* 1164e645 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1164e648 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164e64b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1164e64e mov eax, ecx */
  EAX = (ECX);
  /* 1164e650 mov edx, ecx */
  EDX = (ECX);
  /* 1164e652 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e654 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e656 jbe 0x1164e660 */
  if ((C.cf||C.zf)) goto L_1164e660;
  /* 1164e658 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e65a jb 0x1164e7d8 */
  if (C.cf) goto L_1164e7d8;
L_1164e660:;
  /* 1164e660 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1164e666 jne 0x1164e67c */
  if (!C.zf) goto L_1164e67c;
  /* 1164e668 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164e66b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1164e66e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e671 jb 0x1164e69c */
  if (C.cf) goto L_1164e69c;
  /* 1164e673 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164e675 jmp dword ptr [edx*4 + 0x1164e788] */
  switch (EDX) {
    case 0: goto L_1164e798;
    case 1: goto L_1164e7a0;
    case 2: goto L_1164e7ac;
    case 3: goto L_1164e7c0;
    default: x86_unimpl("switch@0x1164e675 out of table"); return;
  }
L_1164e67c:;
  /* 1164e67c mov eax, edi */
  EAX = (EDI);
  /* 1164e67e mov edx, 3 */
  EDX = (0x3u);
  /* 1164e683 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164e686 jb 0x1164e694 */
  if (C.cf) goto L_1164e694;
  /* 1164e688 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1164e68b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e68d jmp dword ptr [eax*4 + 0x1164e6a0] */
  switch (EAX) {
    case 1: goto L_1164e6b0;
    case 2: goto L_1164e6dc;
    case 3: goto L_1164e700;
    default: x86_unimpl("switch@0x1164e68d out of table"); return;
  }
L_1164e694:;
  /* 1164e694 jmp dword ptr [ecx*4 + 0x1164e798] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1164e798)))); return;
  /* 1164e69b nop  */
  /* nop */
L_1164e69c:;
  /* 1164e69c jmp dword ptr [ecx*4 + 0x1164e71c] */
  switch (ECX) {
    case 0: goto L_1164e77f;
    case 1: goto L_1164e76c;
    case 2: goto L_1164e764;
    case 3: goto L_1164e75c;
    case 4: goto L_1164e754;
    case 5: goto L_1164e74c;
    case 6: goto L_1164e744;
    case 7: goto L_1164e73c;
    default: x86_unimpl("switch@0x1164e69c out of table"); return;
  }
  /* 1164e6a3 nop  */
  /* nop */
L_1164e6b0:;
  /* 1164e6b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1164e6b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1164e6b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164e6b6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1164e6b9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1164e6bc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1164e6bf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164e6c2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1164e6c5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e6c8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e6cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e6ce jb 0x1164e69c */
  if (C.cf) goto L_1164e69c;
  /* 1164e6d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164e6d2 jmp dword ptr [edx*4 + 0x1164e788] */
  switch (EDX) {
    case 0: goto L_1164e798;
    case 1: goto L_1164e7a0;
    case 2: goto L_1164e7ac;
    case 3: goto L_1164e7c0;
    default: x86_unimpl("switch@0x1164e6d2 out of table"); return;
  }
  /* 1164e6d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1164e6dc:;
  /* 1164e6dc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1164e6de mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1164e6e0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164e6e2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1164e6e5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164e6e8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1164e6eb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e6ee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e6f1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e6f4 jb 0x1164e69c */
  if (C.cf) goto L_1164e69c;
  /* 1164e6f6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164e6f8 jmp dword ptr [edx*4 + 0x1164e788] */
  switch (EDX) {
    case 0: goto L_1164e798;
    case 1: goto L_1164e7a0;
    case 2: goto L_1164e7ac;
    case 3: goto L_1164e7c0;
    default: x86_unimpl("switch@0x1164e6f8 out of table"); return;
  }
  /* 1164e6ff nop  */
  /* nop */
L_1164e700:;
  /* 1164e700 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1164e702 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1164e704 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164e706 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1164e707 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164e70a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1164e70b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e70e jb 0x1164e69c */
  if (C.cf) goto L_1164e69c;
  /* 1164e710 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164e712 jmp dword ptr [edx*4 + 0x1164e788] */
  switch (EDX) {
    case 0: goto L_1164e798;
    case 1: goto L_1164e7a0;
    case 2: goto L_1164e7ac;
    case 3: goto L_1164e7c0;
    default: x86_unimpl("switch@0x1164e712 out of table"); return;
  }
  /* 1164e719 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1164e73c:;
  /* 1164e73c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1164e740 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1164e744:;
  /* 1164e744 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1164e748 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1164e74c:;
  /* 1164e74c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1164e750 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1164e754:;
  /* 1164e754 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1164e758 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1164e75c:;
  /* 1164e75c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1164e760 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1164e764:;
  /* 1164e764 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1164e768 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1164e76c:;
  /* 1164e76c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1164e770 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1164e774 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1164e77b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e77d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1164e77f:;
  /* 1164e77f jmp dword ptr [edx*4 + 0x1164e788] */
  switch (EDX) {
    case 0: goto L_1164e798;
    case 1: goto L_1164e7a0;
    case 2: goto L_1164e7ac;
    case 3: goto L_1164e7c0;
    default: x86_unimpl("switch@0x1164e77f out of table"); return;
  }
  /* 1164e786 mov edi, edi */
  EDI = (EDI);
L_1164e798:;
  /* 1164e798 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164e79b pop esi */
  ESI = (pop32());
  /* 1164e79c pop edi */
  EDI = (pop32());
  /* 1164e79d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164e79e ret  */
  ESPCHK(0x1164e640u, _esp0);
  ESP += 4; return;
  /* 1164e79f nop  */
  /* nop */
L_1164e7a0:;
  /* 1164e7a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1164e7a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164e7a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164e7a7 pop esi */
  ESI = (pop32());
  /* 1164e7a8 pop edi */
  EDI = (pop32());
  /* 1164e7a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164e7aa ret  */
  ESPCHK(0x1164e640u, _esp0);
  ESP += 4; return;
  /* 1164e7ab nop  */
  /* nop */
L_1164e7ac:;
  /* 1164e7ac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1164e7ae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164e7b0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1164e7b3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1164e7b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164e7b9 pop esi */
  ESI = (pop32());
  /* 1164e7ba pop edi */
  EDI = (pop32());
  /* 1164e7bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164e7bc ret  */
  ESPCHK(0x1164e640u, _esp0);
  ESP += 4; return;
  /* 1164e7bd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1164e7c0:;
  /* 1164e7c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1164e7c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1164e7c4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1164e7c7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1164e7ca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1164e7cd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1164e7d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164e7d3 pop esi */
  ESI = (pop32());
  /* 1164e7d4 pop edi */
  EDI = (pop32());
  /* 1164e7d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164e7d6 ret  */
  ESPCHK(0x1164e640u, _esp0);
  ESP += 4; return;
  /* 1164e7d7 nop  */
  /* nop */
L_1164e7d8:;
  /* 1164e7d8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1164e7dc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1164e7e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1164e7e6 jne 0x1164e80c */
  if (!C.zf) goto L_1164e80c;
  /* 1164e7e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164e7eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1164e7ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e7f1 jb 0x1164e800 */
  if (C.cf) goto L_1164e800;
  /* 1164e7f3 std  */
  C.df=1;
  /* 1164e7f4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164e7f6 cld  */
  C.df=0;
  /* 1164e7f7 jmp dword ptr [edx*4 + 0x1164e920] */
  switch (EDX) {
    case 0: goto L_1164e930;
    case 1: goto L_1164e938;
    case 2: goto L_1164e948;
    case 3: goto L_1164e95c;
    default: x86_unimpl("switch@0x1164e7f7 out of table"); return;
  }
  /* 1164e7fe mov edi, edi */
  EDI = (EDI);
L_1164e800:;
  /* 1164e800 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1164e802 jmp dword ptr [ecx*4 + 0x1164e8d0] */
  switch (ECX) {
    case 0: goto L_1164e917;
    default: x86_unimpl("switch@0x1164e802 out of table"); return;
  }
  /* 1164e809 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1164e80c:;
  /* 1164e80c mov eax, edi */
  EAX = (EDI);
  /* 1164e80e mov edx, 3 */
  EDX = (0x3u);
  /* 1164e813 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e816 jb 0x1164e824 */
  if (C.cf) goto L_1164e824;
  /* 1164e818 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1164e81b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164e81d jmp dword ptr [eax*4 + 0x1164e828] */
  switch (EAX) {
    case 1: goto L_1164e838;
    case 2: goto L_1164e858;
    case 3: goto L_1164e880;
    default: x86_unimpl("switch@0x1164e81d out of table"); return;
  }
L_1164e824:;
  /* 1164e824 jmp dword ptr [ecx*4 + 0x1164e920] */
  switch (ECX) {
    case 0: goto L_1164e930;
    case 1: goto L_1164e938;
    case 2: goto L_1164e948;
    case 3: goto L_1164e95c;
    default: x86_unimpl("switch@0x1164e824 out of table"); return;
  }
  /* 1164e82b nop  */
  /* nop */
L_1164e838:;
  /* 1164e838 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1164e83b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1164e83d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1164e840 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1164e841 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164e844 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1164e845 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e848 jb 0x1164e800 */
  if (C.cf) goto L_1164e800;
  /* 1164e84a std  */
  C.df=1;
  /* 1164e84b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164e84d cld  */
  C.df=0;
  /* 1164e84e jmp dword ptr [edx*4 + 0x1164e920] */
  switch (EDX) {
    case 0: goto L_1164e930;
    case 1: goto L_1164e938;
    case 2: goto L_1164e948;
    case 3: goto L_1164e95c;
    default: x86_unimpl("switch@0x1164e84e out of table"); return;
  }
  /* 1164e855 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1164e858:;
  /* 1164e858 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1164e85b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1164e85d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1164e860 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1164e863 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164e866 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1164e869 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164e86c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164e86f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e872 jb 0x1164e800 */
  if (C.cf) goto L_1164e800;
  /* 1164e874 std  */
  C.df=1;
  /* 1164e875 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164e877 cld  */
  C.df=0;
  /* 1164e878 jmp dword ptr [edx*4 + 0x1164e920] */
  switch (EDX) {
    case 0: goto L_1164e930;
    case 1: goto L_1164e938;
    case 2: goto L_1164e948;
    case 3: goto L_1164e95c;
    default: x86_unimpl("switch@0x1164e878 out of table"); return;
  }
  /* 1164e87f nop  */
  /* nop */
L_1164e880:;
  /* 1164e880 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1164e883 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1164e885 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1164e888 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1164e88b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1164e88e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1164e891 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1164e894 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1164e897 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164e89a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164e89d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e8a0 jb 0x1164e800 */
  if (C.cf) goto L_1164e800;
  /* 1164e8a6 std  */
  C.df=1;
  /* 1164e8a7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1164e8a9 cld  */
  C.df=0;
  /* 1164e8aa jmp dword ptr [edx*4 + 0x1164e920] */
  switch (EDX) {
    case 0: goto L_1164e930;
    case 1: goto L_1164e938;
    case 2: goto L_1164e948;
    case 3: goto L_1164e95c;
    default: x86_unimpl("switch@0x1164e8aa out of table"); return;
  }
  /* 1164e8b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1164e8b4 aam 0xe8 */
  x86_unimpl("aam @ 0x1164e8b4");
  /* 1164e8b6 adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e8b9 call 0xfa48fa22 */
  call_ind(0xfa48fa22u, 0x1164e8beu);
  /* 1164e8be adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e8c1 call 0xfa58fa2a */
  call_ind(0xfa58fa2au, 0x1164e8c6u);
  /* 1164e8c6 adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e8c9 call 0xfa68fa32 */
  call_ind(0xfa68fa32u, 0x1164e8ceu);
  /* 1164e8d4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1164e8d8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1164e8dc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1164e8e0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1164e8e4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1164e8e8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1164e8ec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1164e8f0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1164e8f4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1164e8f8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1164e8fc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1164e900 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1164e904 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1164e908 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1164e90c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1164e913 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e915 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1164e917:;
  /* 1164e917 jmp dword ptr [edx*4 + 0x1164e920] */
  switch (EDX) {
    case 0: goto L_1164e930;
    case 1: goto L_1164e938;
    case 2: goto L_1164e948;
    case 3: goto L_1164e95c;
    default: x86_unimpl("switch@0x1164e917 out of table"); return;
  }
  /* 1164e91e mov edi, edi */
  EDI = (EDI);
L_1164e930:;
  /* 1164e930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164e933 pop esi */
  ESI = (pop32());
  /* 1164e934 pop edi */
  EDI = (pop32());
  /* 1164e935 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164e936 ret  */
  ESPCHK(0x1164e640u, _esp0);
  ESP += 4; return;
  /* 1164e937 nop  */
  /* nop */
L_1164e938:;
  /* 1164e938 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1164e93b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1164e93e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164e941 pop esi */
  ESI = (pop32());
  /* 1164e942 pop edi */
  EDI = (pop32());
  /* 1164e943 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164e944 ret  */
  ESPCHK(0x1164e640u, _esp0);
  ESP += 4; return;
  /* 1164e945 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1164e948:;
  /* 1164e948 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1164e94b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1164e94e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1164e951 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1164e954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164e957 pop esi */
  ESI = (pop32());
  /* 1164e958 pop edi */
  EDI = (pop32());
  /* 1164e959 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164e95a ret  */
  ESPCHK(0x1164e640u, _esp0);
  ESP += 4; return;
  /* 1164e95b nop  */
  /* nop */
L_1164e95c:;
  /* 1164e95c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1164e95f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1164e962 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1164e965 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1164e968 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1164e96b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1164e96e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164e971 pop esi */
  ESI = (pop32());
  /* 1164e972 pop edi */
  EDI = (pop32());
  /* 1164e973 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1164e974 ret  */
  ESPCHK(0x1164e640u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1164e980 (104 bytes, 43 insns) */
void f_1164e980(void) {
  FTRACE(0x1164e980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164e980 push ebx */
  push32((uint32_t)(EBX));
  /* 1164e981 push esi */
  push32((uint32_t)(ESI));
  /* 1164e982 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1164e986 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164e988 jne 0x1164e9a2 */
  if (!C.zf) goto L_1164e9a2;
  /* 1164e98a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1164e98e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1164e992 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164e994 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1164e996 mov ebx, eax */
  EBX = (EAX);
  /* 1164e998 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1164e99c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1164e99e mov edx, ebx */
  EDX = (EBX);
  /* 1164e9a0 jmp 0x1164e9e3 */
  goto L_1164e9e3;
L_1164e9a2:;
  /* 1164e9a2 mov ecx, eax */
  ECX = (EAX);
  /* 1164e9a4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1164e9a8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1164e9ac mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1164e9b0:;
  /* 1164e9b0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1164e9b2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1164e9b4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1164e9b6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1164e9b8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164e9ba jne 0x1164e9b0 */
  if (!C.zf) goto L_1164e9b0;
  /* 1164e9bc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1164e9be mov esi, eax */
  ESI = (EAX);
  /* 1164e9c0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1164e9c4 mov ecx, eax */
  ECX = (EAX);
  /* 1164e9c6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1164e9ca mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1164e9cc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164e9ce jb 0x1164e9de */
  if (C.cf) goto L_1164e9de;
  /* 1164e9d0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e9d4 ja 0x1164e9de */
  if ((!C.cf&&!C.zf)) goto L_1164e9de;
  /* 1164e9d6 jb 0x1164e9df */
  if (C.cf) goto L_1164e9df;
  /* 1164e9d8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164e9dc jbe 0x1164e9df */
  if ((C.cf||C.zf)) goto L_1164e9df;
L_1164e9de:;
  /* 1164e9de dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1164e9df:;
  /* 1164e9df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164e9e1 mov eax, esi */
  EAX = (ESI);
L_1164e9e3:;
  /* 1164e9e3 pop esi */
  ESI = (pop32());
  /* 1164e9e4 pop ebx */
  EBX = (pop32());
  /* 1164e9e5 ret 0x10 */
  ESPCHK(0x1164e980u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1164e9f0 (117 bytes, 44 insns) */
void f_1164e9f0(void) {
  FTRACE(0x1164e9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164e9f0 push ebx */
  push32((uint32_t)(EBX));
  /* 1164e9f1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1164e9f5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164e9f7 jne 0x1164ea11 */
  if (!C.zf) goto L_1164ea11;
  /* 1164e9f9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1164e9fd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1164ea01 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164ea03 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1164ea05 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1164ea09 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1164ea0b mov eax, edx */
  EAX = (EDX);
  /* 1164ea0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1164ea0f jmp 0x1164ea61 */
  goto L_1164ea61;
L_1164ea11:;
  /* 1164ea11 mov ecx, eax */
  ECX = (EAX);
  /* 1164ea13 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1164ea17 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1164ea1b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1164ea1f:;
  /* 1164ea1f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1164ea21 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1164ea23 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1164ea25 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1164ea27 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164ea29 jne 0x1164ea1f */
  if (!C.zf) goto L_1164ea1f;
  /* 1164ea2b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1164ea2d mov ecx, eax */
  ECX = (EAX);
  /* 1164ea2f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1164ea33 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1164ea34 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1164ea38 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ea3a jb 0x1164ea4a */
  if (C.cf) goto L_1164ea4a;
  /* 1164ea3c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ea40 ja 0x1164ea4a */
  if ((!C.cf&&!C.zf)) goto L_1164ea4a;
  /* 1164ea42 jb 0x1164ea52 */
  if (C.cf) goto L_1164ea52;
  /* 1164ea44 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ea48 jbe 0x1164ea52 */
  if ((C.cf||C.zf)) goto L_1164ea52;
L_1164ea4a:;
  /* 1164ea4a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ea4e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1164ea52:;
  /* 1164ea52 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ea56 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ea5a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1164ea5c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1164ea5e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1164ea61:;
  /* 1164ea61 pop ebx */
  EBX = (pop32());
  /* 1164ea62 ret 0x10 */
  ESPCHK(0x1164e9f0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000ea70 @ 0x1164ea70 (628 bytes, 214 insns) */
void f_1164ea70(void) {
  FTRACE(0x1164ea70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164ea70 push ebp */
  push32((uint32_t)(EBP));
  /* 1164ea71 mov ebp, esp */
  EBP = (ESP);
  /* 1164ea73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ea76 push ebx */
  push32((uint32_t)(EBX));
  /* 1164ea77 push esi */
  push32((uint32_t)(ESI));
  /* 1164ea78 push edi */
  push32((uint32_t)(EDI));
L_1164ea79:;
  /* 1164ea79 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ea7d jne 0x1164ea9d */
  if (!C.zf) goto L_1164ea9d;
  /* 1164ea7f push 0x1167107c */
  push32((uint32_t)(0x1167107cu));
  /* 1164ea84 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164ea86 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1164ea88 push 0x11671070 */
  push32((uint32_t)(0x11671070u));
  /* 1164ea8d push 2 */
  push32((uint32_t)(0x2u));
  /* 1164ea8f call 0x11645180 */
  push32(0x1164ea94u); f_11645180();
  /* 1164ea94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ea97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ea9a jne 0x1164ea9d */
  if (!C.zf) goto L_1164ea9d;
  /* 1164ea9c int3  */
  x86_unimpl("int3 @ 0x1164ea9c");
L_1164ea9d:;
  /* 1164ea9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164ea9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164eaa1 jne 0x1164ea79 */
  if (!C.zf) goto L_1164ea79;
  /* 1164eaa3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164eaa6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1164eaa9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eaac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1164eaaf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1164eab2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eab5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1164eab8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1164eabe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164eac0 je 0x1164eacf */
  if (C.zf) goto L_1164eacf;
  /* 1164eac2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eac5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1164eac8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1164eacb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164eacd je 0x1164eae5 */
  if (C.zf) goto L_1164eae5;
L_1164eacf:;
  /* 1164eacf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ead2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1164ead5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1164ead7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eada mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1164eadd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164eae0 jmp 0x1164ecdd */
  goto L_1164ecdd;
L_1164eae5:;
  /* 1164eae5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eae8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1164eaeb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1164eaee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164eaf0 je 0x1164eb3c */
  if (C.zf) goto L_1164eb3c;
  /* 1164eaf2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eaf5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1164eafc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eaff mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1164eb02 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1164eb05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164eb07 je 0x1164eb25 */
  if (C.zf) goto L_1164eb25;
  /* 1164eb09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eb0c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eb0f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1164eb12 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1164eb14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eb17 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1164eb1a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1164eb1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eb20 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1164eb23 jmp 0x1164eb3c */
  goto L_1164eb3c;
L_1164eb25:;
  /* 1164eb25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eb28 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1164eb2b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1164eb2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eb31 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1164eb34 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164eb37 jmp 0x1164ecdd */
  goto L_1164ecdd;
L_1164eb3c:;
  /* 1164eb3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eb3f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1164eb42 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1164eb45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eb48 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1164eb4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eb4e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1164eb51 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1164eb54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eb57 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1164eb5a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eb5d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1164eb64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164eb6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164eb6e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1164eb71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eb74 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1164eb77 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1164eb7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164eb7f jne 0x1164ebaf */
  if (!C.zf) goto L_1164ebaf;
  /* 1164eb81 cmp dword ptr [ebp - 8], 0x11674418 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11674418u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164eb88 je 0x1164eb93 */
  if (C.zf) goto L_1164eb93;
  /* 1164eb8a cmp dword ptr [ebp - 8], 0x11674438 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11674438u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164eb91 jne 0x1164eba3 */
  if (!C.zf) goto L_1164eba3;
L_1164eb93:;
  /* 1164eb93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164eb96 push edx */
  push32((uint32_t)(EDX));
  /* 1164eb97 call 0x11652490 */
  push32(0x1164eb9cu); f_11652490();
  /* 1164eb9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164eb9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164eba1 jne 0x1164ebaf */
  if (!C.zf) goto L_1164ebaf;
L_1164eba3:;
  /* 1164eba3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eba6 push eax */
  push32((uint32_t)(EAX));
  /* 1164eba7 call 0x116523c0 */
  push32(0x1164ebacu); f_116523c0();
  /* 1164ebac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164ebaf:;
  /* 1164ebaf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ebb2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1164ebb5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1164ebbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164ebbd je 0x1164ec9b */
  if (C.zf) goto L_1164ec9b;
L_1164ebc3:;
  /* 1164ebc3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ebc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ebc9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1164ebcb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ebce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164ebd0 jge 0x1164ebf3 */
  if ((C.sf==C.of)) goto L_1164ebf3;
  /* 1164ebd2 push 0x11671030 */
  push32((uint32_t)(0x11671030u));
  /* 1164ebd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164ebd9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1164ebde push 0x11671070 */
  push32((uint32_t)(0x11671070u));
  /* 1164ebe3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1164ebe5 call 0x11645180 */
  push32(0x1164ebeau); f_11645180();
  /* 1164ebea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ebed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ebf0 jne 0x1164ebf3 */
  if (!C.zf) goto L_1164ebf3;
  /* 1164ebf2 int3  */
  x86_unimpl("int3 @ 0x1164ebf2");
L_1164ebf3:;
  /* 1164ebf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164ebf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164ebf7 jne 0x1164ebc3 */
  if (!C.zf) goto L_1164ebc3;
  /* 1164ebf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ebfc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ebff mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1164ec01 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ec04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164ec07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ec0a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1164ec0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ec10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ec13 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1164ec15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ec18 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1164ec1b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ec1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ec21 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1164ec24 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ec28 jle 0x1164ec46 */
  if ((C.zf||C.sf!=C.of)) goto L_1164ec46;
  /* 1164ec2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164ec2d push ecx */
  push32((uint32_t)(ECX));
  /* 1164ec2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ec31 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1164ec34 push eax */
  push32((uint32_t)(EAX));
  /* 1164ec35 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ec38 push ecx */
  push32((uint32_t)(ECX));
  /* 1164ec39 call 0x116520b0 */
  push32(0x1164ec3eu); f_116520b0();
  /* 1164ec3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ec41 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1164ec44 jmp 0x1164ec8e */
  goto L_1164ec8e;
L_1164ec46:;
  /* 1164ec46 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ec4a je 0x1164ec69 */
  if (C.zf) goto L_1164ec69;
  /* 1164ec4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ec4f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1164ec52 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ec55 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1164ec58 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164ec5b mov ecx, dword ptr [edx*4 + 0x11677980] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11677980)));
  /* 1164ec62 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ec64 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1164ec67 jmp 0x1164ec70 */
  goto L_1164ec70;
L_1164ec69:;
  /* 1164ec69 mov dword ptr [ebp - 0x14], 0x11673bb0 */
  w32((uint32_t)(EBP + -0x14), (0x11673bb0u));
L_1164ec70:;
  /* 1164ec70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1164ec73 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1164ec77 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1164ec7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164ec7c je 0x1164ec8e */
  if (C.zf) goto L_1164ec8e;
  /* 1164ec7e push 2 */
  push32((uint32_t)(0x2u));
  /* 1164ec80 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164ec82 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ec85 push ecx */
  push32((uint32_t)(ECX));
  /* 1164ec86 call 0x11651f60 */
  push32(0x1164ec8bu); f_11651f60();
  /* 1164ec8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164ec8e:;
  /* 1164ec8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ec91 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1164ec94 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1164ec97 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1164ec99 jmp 0x1164ecb9 */
  goto L_1164ecb9;
L_1164ec9b:;
  /* 1164ec9b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1164eca2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164eca5 push edx */
  push32((uint32_t)(EDX));
  /* 1164eca6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1164eca9 push eax */
  push32((uint32_t)(EAX));
  /* 1164ecaa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ecad push ecx */
  push32((uint32_t)(ECX));
  /* 1164ecae call 0x116520b0 */
  push32(0x1164ecb3u); f_116520b0();
  /* 1164ecb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ecb6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1164ecb9:;
  /* 1164ecb9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164ecbc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ecbf je 0x1164ecd5 */
  if (C.zf) goto L_1164ecd5;
  /* 1164ecc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ecc4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1164ecc7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1164ecca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164eccd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1164ecd0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164ecd3 jmp 0x1164ecdd */
  goto L_1164ecdd;
L_1164ecd5:;
  /* 1164ecd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ecd8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1164ecdd:;
  /* 1164ecdd pop edi */
  EDI = (pop32());
  /* 1164ecde pop esi */
  ESI = (pop32());
  /* 1164ecdf pop ebx */
  EBX = (pop32());
  /* 1164ece0 mov esp, ebp */
  ESP = (EBP);
  /* 1164ece2 pop ebp */
  EBP = (pop32());
  /* 1164ece3 ret  */
  ESPCHK(0x1164ea70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecf0 @ 0x1164ecf0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1164ecf0(void) {
  FTRACE(0x1164ecf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164ecf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164ecf1 mov ebp, esp */
  EBP = (ESP);
  /* 1164ecf3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ecf9 push ebx */
  push32((uint32_t)(EBX));
  /* 1164ecfa push esi */
  push32((uint32_t)(ESI));
  /* 1164ecfb push edi */
  push32((uint32_t)(EDI));
  /* 1164ecfc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1164ed03 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1164ed0d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1164ed14:;
  /* 1164ed14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164ed17 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1164ed19 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1164ed1c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164ed20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164ed23 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ed26 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1164ed29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164ed2b je 0x1164f907 */
  if (C.zf) goto L_1164f907;
  /* 1164ed31 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ed38 jl 0x1164f907 */
  if ((C.sf!=C.of)) goto L_1164f907;
  /* 1164ed3e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164ed42 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ed45 jl 0x1164ed66 */
  if ((C.sf!=C.of)) goto L_1164ed66;
  /* 1164ed47 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164ed4b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ed4e jg 0x1164ed66 */
  if ((!C.zf&&C.sf==C.of)) goto L_1164ed66;
  /* 1164ed50 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164ed54 movsx ecx, byte ptr [eax + 0x11671068] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11671068))));
  /* 1164ed5b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1164ed5e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1164ed64 jmp 0x1164ed70 */
  goto L_1164ed70;
L_1164ed66:;
  /* 1164ed66 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1164ed70:;
  /* 1164ed70 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1164ed76 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1164ed79 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1164ed7c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164ed7f movsx edx, byte ptr [ecx + eax*8 + 0x11671088] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11671088))));
  /* 1164ed87 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1164ed8a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1164ed8d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1164ed90 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1164ed96 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ed9d ja 0x1164f902 */
  if ((!C.cf&&!C.zf)) goto L_1164f902;
  /* 1164eda3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1164eda9 jmp dword ptr [ecx*4 + 0x1164f914] */
  switch (ECX) {
    case 0: goto L_1164edb0;
    case 1: goto L_1164ee4a;
    case 2: goto L_1164ee8c;
    case 3: goto L_1164eefb;
    case 4: goto L_1164ef53;
    case 5: goto L_1164ef62;
    case 6: goto L_1164efae;
    case 7: goto L_1164f041;
    case 8: goto L_1164eed8;
    case 9: goto L_1164eee3;
    case 10: goto L_1164eece;
    case 11: goto L_1164eec3;
    case 12: goto L_1164eeee;
    case 13: goto L_1164eef6;
    default: x86_unimpl("switch@0x1164eda9 out of table"); return;
  }
L_1164edb0:;
  /* 1164edb0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1164edb7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164edba and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1164edc0 mov eax, dword ptr [0x11673c9c] */
  EAX = (r32((uint32_t)(0x11673c9c)));
  /* 1164edc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164edc7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1164edcb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1164edd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164edd3 je 0x1164ee2d */
  if (C.zf) goto L_1164ee2d;
  /* 1164edd5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1164eddb push edx */
  push32((uint32_t)(EDX));
  /* 1164eddc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164eddf push eax */
  push32((uint32_t)(EAX));
  /* 1164ede0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164ede4 push ecx */
  push32((uint32_t)(ECX));
  /* 1164ede5 call 0x1164fa20 */
  push32(0x1164edeau); f_1164fa20();
  /* 1164edea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164eded mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164edf0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1164edf2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1164edf5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164edf8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164edfb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1164edfe:;
  /* 1164edfe movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164ee02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164ee04 jne 0x1164ee27 */
  if (!C.zf) goto L_1164ee27;
  /* 1164ee06 push 0x11671108 */
  push32((uint32_t)(0x11671108u));
  /* 1164ee0b push 0 */
  push32((uint32_t)(0x0u));
  /* 1164ee0d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1164ee12 push 0x116710fc */
  push32((uint32_t)(0x116710fcu));
  /* 1164ee17 push 2 */
  push32((uint32_t)(0x2u));
  /* 1164ee19 call 0x11645180 */
  push32(0x1164ee1eu); f_11645180();
  /* 1164ee1e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ee21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ee24 jne 0x1164ee27 */
  if (!C.zf) goto L_1164ee27;
  /* 1164ee26 int3  */
  x86_unimpl("int3 @ 0x1164ee26");
L_1164ee27:;
  /* 1164ee27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164ee29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164ee2b jne 0x1164edfe */
  if (!C.zf) goto L_1164edfe;
L_1164ee2d:;
  /* 1164ee2d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1164ee33 push ecx */
  push32((uint32_t)(ECX));
  /* 1164ee34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164ee37 push edx */
  push32((uint32_t)(EDX));
  /* 1164ee38 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164ee3c push eax */
  push32((uint32_t)(EAX));
  /* 1164ee3d call 0x1164fa20 */
  push32(0x1164ee42u); f_1164fa20();
  /* 1164ee42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ee45 jmp 0x1164f902 */
  goto L_1164f902;
L_1164ee4a:;
  /* 1164ee4a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1164ee51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164ee54 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1164ee5a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1164ee60 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1164ee66 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1164ee6c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1164ee6f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164ee76 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1164ee80 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1164ee87 jmp 0x1164f902 */
  goto L_1164f902;
L_1164ee8c:;
  /* 1164ee8c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164ee90 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1164ee96 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1164ee9c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ee9f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1164eea5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164eeac ja 0x1164eef6 */
  if ((!C.cf&&!C.zf)) goto L_1164eef6;
  /* 1164eeae mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1164eeb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164eeb6 mov al, byte ptr [ecx + 0x1164f94c] */
  AL = (r8((uint32_t)(ECX + 0x1164f94c)));
  /* 1164eebc jmp dword ptr [eax*4 + 0x1164f934] */
  switch (EAX) {
    case 0: goto L_1164eed8;
    case 1: goto L_1164eee3;
    case 2: goto L_1164eece;
    case 3: goto L_1164eec3;
    case 4: goto L_1164eeee;
    case 5: goto L_1164eef6;
    default: x86_unimpl("switch@0x1164eebc out of table"); return;
  }
L_1164eec3:;
  /* 1164eec3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164eec6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1164eec9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1164eecc jmp 0x1164eef6 */
  goto L_1164eef6;
L_1164eece:;
  /* 1164eece mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164eed1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1164eed3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164eed6 jmp 0x1164eef6 */
  goto L_1164eef6;
L_1164eed8:;
  /* 1164eed8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164eedb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1164eede mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164eee1 jmp 0x1164eef6 */
  goto L_1164eef6;
L_1164eee3:;
  /* 1164eee3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164eee6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1164eee9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1164eeec jmp 0x1164eef6 */
  goto L_1164eef6;
L_1164eeee:;
  /* 1164eeee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164eef1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1164eef3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1164eef6:;
  /* 1164eef6 jmp 0x1164f902 */
  goto L_1164f902;
L_1164eefb:;
  /* 1164eefb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164eeff cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ef02 jne 0x1164ef37 */
  if (!C.zf) goto L_1164ef37;
  /* 1164ef04 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1164ef07 push edx */
  push32((uint32_t)(EDX));
  /* 1164ef08 call 0x1164fb30 */
  push32(0x1164ef0du); f_1164fb30();
  /* 1164ef0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ef10 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1164ef16 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ef1d jge 0x1164ef35 */
  if ((C.sf==C.of)) goto L_1164ef35;
  /* 1164ef1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164ef22 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1164ef24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164ef27 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1164ef2d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1164ef2f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1164ef35:;
  /* 1164ef35 jmp 0x1164ef4e */
  goto L_1164ef4e;
L_1164ef37:;
  /* 1164ef37 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1164ef3d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164ef40 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164ef44 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1164ef48 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1164ef4e:;
  /* 1164ef4e jmp 0x1164f902 */
  goto L_1164f902;
L_1164ef53:;
  /* 1164ef53 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1164ef5d jmp 0x1164f902 */
  goto L_1164f902;
L_1164ef62:;
  /* 1164ef62 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164ef66 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ef69 jne 0x1164ef92 */
  if (!C.zf) goto L_1164ef92;
  /* 1164ef6b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1164ef6e push eax */
  push32((uint32_t)(EAX));
  /* 1164ef6f call 0x1164fb30 */
  push32(0x1164ef74u); f_1164fb30();
  /* 1164ef74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ef77 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1164ef7d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ef84 jge 0x1164ef90 */
  if ((C.sf==C.of)) goto L_1164ef90;
  /* 1164ef86 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1164ef90:;
  /* 1164ef90 jmp 0x1164efa9 */
  goto L_1164efa9;
L_1164ef92:;
  /* 1164ef92 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1164ef98 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164ef9b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164ef9f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1164efa3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1164efa9:;
  /* 1164efa9 jmp 0x1164f902 */
  goto L_1164f902;
L_1164efae:;
  /* 1164efae movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164efb2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1164efb8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1164efbe sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164efc1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1164efc7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164efce ja 0x1164f03c */
  if ((!C.cf&&!C.zf)) goto L_1164f03c;
  /* 1164efd0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1164efd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164efd8 mov al, byte ptr [ecx + 0x1164f971] */
  AL = (r8((uint32_t)(ECX + 0x1164f971)));
  /* 1164efde jmp dword ptr [eax*4 + 0x1164f95d] */
  switch (EAX) {
    case 0: goto L_1164eff0;
    case 1: goto L_1164f029;
    case 2: goto L_1164efe5;
    case 3: goto L_1164f033;
    case 4: goto L_1164f03c;
    default: x86_unimpl("switch@0x1164efde out of table"); return;
  }
L_1164efe5:;
  /* 1164efe5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164efe8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1164efeb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1164efee jmp 0x1164f03c */
  goto L_1164f03c;
L_1164eff0:;
  /* 1164eff0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164eff3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1164eff6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164eff9 jne 0x1164f01b */
  if (!C.zf) goto L_1164f01b;
  /* 1164effb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164effe movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1164f002 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f005 jne 0x1164f01b */
  if (!C.zf) goto L_1164f01b;
  /* 1164f007 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164f00a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f00d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1164f010 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f013 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1164f016 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1164f019 jmp 0x1164f027 */
  goto L_1164f027;
L_1164f01b:;
  /* 1164f01b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1164f022 jmp 0x1164edb0 */
  goto L_1164edb0;
L_1164f027:;
  /* 1164f027 jmp 0x1164f03c */
  goto L_1164f03c;
L_1164f029:;
  /* 1164f029 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f02c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1164f02e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164f031 jmp 0x1164f03c */
  goto L_1164f03c;
L_1164f033:;
  /* 1164f033 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f036 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1164f039 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1164f03c:;
  /* 1164f03c jmp 0x1164f902 */
  goto L_1164f902;
L_1164f041:;
  /* 1164f041 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164f045 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1164f04b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1164f051 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164f054 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1164f05a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f061 ja 0x1164f727 */
  if ((!C.cf&&!C.zf)) goto L_1164f727;
  /* 1164f067 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1164f06d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164f06f mov cl, byte ptr [edx + 0x1164f9dc] */
  CL = (r8((uint32_t)(EDX + 0x1164f9dc)));
  /* 1164f075 jmp dword ptr [ecx*4 + 0x1164f9a0] */
  switch (ECX) {
    case 0: goto L_1164f07c;
    case 1: goto L_1164f310;
    case 2: goto L_1164f1a0;
    case 3: goto L_1164f449;
    case 4: goto L_1164f10b;
    case 5: goto L_1164f091;
    case 6: goto L_1164f41b;
    case 7: goto L_1164f320;
    case 8: goto L_1164f2c5;
    case 9: goto L_1164f495;
    case 10: goto L_1164f43f;
    case 11: goto L_1164f1b6;
    case 12: goto L_1164f433;
    case 13: goto L_1164f455;
    case 14: goto L_1164f727;
    default: x86_unimpl("switch@0x1164f075 out of table"); return;
  }
L_1164f07c:;
  /* 1164f07c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f07f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1164f084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164f086 jne 0x1164f091 */
  if (!C.zf) goto L_1164f091;
  /* 1164f088 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f08b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1164f08e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1164f091:;
  /* 1164f091 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f094 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1164f09a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164f09c je 0x1164f0d7 */
  if (C.zf) goto L_1164f0d7;
  /* 1164f09e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1164f0a1 push eax */
  push32((uint32_t)(EAX));
  /* 1164f0a2 call 0x1164fb70 */
  push32(0x1164f0a7u); f_1164fb70();
  /* 1164f0a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f0aa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1164f0ae mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1164f0b2 push ecx */
  push32((uint32_t)(ECX));
  /* 1164f0b3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1164f0b9 push edx */
  push32((uint32_t)(EDX));
  /* 1164f0ba call 0x11652700 */
  push32(0x1164f0bfu); f_11652700();
  /* 1164f0bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f0c2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1164f0c5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f0c9 jge 0x1164f0d5 */
  if ((C.sf==C.of)) goto L_1164f0d5;
  /* 1164f0cb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1164f0d5:;
  /* 1164f0d5 jmp 0x1164f0fd */
  goto L_1164f0fd;
L_1164f0d7:;
  /* 1164f0d7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1164f0da push eax */
  push32((uint32_t)(EAX));
  /* 1164f0db call 0x1164fb30 */
  push32(0x1164f0e0u); f_1164fb30();
  /* 1164f0e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f0e3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1164f0ea mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1164f0f0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1164f0f6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1164f0fd:;
  /* 1164f0fd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1164f103 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1164f106 jmp 0x1164f727 */
  goto L_1164f727;
L_1164f10b:;
  /* 1164f10b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1164f10e push eax */
  push32((uint32_t)(EAX));
  /* 1164f10f call 0x1164fb30 */
  push32(0x1164f114u); f_1164fb30();
  /* 1164f114 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f117 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1164f11d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f124 je 0x1164f132 */
  if (C.zf) goto L_1164f132;
  /* 1164f126 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1164f12c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f130 jne 0x1164f14c */
  if (!C.zf) goto L_1164f14c;
L_1164f132:;
  /* 1164f132 mov edx, dword ptr [0x11674130] */
  EDX = (r32((uint32_t)(0x11674130)));
  /* 1164f138 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1164f13b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f13e push eax */
  push32((uint32_t)(EAX));
  /* 1164f13f call 0x116496f0 */
  push32(0x1164f144u); f_116496f0();
  /* 1164f144 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f147 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1164f14a jmp 0x1164f19b */
  goto L_1164f19b;
L_1164f14c:;
  /* 1164f14c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f14f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1164f155 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164f157 je 0x1164f17c */
  if (C.zf) goto L_1164f17c;
  /* 1164f159 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1164f15f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1164f162 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1164f165 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1164f16b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1164f16e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1164f170 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1164f173 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1164f17a jmp 0x1164f19b */
  goto L_1164f19b;
L_1164f17c:;
  /* 1164f17c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1164f183 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1164f189 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164f18c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1164f18f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1164f195 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1164f198 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1164f19b:;
  /* 1164f19b jmp 0x1164f727 */
  goto L_1164f727;
L_1164f1a0:;
  /* 1164f1a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f1a3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1164f1a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164f1ab jne 0x1164f1b6 */
  if (!C.zf) goto L_1164f1b6;
  /* 1164f1ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f1b0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1164f1b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164f1b6:;
  /* 1164f1b6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f1bd jne 0x1164f1cb */
  if (!C.zf) goto L_1164f1cb;
  /* 1164f1bf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1164f1c9 jmp 0x1164f1d7 */
  goto L_1164f1d7;
L_1164f1cb:;
  /* 1164f1cb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1164f1d1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1164f1d7:;
  /* 1164f1d7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1164f1dd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1164f1e3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1164f1e6 push edx */
  push32((uint32_t)(EDX));
  /* 1164f1e7 call 0x1164fb30 */
  push32(0x1164f1ecu); f_1164fb30();
  /* 1164f1ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f1ef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1164f1f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f1f5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1164f1fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164f1fc je 0x1164f266 */
  if (C.zf) goto L_1164f266;
  /* 1164f1fe cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f202 jne 0x1164f20d */
  if (!C.zf) goto L_1164f20d;
  /* 1164f204 mov ecx, dword ptr [0x11674134] */
  ECX = (r32((uint32_t)(0x11674134)));
  /* 1164f20a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1164f20d:;
  /* 1164f20d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1164f214 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f217 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1164f21d:;
  /* 1164f21d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1164f223 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1164f229 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164f22c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1164f232 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164f234 je 0x1164f256 */
  if (C.zf) goto L_1164f256;
  /* 1164f236 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1164f23c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164f23e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1164f241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164f243 je 0x1164f256 */
  if (C.zf) goto L_1164f256;
  /* 1164f245 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1164f24b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f24e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1164f254 jmp 0x1164f21d */
  goto L_1164f21d;
L_1164f256:;
  /* 1164f256 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1164f25c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164f25f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1164f261 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1164f264 jmp 0x1164f2c0 */
  goto L_1164f2c0;
L_1164f266:;
  /* 1164f266 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f26a jne 0x1164f274 */
  if (!C.zf) goto L_1164f274;
  /* 1164f26c mov eax, dword ptr [0x11674130] */
  EAX = (r32((uint32_t)(0x11674130)));
  /* 1164f271 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1164f274:;
  /* 1164f274 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f277 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1164f27d:;
  /* 1164f27d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1164f283 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1164f289 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164f28c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1164f292 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164f294 je 0x1164f2b4 */
  if (C.zf) goto L_1164f2b4;
  /* 1164f296 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1164f29c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1164f29f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164f2a1 je 0x1164f2b4 */
  if (C.zf) goto L_1164f2b4;
  /* 1164f2a3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1164f2a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f2ac mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1164f2b2 jmp 0x1164f27d */
  goto L_1164f27d;
L_1164f2b4:;
  /* 1164f2b4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1164f2ba sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164f2bd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1164f2c0:;
  /* 1164f2c0 jmp 0x1164f727 */
  goto L_1164f727;
L_1164f2c5:;
  /* 1164f2c5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1164f2c8 push edx */
  push32((uint32_t)(EDX));
  /* 1164f2c9 call 0x1164fb30 */
  push32(0x1164f2ceu); f_1164fb30();
  /* 1164f2ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f2d1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1164f2d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f2da and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1164f2dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164f2df je 0x1164f2f3 */
  if (C.zf) goto L_1164f2f3;
  /* 1164f2e1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1164f2e7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1164f2ee mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1164f2f1 jmp 0x1164f301 */
  goto L_1164f301;
L_1164f2f3:;
  /* 1164f2f3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1164f2f9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1164f2ff mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1164f301:;
  /* 1164f301 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1164f30b jmp 0x1164f727 */
  goto L_1164f727;
L_1164f310:;
  /* 1164f310 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1164f317 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1164f31a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1164f31d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1164f320:;
  /* 1164f320 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f323 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1164f325 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1164f328 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1164f32e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1164f331 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f338 jge 0x1164f346 */
  if ((C.sf==C.of)) goto L_1164f346;
  /* 1164f33a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1164f344 jmp 0x1164f362 */
  goto L_1164f362;
L_1164f346:;
  /* 1164f346 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f34d jne 0x1164f362 */
  if (!C.zf) goto L_1164f362;
  /* 1164f34f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164f353 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f356 jne 0x1164f362 */
  if (!C.zf) goto L_1164f362;
  /* 1164f358 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1164f362:;
  /* 1164f362 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164f365 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f368 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1164f36b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164f36e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164f371 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164f373 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164f376 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1164f37c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1164f382 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1164f385 push ecx */
  push32((uint32_t)(ECX));
  /* 1164f386 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1164f38c push edx */
  push32((uint32_t)(EDX));
  /* 1164f38d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164f391 push eax */
  push32((uint32_t)(EAX));
  /* 1164f392 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f395 push ecx */
  push32((uint32_t)(ECX));
  /* 1164f396 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1164f39c push edx */
  push32((uint32_t)(EDX));
  /* 1164f39d call dword ptr [0x11673b90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11673b90))), 0x1164f3a3u);
  /* 1164f3a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f3a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f3a9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1164f3ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164f3b0 je 0x1164f3c8 */
  if (C.zf) goto L_1164f3c8;
  /* 1164f3b2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f3b9 jne 0x1164f3c8 */
  if (!C.zf) goto L_1164f3c8;
  /* 1164f3bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f3be push ecx */
  push32((uint32_t)(ECX));
  /* 1164f3bf call dword ptr [0x11673b9c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11673b9c))), 0x1164f3c5u);
  /* 1164f3c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164f3c8:;
  /* 1164f3c8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1164f3cc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f3cf jne 0x1164f3ea */
  if (!C.zf) goto L_1164f3ea;
  /* 1164f3d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f3d4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1164f3d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164f3db jne 0x1164f3ea */
  if (!C.zf) goto L_1164f3ea;
  /* 1164f3dd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f3e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1164f3e1 call dword ptr [0x11673b94] */
  call_ind((uint32_t)(r32((uint32_t)(0x11673b94))), 0x1164f3e7u);
  /* 1164f3e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164f3ea:;
  /* 1164f3ea mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f3ed movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1164f3f0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f3f3 jne 0x1164f407 */
  if (!C.zf) goto L_1164f407;
  /* 1164f3f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f3f8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1164f3fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164f3fe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f401 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f404 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1164f407:;
  /* 1164f407 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f40a push eax */
  push32((uint32_t)(EAX));
  /* 1164f40b call 0x116496f0 */
  push32(0x1164f410u); f_116496f0();
  /* 1164f410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f413 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1164f416 jmp 0x1164f727 */
  goto L_1164f727;
L_1164f41b:;
  /* 1164f41b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f41e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1164f421 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164f424 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1164f42e jmp 0x1164f4b5 */
  goto L_1164f4b5;
L_1164f433:;
  /* 1164f433 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1164f43d jmp 0x1164f4b5 */
  goto L_1164f4b5;
L_1164f43f:;
  /* 1164f43f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1164f449:;
  /* 1164f449 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1164f453 jmp 0x1164f45f */
  goto L_1164f45f;
L_1164f455:;
  /* 1164f455 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1164f45f:;
  /* 1164f45f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1164f469 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f46c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1164f472 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164f474 je 0x1164f493 */
  if (C.zf) goto L_1164f493;
  /* 1164f476 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1164f47d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1164f483 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f486 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1164f48c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1164f493:;
  /* 1164f493 jmp 0x1164f4b5 */
  goto L_1164f4b5;
L_1164f495:;
  /* 1164f495 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1164f49f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f4a2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1164f4a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164f4aa je 0x1164f4b5 */
  if (C.zf) goto L_1164f4b5;
  /* 1164f4ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f4af or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1164f4b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164f4b5:;
  /* 1164f4b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f4b8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1164f4bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164f4bf je 0x1164f4de */
  if (C.zf) goto L_1164f4de;
  /* 1164f4c1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1164f4c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1164f4c5 call 0x1164fb50 */
  push32(0x1164f4cau); f_1164fb50();
  /* 1164f4ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f4cd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1164f4d3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1164f4d9 jmp 0x1164f56f */
  goto L_1164f56f;
L_1164f4de:;
  /* 1164f4de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f4e1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1164f4e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164f4e6 je 0x1164f530 */
  if (C.zf) goto L_1164f530;
  /* 1164f4e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f4eb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1164f4ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164f4f0 je 0x1164f510 */
  if (C.zf) goto L_1164f510;
  /* 1164f4f2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1164f4f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1164f4f6 call 0x1164fb30 */
  push32(0x1164f4fbu); f_1164fb30();
  /* 1164f4fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f4fe movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1164f501 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1164f502 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1164f508 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1164f50e jmp 0x1164f52e */
  goto L_1164f52e;
L_1164f510:;
  /* 1164f510 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1164f513 push edx */
  push32((uint32_t)(EDX));
  /* 1164f514 call 0x1164fb30 */
  push32(0x1164f519u); f_1164fb30();
  /* 1164f519 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f51c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1164f521 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1164f522 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1164f528 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1164f52e:;
  /* 1164f52e jmp 0x1164f56f */
  goto L_1164f56f;
L_1164f530:;
  /* 1164f530 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f533 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1164f536 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164f538 je 0x1164f555 */
  if (C.zf) goto L_1164f555;
  /* 1164f53a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1164f53d push ecx */
  push32((uint32_t)(ECX));
  /* 1164f53e call 0x1164fb30 */
  push32(0x1164f543u); f_1164fb30();
  /* 1164f543 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f546 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1164f547 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1164f54d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1164f553 jmp 0x1164f56f */
  goto L_1164f56f;
L_1164f555:;
  /* 1164f555 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1164f558 push edx */
  push32((uint32_t)(EDX));
  /* 1164f559 call 0x1164fb30 */
  push32(0x1164f55eu); f_1164fb30();
  /* 1164f55e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f561 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1164f563 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1164f569 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1164f56f:;
  /* 1164f56f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f572 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1164f575 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164f577 je 0x1164f5b7 */
  if (C.zf) goto L_1164f5b7;
  /* 1164f579 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f580 jg 0x1164f5b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1164f5b7;
  /* 1164f582 jl 0x1164f58d */
  if ((C.sf!=C.of)) goto L_1164f58d;
  /* 1164f584 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f58b jae 0x1164f5b7 */
  if (!C.cf) goto L_1164f5b7;
L_1164f58d:;
  /* 1164f58d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1164f593 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1164f595 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1164f59b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f59e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1164f5a0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1164f5a6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1164f5ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f5af or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1164f5b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1164f5b5 jmp 0x1164f5cf */
  goto L_1164f5cf;
L_1164f5b7:;
  /* 1164f5b7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1164f5bd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1164f5c3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1164f5c9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1164f5cf:;
  /* 1164f5cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f5d2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1164f5d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164f5da jne 0x1164f5f7 */
  if (!C.zf) goto L_1164f5f7;
  /* 1164f5dc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1164f5e2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1164f5e8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1164f5eb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1164f5f1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1164f5f7:;
  /* 1164f5f7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f5fe jge 0x1164f60c */
  if ((C.sf==C.of)) goto L_1164f60c;
  /* 1164f600 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1164f60a jmp 0x1164f615 */
  goto L_1164f615;
L_1164f60c:;
  /* 1164f60c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f60f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1164f612 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164f615:;
  /* 1164f615 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1164f61b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1164f621 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164f623 jne 0x1164f62c */
  if (!C.zf) goto L_1164f62c;
  /* 1164f625 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1164f62c:;
  /* 1164f62c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1164f62f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1164f632:;
  /* 1164f632 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1164f638 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1164f63e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164f641 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1164f647 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164f649 jg 0x1164f65f */
  if ((!C.zf&&C.sf==C.of)) goto L_1164f65f;
  /* 1164f64b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1164f651 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1164f657 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164f659 je 0x1164f6e0 */
  if (C.zf) goto L_1164f6e0;
L_1164f65f:;
  /* 1164f65f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1164f665 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1164f666 push edx */
  push32((uint32_t)(EDX));
  /* 1164f667 push eax */
  push32((uint32_t)(EAX));
  /* 1164f668 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1164f66e push edx */
  push32((uint32_t)(EDX));
  /* 1164f66f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1164f675 push eax */
  push32((uint32_t)(EAX));
  /* 1164f676 call 0x1164e9f0 */
  push32(0x1164f67bu); f_1164e9f0();
  /* 1164f67b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f67e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1164f684 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1164f68a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1164f68b push edx */
  push32((uint32_t)(EDX));
  /* 1164f68c push eax */
  push32((uint32_t)(EAX));
  /* 1164f68d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1164f693 push ecx */
  push32((uint32_t)(ECX));
  /* 1164f694 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1164f69a push edx */
  push32((uint32_t)(EDX));
  /* 1164f69b call 0x1164e980 */
  push32(0x1164f6a0u); f_1164e980();
  /* 1164f6a0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1164f6a6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1164f6ac cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f6b3 jle 0x1164f6c7 */
  if ((C.zf||C.sf!=C.of)) goto L_1164f6c7;
  /* 1164f6b5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1164f6bb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f6c1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1164f6c7:;
  /* 1164f6c7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f6ca mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1164f6d0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1164f6d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f6d5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164f6d8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1164f6db jmp 0x1164f632 */
  goto L_1164f632;
L_1164f6e0:;
  /* 1164f6e0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1164f6e3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164f6e6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1164f6e9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f6ec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f6ef mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1164f6f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f6f5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1164f6fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164f6fc je 0x1164f727 */
  if (C.zf) goto L_1164f727;
  /* 1164f6fe mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f701 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1164f704 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f707 jne 0x1164f70f */
  if (!C.zf) goto L_1164f70f;
  /* 1164f709 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f70d jne 0x1164f727 */
  if (!C.zf) goto L_1164f727;
L_1164f70f:;
  /* 1164f70f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f712 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164f715 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1164f718 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f71b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1164f71e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164f721 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f724 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1164f727:;
  /* 1164f727 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f72e jne 0x1164f902 */
  if (!C.zf) goto L_1164f902;
  /* 1164f734 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f737 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1164f73a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164f73c je 0x1164f78d */
  if (C.zf) goto L_1164f78d;
  /* 1164f73e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f741 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1164f747 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164f749 je 0x1164f75b */
  if (C.zf) goto L_1164f75b;
  /* 1164f74b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1164f752 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1164f759 jmp 0x1164f78d */
  goto L_1164f78d;
L_1164f75b:;
  /* 1164f75b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f75e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1164f761 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164f763 je 0x1164f775 */
  if (C.zf) goto L_1164f775;
  /* 1164f765 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1164f76c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1164f773 jmp 0x1164f78d */
  goto L_1164f78d;
L_1164f775:;
  /* 1164f775 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f778 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1164f77b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164f77d je 0x1164f78d */
  if (C.zf) goto L_1164f78d;
  /* 1164f77f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1164f786 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1164f78d:;
  /* 1164f78d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1164f793 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164f796 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164f799 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1164f79f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f7a2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1164f7a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164f7a7 jne 0x1164f7c5 */
  if (!C.zf) goto L_1164f7c5;
  /* 1164f7a9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1164f7af push eax */
  push32((uint32_t)(EAX));
  /* 1164f7b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164f7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1164f7b4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1164f7ba push edx */
  push32((uint32_t)(EDX));
  /* 1164f7bb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1164f7bd call 0x1164faa0 */
  push32(0x1164f7c2u); f_1164faa0();
  /* 1164f7c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164f7c5:;
  /* 1164f7c5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1164f7cb push eax */
  push32((uint32_t)(EAX));
  /* 1164f7cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164f7cf push ecx */
  push32((uint32_t)(ECX));
  /* 1164f7d0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164f7d3 push edx */
  push32((uint32_t)(EDX));
  /* 1164f7d4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1164f7da push eax */
  push32((uint32_t)(EAX));
  /* 1164f7db call 0x1164fae0 */
  push32(0x1164f7e0u); f_1164fae0();
  /* 1164f7e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f7e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f7e6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1164f7e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1164f7eb je 0x1164f813 */
  if (C.zf) goto L_1164f813;
  /* 1164f7ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f7f0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1164f7f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164f7f5 jne 0x1164f813 */
  if (!C.zf) goto L_1164f813;
  /* 1164f7f7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1164f7fd push eax */
  push32((uint32_t)(EAX));
  /* 1164f7fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164f801 push ecx */
  push32((uint32_t)(ECX));
  /* 1164f802 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1164f808 push edx */
  push32((uint32_t)(EDX));
  /* 1164f809 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1164f80b call 0x1164faa0 */
  push32(0x1164f810u); f_1164faa0();
  /* 1164f810 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164f813:;
  /* 1164f813 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f817 je 0x1164f8c1 */
  if (C.zf) goto L_1164f8c1;
  /* 1164f81d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f821 jle 0x1164f8c1 */
  if ((C.zf||C.sf!=C.of)) goto L_1164f8c1;
  /* 1164f827 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f82a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1164f830 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164f833 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1164f839:;
  /* 1164f839 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1164f83f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1164f845 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164f848 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1164f84e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164f850 je 0x1164f8bf */
  if (C.zf) goto L_1164f8bf;
  /* 1164f852 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1164f858 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1164f85b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1164f862 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1164f869 push eax */
  push32((uint32_t)(EAX));
  /* 1164f86a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1164f870 push ecx */
  push32((uint32_t)(ECX));
  /* 1164f871 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1164f877 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f87a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1164f880 call 0x11652700 */
  push32(0x1164f885u); f_11652700();
  /* 1164f885 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f888 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1164f88e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164f895 jg 0x1164f899 */
  if ((!C.zf&&C.sf==C.of)) goto L_1164f899;
  /* 1164f897 jmp 0x1164f8bf */
  goto L_1164f8bf;
L_1164f899:;
  /* 1164f899 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1164f89f push eax */
  push32((uint32_t)(EAX));
  /* 1164f8a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164f8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1164f8a4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1164f8aa push edx */
  push32((uint32_t)(EDX));
  /* 1164f8ab lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1164f8b1 push eax */
  push32((uint32_t)(EAX));
  /* 1164f8b2 call 0x1164fae0 */
  push32(0x1164f8b7u); f_1164fae0();
  /* 1164f8b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164f8ba jmp 0x1164f839 */
  goto L_1164f839;
L_1164f8bf:;
  /* 1164f8bf jmp 0x1164f8dc */
  goto L_1164f8dc;
L_1164f8c1:;
  /* 1164f8c1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1164f8c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1164f8c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164f8cb push edx */
  push32((uint32_t)(EDX));
  /* 1164f8cc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164f8cf push eax */
  push32((uint32_t)(EAX));
  /* 1164f8d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164f8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1164f8d4 call 0x1164fae0 */
  push32(0x1164f8d9u); f_1164fae0();
  /* 1164f8d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164f8dc:;
  /* 1164f8dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164f8df and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1164f8e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1164f8e4 je 0x1164f902 */
  if (C.zf) goto L_1164f902;
  /* 1164f8e6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1164f8ec push eax */
  push32((uint32_t)(EAX));
  /* 1164f8ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164f8f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1164f8f1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1164f8f7 push edx */
  push32((uint32_t)(EDX));
  /* 1164f8f8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1164f8fa call 0x1164faa0 */
  push32(0x1164f8ffu); f_1164faa0();
  /* 1164f8ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1164f902:;
  /* 1164f902 jmp 0x1164ed14 */
  goto L_1164ed14;
L_1164f907:;
  /* 1164f907 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1164f90d pop edi */
  EDI = (pop32());
  /* 1164f90e pop esi */
  ESI = (pop32());
  /* 1164f90f pop ebx */
  EBX = (pop32());
  /* 1164f910 mov esp, ebp */
  ESP = (EBP);
  /* 1164f912 pop ebp */
  EBP = (pop32());
  /* 1164f913 ret  */
  ESPCHK(0x1164ecf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa20 @ 0x1164fa20 (119 bytes, 44 insns) */
void f_1164fa20(void) {
  FTRACE(0x1164fa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164fa20 push ebp */
  push32((uint32_t)(EBP));
  /* 1164fa21 mov ebp, esp */
  EBP = (ESP);
  /* 1164fa23 push ecx */
  push32((uint32_t)(ECX));
  /* 1164fa24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164fa27 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1164fa2a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164fa2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164fa30 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1164fa33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164fa36 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fa3a jl 0x1164fa62 */
  if ((C.sf!=C.of)) goto L_1164fa62;
  /* 1164fa3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164fa3f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1164fa41 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1164fa44 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1164fa46 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1164fa4a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1164fa50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1164fa53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164fa56 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1164fa58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fa5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164fa5e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1164fa60 jmp 0x1164fa75 */
  goto L_1164fa75;
L_1164fa62:;
  /* 1164fa62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164fa65 push edx */
  push32((uint32_t)(EDX));
  /* 1164fa66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fa69 push eax */
  push32((uint32_t)(EAX));
  /* 1164fa6a call 0x1164ea70 */
  push32(0x1164fa6fu); f_1164ea70();
  /* 1164fa6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fa72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1164fa75:;
  /* 1164fa75 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fa79 jne 0x1164fa86 */
  if (!C.zf) goto L_1164fa86;
  /* 1164fa7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164fa7e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1164fa84 jmp 0x1164fa93 */
  goto L_1164fa93;
L_1164fa86:;
  /* 1164fa86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164fa89 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1164fa8b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fa8e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164fa91 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1164fa93:;
  /* 1164fa93 mov esp, ebp */
  ESP = (EBP);
  /* 1164fa95 pop ebp */
  EBP = (pop32());
  /* 1164fa96 ret  */
  ESPCHK(0x1164fa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faa0 @ 0x1164faa0 (53 bytes, 23 insns) */
void f_1164faa0(void) {
  FTRACE(0x1164faa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164faa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164faa1 mov ebp, esp */
  EBP = (ESP);
L_1164faa3:;
  /* 1164faa3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164faa6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164faa9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164faac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1164faaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164fab1 jle 0x1164fad3 */
  if ((C.zf||C.sf!=C.of)) goto L_1164fad3;
  /* 1164fab3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1164fab6 push edx */
  push32((uint32_t)(EDX));
  /* 1164fab7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164faba push eax */
  push32((uint32_t)(EAX));
  /* 1164fabb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fabe push ecx */
  push32((uint32_t)(ECX));
  /* 1164fabf call 0x1164fa20 */
  push32(0x1164fac4u); f_1164fa20();
  /* 1164fac4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fac7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1164faca cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164facd jne 0x1164fad1 */
  if (!C.zf) goto L_1164fad1;
  /* 1164facf jmp 0x1164fad3 */
  goto L_1164fad3;
L_1164fad1:;
  /* 1164fad1 jmp 0x1164faa3 */
  goto L_1164faa3;
L_1164fad3:;
  /* 1164fad3 pop ebp */
  EBP = (pop32());
  /* 1164fad4 ret  */
  ESPCHK(0x1164faa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fae0 @ 0x1164fae0 (74 bytes, 31 insns) */
void f_1164fae0(void) {
  FTRACE(0x1164fae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164fae0 push ebp */
  push32((uint32_t)(EBP));
  /* 1164fae1 mov ebp, esp */
  EBP = (ESP);
  /* 1164fae3 push ecx */
  push32((uint32_t)(ECX));
L_1164fae4:;
  /* 1164fae4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164fae7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164faea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164faed mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1164faf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164faf2 jle 0x1164fb26 */
  if ((C.zf||C.sf!=C.of)) goto L_1164fb26;
  /* 1164faf4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1164faf7 push edx */
  push32((uint32_t)(EDX));
  /* 1164faf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164fafb push eax */
  push32((uint32_t)(EAX));
  /* 1164fafc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164faff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1164fb02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1164fb05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164fb08 push eax */
  push32((uint32_t)(EAX));
  /* 1164fb09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fb0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fb0f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1164fb12 call 0x1164fa20 */
  push32(0x1164fb17u); f_1164fa20();
  /* 1164fb17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fb1a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1164fb1d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fb20 jne 0x1164fb24 */
  if (!C.zf) goto L_1164fb24;
  /* 1164fb22 jmp 0x1164fb26 */
  goto L_1164fb26;
L_1164fb24:;
  /* 1164fb24 jmp 0x1164fae4 */
  goto L_1164fae4;
L_1164fb26:;
  /* 1164fb26 mov esp, ebp */
  ESP = (EBP);
  /* 1164fb28 pop ebp */
  EBP = (pop32());
  /* 1164fb29 ret  */
  ESPCHK(0x1164fae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb30 @ 0x1164fb30 (26 bytes, 12 insns) */
void f_1164fb30(void) {
  FTRACE(0x1164fb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164fb30 push ebp */
  push32((uint32_t)(EBP));
  /* 1164fb31 mov ebp, esp */
  EBP = (ESP);
  /* 1164fb33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fb36 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164fb38 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fb3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fb3e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1164fb40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fb43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164fb45 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1164fb48 pop ebp */
  EBP = (pop32());
  /* 1164fb49 ret  */
  ESPCHK(0x1164fb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb50 @ 0x1164fb50 (31 bytes, 14 insns) */
void f_1164fb50(void) {
  FTRACE(0x1164fb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164fb50 push ebp */
  push32((uint32_t)(EBP));
  /* 1164fb51 mov ebp, esp */
  EBP = (ESP);
  /* 1164fb53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fb56 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164fb58 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fb5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fb5e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1164fb60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fb63 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164fb65 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164fb68 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1164fb6a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1164fb6d pop ebp */
  EBP = (pop32());
  /* 1164fb6e ret  */
  ESPCHK(0x1164fb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb70 @ 0x1164fb70 (27 bytes, 12 insns) */
void f_1164fb70(void) {
  FTRACE(0x1164fb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164fb70 push ebp */
  push32((uint32_t)(EBP));
  /* 1164fb71 mov ebp, esp */
  EBP = (ESP);
  /* 1164fb73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fb76 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164fb78 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fb7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fb7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1164fb80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fb83 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1164fb85 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1164fb89 pop ebp */
  EBP = (pop32());
  /* 1164fb8a ret  */
  ESPCHK(0x1164fb70u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1164fb90 (145 bytes, 42 insns) */
void f_1164fb90(void) {
  FTRACE(0x1164fb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164fb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1164fb91 mov ebp, esp */
  EBP = (ESP);
  /* 1164fb93 push ecx */
  push32((uint32_t)(ECX));
  /* 1164fb94 call 0x1164fc40 */
  push32(0x1164fb99u); f_1164fc40();
  /* 1164fb99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fb9c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1164fb9e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164fba5 jmp 0x1164fbb0 */
  goto L_1164fbb0;
L_1164fba7:;
  /* 1164fba7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164fbaa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fbad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1164fbb0:;
  /* 1164fbb0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fbb4 jae 0x1164fbda */
  if (!C.cf) goto L_1164fbda;
  /* 1164fbb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164fbb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fbbc cmp ecx, dword ptr [eax*8 + 0x11674138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11674138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fbc3 jne 0x1164fbd8 */
  if (!C.zf) goto L_1164fbd8;
  /* 1164fbc5 call 0x1164fc30 */
  push32(0x1164fbcau); f_1164fc30();
  /* 1164fbca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1164fbcd mov ecx, dword ptr [edx*8 + 0x1167413c] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1167413c)));
  /* 1164fbd4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1164fbd6 jmp 0x1164fc1d */
  goto L_1164fc1d;
L_1164fbd8:;
  /* 1164fbd8 jmp 0x1164fba7 */
  goto L_1164fba7;
L_1164fbda:;
  /* 1164fbda cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fbde jb 0x1164fbf3 */
  if (C.cf) goto L_1164fbf3;
  /* 1164fbe0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fbe4 ja 0x1164fbf3 */
  if ((!C.cf&&!C.zf)) goto L_1164fbf3;
  /* 1164fbe6 call 0x1164fc30 */
  push32(0x1164fbebu); f_1164fc30();
  /* 1164fbeb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1164fbf1 jmp 0x1164fc1d */
  goto L_1164fc1d;
L_1164fbf3:;
  /* 1164fbf3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fbfa jb 0x1164fc12 */
  if (C.cf) goto L_1164fc12;
  /* 1164fbfc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fc03 ja 0x1164fc12 */
  if ((!C.cf&&!C.zf)) goto L_1164fc12;
  /* 1164fc05 call 0x1164fc30 */
  push32(0x1164fc0au); f_1164fc30();
  /* 1164fc0a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1164fc10 jmp 0x1164fc1d */
  goto L_1164fc1d;
L_1164fc12:;
  /* 1164fc12 call 0x1164fc30 */
  push32(0x1164fc17u); f_1164fc30();
  /* 1164fc17 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1164fc1d:;
  /* 1164fc1d mov esp, ebp */
  ESP = (EBP);
  /* 1164fc1f pop ebp */
  EBP = (pop32());
  /* 1164fc20 ret  */
  ESPCHK(0x1164fb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc30 @ 0x1164fc30 (13 bytes, 6 insns) */
void f_1164fc30(void) {
  FTRACE(0x1164fc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164fc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1164fc31 mov ebp, esp */
  EBP = (ESP);
  /* 1164fc33 call 0x11646300 */
  push32(0x1164fc38u); f_11646300();
  /* 1164fc38 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fc3b pop ebp */
  EBP = (pop32());
  /* 1164fc3c ret  */
  ESPCHK(0x1164fc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc40 @ 0x1164fc40 (13 bytes, 6 insns) */
void f_1164fc40(void) {
  FTRACE(0x1164fc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164fc40 push ebp */
  push32((uint32_t)(EBP));
  /* 1164fc41 mov ebp, esp */
  EBP = (ESP);
  /* 1164fc43 call 0x11646300 */
  push32(0x1164fc48u); f_11646300();
  /* 1164fc48 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fc4b pop ebp */
  EBP = (pop32());
  /* 1164fc4c ret  */
  ESPCHK(0x1164fc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc50 @ 0x1164fc50 (421 bytes, 148 insns) */
void f_1164fc50(void) {
  FTRACE(0x1164fc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164fc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1164fc51 mov ebp, esp */
  EBP = (ESP);
  /* 1164fc53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1164fc55 push 0x11671120 */
  push32((uint32_t)(0x11671120u));
  /* 1164fc5a push 0x11652918 */
  push32((uint32_t)(0x11652918u));
  /* 1164fc5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1164fc65 push eax */
  push32((uint32_t)(EAX));
  /* 1164fc66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1164fc6d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fc70 push ebx */
  push32((uint32_t)(EBX));
  /* 1164fc71 push esi */
  push32((uint32_t)(ESI));
  /* 1164fc72 push edi */
  push32((uint32_t)(EDI));
  /* 1164fc73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1164fc76 cmp dword ptr [0x1167619c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1167619c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fc7d jne 0x1164fcce */
  if (!C.zf) goto L_1164fcce;
  /* 1164fc7f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1164fc82 push eax */
  push32((uint32_t)(EAX));
  /* 1164fc83 push 1 */
  push32((uint32_t)(0x1u));
  /* 1164fc85 push 0x1167111c */
  push32((uint32_t)(0x1167111cu));
  /* 1164fc8a push 1 */
  push32((uint32_t)(0x1u));
  /* 1164fc8c call dword ptr [0x116782f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782f4))), 0x1164fc92u);
  /* 1164fc92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164fc94 je 0x1164fca2 */
  if (C.zf) goto L_1164fca2;
  /* 1164fc96 mov dword ptr [0x1167619c], 1 */
  w32((uint32_t)(0x1167619c), (0x1u));
  /* 1164fca0 jmp 0x1164fcce */
  goto L_1164fcce;
L_1164fca2:;
  /* 1164fca2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1164fca5 push ecx */
  push32((uint32_t)(ECX));
  /* 1164fca6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1164fca8 push 0x11671118 */
  push32((uint32_t)(0x11671118u));
  /* 1164fcad push 1 */
  push32((uint32_t)(0x1u));
  /* 1164fcaf push 0 */
  push32((uint32_t)(0x0u));
  /* 1164fcb1 call dword ptr [0x11678304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678304))), 0x1164fcb7u);
  /* 1164fcb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164fcb9 je 0x1164fcc7 */
  if (C.zf) goto L_1164fcc7;
  /* 1164fcbb mov dword ptr [0x1167619c], 2 */
  w32((uint32_t)(0x1167619c), (0x2u));
  /* 1164fcc5 jmp 0x1164fcce */
  goto L_1164fcce;
L_1164fcc7:;
  /* 1164fcc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164fcc9 jmp 0x1164fdf8 */
  goto L_1164fdf8;
L_1164fcce:;
  /* 1164fcce cmp dword ptr [0x1167619c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1167619c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fcd5 jne 0x1164fd05 */
  if (!C.zf) goto L_1164fd05;
  /* 1164fcd7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fcdb jne 0x1164fce6 */
  if (!C.zf) goto L_1164fce6;
  /* 1164fcdd mov edx, dword ptr [0x116761b4] */
  EDX = (r32((uint32_t)(0x116761b4)));
  /* 1164fce3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1164fce6:;
  /* 1164fce6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1164fce9 push eax */
  push32((uint32_t)(EAX));
  /* 1164fcea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164fced push ecx */
  push32((uint32_t)(ECX));
  /* 1164fcee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164fcf1 push edx */
  push32((uint32_t)(EDX));
  /* 1164fcf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fcf5 push eax */
  push32((uint32_t)(EAX));
  /* 1164fcf6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1164fcf9 push ecx */
  push32((uint32_t)(ECX));
  /* 1164fcfa call dword ptr [0x11678304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678304))), 0x1164fd00u);
  /* 1164fd00 jmp 0x1164fdf8 */
  goto L_1164fdf8;
L_1164fd05:;
  /* 1164fd05 cmp dword ptr [0x1167619c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1167619c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fd0c jne 0x1164fdf6 */
  if (!C.zf) goto L_1164fdf6;
  /* 1164fd12 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fd16 jne 0x1164fd21 */
  if (!C.zf) goto L_1164fd21;
  /* 1164fd18 mov edx, dword ptr [0x116761c4] */
  EDX = (r32((uint32_t)(0x116761c4)));
  /* 1164fd1e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1164fd21:;
  /* 1164fd21 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164fd23 push 0 */
  push32((uint32_t)(0x0u));
  /* 1164fd25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164fd28 push eax */
  push32((uint32_t)(EAX));
  /* 1164fd29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164fd2c push ecx */
  push32((uint32_t)(ECX));
  /* 1164fd2d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1164fd30 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1164fd32 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164fd34 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1164fd37 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fd3a push edx */
  push32((uint32_t)(EDX));
  /* 1164fd3b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1164fd3e push eax */
  push32((uint32_t)(EAX));
  /* 1164fd3f call dword ptr [0x116782fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782fc))), 0x1164fd45u);
  /* 1164fd45 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1164fd48 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fd4c jne 0x1164fd55 */
  if (!C.zf) goto L_1164fd55;
  /* 1164fd4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164fd50 jmp 0x1164fdf8 */
  goto L_1164fdf8;
L_1164fd55:;
  /* 1164fd55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1164fd5c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164fd5f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1164fd61 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fd64 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1164fd66 call 0x11649a60 */
  push32(0x1164fd6bu); f_11649a60();
  /* 1164fd6b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1164fd6e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1164fd71 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1164fd74 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1164fd77 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164fd7a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1164fd7c push edx */
  push32((uint32_t)(EDX));
  /* 1164fd7d push 0 */
  push32((uint32_t)(0x0u));
  /* 1164fd7f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164fd82 push eax */
  push32((uint32_t)(EAX));
  /* 1164fd83 call 0x1164b3f0 */
  push32(0x1164fd88u); f_1164b3f0();
  /* 1164fd88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fd8b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1164fd92 jmp 0x1164fdab */
  goto L_1164fdab;
  /* 1164fd94 mov eax, 1 */
  EAX = (0x1u);
  /* 1164fd99 ret  */
  ESPCHK(0x1164fc50u, _esp0);
  ESP += 4; return;
  /* 1164fd9a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1164fd9d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1164fda4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1164fdab:;
  /* 1164fdab cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fdaf jne 0x1164fdb5 */
  if (!C.zf) goto L_1164fdb5;
  /* 1164fdb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164fdb3 jmp 0x1164fdf8 */
  goto L_1164fdf8;
L_1164fdb5:;
  /* 1164fdb5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1164fdb8 push ecx */
  push32((uint32_t)(ECX));
  /* 1164fdb9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164fdbc push edx */
  push32((uint32_t)(EDX));
  /* 1164fdbd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1164fdc0 push eax */
  push32((uint32_t)(EAX));
  /* 1164fdc1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164fdc4 push ecx */
  push32((uint32_t)(ECX));
  /* 1164fdc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1164fdc7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1164fdca push edx */
  push32((uint32_t)(EDX));
  /* 1164fdcb call dword ptr [0x116782fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782fc))), 0x1164fdd1u);
  /* 1164fdd1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1164fdd4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fdd8 jne 0x1164fdde */
  if (!C.zf) goto L_1164fdde;
  /* 1164fdda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164fddc jmp 0x1164fdf8 */
  goto L_1164fdf8;
L_1164fdde:;
  /* 1164fdde mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1164fde1 push eax */
  push32((uint32_t)(EAX));
  /* 1164fde2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1164fde5 push ecx */
  push32((uint32_t)(ECX));
  /* 1164fde6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1164fde9 push edx */
  push32((uint32_t)(EDX));
  /* 1164fdea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fded push eax */
  push32((uint32_t)(EAX));
  /* 1164fdee call dword ptr [0x116782f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782f4))), 0x1164fdf4u);
  /* 1164fdf4 jmp 0x1164fdf8 */
  goto L_1164fdf8;
L_1164fdf6:;
  /* 1164fdf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1164fdf8:;
  /* 1164fdf8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1164fdfb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164fdfe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1164fe05 pop edi */
  EDI = (pop32());
  /* 1164fe06 pop esi */
  ESI = (pop32());
  /* 1164fe07 pop ebx */
  EBX = (pop32());
  /* 1164fe08 mov esp, ebp */
  ESP = (EBP);
  /* 1164fe0a pop ebp */
  EBP = (pop32());
  /* 1164fe0b ret  */
  ESPCHK(0x1164fc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe10 @ 0x1164fe10 (1007 bytes, 269 insns) */
void f_1164fe10(void) {
  FTRACE(0x1164fe10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1164fe10 push ebp */
  push32((uint32_t)(EBP));
  /* 1164fe11 mov ebp, esp */
  EBP = (ESP);
  /* 1164fe13 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164fe19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fe1d jl 0x1164fe25 */
  if ((C.sf!=C.of)) goto L_1164fe25;
  /* 1164fe1f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fe23 jle 0x1164fe2c */
  if ((C.zf||C.sf!=C.of)) goto L_1164fe2c;
L_1164fe25:;
  /* 1164fe25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164fe27 jmp 0x116501fb */
  goto L_116501fb;
L_1164fe2c:;
  /* 1164fe2c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1164fe2e call 0x1164b880 */
  push32(0x1164fe33u); f_1164b880();
  /* 1164fe33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fe36 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1164fe3d mov eax, dword ptr [0x11677684] */
  EAX = (r32((uint32_t)(0x11677684)));
  /* 1164fe42 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fe45 mov dword ptr [0x11677684], eax */
  w32((uint32_t)(0x11677684), (EAX));
L_1164fe4a:;
  /* 1164fe4a cmp dword ptr [0x11677694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fe51 je 0x1164fe5d */
  if (C.zf) goto L_1164fe5d;
  /* 1164fe53 push 1 */
  push32((uint32_t)(0x1u));
  /* 1164fe55 call dword ptr [0x116782f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782f0))), 0x1164fe5bu);
  /* 1164fe5b jmp 0x1164fe4a */
  goto L_1164fe4a;
L_1164fe5d:;
  /* 1164fe5d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fe61 je 0x1164fea1 */
  if (C.zf) goto L_1164fea1;
  /* 1164fe63 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fe67 je 0x1164fe81 */
  if (C.zf) goto L_1164fe81;
  /* 1164fe69 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164fe6c push ecx */
  push32((uint32_t)(ECX));
  /* 1164fe6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fe70 push edx */
  push32((uint32_t)(EDX));
  /* 1164fe71 call 0x11650200 */
  push32(0x1164fe76u); f_11650200();
  /* 1164fe76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164fe79 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1164fe7f jmp 0x1164fe93 */
  goto L_1164fe93;
L_1164fe81:;
  /* 1164fe81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1164fe84 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164fe87 mov ecx, dword ptr [eax + 0x116743b4] */
  ECX = (r32((uint32_t)(EAX + 0x116743b4)));
  /* 1164fe8d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1164fe93:;
  /* 1164fe93 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1164fe99 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1164fe9c jmp 0x116501db */
  goto L_116501db;
L_1164fea1:;
  /* 1164fea1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1164fea8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1164feaf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164feb3 je 0x116501d3 */
  if (C.zf) goto L_116501d3;
  /* 1164feb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164febc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1164febf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fec2 jne 0x116500e4 */
  if (!C.zf) goto L_116500e4;
  /* 1164fec8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164fecb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1164fecf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fed2 jne 0x116500e4 */
  if (!C.zf) goto L_116500e4;
  /* 1164fed8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164fedb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1164fedf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fee2 jne 0x116500e4 */
  if (!C.zf) goto L_116500e4;
  /* 1164fee8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1164feeb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1164fef1:;
  /* 1164fef1 push 0x11671170 */
  push32((uint32_t)(0x11671170u));
  /* 1164fef6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1164fefc push ecx */
  push32((uint32_t)(ECX));
  /* 1164fefd call 0x11653fc0 */
  push32(0x1164ff02u); f_11653fc0();
  /* 1164ff02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ff05 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1164ff0b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ff12 je 0x1164ff3d */
  if (C.zf) goto L_1164ff3d;
  /* 1164ff14 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1164ff1a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ff20 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1164ff26 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ff2d je 0x1164ff3d */
  if (C.zf) goto L_1164ff3d;
  /* 1164ff2f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1164ff35 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1164ff38 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ff3b jne 0x1164ff63 */
  if (!C.zf) goto L_1164ff63;
L_1164ff3d:;
  /* 1164ff3d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ff41 je 0x1164ff5c */
  if (C.zf) goto L_1164ff5c;
  /* 1164ff43 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1164ff45 call 0x1164b920 */
  push32(0x1164ff4au); f_1164b920();
  /* 1164ff4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ff4d mov edx, dword ptr [0x11677684] */
  EDX = (r32((uint32_t)(0x11677684)));
  /* 1164ff53 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1164ff56 mov dword ptr [0x11677684], edx */
  w32((uint32_t)(0x11677684), (EDX));
L_1164ff5c:;
  /* 1164ff5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1164ff5e jmp 0x116501fb */
  goto L_116501fb;
L_1164ff63:;
  /* 1164ff63 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1164ff6a jmp 0x1164ff75 */
  goto L_1164ff75;
L_1164ff6c:;
  /* 1164ff6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ff6f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ff72 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1164ff75:;
  /* 1164ff75 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ff79 jg 0x1164ffc3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1164ffc3;
  /* 1164ff7b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1164ff81 push ecx */
  push32((uint32_t)(ECX));
  /* 1164ff82 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1164ff88 push edx */
  push32((uint32_t)(EDX));
  /* 1164ff89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ff8c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164ff8f mov ecx, dword ptr [eax + 0x116743b0] */
  ECX = (r32((uint32_t)(EAX + 0x116743b0)));
  /* 1164ff95 push ecx */
  push32((uint32_t)(ECX));
  /* 1164ff96 call 0x11653f80 */
  push32(0x1164ff9bu); f_11653f80();
  /* 1164ff9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ff9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1164ffa0 jne 0x1164ffc1 */
  if (!C.zf) goto L_1164ffc1;
  /* 1164ffa2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1164ffa5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1164ffa8 mov eax, dword ptr [edx + 0x116743b0] */
  EAX = (r32((uint32_t)(EDX + 0x116743b0)));
  /* 1164ffae push eax */
  push32((uint32_t)(EAX));
  /* 1164ffaf call 0x116496f0 */
  push32(0x1164ffb4u); f_116496f0();
  /* 1164ffb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ffb7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164ffbd jne 0x1164ffc1 */
  if (!C.zf) goto L_1164ffc1;
  /* 1164ffbf jmp 0x1164ffc3 */
  goto L_1164ffc3;
L_1164ffc1:;
  /* 1164ffc1 jmp 0x1164ff6c */
  goto L_1164ff6c;
L_1164ffc3:;
  /* 1164ffc3 push 0x1167116c */
  push32((uint32_t)(0x1167116cu));
  /* 1164ffc8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1164ffce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ffd1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1164ffd7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1164ffdd push edx */
  push32((uint32_t)(EDX));
  /* 1164ffde call 0x11653f40 */
  push32(0x1164ffe3u); f_11653f40();
  /* 1164ffe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1164ffe6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1164ffec cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1164fff3 jne 0x11650029 */
  if (!C.zf) goto L_11650029;
  /* 1164fff5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1164fffb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1164fffe cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650001 je 0x11650029 */
  if (C.zf) goto L_11650029;
  /* 11650003 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650007 je 0x11650022 */
  if (C.zf) goto L_11650022;
  /* 11650009 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1165000b call 0x1164b920 */
  push32(0x11650010u); f_1164b920();
  /* 11650010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650013 mov edx, dword ptr [0x11677684] */
  EDX = (r32((uint32_t)(0x11677684)));
  /* 11650019 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165001c mov dword ptr [0x11677684], edx */
  w32((uint32_t)(0x11677684), (EDX));
L_11650022:;
  /* 11650022 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11650024 jmp 0x116501fb */
  goto L_116501fb;
L_11650029:;
  /* 11650029 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165002d jg 0x1165007a */
  if ((!C.zf&&C.sf==C.of)) goto L_1165007a;
  /* 1165002f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11650035 push eax */
  push32((uint32_t)(EAX));
  /* 11650036 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1165003c push ecx */
  push32((uint32_t)(ECX));
  /* 1165003d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11650043 push edx */
  push32((uint32_t)(EDX));
  /* 11650044 call 0x1164a0e0 */
  push32(0x11650049u); f_1164a0e0();
  /* 11650049 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165004c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11650052 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1165005a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11650060 push ecx */
  push32((uint32_t)(ECX));
  /* 11650061 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11650064 push edx */
  push32((uint32_t)(EDX));
  /* 11650065 call 0x11650200 */
  push32(0x1165006au); f_11650200();
  /* 1165006a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165006d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165006f je 0x1165007a */
  if (C.zf) goto L_1165007a;
  /* 11650071 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11650074 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650077 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1165007a:;
  /* 1165007a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11650080 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650086 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1165008c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11650092 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11650095 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11650097 je 0x116500a8 */
  if (C.zf) goto L_116500a8;
  /* 11650099 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1165009f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116500a2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_116500a8:;
  /* 116500a8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 116500ae movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116500b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116500b3 jne 0x1164fef1 */
  if (!C.zf) goto L_1164fef1;
  /* 116500b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116500bd je 0x116500cc */
  if (C.zf) goto L_116500cc;
  /* 116500bf call 0x116503a0 */
  push32(0x116500c4u); f_116503a0();
  /* 116500c4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 116500ca jmp 0x116500d6 */
  goto L_116500d6;
L_116500cc:;
  /* 116500cc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_116500d6:;
  /* 116500d6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 116500dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116500df jmp 0x116501d1 */
  goto L_116501d1;
L_116500e4:;
  /* 116500e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116500e7 push edx */
  push32((uint32_t)(EDX));
  /* 116500e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116500ea push 0 */
  push32((uint32_t)(0x0u));
  /* 116500ec lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 116500f2 push eax */
  push32((uint32_t)(EAX));
  /* 116500f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116500f6 push ecx */
  push32((uint32_t)(ECX));
  /* 116500f7 call 0x116504a0 */
  push32(0x116500fcu); f_116504a0();
  /* 116500fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116500ff mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11650102 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650106 je 0x116501d1 */
  if (C.zf) goto L_116501d1;
  /* 1165010c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11650113 jmp 0x1165011e */
  goto L_1165011e;
L_11650115:;
  /* 11650115 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11650118 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165011b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1165011e:;
  /* 1165011e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650122 jg 0x11650180 */
  if ((!C.zf&&C.sf==C.of)) goto L_11650180;
  /* 11650124 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650128 je 0x1165017e */
  if (C.zf) goto L_1165017e;
  /* 1165012a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1165012d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11650130 mov ecx, dword ptr [eax + 0x116743b4] */
  ECX = (r32((uint32_t)(EAX + 0x116743b4)));
  /* 11650136 push ecx */
  push32((uint32_t)(ECX));
  /* 11650137 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1165013d push edx */
  push32((uint32_t)(EDX));
  /* 1165013e call 0x11653eb0 */
  push32(0x11650143u); f_11653eb0();
  /* 11650143 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650146 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11650148 je 0x11650175 */
  if (C.zf) goto L_11650175;
  /* 1165014a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11650150 push eax */
  push32((uint32_t)(EAX));
  /* 11650151 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11650154 push ecx */
  push32((uint32_t)(ECX));
  /* 11650155 call 0x11650200 */
  push32(0x1165015au); f_11650200();
  /* 1165015a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165015d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165015f je 0x1165016c */
  if (C.zf) goto L_1165016c;
  /* 11650161 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11650164 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650167 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1165016a jmp 0x11650173 */
  goto L_11650173;
L_1165016c:;
  /* 1165016c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11650173:;
  /* 11650173 jmp 0x1165017e */
  goto L_1165017e;
L_11650175:;
  /* 11650175 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11650178 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165017b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1165017e:;
  /* 1165017e jmp 0x11650115 */
  goto L_11650115;
L_11650180:;
  /* 11650180 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650184 je 0x116501ab */
  if (C.zf) goto L_116501ab;
  /* 11650186 call 0x116503a0 */
  push32(0x1165018bu); f_116503a0();
  /* 1165018b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1165018e push 2 */
  push32((uint32_t)(0x2u));
  /* 11650190 mov ecx, dword ptr [0x116743b4] */
  ECX = (r32((uint32_t)(0x116743b4)));
  /* 11650196 push ecx */
  push32((uint32_t)(ECX));
  /* 11650197 call 0x11647350 */
  push32(0x1165019cu); f_11647350();
  /* 1165019c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165019f mov dword ptr [0x116743b4], 0 */
  w32((uint32_t)(0x116743b4), (0x0u));
  /* 116501a9 jmp 0x116501d1 */
  goto L_116501d1;
L_116501ab:;
  /* 116501ab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116501af je 0x116501be */
  if (C.zf) goto L_116501be;
  /* 116501b1 call 0x116503a0 */
  push32(0x116501b6u); f_116503a0();
  /* 116501b6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 116501bc jmp 0x116501c8 */
  goto L_116501c8;
L_116501be:;
  /* 116501be mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_116501c8:;
  /* 116501c8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 116501ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_116501d1:;
  /* 116501d1 jmp 0x116501db */
  goto L_116501db;
L_116501d3:;
  /* 116501d3 call 0x116503a0 */
  push32(0x116501d8u); f_116503a0();
  /* 116501d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116501db:;
  /* 116501db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116501df je 0x116501f8 */
  if (C.zf) goto L_116501f8;
  /* 116501e1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116501e3 call 0x1164b920 */
  push32(0x116501e8u); f_1164b920();
  /* 116501e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116501eb mov eax, dword ptr [0x11677684] */
  EAX = (r32((uint32_t)(0x11677684)));
  /* 116501f0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116501f3 mov dword ptr [0x11677684], eax */
  w32((uint32_t)(0x11677684), (EAX));
L_116501f8:;
  /* 116501f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116501fb:;
  /* 116501fb mov esp, ebp */
  ESP = (EBP);
  /* 116501fd pop ebp */
  EBP = (pop32());
  /* 116501fe ret  */
  ESPCHK(0x1164fe10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010200 @ 0x11650200 (403 bytes, 117 insns) */
void f_11650200(void) {
  FTRACE(0x11650200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11650200 push ebp */
  push32((uint32_t)(EBP));
  /* 11650201 mov ebp, esp */
  EBP = (ESP);
  /* 11650203 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650209 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165020c push eax */
  push32((uint32_t)(EAX));
  /* 1165020d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11650213 push ecx */
  push32((uint32_t)(ECX));
  /* 11650214 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1165021a push edx */
  push32((uint32_t)(EDX));
  /* 1165021b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11650221 push eax */
  push32((uint32_t)(EAX));
  /* 11650222 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650225 push ecx */
  push32((uint32_t)(ECX));
  /* 11650226 call 0x116504a0 */
  push32(0x1165022bu); f_116504a0();
  /* 1165022b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165022e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11650230 jne 0x11650239 */
  if (!C.zf) goto L_11650239;
  /* 11650232 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11650234 jmp 0x1165038f */
  goto L_1165038f;
L_11650239:;
  /* 11650239 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1165023e push 0x11671174 */
  push32((uint32_t)(0x11671174u));
  /* 11650243 push 2 */
  push32((uint32_t)(0x2u));
  /* 11650245 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1165024b push edx */
  push32((uint32_t)(EDX));
  /* 1165024c call 0x116496f0 */
  push32(0x11650251u); f_116496f0();
  /* 11650251 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650254 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650257 push eax */
  push32((uint32_t)(EAX));
  /* 11650258 call 0x116468c0 */
  push32(0x1165025du); f_116468c0();
  /* 1165025d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650260 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11650263 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650267 jne 0x11650270 */
  if (!C.zf) goto L_11650270;
  /* 11650269 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165026b jmp 0x1165038f */
  goto L_1165038f;
L_11650270:;
  /* 11650270 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650273 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11650276 mov ecx, dword ptr [eax + 0x116743b4] */
  ECX = (r32((uint32_t)(EAX + 0x116743b4)));
  /* 1165027c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1165027f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650282 mov eax, dword ptr [edx*4 + 0x116761ac] */
  EAX = (r32((uint32_t)(EDX*4 + 0x116761ac)));
  /* 11650289 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1165028c push 6 */
  push32((uint32_t)(0x6u));
  /* 1165028e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650291 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11650294 add ecx, 0x116761f0 */
  { uint32_t _a=(ECX),_b=(0x116761f0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165029a push ecx */
  push32((uint32_t)(ECX));
  /* 1165029b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1165029e push edx */
  push32((uint32_t)(EDX));
  /* 1165029f call 0x1164e640 */
  push32(0x116502a4u); f_1164e640();
  /* 116502a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116502a7 mov eax, dword ptr [0x116761c4] */
  EAX = (r32((uint32_t)(0x116761c4)));
  /* 116502ac mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116502af lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 116502b5 push ecx */
  push32((uint32_t)(ECX));
  /* 116502b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116502b9 push edx */
  push32((uint32_t)(EDX));
  /* 116502ba call 0x11649870 */
  push32(0x116502bfu); f_11649870();
  /* 116502bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116502c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116502c5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116502c8 mov dword ptr [ecx + 0x116743b4], eax */
  w32((uint32_t)(ECX + 0x116743b4), (EAX));
  /* 116502ce mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 116502d4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116502da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116502dd mov dword ptr [eax*4 + 0x116761ac], edx */
  w32((uint32_t)(EAX*4 + 0x116761ac), (EDX));
  /* 116502e4 push 6 */
  push32((uint32_t)(0x6u));
  /* 116502e6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 116502ec push ecx */
  push32((uint32_t)(ECX));
  /* 116502ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116502f0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116502f3 add edx, 0x116761f0 */
  { uint32_t _a=(EDX),_b=(0x116761f0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116502f9 push edx */
  push32((uint32_t)(EDX));
  /* 116502fa call 0x1164e640 */
  push32(0x116502ffu); f_1164e640();
  /* 116502ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650302 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650306 jne 0x11650313 */
  if (!C.zf) goto L_11650313;
  /* 11650308 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1165030e mov dword ptr [0x116761c4], eax */
  w32((uint32_t)(0x116761c4), (EAX));
L_11650313:;
  /* 11650313 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650317 jne 0x11650325 */
  if (!C.zf) goto L_11650325;
  /* 11650319 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1165031f mov dword ptr [0x116761c8], ecx */
  w32((uint32_t)(0x116761c8), (ECX));
L_11650325:;
  /* 11650325 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650328 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1165032b call dword ptr [edx + 0x116743b8] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x116743b8))), 0x11650331u);
  /* 11650331 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11650333 je 0x1165036c */
  if (C.zf) goto L_1165036c;
  /* 11650335 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650338 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1165033b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1165033e mov dword ptr [eax + 0x116743b4], ecx */
  w32((uint32_t)(EAX + 0x116743b4), (ECX));
  /* 11650344 push 2 */
  push32((uint32_t)(0x2u));
  /* 11650346 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11650349 push edx */
  push32((uint32_t)(EDX));
  /* 1165034a call 0x11647350 */
  push32(0x1165034fu); f_11647350();
  /* 1165034f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650352 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650355 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650358 mov dword ptr [eax*4 + 0x116761ac], ecx */
  w32((uint32_t)(EAX*4 + 0x116761ac), (ECX));
  /* 1165035f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11650362 mov dword ptr [0x116761c4], edx */
  w32((uint32_t)(0x116761c4), (EDX));
  /* 11650368 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165036a jmp 0x1165038f */
  goto L_1165038f;
L_1165036c:;
  /* 1165036c cmp dword ptr [ebp - 0xc], 0x116742a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x116742a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650373 je 0x11650383 */
  if (C.zf) goto L_11650383;
  /* 11650375 push 2 */
  push32((uint32_t)(0x2u));
  /* 11650377 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1165037a push eax */
  push32((uint32_t)(EAX));
  /* 1165037b call 0x11647350 */
  push32(0x11650380u); f_11647350();
  /* 11650380 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11650383:;
  /* 11650383 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650386 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11650389 mov eax, dword ptr [ecx + 0x116743b4] */
  EAX = (r32((uint32_t)(ECX + 0x116743b4)));
L_1165038f:;
  /* 1165038f mov esp, ebp */
  ESP = (EBP);
  /* 11650391 pop ebp */
  EBP = (pop32());
  /* 11650392 ret  */
  ESPCHK(0x11650200u, _esp0);
  ESP += 4; return;
}

/* FUN_100103a0 @ 0x116503a0 (256 bytes, 72 insns) */
void f_116503a0(void) {
  FTRACE(0x116503a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116503a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116503a1 mov ebp, esp */
  EBP = (ESP);
  /* 116503a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116503a6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 116503ad cmp dword ptr [0x116743b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116743b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116503b4 jne 0x116503d4 */
  if (!C.zf) goto L_116503d4;
  /* 116503b6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 116503bb push 0x11671174 */
  push32((uint32_t)(0x11671174u));
  /* 116503c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116503c2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 116503c7 call 0x116468c0 */
  push32(0x116503ccu); f_116468c0();
  /* 116503cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116503cf mov dword ptr [0x116743b4], eax */
  w32((uint32_t)(0x116743b4), (EAX));
L_116503d4:;
  /* 116503d4 mov eax, dword ptr [0x116743b4] */
  EAX = (r32((uint32_t)(0x116743b4)));
  /* 116503d9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 116503dc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116503e3 jmp 0x116503ee */
  goto L_116503ee;
L_116503e5:;
  /* 116503e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116503e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116503eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116503ee:;
  /* 116503ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116503f1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116503f4 mov eax, dword ptr [edx + 0x116743b4] */
  EAX = (r32((uint32_t)(EDX + 0x116743b4)));
  /* 116503fa push eax */
  push32((uint32_t)(EAX));
  /* 116503fb push 0x11671180 */
  push32((uint32_t)(0x11671180u));
  /* 11650400 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650403 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11650406 mov edx, dword ptr [ecx + 0x116743b0] */
  EDX = (r32((uint32_t)(ECX + 0x116743b0)));
  /* 1165040c push edx */
  push32((uint32_t)(EDX));
  /* 1165040d push 3 */
  push32((uint32_t)(0x3u));
  /* 1165040f mov eax, dword ptr [0x116743b4] */
  EAX = (r32((uint32_t)(0x116743b4)));
  /* 11650414 push eax */
  push32((uint32_t)(EAX));
  /* 11650415 call 0x11650640 */
  push32(0x1165041au); f_11650640();
  /* 1165041a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165041d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650421 jge 0x11650469 */
  if ((C.sf==C.of)) goto L_11650469;
  /* 11650423 push 0x1167116c */
  push32((uint32_t)(0x1167116cu));
  /* 11650428 mov ecx, dword ptr [0x116743b4] */
  ECX = (r32((uint32_t)(0x116743b4)));
  /* 1165042e push ecx */
  push32((uint32_t)(ECX));
  /* 1165042f call 0x11649880 */
  push32(0x11650434u); f_11649880();
  /* 11650434 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650437 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165043a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165043d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11650440 mov eax, dword ptr [edx + 0x116743b4] */
  EAX = (r32((uint32_t)(EDX + 0x116743b4)));
  /* 11650446 push eax */
  push32((uint32_t)(EAX));
  /* 11650447 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165044a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1165044d mov edx, dword ptr [ecx + 0x116743b4] */
  EDX = (r32((uint32_t)(ECX + 0x116743b4)));
  /* 11650453 push edx */
  push32((uint32_t)(EDX));
  /* 11650454 call 0x11653eb0 */
  push32(0x11650459u); f_11653eb0();
  /* 11650459 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165045c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165045e je 0x11650467 */
  if (C.zf) goto L_11650467;
  /* 11650460 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11650467:;
  /* 11650467 jmp 0x11650497 */
  goto L_11650497;
L_11650469:;
  /* 11650469 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165046d jne 0x11650476 */
  if (!C.zf) goto L_11650476;
  /* 1165046f mov eax, dword ptr [0x116743b4] */
  EAX = (r32((uint32_t)(0x116743b4)));
  /* 11650474 jmp 0x1165049c */
  goto L_1165049c;
L_11650476:;
  /* 11650476 push 2 */
  push32((uint32_t)(0x2u));
  /* 11650478 mov eax, dword ptr [0x116743b4] */
  EAX = (r32((uint32_t)(0x116743b4)));
  /* 1165047d push eax */
  push32((uint32_t)(EAX));
  /* 1165047e call 0x11647350 */
  push32(0x11650483u); f_11647350();
  /* 11650483 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650486 mov dword ptr [0x116743b4], 0 */
  w32((uint32_t)(0x116743b4), (0x0u));
  /* 11650490 mov eax, dword ptr [0x116743cc] */
  EAX = (r32((uint32_t)(0x116743cc)));
  /* 11650495 jmp 0x1165049c */
  goto L_1165049c;
L_11650497:;
  /* 11650497 jmp 0x116503e5 */
  goto L_116503e5;
L_1165049c:;
  /* 1165049c mov esp, ebp */
  ESP = (EBP);
  /* 1165049e pop ebp */
  EBP = (pop32());
  /* 1165049f ret  */
  ESPCHK(0x116503a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100104a0 @ 0x116504a0 (388 bytes, 115 insns) */
void f_116504a0(void) {
  FTRACE(0x116504a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116504a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116504a1 mov ebp, esp */
  EBP = (ESP);
  /* 116504a3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116504a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116504ad jne 0x116504b6 */
  if (!C.zf) goto L_116504b6;
  /* 116504af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116504b1 jmp 0x11650620 */
  goto L_11650620;
L_116504b6:;
  /* 116504b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116504b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116504bc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116504bf jne 0x11650510 */
  if (!C.zf) goto L_11650510;
  /* 116504c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116504c4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 116504c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116504ca jne 0x11650510 */
  if (!C.zf) goto L_11650510;
  /* 116504cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116504cf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 116504d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116504d5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 116504d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116504dd je 0x116504f9 */
  if (C.zf) goto L_116504f9;
  /* 116504df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116504e2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 116504e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116504ea mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 116504f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116504f3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_116504f9:;
  /* 116504f9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116504fd je 0x11650508 */
  if (C.zf) goto L_11650508;
  /* 116504ff mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11650502 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11650508:;
  /* 11650508 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165050b jmp 0x11650620 */
  goto L_11650620;
L_11650510:;
  /* 11650510 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650513 push ecx */
  push32((uint32_t)(ECX));
  /* 11650514 push 0x11674328 */
  push32((uint32_t)(0x11674328u));
  /* 11650519 call 0x11653eb0 */
  push32(0x1165051eu); f_11653eb0();
  /* 1165051e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650521 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11650523 je 0x116505d8 */
  if (C.zf) goto L_116505d8;
  /* 11650529 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165052c push edx */
  push32((uint32_t)(EDX));
  /* 1165052d push 0x116742a4 */
  push32((uint32_t)(0x116742a4u));
  /* 11650532 call 0x11653eb0 */
  push32(0x11650537u); f_11653eb0();
  /* 11650537 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165053a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165053c je 0x116505d8 */
  if (C.zf) goto L_116505d8;
  /* 11650542 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650545 push eax */
  push32((uint32_t)(EAX));
  /* 11650546 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1165054c push ecx */
  push32((uint32_t)(ECX));
  /* 1165054d call 0x11650690 */
  push32(0x11650552u); f_11650690();
  /* 11650552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650555 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11650557 je 0x11650560 */
  if (C.zf) goto L_11650560;
  /* 11650559 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165055b jmp 0x11650620 */
  goto L_11650620;
L_11650560:;
  /* 11650560 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11650566 push edx */
  push32((uint32_t)(EDX));
  /* 11650567 push 0x116761a0 */
  push32((uint32_t)(0x116761a0u));
  /* 1165056c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11650572 push eax */
  push32((uint32_t)(EAX));
  /* 11650573 call 0x11654000 */
  push32(0x11650578u); f_11654000();
  /* 11650578 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165057b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165057d jne 0x11650586 */
  if (!C.zf) goto L_11650586;
  /* 1165057f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11650581 jmp 0x11650620 */
  goto L_11650620;
L_11650586:;
  /* 11650586 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11650588 mov cx, word ptr [0x116761a4] */
  CX = (r16((uint32_t)(0x116761a4)));
  /* 1165058f mov dword ptr [0x116761a8], ecx */
  w32((uint32_t)(0x116761a8), (ECX));
  /* 11650595 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1165059b push edx */
  push32((uint32_t)(EDX));
  /* 1165059c push 0x11674328 */
  push32((uint32_t)(0x11674328u));
  /* 116505a1 call 0x116507f0 */
  push32(0x116505a6u); f_116507f0();
  /* 116505a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116505a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116505ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116505af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116505b1 je 0x116505c6 */
  if (C.zf) goto L_116505c6;
  /* 116505b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116505b6 push edx */
  push32((uint32_t)(EDX));
  /* 116505b7 push 0x116742a4 */
  push32((uint32_t)(0x116742a4u));
  /* 116505bc call 0x11649870 */
  push32(0x116505c1u); f_11649870();
  /* 116505c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116505c4 jmp 0x116505d8 */
  goto L_116505d8;
L_116505c6:;
  /* 116505c6 push 0x11674328 */
  push32((uint32_t)(0x11674328u));
  /* 116505cb push 0x116742a4 */
  push32((uint32_t)(0x116742a4u));
  /* 116505d0 call 0x11649870 */
  push32(0x116505d5u); f_11649870();
  /* 116505d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116505d8:;
  /* 116505d8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116505dc je 0x116505f1 */
  if (C.zf) goto L_116505f1;
  /* 116505de push 6 */
  push32((uint32_t)(0x6u));
  /* 116505e0 push 0x116761a0 */
  push32((uint32_t)(0x116761a0u));
  /* 116505e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116505e8 push eax */
  push32((uint32_t)(EAX));
  /* 116505e9 call 0x1164e640 */
  push32(0x116505eeu); f_1164e640();
  /* 116505ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116505f1:;
  /* 116505f1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116505f5 je 0x1165060a */
  if (C.zf) goto L_1165060a;
  /* 116505f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 116505f9 push 0x116761a8 */
  push32((uint32_t)(0x116761a8u));
  /* 116505fe mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11650601 push ecx */
  push32((uint32_t)(ECX));
  /* 11650602 call 0x1164e640 */
  push32(0x11650607u); f_1164e640();
  /* 11650607 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1165060a:;
  /* 1165060a push 0x11674328 */
  push32((uint32_t)(0x11674328u));
  /* 1165060f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650612 push edx */
  push32((uint32_t)(EDX));
  /* 11650613 call 0x11649870 */
  push32(0x11650618u); f_11649870();
  /* 11650618 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165061b mov eax, 0x11674328 */
  EAX = (0x11674328u);
L_11650620:;
  /* 11650620 mov esp, ebp */
  ESP = (EBP);
  /* 11650622 pop ebp */
  EBP = (pop32());
  /* 11650623 ret  */
  ESPCHK(0x116504a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010630 @ 0x11650630 (7 bytes, 5 insns) */
void f_11650630(void) {
  FTRACE(0x11650630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11650630 push ebp */
  push32((uint32_t)(EBP));
  /* 11650631 mov ebp, esp */
  EBP = (ESP);
  /* 11650633 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11650635 pop ebp */
  EBP = (pop32());
  /* 11650636 ret  */
  ESPCHK(0x11650630u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11650640 (79 bytes, 28 insns) */
void f_11650640(void) {
  FTRACE(0x11650640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11650640 push ebp */
  push32((uint32_t)(EBP));
  /* 11650641 mov ebp, esp */
  EBP = (ESP);
  /* 11650643 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650646 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11650649 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1165064c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11650653 jmp 0x1165065e */
  goto L_1165065e;
L_11650655:;
  /* 11650655 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11650658 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165065b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1165065e:;
  /* 1165065e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11650661 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650664 jge 0x11650684 */
  if ((C.sf==C.of)) goto L_11650684;
  /* 11650666 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650669 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165066c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1165066f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650672 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11650675 push edx */
  push32((uint32_t)(EDX));
  /* 11650676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650679 push eax */
  push32((uint32_t)(EAX));
  /* 1165067a call 0x11649880 */
  push32(0x1165067fu); f_11649880();
  /* 1165067f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650682 jmp 0x11650655 */
  goto L_11650655;
L_11650684:;
  /* 11650684 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1165068b mov esp, ebp */
  ESP = (EBP);
  /* 1165068d pop ebp */
  EBP = (pop32());
  /* 1165068e ret  */
  ESPCHK(0x11650640u, _esp0);
  ESP += 4; return;
}

/* FUN_10010690 @ 0x11650690 (349 bytes, 122 insns) */
void f_11650690(void) {
  FTRACE(0x11650690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11650690 push ebp */
  push32((uint32_t)(EBP));
  /* 11650691 mov ebp, esp */
  EBP = (ESP);
  /* 11650693 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650696 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1165069b push 0 */
  push32((uint32_t)(0x0u));
  /* 1165069d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116506a0 push eax */
  push32((uint32_t)(EAX));
  /* 116506a1 call 0x1164b3f0 */
  push32(0x116506a6u); f_1164b3f0();
  /* 116506a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116506a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116506ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116506af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116506b1 jne 0x116506ba */
  if (!C.zf) goto L_116506ba;
  /* 116506b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116506b5 jmp 0x116507e9 */
  goto L_116507e9;
L_116506ba:;
  /* 116506ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116506bd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116506c0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116506c3 jne 0x116506f0 */
  if (!C.zf) goto L_116506f0;
  /* 116506c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116506c8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 116506cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116506ce je 0x116506f0 */
  if (C.zf) goto L_116506f0;
  /* 116506d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116506d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116506d6 push ecx */
  push32((uint32_t)(ECX));
  /* 116506d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116506da add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116506e0 push edx */
  push32((uint32_t)(EDX));
  /* 116506e1 call 0x11649870 */
  push32(0x116506e6u); f_11649870();
  /* 116506e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116506e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116506eb jmp 0x116507e9 */
  goto L_116507e9;
L_116506f0:;
  /* 116506f0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116506f7 jmp 0x11650702 */
  goto L_11650702;
L_116506f9:;
  /* 116506f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116506fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116506ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11650702:;
  /* 11650702 push 0x11671184 */
  push32((uint32_t)(0x11671184u));
  /* 11650707 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165070a push ecx */
  push32((uint32_t)(ECX));
  /* 1165070b call 0x11653f40 */
  push32(0x11650710u); f_11653f40();
  /* 11650710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650713 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11650716 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165071a jne 0x11650724 */
  if (!C.zf) goto L_11650724;
  /* 1165071c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1165071f jmp 0x116507e9 */
  goto L_116507e9;
L_11650724:;
  /* 11650724 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650727 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165072a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1165072c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1165072f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650733 jne 0x1165075a */
  if (!C.zf) goto L_1165075a;
  /* 11650735 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650739 jge 0x1165075a */
  if ((C.sf==C.of)) goto L_1165075a;
  /* 1165073b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1165073f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650742 je 0x1165075a */
  if (C.zf) goto L_1165075a;
  /* 11650744 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11650747 push edx */
  push32((uint32_t)(EDX));
  /* 11650748 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165074b push eax */
  push32((uint32_t)(EAX));
  /* 1165074c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165074f push ecx */
  push32((uint32_t)(ECX));
  /* 11650750 call 0x1164a0e0 */
  push32(0x11650755u); f_1164a0e0();
  /* 11650755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650758 jmp 0x116507c0 */
  goto L_116507c0;
L_1165075a:;
  /* 1165075a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165075e jne 0x11650788 */
  if (!C.zf) goto L_11650788;
  /* 11650760 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650764 jge 0x11650788 */
  if ((C.sf==C.of)) goto L_11650788;
  /* 11650766 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1165076a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165076d je 0x11650788 */
  if (C.zf) goto L_11650788;
  /* 1165076f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11650772 push eax */
  push32((uint32_t)(EAX));
  /* 11650773 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650776 push ecx */
  push32((uint32_t)(ECX));
  /* 11650777 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165077a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165077d push edx */
  push32((uint32_t)(EDX));
  /* 1165077e call 0x1164a0e0 */
  push32(0x11650783u); f_1164a0e0();
  /* 11650783 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650786 jmp 0x116507c0 */
  goto L_116507c0;
L_11650788:;
  /* 11650788 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165078c jne 0x116507bb */
  if (!C.zf) goto L_116507bb;
  /* 1165078e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11650792 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11650794 je 0x1165079f */
  if (C.zf) goto L_1165079f;
  /* 11650796 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1165079a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165079d jne 0x116507bb */
  if (!C.zf) goto L_116507bb;
L_1165079f:;
  /* 1165079f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116507a2 push edx */
  push32((uint32_t)(EDX));
  /* 116507a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116507a6 push eax */
  push32((uint32_t)(EAX));
  /* 116507a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116507aa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116507b0 push ecx */
  push32((uint32_t)(ECX));
  /* 116507b1 call 0x1164a0e0 */
  push32(0x116507b6u); f_1164a0e0();
  /* 116507b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116507b9 jmp 0x116507c0 */
  goto L_116507c0;
L_116507bb:;
  /* 116507bb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116507be jmp 0x116507e9 */
  goto L_116507e9;
L_116507c0:;
  /* 116507c0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116507c4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116507c7 jne 0x116507cb */
  if (!C.zf) goto L_116507cb;
  /* 116507c9 jmp 0x116507e7 */
  goto L_116507e7;
L_116507cb:;
  /* 116507cb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 116507cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116507d1 jne 0x116507d5 */
  if (!C.zf) goto L_116507d5;
  /* 116507d3 jmp 0x116507e7 */
  goto L_116507e7;
L_116507d5:;
  /* 116507d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116507d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116507db lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 116507df mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 116507e2 jmp 0x116506f9 */
  goto L_116506f9;
L_116507e7:;
  /* 116507e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116507e9:;
  /* 116507e9 mov esp, ebp */
  ESP = (EBP);
  /* 116507eb pop ebp */
  EBP = (pop32());
  /* 116507ec ret  */
  ESPCHK(0x11650690u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x116507f0 (101 bytes, 36 insns) */
void f_116507f0(void) {
  FTRACE(0x116507f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116507f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116507f1 mov ebp, esp */
  EBP = (ESP);
  /* 116507f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116507f6 push eax */
  push32((uint32_t)(EAX));
  /* 116507f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116507fa push ecx */
  push32((uint32_t)(ECX));
  /* 116507fb call 0x11649870 */
  push32(0x11650800u); f_11649870();
  /* 11650800 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650803 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650806 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1165080a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165080c je 0x11650828 */
  if (C.zf) goto L_11650828;
  /* 1165080e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650811 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650814 push ecx */
  push32((uint32_t)(ECX));
  /* 11650815 push 0x1167118c */
  push32((uint32_t)(0x1167118cu));
  /* 1165081a push 2 */
  push32((uint32_t)(0x2u));
  /* 1165081c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165081f push edx */
  push32((uint32_t)(EDX));
  /* 11650820 call 0x11650640 */
  push32(0x11650825u); f_11650640();
  /* 11650825 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11650828:;
  /* 11650828 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165082b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11650832 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11650834 je 0x11650853 */
  if (C.zf) goto L_11650853;
  /* 11650836 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650839 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165083f push edx */
  push32((uint32_t)(EDX));
  /* 11650840 push 0x11671188 */
  push32((uint32_t)(0x11671188u));
  /* 11650845 push 2 */
  push32((uint32_t)(0x2u));
  /* 11650847 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165084a push eax */
  push32((uint32_t)(EAX));
  /* 1165084b call 0x11650640 */
  push32(0x11650850u); f_11650640();
  /* 11650850 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11650853:;
  /* 11650853 pop ebp */
  EBP = (pop32());
  /* 11650854 ret  */
  ESPCHK(0x116507f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010860 @ 0x11650860 (727 bytes, 263 insns) */
void f_11650860(void) {
  FTRACE(0x11650860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11650860 push ebp */
  push32((uint32_t)(EBP));
  /* 11650861 mov ebp, esp */
  EBP = (ESP);
  /* 11650863 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11650865 push 0x11671190 */
  push32((uint32_t)(0x11671190u));
  /* 1165086a push 0x11652918 */
  push32((uint32_t)(0x11652918u));
  /* 1165086f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11650875 push eax */
  push32((uint32_t)(EAX));
  /* 11650876 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1165087d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650880 push ebx */
  push32((uint32_t)(EBX));
  /* 11650881 push esi */
  push32((uint32_t)(ESI));
  /* 11650882 push edi */
  push32((uint32_t)(EDI));
  /* 11650883 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11650886 cmp dword ptr [0x116761cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116761cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165088d jne 0x116508e6 */
  if (!C.zf) goto L_116508e6;
  /* 1165088f push 0 */
  push32((uint32_t)(0x0u));
  /* 11650891 push 0 */
  push32((uint32_t)(0x0u));
  /* 11650893 push 1 */
  push32((uint32_t)(0x1u));
  /* 11650895 push 0x1167111c */
  push32((uint32_t)(0x1167111cu));
  /* 1165089a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1165089f push 0 */
  push32((uint32_t)(0x0u));
  /* 116508a1 call dword ptr [0x116782e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782e8))), 0x116508a7u);
  /* 116508a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116508a9 je 0x116508b7 */
  if (C.zf) goto L_116508b7;
  /* 116508ab mov dword ptr [0x116761cc], 1 */
  w32((uint32_t)(0x116761cc), (0x1u));
  /* 116508b5 jmp 0x116508e6 */
  goto L_116508e6;
L_116508b7:;
  /* 116508b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116508b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116508bb push 1 */
  push32((uint32_t)(0x1u));
  /* 116508bd push 0x11671118 */
  push32((uint32_t)(0x11671118u));
  /* 116508c2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116508c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116508c9 call dword ptr [0x116782f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782f8))), 0x116508cfu);
  /* 116508cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116508d1 je 0x116508df */
  if (C.zf) goto L_116508df;
  /* 116508d3 mov dword ptr [0x116761cc], 2 */
  w32((uint32_t)(0x116761cc), (0x2u));
  /* 116508dd jmp 0x116508e6 */
  goto L_116508e6;
L_116508df:;
  /* 116508df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116508e1 jmp 0x11650b51 */
  goto L_11650b51;
L_116508e6:;
  /* 116508e6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116508ea jle 0x116508ff */
  if ((C.zf||C.sf!=C.of)) goto L_116508ff;
  /* 116508ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116508ef push eax */
  push32((uint32_t)(EAX));
  /* 116508f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116508f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116508f4 call 0x11650b70 */
  push32(0x116508f9u); f_11650b70();
  /* 116508f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116508fc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_116508ff:;
  /* 116508ff cmp dword ptr [0x116761cc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x116761cc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650906 jne 0x1165092b */
  if (!C.zf) goto L_1165092b;
  /* 11650908 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1165090b push edx */
  push32((uint32_t)(EDX));
  /* 1165090c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1165090f push eax */
  push32((uint32_t)(EAX));
  /* 11650910 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11650913 push ecx */
  push32((uint32_t)(ECX));
  /* 11650914 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650917 push edx */
  push32((uint32_t)(EDX));
  /* 11650918 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165091b push eax */
  push32((uint32_t)(EAX));
  /* 1165091c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165091f push ecx */
  push32((uint32_t)(ECX));
  /* 11650920 call dword ptr [0x116782f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782f8))), 0x11650926u);
  /* 11650926 jmp 0x11650b51 */
  goto L_11650b51;
L_1165092b:;
  /* 1165092b cmp dword ptr [0x116761cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116761cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650932 jne 0x11650b4f */
  if (!C.zf) goto L_11650b4f;
  /* 11650938 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165093c jne 0x11650947 */
  if (!C.zf) goto L_11650947;
  /* 1165093e mov edx, dword ptr [0x116761c4] */
  EDX = (r32((uint32_t)(0x116761c4)));
  /* 11650944 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11650947:;
  /* 11650947 push 0 */
  push32((uint32_t)(0x0u));
  /* 11650949 push 0 */
  push32((uint32_t)(0x0u));
  /* 1165094b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1165094e push eax */
  push32((uint32_t)(EAX));
  /* 1165094f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650952 push ecx */
  push32((uint32_t)(ECX));
  /* 11650953 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11650956 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11650958 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165095a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1165095d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650960 push edx */
  push32((uint32_t)(EDX));
  /* 11650961 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11650964 push eax */
  push32((uint32_t)(EAX));
  /* 11650965 call dword ptr [0x116782fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782fc))), 0x1165096bu);
  /* 1165096b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1165096e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650972 jne 0x1165097b */
  if (!C.zf) goto L_1165097b;
  /* 11650974 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11650976 jmp 0x11650b51 */
  goto L_11650b51;
L_1165097b:;
  /* 1165097b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11650982 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11650985 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11650987 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165098a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1165098c call 0x11649a60 */
  push32(0x11650991u); f_11649a60();
  /* 11650991 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11650994 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11650997 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1165099a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1165099d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 116509a4 jmp 0x116509bd */
  goto L_116509bd;
  /* 116509a6 mov eax, 1 */
  EAX = (0x1u);
  /* 116509ab ret  */
  ESPCHK(0x11650860u, _esp0);
  ESP += 4; return;
  /* 116509ac mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 116509af mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116509b6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_116509bd:;
  /* 116509bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116509c1 jne 0x116509ca */
  if (!C.zf) goto L_116509ca;
  /* 116509c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116509c5 jmp 0x11650b51 */
  goto L_11650b51;
L_116509ca:;
  /* 116509ca mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116509cd push edx */
  push32((uint32_t)(EDX));
  /* 116509ce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116509d1 push eax */
  push32((uint32_t)(EAX));
  /* 116509d2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116509d5 push ecx */
  push32((uint32_t)(ECX));
  /* 116509d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116509d9 push edx */
  push32((uint32_t)(EDX));
  /* 116509da push 1 */
  push32((uint32_t)(0x1u));
  /* 116509dc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 116509df push eax */
  push32((uint32_t)(EAX));
  /* 116509e0 call dword ptr [0x116782fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782fc))), 0x116509e6u);
  /* 116509e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116509e8 jne 0x116509f1 */
  if (!C.zf) goto L_116509f1;
  /* 116509ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116509ec jmp 0x11650b51 */
  goto L_11650b51;
L_116509f1:;
  /* 116509f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116509f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116509f5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116509f8 push ecx */
  push32((uint32_t)(ECX));
  /* 116509f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116509fc push edx */
  push32((uint32_t)(EDX));
  /* 116509fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650a00 push eax */
  push32((uint32_t)(EAX));
  /* 11650a01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650a04 push ecx */
  push32((uint32_t)(ECX));
  /* 11650a05 call dword ptr [0x116782e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782e8))), 0x11650a0bu);
  /* 11650a0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11650a0e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650a12 jne 0x11650a1b */
  if (!C.zf) goto L_11650a1b;
  /* 11650a14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11650a16 jmp 0x11650b51 */
  goto L_11650b51;
L_11650a1b:;
  /* 11650a1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650a1e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11650a24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11650a26 je 0x11650a6b */
  if (C.zf) goto L_11650a6b;
  /* 11650a28 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650a2c je 0x11650a66 */
  if (C.zf) goto L_11650a66;
  /* 11650a2e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11650a31 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650a34 jle 0x11650a3d */
  if ((C.zf||C.sf!=C.of)) goto L_11650a3d;
  /* 11650a36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11650a38 jmp 0x11650b51 */
  goto L_11650b51;
L_11650a3d:;
  /* 11650a3d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11650a40 push ecx */
  push32((uint32_t)(ECX));
  /* 11650a41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11650a44 push edx */
  push32((uint32_t)(EDX));
  /* 11650a45 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11650a48 push eax */
  push32((uint32_t)(EAX));
  /* 11650a49 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11650a4c push ecx */
  push32((uint32_t)(ECX));
  /* 11650a4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650a50 push edx */
  push32((uint32_t)(EDX));
  /* 11650a51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650a54 push eax */
  push32((uint32_t)(EAX));
  /* 11650a55 call dword ptr [0x116782e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782e8))), 0x11650a5bu);
  /* 11650a5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11650a5d jne 0x11650a66 */
  if (!C.zf) goto L_11650a66;
  /* 11650a5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11650a61 jmp 0x11650b51 */
  goto L_11650b51;
L_11650a66:;
  /* 11650a66 jmp 0x11650b4a */
  goto L_11650b4a;
L_11650a6b:;
  /* 11650a6b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11650a6e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11650a71 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11650a78 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11650a7b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11650a7d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650a80 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11650a82 call 0x11649a60 */
  push32(0x11650a87u); f_11649a60();
  /* 11650a87 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11650a8a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11650a8d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11650a90 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11650a93 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11650a9a jmp 0x11650ab3 */
  goto L_11650ab3;
  /* 11650a9c mov eax, 1 */
  EAX = (0x1u);
  /* 11650aa1 ret  */
  ESPCHK(0x11650860u, _esp0);
  ESP += 4; return;
  /* 11650aa2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11650aa5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11650aac mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11650ab3:;
  /* 11650ab3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650ab7 jne 0x11650ac0 */
  if (!C.zf) goto L_11650ac0;
  /* 11650ab9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11650abb jmp 0x11650b51 */
  goto L_11650b51;
L_11650ac0:;
  /* 11650ac0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11650ac3 push eax */
  push32((uint32_t)(EAX));
  /* 11650ac4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11650ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 11650ac8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11650acb push edx */
  push32((uint32_t)(EDX));
  /* 11650acc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11650acf push eax */
  push32((uint32_t)(EAX));
  /* 11650ad0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 11650ad4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650ad7 push edx */
  push32((uint32_t)(EDX));
  /* 11650ad8 call dword ptr [0x116782e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782e8))), 0x11650adeu);
  /* 11650ade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11650ae0 jne 0x11650ae6 */
  if (!C.zf) goto L_11650ae6;
  /* 11650ae2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11650ae4 jmp 0x11650b51 */
  goto L_11650b51;
L_11650ae6:;
  /* 11650ae6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650aea jne 0x11650b1a */
  if (!C.zf) goto L_11650b1a;
  /* 11650aec push 0 */
  push32((uint32_t)(0x0u));
  /* 11650aee push 0 */
  push32((uint32_t)(0x0u));
  /* 11650af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11650af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11650af4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11650af7 push eax */
  push32((uint32_t)(EAX));
  /* 11650af8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11650afb push ecx */
  push32((uint32_t)(ECX));
  /* 11650afc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11650b01 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11650b04 push edx */
  push32((uint32_t)(EDX));
  /* 11650b05 call dword ptr [0x116783bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783bc))), 0x11650b0bu);
  /* 11650b0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11650b0e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650b12 jne 0x11650b18 */
  if (!C.zf) goto L_11650b18;
  /* 11650b14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11650b16 jmp 0x11650b51 */
  goto L_11650b51;
L_11650b18:;
  /* 11650b18 jmp 0x11650b4a */
  goto L_11650b4a;
L_11650b1a:;
  /* 11650b1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11650b1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11650b1e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11650b21 push eax */
  push32((uint32_t)(EAX));
  /* 11650b22 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11650b25 push ecx */
  push32((uint32_t)(ECX));
  /* 11650b26 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11650b29 push edx */
  push32((uint32_t)(EDX));
  /* 11650b2a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11650b2d push eax */
  push32((uint32_t)(EAX));
  /* 11650b2e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11650b33 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11650b36 push ecx */
  push32((uint32_t)(ECX));
  /* 11650b37 call dword ptr [0x116783bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783bc))), 0x11650b3du);
  /* 11650b3d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11650b40 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650b44 jne 0x11650b4a */
  if (!C.zf) goto L_11650b4a;
  /* 11650b46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11650b48 jmp 0x11650b51 */
  goto L_11650b51;
L_11650b4a:;
  /* 11650b4a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11650b4d jmp 0x11650b51 */
  goto L_11650b51;
L_11650b4f:;
  /* 11650b4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11650b51:;
  /* 11650b51 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11650b54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11650b57 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11650b5e pop edi */
  EDI = (pop32());
  /* 11650b5f pop esi */
  ESI = (pop32());
  /* 11650b60 pop ebx */
  EBX = (pop32());
  /* 11650b61 mov esp, ebp */
  ESP = (EBP);
  /* 11650b63 pop ebp */
  EBP = (pop32());
  /* 11650b64 ret  */
  ESPCHK(0x11650860u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b70 @ 0x11650b70 (80 bytes, 32 insns) */
void f_11650b70(void) {
  FTRACE(0x11650b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11650b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11650b71 mov ebp, esp */
  EBP = (ESP);
  /* 11650b73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650b76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650b79 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11650b7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650b7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11650b82:;
  /* 11650b82 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11650b85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11650b88 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650b8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11650b8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11650b90 je 0x11650ba7 */
  if (C.zf) goto L_11650ba7;
  /* 11650b92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650b95 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11650b98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11650b9a je 0x11650ba7 */
  if (C.zf) goto L_11650ba7;
  /* 11650b9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650b9f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650ba2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11650ba5 jmp 0x11650b82 */
  goto L_11650b82;
L_11650ba7:;
  /* 11650ba7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650baa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11650bad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11650baf jne 0x11650bb9 */
  if (!C.zf) goto L_11650bb9;
  /* 11650bb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650bb4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650bb7 jmp 0x11650bbc */
  goto L_11650bbc;
L_11650bb9:;
  /* 11650bb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11650bbc:;
  /* 11650bbc mov esp, ebp */
  ESP = (EBP);
  /* 11650bbe pop ebp */
  EBP = (pop32());
  /* 11650bbf ret  */
  ESPCHK(0x11650b70u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x11650bc0 (62 bytes, 23 insns) */
void f_11650bc0(void) {
  FTRACE(0x11650bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11650bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11650bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11650bc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650bc6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11650bcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650bd0 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650bd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11650bd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650bd9 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650bdc jb 0x11650be6 */
  if (C.cf) goto L_11650be6;
  /* 11650bde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650be1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650be4 jae 0x11650bef */
  if (!C.cf) goto L_11650bef;
L_11650be6:;
  /* 11650be6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11650be9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650bec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11650bef:;
  /* 11650bef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650bf2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650bf5 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11650bf7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11650bfa mov esp, ebp */
  ESP = (EBP);
  /* 11650bfc pop ebp */
  EBP = (pop32());
  /* 11650bfd ret  */
  ESPCHK(0x11650bc0u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11650c00 (173 bytes, 66 insns) */
void f_11650c00(void) {
  FTRACE(0x11650c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11650c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11650c01 mov ebp, esp */
  EBP = (ESP);
  /* 11650c03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650c06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650c09 push eax */
  push32((uint32_t)(EAX));
  /* 11650c0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650c0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11650c0f push edx */
  push32((uint32_t)(EDX));
  /* 11650c10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650c13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11650c15 push ecx */
  push32((uint32_t)(ECX));
  /* 11650c16 call 0x11650bc0 */
  push32(0x11650c1bu); f_11650bc0();
  /* 11650c1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650c1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11650c21 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650c25 je 0x11650c57 */
  if (C.zf) goto L_11650c57;
  /* 11650c27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650c2a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650c2d push edx */
  push32((uint32_t)(EDX));
  /* 11650c2e push 1 */
  push32((uint32_t)(0x1u));
  /* 11650c30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650c33 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11650c36 push ecx */
  push32((uint32_t)(ECX));
  /* 11650c37 call 0x11650bc0 */
  push32(0x11650c3cu); f_11650bc0();
  /* 11650c3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650c3f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11650c42 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650c46 je 0x11650c57 */
  if (C.zf) goto L_11650c57;
  /* 11650c48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650c4b mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11650c4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650c51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650c54 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_11650c57:;
  /* 11650c57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650c5a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650c5d push edx */
  push32((uint32_t)(EDX));
  /* 11650c5e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650c61 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11650c64 push ecx */
  push32((uint32_t)(ECX));
  /* 11650c65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650c68 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11650c6b push eax */
  push32((uint32_t)(EAX));
  /* 11650c6c call 0x11650bc0 */
  push32(0x11650c71u); f_11650bc0();
  /* 11650c71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650c74 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11650c77 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650c7b je 0x11650c8c */
  if (C.zf) goto L_11650c8c;
  /* 11650c7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650c80 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11650c83 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650c89 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11650c8c:;
  /* 11650c8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650c8f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650c92 push ecx */
  push32((uint32_t)(ECX));
  /* 11650c93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650c96 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11650c99 push eax */
  push32((uint32_t)(EAX));
  /* 11650c9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650c9d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11650ca0 push edx */
  push32((uint32_t)(EDX));
  /* 11650ca1 call 0x11650bc0 */
  push32(0x11650ca6u); f_11650bc0();
  /* 11650ca6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650ca9 mov esp, ebp */
  ESP = (EBP);
  /* 11650cab pop ebp */
  EBP = (pop32());
  /* 11650cac ret  */
  ESPCHK(0x11650c00u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x11650cb0 (96 bytes, 37 insns) */
void f_11650cb0(void) {
  FTRACE(0x11650cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11650cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11650cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11650cb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650cb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650cb9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11650cbb and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11650cc1 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11650cc3 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650cc5 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11650cc7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11650cca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650ccd mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11650cd0 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11650cd5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11650cd7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650cd9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11650cdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11650cde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650ce1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11650ce3 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11650ce5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650ce8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11650cea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650ced mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11650cf0 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11650cf2 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11650cf5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650cf8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11650cfb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650cfe mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11650d01 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11650d03 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11650d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650d09 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11650d0c mov esp, ebp */
  ESP = (EBP);
  /* 11650d0e pop ebp */
  EBP = (pop32());
  /* 11650d0f ret  */
  ESPCHK(0x11650cb0u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x11650d10 (99 bytes, 37 insns) */
void f_11650d10(void) {
  FTRACE(0x11650d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11650d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11650d11 mov ebp, esp */
  EBP = (ESP);
  /* 11650d13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650d16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650d19 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11650d1c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11650d1f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11650d21 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650d23 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11650d29 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11650d2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650d2f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11650d32 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11650d35 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11650d37 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650d39 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11650d3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11650d41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650d44 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11650d47 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11650d49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650d4c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11650d4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650d52 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11650d55 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11650d57 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11650d5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650d5d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11650d60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650d63 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11650d65 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11650d67 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11650d6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650d6d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11650d6f mov esp, ebp */
  ESP = (EBP);
  /* 11650d71 pop ebp */
  EBP = (pop32());
  /* 11650d72 ret  */
  ESPCHK(0x11650d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d80 @ 0x11650d80 (315 bytes, 101 insns) */
void f_11650d80(void) {
  FTRACE(0x11650d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11650d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11650d81 mov ebp, esp */
  EBP = (ESP);
  /* 11650d83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650d86 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 11650d8c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650d8f mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11650d95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650d98 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11650d9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650da2 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11650da9 jmp 0x11650dbd */
  goto L_11650dbd;
L_11650dab:;
  /* 11650dab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11650dae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650db1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11650db4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650db7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650dba mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11650dbd:;
  /* 11650dbd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650dc1 jbe 0x11650e37 */
  if ((C.cf||C.zf)) goto L_11650e37;
  /* 11650dc3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650dc6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11650dc8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11650dcb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11650dce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11650dd1 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11650dd4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11650dd7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650dda push eax */
  push32((uint32_t)(EAX));
  /* 11650ddb call 0x11650cb0 */
  push32(0x11650de0u); f_11650cb0();
  /* 11650de0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650de3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650de6 push ecx */
  push32((uint32_t)(ECX));
  /* 11650de7 call 0x11650cb0 */
  push32(0x11650decu); f_11650cb0();
  /* 11650dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650def lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11650df2 push edx */
  push32((uint32_t)(EDX));
  /* 11650df3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650df6 push eax */
  push32((uint32_t)(EAX));
  /* 11650df7 call 0x11650c00 */
  push32(0x11650dfcu); f_11650c00();
  /* 11650dfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650dff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650e02 push ecx */
  push32((uint32_t)(ECX));
  /* 11650e03 call 0x11650cb0 */
  push32(0x11650e08u); f_11650cb0();
  /* 11650e08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650e0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11650e0e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11650e11 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11650e14 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11650e1b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11650e22 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11650e25 push ecx */
  push32((uint32_t)(ECX));
  /* 11650e26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650e29 push edx */
  push32((uint32_t)(EDX));
  /* 11650e2a call 0x11650c00 */
  push32(0x11650e2fu); f_11650c00();
  /* 11650e2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650e32 jmp 0x11650dab */
  goto L_11650dab;
L_11650e37:;
  /* 11650e37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650e3a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650e3e jne 0x11650e83 */
  if (!C.zf) goto L_11650e83;
  /* 11650e40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650e43 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11650e46 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11650e49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650e4c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11650e4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650e52 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11650e55 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11650e58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650e5b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11650e5d shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11650e60 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11650e62 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650e65 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11650e68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650e6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11650e6d shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11650e70 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650e73 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11650e75 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11650e79 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11650e7d mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 11650e81 jmp 0x11650e37 */
  goto L_11650e37;
L_11650e83:;
  /* 11650e83 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650e86 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11650e89 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11650e8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11650e90 jne 0x11650eac */
  if (!C.zf) goto L_11650eac;
  /* 11650e92 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650e95 push ecx */
  push32((uint32_t)(ECX));
  /* 11650e96 call 0x11650cb0 */
  push32(0x11650e9bu); f_11650cb0();
  /* 11650e9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11650e9e mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 11650ea2 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11650ea6 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 11650eaa jmp 0x11650e83 */
  goto L_11650e83;
L_11650eac:;
  /* 11650eac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650eaf mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11650eb3 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 11650eb7 mov esp, ebp */
  ESP = (EBP);
  /* 11650eb9 pop ebp */
  EBP = (pop32());
  /* 11650eba ret  */
  ESPCHK(0x11650d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ec0 @ 0x11650ec0 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_11650ec0(void) {
  FTRACE(0x11650ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11650ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11650ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11650ec3 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650ec9 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11650ecc mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 11650ecf mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11650ed5 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 11650edc mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 11650ee3 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 11650eea mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11650ef1 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11650ef8 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11650eff mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 11650f06 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11650f0d mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 11650f14 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11650f1b mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11650f22 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11650f25 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11650f28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650f2b mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11650f2e jmp 0x11650f39 */
  goto L_11650f39;
L_11650f30:;
  /* 11650f30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650f33 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650f36 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11650f39:;
  /* 11650f39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650f3c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11650f3f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650f42 je 0x11650f65 */
  if (C.zf) goto L_11650f65;
  /* 11650f44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650f47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11650f4a cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650f4d je 0x11650f65 */
  if (C.zf) goto L_11650f65;
  /* 11650f4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650f52 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11650f55 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650f58 je 0x11650f65 */
  if (C.zf) goto L_11650f65;
  /* 11650f5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650f5d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11650f60 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650f63 jne 0x11650f67 */
  if (!C.zf) goto L_11650f67;
L_11650f65:;
  /* 11650f65 jmp 0x11650f30 */
  goto L_11650f30;
L_11650f67:;
  /* 11650f67 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650f6b je 0x116516c8 */
  if (C.zf) goto L_116516c8;
  /* 11650f71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650f74 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11650f76 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11650f79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650f7c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11650f7f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11650f82 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11650f85 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 11650f88 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650f8c ja 0x116516c3 */
  if ((!C.cf&&!C.zf)) goto L_116516c3;
  /* 11650f92 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 11650f95 jmp dword ptr [ecx*4 + 0x116518da] */
  switch (ECX) {
    case 0: goto L_11650f9c;
    case 1: goto L_1165103a;
    case 2: goto L_116510f0;
    case 3: goto L_1165115b;
    case 4: goto L_11651273;
    case 5: goto L_116513a5;
    case 6: goto L_1165141b;
    case 7: goto L_11651500;
    case 8: goto L_116514a2;
    case 9: goto L_11651553;
    case 10: goto L_116516c3;
    case 11: goto L_1165165f;
    case 12: goto L_116510c9;
    case 13: goto L_116510b7;
    case 14: goto L_116510c0;
    case 15: goto L_116510db;
    default: x86_unimpl("switch@0x11650f95 out of table"); return;
  }
L_11650f9c:;
  /* 11650f9c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11650fa0 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650fa3 jl 0x11650fc0 */
  if ((C.sf!=C.of)) goto L_11650fc0;
  /* 11650fa5 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11650fa9 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650fac jg 0x11650fc0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11650fc0;
  /* 11650fae mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11650fb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11650fb8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11650fbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11650fbe jmp 0x11651035 */
  goto L_11651035;
L_11650fc0:;
  /* 11650fc0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11650fc4 movsx eax, byte ptr [0x11673c94] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11673c94))));
  /* 11650fcb cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11650fcd jne 0x11650fd8 */
  if (!C.zf) goto L_11650fd8;
  /* 11650fcf mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11650fd6 jmp 0x11651035 */
  goto L_11651035;
L_11650fd8:;
  /* 11650fd8 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11650fdb mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 11650fe1 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11650fe8 je 0x11651007 */
  if (C.zf) goto L_11651007;
  /* 11650fea cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11650ff1 je 0x11651016 */
  if (C.zf) goto L_11651016;
  /* 11650ff3 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11650ffa je 0x11650ffe */
  if (C.zf) goto L_11650ffe;
  /* 11650ffc jmp 0x11651025 */
  goto L_11651025;
L_11650ffe:;
  /* 11650ffe mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11651005 jmp 0x11651035 */
  goto L_11651035;
L_11651007:;
  /* 11651007 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 1165100e mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11651014 jmp 0x11651035 */
  goto L_11651035;
L_11651016:;
  /* 11651016 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 1165101d mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 11651023 jmp 0x11651035 */
  goto L_11651035;
L_11651025:;
  /* 11651025 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 1165102c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165102f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651032 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11651035:;
  /* 11651035 jmp 0x116516c3 */
  goto L_116516c3;
L_1165103a:;
  /* 1165103a mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11651041 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11651045 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651048 jl 0x11651068 */
  if ((C.sf!=C.of)) goto L_11651068;
  /* 1165104a movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1165104e cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651051 jg 0x11651068 */
  if ((!C.zf&&C.sf==C.of)) goto L_11651068;
  /* 11651053 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 1165105a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165105d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651060 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11651063 jmp 0x116510eb */
  goto L_116510eb;
L_11651068:;
  /* 11651068 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1165106c movsx ecx, byte ptr [0x11673c94] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11673c94))));
  /* 11651073 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651075 jne 0x11651080 */
  if (!C.zf) goto L_11651080;
  /* 11651077 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 1165107e jmp 0x116510eb */
  goto L_116510eb;
L_11651080:;
  /* 11651080 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11651084 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 1165108a mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 11651090 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651093 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 11651099 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116510a0 ja 0x116510db */
  if ((!C.cf&&!C.zf)) goto L_116510db;
  /* 116510a2 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 116510a8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116510aa mov cl, byte ptr [edx + 0x1165191a] */
  CL = (r8((uint32_t)(EDX + 0x1165191a)));
  /* 116510b0 jmp dword ptr [ecx*4 + 0x1165190a] */
  switch (ECX) {
    case 0: goto L_116510c9;
    case 1: goto L_116510b7;
    case 2: goto L_116510c0;
    case 3: goto L_116510db;
    default: x86_unimpl("switch@0x116510b0 out of table"); return;
  }
L_116510b7:;
  /* 116510b7 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 116510be jmp 0x116510eb */
  goto L_116510eb;
L_116510c0:;
  /* 116510c0 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 116510c7 jmp 0x116510eb */
  goto L_116510eb;
L_116510c9:;
  /* 116510c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116510cc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116510cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116510d2 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 116510d9 jmp 0x116510eb */
  goto L_116510eb;
L_116510db:;
  /* 116510db mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116510e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116510e5 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116510e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116510eb:;
  /* 116510eb jmp 0x116516c3 */
  goto L_116516c3;
L_116510f0:;
  /* 116510f0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116510f4 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116510f7 jl 0x11651114 */
  if ((C.sf!=C.of)) goto L_11651114;
  /* 116510f9 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116510fd cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651100 jg 0x11651114 */
  if ((!C.zf&&C.sf==C.of)) goto L_11651114;
  /* 11651102 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11651109 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165110c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165110f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11651112 jmp 0x11651156 */
  goto L_11651156;
L_11651114:;
  /* 11651114 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11651118 movsx eax, byte ptr [0x11673c94] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11673c94))));
  /* 1165111f cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651121 jne 0x1165112c */
  if (!C.zf) goto L_1165112c;
  /* 11651123 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 1165112a jmp 0x11651156 */
  goto L_11651156;
L_1165112c:;
  /* 1165112c mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 1165112f mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 11651135 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1165113c je 0x11651140 */
  if (C.zf) goto L_11651140;
  /* 1165113e jmp 0x11651149 */
  goto L_11651149;
L_11651140:;
  /* 11651140 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11651147 jmp 0x11651156 */
  goto L_11651156;
L_11651149:;
  /* 11651149 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11651150 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11651153 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11651156:;
  /* 11651156 jmp 0x116516c3 */
  goto L_116516c3;
L_1165115b:;
  /* 1165115b mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11651162 jmp 0x11651175 */
  goto L_11651175;
L_11651164:;
  /* 11651164 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651167 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11651169 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 1165116c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165116f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651172 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11651175:;
  /* 11651175 cmp dword ptr [0x11673c90], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11673c90))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165117c jle 0x11651199 */
  if ((C.zf||C.sf!=C.of)) goto L_11651199;
  /* 1165117e push 4 */
  push32((uint32_t)(0x4u));
  /* 11651180 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11651183 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11651188 push eax */
  push32((uint32_t)(EAX));
  /* 11651189 call 0x1164a680 */
  push32(0x1165118eu); f_1164a680();
  /* 1165118e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651191 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11651197 jmp 0x116511b7 */
  goto L_116511b7;
L_11651199:;
  /* 11651199 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1165119c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116511a2 mov edx, dword ptr [0x11673c9c] */
  EDX = (r32((uint32_t)(0x11673c9c)));
  /* 116511a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116511aa mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 116511ae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 116511b1 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_116511b7:;
  /* 116511b7 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116511be je 0x116511f4 */
  if (C.zf) goto L_116511f4;
  /* 116511c0 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116511c4 jae 0x116511e6 */
  if (!C.cf) goto L_116511e6;
  /* 116511c6 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 116511c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116511cc mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 116511cf movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116511d3 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116511d6 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 116511d9 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116511db mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 116511de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116511e1 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 116511e4 jmp 0x116511ef */
  goto L_116511ef;
L_116511e6:;
  /* 116511e6 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 116511e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116511ec mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_116511ef:;
  /* 116511ef jmp 0x11651164 */
  goto L_11651164;
L_116511f4:;
  /* 116511f4 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116511f8 movsx ecx, byte ptr [0x11673c94] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11673c94))));
  /* 116511ff cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651201 jne 0x1165120c */
  if (!C.zf) goto L_1165120c;
  /* 11651203 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 1165120a jmp 0x1165126e */
  goto L_1165126e;
L_1165120c:;
  /* 1165120c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11651210 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 11651216 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1165121c sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165121f mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11651225 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165122c ja 0x1165125e */
  if ((!C.cf&&!C.zf)) goto L_1165125e;
  /* 1165122e mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11651234 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11651236 mov cl, byte ptr [edx + 0x11651961] */
  CL = (r8((uint32_t)(EDX + 0x11651961)));
  /* 1165123c jmp dword ptr [ecx*4 + 0x11651955] */
  switch (ECX) {
    case 0: goto L_1165124c;
    case 1: goto L_11651243;
    case 2: goto L_1165125e;
    default: x86_unimpl("switch@0x1165123c out of table"); return;
  }
L_11651243:;
  /* 11651243 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 1165124a jmp 0x1165126e */
  goto L_1165126e;
L_1165124c:;
  /* 1165124c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165124f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651252 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11651255 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 1165125c jmp 0x1165126e */
  goto L_1165126e;
L_1165125e:;
  /* 1165125e mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11651265 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651268 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165126b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1165126e:;
  /* 1165126e jmp 0x116516c3 */
  goto L_116516c3;
L_11651273:;
  /* 11651273 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 1165127a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11651281 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651285 jne 0x116512ae */
  if (!C.zf) goto L_116512ae;
  /* 11651287 jmp 0x1165129a */
  goto L_1165129a;
L_11651289:;
  /* 11651289 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165128c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1165128e mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11651291 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651294 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651297 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1165129a:;
  /* 1165129a movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1165129e cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116512a1 jne 0x116512ae */
  if (!C.zf) goto L_116512ae;
  /* 116512a3 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 116512a6 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116512a9 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 116512ac jmp 0x11651289 */
  goto L_11651289;
L_116512ae:;
  /* 116512ae jmp 0x116512c1 */
  goto L_116512c1;
L_116512b0:;
  /* 116512b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116512b3 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116512b5 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 116512b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116512bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116512be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116512c1:;
  /* 116512c1 cmp dword ptr [0x11673c90], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11673c90))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116512c8 jle 0x116512e6 */
  if ((C.zf||C.sf!=C.of)) goto L_116512e6;
  /* 116512ca push 4 */
  push32((uint32_t)(0x4u));
  /* 116512cc mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116512cf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116512d5 push ecx */
  push32((uint32_t)(ECX));
  /* 116512d6 call 0x1164a680 */
  push32(0x116512dbu); f_1164a680();
  /* 116512db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116512de mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 116512e4 jmp 0x11651303 */
  goto L_11651303;
L_116512e6:;
  /* 116512e6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116512e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116512ef mov eax, dword ptr [0x11673c9c] */
  EAX = (r32((uint32_t)(0x11673c9c)));
  /* 116512f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116512f6 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 116512fa and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116512fd mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_11651303:;
  /* 11651303 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165130a je 0x1165133e */
  if (C.zf) goto L_1165133e;
  /* 1165130c cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651310 jae 0x11651339 */
  if (!C.cf) goto L_11651339;
  /* 11651312 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11651315 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651318 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 1165131b movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1165131f sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651322 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11651325 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11651327 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1165132a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165132d mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11651330 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11651333 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651336 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11651339:;
  /* 11651339 jmp 0x116512b0 */
  goto L_116512b0;
L_1165133e:;
  /* 1165133e movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11651342 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11651348 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1165134e sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651351 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 11651357 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165135e ja 0x11651390 */
  if ((!C.cf&&!C.zf)) goto L_11651390;
  /* 11651360 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11651366 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11651368 mov al, byte ptr [ecx + 0x116519a8] */
  AL = (r8((uint32_t)(ECX + 0x116519a8)));
  /* 1165136e jmp dword ptr [eax*4 + 0x1165199c] */
  switch (EAX) {
    case 0: goto L_1165137e;
    case 1: goto L_11651375;
    case 2: goto L_11651390;
    default: x86_unimpl("switch@0x1165136e out of table"); return;
  }
L_11651375:;
  /* 11651375 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 1165137c jmp 0x116513a0 */
  goto L_116513a0;
L_1165137e:;
  /* 1165137e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651381 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651384 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11651387 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 1165138e jmp 0x116513a0 */
  goto L_116513a0;
L_11651390:;
  /* 11651390 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11651397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165139a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165139d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116513a0:;
  /* 116513a0 jmp 0x116516c3 */
  goto L_116516c3;
L_116513a5:;
  /* 116513a5 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 116513ac cmp dword ptr [0x11673c90], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11673c90))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116513b3 jle 0x116513d1 */
  if ((C.zf||C.sf!=C.of)) goto L_116513d1;
  /* 116513b5 push 4 */
  push32((uint32_t)(0x4u));
  /* 116513b7 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116513ba and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116513c0 push ecx */
  push32((uint32_t)(ECX));
  /* 116513c1 call 0x1164a680 */
  push32(0x116513c6u); f_1164a680();
  /* 116513c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116513c9 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 116513cf jmp 0x116513ee */
  goto L_116513ee;
L_116513d1:;
  /* 116513d1 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116513d4 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116513da mov eax, dword ptr [0x11673c9c] */
  EAX = (r32((uint32_t)(0x11673c9c)));
  /* 116513df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116513e1 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 116513e5 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116513e8 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_116513ee:;
  /* 116513ee cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116513f5 je 0x11651409 */
  if (C.zf) goto L_11651409;
  /* 116513f7 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 116513fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651401 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651404 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11651407 jmp 0x11651416 */
  goto L_11651416;
L_11651409:;
  /* 11651409 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11651410 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11651413 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11651416:;
  /* 11651416 jmp 0x116516c3 */
  goto L_116516c3;
L_1165141b:;
  /* 1165141b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165141e sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651421 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11651424 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11651428 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165142b jl 0x11651448 */
  if ((C.sf!=C.of)) goto L_11651448;
  /* 1165142d movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11651431 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651434 jg 0x11651448 */
  if ((!C.zf&&C.sf==C.of)) goto L_11651448;
  /* 11651436 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 1165143d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651440 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651443 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11651446 jmp 0x1165149d */
  goto L_1165149d;
L_11651448:;
  /* 11651448 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 1165144b mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 11651451 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11651458 je 0x11651487 */
  if (C.zf) goto L_11651487;
  /* 1165145a cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11651461 je 0x11651477 */
  if (C.zf) goto L_11651477;
  /* 11651463 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1165146a je 0x1165146e */
  if (C.zf) goto L_1165146e;
  /* 1165146c jmp 0x11651490 */
  goto L_11651490;
L_1165146e:;
  /* 1165146e mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11651475 jmp 0x1165149d */
  goto L_1165149d;
L_11651477:;
  /* 11651477 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 1165147e mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11651485 jmp 0x1165149d */
  goto L_1165149d;
L_11651487:;
  /* 11651487 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 1165148e jmp 0x1165149d */
  goto L_1165149d;
L_11651490:;
  /* 11651490 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11651497 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 1165149a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1165149d:;
  /* 1165149d jmp 0x116516c3 */
  goto L_116516c3;
L_116514a2:;
  /* 116514a2 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 116514a9 jmp 0x116514bc */
  goto L_116514bc;
L_116514ab:;
  /* 116514ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116514ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116514b0 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 116514b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116514b6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116514b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116514bc:;
  /* 116514bc movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116514c0 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116514c3 jne 0x116514c7 */
  if (!C.zf) goto L_116514c7;
  /* 116514c5 jmp 0x116514ab */
  goto L_116514ab;
L_116514c7:;
  /* 116514c7 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116514cb cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116514ce jl 0x116514eb */
  if ((C.sf!=C.of)) goto L_116514eb;
  /* 116514d0 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116514d4 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116514d7 jg 0x116514eb */
  if ((!C.zf&&C.sf==C.of)) goto L_116514eb;
  /* 116514d9 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 116514e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116514e3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116514e6 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116514e9 jmp 0x116514fb */
  goto L_116514fb;
L_116514eb:;
  /* 116514eb mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116514f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116514f5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116514f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116514fb:;
  /* 116514fb jmp 0x116516c3 */
  goto L_116516c3;
L_11651500:;
  /* 11651500 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11651504 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651507 jl 0x11651524 */
  if ((C.sf!=C.of)) goto L_11651524;
  /* 11651509 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 1165150d cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651510 jg 0x11651524 */
  if ((!C.zf&&C.sf==C.of)) goto L_11651524;
  /* 11651512 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11651519 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165151c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165151f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11651522 jmp 0x1165154e */
  goto L_1165154e;
L_11651524:;
  /* 11651524 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11651527 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 1165152d cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11651534 je 0x11651538 */
  if (C.zf) goto L_11651538;
  /* 11651536 jmp 0x11651541 */
  goto L_11651541;
L_11651538:;
  /* 11651538 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 1165153f jmp 0x1165154e */
  goto L_1165154e;
L_11651541:;
  /* 11651541 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11651548 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1165154b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1165154e:;
  /* 1165154e jmp 0x116516c3 */
  goto L_116516c3;
L_11651553:;
  /* 11651553 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 1165155a mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 11651561 jmp 0x11651574 */
  goto L_11651574;
L_11651563:;
  /* 11651563 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651566 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11651568 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 1165156b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165156e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651571 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11651574:;
  /* 11651574 cmp dword ptr [0x11673c90], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11673c90))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165157b jle 0x11651599 */
  if ((C.zf||C.sf!=C.of)) goto L_11651599;
  /* 1165157d push 4 */
  push32((uint32_t)(0x4u));
  /* 1165157f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11651582 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11651588 push edx */
  push32((uint32_t)(EDX));
  /* 11651589 call 0x1164a680 */
  push32(0x1165158eu); f_1164a680();
  /* 1165158e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651591 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11651597 jmp 0x116515b6 */
  goto L_116515b6;
L_11651599:;
  /* 11651599 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1165159c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116515a1 mov ecx, dword ptr [0x11673c9c] */
  ECX = (r32((uint32_t)(0x11673c9c)));
  /* 116515a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116515a9 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 116515ad and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116515b0 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_116515b6:;
  /* 116515b6 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116515bd je 0x116515e7 */
  if (C.zf) goto L_116515e7;
  /* 116515bf mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116515c2 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116515c5 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 116515c9 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 116515cd mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 116515d0 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116515d7 jle 0x116515e2 */
  if ((C.zf||C.sf!=C.of)) goto L_116515e2;
  /* 116515d9 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 116515e0 jmp 0x116515e7 */
  goto L_116515e7;
L_116515e2:;
  /* 116515e2 jmp 0x11651563 */
  goto L_11651563;
L_116515e7:;
  /* 116515e7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116515ea mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116515ed jmp 0x11651600 */
  goto L_11651600;
L_116515ef:;
  /* 116515ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116515f2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116515f4 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 116515f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116515fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116515fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11651600:;
  /* 11651600 cmp dword ptr [0x11673c90], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11673c90))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651607 jle 0x11651625 */
  if ((C.zf||C.sf!=C.of)) goto L_11651625;
  /* 11651609 push 4 */
  push32((uint32_t)(0x4u));
  /* 1165160b mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1165160e and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11651614 push ecx */
  push32((uint32_t)(ECX));
  /* 11651615 call 0x1164a680 */
  push32(0x1165161au); f_1164a680();
  /* 1165161a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165161d mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11651623 jmp 0x11651642 */
  goto L_11651642;
L_11651625:;
  /* 11651625 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11651628 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1165162e mov eax, dword ptr [0x11673c9c] */
  EAX = (r32((uint32_t)(0x11673c9c)));
  /* 11651633 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11651635 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11651639 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1165163c mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_11651642:;
  /* 11651642 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651649 je 0x1165164d */
  if (C.zf) goto L_1165164d;
  /* 1165164b jmp 0x116515ef */
  goto L_116515ef;
L_1165164d:;
  /* 1165164d mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11651654 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651657 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165165a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1165165d jmp 0x116516c3 */
  goto L_116516c3;
L_1165165f:;
  /* 1165165f cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651663 je 0x116516b3 */
  if (C.zf) goto L_116516b3;
  /* 11651665 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651668 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165166b mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 1165166e mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11651671 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 11651677 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1165167e je 0x1165169b */
  if (C.zf) goto L_1165169b;
  /* 11651680 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11651687 je 0x1165168b */
  if (C.zf) goto L_1165168b;
  /* 11651689 jmp 0x116516a4 */
  goto L_116516a4;
L_1165168b:;
  /* 1165168b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11651692 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11651699 jmp 0x116516b1 */
  goto L_116516b1;
L_1165169b:;
  /* 1165169b mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 116516a2 jmp 0x116516b1 */
  goto L_116516b1;
L_116516a4:;
  /* 116516a4 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116516ab mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 116516ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116516b1:;
  /* 116516b1 jmp 0x116516c3 */
  goto L_116516c3;
L_116516b3:;
  /* 116516b3 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 116516ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116516bd sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116516c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116516c3:;
  /* 116516c3 jmp 0x11650f67 */
  goto L_11650f67;
L_116516c8:;
  /* 116516c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116516cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116516ce mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116516d0 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116516d4 je 0x11651817 */
  if (C.zf) goto L_11651817;
  /* 116516da cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116516de jne 0x11651817 */
  if (!C.zf) goto L_11651817;
  /* 116516e4 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116516e8 jne 0x11651817 */
  if (!C.zf) goto L_11651817;
  /* 116516ee cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116516f2 jbe 0x1165171f */
  if ((C.cf||C.zf)) goto L_1165171f;
  /* 116516f4 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 116516f8 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116516fb jl 0x11651706 */
  if ((C.sf!=C.of)) goto L_11651706;
  /* 116516fd mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 11651700 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11651703 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_11651706:;
  /* 11651706 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 1165170d mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11651710 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651713 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11651716 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11651719 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165171c mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_1165171f:;
  /* 1165171f cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651723 jbe 0x116517fa */
  if ((C.cf||C.zf)) goto L_116517fa;
  /* 11651729 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 1165172c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165172f mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11651732 jmp 0x1165173d */
  goto L_1165173d;
L_11651734:;
  /* 11651734 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11651737 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165173a mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_1165173d:;
  /* 1165173d mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11651740 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11651743 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11651745 jne 0x1165175b */
  if (!C.zf) goto L_1165175b;
  /* 11651747 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 1165174a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165174d mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11651750 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11651753 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651756 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11651759 jmp 0x11651734 */
  goto L_11651734;
L_1165175b:;
  /* 1165175b lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 1165175e push ecx */
  push32((uint32_t)(ECX));
  /* 1165175f mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11651762 push edx */
  push32((uint32_t)(EDX));
  /* 11651763 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11651766 push eax */
  push32((uint32_t)(EAX));
  /* 11651767 call 0x11650d80 */
  push32(0x1165176cu); f_11650d80();
  /* 1165176c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165176f cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651773 jge 0x1165177d */
  if ((C.sf==C.of)) goto L_1165177d;
  /* 11651775 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11651778 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1165177a mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1165177d:;
  /* 1165177d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11651780 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651783 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11651786 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165178a jne 0x11651795 */
  if (!C.zf) goto L_11651795;
  /* 1165178c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1165178f add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651792 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11651795:;
  /* 11651795 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651799 jne 0x116517a4 */
  if (!C.zf) goto L_116517a4;
  /* 1165179b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1165179e sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116517a1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_116517a4:;
  /* 116517a4 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116517ab jle 0x116517b6 */
  if ((C.zf||C.sf!=C.of)) goto L_116517b6;
  /* 116517ad mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 116517b4 jmp 0x116517f8 */
  goto L_116517f8;
L_116517b6:;
  /* 116517b6 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116517bd jge 0x116517c8 */
  if ((C.sf==C.of)) goto L_116517c8;
  /* 116517bf mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 116517c6 jmp 0x116517f8 */
  goto L_116517f8;
L_116517c8:;
  /* 116517c8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116517cb push edx */
  push32((uint32_t)(EDX));
  /* 116517cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116517cf push eax */
  push32((uint32_t)(EAX));
  /* 116517d0 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 116517d3 push ecx */
  push32((uint32_t)(ECX));
  /* 116517d4 call 0x116551e0 */
  push32(0x116517d9u); f_116551e0();
  /* 116517d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116517dc mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 116517e0 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 116517e4 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 116517e7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116517ea mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 116517ed mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116517f0 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 116517f4 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_116517f8:;
  /* 116517f8 jmp 0x11651817 */
  goto L_11651817;
L_116517fa:;
  /* 116517fa mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11651800 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11651806 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11651809 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1165180e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11651811 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11651814 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11651817:;
  /* 11651817 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165181b jne 0x11651846 */
  if (!C.zf) goto L_11651846;
  /* 1165181d mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11651823 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11651829 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1165182c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11651832 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11651835 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11651838 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1165183b mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 1165183e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11651841 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11651844 jmp 0x1165189d */
  goto L_1165189d;
L_11651846:;
  /* 11651846 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165184a je 0x11651871 */
  if (C.zf) goto L_11651871;
  /* 1165184c mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 11651852 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11651859 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11651860 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11651866 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11651869 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1165186c mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 1165186f jmp 0x1165189d */
  goto L_1165189d;
L_11651871:;
  /* 11651871 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651875 je 0x1165189d */
  if (C.zf) goto L_1165189d;
  /* 11651877 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 1165187d mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11651883 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11651886 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1165188b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1165188e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11651891 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11651894 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11651897 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1165189a mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_1165189d:;
  /* 1165189d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116518a0 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 116518a4 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 116518a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116518aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116518ad mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 116518b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116518b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116518b6 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 116518b9 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 116518bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116518c1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116518c4 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116518ca or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 116518cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116518cf mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 116518d3 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 116518d6 mov esp, ebp */
  ESP = (EBP);
  /* 116518d8 pop ebp */
  EBP = (pop32());
  /* 116518d9 ret  */
  ESPCHK(0x11650ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_100119f0 @ 0x116519f0 (79 bytes, 33 insns) */
void f_116519f0(void) {
  FTRACE(0x116519f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116519f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116519f1 mov ebp, esp */
  EBP = (ESP);
  /* 116519f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116519f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116519f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116519fa push 0 */
  push32((uint32_t)(0x0u));
  /* 116519fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116519ff push eax */
  push32((uint32_t)(EAX));
  /* 11651a00 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11651a03 push ecx */
  push32((uint32_t)(ECX));
  /* 11651a04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11651a07 push edx */
  push32((uint32_t)(EDX));
  /* 11651a08 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11651a0b push eax */
  push32((uint32_t)(EAX));
  /* 11651a0c call 0x11650ec0 */
  push32(0x11651a11u); f_11650ec0();
  /* 11651a11 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651a14 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11651a17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11651a1a push ecx */
  push32((uint32_t)(ECX));
  /* 11651a1b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11651a1e push edx */
  push32((uint32_t)(EDX));
  /* 11651a1f call 0x1164af80 */
  push32(0x11651a24u); f_1164af80();
  /* 11651a24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651a27 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11651a2a cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651a2e jne 0x11651a38 */
  if (!C.zf) goto L_11651a38;
  /* 11651a30 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11651a33 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11651a35 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11651a38:;
  /* 11651a38 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11651a3b mov esp, ebp */
  ESP = (EBP);
  /* 11651a3d pop ebp */
  EBP = (pop32());
  /* 11651a3e ret  */
  ESPCHK(0x116519f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a40 @ 0x11651a40 (1302 bytes, 386 insns) */
void f_11651a40(void) {
  FTRACE(0x11651a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11651a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11651a41 mov ebp, esp */
  EBP = (ESP);
  /* 11651a43 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651a46 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 11651a4c mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 11651a52 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 11651a58 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 11651a5f mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 11651a63 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 11651a67 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 11651a6b mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 11651a6f mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 11651a73 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 11651a77 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 11651a7b mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 11651a7f mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 11651a83 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 11651a87 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 11651a8b mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 11651a8f mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 11651a96 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 11651a9a mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 11651a9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11651aa1 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11651aa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11651aa7 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 11651aaa mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11651aad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11651ab2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11651ab7 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 11651abb mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 11651abf and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11651ac4 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 11651ac8 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11651acb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11651ad1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11651ad3 je 0x11651ade */
  if (C.zf) goto L_11651ade;
  /* 11651ad5 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651ad8 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 11651adc jmp 0x11651ae5 */
  goto L_11651ae5;
L_11651ade:;
  /* 11651ade mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651ae1 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_11651ae5:;
  /* 11651ae5 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11651ae8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11651aee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11651af0 jne 0x11651b2c */
  if (!C.zf) goto L_11651b2c;
  /* 11651af2 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651af6 jne 0x11651b2c */
  if (!C.zf) goto L_11651b2c;
  /* 11651af8 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651afc jne 0x11651b2c */
  if (!C.zf) goto L_11651b2c;
  /* 11651afe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651b01 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11651b06 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651b09 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 11651b0d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651b10 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 11651b14 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651b17 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 11651b1b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651b1e mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 11651b22 mov eax, 1 */
  EAX = (0x1u);
  /* 11651b27 jmp 0x11651f52 */
  goto L_11651f52;
L_11651b2c:;
  /* 11651b2c mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11651b2f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11651b35 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651b3b jne 0x11651c26 */
  if (!C.zf) goto L_11651c26;
  /* 11651b41 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651b44 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 11651b49 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651b50 jne 0x11651b58 */
  if (!C.zf) goto L_11651b58;
  /* 11651b52 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651b56 je 0x11651b8c */
  if (C.zf) goto L_11651b8c;
L_11651b58:;
  /* 11651b58 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11651b5b and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11651b61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11651b63 jne 0x11651b8c */
  if (!C.zf) goto L_11651b8c;
  /* 11651b65 push 0x116711c0 */
  push32((uint32_t)(0x116711c0u));
  /* 11651b6a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651b6d add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651b70 push edx */
  push32((uint32_t)(EDX));
  /* 11651b71 call 0x11649870 */
  push32(0x11651b76u); f_11649870();
  /* 11651b76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651b79 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651b7c mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 11651b80 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11651b87 jmp 0x11651c21 */
  goto L_11651c21;
L_11651b8c:;
  /* 11651b8c mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11651b8f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11651b95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11651b97 je 0x11651bcc */
  if (C.zf) goto L_11651bcc;
  /* 11651b99 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651ba0 jne 0x11651bcc */
  if (!C.zf) goto L_11651bcc;
  /* 11651ba2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651ba6 jne 0x11651bcc */
  if (!C.zf) goto L_11651bcc;
  /* 11651ba8 push 0x116711b8 */
  push32((uint32_t)(0x116711b8u));
  /* 11651bad mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651bb0 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651bb3 push edx */
  push32((uint32_t)(EDX));
  /* 11651bb4 call 0x11649870 */
  push32(0x11651bb9u); f_11649870();
  /* 11651bb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651bbc mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651bbf mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 11651bc3 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11651bca jmp 0x11651c21 */
  goto L_11651c21;
L_11651bcc:;
  /* 11651bcc cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651bd3 jne 0x11651bff */
  if (!C.zf) goto L_11651bff;
  /* 11651bd5 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651bd9 jne 0x11651bff */
  if (!C.zf) goto L_11651bff;
  /* 11651bdb push 0x116711b0 */
  push32((uint32_t)(0x116711b0u));
  /* 11651be0 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651be3 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651be6 push ecx */
  push32((uint32_t)(ECX));
  /* 11651be7 call 0x11649870 */
  push32(0x11651becu); f_11649870();
  /* 11651bec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651bef mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651bf2 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 11651bf6 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11651bfd jmp 0x11651c21 */
  goto L_11651c21;
L_11651bff:;
  /* 11651bff push 0x116711a8 */
  push32((uint32_t)(0x116711a8u));
  /* 11651c04 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651c07 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651c0a push eax */
  push32((uint32_t)(EAX));
  /* 11651c0b call 0x11649870 */
  push32(0x11651c10u); f_11649870();
  /* 11651c10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651c13 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651c16 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 11651c1a mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_11651c21:;
  /* 11651c21 jmp 0x11651f4f */
  goto L_11651f4f;
L_11651c26:;
  /* 11651c26 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11651c29 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11651c2f sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11651c32 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 11651c36 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11651c39 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11651c3e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11651c43 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 11651c47 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11651c4a shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11651c4d mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 11651c51 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11651c54 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11651c5a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11651c5d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11651c62 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11651c65 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11651c68 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11651c6e mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11651c71 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11651c76 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11651c79 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651c7b mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11651c7e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11651c84 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11651c87 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11651c8c imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11651c8f add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651c91 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651c94 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11651c97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11651c9a sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11651c9d mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 11651ca1 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 11651ca5 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 11651ca9 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11651cac mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 11651caf mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11651cb2 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 11651cb5 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 11651cbb push 1 */
  push32((uint32_t)(0x1u));
  /* 11651cbd movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11651cc1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11651cc3 push edx */
  push32((uint32_t)(EDX));
  /* 11651cc4 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11651cc7 push eax */
  push32((uint32_t)(EAX));
  /* 11651cc8 call 0x116551e0 */
  push32(0x11651ccdu); f_116551e0();
  /* 11651ccd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651cd0 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11651cd3 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11651cd9 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651cdf jl 0x11651cfd */
  if ((C.sf!=C.of)) goto L_11651cfd;
  /* 11651ce1 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11651ce5 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11651ce9 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 11651ced lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 11651cf0 push eax */
  push32((uint32_t)(EAX));
  /* 11651cf1 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11651cf4 push ecx */
  push32((uint32_t)(ECX));
  /* 11651cf5 call 0x11654da0 */
  push32(0x11651cfau); f_11654da0();
  /* 11651cfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11651cfd:;
  /* 11651cfd mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651d00 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11651d04 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11651d07 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11651d0a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11651d0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11651d0f je 0x11651d51 */
  if (C.zf) goto L_11651d51;
  /* 11651d11 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11651d15 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11651d18 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651d1a mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11651d1d cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651d21 jg 0x11651d51 */
  if ((!C.zf&&C.sf==C.of)) goto L_11651d51;
  /* 11651d23 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651d26 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11651d2b mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651d2e mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11651d32 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651d35 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11651d39 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651d3c mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11651d40 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651d43 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11651d47 mov eax, 1 */
  EAX = (0x1u);
  /* 11651d4c jmp 0x11651f52 */
  goto L_11651f52;
L_11651d51:;
  /* 11651d51 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651d55 jle 0x11651d5e */
  if ((C.zf||C.sf!=C.of)) goto L_11651d5e;
  /* 11651d57 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_11651d5e:;
  /* 11651d5e mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11651d61 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11651d66 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651d6b mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11651d6e mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 11651d74 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11651d7b jmp 0x11651d86 */
  goto L_11651d86;
L_11651d7d:;
  /* 11651d7d mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11651d80 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651d83 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_11651d86:;
  /* 11651d86 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651d8a jge 0x11651d9a */
  if ((C.sf==C.of)) goto L_11651d9a;
  /* 11651d8c lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11651d8f push edx */
  push32((uint32_t)(EDX));
  /* 11651d90 call 0x11650cb0 */
  push32(0x11651d95u); f_11650cb0();
  /* 11651d95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651d98 jmp 0x11651d7d */
  goto L_11651d7d;
L_11651d9a:;
  /* 11651d9a cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651d9e jge 0x11651dcc */
  if ((C.sf==C.of)) goto L_11651dcc;
  /* 11651da0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11651da3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11651da5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11651daa mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 11651dad jmp 0x11651db8 */
  goto L_11651db8;
L_11651daf:;
  /* 11651daf mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 11651db2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651db5 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_11651db8:;
  /* 11651db8 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651dbc jle 0x11651dcc */
  if ((C.zf||C.sf!=C.of)) goto L_11651dcc;
  /* 11651dbe lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11651dc1 push edx */
  push32((uint32_t)(EDX));
  /* 11651dc2 call 0x11650d10 */
  push32(0x11651dc7u); f_11650d10();
  /* 11651dc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651dca jmp 0x11651daf */
  goto L_11651daf;
L_11651dcc:;
  /* 11651dcc mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651dcf add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651dd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11651dd5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11651dd8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651ddb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11651dde jmp 0x11651de9 */
  goto L_11651de9;
L_11651de0:;
  /* 11651de0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11651de3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651de6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11651de9:;
  /* 11651de9 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651ded jle 0x11651e55 */
  if ((C.zf||C.sf!=C.of)) goto L_11651e55;
  /* 11651def mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11651df2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11651df5 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11651df8 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11651dfb mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11651dfe mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11651e01 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11651e04 push eax */
  push32((uint32_t)(EAX));
  /* 11651e05 call 0x11650cb0 */
  push32(0x11651e0au); f_11650cb0();
  /* 11651e0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651e0d lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11651e10 push ecx */
  push32((uint32_t)(ECX));
  /* 11651e11 call 0x11650cb0 */
  push32(0x11651e16u); f_11650cb0();
  /* 11651e16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651e19 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 11651e1c push edx */
  push32((uint32_t)(EDX));
  /* 11651e1d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11651e20 push eax */
  push32((uint32_t)(EAX));
  /* 11651e21 call 0x11650c00 */
  push32(0x11651e26u); f_11650c00();
  /* 11651e26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651e29 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11651e2c push ecx */
  push32((uint32_t)(ECX));
  /* 11651e2d call 0x11650cb0 */
  push32(0x11651e32u); f_11650cb0();
  /* 11651e32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651e35 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 11651e38 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11651e3e add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651e41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651e44 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11651e46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651e49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651e4c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11651e4f mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 11651e53 jmp 0x11651de0 */
  goto L_11651de0;
L_11651e55:;
  /* 11651e55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651e58 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651e5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11651e5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651e61 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11651e63 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11651e66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651e69 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651e6c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11651e6f movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11651e73 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651e76 jl 0x11651ed3 */
  if ((C.sf!=C.of)) goto L_11651ed3;
  /* 11651e78 jmp 0x11651e83 */
  goto L_11651e83;
L_11651e7a:;
  /* 11651e7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651e7d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651e80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11651e83:;
  /* 11651e83 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651e86 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651e89 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651e8c jb 0x11651ea1 */
  if (C.cf) goto L_11651ea1;
  /* 11651e8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651e91 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11651e94 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651e97 jne 0x11651ea1 */
  if (!C.zf) goto L_11651ea1;
  /* 11651e99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651e9c mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11651e9f jmp 0x11651e7a */
  goto L_11651e7a;
L_11651ea1:;
  /* 11651ea1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651ea4 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651ea7 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651eaa jae 0x11651ec5 */
  if (!C.cf) goto L_11651ec5;
  /* 11651eac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651eaf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651eb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11651eb5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651eb8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11651ebb add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11651ebf mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651ec2 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_11651ec5:;
  /* 11651ec5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651ec8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11651eca add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11651ecc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651ecf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11651ed1 jmp 0x11651f2c */
  goto L_11651f2c;
L_11651ed3:;
  /* 11651ed3 jmp 0x11651ede */
  goto L_11651ede;
L_11651ed5:;
  /* 11651ed5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651ed8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651edb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11651ede:;
  /* 11651ede mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651ee1 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651ee4 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651ee7 jb 0x11651ef6 */
  if (C.cf) goto L_11651ef6;
  /* 11651ee9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651eec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11651eef cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651ef2 jne 0x11651ef6 */
  if (!C.zf) goto L_11651ef6;
  /* 11651ef4 jmp 0x11651ed5 */
  goto L_11651ed5;
L_11651ef6:;
  /* 11651ef6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651ef9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651efc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651eff jae 0x11651f2c */
  if (!C.cf) goto L_11651f2c;
  /* 11651f01 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651f04 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11651f09 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651f0c mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11651f10 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651f13 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11651f17 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651f1a mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11651f1e mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651f21 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11651f25 mov eax, 1 */
  EAX = (0x1u);
  /* 11651f2a jmp 0x11651f52 */
  goto L_11651f52;
L_11651f2c:;
  /* 11651f2c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651f2f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651f32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11651f35 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651f37 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11651f3a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651f3d mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 11651f40 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651f43 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 11651f47 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11651f4a mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_11651f4f:;
  /* 11651f4f mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_11651f52:;
  /* 11651f52 mov esp, ebp */
  ESP = (EBP);
  /* 11651f54 pop ebp */
  EBP = (pop32());
  /* 11651f55 ret  */
  ESPCHK(0x11651a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f60 @ 0x11651f60 (130 bytes, 43 insns) */
void f_11651f60(void) {
  FTRACE(0x11651f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11651f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11651f61 mov ebp, esp */
  EBP = (ESP);
  /* 11651f63 push ecx */
  push32((uint32_t)(ECX));
  /* 11651f64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11651f67 cmp eax, dword ptr [0x11677abc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11677abc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11651f6d jae 0x11651f91 */
  if (!C.cf) goto L_11651f91;
  /* 11651f6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11651f72 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11651f75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11651f78 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11651f7b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11651f7e mov eax, dword ptr [ecx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11677980)));
  /* 11651f85 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11651f8a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11651f8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11651f8f jne 0x11651fac */
  if (!C.zf) goto L_11651fac;
L_11651f91:;
  /* 11651f91 call 0x1164fc30 */
  push32(0x11651f96u); f_1164fc30();
  /* 11651f96 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11651f9c call 0x1164fc40 */
  push32(0x11651fa1u); f_1164fc40();
  /* 11651fa1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11651fa7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11651faa jmp 0x11651fde */
  goto L_11651fde;
L_11651fac:;
  /* 11651fac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11651faf push edx */
  push32((uint32_t)(EDX));
  /* 11651fb0 call 0x116557c0 */
  push32(0x11651fb5u); f_116557c0();
  /* 11651fb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651fb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11651fbb push eax */
  push32((uint32_t)(EAX));
  /* 11651fbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11651fbf push ecx */
  push32((uint32_t)(ECX));
  /* 11651fc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11651fc3 push edx */
  push32((uint32_t)(EDX));
  /* 11651fc4 call 0x11651ff0 */
  push32(0x11651fc9u); f_11651ff0();
  /* 11651fc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651fcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11651fcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11651fd2 push eax */
  push32((uint32_t)(EAX));
  /* 11651fd3 call 0x11655850 */
  push32(0x11651fd8u); f_11655850();
  /* 11651fd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11651fdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11651fde:;
  /* 11651fde mov esp, ebp */
  ESP = (EBP);
  /* 11651fe0 pop ebp */
  EBP = (pop32());
  /* 11651fe1 ret  */
  ESPCHK(0x11651f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ff0 @ 0x11651ff0 (178 bytes, 56 insns) */
void f_11651ff0(void) {
  FTRACE(0x11651ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11651ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11651ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11651ff3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11651ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11651ff9 push eax */
  push32((uint32_t)(EAX));
  /* 11651ffa call 0x11655640 */
  push32(0x11651fffu); f_11655640();
  /* 11651fff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652002 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11652005 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652009 jne 0x1165201e */
  if (!C.zf) goto L_1165201e;
  /* 1165200b call 0x1164fc30 */
  push32(0x11652010u); f_1164fc30();
  /* 11652010 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11652016 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11652019 jmp 0x1165209e */
  goto L_1165209e;
L_1165201e:;
  /* 1165201e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11652021 push ecx */
  push32((uint32_t)(ECX));
  /* 11652022 push 0 */
  push32((uint32_t)(0x0u));
  /* 11652024 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11652027 push edx */
  push32((uint32_t)(EDX));
  /* 11652028 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1165202b push eax */
  push32((uint32_t)(EAX));
  /* 1165202c call dword ptr [0x116782e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782e4))), 0x11652032u);
  /* 11652032 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11652035 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652039 jne 0x11652046 */
  if (!C.zf) goto L_11652046;
  /* 1165203b call dword ptr [0x11678390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678390))), 0x11652041u);
  /* 11652041 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11652044 jmp 0x1165204d */
  goto L_1165204d;
L_11652046:;
  /* 11652046 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1165204d:;
  /* 1165204d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652051 je 0x11652064 */
  if (C.zf) goto L_11652064;
  /* 11652053 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652056 push ecx */
  push32((uint32_t)(ECX));
  /* 11652057 call 0x1164fb90 */
  push32(0x1165205cu); f_1164fb90();
  /* 1165205c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165205f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11652062 jmp 0x1165209e */
  goto L_1165209e;
L_11652064:;
  /* 11652064 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652067 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1165206a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165206d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11652070 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11652073 mov ecx, dword ptr [edx*4 + 0x11677980] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11677980)));
  /* 1165207a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1165207e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11652081 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652084 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11652087 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165208a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1165208d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11652090 mov eax, dword ptr [eax*4 + 0x11677980] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11677980)));
  /* 11652097 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1165209b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1165209e:;
  /* 1165209e mov esp, ebp */
  ESP = (EBP);
  /* 116520a0 pop ebp */
  EBP = (pop32());
  /* 116520a1 ret  */
  ESPCHK(0x11651ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100120b0 @ 0x116520b0 (130 bytes, 43 insns) */
void f_116520b0(void) {
  FTRACE(0x116520b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116520b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116520b1 mov ebp, esp */
  EBP = (ESP);
  /* 116520b3 push ecx */
  push32((uint32_t)(ECX));
  /* 116520b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116520b7 cmp eax, dword ptr [0x11677abc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11677abc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116520bd jae 0x116520e1 */
  if (!C.cf) goto L_116520e1;
  /* 116520bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116520c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116520c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116520c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116520cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116520ce mov eax, dword ptr [ecx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11677980)));
  /* 116520d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116520da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116520dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116520df jne 0x116520fc */
  if (!C.zf) goto L_116520fc;
L_116520e1:;
  /* 116520e1 call 0x1164fc30 */
  push32(0x116520e6u); f_1164fc30();
  /* 116520e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 116520ec call 0x1164fc40 */
  push32(0x116520f1u); f_1164fc40();
  /* 116520f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116520f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116520fa jmp 0x1165212e */
  goto L_1165212e;
L_116520fc:;
  /* 116520fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116520ff push edx */
  push32((uint32_t)(EDX));
  /* 11652100 call 0x116557c0 */
  push32(0x11652105u); f_116557c0();
  /* 11652105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652108 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165210b push eax */
  push32((uint32_t)(EAX));
  /* 1165210c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165210f push ecx */
  push32((uint32_t)(ECX));
  /* 11652110 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652113 push edx */
  push32((uint32_t)(EDX));
  /* 11652114 call 0x11652140 */
  push32(0x11652119u); f_11652140();
  /* 11652119 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165211c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1165211f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652122 push eax */
  push32((uint32_t)(EAX));
  /* 11652123 call 0x11655850 */
  push32(0x11652128u); f_11655850();
  /* 11652128 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165212b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1165212e:;
  /* 1165212e mov esp, ebp */
  ESP = (EBP);
  /* 11652130 pop ebp */
  EBP = (pop32());
  /* 11652131 ret  */
  ESPCHK(0x116520b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012140 @ 0x11652140 (627 bytes, 182 insns) */
void f_11652140(void) {
  FTRACE(0x11652140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11652140 push ebp */
  push32((uint32_t)(EBP));
  /* 11652141 mov ebp, esp */
  EBP = (ESP);
  /* 11652143 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11652149 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11652150 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11652153 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11652159 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165215d jne 0x11652166 */
  if (!C.zf) goto L_11652166;
  /* 1165215f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11652161 jmp 0x116523af */
  goto L_116523af;
L_11652166:;
  /* 11652166 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652169 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1165216c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165216f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11652172 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11652175 mov eax, dword ptr [ecx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11677980)));
  /* 1165217c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11652181 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11652184 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11652186 je 0x11652198 */
  if (C.zf) goto L_11652198;
  /* 11652188 push 2 */
  push32((uint32_t)(0x2u));
  /* 1165218a push 0 */
  push32((uint32_t)(0x0u));
  /* 1165218c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165218f push edx */
  push32((uint32_t)(EDX));
  /* 11652190 call 0x11651ff0 */
  push32(0x11652195u); f_11651ff0();
  /* 11652195 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11652198:;
  /* 11652198 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165219b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1165219e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116521a1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 116521a4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116521a7 mov edx, dword ptr [eax*4 + 0x11677980] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11677980)));
  /* 116521ae movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 116521b3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 116521b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116521ba je 0x116522cc */
  if (C.zf) goto L_116522cc;
  /* 116521c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116521c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116521c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_116521cd:;
  /* 116521cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116521d0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116521d3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116521d6 jae 0x116522ca */
  if (!C.cf) goto L_116522ca;
  /* 116521dc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 116521e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116521e5:;
  /* 116521e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116521e8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 116521ee sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116521f0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116521f6 jge 0x11652257 */
  if ((C.sf==C.of)) goto L_11652257;
  /* 116521f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116521fb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116521fe cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652201 jae 0x11652257 */
  if (!C.cf) goto L_11652257;
  /* 11652203 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652206 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11652208 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1165220e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652211 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652214 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11652217 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1165221e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652221 jne 0x11652241 */
  if (!C.zf) goto L_11652241;
  /* 11652223 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11652229 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165222c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11652232 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11652235 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11652238 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165223b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165223e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11652241:;
  /* 11652241 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11652244 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1165224a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1165224c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165224f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652252 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11652255 jmp 0x116521e5 */
  goto L_116521e5;
L_11652257:;
  /* 11652257 push 0 */
  push32((uint32_t)(0x0u));
  /* 11652259 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1165225f push edx */
  push32((uint32_t)(EDX));
  /* 11652260 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11652263 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11652269 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165226b push eax */
  push32((uint32_t)(EAX));
  /* 1165226c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11652272 push edx */
  push32((uint32_t)(EDX));
  /* 11652273 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652276 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11652279 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165227c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1165227f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11652282 mov edx, dword ptr [eax*4 + 0x11677980] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11677980)));
  /* 11652289 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1165228c push eax */
  push32((uint32_t)(EAX));
  /* 1165228d call dword ptr [0x1167834c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167834c))), 0x11652293u);
  /* 11652293 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11652295 je 0x116522ba */
  if (C.zf) goto L_116522ba;
  /* 11652297 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1165229a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116522a0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116522a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116522a6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 116522ac sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116522ae cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116522b4 jge 0x116522b8 */
  if ((C.sf==C.of)) goto L_116522b8;
  /* 116522b6 jmp 0x116522ca */
  goto L_116522ca;
L_116522b8:;
  /* 116522b8 jmp 0x116522c5 */
  goto L_116522c5;
L_116522ba:;
  /* 116522ba call dword ptr [0x11678390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678390))), 0x116522c0u);
  /* 116522c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116522c3 jmp 0x116522ca */
  goto L_116522ca;
L_116522c5:;
  /* 116522c5 jmp 0x116521cd */
  goto L_116521cd;
L_116522ca:;
  /* 116522ca jmp 0x1165231c */
  goto L_1165231c;
L_116522cc:;
  /* 116522cc push 0 */
  push32((uint32_t)(0x0u));
  /* 116522ce lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 116522d4 push ecx */
  push32((uint32_t)(ECX));
  /* 116522d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116522d8 push edx */
  push32((uint32_t)(EDX));
  /* 116522d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116522dc push eax */
  push32((uint32_t)(EAX));
  /* 116522dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116522e0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116522e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116522e6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116522e9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116522ec mov eax, dword ptr [ecx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11677980)));
  /* 116522f3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 116522f6 push ecx */
  push32((uint32_t)(ECX));
  /* 116522f7 call dword ptr [0x1167834c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1167834c))), 0x116522fdu);
  /* 116522fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116522ff je 0x11652313 */
  if (C.zf) goto L_11652313;
  /* 11652301 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11652308 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1165230e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11652311 jmp 0x1165231c */
  goto L_1165231c;
L_11652313:;
  /* 11652313 call dword ptr [0x11678390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678390))), 0x11652319u);
  /* 11652319 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1165231c:;
  /* 1165231c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652320 jne 0x116523a6 */
  if (!C.zf) goto L_116523a6;
  /* 11652326 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165232a je 0x1165235a */
  if (C.zf) goto L_1165235a;
  /* 1165232c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652330 jne 0x11652349 */
  if (!C.zf) goto L_11652349;
  /* 11652332 call 0x1164fc30 */
  push32(0x11652337u); f_1164fc30();
  /* 11652337 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1165233d call 0x1164fc40 */
  push32(0x11652342u); f_1164fc40();
  /* 11652342 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652345 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11652347 jmp 0x11652355 */
  goto L_11652355;
L_11652349:;
  /* 11652349 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1165234c push edx */
  push32((uint32_t)(EDX));
  /* 1165234d call 0x1164fb90 */
  push32(0x11652352u); f_1164fb90();
  /* 11652352 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11652355:;
  /* 11652355 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11652358 jmp 0x116523af */
  goto L_116523af;
L_1165235a:;
  /* 1165235a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165235d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11652360 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652363 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11652366 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11652369 mov edx, dword ptr [eax*4 + 0x11677980] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11677980)));
  /* 11652370 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11652375 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11652378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165237a je 0x1165238b */
  if (C.zf) goto L_1165238b;
  /* 1165237c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165237f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11652382 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652385 jne 0x1165238b */
  if (!C.zf) goto L_1165238b;
  /* 11652387 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11652389 jmp 0x116523af */
  goto L_116523af;
L_1165238b:;
  /* 1165238b call 0x1164fc30 */
  push32(0x11652390u); f_1164fc30();
  /* 11652390 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11652396 call 0x1164fc40 */
  push32(0x1165239bu); f_1164fc40();
  /* 1165239b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116523a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116523a4 jmp 0x116523af */
  goto L_116523af;
L_116523a6:;
  /* 116523a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116523a9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_116523af:;
  /* 116523af mov esp, ebp */
  ESP = (EBP);
  /* 116523b1 pop ebp */
  EBP = (pop32());
  /* 116523b2 ret  */
  ESPCHK(0x11652140u, _esp0);
  ESP += 4; return;
}

/* FUN_100123c0 @ 0x116523c0 (199 bytes, 68 insns) */
void f_116523c0(void) {
  FTRACE(0x116523c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116523c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116523c1 mov ebp, esp */
  EBP = (ESP);
  /* 116523c3 push ecx */
  push32((uint32_t)(ECX));
  /* 116523c4 push ebx */
  push32((uint32_t)(EBX));
  /* 116523c5 push esi */
  push32((uint32_t)(ESI));
  /* 116523c6 push edi */
  push32((uint32_t)(EDI));
L_116523c7:;
  /* 116523c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116523cb jne 0x116523eb */
  if (!C.zf) goto L_116523eb;
  /* 116523cd push 0x1167107c */
  push32((uint32_t)(0x1167107cu));
  /* 116523d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116523d4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 116523d6 push 0x116711c8 */
  push32((uint32_t)(0x116711c8u));
  /* 116523db push 2 */
  push32((uint32_t)(0x2u));
  /* 116523dd call 0x11645180 */
  push32(0x116523e2u); f_11645180();
  /* 116523e2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116523e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116523e8 jne 0x116523eb */
  if (!C.zf) goto L_116523eb;
  /* 116523ea int3  */
  x86_unimpl("int3 @ 0x116523ea");
L_116523eb:;
  /* 116523eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116523ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116523ef jne 0x116523c7 */
  if (!C.zf) goto L_116523c7;
  /* 116523f1 mov ecx, dword ptr [0x116761d0] */
  ECX = (r32((uint32_t)(0x116761d0)));
  /* 116523f7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116523fa mov dword ptr [0x116761d0], ecx */
  w32((uint32_t)(0x116761d0), (ECX));
  /* 11652400 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652403 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11652406 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11652408 push 0x116711c8 */
  push32((uint32_t)(0x116711c8u));
  /* 1165240d push 2 */
  push32((uint32_t)(0x2u));
  /* 1165240f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11652414 call 0x116468c0 */
  push32(0x11652419u); f_116468c0();
  /* 11652419 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165241c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165241f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11652422 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652425 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652429 je 0x11652446 */
  if (C.zf) goto L_11652446;
  /* 1165242b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165242e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11652431 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11652434 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652437 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1165243a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165243d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11652444 jmp 0x1165246b */
  goto L_1165246b;
L_11652446:;
  /* 11652446 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652449 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1165244c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1165244f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652452 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11652455 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652458 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165245b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165245e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11652461 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652464 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1165246b:;
  /* 1165246b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165246e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652471 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11652474 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11652476 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652479 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11652480 pop edi */
  EDI = (pop32());
  /* 11652481 pop esi */
  ESI = (pop32());
  /* 11652482 pop ebx */
  EBX = (pop32());
  /* 11652483 mov esp, ebp */
  ESP = (EBP);
  /* 11652485 pop ebp */
  EBP = (pop32());
  /* 11652486 ret  */
  ESPCHK(0x116523c0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11652490 (50 bytes, 17 insns) */
void f_11652490(void) {
  FTRACE(0x11652490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11652490 push ebp */
  push32((uint32_t)(EBP));
  /* 11652491 mov ebp, esp */
  EBP = (ESP);
  /* 11652493 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652496 cmp eax, dword ptr [0x11677abc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11677abc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165249c jb 0x116524a2 */
  if (C.cf) goto L_116524a2;
  /* 1165249e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116524a0 jmp 0x116524c0 */
  goto L_116524c0;
L_116524a2:;
  /* 116524a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116524a5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116524a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116524ab and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116524ae imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116524b1 mov eax, dword ptr [ecx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11677980)));
  /* 116524b8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 116524bd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_116524c0:;
  /* 116524c0 pop ebp */
  EBP = (pop32());
  /* 116524c1 ret  */
  ESPCHK(0x11652490u, _esp0);
  ESP += 4; return;
}

/* FUN_100124d0 @ 0x116524d0 (300 bytes, 80 insns) */
void f_116524d0(void) {
  FTRACE(0x116524d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116524d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116524d1 mov ebp, esp */
  EBP = (ESP);
  /* 116524d3 push ecx */
  push32((uint32_t)(ECX));
  /* 116524d4 cmp dword ptr [0x11677680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116524db jne 0x116524e9 */
  if (!C.zf) goto L_116524e9;
  /* 116524dd mov dword ptr [0x11677680], 0x200 */
  w32((uint32_t)(0x11677680), (0x200u));
  /* 116524e7 jmp 0x116524fc */
  goto L_116524fc;
L_116524e9:;
  /* 116524e9 cmp dword ptr [0x11677680], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11677680))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116524f0 jge 0x116524fc */
  if ((C.sf==C.of)) goto L_116524fc;
  /* 116524f2 mov dword ptr [0x11677680], 0x14 */
  w32((uint32_t)(0x11677680), (0x14u));
L_116524fc:;
  /* 116524fc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11652501 push 0x116711d4 */
  push32((uint32_t)(0x116711d4u));
  /* 11652506 push 2 */
  push32((uint32_t)(0x2u));
  /* 11652508 push 4 */
  push32((uint32_t)(0x4u));
  /* 1165250a mov eax, dword ptr [0x11677680] */
  EAX = (r32((uint32_t)(0x11677680)));
  /* 1165250f push eax */
  push32((uint32_t)(EAX));
  /* 11652510 call 0x11646cd0 */
  push32(0x11652515u); f_11646cd0();
  /* 11652515 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652518 mov dword ptr [0x11676324], eax */
  w32((uint32_t)(0x11676324), (EAX));
  /* 1165251d cmp dword ptr [0x11676324], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676324))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652524 jne 0x11652565 */
  if (!C.zf) goto L_11652565;
  /* 11652526 mov dword ptr [0x11677680], 0x14 */
  w32((uint32_t)(0x11677680), (0x14u));
  /* 11652530 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11652535 push 0x116711d4 */
  push32((uint32_t)(0x116711d4u));
  /* 1165253a push 2 */
  push32((uint32_t)(0x2u));
  /* 1165253c push 4 */
  push32((uint32_t)(0x4u));
  /* 1165253e mov ecx, dword ptr [0x11677680] */
  ECX = (r32((uint32_t)(0x11677680)));
  /* 11652544 push ecx */
  push32((uint32_t)(ECX));
  /* 11652545 call 0x11646cd0 */
  push32(0x1165254au); f_11646cd0();
  /* 1165254a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165254d mov dword ptr [0x11676324], eax */
  w32((uint32_t)(0x11676324), (EAX));
  /* 11652552 cmp dword ptr [0x11676324], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676324))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652559 jne 0x11652565 */
  if (!C.zf) goto L_11652565;
  /* 1165255b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1165255d call 0x11645030 */
  push32(0x11652562u); f_11645030();
  /* 11652562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11652565:;
  /* 11652565 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1165256c jmp 0x11652577 */
  goto L_11652577;
L_1165256e:;
  /* 1165256e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652571 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652574 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11652577:;
  /* 11652577 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165257b jge 0x11652596 */
  if ((C.sf==C.of)) goto L_11652596;
  /* 1165257d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652580 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11652583 add eax, 0x116743f8 */
  { uint32_t _a=(EAX),_b=(0x116743f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652588 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165258b mov edx, dword ptr [0x11676324] */
  EDX = (r32((uint32_t)(0x11676324)));
  /* 11652591 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11652594 jmp 0x1165256e */
  goto L_1165256e;
L_11652596:;
  /* 11652596 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1165259d jmp 0x116525a8 */
  goto L_116525a8;
L_1165259f:;
  /* 1165259f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116525a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116525a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116525a8:;
  /* 116525a8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116525ac jge 0x116525f8 */
  if ((C.sf==C.of)) goto L_116525f8;
  /* 116525ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116525b1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116525b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116525b7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116525ba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116525bd mov eax, dword ptr [ecx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11677980)));
  /* 116525c4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116525c8 je 0x116525e6 */
  if (C.zf) goto L_116525e6;
  /* 116525ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116525cd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116525d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116525d3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116525d6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116525d9 mov eax, dword ptr [ecx*4 + 0x11677980] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11677980)));
  /* 116525e0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116525e4 jne 0x116525f6 */
  if (!C.zf) goto L_116525f6;
L_116525e6:;
  /* 116525e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116525e9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 116525ec mov dword ptr [ecx + 0x11674408], 0xffffffff */
  w32((uint32_t)(ECX + 0x11674408), (0xffffffffu));
L_116525f6:;
  /* 116525f6 jmp 0x1165259f */
  goto L_1165259f;
L_116525f8:;
  /* 116525f8 mov esp, ebp */
  ESP = (EBP);
  /* 116525fa pop ebp */
  EBP = (pop32());
  /* 116525fb ret  */
  ESPCHK(0x116524d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012600 @ 0x11652600 (26 bytes, 9 insns) */
void f_11652600(void) {
  FTRACE(0x11652600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11652600 push ebp */
  push32((uint32_t)(EBP));
  /* 11652601 mov ebp, esp */
  EBP = (ESP);
  /* 11652603 call 0x11655ac0 */
  push32(0x11652608u); f_11655ac0();
  /* 11652608 movsx eax, byte ptr [0x11675fdc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11675fdc))));
  /* 1165260f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11652611 je 0x11652618 */
  if (C.zf) goto L_11652618;
  /* 11652613 call 0x11655880 */
  push32(0x11652618u); f_11655880();
L_11652618:;
  /* 11652618 pop ebp */
  EBP = (pop32());
  /* 11652619 ret  */
  ESPCHK(0x11652600u, _esp0);
  ESP += 4; return;
}

/* FUN_10012620 @ 0x11652620 (61 bytes, 20 insns) */
void f_11652620(void) {
  FTRACE(0x11652620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11652620 push ebp */
  push32((uint32_t)(EBP));
  /* 11652621 mov ebp, esp */
  EBP = (ESP);
  /* 11652623 cmp dword ptr [ebp + 8], 0x116743f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x116743f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165262a jb 0x1165264e */
  if (C.cf) goto L_1165264e;
  /* 1165262c cmp dword ptr [ebp + 8], 0x11674658 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11674658u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652633 ja 0x1165264e */
  if ((!C.cf&&!C.zf)) goto L_1165264e;
  /* 11652635 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652638 sub eax, 0x116743f8 */
  { uint32_t _a=(EAX),_b=(0x116743f8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165263d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11652640 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652643 push eax */
  push32((uint32_t)(EAX));
  /* 11652644 call 0x1164b880 */
  push32(0x11652649u); f_1164b880();
  /* 11652649 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165264c jmp 0x1165265b */
  goto L_1165265b;
L_1165264e:;
  /* 1165264e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652651 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652654 push ecx */
  push32((uint32_t)(ECX));
  /* 11652655 call dword ptr [0x11678324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678324))), 0x1165265bu);
L_1165265b:;
  /* 1165265b pop ebp */
  EBP = (pop32());
  /* 1165265c ret  */
  ESPCHK(0x11652620u, _esp0);
  ESP += 4; return;
}

/* FUN_10012660 @ 0x11652660 (41 bytes, 16 insns) */
void f_11652660(void) {
  FTRACE(0x11652660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11652660 push ebp */
  push32((uint32_t)(EBP));
  /* 11652661 mov ebp, esp */
  EBP = (ESP);
  /* 11652663 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652667 jge 0x1165267a */
  if ((C.sf==C.of)) goto L_1165267a;
  /* 11652669 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165266c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165266f push eax */
  push32((uint32_t)(EAX));
  /* 11652670 call 0x1164b880 */
  push32(0x11652675u); f_1164b880();
  /* 11652675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652678 jmp 0x11652687 */
  goto L_11652687;
L_1165267a:;
  /* 1165267a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165267d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652680 push ecx */
  push32((uint32_t)(ECX));
  /* 11652681 call dword ptr [0x11678324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678324))), 0x11652687u);
L_11652687:;
  /* 11652687 pop ebp */
  EBP = (pop32());
  /* 11652688 ret  */
  ESPCHK(0x11652660u, _esp0);
  ESP += 4; return;
}

/* FUN_10012690 @ 0x11652690 (61 bytes, 20 insns) */
void f_11652690(void) {
  FTRACE(0x11652690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11652690 push ebp */
  push32((uint32_t)(EBP));
  /* 11652691 mov ebp, esp */
  EBP = (ESP);
  /* 11652693 cmp dword ptr [ebp + 8], 0x116743f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x116743f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165269a jb 0x116526be */
  if (C.cf) goto L_116526be;
  /* 1165269c cmp dword ptr [ebp + 8], 0x11674658 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11674658u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116526a3 ja 0x116526be */
  if ((!C.cf&&!C.zf)) goto L_116526be;
  /* 116526a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116526a8 sub eax, 0x116743f8 */
  { uint32_t _a=(EAX),_b=(0x116743f8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116526ad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116526b0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116526b3 push eax */
  push32((uint32_t)(EAX));
  /* 116526b4 call 0x1164b920 */
  push32(0x116526b9u); f_1164b920();
  /* 116526b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116526bc jmp 0x116526cb */
  goto L_116526cb;
L_116526be:;
  /* 116526be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116526c1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116526c4 push ecx */
  push32((uint32_t)(ECX));
  /* 116526c5 call dword ptr [0x11678320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678320))), 0x116526cbu);
L_116526cb:;
  /* 116526cb pop ebp */
  EBP = (pop32());
  /* 116526cc ret  */
  ESPCHK(0x11652690u, _esp0);
  ESP += 4; return;
}

/* FUN_100126d0 @ 0x116526d0 (41 bytes, 16 insns) */
void f_116526d0(void) {
  FTRACE(0x116526d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116526d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116526d1 mov ebp, esp */
  EBP = (ESP);
  /* 116526d3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116526d7 jge 0x116526ea */
  if ((C.sf==C.of)) goto L_116526ea;
  /* 116526d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116526dc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116526df push eax */
  push32((uint32_t)(EAX));
  /* 116526e0 call 0x1164b920 */
  push32(0x116526e5u); f_1164b920();
  /* 116526e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116526e8 jmp 0x116526f7 */
  goto L_116526f7;
L_116526ea:;
  /* 116526ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116526ed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116526f0 push ecx */
  push32((uint32_t)(ECX));
  /* 116526f1 call dword ptr [0x11678320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678320))), 0x116526f7u);
L_116526f7:;
  /* 116526f7 pop ebp */
  EBP = (pop32());
  /* 116526f8 ret  */
  ESPCHK(0x116526d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012700 @ 0x11652700 (119 bytes, 34 insns) */
void f_11652700(void) {
  FTRACE(0x11652700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11652700 push ebp */
  push32((uint32_t)(EBP));
  /* 11652701 mov ebp, esp */
  EBP = (ESP);
  /* 11652703 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11652706 push 0x11677694 */
  push32((uint32_t)(0x11677694u));
  /* 1165270b call dword ptr [0x11678360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678360))), 0x11652711u);
  /* 11652711 cmp dword ptr [0x11677684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11677684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652718 je 0x11652738 */
  if (C.zf) goto L_11652738;
  /* 1165271a push 0x11677694 */
  push32((uint32_t)(0x11677694u));
  /* 1165271f call dword ptr [0x11678350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678350))), 0x11652725u);
  /* 11652725 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11652727 call 0x1164b880 */
  push32(0x1165272cu); f_1164b880();
  /* 1165272c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165272f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11652736 jmp 0x1165273f */
  goto L_1165273f;
L_11652738:;
  /* 11652738 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1165273f:;
  /* 1165273f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11652743 push eax */
  push32((uint32_t)(EAX));
  /* 11652744 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652747 push ecx */
  push32((uint32_t)(ECX));
  /* 11652748 call 0x11652780 */
  push32(0x1165274du); f_11652780();
  /* 1165274d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652750 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11652753 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652757 je 0x11652765 */
  if (C.zf) goto L_11652765;
  /* 11652759 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1165275b call 0x1164b920 */
  push32(0x11652760u); f_1164b920();
  /* 11652760 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652763 jmp 0x11652770 */
  goto L_11652770;
L_11652765:;
  /* 11652765 push 0x11677694 */
  push32((uint32_t)(0x11677694u));
  /* 1165276a call dword ptr [0x11678350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678350))), 0x11652770u);
L_11652770:;
  /* 11652770 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11652773 mov esp, ebp */
  ESP = (EBP);
  /* 11652775 pop ebp */
  EBP = (pop32());
  /* 11652776 ret  */
  ESPCHK(0x11652700u, _esp0);
  ESP += 4; return;
}

/* FUN_10012780 @ 0x11652780 (160 bytes, 50 insns) */
void f_11652780(void) {
  FTRACE(0x11652780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11652780 push ebp */
  push32((uint32_t)(EBP));
  /* 11652781 mov ebp, esp */
  EBP = (ESP);
  /* 11652783 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11652786 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165278a jne 0x11652793 */
  if (!C.zf) goto L_11652793;
  /* 1165278c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165278e jmp 0x1165281c */
  goto L_1165281c;
L_11652793:;
  /* 11652793 cmp dword ptr [0x116761b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116761b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165279a jne 0x116527ca */
  if (!C.zf) goto L_116527ca;
  /* 1165279c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1165279f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116527a4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116527a9 jle 0x116527bb */
  if ((C.zf||C.sf!=C.of)) goto L_116527bb;
  /* 116527ab call 0x1164fc30 */
  push32(0x116527b0u); f_1164fc30();
  /* 116527b0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 116527b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116527b9 jmp 0x1165281c */
  goto L_1165281c;
L_116527bb:;
  /* 116527bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116527be mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 116527c1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 116527c3 mov eax, 1 */
  EAX = (0x1u);
  /* 116527c8 jmp 0x1165281c */
  goto L_1165281c;
L_116527ca:;
  /* 116527ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116527d1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 116527d4 push eax */
  push32((uint32_t)(EAX));
  /* 116527d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116527d7 mov ecx, dword ptr [0x11673c90] */
  ECX = (r32((uint32_t)(0x11673c90)));
  /* 116527dd push ecx */
  push32((uint32_t)(ECX));
  /* 116527de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116527e1 push edx */
  push32((uint32_t)(EDX));
  /* 116527e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 116527e4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 116527e7 push eax */
  push32((uint32_t)(EAX));
  /* 116527e8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 116527ed mov ecx, dword ptr [0x116761c4] */
  ECX = (r32((uint32_t)(0x116761c4)));
  /* 116527f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116527f4 call dword ptr [0x116783bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116783bc))), 0x116527fau);
  /* 116527fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116527fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652801 je 0x11652809 */
  if (C.zf) goto L_11652809;
  /* 11652803 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652807 je 0x11652819 */
  if (C.zf) goto L_11652819;
L_11652809:;
  /* 11652809 call 0x1164fc30 */
  push32(0x1165280eu); f_1164fc30();
  /* 1165280e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11652814 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11652817 jmp 0x1165281c */
  goto L_1165281c;
L_11652819:;
  /* 11652819 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1165281c:;
  /* 1165281c mov esp, ebp */
  ESP = (EBP);
  /* 1165281e pop ebp */
  EBP = (pop32());
  /* 1165281f ret  */
  ESPCHK(0x11652780u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11652820 (32 bytes, 18 insns) */
void f_11652820(void) {
  FTRACE(0x11652820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11652820 push ebp */
  push32((uint32_t)(EBP));
  /* 11652821 mov ebp, esp */
  EBP = (ESP);
  /* 11652823 push ebx */
  push32((uint32_t)(EBX));
  /* 11652824 push esi */
  push32((uint32_t)(ESI));
  /* 11652825 push edi */
  push32((uint32_t)(EDI));
  /* 11652826 push ebp */
  push32((uint32_t)(EBP));
  /* 11652827 push 0 */
  push32((uint32_t)(0x0u));
  /* 11652829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1165282b push 0x11652838 */
  push32((uint32_t)(0x11652838u));
  /* 11652830 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11652833 call 0x11659848 */
  push32(0x11652838u); f_11659848();
  /* 11652838 pop ebp */
  EBP = (pop32());
  /* 11652839 pop edi */
  EDI = (pop32());
  /* 1165283a pop esi */
  ESI = (pop32());
  /* 1165283b pop ebx */
  EBX = (pop32());
  /* 1165283c mov esp, ebp */
  ESP = (EBP);
  /* 1165283e pop ebp */
  EBP = (pop32());
  /* 1165283f ret  */
  ESPCHK(0x11652820u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11652862 (104 bytes, 33 insns) */
void f_11652862(void) {
  FTRACE(0x11652862u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11652862 push ebx */
  push32((uint32_t)(EBX));
  /* 11652863 push esi */
  push32((uint32_t)(ESI));
  /* 11652864 push edi */
  push32((uint32_t)(EDI));
  /* 11652865 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11652869 push eax */
  push32((uint32_t)(EAX));
  /* 1165286a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1165286c push 0x11652840 */
  push32((uint32_t)(0x11652840u));
  /* 11652871 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11652878 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1165287f:;
  /* 1165287f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11652883 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11652886 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11652889 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165288c je 0x116528bc */
  if (C.zf) goto L_116528bc;
  /* 1165288e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652892 je 0x116528bc */
  if (C.zf) goto L_116528bc;
  /* 11652894 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11652897 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1165289a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1165289e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 116528a1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116528a6 jne 0x116528ba */
  if (!C.zf) goto L_116528ba;
  /* 116528a8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 116528ad mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 116528b1 call 0x116528f6 */
  push32(0x116528b6u); f_116528f6();
  /* 116528b6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x116528bau);
L_116528ba:;
  /* 116528ba jmp 0x1165287f */
  goto L_1165287f;
L_116528bc:;
  /* 116528bc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 116528c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116528c6 pop edi */
  EDI = (pop32());
  /* 116528c7 pop esi */
  ESI = (pop32());
  /* 116528c8 pop ebx */
  EBX = (pop32());
  /* 116528c9 ret  */
  ESPCHK(0x11652862u, _esp0);
  ESP += 4; return;
}

/* FUN_100128f6 @ 0x116528f6 (24 bytes, 10 insns) */
void f_116528f6(void) {
  FTRACE(0x116528f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116528f6 push ebx */
  push32((uint32_t)(EBX));
  /* 116528f7 push ecx */
  push32((uint32_t)(ECX));
  /* 116528f8 mov ebx, 0x11674678 */
  EBX = (0x11674678u);
  /* 116528fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652900 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11652903 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11652906 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11652909 pop ecx */
  ECX = (pop32());
  /* 1165290a pop ebx */
  EBX = (pop32());
  /* 1165290b ret 4 */
  ESPCHK(0x116528f6u, _esp0);
  ESP += 8; return;
}

/* FUN_100129d5 @ 0x116529d5 (27 bytes, 11 insns) */
void f_116529d5(void) {
  FTRACE(0x116529d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116529d5 push ebp */
  push32((uint32_t)(EBP));
  /* 116529d6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 116529da mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 116529dc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 116529df push eax */
  push32((uint32_t)(EAX));
  /* 116529e0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 116529e3 push eax */
  push32((uint32_t)(EAX));
  /* 116529e4 call 0x11652862 */
  push32(0x116529e9u); f_11652862();
  /* 116529e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116529ec pop ebp */
  EBP = (pop32());
  /* 116529ed ret 4 */
  ESPCHK(0x116529d5u, _esp0);
  ESP += 8; return;
}

/* ___init_time @ 0x116529f0 (219 bytes, 64 insns) */
void f_116529f0(void) {
  FTRACE(0x116529f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116529f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116529f1 mov ebp, esp */
  EBP = (ESP);
  /* 116529f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116529f4 cmp dword ptr [0x116761c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116761c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116529fb je 0x11652a91 */
  if (C.zf) goto L_11652a91;
  /* 11652a01 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11652a03 push 0x116711dc */
  push32((uint32_t)(0x116711dcu));
  /* 11652a08 push 2 */
  push32((uint32_t)(0x2u));
  /* 11652a0a push 0xac */
  push32((uint32_t)(0xacu));
  /* 11652a0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11652a11 call 0x11646cd0 */
  push32(0x11652a16u); f_11646cd0();
  /* 11652a16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652a19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11652a1c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652a20 jne 0x11652a2c */
  if (!C.zf) goto L_11652a2c;
  /* 11652a22 mov eax, 1 */
  EAX = (0x1u);
  /* 11652a27 jmp 0x11652ac7 */
  goto L_11652ac7;
L_11652a2c:;
  /* 11652a2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652a2f push eax */
  push32((uint32_t)(EAX));
  /* 11652a30 call 0x11652ad0 */
  push32(0x11652a35u); f_11652ad0();
  /* 11652a35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11652a3a je 0x11652a5d */
  if (C.zf) goto L_11652a5d;
  /* 11652a3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652a3f push ecx */
  push32((uint32_t)(ECX));
  /* 11652a40 call 0x11653060 */
  push32(0x11652a45u); f_11653060();
  /* 11652a45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652a48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11652a4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652a4d push edx */
  push32((uint32_t)(EDX));
  /* 11652a4e call 0x11647350 */
  push32(0x11652a53u); f_11647350();
  /* 11652a53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652a56 mov eax, 1 */
  EAX = (0x1u);
  /* 11652a5b jmp 0x11652ac7 */
  goto L_11652ac7;
L_11652a5d:;
  /* 11652a5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652a60 mov dword ptr [0x11674e08], eax */
  w32((uint32_t)(0x11674e08), (EAX));
  /* 11652a65 mov ecx, dword ptr [0x116761d4] */
  ECX = (r32((uint32_t)(0x116761d4)));
  /* 11652a6b push ecx */
  push32((uint32_t)(ECX));
  /* 11652a6c call 0x11653060 */
  push32(0x11652a71u); f_11653060();
  /* 11652a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652a74 push 2 */
  push32((uint32_t)(0x2u));
  /* 11652a76 mov edx, dword ptr [0x116761d4] */
  EDX = (r32((uint32_t)(0x116761d4)));
  /* 11652a7c push edx */
  push32((uint32_t)(EDX));
  /* 11652a7d call 0x11647350 */
  push32(0x11652a82u); f_11647350();
  /* 11652a82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652a85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652a88 mov dword ptr [0x116761d4], eax */
  w32((uint32_t)(0x116761d4), (EAX));
  /* 11652a8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11652a8f jmp 0x11652ac7 */
  goto L_11652ac7;
L_11652a91:;
  /* 11652a91 mov dword ptr [0x11674e08], 0x11674e10 */
  w32((uint32_t)(0x11674e08), (0x11674e10u));
  /* 11652a9b mov ecx, dword ptr [0x116761d4] */
  ECX = (r32((uint32_t)(0x116761d4)));
  /* 11652aa1 push ecx */
  push32((uint32_t)(ECX));
  /* 11652aa2 call 0x11653060 */
  push32(0x11652aa7u); f_11653060();
  /* 11652aa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652aaa push 2 */
  push32((uint32_t)(0x2u));
  /* 11652aac mov edx, dword ptr [0x116761d4] */
  EDX = (r32((uint32_t)(0x116761d4)));
  /* 11652ab2 push edx */
  push32((uint32_t)(EDX));
  /* 11652ab3 call 0x11647350 */
  push32(0x11652ab8u); f_11647350();
  /* 11652ab8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652abb mov dword ptr [0x116761d4], 0 */
  w32((uint32_t)(0x116761d4), (0x0u));
  /* 11652ac5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11652ac7:;
  /* 11652ac7 mov esp, ebp */
  ESP = (EBP);
  /* 11652ac9 pop ebp */
  EBP = (pop32());
  /* 11652aca ret  */
  ESPCHK(0x116529f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ad0 @ 0x11652ad0 (1423 bytes, 533 insns) */
void f_11652ad0(void) {
  FTRACE(0x11652ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11652ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11652ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11652ad3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11652ad6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11652add xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11652adf mov ax, word ptr [0x1167620e] */
  AX = (r16((uint32_t)(0x1167620e)));
  /* 11652ae5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11652ae8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11652aea mov cx, word ptr [0x11676210] */
  CX = (r16((uint32_t)(0x11676210)));
  /* 11652af1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11652af4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11652af8 jne 0x11652b02 */
  if (!C.zf) goto L_11652b02;
  /* 11652afa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11652afd jmp 0x1165305b */
  goto L_1165305b;
L_11652b02:;
  /* 11652b02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652b05 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652b08 push edx */
  push32((uint32_t)(EDX));
  /* 11652b09 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11652b0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652b0e push eax */
  push32((uint32_t)(EAX));
  /* 11652b0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11652b11 call 0x11657080 */
  push32(0x11652b16u); f_11657080();
  /* 11652b16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652b19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652b1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652b1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652b21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652b24 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652b27 push edx */
  push32((uint32_t)(EDX));
  /* 11652b28 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11652b2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652b2d push eax */
  push32((uint32_t)(EAX));
  /* 11652b2e push 1 */
  push32((uint32_t)(0x1u));
  /* 11652b30 call 0x11657080 */
  push32(0x11652b35u); f_11657080();
  /* 11652b35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652b38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652b3b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652b3d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652b40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652b43 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652b46 push edx */
  push32((uint32_t)(EDX));
  /* 11652b47 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11652b49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652b4c push eax */
  push32((uint32_t)(EAX));
  /* 11652b4d push 1 */
  push32((uint32_t)(0x1u));
  /* 11652b4f call 0x11657080 */
  push32(0x11652b54u); f_11657080();
  /* 11652b54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652b57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652b5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652b5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652b5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652b62 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652b65 push edx */
  push32((uint32_t)(EDX));
  /* 11652b66 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11652b68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652b6b push eax */
  push32((uint32_t)(EAX));
  /* 11652b6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11652b6e call 0x11657080 */
  push32(0x11652b73u); f_11657080();
  /* 11652b73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652b76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652b79 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652b7b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652b7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652b81 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652b84 push edx */
  push32((uint32_t)(EDX));
  /* 11652b85 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11652b87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652b8a push eax */
  push32((uint32_t)(EAX));
  /* 11652b8b push 1 */
  push32((uint32_t)(0x1u));
  /* 11652b8d call 0x11657080 */
  push32(0x11652b92u); f_11657080();
  /* 11652b92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652b95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652b98 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652b9a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652b9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652ba0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652ba3 push edx */
  push32((uint32_t)(EDX));
  /* 11652ba4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11652ba6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652ba9 push eax */
  push32((uint32_t)(EAX));
  /* 11652baa push 1 */
  push32((uint32_t)(0x1u));
  /* 11652bac call 0x11657080 */
  push32(0x11652bb1u); f_11657080();
  /* 11652bb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652bb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652bb7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652bb9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652bbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652bbf push edx */
  push32((uint32_t)(EDX));
  /* 11652bc0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11652bc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652bc5 push eax */
  push32((uint32_t)(EAX));
  /* 11652bc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652bc8 call 0x11657080 */
  push32(0x11652bcdu); f_11657080();
  /* 11652bcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652bd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652bd3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652bd5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652bd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652bdb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652bde push edx */
  push32((uint32_t)(EDX));
  /* 11652bdf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11652be1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652be4 push eax */
  push32((uint32_t)(EAX));
  /* 11652be5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652be7 call 0x11657080 */
  push32(0x11652becu); f_11657080();
  /* 11652bec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652bef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652bf2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652bf4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652bf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652bfa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652bfd push edx */
  push32((uint32_t)(EDX));
  /* 11652bfe push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11652c00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652c03 push eax */
  push32((uint32_t)(EAX));
  /* 11652c04 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652c06 call 0x11657080 */
  push32(0x11652c0bu); f_11657080();
  /* 11652c0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652c0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652c11 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652c13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652c16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652c19 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652c1c push edx */
  push32((uint32_t)(EDX));
  /* 11652c1d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11652c1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652c22 push eax */
  push32((uint32_t)(EAX));
  /* 11652c23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652c25 call 0x11657080 */
  push32(0x11652c2au); f_11657080();
  /* 11652c2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652c2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652c30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652c32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652c35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652c38 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652c3b push edx */
  push32((uint32_t)(EDX));
  /* 11652c3c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11652c3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652c41 push eax */
  push32((uint32_t)(EAX));
  /* 11652c42 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652c44 call 0x11657080 */
  push32(0x11652c49u); f_11657080();
  /* 11652c49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652c4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652c4f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652c51 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652c54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652c57 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652c5a push edx */
  push32((uint32_t)(EDX));
  /* 11652c5b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11652c5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652c60 push eax */
  push32((uint32_t)(EAX));
  /* 11652c61 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652c63 call 0x11657080 */
  push32(0x11652c68u); f_11657080();
  /* 11652c68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652c6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652c6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652c70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652c73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652c76 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652c79 push edx */
  push32((uint32_t)(EDX));
  /* 11652c7a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11652c7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652c7f push eax */
  push32((uint32_t)(EAX));
  /* 11652c80 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652c82 call 0x11657080 */
  push32(0x11652c87u); f_11657080();
  /* 11652c87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652c8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652c8d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652c8f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652c92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652c95 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652c98 push edx */
  push32((uint32_t)(EDX));
  /* 11652c99 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11652c9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652c9e push eax */
  push32((uint32_t)(EAX));
  /* 11652c9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11652ca1 call 0x11657080 */
  push32(0x11652ca6u); f_11657080();
  /* 11652ca6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652ca9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652cac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652cae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652cb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652cb4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652cb7 push edx */
  push32((uint32_t)(EDX));
  /* 11652cb8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11652cba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652cbd push eax */
  push32((uint32_t)(EAX));
  /* 11652cbe push 1 */
  push32((uint32_t)(0x1u));
  /* 11652cc0 call 0x11657080 */
  push32(0x11652cc5u); f_11657080();
  /* 11652cc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652cc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652ccb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652ccd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652cd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652cd3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652cd6 push edx */
  push32((uint32_t)(EDX));
  /* 11652cd7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11652cd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652cdc push eax */
  push32((uint32_t)(EAX));
  /* 11652cdd push 1 */
  push32((uint32_t)(0x1u));
  /* 11652cdf call 0x11657080 */
  push32(0x11652ce4u); f_11657080();
  /* 11652ce4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652ce7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652cea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652cec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652cef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652cf2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652cf5 push edx */
  push32((uint32_t)(EDX));
  /* 11652cf6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11652cf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652cfb push eax */
  push32((uint32_t)(EAX));
  /* 11652cfc push 1 */
  push32((uint32_t)(0x1u));
  /* 11652cfe call 0x11657080 */
  push32(0x11652d03u); f_11657080();
  /* 11652d03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652d06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652d09 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652d0b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652d0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652d11 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652d14 push edx */
  push32((uint32_t)(EDX));
  /* 11652d15 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11652d17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652d1a push eax */
  push32((uint32_t)(EAX));
  /* 11652d1b push 1 */
  push32((uint32_t)(0x1u));
  /* 11652d1d call 0x11657080 */
  push32(0x11652d22u); f_11657080();
  /* 11652d22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652d25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652d28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652d2a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652d2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652d30 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652d33 push edx */
  push32((uint32_t)(EDX));
  /* 11652d34 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11652d36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652d39 push eax */
  push32((uint32_t)(EAX));
  /* 11652d3a push 1 */
  push32((uint32_t)(0x1u));
  /* 11652d3c call 0x11657080 */
  push32(0x11652d41u); f_11657080();
  /* 11652d41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652d44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652d47 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652d49 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652d4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652d4f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652d52 push edx */
  push32((uint32_t)(EDX));
  /* 11652d53 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11652d55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652d58 push eax */
  push32((uint32_t)(EAX));
  /* 11652d59 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652d5b call 0x11657080 */
  push32(0x11652d60u); f_11657080();
  /* 11652d60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652d63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652d66 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652d68 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652d6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652d6e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652d71 push edx */
  push32((uint32_t)(EDX));
  /* 11652d72 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11652d74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652d77 push eax */
  push32((uint32_t)(EAX));
  /* 11652d78 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652d7a call 0x11657080 */
  push32(0x11652d7fu); f_11657080();
  /* 11652d7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652d82 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652d85 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652d87 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652d8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652d8d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652d90 push edx */
  push32((uint32_t)(EDX));
  /* 11652d91 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11652d93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652d96 push eax */
  push32((uint32_t)(EAX));
  /* 11652d97 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652d99 call 0x11657080 */
  push32(0x11652d9eu); f_11657080();
  /* 11652d9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652da1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652da4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652da6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652da9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652dac add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652daf push edx */
  push32((uint32_t)(EDX));
  /* 11652db0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11652db2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652db5 push eax */
  push32((uint32_t)(EAX));
  /* 11652db6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652db8 call 0x11657080 */
  push32(0x11652dbdu); f_11657080();
  /* 11652dbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652dc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652dc3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652dc5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652dc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652dcb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652dce push edx */
  push32((uint32_t)(EDX));
  /* 11652dcf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11652dd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652dd4 push eax */
  push32((uint32_t)(EAX));
  /* 11652dd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652dd7 call 0x11657080 */
  push32(0x11652ddcu); f_11657080();
  /* 11652ddc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652ddf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652de2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652de4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652de7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652dea add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652ded push edx */
  push32((uint32_t)(EDX));
  /* 11652dee push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11652df0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652df3 push eax */
  push32((uint32_t)(EAX));
  /* 11652df4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652df6 call 0x11657080 */
  push32(0x11652dfbu); f_11657080();
  /* 11652dfb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652dfe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652e01 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652e03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652e06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652e09 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652e0c push edx */
  push32((uint32_t)(EDX));
  /* 11652e0d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11652e0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652e12 push eax */
  push32((uint32_t)(EAX));
  /* 11652e13 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652e15 call 0x11657080 */
  push32(0x11652e1au); f_11657080();
  /* 11652e1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652e1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652e20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652e22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652e25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652e28 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652e2b push edx */
  push32((uint32_t)(EDX));
  /* 11652e2c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11652e2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652e31 push eax */
  push32((uint32_t)(EAX));
  /* 11652e32 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652e34 call 0x11657080 */
  push32(0x11652e39u); f_11657080();
  /* 11652e39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652e3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652e3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652e41 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652e44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652e47 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652e4a push edx */
  push32((uint32_t)(EDX));
  /* 11652e4b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11652e4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652e50 push eax */
  push32((uint32_t)(EAX));
  /* 11652e51 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652e53 call 0x11657080 */
  push32(0x11652e58u); f_11657080();
  /* 11652e58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652e5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652e5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652e60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652e63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652e66 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652e69 push edx */
  push32((uint32_t)(EDX));
  /* 11652e6a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11652e6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652e6f push eax */
  push32((uint32_t)(EAX));
  /* 11652e70 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652e72 call 0x11657080 */
  push32(0x11652e77u); f_11657080();
  /* 11652e77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652e7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652e7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652e7f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652e82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652e85 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652e88 push edx */
  push32((uint32_t)(EDX));
  /* 11652e89 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11652e8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652e8e push eax */
  push32((uint32_t)(EAX));
  /* 11652e8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11652e91 call 0x11657080 */
  push32(0x11652e96u); f_11657080();
  /* 11652e96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652e99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652e9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652e9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652ea1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652ea4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652ea7 push edx */
  push32((uint32_t)(EDX));
  /* 11652ea8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11652eaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652ead push eax */
  push32((uint32_t)(EAX));
  /* 11652eae push 1 */
  push32((uint32_t)(0x1u));
  /* 11652eb0 call 0x11657080 */
  push32(0x11652eb5u); f_11657080();
  /* 11652eb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652eb8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652ebb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652ebd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652ec0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652ec3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652ec6 push edx */
  push32((uint32_t)(EDX));
  /* 11652ec7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11652ec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652ecc push eax */
  push32((uint32_t)(EAX));
  /* 11652ecd push 1 */
  push32((uint32_t)(0x1u));
  /* 11652ecf call 0x11657080 */
  push32(0x11652ed4u); f_11657080();
  /* 11652ed4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652ed7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652eda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652edc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652edf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652ee2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652ee8 push edx */
  push32((uint32_t)(EDX));
  /* 11652ee9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11652eeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652eee push eax */
  push32((uint32_t)(EAX));
  /* 11652eef push 1 */
  push32((uint32_t)(0x1u));
  /* 11652ef1 call 0x11657080 */
  push32(0x11652ef6u); f_11657080();
  /* 11652ef6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652ef9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652efc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652efe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652f01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652f04 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652f0a push edx */
  push32((uint32_t)(EDX));
  /* 11652f0b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11652f0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652f10 push eax */
  push32((uint32_t)(EAX));
  /* 11652f11 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652f13 call 0x11657080 */
  push32(0x11652f18u); f_11657080();
  /* 11652f18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652f1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652f1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652f20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652f23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652f26 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652f2c push edx */
  push32((uint32_t)(EDX));
  /* 11652f2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11652f2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652f32 push eax */
  push32((uint32_t)(EAX));
  /* 11652f33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652f35 call 0x11657080 */
  push32(0x11652f3au); f_11657080();
  /* 11652f3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652f3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652f40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652f42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652f45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652f48 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652f4e push edx */
  push32((uint32_t)(EDX));
  /* 11652f4f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11652f51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652f54 push eax */
  push32((uint32_t)(EAX));
  /* 11652f55 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652f57 call 0x11657080 */
  push32(0x11652f5cu); f_11657080();
  /* 11652f5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652f5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652f62 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652f64 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652f67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652f6a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652f70 push edx */
  push32((uint32_t)(EDX));
  /* 11652f71 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11652f73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652f76 push eax */
  push32((uint32_t)(EAX));
  /* 11652f77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652f79 call 0x11657080 */
  push32(0x11652f7eu); f_11657080();
  /* 11652f7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652f81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652f84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652f86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652f89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652f8c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652f92 push edx */
  push32((uint32_t)(EDX));
  /* 11652f93 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11652f95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652f98 push eax */
  push32((uint32_t)(EAX));
  /* 11652f99 push 1 */
  push32((uint32_t)(0x1u));
  /* 11652f9b call 0x11657080 */
  push32(0x11652fa0u); f_11657080();
  /* 11652fa0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652fa3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652fa6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652fa8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652fab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652fae add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652fb4 push edx */
  push32((uint32_t)(EDX));
  /* 11652fb5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11652fb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652fba push eax */
  push32((uint32_t)(EAX));
  /* 11652fbb push 1 */
  push32((uint32_t)(0x1u));
  /* 11652fbd call 0x11657080 */
  push32(0x11652fc2u); f_11657080();
  /* 11652fc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652fc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652fc8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652fca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652fcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652fd0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652fd6 push edx */
  push32((uint32_t)(EDX));
  /* 11652fd7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11652fd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11652fdc push eax */
  push32((uint32_t)(EAX));
  /* 11652fdd push 1 */
  push32((uint32_t)(0x1u));
  /* 11652fdf call 0x11657080 */
  push32(0x11652fe4u); f_11657080();
  /* 11652fe4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11652fe7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11652fea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11652fec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11652fef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11652ff2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11652ff8 push edx */
  push32((uint32_t)(EDX));
  /* 11652ff9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11652ffb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11652ffe push eax */
  push32((uint32_t)(EAX));
  /* 11652fff push 1 */
  push32((uint32_t)(0x1u));
  /* 11653001 call 0x11657080 */
  push32(0x11653006u); f_11657080();
  /* 11653006 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653009 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1165300c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1165300e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11653011 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653014 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165301a push edx */
  push32((uint32_t)(EDX));
  /* 1165301b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1165301d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11653020 push eax */
  push32((uint32_t)(EAX));
  /* 11653021 push 1 */
  push32((uint32_t)(0x1u));
  /* 11653023 call 0x11657080 */
  push32(0x11653028u); f_11657080();
  /* 11653028 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165302b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1165302e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11653030 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11653033 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653036 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165303c push edx */
  push32((uint32_t)(EDX));
  /* 1165303d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11653042 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11653045 push eax */
  push32((uint32_t)(EAX));
  /* 11653046 push 1 */
  push32((uint32_t)(0x1u));
  /* 11653048 call 0x11657080 */
  push32(0x1165304du); f_11657080();
  /* 1165304d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653050 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11653053 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11653055 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11653058 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1165305b:;
  /* 1165305b mov esp, ebp */
  ESP = (EBP);
  /* 1165305d pop ebp */
  EBP = (pop32());
  /* 1165305e ret  */
  ESPCHK(0x11652ad0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11653060 (779 bytes, 265 insns) */
void f_11653060(void) {
  FTRACE(0x11653060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11653060 push ebp */
  push32((uint32_t)(EBP));
  /* 11653061 mov ebp, esp */
  EBP = (ESP);
  /* 11653063 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653067 jne 0x1165306e */
  if (!C.zf) goto L_1165306e;
  /* 11653069 jmp 0x11653369 */
  goto L_11653369;
L_1165306e:;
  /* 1165306e push 2 */
  push32((uint32_t)(0x2u));
  /* 11653070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653073 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11653076 push ecx */
  push32((uint32_t)(ECX));
  /* 11653077 call 0x11647350 */
  push32(0x1165307cu); f_11647350();
  /* 1165307c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165307f push 2 */
  push32((uint32_t)(0x2u));
  /* 11653081 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653084 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11653087 push eax */
  push32((uint32_t)(EAX));
  /* 11653088 call 0x11647350 */
  push32(0x1165308du); f_11647350();
  /* 1165308d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653090 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653092 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653095 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11653098 push edx */
  push32((uint32_t)(EDX));
  /* 11653099 call 0x11647350 */
  push32(0x1165309eu); f_11647350();
  /* 1165309e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116530a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 116530a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116530a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116530a9 push ecx */
  push32((uint32_t)(ECX));
  /* 116530aa call 0x11647350 */
  push32(0x116530afu); f_11647350();
  /* 116530af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116530b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116530b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116530b7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 116530ba push eax */
  push32((uint32_t)(EAX));
  /* 116530bb call 0x11647350 */
  push32(0x116530c0u); f_11647350();
  /* 116530c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116530c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116530c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116530c8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 116530cb push edx */
  push32((uint32_t)(EDX));
  /* 116530cc call 0x11647350 */
  push32(0x116530d1u); f_11647350();
  /* 116530d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116530d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 116530d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116530d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116530db push ecx */
  push32((uint32_t)(ECX));
  /* 116530dc call 0x11647350 */
  push32(0x116530e1u); f_11647350();
  /* 116530e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116530e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 116530e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116530e9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 116530ec push eax */
  push32((uint32_t)(EAX));
  /* 116530ed call 0x11647350 */
  push32(0x116530f2u); f_11647350();
  /* 116530f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116530f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116530f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116530fa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 116530fd push edx */
  push32((uint32_t)(EDX));
  /* 116530fe call 0x11647350 */
  push32(0x11653103u); f_11647350();
  /* 11653103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653106 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653108 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165310b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1165310e push ecx */
  push32((uint32_t)(ECX));
  /* 1165310f call 0x11647350 */
  push32(0x11653114u); f_11647350();
  /* 11653114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653117 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653119 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165311c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1165311f push eax */
  push32((uint32_t)(EAX));
  /* 11653120 call 0x11647350 */
  push32(0x11653125u); f_11647350();
  /* 11653125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653128 push 2 */
  push32((uint32_t)(0x2u));
  /* 1165312a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165312d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11653130 push edx */
  push32((uint32_t)(EDX));
  /* 11653131 call 0x11647350 */
  push32(0x11653136u); f_11647350();
  /* 11653136 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653139 push 2 */
  push32((uint32_t)(0x2u));
  /* 1165313b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165313e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11653141 push ecx */
  push32((uint32_t)(ECX));
  /* 11653142 call 0x11647350 */
  push32(0x11653147u); f_11647350();
  /* 11653147 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165314a push 2 */
  push32((uint32_t)(0x2u));
  /* 1165314c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165314f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11653152 push eax */
  push32((uint32_t)(EAX));
  /* 11653153 call 0x11647350 */
  push32(0x11653158u); f_11647350();
  /* 11653158 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165315b push 2 */
  push32((uint32_t)(0x2u));
  /* 1165315d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653160 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11653163 push edx */
  push32((uint32_t)(EDX));
  /* 11653164 call 0x11647350 */
  push32(0x11653169u); f_11647350();
  /* 11653169 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165316c push 2 */
  push32((uint32_t)(0x2u));
  /* 1165316e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653171 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11653174 push ecx */
  push32((uint32_t)(ECX));
  /* 11653175 call 0x11647350 */
  push32(0x1165317au); f_11647350();
  /* 1165317a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165317d push 2 */
  push32((uint32_t)(0x2u));
  /* 1165317f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653182 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11653185 push eax */
  push32((uint32_t)(EAX));
  /* 11653186 call 0x11647350 */
  push32(0x1165318bu); f_11647350();
  /* 1165318b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165318e push 2 */
  push32((uint32_t)(0x2u));
  /* 11653190 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653193 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11653196 push edx */
  push32((uint32_t)(EDX));
  /* 11653197 call 0x11647350 */
  push32(0x1165319cu); f_11647350();
  /* 1165319c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165319f push 2 */
  push32((uint32_t)(0x2u));
  /* 116531a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116531a4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 116531a7 push ecx */
  push32((uint32_t)(ECX));
  /* 116531a8 call 0x11647350 */
  push32(0x116531adu); f_11647350();
  /* 116531ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116531b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116531b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116531b5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 116531b8 push eax */
  push32((uint32_t)(EAX));
  /* 116531b9 call 0x11647350 */
  push32(0x116531beu); f_11647350();
  /* 116531be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116531c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 116531c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116531c6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 116531c9 push edx */
  push32((uint32_t)(EDX));
  /* 116531ca call 0x11647350 */
  push32(0x116531cfu); f_11647350();
  /* 116531cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116531d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116531d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116531d7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 116531da push ecx */
  push32((uint32_t)(ECX));
  /* 116531db call 0x11647350 */
  push32(0x116531e0u); f_11647350();
  /* 116531e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116531e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116531e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116531e8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 116531eb push eax */
  push32((uint32_t)(EAX));
  /* 116531ec call 0x11647350 */
  push32(0x116531f1u); f_11647350();
  /* 116531f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116531f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 116531f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116531f9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 116531fc push edx */
  push32((uint32_t)(EDX));
  /* 116531fd call 0x11647350 */
  push32(0x11653202u); f_11647350();
  /* 11653202 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653205 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653207 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165320a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1165320d push ecx */
  push32((uint32_t)(ECX));
  /* 1165320e call 0x11647350 */
  push32(0x11653213u); f_11647350();
  /* 11653213 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653216 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165321b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1165321e push eax */
  push32((uint32_t)(EAX));
  /* 1165321f call 0x11647350 */
  push32(0x11653224u); f_11647350();
  /* 11653224 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653227 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653229 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165322c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1165322f push edx */
  push32((uint32_t)(EDX));
  /* 11653230 call 0x11647350 */
  push32(0x11653235u); f_11647350();
  /* 11653235 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653238 push 2 */
  push32((uint32_t)(0x2u));
  /* 1165323a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165323d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11653240 push ecx */
  push32((uint32_t)(ECX));
  /* 11653241 call 0x11647350 */
  push32(0x11653246u); f_11647350();
  /* 11653246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653249 push 2 */
  push32((uint32_t)(0x2u));
  /* 1165324b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165324e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11653251 push eax */
  push32((uint32_t)(EAX));
  /* 11653252 call 0x11647350 */
  push32(0x11653257u); f_11647350();
  /* 11653257 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165325a push 2 */
  push32((uint32_t)(0x2u));
  /* 1165325c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165325f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11653262 push edx */
  push32((uint32_t)(EDX));
  /* 11653263 call 0x11647350 */
  push32(0x11653268u); f_11647350();
  /* 11653268 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165326b push 2 */
  push32((uint32_t)(0x2u));
  /* 1165326d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653270 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11653273 push ecx */
  push32((uint32_t)(ECX));
  /* 11653274 call 0x11647350 */
  push32(0x11653279u); f_11647350();
  /* 11653279 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165327c push 2 */
  push32((uint32_t)(0x2u));
  /* 1165327e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653281 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11653284 push eax */
  push32((uint32_t)(EAX));
  /* 11653285 call 0x11647350 */
  push32(0x1165328au); f_11647350();
  /* 1165328a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165328d push 2 */
  push32((uint32_t)(0x2u));
  /* 1165328f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653292 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11653298 push edx */
  push32((uint32_t)(EDX));
  /* 11653299 call 0x11647350 */
  push32(0x1165329eu); f_11647350();
  /* 1165329e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116532a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 116532a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116532a6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 116532ac push ecx */
  push32((uint32_t)(ECX));
  /* 116532ad call 0x11647350 */
  push32(0x116532b2u); f_11647350();
  /* 116532b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116532b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116532b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116532ba mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 116532c0 push eax */
  push32((uint32_t)(EAX));
  /* 116532c1 call 0x11647350 */
  push32(0x116532c6u); f_11647350();
  /* 116532c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116532c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 116532cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116532ce mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 116532d4 push edx */
  push32((uint32_t)(EDX));
  /* 116532d5 call 0x11647350 */
  push32(0x116532dau); f_11647350();
  /* 116532da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116532dd push 2 */
  push32((uint32_t)(0x2u));
  /* 116532df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116532e2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 116532e8 push ecx */
  push32((uint32_t)(ECX));
  /* 116532e9 call 0x11647350 */
  push32(0x116532eeu); f_11647350();
  /* 116532ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116532f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 116532f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116532f6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 116532fc push eax */
  push32((uint32_t)(EAX));
  /* 116532fd call 0x11647350 */
  push32(0x11653302u); f_11647350();
  /* 11653302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653305 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165330a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11653310 push edx */
  push32((uint32_t)(EDX));
  /* 11653311 call 0x11647350 */
  push32(0x11653316u); f_11647350();
  /* 11653316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653319 push 2 */
  push32((uint32_t)(0x2u));
  /* 1165331b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165331e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11653324 push ecx */
  push32((uint32_t)(ECX));
  /* 11653325 call 0x11647350 */
  push32(0x1165332au); f_11647350();
  /* 1165332a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165332d push 2 */
  push32((uint32_t)(0x2u));
  /* 1165332f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653332 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11653338 push eax */
  push32((uint32_t)(EAX));
  /* 11653339 call 0x11647350 */
  push32(0x1165333eu); f_11647350();
  /* 1165333e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653341 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653343 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653346 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1165334c push edx */
  push32((uint32_t)(EDX));
  /* 1165334d call 0x11647350 */
  push32(0x11653352u); f_11647350();
  /* 11653352 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653355 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653357 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165335a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11653360 push ecx */
  push32((uint32_t)(ECX));
  /* 11653361 call 0x11647350 */
  push32(0x11653366u); f_11647350();
  /* 11653366 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11653369:;
  /* 11653369 pop ebp */
  EBP = (pop32());
  /* 1165336a ret  */
  ESPCHK(0x11653060u, _esp0);
  ESP += 4; return;
}

/* FUN_10013370 @ 0x11653370 (678 bytes, 180 insns) */
void f_11653370(void) {
  FTRACE(0x11653370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11653370 push ebp */
  push32((uint32_t)(EBP));
  /* 11653371 mov ebp, esp */
  EBP = (ESP);
  /* 11653373 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11653376 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1165337d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165337f mov ax, word ptr [0x1167620a] */
  AX = (r16((uint32_t)(0x1167620a)));
  /* 11653385 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11653388 cmp dword ptr [0x116761bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116761bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165338f je 0x116534ea */
  if (C.zf) goto L_116534ea;
  /* 11653395 push 0x116761d8 */
  push32((uint32_t)(0x116761d8u));
  /* 1165339a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1165339c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165339f push ecx */
  push32((uint32_t)(ECX));
  /* 116533a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 116533a2 call 0x11657080 */
  push32(0x116533a7u); f_11657080();
  /* 116533a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116533aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116533ad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116533af mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116533b2 push 0x116761dc */
  push32((uint32_t)(0x116761dcu));
  /* 116533b7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 116533b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116533bc push eax */
  push32((uint32_t)(EAX));
  /* 116533bd push 1 */
  push32((uint32_t)(0x1u));
  /* 116533bf call 0x11657080 */
  push32(0x116533c4u); f_11657080();
  /* 116533c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116533c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116533ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116533cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116533cf push 0x116761e0 */
  push32((uint32_t)(0x116761e0u));
  /* 116533d4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 116533d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116533d9 push edx */
  push32((uint32_t)(EDX));
  /* 116533da push 1 */
  push32((uint32_t)(0x1u));
  /* 116533dc call 0x11657080 */
  push32(0x116533e1u); f_11657080();
  /* 116533e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116533e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116533e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116533e9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116533ec mov edx, dword ptr [0x116761e0] */
  EDX = (r32((uint32_t)(0x116761e0)));
  /* 116533f2 push edx */
  push32((uint32_t)(EDX));
  /* 116533f3 call 0x11653620 */
  push32(0x116533f8u); f_11653620();
  /* 116533f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116533fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116533ff je 0x11653459 */
  if (C.zf) goto L_11653459;
  /* 11653401 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653403 mov eax, dword ptr [0x116761d8] */
  EAX = (r32((uint32_t)(0x116761d8)));
  /* 11653408 push eax */
  push32((uint32_t)(EAX));
  /* 11653409 call 0x11647350 */
  push32(0x1165340eu); f_11647350();
  /* 1165340e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653411 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653413 mov ecx, dword ptr [0x116761dc] */
  ECX = (r32((uint32_t)(0x116761dc)));
  /* 11653419 push ecx */
  push32((uint32_t)(ECX));
  /* 1165341a call 0x11647350 */
  push32(0x1165341fu); f_11647350();
  /* 1165341f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653422 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653424 mov edx, dword ptr [0x116761e0] */
  EDX = (r32((uint32_t)(0x116761e0)));
  /* 1165342a push edx */
  push32((uint32_t)(EDX));
  /* 1165342b call 0x11647350 */
  push32(0x11653430u); f_11647350();
  /* 11653430 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653433 mov dword ptr [0x116761d8], 0 */
  w32((uint32_t)(0x116761d8), (0x0u));
  /* 1165343d mov dword ptr [0x116761dc], 0 */
  w32((uint32_t)(0x116761dc), (0x0u));
  /* 11653447 mov dword ptr [0x116761e0], 0 */
  w32((uint32_t)(0x116761e0), (0x0u));
  /* 11653451 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11653454 jmp 0x11653612 */
  goto L_11653612;
L_11653459:;
  /* 11653459 mov eax, dword ptr [0x11674ef8] */
  EAX = (r32((uint32_t)(0x11674ef8)));
  /* 1165345e cmp dword ptr [eax], 0x11674ec0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11674ec0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653464 je 0x116534a0 */
  if (C.zf) goto L_116534a0;
  /* 11653466 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653468 mov ecx, dword ptr [0x11674ef8] */
  ECX = (r32((uint32_t)(0x11674ef8)));
  /* 1165346e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11653470 push edx */
  push32((uint32_t)(EDX));
  /* 11653471 call 0x11647350 */
  push32(0x11653476u); f_11647350();
  /* 11653476 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653479 push 2 */
  push32((uint32_t)(0x2u));
  /* 1165347b mov eax, dword ptr [0x11674ef8] */
  EAX = (r32((uint32_t)(0x11674ef8)));
  /* 11653480 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11653483 push ecx */
  push32((uint32_t)(ECX));
  /* 11653484 call 0x11647350 */
  push32(0x11653489u); f_11647350();
  /* 11653489 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165348c push 2 */
  push32((uint32_t)(0x2u));
  /* 1165348e mov edx, dword ptr [0x11674ef8] */
  EDX = (r32((uint32_t)(0x11674ef8)));
  /* 11653494 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11653497 push eax */
  push32((uint32_t)(EAX));
  /* 11653498 call 0x11647350 */
  push32(0x1165349du); f_11647350();
  /* 1165349d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116534a0:;
  /* 116534a0 mov ecx, dword ptr [0x11674ef8] */
  ECX = (r32((uint32_t)(0x11674ef8)));
  /* 116534a6 mov edx, dword ptr [0x116761d8] */
  EDX = (r32((uint32_t)(0x116761d8)));
  /* 116534ac mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116534ae mov eax, dword ptr [0x11674ef8] */
  EAX = (r32((uint32_t)(0x11674ef8)));
  /* 116534b3 mov ecx, dword ptr [0x116761dc] */
  ECX = (r32((uint32_t)(0x116761dc)));
  /* 116534b9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 116534bc mov edx, dword ptr [0x11674ef8] */
  EDX = (r32((uint32_t)(0x11674ef8)));
  /* 116534c2 mov eax, dword ptr [0x116761e0] */
  EAX = (r32((uint32_t)(0x116761e0)));
  /* 116534c7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116534ca mov ecx, dword ptr [0x11674ef8] */
  ECX = (r32((uint32_t)(0x11674ef8)));
  /* 116534d0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116534d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 116534d4 mov byte ptr [0x11673c94], al */
  w8((uint32_t)(0x11673c94), (AL));
  /* 116534d9 mov dword ptr [0x11673c98], 1 */
  w32((uint32_t)(0x11673c98), (0x1u));
  /* 116534e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116534e5 jmp 0x11653612 */
  goto L_11653612;
L_116534ea:;
  /* 116534ea push 2 */
  push32((uint32_t)(0x2u));
  /* 116534ec mov ecx, dword ptr [0x116761d8] */
  ECX = (r32((uint32_t)(0x116761d8)));
  /* 116534f2 push ecx */
  push32((uint32_t)(ECX));
  /* 116534f3 call 0x11647350 */
  push32(0x116534f8u); f_11647350();
  /* 116534f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116534fb push 2 */
  push32((uint32_t)(0x2u));
  /* 116534fd mov edx, dword ptr [0x116761dc] */
  EDX = (r32((uint32_t)(0x116761dc)));
  /* 11653503 push edx */
  push32((uint32_t)(EDX));
  /* 11653504 call 0x11647350 */
  push32(0x11653509u); f_11647350();
  /* 11653509 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165350c push 2 */
  push32((uint32_t)(0x2u));
  /* 1165350e mov eax, dword ptr [0x116761e0] */
  EAX = (r32((uint32_t)(0x116761e0)));
  /* 11653513 push eax */
  push32((uint32_t)(EAX));
  /* 11653514 call 0x11647350 */
  push32(0x11653519u); f_11647350();
  /* 11653519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165351c mov dword ptr [0x116761d8], 0 */
  w32((uint32_t)(0x116761d8), (0x0u));
  /* 11653526 mov dword ptr [0x116761dc], 0 */
  w32((uint32_t)(0x116761dc), (0x0u));
  /* 11653530 mov dword ptr [0x116761e0], 0 */
  w32((uint32_t)(0x116761e0), (0x0u));
  /* 1165353a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1165353f push 0x116711e8 */
  push32((uint32_t)(0x116711e8u));
  /* 11653544 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653546 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653548 call 0x116468c0 */
  push32(0x1165354du); f_116468c0();
  /* 1165354d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653550 mov ecx, dword ptr [0x11674ef8] */
  ECX = (r32((uint32_t)(0x11674ef8)));
  /* 11653556 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11653558 mov edx, dword ptr [0x11674ef8] */
  EDX = (r32((uint32_t)(0x11674ef8)));
  /* 1165355e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653561 jne 0x1165356b */
  if (!C.zf) goto L_1165356b;
  /* 11653563 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11653566 jmp 0x11653612 */
  goto L_11653612;
L_1165356b:;
  /* 1165356b push 0x11671188 */
  push32((uint32_t)(0x11671188u));
  /* 11653570 mov eax, dword ptr [0x11674ef8] */
  EAX = (r32((uint32_t)(0x11674ef8)));
  /* 11653575 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11653577 push ecx */
  push32((uint32_t)(ECX));
  /* 11653578 call 0x11649870 */
  push32(0x1165357du); f_11649870();
  /* 1165357d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653580 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11653585 push 0x116711e8 */
  push32((uint32_t)(0x116711e8u));
  /* 1165358a push 2 */
  push32((uint32_t)(0x2u));
  /* 1165358c push 2 */
  push32((uint32_t)(0x2u));
  /* 1165358e call 0x116468c0 */
  push32(0x11653593u); f_116468c0();
  /* 11653593 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653596 mov edx, dword ptr [0x11674ef8] */
  EDX = (r32((uint32_t)(0x11674ef8)));
  /* 1165359c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1165359f mov eax, dword ptr [0x11674ef8] */
  EAX = (r32((uint32_t)(0x11674ef8)));
  /* 116535a4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116535a8 jne 0x116535af */
  if (!C.zf) goto L_116535af;
  /* 116535aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116535ad jmp 0x11653612 */
  goto L_11653612;
L_116535af:;
  /* 116535af mov ecx, dword ptr [0x11674ef8] */
  ECX = (r32((uint32_t)(0x11674ef8)));
  /* 116535b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116535b8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 116535bb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 116535c0 push 0x116711e8 */
  push32((uint32_t)(0x116711e8u));
  /* 116535c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116535c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116535c9 call 0x116468c0 */
  push32(0x116535ceu); f_116468c0();
  /* 116535ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116535d1 mov ecx, dword ptr [0x11674ef8] */
  ECX = (r32((uint32_t)(0x11674ef8)));
  /* 116535d7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 116535da mov edx, dword ptr [0x11674ef8] */
  EDX = (r32((uint32_t)(0x11674ef8)));
  /* 116535e0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116535e4 jne 0x116535eb */
  if (!C.zf) goto L_116535eb;
  /* 116535e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116535e9 jmp 0x11653612 */
  goto L_11653612;
L_116535eb:;
  /* 116535eb mov eax, dword ptr [0x11674ef8] */
  EAX = (r32((uint32_t)(0x11674ef8)));
  /* 116535f0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116535f3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 116535f6 mov edx, dword ptr [0x11674ef8] */
  EDX = (r32((uint32_t)(0x11674ef8)));
  /* 116535fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116535fe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11653600 mov byte ptr [0x11673c94], cl */
  w8((uint32_t)(0x11673c94), (CL));
  /* 11653606 mov dword ptr [0x11673c98], 1 */
  w32((uint32_t)(0x11673c98), (0x1u));
  /* 11653610 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11653612:;
  /* 11653612 mov esp, ebp */
  ESP = (EBP);
  /* 11653614 pop ebp */
  EBP = (pop32());
  /* 11653615 ret  */
  ESPCHK(0x11653370u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11653620 (125 bytes, 49 insns) */
void f_11653620(void) {
  FTRACE(0x11653620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11653620 push ebp */
  push32((uint32_t)(EBP));
  /* 11653621 mov ebp, esp */
  EBP = (ESP);
  /* 11653623 push ecx */
  push32((uint32_t)(ECX));
L_11653624:;
  /* 11653624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653627 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1165362a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1165362c je 0x11653699 */
  if (C.zf) goto L_11653699;
  /* 1165362e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653631 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11653634 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653637 jl 0x1165365d */
  if ((C.sf!=C.of)) goto L_1165365d;
  /* 11653639 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165363c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1165363f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653642 jg 0x1165365d */
  if ((!C.zf&&C.sf==C.of)) goto L_1165365d;
  /* 11653644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653647 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1165364a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165364d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653650 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11653652 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653655 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653658 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1165365b jmp 0x11653697 */
  goto L_11653697;
L_1165365d:;
  /* 1165365d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653660 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11653663 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653666 jne 0x1165368e */
  if (!C.zf) goto L_1165368e;
  /* 11653668 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165366b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1165366e:;
  /* 1165366e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653674 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11653677 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11653679 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165367c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165367f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11653682 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653685 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11653688 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165368a jne 0x1165366e */
  if (!C.zf) goto L_1165366e;
  /* 1165368c jmp 0x11653697 */
  goto L_11653697;
L_1165368e:;
  /* 1165368e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653691 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653694 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11653697:;
  /* 11653697 jmp 0x11653624 */
  goto L_11653624;
L_11653699:;
  /* 11653699 mov esp, ebp */
  ESP = (EBP);
  /* 1165369b pop ebp */
  EBP = (pop32());
  /* 1165369c ret  */
  ESPCHK(0x11653620u, _esp0);
  ESP += 4; return;
}

/* FUN_100136a0 @ 0x116536a0 (304 bytes, 85 insns) */
void f_116536a0(void) {
  FTRACE(0x116536a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116536a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116536a1 mov ebp, esp */
  EBP = (ESP);
  /* 116536a3 push ecx */
  push32((uint32_t)(ECX));
  /* 116536a4 cmp dword ptr [0x116761b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116761b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116536ab je 0x1165376c */
  if (C.zf) goto L_1165376c;
  /* 116536b1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 116536b3 push 0x116711f4 */
  push32((uint32_t)(0x116711f4u));
  /* 116536b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 116536ba push 0x30 */
  push32((uint32_t)(0x30u));
  /* 116536bc push 1 */
  push32((uint32_t)(0x1u));
  /* 116536be call 0x11646cd0 */
  push32(0x116536c3u); f_11646cd0();
  /* 116536c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116536c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116536c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116536cd jne 0x116536d9 */
  if (!C.zf) goto L_116536d9;
  /* 116536cf mov eax, 1 */
  EAX = (0x1u);
  /* 116536d4 jmp 0x116537cc */
  goto L_116537cc;
L_116536d9:;
  /* 116536d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116536dc push eax */
  push32((uint32_t)(EAX));
  /* 116536dd call 0x116537d0 */
  push32(0x116536e2u); f_116537d0();
  /* 116536e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116536e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116536e7 je 0x1165370d */
  if (C.zf) goto L_1165370d;
  /* 116536e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116536ec push ecx */
  push32((uint32_t)(ECX));
  /* 116536ed call 0x11653a60 */
  push32(0x116536f2u); f_11653a60();
  /* 116536f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116536f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 116536f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116536fa push edx */
  push32((uint32_t)(EDX));
  /* 116536fb call 0x11647350 */
  push32(0x11653700u); f_11647350();
  /* 11653700 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653703 mov eax, 1 */
  EAX = (0x1u);
  /* 11653708 jmp 0x116537cc */
  goto L_116537cc;
L_1165370d:;
  /* 1165370d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653710 mov ecx, dword ptr [0x11674ef8] */
  ECX = (r32((uint32_t)(0x11674ef8)));
  /* 11653716 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11653718 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1165371a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165371d mov ecx, dword ptr [0x11674ef8] */
  ECX = (r32((uint32_t)(0x11674ef8)));
  /* 11653723 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11653726 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11653729 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165372c mov ecx, dword ptr [0x11674ef8] */
  ECX = (r32((uint32_t)(0x11674ef8)));
  /* 11653732 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11653735 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11653738 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165373b mov dword ptr [0x11674ef8], eax */
  w32((uint32_t)(0x11674ef8), (EAX));
  /* 11653740 mov ecx, dword ptr [0x116761e4] */
  ECX = (r32((uint32_t)(0x116761e4)));
  /* 11653746 push ecx */
  push32((uint32_t)(ECX));
  /* 11653747 call 0x11653a60 */
  push32(0x1165374cu); f_11653a60();
  /* 1165374c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165374f push 2 */
  push32((uint32_t)(0x2u));
  /* 11653751 mov edx, dword ptr [0x116761e4] */
  EDX = (r32((uint32_t)(0x116761e4)));
  /* 11653757 push edx */
  push32((uint32_t)(EDX));
  /* 11653758 call 0x11647350 */
  push32(0x1165375du); f_11647350();
  /* 1165375d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653760 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653763 mov dword ptr [0x116761e4], eax */
  w32((uint32_t)(0x116761e4), (EAX));
  /* 11653768 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165376a jmp 0x116537cc */
  goto L_116537cc;
L_1165376c:;
  /* 1165376c mov ecx, dword ptr [0x11674ef8] */
  ECX = (r32((uint32_t)(0x11674ef8)));
  /* 11653772 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11653774 mov dword ptr [0x11674ec8], edx */
  w32((uint32_t)(0x11674ec8), (EDX));
  /* 1165377a mov eax, dword ptr [0x11674ef8] */
  EAX = (r32((uint32_t)(0x11674ef8)));
  /* 1165377f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11653782 mov dword ptr [0x11674ecc], ecx */
  w32((uint32_t)(0x11674ecc), (ECX));
  /* 11653788 mov edx, dword ptr [0x11674ef8] */
  EDX = (r32((uint32_t)(0x11674ef8)));
  /* 1165378e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11653791 mov dword ptr [0x11674ed0], eax */
  w32((uint32_t)(0x11674ed0), (EAX));
  /* 11653796 mov dword ptr [0x11674ef8], 0x11674ec8 */
  w32((uint32_t)(0x11674ef8), (0x11674ec8u));
  /* 116537a0 mov ecx, dword ptr [0x116761e4] */
  ECX = (r32((uint32_t)(0x116761e4)));
  /* 116537a6 push ecx */
  push32((uint32_t)(ECX));
  /* 116537a7 call 0x11653a60 */
  push32(0x116537acu); f_11653a60();
  /* 116537ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116537af push 2 */
  push32((uint32_t)(0x2u));
  /* 116537b1 mov edx, dword ptr [0x116761e4] */
  EDX = (r32((uint32_t)(0x116761e4)));
  /* 116537b7 push edx */
  push32((uint32_t)(EDX));
  /* 116537b8 call 0x11647350 */
  push32(0x116537bdu); f_11647350();
  /* 116537bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116537c0 mov dword ptr [0x116761e4], 0 */
  w32((uint32_t)(0x116761e4), (0x0u));
  /* 116537ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116537cc:;
  /* 116537cc mov esp, ebp */
  ESP = (EBP);
  /* 116537ce pop ebp */
  EBP = (pop32());
  /* 116537cf ret  */
  ESPCHK(0x116536a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100137d0 @ 0x116537d0 (525 bytes, 200 insns) */
void f_116537d0(void) {
  FTRACE(0x116537d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116537d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116537d1 mov ebp, esp */
  EBP = (ESP);
  /* 116537d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116537d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116537dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116537df mov ax, word ptr [0x11676204] */
  AX = (r16((uint32_t)(0x11676204)));
  /* 116537e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116537e8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116537ec jne 0x116537f6 */
  if (!C.zf) goto L_116537f6;
  /* 116537ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116537f1 jmp 0x116539d9 */
  goto L_116539d9;
L_116537f6:;
  /* 116537f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116537f9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116537fc push ecx */
  push32((uint32_t)(ECX));
  /* 116537fd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 116537ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653802 push edx */
  push32((uint32_t)(EDX));
  /* 11653803 push 1 */
  push32((uint32_t)(0x1u));
  /* 11653805 call 0x11657080 */
  push32(0x1165380au); f_11657080();
  /* 1165380a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165380d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11653810 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11653812 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11653815 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653818 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165381b push edx */
  push32((uint32_t)(EDX));
  /* 1165381c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1165381e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653821 push eax */
  push32((uint32_t)(EAX));
  /* 11653822 push 1 */
  push32((uint32_t)(0x1u));
  /* 11653824 call 0x11657080 */
  push32(0x11653829u); f_11657080();
  /* 11653829 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165382c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165382f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11653831 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11653834 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653837 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165383a push edx */
  push32((uint32_t)(EDX));
  /* 1165383b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1165383d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653840 push eax */
  push32((uint32_t)(EAX));
  /* 11653841 push 1 */
  push32((uint32_t)(0x1u));
  /* 11653843 call 0x11657080 */
  push32(0x11653848u); f_11657080();
  /* 11653848 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165384b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165384e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11653850 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11653853 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653856 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653859 push edx */
  push32((uint32_t)(EDX));
  /* 1165385a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1165385c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165385f push eax */
  push32((uint32_t)(EAX));
  /* 11653860 push 1 */
  push32((uint32_t)(0x1u));
  /* 11653862 call 0x11657080 */
  push32(0x11653867u); f_11657080();
  /* 11653867 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165386a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165386d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1165386f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11653872 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653875 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653878 push edx */
  push32((uint32_t)(EDX));
  /* 11653879 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1165387b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165387e push eax */
  push32((uint32_t)(EAX));
  /* 1165387f push 1 */
  push32((uint32_t)(0x1u));
  /* 11653881 call 0x11657080 */
  push32(0x11653886u); f_11657080();
  /* 11653886 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653889 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165388c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1165388e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11653891 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653894 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11653897 push eax */
  push32((uint32_t)(EAX));
  /* 11653898 call 0x116539e0 */
  push32(0x1165389du); f_116539e0();
  /* 1165389d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116538a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116538a3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116538a6 push ecx */
  push32((uint32_t)(ECX));
  /* 116538a7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 116538a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116538ac push edx */
  push32((uint32_t)(EDX));
  /* 116538ad push 1 */
  push32((uint32_t)(0x1u));
  /* 116538af call 0x11657080 */
  push32(0x116538b4u); f_11657080();
  /* 116538b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116538b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116538ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116538bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116538bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116538c2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116538c5 push edx */
  push32((uint32_t)(EDX));
  /* 116538c6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 116538c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116538cb push eax */
  push32((uint32_t)(EAX));
  /* 116538cc push 1 */
  push32((uint32_t)(0x1u));
  /* 116538ce call 0x11657080 */
  push32(0x116538d3u); f_11657080();
  /* 116538d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116538d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116538d9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116538db mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116538de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116538e1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116538e4 push edx */
  push32((uint32_t)(EDX));
  /* 116538e5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 116538e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116538ea push eax */
  push32((uint32_t)(EAX));
  /* 116538eb push 0 */
  push32((uint32_t)(0x0u));
  /* 116538ed call 0x11657080 */
  push32(0x116538f2u); f_11657080();
  /* 116538f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116538f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116538f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116538fa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116538fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653900 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653903 push edx */
  push32((uint32_t)(EDX));
  /* 11653904 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11653906 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653909 push eax */
  push32((uint32_t)(EAX));
  /* 1165390a push 0 */
  push32((uint32_t)(0x0u));
  /* 1165390c call 0x11657080 */
  push32(0x11653911u); f_11657080();
  /* 11653911 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653914 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11653917 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11653919 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1165391c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165391f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653922 push edx */
  push32((uint32_t)(EDX));
  /* 11653923 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11653925 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653928 push eax */
  push32((uint32_t)(EAX));
  /* 11653929 push 0 */
  push32((uint32_t)(0x0u));
  /* 1165392b call 0x11657080 */
  push32(0x11653930u); f_11657080();
  /* 11653930 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653933 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11653936 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11653938 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1165393b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165393e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653941 push edx */
  push32((uint32_t)(EDX));
  /* 11653942 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11653944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653947 push eax */
  push32((uint32_t)(EAX));
  /* 11653948 push 0 */
  push32((uint32_t)(0x0u));
  /* 1165394a call 0x11657080 */
  push32(0x1165394fu); f_11657080();
  /* 1165394f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653952 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11653955 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11653957 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1165395a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165395d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653960 push edx */
  push32((uint32_t)(EDX));
  /* 11653961 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11653963 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653966 push eax */
  push32((uint32_t)(EAX));
  /* 11653967 push 0 */
  push32((uint32_t)(0x0u));
  /* 11653969 call 0x11657080 */
  push32(0x1165396eu); f_11657080();
  /* 1165396e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653971 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11653974 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11653976 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11653979 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165397c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165397f push edx */
  push32((uint32_t)(EDX));
  /* 11653980 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11653982 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653985 push eax */
  push32((uint32_t)(EAX));
  /* 11653986 push 0 */
  push32((uint32_t)(0x0u));
  /* 11653988 call 0x11657080 */
  push32(0x1165398du); f_11657080();
  /* 1165398d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653990 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11653993 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11653995 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11653998 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165399b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165399e push edx */
  push32((uint32_t)(EDX));
  /* 1165399f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 116539a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116539a4 push eax */
  push32((uint32_t)(EAX));
  /* 116539a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116539a7 call 0x11657080 */
  push32(0x116539acu); f_11657080();
  /* 116539ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116539af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116539b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116539b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116539b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116539ba add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116539bd push edx */
  push32((uint32_t)(EDX));
  /* 116539be push 0x53 */
  push32((uint32_t)(0x53u));
  /* 116539c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116539c3 push eax */
  push32((uint32_t)(EAX));
  /* 116539c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116539c6 call 0x11657080 */
  push32(0x116539cbu); f_11657080();
  /* 116539cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116539ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116539d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116539d3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116539d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_116539d9:;
  /* 116539d9 mov esp, ebp */
  ESP = (EBP);
  /* 116539db pop ebp */
  EBP = (pop32());
  /* 116539dc ret  */
  ESPCHK(0x116537d0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x116539e0 (125 bytes, 49 insns) */
void f_116539e0(void) {
  FTRACE(0x116539e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116539e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116539e1 mov ebp, esp */
  EBP = (ESP);
  /* 116539e3 push ecx */
  push32((uint32_t)(ECX));
L_116539e4:;
  /* 116539e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116539e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116539ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116539ec je 0x11653a59 */
  if (C.zf) goto L_11653a59;
  /* 116539ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116539f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116539f4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116539f7 jl 0x11653a1d */
  if ((C.sf!=C.of)) goto L_11653a1d;
  /* 116539f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116539fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116539ff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653a02 jg 0x11653a1d */
  if ((!C.zf&&C.sf==C.of)) goto L_11653a1d;
  /* 11653a04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653a07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11653a0a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11653a0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653a10 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11653a12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653a15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653a18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11653a1b jmp 0x11653a57 */
  goto L_11653a57;
L_11653a1d:;
  /* 11653a1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653a20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11653a23 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653a26 jne 0x11653a4e */
  if (!C.zf) goto L_11653a4e;
  /* 11653a28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653a2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11653a2e:;
  /* 11653a2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653a31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653a34 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11653a37 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11653a39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653a3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653a3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11653a42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11653a45 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11653a48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11653a4a jne 0x11653a2e */
  if (!C.zf) goto L_11653a2e;
  /* 11653a4c jmp 0x11653a57 */
  goto L_11653a57;
L_11653a4e:;
  /* 11653a4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653a51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653a54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11653a57:;
  /* 11653a57 jmp 0x116539e4 */
  goto L_116539e4;
L_11653a59:;
  /* 11653a59 mov esp, ebp */
  ESP = (EBP);
  /* 11653a5b pop ebp */
  EBP = (pop32());
  /* 11653a5c ret  */
  ESPCHK(0x116539e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a60 @ 0x11653a60 (147 bytes, 52 insns) */
void f_11653a60(void) {
  FTRACE(0x11653a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11653a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11653a61 mov ebp, esp */
  EBP = (ESP);
  /* 11653a63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653a67 jne 0x11653a6e */
  if (!C.zf) goto L_11653a6e;
  /* 11653a69 jmp 0x11653af1 */
  goto L_11653af1;
L_11653a6e:;
  /* 11653a6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653a71 cmp dword ptr [eax + 0xc], 0x11676240 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11676240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653a78 je 0x11653af1 */
  if (C.zf) goto L_11653af1;
  /* 11653a7a push 2 */
  push32((uint32_t)(0x2u));
  /* 11653a7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653a7f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11653a82 push edx */
  push32((uint32_t)(EDX));
  /* 11653a83 call 0x11647350 */
  push32(0x11653a88u); f_11647350();
  /* 11653a88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653a8b push 2 */
  push32((uint32_t)(0x2u));
  /* 11653a8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653a90 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11653a93 push ecx */
  push32((uint32_t)(ECX));
  /* 11653a94 call 0x11647350 */
  push32(0x11653a99u); f_11647350();
  /* 11653a99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653a9c push 2 */
  push32((uint32_t)(0x2u));
  /* 11653a9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653aa1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11653aa4 push eax */
  push32((uint32_t)(EAX));
  /* 11653aa5 call 0x11647350 */
  push32(0x11653aaau); f_11647350();
  /* 11653aaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653aad push 2 */
  push32((uint32_t)(0x2u));
  /* 11653aaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653ab2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11653ab5 push edx */
  push32((uint32_t)(EDX));
  /* 11653ab6 call 0x11647350 */
  push32(0x11653abbu); f_11647350();
  /* 11653abb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653abe push 2 */
  push32((uint32_t)(0x2u));
  /* 11653ac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653ac3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11653ac6 push ecx */
  push32((uint32_t)(ECX));
  /* 11653ac7 call 0x11647350 */
  push32(0x11653accu); f_11647350();
  /* 11653acc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653acf push 2 */
  push32((uint32_t)(0x2u));
  /* 11653ad1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653ad4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11653ad7 push eax */
  push32((uint32_t)(EAX));
  /* 11653ad8 call 0x11647350 */
  push32(0x11653addu); f_11647350();
  /* 11653add add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653ae0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653ae2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11653ae5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11653ae8 push edx */
  push32((uint32_t)(EDX));
  /* 11653ae9 call 0x11647350 */
  push32(0x11653aeeu); f_11647350();
  /* 11653aee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11653af1:;
  /* 11653af1 pop ebp */
  EBP = (pop32());
  /* 11653af2 ret  */
  ESPCHK(0x11653a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b00 @ 0x11653b00 (928 bytes, 284 insns) */
void f_11653b00(void) {
  FTRACE(0x11653b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11653b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11653b01 mov ebp, esp */
  EBP = (ESP);
  /* 11653b03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11653b06 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11653b0d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11653b14 cmp dword ptr [0x116761b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116761b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653b1b je 0x11653e51 */
  if (C.zf) goto L_11653e51;
  /* 11653b21 cmp dword ptr [0x116761c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116761c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653b28 jne 0x11653b50 */
  if (!C.zf) goto L_11653b50;
  /* 11653b2a push 0x116761c4 */
  push32((uint32_t)(0x116761c4u));
  /* 11653b2f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11653b34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11653b36 mov ax, word ptr [0x116761fc] */
  AX = (r16((uint32_t)(0x116761fc)));
  /* 11653b3c push eax */
  push32((uint32_t)(EAX));
  /* 11653b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11653b3f call 0x11657080 */
  push32(0x11653b44u); f_11657080();
  /* 11653b44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653b47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11653b49 je 0x11653b50 */
  if (C.zf) goto L_11653b50;
  /* 11653b4b jmp 0x11653e12 */
  goto L_11653e12;
L_11653b50:;
  /* 11653b50 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11653b52 push 0x11671200 */
  push32((uint32_t)(0x11671200u));
  /* 11653b57 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653b59 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11653b5e call 0x116468c0 */
  push32(0x11653b63u); f_116468c0();
  /* 11653b63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653b66 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11653b69 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11653b6b push 0x11671200 */
  push32((uint32_t)(0x11671200u));
  /* 11653b70 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653b72 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11653b77 call 0x116468c0 */
  push32(0x11653b7cu); f_116468c0();
  /* 11653b7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653b7f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11653b82 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11653b84 push 0x11671200 */
  push32((uint32_t)(0x11671200u));
  /* 11653b89 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653b8b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11653b90 call 0x116468c0 */
  push32(0x11653b95u); f_116468c0();
  /* 11653b95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653b98 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11653b9b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11653b9d push 0x11671200 */
  push32((uint32_t)(0x11671200u));
  /* 11653ba2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653ba4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11653ba9 call 0x116468c0 */
  push32(0x11653baeu); f_116468c0();
  /* 11653bae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653bb1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11653bb4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653bb8 je 0x11653bcc */
  if (C.zf) goto L_11653bcc;
  /* 11653bba cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653bbe je 0x11653bcc */
  if (C.zf) goto L_11653bcc;
  /* 11653bc0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653bc4 je 0x11653bcc */
  if (C.zf) goto L_11653bcc;
  /* 11653bc6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653bca jne 0x11653bd1 */
  if (!C.zf) goto L_11653bd1;
L_11653bcc:;
  /* 11653bcc jmp 0x11653e12 */
  goto L_11653e12;
L_11653bd1:;
  /* 11653bd1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11653bd4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11653bd7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11653bde jmp 0x11653be9 */
  goto L_11653be9;
L_11653be0:;
  /* 11653be0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11653be3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653be6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11653be9:;
  /* 11653be9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653bf0 jge 0x11653c05 */
  if ((C.sf==C.of)) goto L_11653c05;
  /* 11653bf2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11653bf5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11653bf8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11653bfa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11653bfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653c00 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11653c03 jmp 0x11653be0 */
  goto L_11653be0;
L_11653c05:;
  /* 11653c05 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11653c08 push eax */
  push32((uint32_t)(EAX));
  /* 11653c09 mov ecx, dword ptr [0x116761c4] */
  ECX = (r32((uint32_t)(0x116761c4)));
  /* 11653c0f push ecx */
  push32((uint32_t)(ECX));
  /* 11653c10 call dword ptr [0x11678308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11678308))), 0x11653c16u);
  /* 11653c16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11653c18 jne 0x11653c1f */
  if (!C.zf) goto L_11653c1f;
  /* 11653c1a jmp 0x11653e12 */
  goto L_11653e12;
L_11653c1f:;
  /* 11653c1f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653c23 jbe 0x11653c2a */
  if ((C.cf||C.zf)) goto L_11653c2a;
  /* 11653c25 jmp 0x11653e12 */
  goto L_11653e12;
L_11653c2a:;
  /* 11653c2a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11653c2d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11653c33 mov dword ptr [0x11673c90], edx */
  w32((uint32_t)(0x11673c90), (EDX));
  /* 11653c39 cmp dword ptr [0x11673c90], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11673c90))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653c40 jle 0x11653c99 */
  if ((C.zf||C.sf!=C.of)) goto L_11653c99;
  /* 11653c42 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11653c45 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11653c48 jmp 0x11653c53 */
  goto L_11653c53;
L_11653c4a:;
  /* 11653c4a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11653c4d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653c50 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11653c53:;
  /* 11653c53 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11653c56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11653c58 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11653c5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11653c5c je 0x11653c99 */
  if (C.zf) goto L_11653c99;
  /* 11653c5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11653c61 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11653c63 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11653c66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11653c68 je 0x11653c99 */
  if (C.zf) goto L_11653c99;
  /* 11653c6a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11653c6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11653c6f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11653c71 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11653c74 jmp 0x11653c7f */
  goto L_11653c7f;
L_11653c76:;
  /* 11653c76 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11653c79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653c7c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11653c7f:;
  /* 11653c7f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11653c82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11653c84 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11653c87 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653c8a jg 0x11653c97 */
  if ((!C.zf&&C.sf==C.of)) goto L_11653c97;
  /* 11653c8c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11653c8f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653c92 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11653c95 jmp 0x11653c76 */
  goto L_11653c76;
L_11653c97:;
  /* 11653c97 jmp 0x11653c4a */
  goto L_11653c4a;
L_11653c99:;
  /* 11653c99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11653c9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11653c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11653c9f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11653ca2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653ca5 push eax */
  push32((uint32_t)(EAX));
  /* 11653ca6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11653cab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11653cae push ecx */
  push32((uint32_t)(ECX));
  /* 11653caf push 1 */
  push32((uint32_t)(0x1u));
  /* 11653cb1 call 0x1164fc50 */
  push32(0x11653cb6u); f_1164fc50();
  /* 11653cb6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653cb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11653cbb jne 0x11653cc2 */
  if (!C.zf) goto L_11653cc2;
  /* 11653cbd jmp 0x11653e12 */
  goto L_11653e12;
L_11653cc2:;
  /* 11653cc2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11653cc5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11653cca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11653ccd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11653cd0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11653cd7 jmp 0x11653ce2 */
  goto L_11653ce2;
L_11653cd9:;
  /* 11653cd9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11653cdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653cdf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11653ce2:;
  /* 11653ce2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653ce9 jge 0x11653d00 */
  if ((C.sf==C.of)) goto L_11653d00;
  /* 11653ceb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11653cee mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11653cf2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11653cf5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11653cf8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653cfb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11653cfe jmp 0x11653cd9 */
  goto L_11653cd9;
L_11653d00:;
  /* 11653d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11653d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11653d04 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11653d07 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653d0a push edx */
  push32((uint32_t)(EDX));
  /* 11653d0b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11653d10 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11653d13 push eax */
  push32((uint32_t)(EAX));
  /* 11653d14 push 1 */
  push32((uint32_t)(0x1u));
  /* 11653d16 call 0x11657320 */
  push32(0x11653d1bu); f_11657320();
  /* 11653d1b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653d1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11653d20 jne 0x11653d27 */
  if (!C.zf) goto L_11653d27;
  /* 11653d22 jmp 0x11653e12 */
  goto L_11653e12;
L_11653d27:;
  /* 11653d27 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11653d2a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11653d2f cmp dword ptr [0x11673c90], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11673c90))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653d36 jle 0x11653d93 */
  if ((C.zf||C.sf!=C.of)) goto L_11653d93;
  /* 11653d38 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11653d3b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11653d3e jmp 0x11653d49 */
  goto L_11653d49;
L_11653d40:;
  /* 11653d40 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11653d43 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653d46 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11653d49:;
  /* 11653d49 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11653d4c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11653d4e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11653d50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11653d52 je 0x11653d93 */
  if (C.zf) goto L_11653d93;
  /* 11653d54 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11653d57 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11653d59 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11653d5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11653d5e je 0x11653d93 */
  if (C.zf) goto L_11653d93;
  /* 11653d60 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11653d63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11653d65 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11653d67 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11653d6a jmp 0x11653d75 */
  goto L_11653d75;
L_11653d6c:;
  /* 11653d6c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11653d6f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653d72 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11653d75:;
  /* 11653d75 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11653d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11653d7a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11653d7d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653d80 jg 0x11653d91 */
  if ((!C.zf&&C.sf==C.of)) goto L_11653d91;
  /* 11653d82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11653d85 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11653d88 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11653d8f jmp 0x11653d6c */
  goto L_11653d6c;
L_11653d91:;
  /* 11653d91 jmp 0x11653d40 */
  goto L_11653d40;
L_11653d93:;
  /* 11653d93 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11653d96 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653d99 mov dword ptr [0x11673c9c], eax */
  w32((uint32_t)(0x11673c9c), (EAX));
  /* 11653d9e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11653da1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653da4 mov dword ptr [0x11673ca0], ecx */
  w32((uint32_t)(0x11673ca0), (ECX));
  /* 11653daa cmp dword ptr [0x116761e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116761e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653db1 je 0x11653dc4 */
  if (C.zf) goto L_11653dc4;
  /* 11653db3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653db5 mov edx, dword ptr [0x116761e8] */
  EDX = (r32((uint32_t)(0x116761e8)));
  /* 11653dbb push edx */
  push32((uint32_t)(EDX));
  /* 11653dbc call 0x11647350 */
  push32(0x11653dc1u); f_11647350();
  /* 11653dc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11653dc4:;
  /* 11653dc4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11653dc7 mov dword ptr [0x116761e8], eax */
  w32((uint32_t)(0x116761e8), (EAX));
  /* 11653dcc cmp dword ptr [0x116761ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116761ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11653dd3 je 0x11653de6 */
  if (C.zf) goto L_11653de6;
  /* 11653dd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653dd7 mov ecx, dword ptr [0x116761ec] */
  ECX = (r32((uint32_t)(0x116761ec)));
  /* 11653ddd push ecx */
  push32((uint32_t)(ECX));
  /* 11653dde call 0x11647350 */
  push32(0x11653de3u); f_11647350();
  /* 11653de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11653de6:;
  /* 11653de6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11653de9 mov dword ptr [0x116761ec], edx */
  w32((uint32_t)(0x116761ec), (EDX));
  /* 11653def push 2 */
  push32((uint32_t)(0x2u));
  /* 11653df1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11653df4 push eax */
  push32((uint32_t)(EAX));
  /* 11653df5 call 0x11647350 */
  push32(0x11653dfau); f_11647350();
  /* 11653dfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653dfd push 2 */
  push32((uint32_t)(0x2u));
  /* 11653dff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11653e02 push ecx */
  push32((uint32_t)(ECX));
  /* 11653e03 call 0x11647350 */
  push32(0x11653e08u); f_11647350();
  /* 11653e08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653e0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11653e0d jmp 0x11653e9c */
  goto L_11653e9c;
L_11653e12:;
  /* 11653e12 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653e14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11653e17 push edx */
  push32((uint32_t)(EDX));
  /* 11653e18 call 0x11647350 */
  push32(0x11653e1du); f_11647350();
  /* 11653e1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653e20 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653e22 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11653e25 push eax */
  push32((uint32_t)(EAX));
  /* 11653e26 call 0x11647350 */
  push32(0x11653e2bu); f_11647350();
  /* 11653e2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653e2e push 2 */
  push32((uint32_t)(0x2u));
  /* 11653e30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11653e33 push ecx */
  push32((uint32_t)(ECX));
  /* 11653e34 call 0x11647350 */
  push32(0x11653e39u); f_11647350();
  /* 11653e39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653e3c push 2 */
  push32((uint32_t)(0x2u));
  /* 11653e3e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11653e41 push edx */
  push32((uint32_t)(EDX));
  /* 11653e42 call 0x11647350 */
  push32(0x11653e47u); f_11647350();
  /* 11653e47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653e4a mov eax, 1 */
  EAX = (0x1u);
  /* 11653e4f jmp 0x11653e9c */
  goto L_11653e9c;
L_11653e51:;
  /* 11653e51 mov dword ptr [0x11673c9c], 0x11673ca6 */
  w32((uint32_t)(0x11673c9c), (0x11673ca6u));
  /* 11653e5b mov dword ptr [0x11673ca0], 0x11673ca6 */
  w32((uint32_t)(0x11673ca0), (0x11673ca6u));
  /* 11653e65 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653e67 mov eax, dword ptr [0x116761e8] */
  EAX = (r32((uint32_t)(0x116761e8)));
  /* 11653e6c push eax */
  push32((uint32_t)(EAX));
  /* 11653e6d call 0x11647350 */
  push32(0x11653e72u); f_11647350();
  /* 11653e72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653e75 push 2 */
  push32((uint32_t)(0x2u));
  /* 11653e77 mov ecx, dword ptr [0x116761ec] */
  ECX = (r32((uint32_t)(0x116761ec)));
  /* 11653e7d push ecx */
  push32((uint32_t)(ECX));
  /* 11653e7e call 0x11647350 */
  push32(0x11653e83u); f_11647350();
  /* 11653e83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653e86 mov dword ptr [0x116761e8], 0 */
  w32((uint32_t)(0x116761e8), (0x0u));
  /* 11653e90 mov dword ptr [0x116761ec], 0 */
  w32((uint32_t)(0x116761ec), (0x0u));
  /* 11653e9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11653e9c:;
  /* 11653e9c mov esp, ebp */
  ESP = (EBP);
  /* 11653e9e pop ebp */
  EBP = (pop32());
  /* 11653e9f ret  */
  ESPCHK(0x11653b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ea0 @ 0x11653ea0 (7 bytes, 5 insns) */
void f_11653ea0(void) {
  FTRACE(0x11653ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11653ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11653ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11653ea3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11653ea5 pop ebp */
  EBP = (pop32());
  /* 11653ea6 ret  */
  ESPCHK(0x11653ea0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11653eb0 (129 bytes, 56 insns) */
void f_11653eb0(void) {
  FTRACE(0x11653eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11653eb0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11653eb4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11653eb8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11653ebe jne 0x11653efc */
  if (!C.zf) goto L_11653efc;
L_11653ec0:;
  /* 11653ec0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11653ec2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11653ec4 jne 0x11653ef4 */
  if (!C.zf) goto L_11653ef4;
  /* 11653ec6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11653ec8 je 0x11653ef0 */
  if (C.zf) goto L_11653ef0;
  /* 11653eca cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11653ecd jne 0x11653ef4 */
  if (!C.zf) goto L_11653ef4;
  /* 11653ecf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11653ed1 je 0x11653ef0 */
  if (C.zf) goto L_11653ef0;
  /* 11653ed3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11653ed6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11653ed9 jne 0x11653ef4 */
  if (!C.zf) goto L_11653ef4;
  /* 11653edb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11653edd je 0x11653ef0 */
  if (C.zf) goto L_11653ef0;
  /* 11653edf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11653ee2 jne 0x11653ef4 */
  if (!C.zf) goto L_11653ef4;
  /* 11653ee4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653ee7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653eea or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11653eec jne 0x11653ec0 */
  if (!C.zf) goto L_11653ec0;
  /* 11653eee mov edi, edi */
  EDI = (EDI);
L_11653ef0:;
  /* 11653ef0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11653ef2 ret  */
  ESPCHK(0x11653eb0u, _esp0);
  ESP += 4; return;
  /* 11653ef3 nop  */
  /* nop */
L_11653ef4:;
  /* 11653ef4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11653ef6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11653ef8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11653ef9 ret  */
  ESPCHK(0x11653eb0u, _esp0);
  ESP += 4; return;
  /* 11653efa mov edi, edi */
  EDI = (EDI);
L_11653efc:;
  /* 11653efc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11653f02 je 0x11653f18 */
  if (C.zf) goto L_11653f18;
  /* 11653f04 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11653f06 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11653f07 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11653f09 jne 0x11653ef4 */
  if (!C.zf) goto L_11653ef4;
  /* 11653f0b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11653f0c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11653f0e je 0x11653ef0 */
  if (C.zf) goto L_11653ef0;
  /* 11653f10 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11653f16 je 0x11653ec0 */
  if (C.zf) goto L_11653ec0;
L_11653f18:;
  /* 11653f18 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11653f1b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653f1e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11653f20 jne 0x11653ef4 */
  if (!C.zf) goto L_11653ef4;
  /* 11653f22 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11653f24 je 0x11653ef0 */
  if (C.zf) goto L_11653ef0;
  /* 11653f26 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11653f29 jne 0x11653ef4 */
  if (!C.zf) goto L_11653ef4;
  /* 11653f2b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11653f2d je 0x11653ef0 */
  if (C.zf) goto L_11653ef0;
  /* 11653f2f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653f32 jmp 0x11653ec0 */
  goto L_11653ec0;
}

/* FUN_10013f40 @ 0x11653f40 (62 bytes, 35 insns) */
void f_11653f40(void) {
  FTRACE(0x11653f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11653f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11653f41 mov ebp, esp */
  EBP = (ESP);
  /* 11653f43 push esi */
  push32((uint32_t)(ESI));
  /* 11653f44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11653f46 push eax */
  push32((uint32_t)(EAX));
  /* 11653f47 push eax */
  push32((uint32_t)(EAX));
  /* 11653f48 push eax */
  push32((uint32_t)(EAX));
  /* 11653f49 push eax */
  push32((uint32_t)(EAX));
  /* 11653f4a push eax */
  push32((uint32_t)(EAX));
  /* 11653f4b push eax */
  push32((uint32_t)(EAX));
  /* 11653f4c push eax */
  push32((uint32_t)(EAX));
  /* 11653f4d push eax */
  push32((uint32_t)(EAX));
  /* 11653f4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11653f51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11653f54:;
  /* 11653f54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11653f56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11653f58 je 0x11653f61 */
  if (C.zf) goto L_11653f61;
  /* 11653f5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11653f5b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11653f5b");
  /* 11653f5f jmp 0x11653f54 */
  goto L_11653f54;
L_11653f61:;
  /* 11653f61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11653f64 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11653f67 nop  */
  /* nop */
L_11653f68:;
  /* 11653f68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11653f69 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11653f6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11653f6d je 0x11653f76 */
  if (C.zf) goto L_11653f76;
  /* 11653f6f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11653f70 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11653f70");
  /* 11653f74 jae 0x11653f68 */
  if (!C.cf) goto L_11653f68;
L_11653f76:;
  /* 11653f76 mov eax, ecx */
  EAX = (ECX);
  /* 11653f78 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653f7b pop esi */
  ESI = (pop32());
  /* 11653f7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11653f7d ret  */
  ESPCHK(0x11653f40u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11653f80 (56 bytes, 31 insns) */
void f_11653f80(void) {
  FTRACE(0x11653f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11653f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11653f81 mov ebp, esp */
  EBP = (ESP);
  /* 11653f83 push edi */
  push32((uint32_t)(EDI));
  /* 11653f84 push esi */
  push32((uint32_t)(ESI));
  /* 11653f85 push ebx */
  push32((uint32_t)(EBX));
  /* 11653f86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11653f89 jecxz 0x11653fb1 */
  x86_unimpl("jecxz @ 0x11653f89");
  /* 11653f8b mov ebx, ecx */
  EBX = (ECX);
  /* 11653f8d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11653f90 mov esi, edi */
  ESI = (EDI);
  /* 11653f92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11653f94 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11653f96 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11653f98 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11653f9a mov edi, esi */
  EDI = (ESI);
  /* 11653f9c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11653f9f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11653fa1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11653fa4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11653fa6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11653fa9 ja 0x11653faf */
  if ((!C.cf&&!C.zf)) goto L_11653faf;
  /* 11653fab je 0x11653fb1 */
  if (C.zf) goto L_11653fb1;
  /* 11653fad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11653fae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11653faf:;
  /* 11653faf not ecx */
  ECX = (~(ECX));
L_11653fb1:;
  /* 11653fb1 mov eax, ecx */
  EAX = (ECX);
  /* 11653fb3 pop ebx */
  EBX = (pop32());
  /* 11653fb4 pop esi */
  ESI = (pop32());
  /* 11653fb5 pop edi */
  EDI = (pop32());
  /* 11653fb6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11653fb7 ret  */
  ESPCHK(0x11653f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013fc0 @ 0x11653fc0 (58 bytes, 32 insns) */
void f_11653fc0(void) {
  FTRACE(0x11653fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11653fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11653fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11653fc3 push esi */
  push32((uint32_t)(ESI));
  /* 11653fc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11653fc6 push eax */
  push32((uint32_t)(EAX));
  /* 11653fc7 push eax */
  push32((uint32_t)(EAX));
  /* 11653fc8 push eax */
  push32((uint32_t)(EAX));
  /* 11653fc9 push eax */
  push32((uint32_t)(EAX));
  /* 11653fca push eax */
  push32((uint32_t)(EAX));
  /* 11653fcb push eax */
  push32((uint32_t)(EAX));
  /* 11653fcc push eax */
  push32((uint32_t)(EAX));
  /* 11653fcd push eax */
  push32((uint32_t)(EAX));
  /* 11653fce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11653fd1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11653fd4:;
  /* 11653fd4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11653fd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11653fd8 je 0x11653fe1 */
  if (C.zf) goto L_11653fe1;
  /* 11653fda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11653fdb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11653fdb");
  /* 11653fdf jmp 0x11653fd4 */
  goto L_11653fd4;
L_11653fe1:;
  /* 11653fe1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11653fe4:;
  /* 11653fe4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11653fe6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11653fe8 je 0x11653ff4 */
  if (C.zf) goto L_11653ff4;
  /* 11653fea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11653feb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11653feb");
  /* 11653fef jae 0x11653fe4 */
  if (!C.cf) goto L_11653fe4;
  /* 11653ff1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11653ff4:;
  /* 11653ff4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11653ff7 pop esi */
  ESI = (pop32());
  /* 11653ff8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11653ff9 ret  */
  ESPCHK(0x11653fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014000 @ 0x11654000 (512 bytes, 147 insns) */
void f_11654000(void) {
  FTRACE(0x11654000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654000 push ebp */
  push32((uint32_t)(EBP));
  /* 11654001 mov ebp, esp */
  EBP = (ESP);
  /* 11654003 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654006 cmp dword ptr [0x11676234], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165400d jne 0x11654032 */
  if (!C.zf) goto L_11654032;
  /* 1165400f call 0x11654ad0 */
  push32(0x11654014u); f_11654ad0();
  /* 11654014 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11654016 je 0x11654022 */
  if (C.zf) goto L_11654022;
  /* 11654018 mov eax, dword ptr [0x116782e0] */
  EAX = (r32((uint32_t)(0x116782e0)));
  /* 1165401d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11654020 jmp 0x11654029 */
  goto L_11654029;
L_11654022:;
  /* 11654022 mov dword ptr [ebp - 8], 0x11654b20 */
  w32((uint32_t)(EBP + -0x8), (0x11654b20u));
L_11654029:;
  /* 11654029 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1165402c mov dword ptr [0x11676234], ecx */
  w32((uint32_t)(0x11676234), (ECX));
L_11654032:;
  /* 11654032 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654036 jne 0x11654042 */
  if (!C.zf) goto L_11654042;
  /* 11654038 call 0x11654920 */
  push32(0x1165403du); f_11654920();
  /* 1165403d jmp 0x1165410e */
  goto L_1165410e;
L_11654042:;
  /* 11654042 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654045 mov dword ptr [0x11676224], edx */
  w32((uint32_t)(0x11676224), (EDX));
  /* 1165404b cmp dword ptr [0x11676224], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676224))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654052 je 0x11654074 */
  if (C.zf) goto L_11654074;
  /* 11654054 mov eax, dword ptr [0x11676224] */
  EAX = (r32((uint32_t)(0x11676224)));
  /* 11654059 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1165405c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1165405e je 0x11654074 */
  if (C.zf) goto L_11654074;
  /* 11654060 push 0x11676224 */
  push32((uint32_t)(0x11676224u));
  /* 11654065 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11654067 push 0x11674c00 */
  push32((uint32_t)(0x11674c00u));
  /* 1165406c call 0x11654200 */
  push32(0x11654071u); f_11654200();
  /* 11654071 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11654074:;
  /* 11654074 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654077 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1165407a mov dword ptr [0x11676228], edx */
  w32((uint32_t)(0x11676228), (EDX));
  /* 11654080 cmp dword ptr [0x11676228], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676228))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654087 je 0x116540a9 */
  if (C.zf) goto L_116540a9;
  /* 11654089 mov eax, dword ptr [0x11676228] */
  EAX = (r32((uint32_t)(0x11676228)));
  /* 1165408e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11654091 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11654093 je 0x116540a9 */
  if (C.zf) goto L_116540a9;
  /* 11654095 push 0x11676228 */
  push32((uint32_t)(0x11676228u));
  /* 1165409a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1165409c push 0x11674b48 */
  push32((uint32_t)(0x11674b48u));
  /* 116540a1 call 0x11654200 */
  push32(0x116540a6u); f_11654200();
  /* 116540a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116540a9:;
  /* 116540a9 mov dword ptr [0x1167622c], 0 */
  w32((uint32_t)(0x1167622c), (0x0u));
  /* 116540b3 cmp dword ptr [0x11676224], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676224))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116540ba je 0x116540ed */
  if (C.zf) goto L_116540ed;
  /* 116540bc mov edx, dword ptr [0x11676224] */
  EDX = (r32((uint32_t)(0x11676224)));
  /* 116540c2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116540c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116540c7 je 0x116540ed */
  if (C.zf) goto L_116540ed;
  /* 116540c9 cmp dword ptr [0x11676228], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676228))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116540d0 je 0x116540e6 */
  if (C.zf) goto L_116540e6;
  /* 116540d2 mov ecx, dword ptr [0x11676228] */
  ECX = (r32((uint32_t)(0x11676228)));
  /* 116540d8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116540db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116540dd je 0x116540e6 */
  if (C.zf) goto L_116540e6;
  /* 116540df call 0x11654290 */
  push32(0x116540e4u); f_11654290();
  /* 116540e4 jmp 0x116540eb */
  goto L_116540eb;
L_116540e6:;
  /* 116540e6 call 0x11654680 */
  push32(0x116540ebu); f_11654680();
L_116540eb:;
  /* 116540eb jmp 0x1165410e */
  goto L_1165410e;
L_116540ed:;
  /* 116540ed cmp dword ptr [0x11676228], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676228))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116540f4 je 0x11654109 */
  if (C.zf) goto L_11654109;
  /* 116540f6 mov eax, dword ptr [0x11676228] */
  EAX = (r32((uint32_t)(0x11676228)));
  /* 116540fb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116540fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11654100 je 0x11654109 */
  if (C.zf) goto L_11654109;
  /* 11654102 call 0x11654820 */
  push32(0x11654107u); f_11654820();
  /* 11654107 jmp 0x1165410e */
  goto L_1165410e;
L_11654109:;
  /* 11654109 call 0x11654920 */
  push32(0x1165410eu); f_11654920();
L_1165410e:;
  /* 1165410e cmp dword ptr [0x1167622c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1167622c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654115 jne 0x1165411e */
  if (!C.zf) goto L_1165411e;
  /* 11654117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11654119 jmp 0x116541fc */
  goto L_116541fc;
L_1165411e:;
  /* 1165411e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654121 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654127 push edx */
  push32((uint32_t)(EDX));
  /* 11654128 call 0x11654950 */
  push32(0x1165412du); f_11654950();
  /* 1165412d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654130 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11654133 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654137 je 0x1165414c */
  if (C.zf) goto L_1165414c;
  /* 11654139 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165413c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11654141 push eax */
  push32((uint32_t)(EAX));
  /* 11654142 call dword ptr [0x116782d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782d8))), 0x11654148u);
  /* 11654148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165414a jne 0x11654153 */
  if (!C.zf) goto L_11654153;
L_1165414c:;
  /* 1165414c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1165414e jmp 0x116541fc */
  goto L_116541fc;
L_11654153:;
  /* 11654153 push 1 */
  push32((uint32_t)(0x1u));
  /* 11654155 mov ecx, dword ptr [0x11676214] */
  ECX = (r32((uint32_t)(0x11676214)));
  /* 1165415b push ecx */
  push32((uint32_t)(ECX));
  /* 1165415c call dword ptr [0x116782dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782dc))), 0x11654162u);
  /* 11654162 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11654164 jne 0x1165416d */
  if (!C.zf) goto L_1165416d;
  /* 11654166 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11654168 jmp 0x116541fc */
  goto L_116541fc;
L_1165416d:;
  /* 1165416d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654171 je 0x11654198 */
  if (C.zf) goto L_11654198;
  /* 11654173 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11654176 mov ax, word ptr [0x11676214] */
  AX = (r16((uint32_t)(0x11676214)));
  /* 1165417c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1165417f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11654182 mov dx, word ptr [0x11676230] */
  DX = (r16((uint32_t)(0x11676230)));
  /* 11654189 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1165418d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11654190 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11654194 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11654198:;
  /* 11654198 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165419c je 0x116541f7 */
  if (C.zf) goto L_116541f7;
  /* 1165419e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 116541a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116541a3 push edx */
  push32((uint32_t)(EDX));
  /* 116541a4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 116541a9 mov eax, dword ptr [0x11676214] */
  EAX = (r32((uint32_t)(0x11676214)));
  /* 116541ae push eax */
  push32((uint32_t)(EAX));
  /* 116541af call dword ptr [0x11676234] */
  call_ind((uint32_t)(r32((uint32_t)(0x11676234))), 0x116541b5u);
  /* 116541b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116541b7 jne 0x116541bd */
  if (!C.zf) goto L_116541bd;
  /* 116541b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116541bb jmp 0x116541fc */
  goto L_116541fc;
L_116541bd:;
  /* 116541bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 116541bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116541c2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116541c5 push ecx */
  push32((uint32_t)(ECX));
  /* 116541c6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 116541cb mov edx, dword ptr [0x11676230] */
  EDX = (r32((uint32_t)(0x11676230)));
  /* 116541d1 push edx */
  push32((uint32_t)(EDX));
  /* 116541d2 call dword ptr [0x11676234] */
  call_ind((uint32_t)(r32((uint32_t)(0x11676234))), 0x116541d8u);
  /* 116541d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116541da jne 0x116541e0 */
  if (!C.zf) goto L_116541e0;
  /* 116541dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116541de jmp 0x116541fc */
  goto L_116541fc;
L_116541e0:;
  /* 116541e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 116541e2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116541e5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116541ea push eax */
  push32((uint32_t)(EAX));
  /* 116541eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116541ee push ecx */
  push32((uint32_t)(ECX));
  /* 116541ef call 0x11649400 */
  push32(0x116541f4u); f_11649400();
  /* 116541f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116541f7:;
  /* 116541f7 mov eax, 1 */
  EAX = (0x1u);
L_116541fc:;
  /* 116541fc mov esp, ebp */
  ESP = (EBP);
  /* 116541fe pop ebp */
  EBP = (pop32());
  /* 116541ff ret  */
  ESPCHK(0x11654000u, _esp0);
  ESP += 4; return;
}

/* FUN_10014200 @ 0x11654200 (130 bytes, 47 insns) */
void f_11654200(void) {
  FTRACE(0x11654200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654200 push ebp */
  push32((uint32_t)(EBP));
  /* 11654201 mov ebp, esp */
  EBP = (ESP);
  /* 11654203 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654206 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1165420d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11654214:;
  /* 11654214 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11654217 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165421a jg 0x1165427e */
  if ((!C.zf&&C.sf==C.of)) goto L_1165427e;
  /* 1165421c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654220 je 0x1165427e */
  if (C.zf) goto L_1165427e;
  /* 11654222 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11654225 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654228 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11654229 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165422b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1165422d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11654230 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11654233 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654236 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11654239 push eax */
  push32((uint32_t)(EAX));
  /* 1165423a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165423d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1165423f push edx */
  push32((uint32_t)(EDX));
  /* 11654240 call 0x11657590 */
  push32(0x11654245u); f_11657590();
  /* 11654245 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654248 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1165424b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165424f jne 0x11654262 */
  if (!C.zf) goto L_11654262;
  /* 11654251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11654254 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654257 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1165425b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1165425e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11654260 jmp 0x1165427c */
  goto L_1165427c;
L_11654262:;
  /* 11654262 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654266 jge 0x11654273 */
  if ((C.sf==C.of)) goto L_11654273;
  /* 11654268 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1165426b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165426e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11654271 jmp 0x1165427c */
  goto L_1165427c;
L_11654273:;
  /* 11654273 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11654276 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654279 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1165427c:;
  /* 1165427c jmp 0x11654214 */
  goto L_11654214;
L_1165427e:;
  /* 1165427e mov esp, ebp */
  ESP = (EBP);
  /* 11654280 pop ebp */
  EBP = (pop32());
  /* 11654281 ret  */
  ESPCHK(0x11654200u, _esp0);
  ESP += 4; return;
}

/* FUN_10014290 @ 0x11654290 (186 bytes, 50 insns) */
void f_11654290(void) {
  FTRACE(0x11654290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654290 push ebp */
  push32((uint32_t)(EBP));
  /* 11654291 mov ebp, esp */
  EBP = (ESP);
  /* 11654293 push ecx */
  push32((uint32_t)(ECX));
  /* 11654294 mov eax, dword ptr [0x11676224] */
  EAX = (r32((uint32_t)(0x11676224)));
  /* 11654299 push eax */
  push32((uint32_t)(EAX));
  /* 1165429a call 0x116496f0 */
  push32(0x1165429fu); f_116496f0();
  /* 1165429f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116542a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116542a4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116542a7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 116542aa mov dword ptr [0x11676220], ecx */
  w32((uint32_t)(0x11676220), (ECX));
  /* 116542b0 mov edx, dword ptr [0x11676228] */
  EDX = (r32((uint32_t)(0x11676228)));
  /* 116542b6 push edx */
  push32((uint32_t)(EDX));
  /* 116542b7 call 0x116496f0 */
  push32(0x116542bcu); f_116496f0();
  /* 116542bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116542bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116542c1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116542c4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 116542c7 mov dword ptr [0x11676218], ecx */
  w32((uint32_t)(0x11676218), (ECX));
  /* 116542cd mov dword ptr [0x11676214], 0 */
  w32((uint32_t)(0x11676214), (0x0u));
  /* 116542d7 cmp dword ptr [0x11676220], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116542de je 0x116542e9 */
  if (C.zf) goto L_116542e9;
  /* 116542e0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 116542e7 jmp 0x116542fb */
  goto L_116542fb;
L_116542e9:;
  /* 116542e9 mov edx, dword ptr [0x11676224] */
  EDX = (r32((uint32_t)(0x11676224)));
  /* 116542ef push edx */
  push32((uint32_t)(EDX));
  /* 116542f0 call 0x11654d30 */
  push32(0x116542f5u); f_11654d30();
  /* 116542f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116542f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116542fb:;
  /* 116542fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116542fe mov dword ptr [0x1167621c], eax */
  w32((uint32_t)(0x1167621c), (EAX));
  /* 11654303 push 1 */
  push32((uint32_t)(0x1u));
  /* 11654305 push 0x11654350 */
  push32((uint32_t)(0x11654350u));
  /* 1165430a call dword ptr [0x116782d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782d0))), 0x11654310u);
  /* 11654310 mov ecx, dword ptr [0x1167622c] */
  ECX = (r32((uint32_t)(0x1167622c)));
  /* 11654316 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1165431c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1165431e je 0x1165433c */
  if (C.zf) goto L_1165433c;
  /* 11654320 mov edx, dword ptr [0x1167622c] */
  EDX = (r32((uint32_t)(0x1167622c)));
  /* 11654326 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1165432c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1165432e je 0x1165433c */
  if (C.zf) goto L_1165433c;
  /* 11654330 mov eax, dword ptr [0x1167622c] */
  EAX = (r32((uint32_t)(0x1167622c)));
  /* 11654335 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11654338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165433a jne 0x11654346 */
  if (!C.zf) goto L_11654346;
L_1165433c:;
  /* 1165433c mov dword ptr [0x1167622c], 0 */
  w32((uint32_t)(0x1167622c), (0x0u));
L_11654346:;
  /* 11654346 mov esp, ebp */
  ESP = (EBP);
  /* 11654348 pop ebp */
  EBP = (pop32());
  /* 11654349 ret  */
  ESPCHK(0x11654290u, _esp0);
  ESP += 4; return;
}

/* FUN_10014350 @ 0x11654350 (804 bytes, 220 insns) */
void f_11654350(void) {
  FTRACE(0x11654350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654350 push ebp */
  push32((uint32_t)(EBP));
  /* 11654351 mov ebp, esp */
  EBP = (ESP);
  /* 11654353 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654356 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654359 push eax */
  push32((uint32_t)(EAX));
  /* 1165435a call 0x11654cb0 */
  push32(0x1165435fu); f_11654cb0();
  /* 1165435f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654362 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11654365 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11654367 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1165436a push ecx */
  push32((uint32_t)(ECX));
  /* 1165436b mov edx, dword ptr [0x11676218] */
  EDX = (r32((uint32_t)(0x11676218)));
  /* 11654371 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11654373 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654375 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1165437b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654381 push edx */
  push32((uint32_t)(EDX));
  /* 11654382 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11654385 push eax */
  push32((uint32_t)(EAX));
  /* 11654386 call dword ptr [0x11676234] */
  call_ind((uint32_t)(r32((uint32_t)(0x11676234))), 0x1165438cu);
  /* 1165438c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165438e jne 0x116543a4 */
  if (!C.zf) goto L_116543a4;
  /* 11654390 mov dword ptr [0x1167622c], 0 */
  w32((uint32_t)(0x1167622c), (0x0u));
  /* 1165439a mov eax, 1 */
  EAX = (0x1u);
  /* 1165439f jmp 0x1165466e */
  goto L_1165466e;
L_116543a4:;
  /* 116543a4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116543a7 push ecx */
  push32((uint32_t)(ECX));
  /* 116543a8 mov edx, dword ptr [0x11676228] */
  EDX = (r32((uint32_t)(0x11676228)));
  /* 116543ae push edx */
  push32((uint32_t)(EDX));
  /* 116543af call 0x11657590 */
  push32(0x116543b4u); f_11657590();
  /* 116543b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116543b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116543b9 jne 0x116544df */
  if (!C.zf) goto L_116544df;
  /* 116543bf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116543c1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 116543c4 push eax */
  push32((uint32_t)(EAX));
  /* 116543c5 mov ecx, dword ptr [0x11676220] */
  ECX = (r32((uint32_t)(0x11676220)));
  /* 116543cb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116543cd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116543cf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 116543d5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116543db push ecx */
  push32((uint32_t)(ECX));
  /* 116543dc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116543df push edx */
  push32((uint32_t)(EDX));
  /* 116543e0 call dword ptr [0x11676234] */
  call_ind((uint32_t)(r32((uint32_t)(0x11676234))), 0x116543e6u);
  /* 116543e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116543e8 jne 0x116543fe */
  if (!C.zf) goto L_116543fe;
  /* 116543ea mov dword ptr [0x1167622c], 0 */
  w32((uint32_t)(0x1167622c), (0x0u));
  /* 116543f4 mov eax, 1 */
  EAX = (0x1u);
  /* 116543f9 jmp 0x1165466e */
  goto L_1165466e;
L_116543fe:;
  /* 116543fe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11654401 push eax */
  push32((uint32_t)(EAX));
  /* 11654402 mov ecx, dword ptr [0x11676224] */
  ECX = (r32((uint32_t)(0x11676224)));
  /* 11654408 push ecx */
  push32((uint32_t)(ECX));
  /* 11654409 call 0x11657590 */
  push32(0x1165440eu); f_11657590();
  /* 1165440e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11654413 jne 0x11654440 */
  if (!C.zf) goto L_11654440;
  /* 11654415 mov edx, dword ptr [0x1167622c] */
  EDX = (r32((uint32_t)(0x1167622c)));
  /* 1165441b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11654421 mov dword ptr [0x1167622c], edx */
  w32((uint32_t)(0x1167622c), (EDX));
  /* 11654427 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1165442a mov dword ptr [0x11676230], eax */
  w32((uint32_t)(0x11676230), (EAX));
  /* 1165442f mov ecx, dword ptr [0x11676230] */
  ECX = (r32((uint32_t)(0x11676230)));
  /* 11654435 mov dword ptr [0x11676214], ecx */
  w32((uint32_t)(0x11676214), (ECX));
  /* 1165443b jmp 0x116544df */
  goto L_116544df;
L_11654440:;
  /* 11654440 mov edx, dword ptr [0x1167622c] */
  EDX = (r32((uint32_t)(0x1167622c)));
  /* 11654446 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11654449 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1165444b jne 0x116544df */
  if (!C.zf) goto L_116544df;
  /* 11654451 cmp dword ptr [0x1167621c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1167621c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654458 je 0x116544ad */
  if (C.zf) goto L_116544ad;
  /* 1165445a mov eax, dword ptr [0x1167621c] */
  EAX = (r32((uint32_t)(0x1167621c)));
  /* 1165445f push eax */
  push32((uint32_t)(EAX));
  /* 11654460 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11654463 push ecx */
  push32((uint32_t)(ECX));
  /* 11654464 mov edx, dword ptr [0x11676224] */
  EDX = (r32((uint32_t)(0x11676224)));
  /* 1165446a push edx */
  push32((uint32_t)(EDX));
  /* 1165446b call 0x11657660 */
  push32(0x11654470u); f_11657660();
  /* 11654470 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654473 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11654475 jne 0x116544ad */
  if (!C.zf) goto L_116544ad;
  /* 11654477 mov eax, dword ptr [0x1167622c] */
  EAX = (r32((uint32_t)(0x1167622c)));
  /* 1165447c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1165447e mov dword ptr [0x1167622c], eax */
  w32((uint32_t)(0x1167622c), (EAX));
  /* 11654483 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11654486 mov dword ptr [0x11676230], ecx */
  w32((uint32_t)(0x11676230), (ECX));
  /* 1165448c mov edx, dword ptr [0x11676224] */
  EDX = (r32((uint32_t)(0x11676224)));
  /* 11654492 push edx */
  push32((uint32_t)(EDX));
  /* 11654493 call 0x116496f0 */
  push32(0x11654498u); f_116496f0();
  /* 11654498 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165449b cmp eax, dword ptr [0x1167621c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1167621c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116544a1 jne 0x116544ab */
  if (!C.zf) goto L_116544ab;
  /* 116544a3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116544a6 mov dword ptr [0x11676214], eax */
  w32((uint32_t)(0x11676214), (EAX));
L_116544ab:;
  /* 116544ab jmp 0x116544df */
  goto L_116544df;
L_116544ad:;
  /* 116544ad mov ecx, dword ptr [0x1167622c] */
  ECX = (r32((uint32_t)(0x1167622c)));
  /* 116544b3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116544b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116544b8 jne 0x116544df */
  if (!C.zf) goto L_116544df;
  /* 116544ba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116544bd push edx */
  push32((uint32_t)(EDX));
  /* 116544be call 0x116549f0 */
  push32(0x116544c3u); f_116549f0();
  /* 116544c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116544c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116544c8 je 0x116544df */
  if (C.zf) goto L_116544df;
  /* 116544ca mov eax, dword ptr [0x1167622c] */
  EAX = (r32((uint32_t)(0x1167622c)));
  /* 116544cf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 116544d1 mov dword ptr [0x1167622c], eax */
  w32((uint32_t)(0x1167622c), (EAX));
  /* 116544d6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116544d9 mov dword ptr [0x11676230], ecx */
  w32((uint32_t)(0x11676230), (ECX));
L_116544df:;
  /* 116544df mov edx, dword ptr [0x1167622c] */
  EDX = (r32((uint32_t)(0x1167622c)));
  /* 116544e5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 116544eb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116544f1 je 0x11654661 */
  if (C.zf) goto L_11654661;
  /* 116544f7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 116544f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 116544fc push eax */
  push32((uint32_t)(EAX));
  /* 116544fd mov ecx, dword ptr [0x11676220] */
  ECX = (r32((uint32_t)(0x11676220)));
  /* 11654503 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11654505 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654507 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1165450d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654513 push ecx */
  push32((uint32_t)(ECX));
  /* 11654514 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11654517 push edx */
  push32((uint32_t)(EDX));
  /* 11654518 call dword ptr [0x11676234] */
  call_ind((uint32_t)(r32((uint32_t)(0x11676234))), 0x1165451eu);
  /* 1165451e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11654520 jne 0x11654536 */
  if (!C.zf) goto L_11654536;
  /* 11654522 mov dword ptr [0x1167622c], 0 */
  w32((uint32_t)(0x1167622c), (0x0u));
  /* 1165452c mov eax, 1 */
  EAX = (0x1u);
  /* 11654531 jmp 0x1165466e */
  goto L_1165466e;
L_11654536:;
  /* 11654536 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11654539 push eax */
  push32((uint32_t)(EAX));
  /* 1165453a mov ecx, dword ptr [0x11676224] */
  ECX = (r32((uint32_t)(0x11676224)));
  /* 11654540 push ecx */
  push32((uint32_t)(ECX));
  /* 11654541 call 0x11657590 */
  push32(0x11654546u); f_11657590();
  /* 11654546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654549 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165454b jne 0x11654600 */
  if (!C.zf) goto L_11654600;
  /* 11654551 mov edx, dword ptr [0x1167622c] */
  EDX = (r32((uint32_t)(0x1167622c)));
  /* 11654557 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1165455a mov dword ptr [0x1167622c], edx */
  w32((uint32_t)(0x1167622c), (EDX));
  /* 11654560 cmp dword ptr [0x11676220], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654567 je 0x1165458a */
  if (C.zf) goto L_1165458a;
  /* 11654569 mov eax, dword ptr [0x1167622c] */
  EAX = (r32((uint32_t)(0x1167622c)));
  /* 1165456e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11654571 mov dword ptr [0x1167622c], eax */
  w32((uint32_t)(0x1167622c), (EAX));
  /* 11654576 cmp dword ptr [0x11676214], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676214))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165457d jne 0x11654588 */
  if (!C.zf) goto L_11654588;
  /* 1165457f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11654582 mov dword ptr [0x11676214], ecx */
  w32((uint32_t)(0x11676214), (ECX));
L_11654588:;
  /* 11654588 jmp 0x116545fe */
  goto L_116545fe;
L_1165458a:;
  /* 1165458a cmp dword ptr [0x1167621c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1167621c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654591 je 0x116545df */
  if (C.zf) goto L_116545df;
  /* 11654593 mov edx, dword ptr [0x11676224] */
  EDX = (r32((uint32_t)(0x11676224)));
  /* 11654599 push edx */
  push32((uint32_t)(EDX));
  /* 1165459a call 0x116496f0 */
  push32(0x1165459fu); f_116496f0();
  /* 1165459f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116545a2 cmp eax, dword ptr [0x1167621c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1167621c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116545a8 jne 0x116545df */
  if (!C.zf) goto L_116545df;
  /* 116545aa push 1 */
  push32((uint32_t)(0x1u));
  /* 116545ac mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116545af push eax */
  push32((uint32_t)(EAX));
  /* 116545b0 call 0x11654a40 */
  push32(0x116545b5u); f_11654a40();
  /* 116545b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116545b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116545ba je 0x116545dd */
  if (C.zf) goto L_116545dd;
  /* 116545bc mov ecx, dword ptr [0x1167622c] */
  ECX = (r32((uint32_t)(0x1167622c)));
  /* 116545c2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 116545c5 mov dword ptr [0x1167622c], ecx */
  w32((uint32_t)(0x1167622c), (ECX));
  /* 116545cb cmp dword ptr [0x11676214], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676214))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116545d2 jne 0x116545dd */
  if (!C.zf) goto L_116545dd;
  /* 116545d4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116545d7 mov dword ptr [0x11676214], edx */
  w32((uint32_t)(0x11676214), (EDX));
L_116545dd:;
  /* 116545dd jmp 0x116545fe */
  goto L_116545fe;
L_116545df:;
  /* 116545df mov eax, dword ptr [0x1167622c] */
  EAX = (r32((uint32_t)(0x1167622c)));
  /* 116545e4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 116545e7 mov dword ptr [0x1167622c], eax */
  w32((uint32_t)(0x1167622c), (EAX));
  /* 116545ec cmp dword ptr [0x11676214], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676214))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116545f3 jne 0x116545fe */
  if (!C.zf) goto L_116545fe;
  /* 116545f5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116545f8 mov dword ptr [0x11676214], ecx */
  w32((uint32_t)(0x11676214), (ECX));
L_116545fe:;
  /* 116545fe jmp 0x11654661 */
  goto L_11654661;
L_11654600:;
  /* 11654600 cmp dword ptr [0x11676220], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654607 jne 0x11654661 */
  if (!C.zf) goto L_11654661;
  /* 11654609 cmp dword ptr [0x1167621c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1167621c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654610 je 0x11654661 */
  if (C.zf) goto L_11654661;
  /* 11654612 mov edx, dword ptr [0x1167621c] */
  EDX = (r32((uint32_t)(0x1167621c)));
  /* 11654618 push edx */
  push32((uint32_t)(EDX));
  /* 11654619 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1165461c push eax */
  push32((uint32_t)(EAX));
  /* 1165461d mov ecx, dword ptr [0x11676224] */
  ECX = (r32((uint32_t)(0x11676224)));
  /* 11654623 push ecx */
  push32((uint32_t)(ECX));
  /* 11654624 call 0x11657660 */
  push32(0x11654629u); f_11657660();
  /* 11654629 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165462c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165462e jne 0x11654661 */
  if (!C.zf) goto L_11654661;
  /* 11654630 push 0 */
  push32((uint32_t)(0x0u));
  /* 11654632 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11654635 push edx */
  push32((uint32_t)(EDX));
  /* 11654636 call 0x11654a40 */
  push32(0x1165463bu); f_11654a40();
  /* 1165463b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1165463e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11654640 je 0x11654661 */
  if (C.zf) goto L_11654661;
  /* 11654642 mov eax, dword ptr [0x1167622c] */
  EAX = (r32((uint32_t)(0x1167622c)));
  /* 11654647 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1165464a mov dword ptr [0x1167622c], eax */
  w32((uint32_t)(0x1167622c), (EAX));
  /* 1165464f cmp dword ptr [0x11676214], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676214))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654656 jne 0x11654661 */
  if (!C.zf) goto L_11654661;
  /* 11654658 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1165465b mov dword ptr [0x11676214], ecx */
  w32((uint32_t)(0x11676214), (ECX));
L_11654661:;
  /* 11654661 mov eax, dword ptr [0x1167622c] */
  EAX = (r32((uint32_t)(0x1167622c)));
  /* 11654666 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11654669 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1165466b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1165466d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1165466e:;
  /* 1165466e mov esp, ebp */
  ESP = (EBP);
  /* 11654670 pop ebp */
  EBP = (pop32());
  /* 11654671 ret 4 */
  ESPCHK(0x11654350u, _esp0);
  ESP += 8; return;
}

/* FUN_10014680 @ 0x11654680 (116 bytes, 33 insns) */
void f_11654680(void) {
  FTRACE(0x11654680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654680 push ebp */
  push32((uint32_t)(EBP));
  /* 11654681 mov ebp, esp */
  EBP = (ESP);
  /* 11654683 push ecx */
  push32((uint32_t)(ECX));
  /* 11654684 mov eax, dword ptr [0x11676224] */
  EAX = (r32((uint32_t)(0x11676224)));
  /* 11654689 push eax */
  push32((uint32_t)(EAX));
  /* 1165468a call 0x116496f0 */
  push32(0x1165468fu); f_116496f0();
  /* 1165468f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654692 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11654694 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654697 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1165469a mov dword ptr [0x11676220], ecx */
  w32((uint32_t)(0x11676220), (ECX));
  /* 116546a0 cmp dword ptr [0x11676220], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116546a7 je 0x116546b2 */
  if (C.zf) goto L_116546b2;
  /* 116546a9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 116546b0 jmp 0x116546c4 */
  goto L_116546c4;
L_116546b2:;
  /* 116546b2 mov edx, dword ptr [0x11676224] */
  EDX = (r32((uint32_t)(0x11676224)));
  /* 116546b8 push edx */
  push32((uint32_t)(EDX));
  /* 116546b9 call 0x11654d30 */
  push32(0x116546beu); f_11654d30();
  /* 116546be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116546c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116546c4:;
  /* 116546c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116546c7 mov dword ptr [0x1167621c], eax */
  w32((uint32_t)(0x1167621c), (EAX));
  /* 116546cc push 1 */
  push32((uint32_t)(0x1u));
  /* 116546ce push 0x11654700 */
  push32((uint32_t)(0x11654700u));
  /* 116546d3 call dword ptr [0x116782d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782d0))), 0x116546d9u);
  /* 116546d9 mov ecx, dword ptr [0x1167622c] */
  ECX = (r32((uint32_t)(0x1167622c)));
  /* 116546df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116546e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116546e4 jne 0x116546f0 */
  if (!C.zf) goto L_116546f0;
  /* 116546e6 mov dword ptr [0x1167622c], 0 */
  w32((uint32_t)(0x1167622c), (0x0u));
L_116546f0:;
  /* 116546f0 mov esp, ebp */
  ESP = (EBP);
  /* 116546f2 pop ebp */
  EBP = (pop32());
  /* 116546f3 ret  */
  ESPCHK(0x11654680u, _esp0);
  ESP += 4; return;
}

/* FUN_10014700 @ 0x11654700 (287 bytes, 86 insns) */
void f_11654700(void) {
  FTRACE(0x11654700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654700 push ebp */
  push32((uint32_t)(EBP));
  /* 11654701 mov ebp, esp */
  EBP = (ESP);
  /* 11654703 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654709 push eax */
  push32((uint32_t)(EAX));
  /* 1165470a call 0x11654cb0 */
  push32(0x1165470fu); f_11654cb0();
  /* 1165470f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654712 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11654715 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11654717 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1165471a push ecx */
  push32((uint32_t)(ECX));
  /* 1165471b mov edx, dword ptr [0x11676220] */
  EDX = (r32((uint32_t)(0x11676220)));
  /* 11654721 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11654723 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654725 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1165472b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654731 push edx */
  push32((uint32_t)(EDX));
  /* 11654732 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11654735 push eax */
  push32((uint32_t)(EAX));
  /* 11654736 call dword ptr [0x11676234] */
  call_ind((uint32_t)(r32((uint32_t)(0x11676234))), 0x1165473cu);
  /* 1165473c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1165473e jne 0x11654754 */
  if (!C.zf) goto L_11654754;
  /* 11654740 mov dword ptr [0x1167622c], 0 */
  w32((uint32_t)(0x1167622c), (0x0u));
  /* 1165474a mov eax, 1 */
  EAX = (0x1u);
  /* 1165474f jmp 0x11654819 */
  goto L_11654819;
L_11654754:;
  /* 11654754 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11654757 push ecx */
  push32((uint32_t)(ECX));
  /* 11654758 mov edx, dword ptr [0x11676224] */
  EDX = (r32((uint32_t)(0x11676224)));
  /* 1165475e push edx */
  push32((uint32_t)(EDX));
  /* 1165475f call 0x11657590 */
  push32(0x11654764u); f_11657590();
  /* 11654764 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654767 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11654769 jne 0x116547a9 */
  if (!C.zf) goto L_116547a9;
  /* 1165476b cmp dword ptr [0x11676220], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654772 jne 0x11654786 */
  if (!C.zf) goto L_11654786;
  /* 11654774 push 1 */
  push32((uint32_t)(0x1u));
  /* 11654776 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11654779 push eax */
  push32((uint32_t)(EAX));
  /* 1165477a call 0x11654a40 */
  push32(0x1165477fu); f_11654a40();
  /* 1165477f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654782 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11654784 je 0x116547a7 */
  if (C.zf) goto L_116547a7;
L_11654786:;
  /* 11654786 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11654789 mov dword ptr [0x11676230], ecx */
  w32((uint32_t)(0x11676230), (ECX));
  /* 1165478f mov edx, dword ptr [0x11676230] */
  EDX = (r32((uint32_t)(0x11676230)));
  /* 11654795 mov dword ptr [0x11676214], edx */
  w32((uint32_t)(0x11676214), (EDX));
  /* 1165479b mov eax, dword ptr [0x1167622c] */
  EAX = (r32((uint32_t)(0x1167622c)));
  /* 116547a0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 116547a2 mov dword ptr [0x1167622c], eax */
  w32((uint32_t)(0x1167622c), (EAX));
L_116547a7:;
  /* 116547a7 jmp 0x1165480c */
  goto L_1165480c;
L_116547a9:;
  /* 116547a9 cmp dword ptr [0x11676220], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11676220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116547b0 jne 0x1165480c */
  if (!C.zf) goto L_1165480c;
  /* 116547b2 cmp dword ptr [0x1167621c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1167621c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116547b9 je 0x1165480c */
  if (C.zf) goto L_1165480c;
  /* 116547bb mov ecx, dword ptr [0x1167621c] */
  ECX = (r32((uint32_t)(0x1167621c)));
  /* 116547c1 push ecx */
  push32((uint32_t)(ECX));
  /* 116547c2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 116547c5 push edx */
  push32((uint32_t)(EDX));
  /* 116547c6 mov eax, dword ptr [0x11676224] */
  EAX = (r32((uint32_t)(0x11676224)));
  /* 116547cb push eax */
  push32((uint32_t)(EAX));
  /* 116547cc call 0x11657660 */
  push32(0x116547d1u); f_11657660();
  /* 116547d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116547d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116547d6 jne 0x1165480c */
  if (!C.zf) goto L_1165480c;
  /* 116547d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116547da mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116547dd push ecx */
  push32((uint32_t)(ECX));
  /* 116547de call 0x11654a40 */
  push32(0x116547e3u); f_11654a40();
  /* 116547e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116547e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116547e8 je 0x1165480c */
  if (C.zf) goto L_1165480c;
  /* 116547ea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116547ed mov dword ptr [0x11676230], edx */
  w32((uint32_t)(0x11676230), (EDX));
  /* 116547f3 mov eax, dword ptr [0x11676230] */
  EAX = (r32((uint32_t)(0x11676230)));
  /* 116547f8 mov dword ptr [0x11676214], eax */
  w32((uint32_t)(0x11676214), (EAX));
  /* 116547fd mov ecx, dword ptr [0x1167622c] */
  ECX = (r32((uint32_t)(0x1167622c)));
  /* 11654803 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11654806 mov dword ptr [0x1167622c], ecx */
  w32((uint32_t)(0x1167622c), (ECX));
L_1165480c:;
  /* 1165480c mov eax, dword ptr [0x1167622c] */
  EAX = (r32((uint32_t)(0x1167622c)));
  /* 11654811 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11654814 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11654816 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654818 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11654819:;
  /* 11654819 mov esp, ebp */
  ESP = (EBP);
  /* 1165481b pop ebp */
  EBP = (pop32());
  /* 1165481c ret 4 */
  ESPCHK(0x11654700u, _esp0);
  ESP += 8; return;
}

/* FUN_10014820 @ 0x11654820 (69 bytes, 20 insns) */
void f_11654820(void) {
  FTRACE(0x11654820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654820 push ebp */
  push32((uint32_t)(EBP));
  /* 11654821 mov ebp, esp */
  EBP = (ESP);
  /* 11654823 mov eax, dword ptr [0x11676228] */
  EAX = (r32((uint32_t)(0x11676228)));
  /* 11654828 push eax */
  push32((uint32_t)(EAX));
  /* 11654829 call 0x116496f0 */
  push32(0x1165482eu); f_116496f0();
  /* 1165482e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654831 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11654833 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654836 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11654839 mov dword ptr [0x11676218], ecx */
  w32((uint32_t)(0x11676218), (ECX));
  /* 1165483f push 1 */
  push32((uint32_t)(0x1u));
  /* 11654841 push 0x11654870 */
  push32((uint32_t)(0x11654870u));
  /* 11654846 call dword ptr [0x116782d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782d0))), 0x1165484cu);
  /* 1165484c mov edx, dword ptr [0x1167622c] */
  EDX = (r32((uint32_t)(0x1167622c)));
  /* 11654852 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11654855 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11654857 jne 0x11654863 */
  if (!C.zf) goto L_11654863;
  /* 11654859 mov dword ptr [0x1167622c], 0 */
  w32((uint32_t)(0x1167622c), (0x0u));
L_11654863:;
  /* 11654863 pop ebp */
  EBP = (pop32());
  /* 11654864 ret  */
  ESPCHK(0x11654820u, _esp0);
  ESP += 4; return;
}

/* FUN_10014870 @ 0x11654870 (172 bytes, 54 insns) */
void f_11654870(void) {
  FTRACE(0x11654870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654870 push ebp */
  push32((uint32_t)(EBP));
  /* 11654871 mov ebp, esp */
  EBP = (ESP);
  /* 11654873 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654879 push eax */
  push32((uint32_t)(EAX));
  /* 1165487a call 0x11654cb0 */
  push32(0x1165487fu); f_11654cb0();
  /* 1165487f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654882 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11654885 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11654887 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1165488a push ecx */
  push32((uint32_t)(ECX));
  /* 1165488b mov edx, dword ptr [0x11676218] */
  EDX = (r32((uint32_t)(0x11676218)));
  /* 11654891 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11654893 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654895 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1165489b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116548a1 push edx */
  push32((uint32_t)(EDX));
  /* 116548a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116548a5 push eax */
  push32((uint32_t)(EAX));
  /* 116548a6 call dword ptr [0x11676234] */
  call_ind((uint32_t)(r32((uint32_t)(0x11676234))), 0x116548acu);
  /* 116548ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116548ae jne 0x116548c1 */
  if (!C.zf) goto L_116548c1;
  /* 116548b0 mov dword ptr [0x1167622c], 0 */
  w32((uint32_t)(0x1167622c), (0x0u));
  /* 116548ba mov eax, 1 */
  EAX = (0x1u);
  /* 116548bf jmp 0x11654916 */
  goto L_11654916;
L_116548c1:;
  /* 116548c1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 116548c4 push ecx */
  push32((uint32_t)(ECX));
  /* 116548c5 mov edx, dword ptr [0x11676228] */
  EDX = (r32((uint32_t)(0x11676228)));
  /* 116548cb push edx */
  push32((uint32_t)(EDX));
  /* 116548cc call 0x11657590 */
  push32(0x116548d1u); f_11657590();
  /* 116548d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116548d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116548d6 jne 0x11654909 */
  if (!C.zf) goto L_11654909;
  /* 116548d8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116548db push eax */
  push32((uint32_t)(EAX));
  /* 116548dc call 0x116549f0 */
  push32(0x116548e1u); f_116549f0();
  /* 116548e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116548e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116548e6 je 0x11654909 */
  if (C.zf) goto L_11654909;
  /* 116548e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 116548eb mov dword ptr [0x11676230], ecx */
  w32((uint32_t)(0x11676230), (ECX));
  /* 116548f1 mov edx, dword ptr [0x11676230] */
  EDX = (r32((uint32_t)(0x11676230)));
  /* 116548f7 mov dword ptr [0x11676214], edx */
  w32((uint32_t)(0x11676214), (EDX));
  /* 116548fd mov eax, dword ptr [0x1167622c] */
  EAX = (r32((uint32_t)(0x1167622c)));
  /* 11654902 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11654904 mov dword ptr [0x1167622c], eax */
  w32((uint32_t)(0x1167622c), (EAX));
L_11654909:;
  /* 11654909 mov eax, dword ptr [0x1167622c] */
  EAX = (r32((uint32_t)(0x1167622c)));
  /* 1165490e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11654911 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11654913 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654915 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11654916:;
  /* 11654916 mov esp, ebp */
  ESP = (EBP);
  /* 11654918 pop ebp */
  EBP = (pop32());
  /* 11654919 ret 4 */
  ESPCHK(0x11654870u, _esp0);
  ESP += 8; return;
}

/* FUN_10014920 @ 0x11654920 (43 bytes, 11 insns) */
void f_11654920(void) {
  FTRACE(0x11654920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654920 push ebp */
  push32((uint32_t)(EBP));
  /* 11654921 mov ebp, esp */
  EBP = (ESP);
  /* 11654923 mov eax, dword ptr [0x1167622c] */
  EAX = (r32((uint32_t)(0x1167622c)));
  /* 11654928 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1165492d mov dword ptr [0x1167622c], eax */
  w32((uint32_t)(0x1167622c), (EAX));
  /* 11654932 call dword ptr [0x116782cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116782cc))), 0x11654938u);
  /* 11654938 mov dword ptr [0x11676230], eax */
  w32((uint32_t)(0x11676230), (EAX));
  /* 1165493d mov ecx, dword ptr [0x11676230] */
  ECX = (r32((uint32_t)(0x11676230)));
  /* 11654943 mov dword ptr [0x11676214], ecx */
  w32((uint32_t)(0x11676214), (ECX));
  /* 11654949 pop ebp */
  EBP = (pop32());
  /* 1165494a ret  */
  ESPCHK(0x11654920u, _esp0);
  ESP += 4; return;
}

/* FUN_10014950 @ 0x11654950 (155 bytes, 57 insns) */
void f_11654950(void) {
  FTRACE(0x11654950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654950 push ebp */
  push32((uint32_t)(EBP));
  /* 11654951 mov ebp, esp */
  EBP = (ESP);
  /* 11654953 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654956 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1165495a je 0x1165497b */
  if (C.zf) goto L_1165497b;
  /* 1165495c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165495f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11654962 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11654964 je 0x1165497b */
  if (C.zf) goto L_1165497b;
  /* 11654966 push 0x11671890 */
  push32((uint32_t)(0x11671890u));
  /* 1165496b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1165496e push edx */
  push32((uint32_t)(EDX));
  /* 1165496f call 0x11653eb0 */
  push32(0x11654974u); f_11653eb0();
  /* 11654974 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11654979 jne 0x116549a3 */
  if (!C.zf) goto L_116549a3;
L_1165497b:;
  /* 1165497b push 8 */
  push32((uint32_t)(0x8u));
  /* 1165497d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11654980 push eax */
  push32((uint32_t)(EAX));
  /* 11654981 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11654986 mov ecx, dword ptr [0x11676230] */
  ECX = (r32((uint32_t)(0x11676230)));
  /* 1165498c push ecx */
  push32((uint32_t)(ECX));
  /* 1165498d call dword ptr [0x11676234] */
  call_ind((uint32_t)(r32((uint32_t)(0x11676234))), 0x11654993u);
  /* 11654993 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11654995 jne 0x1165499b */
  if (!C.zf) goto L_1165499b;
  /* 11654997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11654999 jmp 0x116549e7 */
  goto L_116549e7;
L_1165499b:;
  /* 1165499b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1165499e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 116549a1 jmp 0x116549db */
  goto L_116549db;
L_116549a3:;
  /* 116549a3 push 0x1167188c */
  push32((uint32_t)(0x1167188cu));
  /* 116549a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116549ab push eax */
  push32((uint32_t)(EAX));
  /* 116549ac call 0x11653eb0 */
  push32(0x116549b1u); f_11653eb0();
  /* 116549b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116549b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116549b6 jne 0x116549db */
  if (!C.zf) goto L_116549db;
  /* 116549b8 push 8 */
  push32((uint32_t)(0x8u));
  /* 116549ba lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 116549bd push ecx */
  push32((uint32_t)(ECX));
  /* 116549be push 0xb */
  push32((uint32_t)(0xbu));
  /* 116549c0 mov edx, dword ptr [0x11676230] */
  EDX = (r32((uint32_t)(0x11676230)));
  /* 116549c6 push edx */
  push32((uint32_t)(EDX));
  /* 116549c7 call dword ptr [0x11676234] */
  call_ind((uint32_t)(r32((uint32_t)(0x11676234))), 0x116549cdu);
  /* 116549cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116549cf jne 0x116549d5 */
  if (!C.zf) goto L_116549d5;
  /* 116549d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116549d3 jmp 0x116549e7 */
  goto L_116549e7;
L_116549d5:;
  /* 116549d5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 116549d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_116549db:;
  /* 116549db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116549de push ecx */
  push32((uint32_t)(ECX));
  /* 116549df call 0x11657770 */
  push32(0x116549e4u); f_11657770();
  /* 116549e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116549e7:;
  /* 116549e7 mov esp, ebp */
  ESP = (EBP);
  /* 116549e9 pop ebp */
  EBP = (pop32());
  /* 116549ea ret  */
  ESPCHK(0x11654950u, _esp0);
  ESP += 4; return;
}

/* FUN_100149f0 @ 0x116549f0 (79 bytes, 26 insns) */
void f_116549f0(void) {
  FTRACE(0x116549f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116549f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116549f1 mov ebp, esp */
  EBP = (ESP);
  /* 116549f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116549f6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 116549fa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 116549fe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11654a05 jmp 0x11654a10 */
  goto L_11654a10;
L_11654a07:;
  /* 11654a07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11654a0a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11654a0d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11654a10:;
  /* 11654a10 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654a14 jae 0x11654a36 */
  if (!C.cf) goto L_11654a36;
  /* 11654a16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11654a19 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11654a1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11654a22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11654a24 mov cx, word ptr [eax*2 + 0x11674b34] */
  CX = (r16((uint32_t)(EAX*2 + 0x11674b34)));
  /* 11654a2c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654a2e jne 0x11654a34 */
  if (!C.zf) goto L_11654a34;
  /* 11654a30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11654a32 jmp 0x11654a3b */
  goto L_11654a3b;
L_11654a34:;
  /* 11654a34 jmp 0x11654a07 */
  goto L_11654a07;
L_11654a36:;
  /* 11654a36 mov eax, 1 */
  EAX = (0x1u);
L_11654a3b:;
  /* 11654a3b mov esp, ebp */
  ESP = (EBP);
  /* 11654a3d pop ebp */
  EBP = (pop32());
  /* 11654a3e ret  */
  ESPCHK(0x116549f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a40 @ 0x11654a40 (135 bytes, 48 insns) */
void f_11654a40(void) {
  FTRACE(0x11654a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11654a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11654a41 mov ebp, esp */
  EBP = (ESP);
  /* 11654a43 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11654a46 push esi */
  push32((uint32_t)(ESI));
  /* 11654a47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11654a4a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11654a4f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11654a54 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11654a59 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11654a5c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11654a61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11654a64 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11654a66 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11654a69 push ecx */
  push32((uint32_t)(ECX));
  /* 11654a6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11654a6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11654a6f push edx */
  push32((uint32_t)(EDX));
  /* 11654a70 call dword ptr [0x11676234] */
  call_ind((uint32_t)(r32((uint32_t)(0x11676234))), 0x11654a76u);
  /* 11654a76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11654a78 jne 0x11654a7e */
  if (!C.zf) goto L_11654a7e;
  /* 11654a7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11654a7c jmp 0x11654ac2 */
  goto L_11654ac2;
L_11654a7e:;
  /* 11654a7e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11654a81 push eax */
  push32((uint32_t)(EAX));
  /* 11654a82 call 0x11654cb0 */
  push32(0x11654a87u); f_11654cb0();
  /* 11654a87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654a8a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654a8d je 0x11654abd */
  if (C.zf) goto L_11654abd;
  /* 11654a8f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654a93 je 0x11654abd */
  if (C.zf) goto L_11654abd;
  /* 11654a95 mov ecx, dword ptr [0x11676224] */
  ECX = (r32((uint32_t)(0x11676224)));
  /* 11654a9b push ecx */
  push32((uint32_t)(ECX));
  /* 11654a9c call 0x11654d30 */
  push32(0x11654aa1u); f_11654d30();
  /* 11654aa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654aa4 mov esi, eax */
  ESI = (EAX);
  /* 11654aa6 mov edx, dword ptr [0x11676224] */
  EDX = (r32((uint32_t)(0x11676224)));
  /* 11654aac push edx */
  push32((uint32_t)(EDX));
  /* 11654aad call 0x116496f0 */
  push32(0x11654ab2u); f_116496f0();
  /* 11654ab2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11654ab5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11654ab7 jne 0x11654abd */
  if (!C.zf) goto L_11654abd;
  /* 11654ab9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11654abb jmp 0x11654ac2 */
  goto L_11654ac2;
L_11654abd:;
  /* 11654abd mov eax, 1 */
  EAX = (0x1u);
L_11654ac2:;
  /* 11654ac2 pop esi */
  ESI = (pop32());
  /* 11654ac3 mov esp, ebp */
  ESP = (EBP);
  /* 11654ac5 pop ebp */
  EBP = (pop32());
  /* 11654ac6 ret  */
  ESPCHK(0x11654a40u, _esp0);
  ESP += 4; return;
}

