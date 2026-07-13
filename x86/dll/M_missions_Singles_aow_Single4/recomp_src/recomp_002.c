#include "recomp.h"

/* FUN_10012470 @ 0x12222470 (393 bytes, 123 insns) */
void f_12222470(void) {
  FTRACE(0x12222470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12222470 push ebp */
  push32((uint32_t)(EBP));
  /* 12222471 mov ebp, esp */
  EBP = (ESP);
  /* 12222473 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222476 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222247a jne 0x12222486 */
  if (!C.zf) goto L_12222486;
  /* 1222247c mov eax, dword ptr [0x1223fc98] */
  EAX = (r32((uint32_t)(0x1223fc98)));
  /* 12222481 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12222484 jmp 0x1222248c */
  goto L_1222248c;
L_12222486:;
  /* 12222486 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222489 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1222248c:;
  /* 1222248c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1222248f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12222492 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222495 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12222498 push 0x1224095c */
  push32((uint32_t)(0x1224095cu));
  /* 1222249d call dword ptr [0x12243388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243388))), 0x122224a3u);
  /* 122224a3 cmp dword ptr [0x1224094c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224094c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122224aa je 0x122224ca */
  if (C.zf) goto L_122224ca;
  /* 122224ac push 0x1224095c */
  push32((uint32_t)(0x1224095cu));
  /* 122224b1 call dword ptr [0x12243378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243378))), 0x122224b7u);
  /* 122224b7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122224b9 call 0x12218b30 */
  push32(0x122224beu); f_12218b30();
  /* 122224be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122224c1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 122224c8 jmp 0x122224d1 */
  goto L_122224d1;
L_122224ca:;
  /* 122224ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_122224d1:;
  /* 122224d1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122224d5 jbe 0x122225c2 */
  if ((C.cf||C.zf)) goto L_122225c2;
  /* 122224db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122224de mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122224e0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 122224e3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122224e7 je 0x122224f1 */
  if (C.zf) goto L_122224f1;
  /* 122224e9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122224ed je 0x122224f6 */
  if (C.zf) goto L_122224f6;
  /* 122224ef jmp 0x12222550 */
  goto L_12222550;
L_122224f1:;
  /* 122224f1 jmp 0x122225c2 */
  goto L_122225c2;
L_122224f6:;
  /* 122224f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122224f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122224fc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 122224ff mov dword ptr [0x12240938], 0 */
  w32((uint32_t)(0x12240938), (0x0u));
  /* 12222509 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222250c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1222250f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222512 jne 0x12222527 */
  if (!C.zf) goto L_12222527;
  /* 12222514 mov dword ptr [0x12240938], 1 */
  w32((uint32_t)(0x12240938), (0x1u));
  /* 1222251e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222521 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222524 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12222527:;
  /* 12222527 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222252a push ecx */
  push32((uint32_t)(ECX));
  /* 1222252b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1222252e push edx */
  push32((uint32_t)(EDX));
  /* 1222252f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12222532 push eax */
  push32((uint32_t)(EAX));
  /* 12222533 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222536 push ecx */
  push32((uint32_t)(ECX));
  /* 12222537 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222253a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1222253c push eax */
  push32((uint32_t)(EAX));
  /* 1222253d call 0x12222600 */
  push32(0x12222542u); f_12222600();
  /* 12222542 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222545 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222548 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222254b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1222254e jmp 0x122225bd */
  goto L_122225bd;
L_12222550:;
  /* 12222550 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12222555 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12222557 mov ecx, dword ptr [0x1223ec98] */
  ECX = (r32((uint32_t)(0x1223ec98)));
  /* 1222255d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1222255f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12222563 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12222569 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1222256b je 0x12222598 */
  if (C.zf) goto L_12222598;
  /* 1222256d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222571 jbe 0x12222598 */
  if ((C.cf||C.zf)) goto L_12222598;
  /* 12222573 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222576 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222579 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1222257b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1222257d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222580 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222583 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12222586 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222589 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222258c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1222258f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222592 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222595 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12222598:;
  /* 12222598 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222259b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222259e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122225a0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122225a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122225a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122225a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122225ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122225ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122225b1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 122225b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122225b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122225ba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122225bd:;
  /* 122225bd jmp 0x122224d1 */
  goto L_122224d1;
L_122225c2:;
  /* 122225c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122225c6 je 0x122225d4 */
  if (C.zf) goto L_122225d4;
  /* 122225c8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122225ca call 0x12218bd0 */
  push32(0x122225cfu); f_12218bd0();
  /* 122225cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122225d2 jmp 0x122225df */
  goto L_122225df;
L_122225d4:;
  /* 122225d4 push 0x1224095c */
  push32((uint32_t)(0x1224095cu));
  /* 122225d9 call dword ptr [0x12243378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243378))), 0x122225dfu);
L_122225df:;
  /* 122225df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122225e3 jbe 0x122225f3 */
  if ((C.cf||C.zf)) goto L_122225f3;
  /* 122225e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122225e8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 122225eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122225ee sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122225f1 jmp 0x122225f5 */
  goto L_122225f5;
L_122225f3:;
  /* 122225f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122225f5:;
  /* 122225f5 mov esp, ebp */
  ESP = (EBP);
  /* 122225f7 pop ebp */
  EBP = (pop32());
  /* 122225f8 ret  */
  ESPCHK(0x12222470u, _esp0);
  ESP += 4; return;
}

/* FUN_10012600 @ 0x12222600 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12222600(void) {
  FTRACE(0x12222600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12222600 push ebp */
  push32((uint32_t)(EBP));
  /* 12222601 mov ebp, esp */
  EBP = (ESP);
  /* 12222603 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222606 push esi */
  push32((uint32_t)(ESI));
  /* 12222607 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1222260b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1222260e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222611 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222614 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12222617 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222261b ja 0x12222b68 */
  if ((!C.cf&&!C.zf)) goto L_12222b68;
  /* 12222621 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222624 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12222626 mov dl, byte ptr [eax + 0x12222bc9] */
  DL = (r8((uint32_t)(EAX + 0x12222bc9)));
  /* 1222262c jmp dword ptr [edx*4 + 0x12222b6d] */
  switch (EDX) {
    case 0: goto L_12222b46;
    case 1: goto L_12222655;
    case 2: goto L_1222269b;
    case 3: goto L_122227e8;
    case 4: goto L_12222810;
    case 5: goto L_122228af;
    case 6: goto L_1222291b;
    case 7: goto L_12222944;
    case 8: goto L_12222985;
    case 9: goto L_12222a67;
    case 10: goto L_12222ace;
    case 11: goto L_12222b1b;
    case 12: goto L_12222633;
    case 13: goto L_12222678;
    case 14: goto L_122226be;
    case 15: goto L_122227be;
    case 16: goto L_12222855;
    case 17: goto L_12222882;
    case 18: goto L_122228d7;
    case 19: goto L_1222295b;
    case 20: goto L_12222a09;
    case 21: goto L_12222a98;
    case 22: goto L_12222b68;
    default: x86_unimpl("switch@0x1222262c out of table"); return;
  }
L_12222633:;
  /* 12222633 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222636 push ecx */
  push32((uint32_t)(ECX));
  /* 12222637 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222263a push edx */
  push32((uint32_t)(EDX));
  /* 1222263b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1222263e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12222641 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222644 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12222647 push eax */
  push32((uint32_t)(EAX));
  /* 12222648 call 0x12222c20 */
  push32(0x1222264du); f_12222c20();
  /* 1222264d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222650 jmp 0x12222b68 */
  goto L_12222b68;
L_12222655:;
  /* 12222655 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222658 push ecx */
  push32((uint32_t)(ECX));
  /* 12222659 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222265c push edx */
  push32((uint32_t)(EDX));
  /* 1222265d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222660 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12222663 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222666 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1222266a push eax */
  push32((uint32_t)(EAX));
  /* 1222266b call 0x12222c20 */
  push32(0x12222670u); f_12222c20();
  /* 12222670 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222673 jmp 0x12222b68 */
  goto L_12222b68;
L_12222678:;
  /* 12222678 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222267b push ecx */
  push32((uint32_t)(ECX));
  /* 1222267c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222267f push edx */
  push32((uint32_t)(EDX));
  /* 12222680 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222683 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12222686 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222689 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1222268d push eax */
  push32((uint32_t)(EAX));
  /* 1222268e call 0x12222c20 */
  push32(0x12222693u); f_12222c20();
  /* 12222693 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222696 jmp 0x12222b68 */
  goto L_12222b68;
L_1222269b:;
  /* 1222269b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222269e push ecx */
  push32((uint32_t)(ECX));
  /* 1222269f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122226a2 push edx */
  push32((uint32_t)(EDX));
  /* 122226a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122226a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122226a9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122226ac mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 122226b0 push eax */
  push32((uint32_t)(EAX));
  /* 122226b1 call 0x12222c20 */
  push32(0x122226b6u); f_12222c20();
  /* 122226b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122226b9 jmp 0x12222b68 */
  goto L_12222b68;
L_122226be:;
  /* 122226be cmp dword ptr [0x12240938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122226c5 je 0x12222746 */
  if (C.zf) goto L_12222746;
  /* 122226c7 mov dword ptr [0x12240938], 0 */
  w32((uint32_t)(0x12240938), (0x0u));
  /* 122226d1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122226d4 push ecx */
  push32((uint32_t)(ECX));
  /* 122226d5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122226d8 push edx */
  push32((uint32_t)(EDX));
  /* 122226d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122226dc push eax */
  push32((uint32_t)(EAX));
  /* 122226dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122226e0 push ecx */
  push32((uint32_t)(ECX));
  /* 122226e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122226e4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 122226ea push eax */
  push32((uint32_t)(EAX));
  /* 122226eb call 0x12222dd0 */
  push32(0x122226f0u); f_12222dd0();
  /* 122226f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122226f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122226f6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122226f9 jne 0x12222700 */
  if (!C.zf) goto L_12222700;
  /* 122226fb jmp 0x12222b68 */
  goto L_12222b68;
L_12222700:;
  /* 12222700 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222703 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12222705 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12222708 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222270b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1222270d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222710 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222713 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12222715 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222718 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1222271a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1222271d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222720 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12222722 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222725 push ecx */
  push32((uint32_t)(ECX));
  /* 12222726 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222729 push edx */
  push32((uint32_t)(EDX));
  /* 1222272a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222272d push eax */
  push32((uint32_t)(EAX));
  /* 1222272e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222731 push ecx */
  push32((uint32_t)(ECX));
  /* 12222732 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222735 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1222273b push eax */
  push32((uint32_t)(EAX));
  /* 1222273c call 0x12222dd0 */
  push32(0x12222741u); f_12222dd0();
  /* 12222741 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222744 jmp 0x122227b9 */
  goto L_122227b9;
L_12222746:;
  /* 12222746 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222749 push ecx */
  push32((uint32_t)(ECX));
  /* 1222274a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222274d push edx */
  push32((uint32_t)(EDX));
  /* 1222274e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222751 push eax */
  push32((uint32_t)(EAX));
  /* 12222752 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222755 push ecx */
  push32((uint32_t)(ECX));
  /* 12222756 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222759 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1222275f push eax */
  push32((uint32_t)(EAX));
  /* 12222760 call 0x12222dd0 */
  push32(0x12222765u); f_12222dd0();
  /* 12222765 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222768 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222276b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222276e jne 0x12222775 */
  if (!C.zf) goto L_12222775;
  /* 12222770 jmp 0x12222b68 */
  goto L_12222b68;
L_12222775:;
  /* 12222775 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222778 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1222277a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1222277d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222780 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12222782 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222785 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222788 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1222278a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222278d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1222278f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222792 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222795 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12222797 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1222279a push ecx */
  push32((uint32_t)(ECX));
  /* 1222279b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222279e push edx */
  push32((uint32_t)(EDX));
  /* 1222279f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122227a2 push eax */
  push32((uint32_t)(EAX));
  /* 122227a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122227a6 push ecx */
  push32((uint32_t)(ECX));
  /* 122227a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122227aa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 122227b0 push eax */
  push32((uint32_t)(EAX));
  /* 122227b1 call 0x12222dd0 */
  push32(0x122227b6u); f_12222dd0();
  /* 122227b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122227b9:;
  /* 122227b9 jmp 0x12222b68 */
  goto L_12222b68;
L_122227be:;
  /* 122227be mov ecx, dword ptr [0x12240938] */
  ECX = (r32((uint32_t)(0x12240938)));
  /* 122227c4 mov dword ptr [0x12240948], ecx */
  w32((uint32_t)(0x12240948), (ECX));
  /* 122227ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122227cd push edx */
  push32((uint32_t)(EDX));
  /* 122227ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122227d1 push eax */
  push32((uint32_t)(EAX));
  /* 122227d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 122227d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122227d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122227da push edx */
  push32((uint32_t)(EDX));
  /* 122227db call 0x12222c70 */
  push32(0x122227e0u); f_12222c70();
  /* 122227e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122227e3 jmp 0x12222b68 */
  goto L_12222b68;
L_122227e8:;
  /* 122227e8 mov eax, dword ptr [0x12240938] */
  EAX = (r32((uint32_t)(0x12240938)));
  /* 122227ed mov dword ptr [0x12240948], eax */
  w32((uint32_t)(0x12240948), (EAX));
  /* 122227f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122227f5 push ecx */
  push32((uint32_t)(ECX));
  /* 122227f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122227f9 push edx */
  push32((uint32_t)(EDX));
  /* 122227fa push 2 */
  push32((uint32_t)(0x2u));
  /* 122227fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122227ff mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12222802 push ecx */
  push32((uint32_t)(ECX));
  /* 12222803 call 0x12222c70 */
  push32(0x12222808u); f_12222c70();
  /* 12222808 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222280b jmp 0x12222b68 */
  goto L_12222b68;
L_12222810:;
  /* 12222810 mov edx, dword ptr [0x12240938] */
  EDX = (r32((uint32_t)(0x12240938)));
  /* 12222816 mov dword ptr [0x12240948], edx */
  w32((uint32_t)(0x12240948), (EDX));
  /* 1222281c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1222281f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12222822 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12222823 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12222828 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1222282a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1222282d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222831 jne 0x1222283a */
  if (!C.zf) goto L_1222283a;
  /* 12222833 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1222283a:;
  /* 1222283a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222283d push edx */
  push32((uint32_t)(EDX));
  /* 1222283e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222841 push eax */
  push32((uint32_t)(EAX));
  /* 12222842 push 2 */
  push32((uint32_t)(0x2u));
  /* 12222844 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222847 push ecx */
  push32((uint32_t)(ECX));
  /* 12222848 call 0x12222c70 */
  push32(0x1222284du); f_12222c70();
  /* 1222284d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222850 jmp 0x12222b68 */
  goto L_12222b68;
L_12222855:;
  /* 12222855 mov edx, dword ptr [0x12240938] */
  EDX = (r32((uint32_t)(0x12240938)));
  /* 1222285b mov dword ptr [0x12240948], edx */
  w32((uint32_t)(0x12240948), (EDX));
  /* 12222861 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222864 push eax */
  push32((uint32_t)(EAX));
  /* 12222865 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222868 push ecx */
  push32((uint32_t)(ECX));
  /* 12222869 push 3 */
  push32((uint32_t)(0x3u));
  /* 1222286b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1222286e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12222871 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222874 push eax */
  push32((uint32_t)(EAX));
  /* 12222875 call 0x12222c70 */
  push32(0x1222287au); f_12222c70();
  /* 1222287a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222287d jmp 0x12222b68 */
  goto L_12222b68;
L_12222882:;
  /* 12222882 mov ecx, dword ptr [0x12240938] */
  ECX = (r32((uint32_t)(0x12240938)));
  /* 12222888 mov dword ptr [0x12240948], ecx */
  w32((uint32_t)(0x12240948), (ECX));
  /* 1222288e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222891 push edx */
  push32((uint32_t)(EDX));
  /* 12222892 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222895 push eax */
  push32((uint32_t)(EAX));
  /* 12222896 push 2 */
  push32((uint32_t)(0x2u));
  /* 12222898 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1222289b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1222289e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122228a1 push edx */
  push32((uint32_t)(EDX));
  /* 122228a2 call 0x12222c70 */
  push32(0x122228a7u); f_12222c70();
  /* 122228a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122228aa jmp 0x12222b68 */
  goto L_12222b68;
L_122228af:;
  /* 122228af mov eax, dword ptr [0x12240938] */
  EAX = (r32((uint32_t)(0x12240938)));
  /* 122228b4 mov dword ptr [0x12240948], eax */
  w32((uint32_t)(0x12240948), (EAX));
  /* 122228b9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122228bc push ecx */
  push32((uint32_t)(ECX));
  /* 122228bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122228c0 push edx */
  push32((uint32_t)(EDX));
  /* 122228c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 122228c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122228c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122228c9 push ecx */
  push32((uint32_t)(ECX));
  /* 122228ca call 0x12222c70 */
  push32(0x122228cfu); f_12222c70();
  /* 122228cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122228d2 jmp 0x12222b68 */
  goto L_12222b68;
L_122228d7:;
  /* 122228d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122228da cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122228de jg 0x122228fc */
  if ((!C.zf&&C.sf==C.of)) goto L_122228fc;
  /* 122228e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122228e3 push eax */
  push32((uint32_t)(EAX));
  /* 122228e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122228e7 push ecx */
  push32((uint32_t)(ECX));
  /* 122228e8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122228eb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 122228f1 push eax */
  push32((uint32_t)(EAX));
  /* 122228f2 call 0x12222c20 */
  push32(0x122228f7u); f_12222c20();
  /* 122228f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122228fa jmp 0x12222916 */
  goto L_12222916;
L_122228fc:;
  /* 122228fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122228ff push ecx */
  push32((uint32_t)(ECX));
  /* 12222900 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222903 push edx */
  push32((uint32_t)(EDX));
  /* 12222904 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222907 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1222290d push ecx */
  push32((uint32_t)(ECX));
  /* 1222290e call 0x12222c20 */
  push32(0x12222913u); f_12222c20();
  /* 12222913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12222916:;
  /* 12222916 jmp 0x12222b68 */
  goto L_12222b68;
L_1222291b:;
  /* 1222291b mov edx, dword ptr [0x12240938] */
  EDX = (r32((uint32_t)(0x12240938)));
  /* 12222921 mov dword ptr [0x12240948], edx */
  w32((uint32_t)(0x12240948), (EDX));
  /* 12222927 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222292a push eax */
  push32((uint32_t)(EAX));
  /* 1222292b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222292e push ecx */
  push32((uint32_t)(ECX));
  /* 1222292f push 2 */
  push32((uint32_t)(0x2u));
  /* 12222931 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222934 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12222936 push eax */
  push32((uint32_t)(EAX));
  /* 12222937 call 0x12222c70 */
  push32(0x1222293cu); f_12222c70();
  /* 1222293c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222293f jmp 0x12222b68 */
  goto L_12222b68;
L_12222944:;
  /* 12222944 mov ecx, dword ptr [0x12240938] */
  ECX = (r32((uint32_t)(0x12240938)));
  /* 1222294a mov dword ptr [0x12240948], ecx */
  w32((uint32_t)(0x12240948), (ECX));
  /* 12222950 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222953 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12222956 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12222959 jmp 0x122229ad */
  goto L_122229ad;
L_1222295b:;
  /* 1222295b mov ecx, dword ptr [0x12240938] */
  ECX = (r32((uint32_t)(0x12240938)));
  /* 12222961 mov dword ptr [0x12240948], ecx */
  w32((uint32_t)(0x12240948), (ECX));
  /* 12222967 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222296a push edx */
  push32((uint32_t)(EDX));
  /* 1222296b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222296e push eax */
  push32((uint32_t)(EAX));
  /* 1222296f push 1 */
  push32((uint32_t)(0x1u));
  /* 12222971 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222974 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12222977 push edx */
  push32((uint32_t)(EDX));
  /* 12222978 call 0x12222c70 */
  push32(0x1222297du); f_12222c70();
  /* 1222297d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222980 jmp 0x12222b68 */
  goto L_12222b68;
L_12222985:;
  /* 12222985 mov eax, dword ptr [0x12240938] */
  EAX = (r32((uint32_t)(0x12240938)));
  /* 1222298a mov dword ptr [0x12240948], eax */
  w32((uint32_t)(0x12240948), (EAX));
  /* 1222298f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222992 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222996 jne 0x122229a1 */
  if (!C.zf) goto L_122229a1;
  /* 12222998 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1222299f jmp 0x122229ad */
  goto L_122229ad;
L_122229a1:;
  /* 122229a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122229a4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 122229a7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122229aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122229ad:;
  /* 122229ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122229b0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 122229b3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122229b6 jge 0x122229c1 */
  if ((C.sf==C.of)) goto L_122229c1;
  /* 122229b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122229bf jmp 0x122229ee */
  goto L_122229ee;
L_122229c1:;
  /* 122229c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122229c4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 122229c7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122229c8 mov ecx, 7 */
  ECX = (0x7u);
  /* 122229cd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122229cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122229d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122229d5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122229d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122229d9 mov ecx, 7 */
  ECX = (0x7u);
  /* 122229de idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122229e0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122229e3 jl 0x122229ee */
  if ((C.sf!=C.of)) goto L_122229ee;
  /* 122229e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122229e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122229eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122229ee:;
  /* 122229ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122229f1 push eax */
  push32((uint32_t)(EAX));
  /* 122229f2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122229f5 push ecx */
  push32((uint32_t)(ECX));
  /* 122229f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 122229f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122229fb push edx */
  push32((uint32_t)(EDX));
  /* 122229fc call 0x12222c70 */
  push32(0x12222a01u); f_12222c70();
  /* 12222a01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222a04 jmp 0x12222b68 */
  goto L_12222b68;
L_12222a09:;
  /* 12222a09 cmp dword ptr [0x12240938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222a10 je 0x12222a40 */
  if (C.zf) goto L_12222a40;
  /* 12222a12 mov dword ptr [0x12240938], 0 */
  w32((uint32_t)(0x12240938), (0x0u));
  /* 12222a1c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222a1f push eax */
  push32((uint32_t)(EAX));
  /* 12222a20 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222a23 push ecx */
  push32((uint32_t)(ECX));
  /* 12222a24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222a27 push edx */
  push32((uint32_t)(EDX));
  /* 12222a28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222a2b push eax */
  push32((uint32_t)(EAX));
  /* 12222a2c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222a2f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12222a35 push edx */
  push32((uint32_t)(EDX));
  /* 12222a36 call 0x12222dd0 */
  push32(0x12222a3bu); f_12222dd0();
  /* 12222a3b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222a3e jmp 0x12222a62 */
  goto L_12222a62;
L_12222a40:;
  /* 12222a40 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222a43 push eax */
  push32((uint32_t)(EAX));
  /* 12222a44 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222a47 push ecx */
  push32((uint32_t)(ECX));
  /* 12222a48 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222a4b push edx */
  push32((uint32_t)(EDX));
  /* 12222a4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222a4f push eax */
  push32((uint32_t)(EAX));
  /* 12222a50 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222a53 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12222a59 push edx */
  push32((uint32_t)(EDX));
  /* 12222a5a call 0x12222dd0 */
  push32(0x12222a5fu); f_12222dd0();
  /* 12222a5f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12222a62:;
  /* 12222a62 jmp 0x12222b68 */
  goto L_12222b68;
L_12222a67:;
  /* 12222a67 mov dword ptr [0x12240938], 0 */
  w32((uint32_t)(0x12240938), (0x0u));
  /* 12222a71 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222a74 push eax */
  push32((uint32_t)(EAX));
  /* 12222a75 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222a78 push ecx */
  push32((uint32_t)(ECX));
  /* 12222a79 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222a7c push edx */
  push32((uint32_t)(EDX));
  /* 12222a7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222a80 push eax */
  push32((uint32_t)(EAX));
  /* 12222a81 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222a84 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12222a8a push edx */
  push32((uint32_t)(EDX));
  /* 12222a8b call 0x12222dd0 */
  push32(0x12222a90u); f_12222dd0();
  /* 12222a90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222a93 jmp 0x12222b68 */
  goto L_12222b68;
L_12222a98:;
  /* 12222a98 mov eax, dword ptr [0x12240938] */
  EAX = (r32((uint32_t)(0x12240938)));
  /* 12222a9d mov dword ptr [0x12240948], eax */
  w32((uint32_t)(0x12240948), (EAX));
  /* 12222aa2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222aa5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12222aa8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12222aa9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12222aae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12222ab0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12222ab3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222ab6 push edx */
  push32((uint32_t)(EDX));
  /* 12222ab7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222aba push eax */
  push32((uint32_t)(EAX));
  /* 12222abb push 2 */
  push32((uint32_t)(0x2u));
  /* 12222abd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222ac0 push ecx */
  push32((uint32_t)(ECX));
  /* 12222ac1 call 0x12222c70 */
  push32(0x12222ac6u); f_12222c70();
  /* 12222ac6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222ac9 jmp 0x12222b68 */
  goto L_12222b68;
L_12222ace:;
  /* 12222ace mov edx, dword ptr [0x12240938] */
  EDX = (r32((uint32_t)(0x12240938)));
  /* 12222ad4 mov dword ptr [0x12240948], edx */
  w32((uint32_t)(0x12240948), (EDX));
  /* 12222ada mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222add mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12222ae0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12222ae1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12222ae6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12222ae8 mov ecx, eax */
  ECX = (EAX);
  /* 12222aea add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222aed imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12222af0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222af3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12222af6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12222af7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12222afc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12222afe add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222b00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12222b03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222b06 push eax */
  push32((uint32_t)(EAX));
  /* 12222b07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222b0a push ecx */
  push32((uint32_t)(ECX));
  /* 12222b0b push 4 */
  push32((uint32_t)(0x4u));
  /* 12222b0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222b10 push edx */
  push32((uint32_t)(EDX));
  /* 12222b11 call 0x12222c70 */
  push32(0x12222b16u); f_12222c70();
  /* 12222b16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222b19 jmp 0x12222b68 */
  goto L_12222b68;
L_12222b1b:;
  /* 12222b1b call 0x12223c30 */
  push32(0x12222b20u); f_12223c30();
  /* 12222b20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222b23 push eax */
  push32((uint32_t)(EAX));
  /* 12222b24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222b27 push ecx */
  push32((uint32_t)(ECX));
  /* 12222b28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222b2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12222b2d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222b31 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12222b34 mov ecx, dword ptr [eax*4 + 0x1223fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1223fe1c)));
  /* 12222b3b push ecx */
  push32((uint32_t)(ECX));
  /* 12222b3c call 0x12222c20 */
  push32(0x12222b41u); f_12222c20();
  /* 12222b41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222b44 jmp 0x12222b68 */
  goto L_12222b68;
L_12222b46:;
  /* 12222b46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222b49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12222b4b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12222b4e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222b51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12222b53 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222b56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222b59 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12222b5b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222b5e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12222b60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222b63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222b66 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12222b68:;
  /* 12222b68 pop esi */
  ESI = (pop32());
  /* 12222b69 mov esp, ebp */
  ESP = (EBP);
  /* 12222b6b pop ebp */
  EBP = (pop32());
  /* 12222b6c ret  */
  ESPCHK(0x12222600u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12222c20 (72 bytes, 30 insns) */
void f_12222c20(void) {
  FTRACE(0x12222c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12222c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12222c21 mov ebp, esp */
  EBP = (ESP);
L_12222c23:;
  /* 12222c23 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222c26 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222c29 je 0x12222c66 */
  if (C.zf) goto L_12222c66;
  /* 12222c2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222c2e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12222c31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12222c33 je 0x12222c66 */
  if (C.zf) goto L_12222c66;
  /* 12222c35 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222c38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12222c3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222c3d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12222c3f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12222c41 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222c44 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12222c46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222c49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222c4c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12222c4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222c51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222c54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12222c57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222c5a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12222c5c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222c5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222c62 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12222c64 jmp 0x12222c23 */
  goto L_12222c23;
L_12222c66:;
  /* 12222c66 pop ebp */
  EBP = (pop32());
  /* 12222c67 ret  */
  ESPCHK(0x12222c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c70 @ 0x12222c70 (173 bytes, 64 insns) */
void f_12222c70(void) {
  FTRACE(0x12222c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12222c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12222c71 mov ebp, esp */
  EBP = (ESP);
  /* 12222c73 push ecx */
  push32((uint32_t)(ECX));
  /* 12222c74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12222c7b cmp dword ptr [0x12240948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222c82 je 0x12222c9a */
  if (C.zf) goto L_12222c9a;
  /* 12222c84 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222c87 push eax */
  push32((uint32_t)(EAX));
  /* 12222c88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222c8b push ecx */
  push32((uint32_t)(ECX));
  /* 12222c8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222c8f push edx */
  push32((uint32_t)(EDX));
  /* 12222c90 call 0x12222d20 */
  push32(0x12222c95u); f_12222d20();
  /* 12222c95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222c98 jmp 0x12222d19 */
  goto L_12222d19;
L_12222c9a:;
  /* 12222c9a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222c9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222ca0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222ca2 jae 0x12222d10 */
  if (!C.cf) goto L_12222d10;
  /* 12222ca4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222ca7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222caa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12222cad jmp 0x12222cb8 */
  goto L_12222cb8;
L_12222caf:;
  /* 12222caf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222cb2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222cb5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12222cb8:;
  /* 12222cb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222cbb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222cbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12222cc0 je 0x12222cf4 */
  if (C.zf) goto L_12222cf4;
  /* 12222cc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222cc5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12222cc6 mov ecx, 0xa */
  ECX = (0xau);
  /* 12222ccb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12222ccd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222cd0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222cd3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12222cd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222cd8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12222cdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222cde cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12222cdf mov ecx, 0xa */
  ECX = (0xau);
  /* 12222ce4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12222ce6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12222ce9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222cec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222cef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12222cf2 jmp 0x12222caf */
  goto L_12222caf;
L_12222cf4:;
  /* 12222cf4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222cf7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12222cf9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222cfc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222cff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12222d01 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222d04 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12222d06 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222d09 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222d0c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12222d0e jmp 0x12222d19 */
  goto L_12222d19;
L_12222d10:;
  /* 12222d10 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222d13 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12222d19:;
  /* 12222d19 mov esp, ebp */
  ESP = (EBP);
  /* 12222d1b pop ebp */
  EBP = (pop32());
  /* 12222d1c ret  */
  ESPCHK(0x12222c70u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12222d20 (172 bytes, 65 insns) */
void f_12222d20(void) {
  FTRACE(0x12222d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12222d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12222d21 mov ebp, esp */
  EBP = (ESP);
  /* 12222d23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222d26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222d29 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12222d2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12222d2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222d31 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222d34 jbe 0x12222d7b */
  if ((C.cf||C.zf)) goto L_12222d7b;
L_12222d36:;
  /* 12222d36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222d39 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12222d3a mov ecx, 0xa */
  ECX = (0xau);
  /* 12222d3f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12222d41 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222d44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222d47 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12222d49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222d4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222d4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12222d52 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222d55 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12222d57 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222d5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222d5d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12222d5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222d62 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12222d63 mov ecx, 0xa */
  ECX = (0xau);
  /* 12222d68 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12222d6a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12222d6d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222d71 jle 0x12222d7b */
  if ((C.zf||C.sf!=C.of)) goto L_12222d7b;
  /* 12222d73 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12222d76 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222d79 ja 0x12222d36 */
  if ((!C.cf&&!C.zf)) goto L_12222d36;
L_12222d7b:;
  /* 12222d7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222d7e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12222d80 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12222d83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222d86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222d89 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12222d8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222d8e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222d91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12222d94:;
  /* 12222d94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222d97 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12222d99 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12222d9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222d9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12222da2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12222da4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12222da6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222da9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222dac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12222daf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12222db2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12222db5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12222db7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12222dba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222dbd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12222dc0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12222dc3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222dc6 jb 0x12222d94 */
  if (C.cf) goto L_12222d94;
  /* 12222dc8 mov esp, ebp */
  ESP = (EBP);
  /* 12222dca pop ebp */
  EBP = (pop32());
  /* 12222dcb ret  */
  ESPCHK(0x12222d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012dd0 @ 0x12222dd0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12222dd0(void) {
  FTRACE(0x12222dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12222dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12222dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12222dd3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12222dd6:;
  /* 12222dd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222dd9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12222ddc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12222dde je 0x1222324c */
  if (C.zf) goto L_1222324c;
  /* 12222de4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222de7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222dea je 0x1222324c */
  if (C.zf) goto L_1222324c;
  /* 12222df0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12222df4 mov dword ptr [0x12240948], 0 */
  w32((uint32_t)(0x12240948), (0x0u));
  /* 12222dfe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12222e05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222e08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12222e0b jmp 0x12222e16 */
  goto L_12222e16;
L_12222e0d:;
  /* 12222e0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222e10 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222e13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12222e16:;
  /* 12222e16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222e19 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12222e1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222e1f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12222e22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222e25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222e28 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12222e2b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222e2d jne 0x12222e31 */
  if (!C.zf) goto L_12222e31;
  /* 12222e2f jmp 0x12222e0d */
  goto L_12222e0d;
L_12222e31:;
  /* 12222e31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222e34 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222e37 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12222e3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222e3d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12222e40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12222e43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12222e46 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222e49 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12222e4c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222e50 ja 0x122231a0 */
  if ((!C.cf&&!C.zf)) goto L_122231a0;
  /* 12222e56 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12222e59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12222e5b mov al, byte ptr [ecx + 0x1222327c] */
  AL = (r8((uint32_t)(ECX + 0x1222327c)));
  /* 12222e61 jmp dword ptr [eax*4 + 0x12223250] */
  switch (EAX) {
    case 0: goto L_122230bf;
    case 1: goto L_12222fa3;
    case 2: goto L_12222f2e;
    case 3: goto L_12222e68;
    case 4: goto L_12222ea6;
    case 5: goto L_12222f07;
    case 6: goto L_12222f55;
    case 7: goto L_12222f7c;
    case 8: goto L_12222fea;
    case 9: goto L_12222ee4;
    case 10: goto L_122231a0;
    default: x86_unimpl("switch@0x12222e61 out of table"); return;
  }
L_12222e68:;
  /* 12222e68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222e6b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12222e6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12222e71 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222e74 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12222e77 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222e7b ja 0x12222ea1 */
  if ((!C.cf&&!C.zf)) goto L_12222ea1;
  /* 12222e7d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12222e80 jmp dword ptr [ecx*4 + 0x122232cf] */
  switch (ECX) {
    case 0: goto L_12222e87;
    case 1: goto L_12222e91;
    case 2: goto L_12222e97;
    case 3: goto L_12222e9d;
    case 4: goto L_12222ec5;
    case 5: goto L_12222ecf;
    case 6: goto L_12222ed5;
    case 7: goto L_12222edb;
    default: x86_unimpl("switch@0x12222e80 out of table"); return;
  }
L_12222e87:;
  /* 12222e87 mov dword ptr [0x12240948], 1 */
  w32((uint32_t)(0x12240948), (0x1u));
L_12222e91:;
  /* 12222e91 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12222e95 jmp 0x12222ea1 */
  goto L_12222ea1;
L_12222e97:;
  /* 12222e97 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12222e9b jmp 0x12222ea1 */
  goto L_12222ea1;
L_12222e9d:;
  /* 12222e9d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12222ea1:;
  /* 12222ea1 jmp 0x122231a0 */
  goto L_122231a0;
L_12222ea6:;
  /* 12222ea6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222ea9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12222eac mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12222eaf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12222eb2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12222eb5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222eb9 ja 0x12222edf */
  if ((!C.cf&&!C.zf)) goto L_12222edf;
  /* 12222ebb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12222ebe jmp dword ptr [ecx*4 + 0x122232df] */
  switch (ECX) {
    case 0: goto L_12222ec5;
    case 1: goto L_12222ecf;
    case 2: goto L_12222ed5;
    case 3: goto L_12222edb;
    default: x86_unimpl("switch@0x12222ebe out of table"); return;
  }
L_12222ec5:;
  /* 12222ec5 mov dword ptr [0x12240948], 1 */
  w32((uint32_t)(0x12240948), (0x1u));
L_12222ecf:;
  /* 12222ecf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12222ed3 jmp 0x12222edf */
  goto L_12222edf;
L_12222ed5:;
  /* 12222ed5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12222ed9 jmp 0x12222edf */
  goto L_12222edf;
L_12222edb:;
  /* 12222edb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12222edf:;
  /* 12222edf jmp 0x122231a0 */
  goto L_122231a0;
L_12222ee4:;
  /* 12222ee4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222ee7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12222eea cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222eee je 0x12222ef8 */
  if (C.zf) goto L_12222ef8;
  /* 12222ef0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222ef4 je 0x12222efe */
  if (C.zf) goto L_12222efe;
  /* 12222ef6 jmp 0x12222f02 */
  goto L_12222f02;
L_12222ef8:;
  /* 12222ef8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12222efc jmp 0x12222f02 */
  goto L_12222f02;
L_12222efe:;
  /* 12222efe mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12222f02:;
  /* 12222f02 jmp 0x122231a0 */
  goto L_122231a0;
L_12222f07:;
  /* 12222f07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222f0a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12222f0d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222f11 je 0x12222f1b */
  if (C.zf) goto L_12222f1b;
  /* 12222f13 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222f17 je 0x12222f25 */
  if (C.zf) goto L_12222f25;
  /* 12222f19 jmp 0x12222f29 */
  goto L_12222f29;
L_12222f1b:;
  /* 12222f1b mov dword ptr [0x12240948], 1 */
  w32((uint32_t)(0x12240948), (0x1u));
L_12222f25:;
  /* 12222f25 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12222f29:;
  /* 12222f29 jmp 0x122231a0 */
  goto L_122231a0;
L_12222f2e:;
  /* 12222f2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222f31 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12222f34 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222f38 je 0x12222f42 */
  if (C.zf) goto L_12222f42;
  /* 12222f3a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222f3e je 0x12222f4c */
  if (C.zf) goto L_12222f4c;
  /* 12222f40 jmp 0x12222f50 */
  goto L_12222f50;
L_12222f42:;
  /* 12222f42 mov dword ptr [0x12240948], 1 */
  w32((uint32_t)(0x12240948), (0x1u));
L_12222f4c:;
  /* 12222f4c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12222f50:;
  /* 12222f50 jmp 0x122231a0 */
  goto L_122231a0;
L_12222f55:;
  /* 12222f55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222f58 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12222f5b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222f5f je 0x12222f69 */
  if (C.zf) goto L_12222f69;
  /* 12222f61 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222f65 je 0x12222f73 */
  if (C.zf) goto L_12222f73;
  /* 12222f67 jmp 0x12222f77 */
  goto L_12222f77;
L_12222f69:;
  /* 12222f69 mov dword ptr [0x12240948], 1 */
  w32((uint32_t)(0x12240948), (0x1u));
L_12222f73:;
  /* 12222f73 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12222f77:;
  /* 12222f77 jmp 0x122231a0 */
  goto L_122231a0;
L_12222f7c:;
  /* 12222f7c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222f7f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12222f82 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222f86 je 0x12222f90 */
  if (C.zf) goto L_12222f90;
  /* 12222f88 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222f8c je 0x12222f9a */
  if (C.zf) goto L_12222f9a;
  /* 12222f8e jmp 0x12222f9e */
  goto L_12222f9e;
L_12222f90:;
  /* 12222f90 mov dword ptr [0x12240948], 1 */
  w32((uint32_t)(0x12240948), (0x1u));
L_12222f9a:;
  /* 12222f9a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12222f9e:;
  /* 12222f9e jmp 0x122231a0 */
  goto L_122231a0;
L_12222fa3:;
  /* 12222fa3 push 0x1223caa4 */
  push32((uint32_t)(0x1223caa4u));
  /* 12222fa8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222fab push ecx */
  push32((uint32_t)(ECX));
  /* 12222fac call 0x12223800 */
  push32(0x12222fb1u); f_12223800();
  /* 12222fb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12222fb6 jne 0x12222fc3 */
  if (!C.zf) goto L_12222fc3;
  /* 12222fb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222fbb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222fbe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12222fc1 jmp 0x12222fe1 */
  goto L_12222fe1;
L_12222fc3:;
  /* 12222fc3 push 0x1223caa0 */
  push32((uint32_t)(0x1223caa0u));
  /* 12222fc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222fcb push eax */
  push32((uint32_t)(EAX));
  /* 12222fcc call 0x12223800 */
  push32(0x12222fd1u); f_12223800();
  /* 12222fd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222fd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12222fd6 jne 0x12222fe1 */
  if (!C.zf) goto L_12222fe1;
  /* 12222fd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222fdb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222fde mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12222fe1:;
  /* 12222fe1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12222fe5 jmp 0x122231a0 */
  goto L_122231a0;
L_12222fea:;
  /* 12222fea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222fed cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222ff1 jg 0x12223001 */
  if ((!C.zf&&C.sf==C.of)) goto L_12223001;
  /* 12222ff3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12222ff6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12222ffc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12222fff jmp 0x1222300d */
  goto L_1222300d;
L_12223001:;
  /* 12223001 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12223004 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1222300a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1222300d:;
  /* 1222300d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223011 jle 0x122230b4 */
  if ((C.zf||C.sf!=C.of)) goto L_122230b4;
  /* 12223017 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222301a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222301d jbe 0x122230b4 */
  if ((C.cf||C.zf)) goto L_122230b4;
  /* 12223023 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12223026 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12223028 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1222302a mov ecx, dword ptr [0x1223ec98] */
  ECX = (r32((uint32_t)(0x1223ec98)));
  /* 12223030 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12223032 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12223036 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1222303c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1222303e je 0x12223077 */
  if (C.zf) goto L_12223077;
  /* 12223040 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12223043 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223046 jbe 0x12223077 */
  if ((C.cf||C.zf)) goto L_12223077;
  /* 12223048 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222304b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1222304d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12223050 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12223052 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12223054 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12223057 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12223059 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222305c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222305f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12223061 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12223064 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223067 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1222306a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222306d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1222306f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12223072 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12223075 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12223077:;
  /* 12223077 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222307a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1222307c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1222307f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12223081 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12223083 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12223086 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12223088 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222308b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222308e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12223090 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12223093 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223096 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12223099 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222309c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1222309e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122230a1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122230a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122230a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122230a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122230ac mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122230af jmp 0x1222300d */
  goto L_1222300d;
L_122230b4:;
  /* 122230b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122230b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122230ba jmp 0x12222dd6 */
  goto L_12222dd6;
L_122230bf:;
  /* 122230bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122230c2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122230c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122230c7 je 0x12223192 */
  if (C.zf) goto L_12223192;
  /* 122230cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122230d0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122230d3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_122230d6:;
  /* 122230d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122230d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122230dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122230de je 0x12223190 */
  if (C.zf) goto L_12223190;
  /* 122230e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122230e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122230ea je 0x12223190 */
  if (C.zf) goto L_12223190;
  /* 122230f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122230f3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122230f6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122230f9 jne 0x12223109 */
  if (!C.zf) goto L_12223109;
  /* 122230fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122230fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223101 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12223104 jmp 0x12223190 */
  goto L_12223190;
L_12223109:;
  /* 12223109 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222310c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1222310e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12223110 mov edx, dword ptr [0x1223ec98] */
  EDX = (r32((uint32_t)(0x1223ec98)));
  /* 12223116 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12223118 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1222311c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12223121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12223123 je 0x1222315c */
  if (C.zf) goto L_1222315c;
  /* 12223125 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12223128 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222312b jbe 0x1222315c */
  if ((C.cf||C.zf)) goto L_1222315c;
  /* 1222312d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12223130 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12223132 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223135 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12223137 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12223139 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222313c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1222313e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223141 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12223144 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12223146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223149 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222314c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1222314f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12223152 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12223154 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12223157 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222315a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1222315c:;
  /* 1222315c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222315f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12223161 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223164 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12223166 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12223168 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222316b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1222316d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223170 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12223173 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12223175 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223178 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222317b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1222317e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12223181 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12223183 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12223186 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12223189 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1222318b jmp 0x122230d6 */
  goto L_122230d6;
L_12223190:;
  /* 12223190 jmp 0x1222319b */
  goto L_1222319b;
L_12223192:;
  /* 12223192 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223195 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223198 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1222319b:;
  /* 1222319b jmp 0x12222dd6 */
  goto L_12222dd6;
L_122231a0:;
  /* 122231a0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122231a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122231a6 je 0x122231cc */
  if (C.zf) goto L_122231cc;
  /* 122231a8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122231ab push edx */
  push32((uint32_t)(EDX));
  /* 122231ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122231af push eax */
  push32((uint32_t)(EAX));
  /* 122231b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122231b3 push ecx */
  push32((uint32_t)(ECX));
  /* 122231b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122231b7 push edx */
  push32((uint32_t)(EDX));
  /* 122231b8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 122231bb push eax */
  push32((uint32_t)(EAX));
  /* 122231bc call 0x12222600 */
  push32(0x122231c1u); f_12222600();
  /* 122231c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122231c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122231c7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 122231ca jmp 0x12223247 */
  goto L_12223247;
L_122231cc:;
  /* 122231cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122231cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122231d1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122231d3 mov ecx, dword ptr [0x1223ec98] */
  ECX = (r32((uint32_t)(0x1223ec98)));
  /* 122231d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122231db mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122231df and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 122231e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122231e7 je 0x12223218 */
  if (C.zf) goto L_12223218;
  /* 122231e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122231ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122231ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122231f1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122231f3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122231f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122231f8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122231fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122231fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12223200 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12223202 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223205 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223208 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1222320b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222320e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12223210 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12223213 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12223216 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12223218:;
  /* 12223218 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222321b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1222321d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223220 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12223222 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12223224 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12223227 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12223229 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222322c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222322f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12223231 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223234 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223237 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1222323a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222323d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1222323f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12223242 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12223245 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12223247:;
  /* 12223247 jmp 0x12222dd6 */
  goto L_12222dd6;
L_1222324c:;
  /* 1222324c mov esp, ebp */
  ESP = (EBP);
  /* 1222324e pop ebp */
  EBP = (pop32());
  /* 1222324f ret  */
  ESPCHK(0x12222dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100132f0 @ 0x122232f0 (650 bytes, 178 insns) */
void f_122232f0(void) {
  FTRACE(0x122232f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122232f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122232f1 mov ebp, esp */
  EBP = (ESP);
  /* 122232f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122232f9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122232fd jne 0x12223459 */
  if (!C.zf) goto L_12223459;
  /* 12223303 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12223306 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1222330c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12223312 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12223315 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1222331c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12223326 push 0 */
  push32((uint32_t)(0x0u));
  /* 12223328 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1222332e push edx */
  push32((uint32_t)(EDX));
  /* 1222332f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223332 push eax */
  push32((uint32_t)(EAX));
  /* 12223333 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12223336 push ecx */
  push32((uint32_t)(ECX));
  /* 12223337 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1222333a push edx */
  push32((uint32_t)(EDX));
  /* 1222333b call 0x12224710 */
  push32(0x12223340u); f_12224710();
  /* 12223340 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223343 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12223346 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222334a jne 0x122233df */
  if (!C.zf) goto L_122233df;
  /* 12223350 call dword ptr [0x122433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433b4))), 0x12223356u);
  /* 12223356 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223359 je 0x12223360 */
  if (C.zf) goto L_12223360;
  /* 1222335b jmp 0x1222343d */
  goto L_1222343d;
L_12223360:;
  /* 12223360 push 0 */
  push32((uint32_t)(0x0u));
  /* 12223362 push 0 */
  push32((uint32_t)(0x0u));
  /* 12223364 push 0 */
  push32((uint32_t)(0x0u));
  /* 12223366 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12223369 push eax */
  push32((uint32_t)(EAX));
  /* 1222336a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1222336d push ecx */
  push32((uint32_t)(ECX));
  /* 1222336e call 0x12224710 */
  push32(0x12223373u); f_12224710();
  /* 12223373 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223376 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1222337c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223383 jne 0x1222338a */
  if (!C.zf) goto L_1222338a;
  /* 12223385 jmp 0x1222343d */
  goto L_1222343d;
L_1222338a:;
  /* 1222338a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1222338c push 0x1223caac */
  push32((uint32_t)(0x1223caacu));
  /* 12223391 push 2 */
  push32((uint32_t)(0x2u));
  /* 12223393 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12223399 push edx */
  push32((uint32_t)(EDX));
  /* 1222339a call 0x12215130 */
  push32(0x1222339fu); f_12215130();
  /* 1222339f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122233a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122233a5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122233a9 jne 0x122233b0 */
  if (!C.zf) goto L_122233b0;
  /* 122233ab jmp 0x1222343d */
  goto L_1222343d;
L_122233b0:;
  /* 122233b0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122233b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122233b9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 122233bf push eax */
  push32((uint32_t)(EAX));
  /* 122233c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122233c3 push ecx */
  push32((uint32_t)(ECX));
  /* 122233c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122233c7 push edx */
  push32((uint32_t)(EDX));
  /* 122233c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122233cb push eax */
  push32((uint32_t)(EAX));
  /* 122233cc call 0x12224710 */
  push32(0x122233d1u); f_12224710();
  /* 122233d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122233d4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122233d7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122233db jne 0x122233df */
  if (!C.zf) goto L_122233df;
  /* 122233dd jmp 0x1222343d */
  goto L_1222343d;
L_122233df:;
  /* 122233df push 0x63 */
  push32((uint32_t)(0x63u));
  /* 122233e1 push 0x1223caac */
  push32((uint32_t)(0x1223caacu));
  /* 122233e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 122233e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122233eb push ecx */
  push32((uint32_t)(ECX));
  /* 122233ec call 0x12215130 */
  push32(0x122233f1u); f_12215130();
  /* 122233f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122233f4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 122233fa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 122233fc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12223402 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223405 jne 0x12223409 */
  if (!C.zf) goto L_12223409;
  /* 12223407 jmp 0x1222343d */
  goto L_1222343d;
L_12223409:;
  /* 12223409 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1222340c push ecx */
  push32((uint32_t)(ECX));
  /* 1222340d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223410 push edx */
  push32((uint32_t)(EDX));
  /* 12223411 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12223417 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12223419 push ecx */
  push32((uint32_t)(ECX));
  /* 1222341a call 0x12218950 */
  push32(0x1222341fu); f_12218950();
  /* 1222341f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223422 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223426 je 0x12223436 */
  if (C.zf) goto L_12223436;
  /* 12223428 push 2 */
  push32((uint32_t)(0x2u));
  /* 1222342a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1222342d push edx */
  push32((uint32_t)(EDX));
  /* 1222342e call 0x12215bc0 */
  push32(0x12223433u); f_12215bc0();
  /* 12223433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12223436:;
  /* 12223436 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12223438 jmp 0x12223576 */
  goto L_12223576;
L_1222343d:;
  /* 1222343d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223441 je 0x12223451 */
  if (C.zf) goto L_12223451;
  /* 12223443 push 2 */
  push32((uint32_t)(0x2u));
  /* 12223445 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223448 push eax */
  push32((uint32_t)(EAX));
  /* 12223449 call 0x12215bc0 */
  push32(0x1222344eu); f_12215bc0();
  /* 1222344e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12223451:;
  /* 12223451 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12223454 jmp 0x12223576 */
  goto L_12223576;
L_12223459:;
  /* 12223459 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222345d jne 0x12223573 */
  if (!C.zf) goto L_12223573;
  /* 12223463 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1222346d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12223470 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12223476 push 0 */
  push32((uint32_t)(0x0u));
  /* 12223478 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1222347e push edx */
  push32((uint32_t)(EDX));
  /* 1222347f push 0x12240860 */
  push32((uint32_t)(0x12240860u));
  /* 12223484 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12223487 push eax */
  push32((uint32_t)(EAX));
  /* 12223488 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1222348b push ecx */
  push32((uint32_t)(ECX));
  /* 1222348c call 0x12224570 */
  push32(0x12223491u); f_12224570();
  /* 12223491 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223494 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12223496 jne 0x122234a0 */
  if (!C.zf) goto L_122234a0;
  /* 12223498 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1222349b jmp 0x12223576 */
  goto L_12223576;
L_122234a0:;
  /* 122234a0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122234a6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 122234a9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 122234b3 jmp 0x122234c4 */
  goto L_122234c4;
L_122234b5:;
  /* 122234b5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122234bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122234be mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_122234c4:;
  /* 122234c4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122234cb jge 0x1222356f */
  if ((C.sf==C.of)) goto L_1222356f;
  /* 122234d1 cmp dword ptr [0x1223eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1223eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122234d8 jle 0x1222350b */
  if ((C.zf||C.sf!=C.of)) goto L_1222350b;
  /* 122234da push 4 */
  push32((uint32_t)(0x4u));
  /* 122234dc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122234e2 mov dl, byte ptr [ecx*2 + 0x12240860] */
  DL = (r8((uint32_t)(ECX*2 + 0x12240860)));
  /* 122234e9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 122234ef mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 122234f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122234fa push eax */
  push32((uint32_t)(EAX));
  /* 122234fb call 0x1221b140 */
  push32(0x12223500u); f_1221b140();
  /* 12223500 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223503 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12223509 jmp 0x1222353e */
  goto L_1222353e;
L_1222350b:;
  /* 1222350b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12223511 mov dl, byte ptr [ecx*2 + 0x12240860] */
  DL = (r8((uint32_t)(ECX*2 + 0x12240860)));
  /* 12223518 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1222351e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12223524 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12223529 mov ecx, dword ptr [0x1223ec98] */
  ECX = (r32((uint32_t)(0x1223ec98)));
  /* 1222352f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12223531 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12223535 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12223538 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1222353e:;
  /* 1222353e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223545 je 0x12223568 */
  if (C.zf) goto L_12223568;
  /* 12223547 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1222354d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12223550 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12223553 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1222355a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1222355e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12223564 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12223566 jmp 0x1222356a */
  goto L_1222356a;
L_12223568:;
  /* 12223568 jmp 0x1222356f */
  goto L_1222356f;
L_1222356a:;
  /* 1222356a jmp 0x122234b5 */
  goto L_122234b5;
L_1222356f:;
  /* 1222356f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12223571 jmp 0x12223576 */
  goto L_12223576;
L_12223573:;
  /* 12223573 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12223576:;
  /* 12223576 mov esp, ebp */
  ESP = (EBP);
  /* 12223578 pop ebp */
  EBP = (pop32());
  /* 12223579 ret  */
  ESPCHK(0x122232f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013580 @ 0x12223580 (10 bytes, 5 insns) */
void f_12223580(void) {
  FTRACE(0x12223580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12223580 push ebp */
  push32((uint32_t)(EBP));
  /* 12223581 mov ebp, esp */
  EBP = (ESP);
  /* 12223583 mov eax, dword ptr [0x1223fd88] */
  EAX = (r32((uint32_t)(0x1223fd88)));
  /* 12223588 pop ebp */
  EBP = (pop32());
  /* 12223589 ret  */
  ESPCHK(0x12223580u, _esp0);
  ESP += 4; return;
}

/* FUN_10013590 @ 0x12223590 (575 bytes, 196 insns) */
void f_12223590(void) {
  FTRACE(0x12223590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12223590 push ebp */
  push32((uint32_t)(EBP));
  /* 12223591 mov ebp, esp */
  EBP = (ESP);
  /* 12223593 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12223595 push 0x1223cab8 */
  push32((uint32_t)(0x1223cab8u));
  /* 1222359a push 0x1221e238 */
  push32((uint32_t)(0x1221e238u));
  /* 1222359f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 122235a5 push eax */
  push32((uint32_t)(EAX));
  /* 122235a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 122235ad add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122235b0 push ebx */
  push32((uint32_t)(EBX));
  /* 122235b1 push esi */
  push32((uint32_t)(ESI));
  /* 122235b2 push edi */
  push32((uint32_t)(EDI));
  /* 122235b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122235b6 cmp dword ptr [0x1224086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122235bd jne 0x1222360e */
  if (!C.zf) goto L_1222360e;
  /* 122235bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 122235c2 push eax */
  push32((uint32_t)(EAX));
  /* 122235c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 122235c5 push 0x1223c1e8 */
  push32((uint32_t)(0x1223c1e8u));
  /* 122235ca push 1 */
  push32((uint32_t)(0x1u));
  /* 122235cc call dword ptr [0x12243308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243308))), 0x122235d2u);
  /* 122235d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122235d4 je 0x122235e2 */
  if (C.zf) goto L_122235e2;
  /* 122235d6 mov dword ptr [0x1224086c], 1 */
  w32((uint32_t)(0x1224086c), (0x1u));
  /* 122235e0 jmp 0x1222360e */
  goto L_1222360e;
L_122235e2:;
  /* 122235e2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 122235e5 push ecx */
  push32((uint32_t)(ECX));
  /* 122235e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 122235e8 push 0x1223c1e4 */
  push32((uint32_t)(0x1223c1e4u));
  /* 122235ed push 1 */
  push32((uint32_t)(0x1u));
  /* 122235ef push 0 */
  push32((uint32_t)(0x0u));
  /* 122235f1 call dword ptr [0x12243318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243318))), 0x122235f7u);
  /* 122235f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122235f9 je 0x12223607 */
  if (C.zf) goto L_12223607;
  /* 122235fb mov dword ptr [0x1224086c], 2 */
  w32((uint32_t)(0x1224086c), (0x2u));
  /* 12223605 jmp 0x1222360e */
  goto L_1222360e;
L_12223607:;
  /* 12223607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12223609 jmp 0x122237e9 */
  goto L_122237e9;
L_1222360e:;
  /* 1222360e cmp dword ptr [0x1224086c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1224086c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223615 jne 0x12223632 */
  if (!C.zf) goto L_12223632;
  /* 12223617 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222361a push edx */
  push32((uint32_t)(EDX));
  /* 1222361b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222361e push eax */
  push32((uint32_t)(EAX));
  /* 1222361f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12223622 push ecx */
  push32((uint32_t)(ECX));
  /* 12223623 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223626 push edx */
  push32((uint32_t)(EDX));
  /* 12223627 call dword ptr [0x12243308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243308))), 0x1222362du);
  /* 1222362d jmp 0x122237e9 */
  goto L_122237e9;
L_12223632:;
  /* 12223632 cmp dword ptr [0x1224086c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1224086c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223639 jne 0x122237e7 */
  if (!C.zf) goto L_122237e7;
  /* 1222363f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223643 jne 0x1222364d */
  if (!C.zf) goto L_1222364d;
  /* 12223645 mov eax, dword ptr [0x122407e0] */
  EAX = (r32((uint32_t)(0x122407e0)));
  /* 1222364a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1222364d:;
  /* 1222364d push 0 */
  push32((uint32_t)(0x0u));
  /* 1222364f push 0 */
  push32((uint32_t)(0x0u));
  /* 12223651 push 0 */
  push32((uint32_t)(0x0u));
  /* 12223653 push 0 */
  push32((uint32_t)(0x0u));
  /* 12223655 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12223658 push ecx */
  push32((uint32_t)(ECX));
  /* 12223659 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1222365c push edx */
  push32((uint32_t)(EDX));
  /* 1222365d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12223662 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12223665 push eax */
  push32((uint32_t)(EAX));
  /* 12223666 call dword ptr [0x1224335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224335c))), 0x1222366cu);
  /* 1222366c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1222366f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223673 jne 0x1222367c */
  if (!C.zf) goto L_1222367c;
  /* 12223675 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12223677 jmp 0x122237e9 */
  goto L_122237e9;
L_1222367c:;
  /* 1222367c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12223683 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12223686 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223689 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1222368b call 0x122182d0 */
  push32(0x12223690u); f_122182d0();
  /* 12223690 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12223693 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12223696 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12223699 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1222369c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1222369f push edx */
  push32((uint32_t)(EDX));
  /* 122236a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122236a2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122236a5 push eax */
  push32((uint32_t)(EAX));
  /* 122236a6 call 0x12218ea0 */
  push32(0x122236abu); f_12218ea0();
  /* 122236ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122236ae mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122236b5 jmp 0x122236ce */
  goto L_122236ce;
  /* 122236b7 mov eax, 1 */
  EAX = (0x1u);
  /* 122236bc ret  */
  ESPCHK(0x12223590u, _esp0);
  ESP += 4; return;
  /* 122236bd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122236c0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 122236c7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122236ce:;
  /* 122236ce cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122236d2 jne 0x122236db */
  if (!C.zf) goto L_122236db;
  /* 122236d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122236d6 jmp 0x122237e9 */
  goto L_122237e9;
L_122236db:;
  /* 122236db push 0 */
  push32((uint32_t)(0x0u));
  /* 122236dd push 0 */
  push32((uint32_t)(0x0u));
  /* 122236df mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122236e2 push ecx */
  push32((uint32_t)(ECX));
  /* 122236e3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122236e6 push edx */
  push32((uint32_t)(EDX));
  /* 122236e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122236ea push eax */
  push32((uint32_t)(EAX));
  /* 122236eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122236ee push ecx */
  push32((uint32_t)(ECX));
  /* 122236ef push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122236f4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122236f7 push edx */
  push32((uint32_t)(EDX));
  /* 122236f8 call dword ptr [0x1224335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224335c))), 0x122236feu);
  /* 122236fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12223700 jne 0x12223709 */
  if (!C.zf) goto L_12223709;
  /* 12223702 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12223704 jmp 0x122237e9 */
  goto L_122237e9;
L_12223709:;
  /* 12223709 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12223710 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12223713 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12223717 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222371a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1222371c call 0x122182d0 */
  push32(0x12223721u); f_122182d0();
  /* 12223721 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12223724 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12223727 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1222372a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1222372d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12223734 jmp 0x1222374d */
  goto L_1222374d;
  /* 12223736 mov eax, 1 */
  EAX = (0x1u);
  /* 1222373b ret  */
  ESPCHK(0x12223590u, _esp0);
  ESP += 4; return;
  /* 1222373c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1222373f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12223746 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1222374d:;
  /* 1222374d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223751 jne 0x1222375a */
  if (!C.zf) goto L_1222375a;
  /* 12223753 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12223755 jmp 0x122237e9 */
  goto L_122237e9;
L_1222375a:;
  /* 1222375a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222375e jne 0x12223769 */
  if (!C.zf) goto L_12223769;
  /* 12223760 mov edx, dword ptr [0x122407d0] */
  EDX = (r32((uint32_t)(0x122407d0)));
  /* 12223766 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12223769:;
  /* 12223769 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222376c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1222376f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12223775 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12223778 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1222377b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12223782 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12223785 push ecx */
  push32((uint32_t)(ECX));
  /* 12223786 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12223789 push edx */
  push32((uint32_t)(EDX));
  /* 1222378a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1222378d push eax */
  push32((uint32_t)(EAX));
  /* 1222378e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223791 push ecx */
  push32((uint32_t)(ECX));
  /* 12223792 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12223795 push edx */
  push32((uint32_t)(EDX));
  /* 12223796 call dword ptr [0x12243318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243318))), 0x1222379cu);
  /* 1222379c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1222379f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122237a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122237a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122237a7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 122237ac cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122237b2 je 0x122237c8 */
  if (C.zf) goto L_122237c8;
  /* 122237b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122237b7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122237ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122237bc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122237c0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122237c6 je 0x122237cc */
  if (C.zf) goto L_122237cc;
L_122237c8:;
  /* 122237c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122237ca jmp 0x122237e9 */
  goto L_122237e9;
L_122237cc:;
  /* 122237cc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122237cf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122237d1 push eax */
  push32((uint32_t)(EAX));
  /* 122237d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122237d5 push ecx */
  push32((uint32_t)(ECX));
  /* 122237d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122237d9 push edx */
  push32((uint32_t)(EDX));
  /* 122237da call 0x1221d020 */
  push32(0x122237dfu); f_1221d020();
  /* 122237df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122237e2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122237e5 jmp 0x122237e9 */
  goto L_122237e9;
L_122237e7:;
  /* 122237e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122237e9:;
  /* 122237e9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 122237ec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122237ef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 122237f6 pop edi */
  EDI = (pop32());
  /* 122237f7 pop esi */
  ESI = (pop32());
  /* 122237f8 pop ebx */
  EBX = (pop32());
  /* 122237f9 mov esp, ebp */
  ESP = (EBP);
  /* 122237fb pop ebp */
  EBP = (pop32());
  /* 122237fc ret  */
  ESPCHK(0x12223590u, _esp0);
  ESP += 4; return;
}

/* FUN_10013800 @ 0x12223800 (208 bytes, 85 insns) */
void f_12223800(void) {
  FTRACE(0x12223800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12223800 push ebp */
  push32((uint32_t)(EBP));
  /* 12223801 mov ebp, esp */
  EBP = (ESP);
  /* 12223803 push edi */
  push32((uint32_t)(EDI));
  /* 12223804 push esi */
  push32((uint32_t)(ESI));
  /* 12223805 push ebx */
  push32((uint32_t)(EBX));
  /* 12223806 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12223809 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1222380c lea eax, [0x122407c8] */
  EAX = ((uint32_t)(0x122407c8));
  /* 12223812 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223816 jne 0x12223853 */
  if (!C.zf) goto L_12223853;
  /* 12223818 mov al, 0xff */
  AL = (0xffu);
  /* 1222381a mov edi, edi */
  EDI = (EDI);
L_1222381c:;
  /* 1222381c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1222381e je 0x1222384e */
  if (C.zf) goto L_1222384e;
  /* 12223820 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12223822 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12223823 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12223825 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12223826 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12223828 je 0x1222381c */
  if (C.zf) goto L_1222381c;
  /* 1222382a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1222382c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1222382e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12223830 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12223833 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12223835 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12223837 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12223839 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1222383b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1222383d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1222383f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12223842 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12223844 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12223846 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12223848 je 0x1222381c */
  if (C.zf) goto L_1222381c;
  /* 1222384a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1222384c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1222384e:;
  /* 1222384e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12223851 jmp 0x122238cb */
  goto L_122238cb;
L_12223853:;
  /* 12223853 lock inc dword ptr [0x1224095c] */
  x86_unimpl("lock inc @ 0x12223853");
  /* 1222385a cmp dword ptr [0x1224094c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224094c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223861 jg 0x12223867 */
  if ((!C.zf&&C.sf==C.of)) goto L_12223867;
  /* 12223863 push 0 */
  push32((uint32_t)(0x0u));
  /* 12223865 jmp 0x1222387c */
  goto L_1222387c;
L_12223867:;
  /* 12223867 lock dec dword ptr [0x1224095c] */
  x86_unimpl("lock dec @ 0x12223867");
  /* 1222386e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12223870 call 0x12218b30 */
  push32(0x12223875u); f_12218b30();
  /* 12223875 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1222387c:;
  /* 1222387c mov eax, 0xff */
  EAX = (0xffu);
  /* 12223881 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12223883 nop  */
  /* nop */
L_12223884:;
  /* 12223884 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12223886 je 0x122238af */
  if (C.zf) goto L_122238af;
  /* 12223888 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1222388a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1222388b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1222388d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1222388e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12223890 je 0x12223884 */
  if (C.zf) goto L_12223884;
  /* 12223892 push eax */
  push32((uint32_t)(EAX));
  /* 12223893 push ebx */
  push32((uint32_t)(EBX));
  /* 12223894 call 0x12224970 */
  push32(0x12223899u); f_12224970();
  /* 12223899 mov ebx, eax */
  EBX = (EAX);
  /* 1222389b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222389e call 0x12224970 */
  push32(0x122238a3u); f_12224970();
  /* 122238a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122238a6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122238a8 je 0x12223884 */
  if (C.zf) goto L_12223884;
  /* 122238aa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122238ac sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_122238af:;
  /* 122238af mov ebx, eax */
  EBX = (EAX);
  /* 122238b1 pop eax */
  EAX = (pop32());
  /* 122238b2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122238b4 jne 0x122238bf */
  if (!C.zf) goto L_122238bf;
  /* 122238b6 lock dec dword ptr [0x1224095c] */
  x86_unimpl("lock dec @ 0x122238b6");
  /* 122238bd jmp 0x122238c9 */
  goto L_122238c9;
L_122238bf:;
  /* 122238bf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122238c1 call 0x12218bd0 */
  push32(0x122238c6u); f_12218bd0();
  /* 122238c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122238c9:;
  /* 122238c9 mov eax, ebx */
  EAX = (EBX);
L_122238cb:;
  /* 122238cb pop ebx */
  EBX = (pop32());
  /* 122238cc pop esi */
  ESI = (pop32());
  /* 122238cd pop edi */
  EDI = (pop32());
  /* 122238ce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122238cf ret  */
  ESPCHK(0x12223800u, _esp0);
  ESP += 4; return;
}

/* FUN_100138d0 @ 0x122238d0 (257 bytes, 103 insns) */
void f_122238d0(void) {
  FTRACE(0x122238d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122238d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122238d1 mov ebp, esp */
  EBP = (ESP);
  /* 122238d3 push edi */
  push32((uint32_t)(EDI));
  /* 122238d4 push esi */
  push32((uint32_t)(ESI));
  /* 122238d5 push ebx */
  push32((uint32_t)(EBX));
  /* 122238d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122238d9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122238db je 0x122239ca */
  if (C.zf) goto L_122239ca;
  /* 122238e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 122238e4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 122238e7 lea eax, [0x122407c8] */
  EAX = ((uint32_t)(0x122407c8));
  /* 122238ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122238f1 jne 0x12223941 */
  if (!C.zf) goto L_12223941;
  /* 122238f3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 122238f5 mov bl, 0x5a */
  BL = (0x5au);
  /* 122238f7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 122238f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122238fc:;
  /* 122238fc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 122238fe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12223900 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12223902 je 0x12223925 */
  if (C.zf) goto L_12223925;
  /* 12223904 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12223906 je 0x12223925 */
  if (C.zf) goto L_12223925;
  /* 12223908 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12223909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1222390a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1222390c jb 0x12223914 */
  if (C.cf) goto L_12223914;
  /* 1222390e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12223910 ja 0x12223914 */
  if ((!C.cf&&!C.zf)) goto L_12223914;
  /* 12223912 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12223914:;
  /* 12223914 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12223916 jb 0x1222391e */
  if (C.cf) goto L_1222391e;
  /* 12223918 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1222391a ja 0x1222391e */
  if ((!C.cf&&!C.zf)) goto L_1222391e;
  /* 1222391c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1222391e:;
  /* 1222391e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12223920 jne 0x1222392f */
  if (!C.zf) goto L_1222392f;
  /* 12223922 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12223923 jne 0x122238fc */
  if (!C.zf) goto L_122238fc;
L_12223925:;
  /* 12223925 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12223927 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12223929 je 0x122239ca */
  if (C.zf) goto L_122239ca;
L_1222392f:;
  /* 1222392f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12223934 jb 0x122239ca */
  if (C.cf) goto L_122239ca;
  /* 1222393a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1222393c jmp 0x122239ca */
  goto L_122239ca;
L_12223941:;
  /* 12223941 lock inc dword ptr [0x1224095c] */
  x86_unimpl("lock inc @ 0x12223941");
  /* 12223948 cmp dword ptr [0x1224094c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224094c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222394f jg 0x12223955 */
  if ((!C.zf&&C.sf==C.of)) goto L_12223955;
  /* 12223951 push 0 */
  push32((uint32_t)(0x0u));
  /* 12223953 jmp 0x1222396e */
  goto L_1222396e;
L_12223955:;
  /* 12223955 lock dec dword ptr [0x1224095c] */
  x86_unimpl("lock dec @ 0x12223955");
  /* 1222395c mov ebx, ecx */
  EBX = (ECX);
  /* 1222395e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12223960 call 0x12218b30 */
  push32(0x12223965u); f_12218b30();
  /* 12223965 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1222396c mov ecx, ebx */
  ECX = (EBX);
L_1222396e:;
  /* 1222396e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12223970 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12223972 mov edi, edi */
  EDI = (EDI);
L_12223974:;
  /* 12223974 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12223976 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12223978 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1222397a je 0x1222399f */
  if (C.zf) goto L_1222399f;
  /* 1222397c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1222397e je 0x1222399f */
  if (C.zf) goto L_1222399f;
  /* 12223980 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12223981 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12223982 push ecx */
  push32((uint32_t)(ECX));
  /* 12223983 push eax */
  push32((uint32_t)(EAX));
  /* 12223984 push ebx */
  push32((uint32_t)(EBX));
  /* 12223985 call 0x12224970 */
  push32(0x1222398au); f_12224970();
  /* 1222398a mov ebx, eax */
  EBX = (EAX);
  /* 1222398c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222398f call 0x12224970 */
  push32(0x12223994u); f_12224970();
  /* 12223994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223997 pop ecx */
  ECX = (pop32());
  /* 12223998 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222399a jne 0x122239a5 */
  if (!C.zf) goto L_122239a5;
  /* 1222399c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1222399d jne 0x12223974 */
  if (!C.zf) goto L_12223974;
L_1222399f:;
  /* 1222399f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122239a1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122239a3 je 0x122239ae */
  if (C.zf) goto L_122239ae;
L_122239a5:;
  /* 122239a5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 122239aa jb 0x122239ae */
  if (C.cf) goto L_122239ae;
  /* 122239ac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_122239ae:;
  /* 122239ae pop eax */
  EAX = (pop32());
  /* 122239af or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122239b1 jne 0x122239bc */
  if (!C.zf) goto L_122239bc;
  /* 122239b3 lock dec dword ptr [0x1224095c] */
  x86_unimpl("lock dec @ 0x122239b3");
  /* 122239ba jmp 0x122239ca */
  goto L_122239ca;
L_122239bc:;
  /* 122239bc mov ebx, ecx */
  EBX = (ECX);
  /* 122239be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122239c0 call 0x12218bd0 */
  push32(0x122239c5u); f_12218bd0();
  /* 122239c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122239c8 mov ecx, ebx */
  ECX = (EBX);
L_122239ca:;
  /* 122239ca mov eax, ecx */
  EAX = (ECX);
  /* 122239cc pop ebx */
  EBX = (pop32());
  /* 122239cd pop esi */
  ESI = (pop32());
  /* 122239ce pop edi */
  EDI = (pop32());
  /* 122239cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122239d0 ret  */
  ESPCHK(0x122238d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139e0 @ 0x122239e0 (255 bytes, 88 insns) */
void f_122239e0(void) {
  FTRACE(0x122239e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122239e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122239e1 mov ebp, esp */
  EBP = (ESP);
  /* 122239e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_122239e6:;
  /* 122239e6 cmp dword ptr [0x1223eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1223eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122239ed jle 0x12223a06 */
  if ((C.zf||C.sf!=C.of)) goto L_12223a06;
  /* 122239ef push 8 */
  push32((uint32_t)(0x8u));
  /* 122239f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122239f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122239f6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122239f8 push ecx */
  push32((uint32_t)(ECX));
  /* 122239f9 call 0x1221b140 */
  push32(0x122239feu); f_1221b140();
  /* 122239fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223a01 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12223a04 jmp 0x12223a1f */
  goto L_12223a1f;
L_12223a06:;
  /* 12223a06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223a09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12223a0b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12223a0d mov ecx, dword ptr [0x1223ec98] */
  ECX = (r32((uint32_t)(0x1223ec98)));
  /* 12223a13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12223a15 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12223a19 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12223a1c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12223a1f:;
  /* 12223a1f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223a23 je 0x12223a30 */
  if (C.zf) goto L_12223a30;
  /* 12223a25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223a28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223a2b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12223a2e jmp 0x122239e6 */
  goto L_122239e6;
L_12223a30:;
  /* 12223a30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223a33 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12223a35 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12223a37 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12223a3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223a3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223a40 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12223a43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12223a46 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12223a49 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223a4d je 0x12223a55 */
  if (C.zf) goto L_12223a55;
  /* 12223a4f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223a53 jne 0x12223a68 */
  if (!C.zf) goto L_12223a68;
L_12223a55:;
  /* 12223a55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223a58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12223a5a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12223a5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12223a5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223a62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223a65 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12223a68:;
  /* 12223a68 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12223a6f:;
  /* 12223a6f cmp dword ptr [0x1223eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1223eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223a76 jle 0x12223a8b */
  if ((C.zf||C.sf!=C.of)) goto L_12223a8b;
  /* 12223a78 push 4 */
  push32((uint32_t)(0x4u));
  /* 12223a7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12223a7d push edx */
  push32((uint32_t)(EDX));
  /* 12223a7e call 0x1221b140 */
  push32(0x12223a83u); f_1221b140();
  /* 12223a83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223a86 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12223a89 jmp 0x12223aa0 */
  goto L_12223aa0;
L_12223a8b:;
  /* 12223a8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12223a8e mov ecx, dword ptr [0x1223ec98] */
  ECX = (r32((uint32_t)(0x1223ec98)));
  /* 12223a94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12223a96 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12223a9a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12223a9d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12223aa0:;
  /* 12223aa0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223aa4 je 0x12223acb */
  if (C.zf) goto L_12223acb;
  /* 12223aa6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12223aa9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12223aac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12223aaf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12223ab3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12223ab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223ab9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12223abb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12223abd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12223ac0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223ac3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223ac6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12223ac9 jmp 0x12223a6f */
  goto L_12223a6f;
L_12223acb:;
  /* 12223acb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223acf jne 0x12223ad8 */
  if (!C.zf) goto L_12223ad8;
  /* 12223ad1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12223ad4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12223ad6 jmp 0x12223adb */
  goto L_12223adb;
L_12223ad8:;
  /* 12223ad8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12223adb:;
  /* 12223adb mov esp, ebp */
  ESP = (EBP);
  /* 12223add pop ebp */
  EBP = (pop32());
  /* 12223ade ret  */
  ESPCHK(0x122239e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ae0 @ 0x12223ae0 (17 bytes, 8 insns) */
void f_12223ae0(void) {
  FTRACE(0x12223ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12223ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12223ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12223ae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223ae6 push eax */
  push32((uint32_t)(EAX));
  /* 12223ae7 call 0x122239e0 */
  push32(0x12223aecu); f_122239e0();
  /* 12223aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223aef pop ebp */
  EBP = (pop32());
  /* 12223af0 ret  */
  ESPCHK(0x12223ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b00 @ 0x12223b00 (297 bytes, 106 insns) */
void f_12223b00(void) {
  FTRACE(0x12223b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12223b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12223b01 mov ebp, esp */
  EBP = (ESP);
  /* 12223b03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12223b06 push esi */
  push32((uint32_t)(ESI));
L_12223b07:;
  /* 12223b07 cmp dword ptr [0x1223eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1223eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223b0e jle 0x12223b27 */
  if ((C.zf||C.sf!=C.of)) goto L_12223b27;
  /* 12223b10 push 8 */
  push32((uint32_t)(0x8u));
  /* 12223b12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223b15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12223b17 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12223b19 push ecx */
  push32((uint32_t)(ECX));
  /* 12223b1a call 0x1221b140 */
  push32(0x12223b1fu); f_1221b140();
  /* 12223b1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223b22 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12223b25 jmp 0x12223b40 */
  goto L_12223b40;
L_12223b27:;
  /* 12223b27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223b2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12223b2c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12223b2e mov ecx, dword ptr [0x1223ec98] */
  ECX = (r32((uint32_t)(0x1223ec98)));
  /* 12223b34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12223b36 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12223b3a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12223b3d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12223b40:;
  /* 12223b40 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223b44 je 0x12223b51 */
  if (C.zf) goto L_12223b51;
  /* 12223b46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223b49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223b4c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12223b4f jmp 0x12223b07 */
  goto L_12223b07;
L_12223b51:;
  /* 12223b51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223b54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12223b56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12223b58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12223b5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223b5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223b61 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12223b64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12223b67 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12223b6a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223b6e je 0x12223b76 */
  if (C.zf) goto L_12223b76;
  /* 12223b70 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223b74 jne 0x12223b89 */
  if (!C.zf) goto L_12223b89;
L_12223b76:;
  /* 12223b76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223b79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12223b7b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12223b7d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12223b80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223b83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223b86 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12223b89:;
  /* 12223b89 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12223b90 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12223b97:;
  /* 12223b97 cmp dword ptr [0x1223eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1223eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223b9e jle 0x12223bb3 */
  if ((C.zf||C.sf!=C.of)) goto L_12223bb3;
  /* 12223ba0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12223ba2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12223ba5 push edx */
  push32((uint32_t)(EDX));
  /* 12223ba6 call 0x1221b140 */
  push32(0x12223babu); f_1221b140();
  /* 12223bab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223bae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12223bb1 jmp 0x12223bc8 */
  goto L_12223bc8;
L_12223bb3:;
  /* 12223bb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12223bb6 mov ecx, dword ptr [0x1223ec98] */
  ECX = (r32((uint32_t)(0x1223ec98)));
  /* 12223bbc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12223bbe mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12223bc2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12223bc5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12223bc8:;
  /* 12223bc8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223bcc je 0x12223c09 */
  if (C.zf) goto L_12223c09;
  /* 12223bce push 0 */
  push32((uint32_t)(0x0u));
  /* 12223bd0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12223bd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12223bd5 push eax */
  push32((uint32_t)(EAX));
  /* 12223bd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 12223bda call 0x12224aa0 */
  push32(0x12223bdfu); f_12224aa0();
  /* 12223bdf mov ecx, eax */
  ECX = (EAX);
  /* 12223be1 mov esi, edx */
  ESI = (EDX);
  /* 12223be3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12223be6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12223be9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12223bea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223bec adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12223bee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12223bf1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12223bf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223bf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12223bf9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12223bfb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12223bfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12223c01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223c04 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12223c07 jmp 0x12223b97 */
  goto L_12223b97;
L_12223c09:;
  /* 12223c09 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223c0d jne 0x12223c1e */
  if (!C.zf) goto L_12223c1e;
  /* 12223c0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223c12 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12223c14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12223c17 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223c1a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12223c1c jmp 0x12223c24 */
  goto L_12223c24;
L_12223c1e:;
  /* 12223c1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223c21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12223c24:;
  /* 12223c24 pop esi */
  ESI = (pop32());
  /* 12223c25 mov esp, ebp */
  ESP = (EBP);
  /* 12223c27 pop ebp */
  EBP = (pop32());
  /* 12223c28 ret  */
  ESPCHK(0x12223b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c30 @ 0x12223c30 (61 bytes, 18 insns) */
void f_12223c30(void) {
  FTRACE(0x12223c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12223c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12223c31 mov ebp, esp */
  EBP = (ESP);
  /* 12223c33 cmp dword ptr [0x12240928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223c3a jne 0x12223c6b */
  if (!C.zf) goto L_12223c6b;
  /* 12223c3c push 0xb */
  push32((uint32_t)(0xbu));
  /* 12223c3e call 0x12218b30 */
  push32(0x12223c43u); f_12218b30();
  /* 12223c43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223c46 cmp dword ptr [0x12240928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223c4d jne 0x12223c61 */
  if (!C.zf) goto L_12223c61;
  /* 12223c4f call 0x12223c90 */
  push32(0x12223c54u); f_12223c90();
  /* 12223c54 mov eax, dword ptr [0x12240928] */
  EAX = (r32((uint32_t)(0x12240928)));
  /* 12223c59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223c5c mov dword ptr [0x12240928], eax */
  w32((uint32_t)(0x12240928), (EAX));
L_12223c61:;
  /* 12223c61 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12223c63 call 0x12218bd0 */
  push32(0x12223c68u); f_12218bd0();
  /* 12223c68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12223c6b:;
  /* 12223c6b pop ebp */
  EBP = (pop32());
  /* 12223c6c ret  */
  ESPCHK(0x12223c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c70 @ 0x12223c70 (30 bytes, 11 insns) */
void f_12223c70(void) {
  FTRACE(0x12223c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12223c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12223c71 mov ebp, esp */
  EBP = (ESP);
  /* 12223c73 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12223c75 call 0x12218b30 */
  push32(0x12223c7au); f_12218b30();
  /* 12223c7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223c7d call 0x12223c90 */
  push32(0x12223c82u); f_12223c90();
  /* 12223c82 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12223c84 call 0x12218bd0 */
  push32(0x12223c89u); f_12218bd0();
  /* 12223c89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223c8c pop ebp */
  EBP = (pop32());
  /* 12223c8d ret  */
  ESPCHK(0x12223c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c90 @ 0x12223c90 (939 bytes, 266 insns) */
void f_12223c90(void) {
  FTRACE(0x12223c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12223c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12223c91 mov ebp, esp */
  EBP = (ESP);
  /* 12223c93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12223c96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12223c9d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12223c9f call 0x12218b30 */
  push32(0x12223ca4u); f_12218b30();
  /* 12223ca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223ca7 mov dword ptr [0x12240870], 0 */
  w32((uint32_t)(0x12240870), (0x0u));
  /* 12223cb1 mov dword ptr [0x1223fe38], 0xffffffff */
  w32((uint32_t)(0x1223fe38), (0xffffffffu));
  /* 12223cbb mov eax, dword ptr [0x1223fe38] */
  EAX = (r32((uint32_t)(0x1223fe38)));
  /* 12223cc0 mov dword ptr [0x1223fe28], eax */
  w32((uint32_t)(0x1223fe28), (EAX));
  /* 12223cc5 push 0x1223cb18 */
  push32((uint32_t)(0x1223cb18u));
  /* 12223cca call 0x12224b10 */
  push32(0x12223ccfu); f_12224b10();
  /* 12223ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223cd2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12223cd5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223cd9 jne 0x12223e13 */
  if (!C.zf) goto L_12223e13;
  /* 12223cdf push 0xc */
  push32((uint32_t)(0xcu));
  /* 12223ce1 call 0x12218bd0 */
  push32(0x12223ce6u); f_12218bd0();
  /* 12223ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223ce9 push 0x12240878 */
  push32((uint32_t)(0x12240878u));
  /* 12223cee call dword ptr [0x122432cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432cc))), 0x12223cf4u);
  /* 12223cf4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223cf7 je 0x12223e0e */
  if (C.zf) goto L_12223e0e;
  /* 12223cfd mov dword ptr [0x12240870], 1 */
  w32((uint32_t)(0x12240870), (0x1u));
  /* 12223d07 mov ecx, dword ptr [0x12240878] */
  ECX = (r32((uint32_t)(0x12240878)));
  /* 12223d0d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12223d10 mov dword ptr [0x1223fd90], ecx */
  w32((uint32_t)(0x1223fd90), (ECX));
  /* 12223d16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12223d18 mov dx, word ptr [0x122408be] */
  DX = (r16((uint32_t)(0x122408be)));
  /* 12223d1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12223d21 je 0x12223d39 */
  if (C.zf) goto L_12223d39;
  /* 12223d23 mov eax, dword ptr [0x122408cc] */
  EAX = (r32((uint32_t)(0x122408cc)));
  /* 12223d28 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12223d2b mov ecx, dword ptr [0x1223fd90] */
  ECX = (r32((uint32_t)(0x1223fd90)));
  /* 12223d31 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223d33 mov dword ptr [0x1223fd90], ecx */
  w32((uint32_t)(0x1223fd90), (ECX));
L_12223d39:;
  /* 12223d39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12223d3b mov dx, word ptr [0x12240912] */
  DX = (r16((uint32_t)(0x12240912)));
  /* 12223d42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12223d44 je 0x12223d6e */
  if (C.zf) goto L_12223d6e;
  /* 12223d46 cmp dword ptr [0x12240920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223d4d je 0x12223d6e */
  if (C.zf) goto L_12223d6e;
  /* 12223d4f mov dword ptr [0x1223fd94], 1 */
  w32((uint32_t)(0x1223fd94), (0x1u));
  /* 12223d59 mov eax, dword ptr [0x12240920] */
  EAX = (r32((uint32_t)(0x12240920)));
  /* 12223d5e sub eax, dword ptr [0x122408cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122408cc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12223d64 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12223d67 mov dword ptr [0x1223fd98], eax */
  w32((uint32_t)(0x1223fd98), (EAX));
  /* 12223d6c jmp 0x12223d82 */
  goto L_12223d82;
L_12223d6e:;
  /* 12223d6e mov dword ptr [0x1223fd94], 0 */
  w32((uint32_t)(0x1223fd94), (0x0u));
  /* 12223d78 mov dword ptr [0x1223fd98], 0 */
  w32((uint32_t)(0x1223fd98), (0x0u));
L_12223d82:;
  /* 12223d82 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12223d85 push ecx */
  push32((uint32_t)(ECX));
  /* 12223d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12223d88 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12223d8a mov edx, dword ptr [0x1223fe1c] */
  EDX = (r32((uint32_t)(0x1223fe1c)));
  /* 12223d90 push edx */
  push32((uint32_t)(EDX));
  /* 12223d91 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12223d93 push 0x1224087c */
  push32((uint32_t)(0x1224087cu));
  /* 12223d98 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12223d9d mov eax, dword ptr [0x122407e0] */
  EAX = (r32((uint32_t)(0x122407e0)));
  /* 12223da2 push eax */
  push32((uint32_t)(EAX));
  /* 12223da3 call dword ptr [0x1224335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224335c))), 0x12223da9u);
  /* 12223da9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12223dab je 0x12223dbf */
  if (C.zf) goto L_12223dbf;
  /* 12223dad cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223db1 jne 0x12223dbf */
  if (!C.zf) goto L_12223dbf;
  /* 12223db3 mov ecx, dword ptr [0x1223fe1c] */
  ECX = (r32((uint32_t)(0x1223fe1c)));
  /* 12223db9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12223dbd jmp 0x12223dc8 */
  goto L_12223dc8;
L_12223dbf:;
  /* 12223dbf mov edx, dword ptr [0x1223fe1c] */
  EDX = (r32((uint32_t)(0x1223fe1c)));
  /* 12223dc5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12223dc8:;
  /* 12223dc8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12223dcb push eax */
  push32((uint32_t)(EAX));
  /* 12223dcc push 0 */
  push32((uint32_t)(0x0u));
  /* 12223dce push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12223dd0 mov ecx, dword ptr [0x1223fe20] */
  ECX = (r32((uint32_t)(0x1223fe20)));
  /* 12223dd6 push ecx */
  push32((uint32_t)(ECX));
  /* 12223dd7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12223dd9 push 0x122408d0 */
  push32((uint32_t)(0x122408d0u));
  /* 12223dde push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12223de3 mov edx, dword ptr [0x122407e0] */
  EDX = (r32((uint32_t)(0x122407e0)));
  /* 12223de9 push edx */
  push32((uint32_t)(EDX));
  /* 12223dea call dword ptr [0x1224335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224335c))), 0x12223df0u);
  /* 12223df0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12223df2 je 0x12223e05 */
  if (C.zf) goto L_12223e05;
  /* 12223df4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223df8 jne 0x12223e05 */
  if (!C.zf) goto L_12223e05;
  /* 12223dfa mov eax, dword ptr [0x1223fe20] */
  EAX = (r32((uint32_t)(0x1223fe20)));
  /* 12223dff mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12223e03 jmp 0x12223e0e */
  goto L_12223e0e;
L_12223e05:;
  /* 12223e05 mov ecx, dword ptr [0x1223fe20] */
  ECX = (r32((uint32_t)(0x1223fe20)));
  /* 12223e0b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12223e0e:;
  /* 12223e0e jmp 0x12224037 */
  goto L_12224037;
L_12223e13:;
  /* 12223e13 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223e16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12223e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12223e1b je 0x12223e3d */
  if (C.zf) goto L_12223e3d;
  /* 12223e1d cmp dword ptr [0x12240924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223e24 je 0x12223e4c */
  if (C.zf) goto L_12223e4c;
  /* 12223e26 mov ecx, dword ptr [0x12240924] */
  ECX = (r32((uint32_t)(0x12240924)));
  /* 12223e2c push ecx */
  push32((uint32_t)(ECX));
  /* 12223e2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223e30 push edx */
  push32((uint32_t)(EDX));
  /* 12223e31 call 0x12220dc0 */
  push32(0x12223e36u); f_12220dc0();
  /* 12223e36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12223e3b jne 0x12223e4c */
  if (!C.zf) goto L_12223e4c;
L_12223e3d:;
  /* 12223e3d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12223e3f call 0x12218bd0 */
  push32(0x12223e44u); f_12218bd0();
  /* 12223e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223e47 jmp 0x12224037 */
  goto L_12224037;
L_12223e4c:;
  /* 12223e4c push 2 */
  push32((uint32_t)(0x2u));
  /* 12223e4e mov eax, dword ptr [0x12240924] */
  EAX = (r32((uint32_t)(0x12240924)));
  /* 12223e53 push eax */
  push32((uint32_t)(EAX));
  /* 12223e54 call 0x12215bc0 */
  push32(0x12223e59u); f_12215bc0();
  /* 12223e59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223e5c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12223e61 push 0x1223cb10 */
  push32((uint32_t)(0x1223cb10u));
  /* 12223e66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12223e68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223e6b push ecx */
  push32((uint32_t)(ECX));
  /* 12223e6c call 0x12217f60 */
  push32(0x12223e71u); f_12217f60();
  /* 12223e71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223e74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223e77 push eax */
  push32((uint32_t)(EAX));
  /* 12223e78 call 0x12215130 */
  push32(0x12223e7du); f_12215130();
  /* 12223e7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223e80 mov dword ptr [0x12240924], eax */
  w32((uint32_t)(0x12240924), (EAX));
  /* 12223e85 cmp dword ptr [0x12240924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223e8c jne 0x12223e9d */
  if (!C.zf) goto L_12223e9d;
  /* 12223e8e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12223e90 call 0x12218bd0 */
  push32(0x12223e95u); f_12218bd0();
  /* 12223e95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223e98 jmp 0x12224037 */
  goto L_12224037;
L_12223e9d:;
  /* 12223e9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223ea0 push edx */
  push32((uint32_t)(EDX));
  /* 12223ea1 mov eax, dword ptr [0x12240924] */
  EAX = (r32((uint32_t)(0x12240924)));
  /* 12223ea6 push eax */
  push32((uint32_t)(EAX));
  /* 12223ea7 call 0x122180e0 */
  push32(0x12223eacu); f_122180e0();
  /* 12223eac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223eaf push 0xc */
  push32((uint32_t)(0xcu));
  /* 12223eb1 call 0x12218bd0 */
  push32(0x12223eb6u); f_12218bd0();
  /* 12223eb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223eb9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12223ebb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223ebe push ecx */
  push32((uint32_t)(ECX));
  /* 12223ebf mov edx, dword ptr [0x1223fe1c] */
  EDX = (r32((uint32_t)(0x1223fe1c)));
  /* 12223ec5 push edx */
  push32((uint32_t)(EDX));
  /* 12223ec6 call 0x12218950 */
  push32(0x12223ecbu); f_12218950();
  /* 12223ecb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223ece mov eax, dword ptr [0x1223fe1c] */
  EAX = (r32((uint32_t)(0x1223fe1c)));
  /* 12223ed3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12223ed7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223eda add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223edd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12223ee0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223ee3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12223ee6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223ee9 jne 0x12223efd */
  if (!C.zf) goto L_12223efd;
  /* 12223eeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12223eee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223ef1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12223ef4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223ef7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223efa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12223efd:;
  /* 12223efd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223f00 push eax */
  push32((uint32_t)(EAX));
  /* 12223f01 call 0x122239e0 */
  push32(0x12223f06u); f_122239e0();
  /* 12223f06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223f09 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12223f0f mov dword ptr [0x1223fd90], eax */
  w32((uint32_t)(0x1223fd90), (EAX));
L_12223f14:;
  /* 12223f14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223f17 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12223f1a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223f1d je 0x12223f35 */
  if (C.zf) goto L_12223f35;
  /* 12223f1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223f22 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12223f25 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223f28 jl 0x12223f40 */
  if ((C.sf!=C.of)) goto L_12223f40;
  /* 12223f2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223f2d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12223f30 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223f33 jg 0x12223f40 */
  if ((!C.zf&&C.sf==C.of)) goto L_12223f40;
L_12223f35:;
  /* 12223f35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223f38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223f3b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12223f3e jmp 0x12223f14 */
  goto L_12223f14;
L_12223f40:;
  /* 12223f40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223f43 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12223f46 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223f49 jne 0x12223fe5 */
  if (!C.zf) goto L_12223fe5;
  /* 12223f4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223f52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223f55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12223f58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223f5b push edx */
  push32((uint32_t)(EDX));
  /* 12223f5c call 0x122239e0 */
  push32(0x12223f61u); f_122239e0();
  /* 12223f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223f64 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12223f67 mov ecx, dword ptr [0x1223fd90] */
  ECX = (r32((uint32_t)(0x1223fd90)));
  /* 12223f6d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223f6f mov dword ptr [0x1223fd90], ecx */
  w32((uint32_t)(0x1223fd90), (ECX));
L_12223f75:;
  /* 12223f75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223f78 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12223f7b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223f7e jl 0x12223f96 */
  if ((C.sf!=C.of)) goto L_12223f96;
  /* 12223f80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223f83 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12223f86 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223f89 jg 0x12223f96 */
  if ((!C.zf&&C.sf==C.of)) goto L_12223f96;
  /* 12223f8b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223f8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223f91 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12223f94 jmp 0x12223f75 */
  goto L_12223f75;
L_12223f96:;
  /* 12223f96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223f99 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12223f9c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223f9f jne 0x12223fe5 */
  if (!C.zf) goto L_12223fe5;
  /* 12223fa1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223fa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223fa7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12223faa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223fad push ecx */
  push32((uint32_t)(ECX));
  /* 12223fae call 0x122239e0 */
  push32(0x12223fb3u); f_122239e0();
  /* 12223fb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12223fb6 mov edx, dword ptr [0x1223fd90] */
  EDX = (r32((uint32_t)(0x1223fd90)));
  /* 12223fbc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223fbe mov dword ptr [0x1223fd90], edx */
  w32((uint32_t)(0x1223fd90), (EDX));
L_12223fc4:;
  /* 12223fc4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223fc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12223fca cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223fcd jl 0x12223fe5 */
  if ((C.sf!=C.of)) goto L_12223fe5;
  /* 12223fcf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223fd2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12223fd5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223fd8 jg 0x12223fe5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12223fe5;
  /* 12223fda mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223fdd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12223fe0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12223fe3 jmp 0x12223fc4 */
  goto L_12223fc4;
L_12223fe5:;
  /* 12223fe5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12223fe9 je 0x12223ff9 */
  if (C.zf) goto L_12223ff9;
  /* 12223feb mov edx, dword ptr [0x1223fd90] */
  EDX = (r32((uint32_t)(0x1223fd90)));
  /* 12223ff1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12223ff3 mov dword ptr [0x1223fd90], edx */
  w32((uint32_t)(0x1223fd90), (EDX));
L_12223ff9:;
  /* 12223ff9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12223ffc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12223fff mov dword ptr [0x1223fd94], ecx */
  w32((uint32_t)(0x1223fd94), (ECX));
  /* 12224005 cmp dword ptr [0x1223fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1223fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222400c je 0x1222402e */
  if (C.zf) goto L_1222402e;
  /* 1222400e push 3 */
  push32((uint32_t)(0x3u));
  /* 12224010 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12224013 push edx */
  push32((uint32_t)(EDX));
  /* 12224014 mov eax, dword ptr [0x1223fe20] */
  EAX = (r32((uint32_t)(0x1223fe20)));
  /* 12224019 push eax */
  push32((uint32_t)(EAX));
  /* 1222401a call 0x12218950 */
  push32(0x1222401fu); f_12218950();
  /* 1222401f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224022 mov ecx, dword ptr [0x1223fe20] */
  ECX = (r32((uint32_t)(0x1223fe20)));
  /* 12224028 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1222402c jmp 0x12224037 */
  goto L_12224037;
L_1222402e:;
  /* 1222402e mov edx, dword ptr [0x1223fe20] */
  EDX = (r32((uint32_t)(0x1223fe20)));
  /* 12224034 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12224037:;
  /* 12224037 mov esp, ebp */
  ESP = (EBP);
  /* 12224039 pop ebp */
  EBP = (pop32());
  /* 1222403a ret  */
  ESPCHK(0x12223c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10014040 @ 0x12224040 (46 bytes, 18 insns) */
void f_12224040(void) {
  FTRACE(0x12224040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12224040 push ebp */
  push32((uint32_t)(EBP));
  /* 12224041 mov ebp, esp */
  EBP = (ESP);
  /* 12224043 push ecx */
  push32((uint32_t)(ECX));
  /* 12224044 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12224046 call 0x12218b30 */
  push32(0x1222404bu); f_12218b30();
  /* 1222404b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222404e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224051 push eax */
  push32((uint32_t)(EAX));
  /* 12224052 call 0x12224070 */
  push32(0x12224057u); f_12224070();
  /* 12224057 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222405a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1222405d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1222405f call 0x12218bd0 */
  push32(0x12224064u); f_12218bd0();
  /* 12224064 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224067 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222406a mov esp, ebp */
  ESP = (EBP);
  /* 1222406c pop ebp */
  EBP = (pop32());
  /* 1222406d ret  */
  ESPCHK(0x12224040u, _esp0);
  ESP += 4; return;
}

/* FUN_10014070 @ 0x12224070 (762 bytes, 246 insns) */
void f_12224070(void) {
  FTRACE(0x12224070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12224070 push ebp */
  push32((uint32_t)(EBP));
  /* 12224071 mov ebp, esp */
  EBP = (ESP);
  /* 12224073 push ecx */
  push32((uint32_t)(ECX));
  /* 12224074 cmp dword ptr [0x1223fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1223fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222407b jne 0x12224084 */
  if (!C.zf) goto L_12224084;
  /* 1222407d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1222407f jmp 0x12224366 */
  goto L_12224366;
L_12224084:;
  /* 12224084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224087 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1222408a cmp ecx, dword ptr [0x1223fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1223fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224090 jne 0x122240a4 */
  if (!C.zf) goto L_122240a4;
  /* 12224092 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224095 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12224098 cmp eax, dword ptr [0x1223fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1223fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222409e je 0x1222426b */
  if (C.zf) goto L_1222426b;
L_122240a4:;
  /* 122240a4 cmp dword ptr [0x12240870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122240ab je 0x12224225 */
  if (C.zf) goto L_12224225;
  /* 122240b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122240b3 mov cx, word ptr [0x12240910] */
  CX = (r16((uint32_t)(0x12240910)));
  /* 122240ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122240bc jne 0x12224119 */
  if (!C.zf) goto L_12224119;
  /* 122240be xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122240c0 mov dx, word ptr [0x1224091e] */
  DX = (r16((uint32_t)(0x1224091e)));
  /* 122240c7 push edx */
  push32((uint32_t)(EDX));
  /* 122240c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122240ca mov ax, word ptr [0x1224091c] */
  AX = (r16((uint32_t)(0x1224091c)));
  /* 122240d0 push eax */
  push32((uint32_t)(EAX));
  /* 122240d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122240d3 mov cx, word ptr [0x1224091a] */
  CX = (r16((uint32_t)(0x1224091a)));
  /* 122240da push ecx */
  push32((uint32_t)(ECX));
  /* 122240db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122240dd mov dx, word ptr [0x12240918] */
  DX = (r16((uint32_t)(0x12240918)));
  /* 122240e4 push edx */
  push32((uint32_t)(EDX));
  /* 122240e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122240e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122240e9 mov ax, word ptr [0x12240914] */
  AX = (r16((uint32_t)(0x12240914)));
  /* 122240ef push eax */
  push32((uint32_t)(EAX));
  /* 122240f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122240f2 mov cx, word ptr [0x12240916] */
  CX = (r16((uint32_t)(0x12240916)));
  /* 122240f9 push ecx */
  push32((uint32_t)(ECX));
  /* 122240fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122240fc mov dx, word ptr [0x12240912] */
  DX = (r16((uint32_t)(0x12240912)));
  /* 12224103 push edx */
  push32((uint32_t)(EDX));
  /* 12224104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224107 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1222410a push ecx */
  push32((uint32_t)(ECX));
  /* 1222410b push 1 */
  push32((uint32_t)(0x1u));
  /* 1222410d push 1 */
  push32((uint32_t)(0x1u));
  /* 1222410f call 0x12224370 */
  push32(0x12224114u); f_12224370();
  /* 12224114 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224117 jmp 0x1222416a */
  goto L_1222416a;
L_12224119:;
  /* 12224119 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1222411b mov dx, word ptr [0x1224091e] */
  DX = (r16((uint32_t)(0x1224091e)));
  /* 12224122 push edx */
  push32((uint32_t)(EDX));
  /* 12224123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224125 mov ax, word ptr [0x1224091c] */
  AX = (r16((uint32_t)(0x1224091c)));
  /* 1222412b push eax */
  push32((uint32_t)(EAX));
  /* 1222412c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1222412e mov cx, word ptr [0x1224091a] */
  CX = (r16((uint32_t)(0x1224091a)));
  /* 12224135 push ecx */
  push32((uint32_t)(ECX));
  /* 12224136 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12224138 mov dx, word ptr [0x12240918] */
  DX = (r16((uint32_t)(0x12240918)));
  /* 1222413f push edx */
  push32((uint32_t)(EDX));
  /* 12224140 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224142 mov ax, word ptr [0x12240916] */
  AX = (r16((uint32_t)(0x12240916)));
  /* 12224148 push eax */
  push32((uint32_t)(EAX));
  /* 12224149 push 0 */
  push32((uint32_t)(0x0u));
  /* 1222414b push 0 */
  push32((uint32_t)(0x0u));
  /* 1222414d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1222414f mov cx, word ptr [0x12240912] */
  CX = (r16((uint32_t)(0x12240912)));
  /* 12224156 push ecx */
  push32((uint32_t)(ECX));
  /* 12224157 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222415a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1222415d push eax */
  push32((uint32_t)(EAX));
  /* 1222415e push 0 */
  push32((uint32_t)(0x0u));
  /* 12224160 push 1 */
  push32((uint32_t)(0x1u));
  /* 12224162 call 0x12224370 */
  push32(0x12224167u); f_12224370();
  /* 12224167 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1222416a:;
  /* 1222416a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1222416c mov cx, word ptr [0x122408bc] */
  CX = (r16((uint32_t)(0x122408bc)));
  /* 12224173 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12224175 jne 0x122241d2 */
  if (!C.zf) goto L_122241d2;
  /* 12224177 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12224179 mov dx, word ptr [0x122408ca] */
  DX = (r16((uint32_t)(0x122408ca)));
  /* 12224180 push edx */
  push32((uint32_t)(EDX));
  /* 12224181 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224183 mov ax, word ptr [0x122408c8] */
  AX = (r16((uint32_t)(0x122408c8)));
  /* 12224189 push eax */
  push32((uint32_t)(EAX));
  /* 1222418a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1222418c mov cx, word ptr [0x122408c6] */
  CX = (r16((uint32_t)(0x122408c6)));
  /* 12224193 push ecx */
  push32((uint32_t)(ECX));
  /* 12224194 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12224196 mov dx, word ptr [0x122408c4] */
  DX = (r16((uint32_t)(0x122408c4)));
  /* 1222419d push edx */
  push32((uint32_t)(EDX));
  /* 1222419e push 0 */
  push32((uint32_t)(0x0u));
  /* 122241a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122241a2 mov ax, word ptr [0x122408c0] */
  AX = (r16((uint32_t)(0x122408c0)));
  /* 122241a8 push eax */
  push32((uint32_t)(EAX));
  /* 122241a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122241ab mov cx, word ptr [0x122408c2] */
  CX = (r16((uint32_t)(0x122408c2)));
  /* 122241b2 push ecx */
  push32((uint32_t)(ECX));
  /* 122241b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122241b5 mov dx, word ptr [0x122408be] */
  DX = (r16((uint32_t)(0x122408be)));
  /* 122241bc push edx */
  push32((uint32_t)(EDX));
  /* 122241bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122241c0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 122241c3 push ecx */
  push32((uint32_t)(ECX));
  /* 122241c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 122241c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122241c8 call 0x12224370 */
  push32(0x122241cdu); f_12224370();
  /* 122241cd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122241d0 jmp 0x12224223 */
  goto L_12224223;
L_122241d2:;
  /* 122241d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122241d4 mov dx, word ptr [0x122408ca] */
  DX = (r16((uint32_t)(0x122408ca)));
  /* 122241db push edx */
  push32((uint32_t)(EDX));
  /* 122241dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122241de mov ax, word ptr [0x122408c8] */
  AX = (r16((uint32_t)(0x122408c8)));
  /* 122241e4 push eax */
  push32((uint32_t)(EAX));
  /* 122241e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122241e7 mov cx, word ptr [0x122408c6] */
  CX = (r16((uint32_t)(0x122408c6)));
  /* 122241ee push ecx */
  push32((uint32_t)(ECX));
  /* 122241ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122241f1 mov dx, word ptr [0x122408c4] */
  DX = (r16((uint32_t)(0x122408c4)));
  /* 122241f8 push edx */
  push32((uint32_t)(EDX));
  /* 122241f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122241fb mov ax, word ptr [0x122408c2] */
  AX = (r16((uint32_t)(0x122408c2)));
  /* 12224201 push eax */
  push32((uint32_t)(EAX));
  /* 12224202 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224204 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224206 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12224208 mov cx, word ptr [0x122408be] */
  CX = (r16((uint32_t)(0x122408be)));
  /* 1222420f push ecx */
  push32((uint32_t)(ECX));
  /* 12224210 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224213 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12224216 push eax */
  push32((uint32_t)(EAX));
  /* 12224217 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224219 push 0 */
  push32((uint32_t)(0x0u));
  /* 1222421b call 0x12224370 */
  push32(0x12224220u); f_12224370();
  /* 12224220 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12224223:;
  /* 12224223 jmp 0x1222426b */
  goto L_1222426b;
L_12224225:;
  /* 12224225 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224227 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224229 push 0 */
  push32((uint32_t)(0x0u));
  /* 1222422b push 2 */
  push32((uint32_t)(0x2u));
  /* 1222422d push 0 */
  push32((uint32_t)(0x0u));
  /* 1222422f push 0 */
  push32((uint32_t)(0x0u));
  /* 12224231 push 1 */
  push32((uint32_t)(0x1u));
  /* 12224233 push 4 */
  push32((uint32_t)(0x4u));
  /* 12224235 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224238 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1222423b push edx */
  push32((uint32_t)(EDX));
  /* 1222423c push 1 */
  push32((uint32_t)(0x1u));
  /* 1222423e push 1 */
  push32((uint32_t)(0x1u));
  /* 12224240 call 0x12224370 */
  push32(0x12224245u); f_12224370();
  /* 12224245 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224248 push 0 */
  push32((uint32_t)(0x0u));
  /* 1222424a push 0 */
  push32((uint32_t)(0x0u));
  /* 1222424c push 0 */
  push32((uint32_t)(0x0u));
  /* 1222424e push 2 */
  push32((uint32_t)(0x2u));
  /* 12224250 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224252 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224254 push 5 */
  push32((uint32_t)(0x5u));
  /* 12224256 push 0xa */
  push32((uint32_t)(0xau));
  /* 12224258 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222425b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1222425e push ecx */
  push32((uint32_t)(ECX));
  /* 1222425f push 1 */
  push32((uint32_t)(0x1u));
  /* 12224261 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224263 call 0x12224370 */
  push32(0x12224268u); f_12224370();
  /* 12224268 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1222426b:;
  /* 1222426b mov edx, dword ptr [0x1223fe2c] */
  EDX = (r32((uint32_t)(0x1223fe2c)));
  /* 12224271 cmp edx, dword ptr [0x1223fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1223fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224277 jge 0x122242c4 */
  if ((C.sf==C.of)) goto L_122242c4;
  /* 12224279 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222427c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1222427f cmp ecx, dword ptr [0x1223fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1223fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224285 jl 0x12224295 */
  if ((C.sf!=C.of)) goto L_12224295;
  /* 12224287 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222428a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1222428d cmp eax, dword ptr [0x1223fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1223fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224293 jle 0x1222429c */
  if ((C.zf||C.sf!=C.of)) goto L_1222429c;
L_12224295:;
  /* 12224295 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224297 jmp 0x12224366 */
  goto L_12224366;
L_1222429c:;
  /* 1222429c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222429f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 122242a2 cmp edx, dword ptr [0x1223fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1223fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122242a8 jle 0x122242c2 */
  if ((C.zf||C.sf!=C.of)) goto L_122242c2;
  /* 122242aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122242ad mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 122242b0 cmp ecx, dword ptr [0x1223fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1223fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122242b6 jge 0x122242c2 */
  if ((C.sf==C.of)) goto L_122242c2;
  /* 122242b8 mov eax, 1 */
  EAX = (0x1u);
  /* 122242bd jmp 0x12224366 */
  goto L_12224366;
L_122242c2:;
  /* 122242c2 jmp 0x12224307 */
  goto L_12224307;
L_122242c4:;
  /* 122242c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122242c7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122242ca cmp eax, dword ptr [0x1223fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1223fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122242d0 jl 0x122242e0 */
  if ((C.sf!=C.of)) goto L_122242e0;
  /* 122242d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122242d5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 122242d8 cmp edx, dword ptr [0x1223fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1223fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122242de jle 0x122242e7 */
  if ((C.zf||C.sf!=C.of)) goto L_122242e7;
L_122242e0:;
  /* 122242e0 mov eax, 1 */
  EAX = (0x1u);
  /* 122242e5 jmp 0x12224366 */
  goto L_12224366;
L_122242e7:;
  /* 122242e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122242ea mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 122242ed cmp ecx, dword ptr [0x1223fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1223fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122242f3 jle 0x12224307 */
  if ((C.zf||C.sf!=C.of)) goto L_12224307;
  /* 122242f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122242f8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122242fb cmp eax, dword ptr [0x1223fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1223fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224301 jge 0x12224307 */
  if ((C.sf==C.of)) goto L_12224307;
  /* 12224303 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224305 jmp 0x12224366 */
  goto L_12224366;
L_12224307:;
  /* 12224307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222430a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1222430d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12224310 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224313 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12224315 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12224317 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222431a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1222431d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12224323 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12224325 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1222432b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1222432e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224331 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12224334 cmp edx, dword ptr [0x1223fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1223fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222433a jne 0x12224352 */
  if (!C.zf) goto L_12224352;
  /* 1222433c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222433f cmp eax, dword ptr [0x1223fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1223fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224345 jl 0x1222434e */
  if ((C.sf!=C.of)) goto L_1222434e;
  /* 12224347 mov eax, 1 */
  EAX = (0x1u);
  /* 1222434c jmp 0x12224366 */
  goto L_12224366;
L_1222434e:;
  /* 1222434e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224350 jmp 0x12224366 */
  goto L_12224366;
L_12224352:;
  /* 12224352 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12224355 cmp ecx, dword ptr [0x1223fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1223fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222435b jge 0x12224364 */
  if ((C.sf==C.of)) goto L_12224364;
  /* 1222435d mov eax, 1 */
  EAX = (0x1u);
  /* 12224362 jmp 0x12224366 */
  goto L_12224366;
L_12224364:;
  /* 12224364 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12224366:;
  /* 12224366 mov esp, ebp */
  ESP = (EBP);
  /* 12224368 pop ebp */
  EBP = (pop32());
  /* 12224369 ret  */
  ESPCHK(0x12224070u, _esp0);
  ESP += 4; return;
}

/* FUN_10014370 @ 0x12224370 (504 bytes, 145 insns) */
void f_12224370(void) {
  FTRACE(0x12224370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12224370 push ebp */
  push32((uint32_t)(EBP));
  /* 12224371 mov ebp, esp */
  EBP = (ESP);
  /* 12224373 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12224376 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222437a jne 0x1222444c */
  if (!C.zf) goto L_1222444c;
  /* 12224380 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12224383 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12224386 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12224388 jne 0x12224399 */
  if (!C.zf) goto L_12224399;
  /* 1222438a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222438d mov edx, dword ptr [ecx*4 + 0x1223fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1223fe4c)));
  /* 12224394 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12224397 jmp 0x122243a6 */
  goto L_122243a6;
L_12224399:;
  /* 12224399 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222439c mov ecx, dword ptr [eax*4 + 0x1223fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1223fe80)));
  /* 122243a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_122243a6:;
  /* 122243a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122243a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122243ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122243af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122243b2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122243b5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122243bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122243be add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122243c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122243c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122243c6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 122243c9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 122243cd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122243ce mov ecx, 7 */
  ECX = (0x7u);
  /* 122243d3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122243d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122243d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122243db cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122243de jge 0x122243f9 */
  if ((C.sf==C.of)) goto L_122243f9;
  /* 122243e0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122243e3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122243e6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122243e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122243ec imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122243ef add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122243f2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122243f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122243f7 jmp 0x1222440d */
  goto L_1222440d;
L_122243f9:;
  /* 122243f9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122243fc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122243ff mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12224402 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12224405 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12224408 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222440a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1222440d:;
  /* 1222440d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224411 jne 0x1222444a */
  if (!C.zf) goto L_1222444a;
  /* 12224413 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12224416 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12224419 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1222441b jne 0x1222442c */
  if (!C.zf) goto L_1222442c;
  /* 1222441d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12224420 mov eax, dword ptr [edx*4 + 0x1223fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1223fe50)));
  /* 12224427 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1222442a jmp 0x12224439 */
  goto L_12224439;
L_1222442c:;
  /* 1222442c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222442f mov edx, dword ptr [ecx*4 + 0x1223fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1223fe84)));
  /* 12224436 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12224439:;
  /* 12224439 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1222443c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222443f jle 0x1222444a */
  if ((C.zf||C.sf!=C.of)) goto L_1222444a;
  /* 12224441 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12224444 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12224447 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1222444a:;
  /* 1222444a jmp 0x12224481 */
  goto L_12224481;
L_1222444c:;
  /* 1222444c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222444f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12224452 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12224454 jne 0x12224465 */
  if (!C.zf) goto L_12224465;
  /* 12224456 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12224459 mov ecx, dword ptr [eax*4 + 0x1223fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1223fe4c)));
  /* 12224460 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12224463 jmp 0x12224472 */
  goto L_12224472;
L_12224465:;
  /* 12224465 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12224468 mov eax, dword ptr [edx*4 + 0x1223fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1223fe80)));
  /* 1222446f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12224472:;
  /* 12224472 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12224475 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12224478 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1222447b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222447e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12224481:;
  /* 12224481 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224485 jne 0x122244c1 */
  if (!C.zf) goto L_122244c1;
  /* 12224487 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1222448a mov dword ptr [0x1223fe2c], eax */
  w32((uint32_t)(0x1223fe2c), (EAX));
  /* 1222448f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12224492 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12224495 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12224498 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222449a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1222449d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 122244a0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122244a2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122244a8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 122244ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122244ad mov dword ptr [0x1223fe30], ecx */
  w32((uint32_t)(0x1223fe30), (ECX));
  /* 122244b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122244b6 mov dword ptr [0x1223fe28], edx */
  w32((uint32_t)(0x1223fe28), (EDX));
  /* 122244bc jmp 0x12224564 */
  goto L_12224564;
L_122244c1:;
  /* 122244c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122244c4 mov dword ptr [0x1223fe3c], eax */
  w32((uint32_t)(0x1223fe3c), (EAX));
  /* 122244c9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 122244cc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122244cf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 122244d2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122244d4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122244d7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 122244da add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122244dc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122244e2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 122244e5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122244e7 mov dword ptr [0x1223fe40], ecx */
  w32((uint32_t)(0x1223fe40), (ECX));
  /* 122244ed mov edx, dword ptr [0x1223fd98] */
  EDX = (r32((uint32_t)(0x1223fd98)));
  /* 122244f3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122244f9 mov eax, dword ptr [0x1223fe40] */
  EAX = (r32((uint32_t)(0x1223fe40)));
  /* 122244fe add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12224500 mov dword ptr [0x1223fe40], eax */
  w32((uint32_t)(0x1223fe40), (EAX));
  /* 12224505 cmp dword ptr [0x1223fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1223fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222450c jge 0x12224531 */
  if ((C.sf==C.of)) goto L_12224531;
  /* 1222450e mov ecx, dword ptr [0x1223fe40] */
  ECX = (r32((uint32_t)(0x1223fe40)));
  /* 12224514 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222451a mov dword ptr [0x1223fe40], ecx */
  w32((uint32_t)(0x1223fe40), (ECX));
  /* 12224520 mov edx, dword ptr [0x1223fe3c] */
  EDX = (r32((uint32_t)(0x1223fe3c)));
  /* 12224526 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12224529 mov dword ptr [0x1223fe3c], edx */
  w32((uint32_t)(0x1223fe3c), (EDX));
  /* 1222452f jmp 0x1222455b */
  goto L_1222455b;
L_12224531:;
  /* 12224531 cmp dword ptr [0x1223fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1223fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222453b jl 0x1222455b */
  if ((C.sf!=C.of)) goto L_1222455b;
  /* 1222453d mov eax, dword ptr [0x1223fe40] */
  EAX = (r32((uint32_t)(0x1223fe40)));
  /* 12224542 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12224547 mov dword ptr [0x1223fe40], eax */
  w32((uint32_t)(0x1223fe40), (EAX));
  /* 1222454c mov ecx, dword ptr [0x1223fe3c] */
  ECX = (r32((uint32_t)(0x1223fe3c)));
  /* 12224552 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12224555 mov dword ptr [0x1223fe3c], ecx */
  w32((uint32_t)(0x1223fe3c), (ECX));
L_1222455b:;
  /* 1222455b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222455e mov dword ptr [0x1223fe38], edx */
  w32((uint32_t)(0x1223fe38), (EDX));
L_12224564:;
  /* 12224564 mov esp, ebp */
  ESP = (EBP);
  /* 12224566 pop ebp */
  EBP = (pop32());
  /* 12224567 ret  */
  ESPCHK(0x12224370u, _esp0);
  ESP += 4; return;
}

/* FUN_10014570 @ 0x12224570 (382 bytes, 135 insns) */
void f_12224570(void) {
  FTRACE(0x12224570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12224570 push ebp */
  push32((uint32_t)(EBP));
  /* 12224571 mov ebp, esp */
  EBP = (ESP);
  /* 12224573 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12224575 push 0x1223cb20 */
  push32((uint32_t)(0x1223cb20u));
  /* 1222457a push 0x1221e238 */
  push32((uint32_t)(0x1221e238u));
  /* 1222457f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12224585 push eax */
  push32((uint32_t)(EAX));
  /* 12224586 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1222458d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224590 push ebx */
  push32((uint32_t)(EBX));
  /* 12224591 push esi */
  push32((uint32_t)(ESI));
  /* 12224592 push edi */
  push32((uint32_t)(EDI));
  /* 12224593 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12224596 cmp dword ptr [0x1224092c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224092c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222459d jne 0x122245e2 */
  if (!C.zf) goto L_122245e2;
  /* 1222459f push 0 */
  push32((uint32_t)(0x0u));
  /* 122245a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122245a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 122245a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122245a7 call dword ptr [0x122432c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432c8))), 0x122245adu);
  /* 122245ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122245af je 0x122245bd */
  if (C.zf) goto L_122245bd;
  /* 122245b1 mov dword ptr [0x1224092c], 1 */
  w32((uint32_t)(0x1224092c), (0x1u));
  /* 122245bb jmp 0x122245e2 */
  goto L_122245e2;
L_122245bd:;
  /* 122245bd push 0 */
  push32((uint32_t)(0x0u));
  /* 122245bf push 0 */
  push32((uint32_t)(0x0u));
  /* 122245c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 122245c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122245c5 call dword ptr [0x122432e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432e0))), 0x122245cbu);
  /* 122245cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122245cd je 0x122245db */
  if (C.zf) goto L_122245db;
  /* 122245cf mov dword ptr [0x1224092c], 2 */
  w32((uint32_t)(0x1224092c), (0x2u));
  /* 122245d9 jmp 0x122245e2 */
  goto L_122245e2;
L_122245db:;
  /* 122245db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122245dd jmp 0x122246f1 */
  goto L_122246f1;
L_122245e2:;
  /* 122245e2 cmp dword ptr [0x1224092c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1224092c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122245e9 jne 0x12224606 */
  if (!C.zf) goto L_12224606;
  /* 122245eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122245ee push eax */
  push32((uint32_t)(EAX));
  /* 122245ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122245f2 push ecx */
  push32((uint32_t)(ECX));
  /* 122245f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122245f6 push edx */
  push32((uint32_t)(EDX));
  /* 122245f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122245fa push eax */
  push32((uint32_t)(EAX));
  /* 122245fb call dword ptr [0x122432c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432c8))), 0x12224601u);
  /* 12224601 jmp 0x122246f1 */
  goto L_122246f1;
L_12224606:;
  /* 12224606 cmp dword ptr [0x1224092c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1224092c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222460d jne 0x122246ef */
  if (!C.zf) goto L_122246ef;
  /* 12224613 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224617 jne 0x12224622 */
  if (!C.zf) goto L_12224622;
  /* 12224619 mov ecx, dword ptr [0x122407e0] */
  ECX = (r32((uint32_t)(0x122407e0)));
  /* 1222461f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12224622:;
  /* 12224622 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224624 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224626 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12224629 push edx */
  push32((uint32_t)(EDX));
  /* 1222462a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222462d push eax */
  push32((uint32_t)(EAX));
  /* 1222462e call dword ptr [0x122432e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432e0))), 0x12224634u);
  /* 12224634 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12224637 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222463b jne 0x12224644 */
  if (!C.zf) goto L_12224644;
  /* 1222463d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1222463f jmp 0x122246f1 */
  goto L_122246f1;
L_12224644:;
  /* 12224644 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1222464b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1222464e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12224651 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12224653 call 0x122182d0 */
  push32(0x12224658u); f_122182d0();
  /* 12224658 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1222465b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1222465e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12224661 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12224664 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1222466b jmp 0x12224684 */
  goto L_12224684;
  /* 1222466d mov eax, 1 */
  EAX = (0x1u);
  /* 12224672 ret  */
  ESPCHK(0x12224570u, _esp0);
  ESP += 4; return;
  /* 12224673 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12224676 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1222467d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12224684:;
  /* 12224684 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224688 jne 0x1222468e */
  if (!C.zf) goto L_1222468e;
  /* 1222468a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1222468c jmp 0x122246f1 */
  goto L_122246f1;
L_1222468e:;
  /* 1222468e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12224691 push edx */
  push32((uint32_t)(EDX));
  /* 12224692 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12224695 push eax */
  push32((uint32_t)(EAX));
  /* 12224696 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12224699 push ecx */
  push32((uint32_t)(ECX));
  /* 1222469a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222469d push edx */
  push32((uint32_t)(EDX));
  /* 1222469e call dword ptr [0x122432e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432e0))), 0x122246a4u);
  /* 122246a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122246a6 jne 0x122246ac */
  if (!C.zf) goto L_122246ac;
  /* 122246a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122246aa jmp 0x122246f1 */
  goto L_122246f1;
L_122246ac:;
  /* 122246ac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122246b0 jne 0x122246cd */
  if (!C.zf) goto L_122246cd;
  /* 122246b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122246b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122246b6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122246b8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122246bb push eax */
  push32((uint32_t)(EAX));
  /* 122246bc push 1 */
  push32((uint32_t)(0x1u));
  /* 122246be mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122246c1 push ecx */
  push32((uint32_t)(ECX));
  /* 122246c2 call dword ptr [0x12243310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243310))), 0x122246c8u);
  /* 122246c8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 122246cb jmp 0x122246ea */
  goto L_122246ea;
L_122246cd:;
  /* 122246cd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122246d0 push edx */
  push32((uint32_t)(EDX));
  /* 122246d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122246d4 push eax */
  push32((uint32_t)(EAX));
  /* 122246d5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122246d7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122246da push ecx */
  push32((uint32_t)(ECX));
  /* 122246db push 1 */
  push32((uint32_t)(0x1u));
  /* 122246dd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122246e0 push edx */
  push32((uint32_t)(EDX));
  /* 122246e1 call dword ptr [0x12243310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243310))), 0x122246e7u);
  /* 122246e7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_122246ea:;
  /* 122246ea mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122246ed jmp 0x122246f1 */
  goto L_122246f1;
L_122246ef:;
  /* 122246ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122246f1:;
  /* 122246f1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 122246f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122246f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 122246fe pop edi */
  EDI = (pop32());
  /* 122246ff pop esi */
  ESI = (pop32());
  /* 12224700 pop ebx */
  EBX = (pop32());
  /* 12224701 mov esp, ebp */
  ESP = (EBP);
  /* 12224703 pop ebp */
  EBP = (pop32());
  /* 12224704 ret  */
  ESPCHK(0x12224570u, _esp0);
  ESP += 4; return;
}

/* FUN_10014710 @ 0x12224710 (398 bytes, 140 insns) */
void f_12224710(void) {
  FTRACE(0x12224710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12224710 push ebp */
  push32((uint32_t)(EBP));
  /* 12224711 mov ebp, esp */
  EBP = (ESP);
  /* 12224713 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12224715 push 0x1223cb30 */
  push32((uint32_t)(0x1223cb30u));
  /* 1222471a push 0x1221e238 */
  push32((uint32_t)(0x1221e238u));
  /* 1222471f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12224725 push eax */
  push32((uint32_t)(EAX));
  /* 12224726 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1222472d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224730 push ebx */
  push32((uint32_t)(EBX));
  /* 12224731 push esi */
  push32((uint32_t)(ESI));
  /* 12224732 push edi */
  push32((uint32_t)(EDI));
  /* 12224733 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12224736 cmp dword ptr [0x12240930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222473d jne 0x12224782 */
  if (!C.zf) goto L_12224782;
  /* 1222473f push 0 */
  push32((uint32_t)(0x0u));
  /* 12224741 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224743 push 1 */
  push32((uint32_t)(0x1u));
  /* 12224745 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224747 call dword ptr [0x122432c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432c8))), 0x1222474du);
  /* 1222474d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1222474f je 0x1222475d */
  if (C.zf) goto L_1222475d;
  /* 12224751 mov dword ptr [0x12240930], 1 */
  w32((uint32_t)(0x12240930), (0x1u));
  /* 1222475b jmp 0x12224782 */
  goto L_12224782;
L_1222475d:;
  /* 1222475d push 0 */
  push32((uint32_t)(0x0u));
  /* 1222475f push 0 */
  push32((uint32_t)(0x0u));
  /* 12224761 push 1 */
  push32((uint32_t)(0x1u));
  /* 12224763 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224765 call dword ptr [0x122432e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432e0))), 0x1222476bu);
  /* 1222476b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1222476d je 0x1222477b */
  if (C.zf) goto L_1222477b;
  /* 1222476f mov dword ptr [0x12240930], 2 */
  w32((uint32_t)(0x12240930), (0x2u));
  /* 12224779 jmp 0x12224782 */
  goto L_12224782;
L_1222477b:;
  /* 1222477b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1222477d jmp 0x122248a1 */
  goto L_122248a1;
L_12224782:;
  /* 12224782 cmp dword ptr [0x12240930], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12240930))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224789 jne 0x122247a6 */
  if (!C.zf) goto L_122247a6;
  /* 1222478b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222478e push eax */
  push32((uint32_t)(EAX));
  /* 1222478f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12224792 push ecx */
  push32((uint32_t)(ECX));
  /* 12224793 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12224796 push edx */
  push32((uint32_t)(EDX));
  /* 12224797 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222479a push eax */
  push32((uint32_t)(EAX));
  /* 1222479b call dword ptr [0x122432e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432e0))), 0x122247a1u);
  /* 122247a1 jmp 0x122248a1 */
  goto L_122248a1;
L_122247a6:;
  /* 122247a6 cmp dword ptr [0x12240930], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12240930))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122247ad jne 0x1222489f */
  if (!C.zf) goto L_1222489f;
  /* 122247b3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122247b7 jne 0x122247c2 */
  if (!C.zf) goto L_122247c2;
  /* 122247b9 mov ecx, dword ptr [0x122407e0] */
  ECX = (r32((uint32_t)(0x122407e0)));
  /* 122247bf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_122247c2:;
  /* 122247c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122247c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122247c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122247c9 push edx */
  push32((uint32_t)(EDX));
  /* 122247ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122247cd push eax */
  push32((uint32_t)(EAX));
  /* 122247ce call dword ptr [0x122432c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432c8))), 0x122247d4u);
  /* 122247d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 122247d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122247db jne 0x122247e4 */
  if (!C.zf) goto L_122247e4;
  /* 122247dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122247df jmp 0x122248a1 */
  goto L_122248a1;
L_122247e4:;
  /* 122247e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122247eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122247ee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122247f0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122247f3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122247f5 call 0x122182d0 */
  push32(0x122247fau); f_122182d0();
  /* 122247fa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 122247fd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12224800 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12224803 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12224806 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1222480d jmp 0x12224826 */
  goto L_12224826;
  /* 1222480f mov eax, 1 */
  EAX = (0x1u);
  /* 12224814 ret  */
  ESPCHK(0x12224710u, _esp0);
  ESP += 4; return;
  /* 12224815 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12224818 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1222481f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12224826:;
  /* 12224826 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222482a jne 0x12224830 */
  if (!C.zf) goto L_12224830;
  /* 1222482c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1222482e jmp 0x122248a1 */
  goto L_122248a1;
L_12224830:;
  /* 12224830 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12224833 push edx */
  push32((uint32_t)(EDX));
  /* 12224834 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12224837 push eax */
  push32((uint32_t)(EAX));
  /* 12224838 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1222483b push ecx */
  push32((uint32_t)(ECX));
  /* 1222483c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222483f push edx */
  push32((uint32_t)(EDX));
  /* 12224840 call dword ptr [0x122432c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432c8))), 0x12224846u);
  /* 12224846 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12224848 jne 0x1222484e */
  if (!C.zf) goto L_1222484e;
  /* 1222484a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1222484c jmp 0x122248a1 */
  goto L_122248a1;
L_1222484e:;
  /* 1222484e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224852 jne 0x12224876 */
  if (!C.zf) goto L_12224876;
  /* 12224854 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224856 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224858 push 0 */
  push32((uint32_t)(0x0u));
  /* 1222485a push 0 */
  push32((uint32_t)(0x0u));
  /* 1222485c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1222485e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12224861 push eax */
  push32((uint32_t)(EAX));
  /* 12224862 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12224867 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1222486a push ecx */
  push32((uint32_t)(ECX));
  /* 1222486b call dword ptr [0x1224335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224335c))), 0x12224871u);
  /* 12224871 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12224874 jmp 0x1222489a */
  goto L_1222489a;
L_12224876:;
  /* 12224876 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224878 push 0 */
  push32((uint32_t)(0x0u));
  /* 1222487a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1222487d push edx */
  push32((uint32_t)(EDX));
  /* 1222487e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12224881 push eax */
  push32((uint32_t)(EAX));
  /* 12224882 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12224884 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12224887 push ecx */
  push32((uint32_t)(ECX));
  /* 12224888 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1222488d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12224890 push edx */
  push32((uint32_t)(EDX));
  /* 12224891 call dword ptr [0x1224335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224335c))), 0x12224897u);
  /* 12224897 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1222489a:;
  /* 1222489a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1222489d jmp 0x122248a1 */
  goto L_122248a1;
L_1222489f:;
  /* 1222489f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122248a1:;
  /* 122248a1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 122248a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122248a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 122248ae pop edi */
  EDI = (pop32());
  /* 122248af pop esi */
  ESI = (pop32());
  /* 122248b0 pop ebx */
  EBX = (pop32());
  /* 122248b1 mov esp, ebp */
  ESP = (EBP);
  /* 122248b3 pop ebp */
  EBP = (pop32());
  /* 122248b4 ret  */
  ESPCHK(0x12224710u, _esp0);
  ESP += 4; return;
}

/* FUN_100148c0 @ 0x122248c0 (11 bytes, 6 insns) */
void f_122248c0(void) {
  FTRACE(0x122248c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122248c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122248c1 mov ebp, esp */
  EBP = (ESP);
  /* 122248c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122248c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122248c9 pop ebp */
  EBP = (pop32());
  /* 122248ca ret  */
  ESPCHK(0x122248c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100148d0 @ 0x122248d0 (147 bytes, 43 insns) */
void f_122248d0(void) {
  FTRACE(0x122248d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122248d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122248d1 mov ebp, esp */
  EBP = (ESP);
  /* 122248d3 push ecx */
  push32((uint32_t)(ECX));
  /* 122248d4 cmp dword ptr [0x122407d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122407d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122248db jne 0x122248f7 */
  if (!C.zf) goto L_122248f7;
  /* 122248dd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122248e1 jl 0x122248f2 */
  if ((C.sf!=C.of)) goto L_122248f2;
  /* 122248e3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122248e7 jg 0x122248f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_122248f2;
  /* 122248e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122248ec add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122248ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_122248f2:;
  /* 122248f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122248f5 jmp 0x1222495f */
  goto L_1222495f;
L_122248f7:;
  /* 122248f7 push 0x1224095c */
  push32((uint32_t)(0x1224095cu));
  /* 122248fc call dword ptr [0x12243388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243388))), 0x12224902u);
  /* 12224902 cmp dword ptr [0x1224094c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224094c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224909 je 0x12224929 */
  if (C.zf) goto L_12224929;
  /* 1222490b push 0x1224095c */
  push32((uint32_t)(0x1224095cu));
  /* 12224910 call dword ptr [0x12243378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243378))), 0x12224916u);
  /* 12224916 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12224918 call 0x12218b30 */
  push32(0x1222491du); f_12218b30();
  /* 1222491d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224920 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12224927 jmp 0x12224930 */
  goto L_12224930;
L_12224929:;
  /* 12224929 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12224930:;
  /* 12224930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224933 push ecx */
  push32((uint32_t)(ECX));
  /* 12224934 call 0x12224970 */
  push32(0x12224939u); f_12224970();
  /* 12224939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222493c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1222493f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224943 je 0x12224951 */
  if (C.zf) goto L_12224951;
  /* 12224945 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12224947 call 0x12218bd0 */
  push32(0x1222494cu); f_12218bd0();
  /* 1222494c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222494f jmp 0x1222495c */
  goto L_1222495c;
L_12224951:;
  /* 12224951 push 0x1224095c */
  push32((uint32_t)(0x1224095cu));
  /* 12224956 call dword ptr [0x12243378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243378))), 0x1222495cu);
L_1222495c:;
  /* 1222495c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1222495f:;
  /* 1222495f mov esp, ebp */
  ESP = (EBP);
  /* 12224961 pop ebp */
  EBP = (pop32());
  /* 12224962 ret  */
  ESPCHK(0x122248d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014970 @ 0x12224970 (299 bytes, 91 insns) */
void f_12224970(void) {
  FTRACE(0x12224970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12224970 push ebp */
  push32((uint32_t)(EBP));
  /* 12224971 mov ebp, esp */
  EBP = (ESP);
  /* 12224973 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12224976 cmp dword ptr [0x122407d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122407d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222497d jne 0x1222499c */
  if (!C.zf) goto L_1222499c;
  /* 1222497f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224983 jl 0x12224994 */
  if ((C.sf!=C.of)) goto L_12224994;
  /* 12224985 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224989 jg 0x12224994 */
  if ((!C.zf&&C.sf==C.of)) goto L_12224994;
  /* 1222498b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222498e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12224991 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12224994:;
  /* 12224994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224997 jmp 0x12224a97 */
  goto L_12224a97;
L_1222499c:;
  /* 1222499c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122249a3 jge 0x122249e3 */
  if ((C.sf==C.of)) goto L_122249e3;
  /* 122249a5 cmp dword ptr [0x1223eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1223eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122249ac jle 0x122249c1 */
  if ((C.zf||C.sf!=C.of)) goto L_122249c1;
  /* 122249ae push 1 */
  push32((uint32_t)(0x1u));
  /* 122249b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122249b3 push ecx */
  push32((uint32_t)(ECX));
  /* 122249b4 call 0x1221b140 */
  push32(0x122249b9u); f_1221b140();
  /* 122249b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122249bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122249bf jmp 0x122249d5 */
  goto L_122249d5;
L_122249c1:;
  /* 122249c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122249c4 mov eax, dword ptr [0x1223ec98] */
  EAX = (r32((uint32_t)(0x1223ec98)));
  /* 122249c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122249cb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 122249cf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122249d2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122249d5:;
  /* 122249d5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122249d9 jne 0x122249e3 */
  if (!C.zf) goto L_122249e3;
  /* 122249db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122249de jmp 0x12224a97 */
  goto L_12224a97;
L_122249e3:;
  /* 122249e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122249e6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 122249e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122249ef and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122249f5 mov eax, dword ptr [0x1223ec98] */
  EAX = (r32((uint32_t)(0x1223ec98)));
  /* 122249fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122249fc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12224a00 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12224a06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12224a08 je 0x12224a2c */
  if (C.zf) goto L_12224a2c;
  /* 12224a0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224a0d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12224a10 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12224a16 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12224a19 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12224a1c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12224a1f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12224a23 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12224a2a jmp 0x12224a3d */
  goto L_12224a3d;
L_12224a2c:;
  /* 12224a2c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12224a2f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12224a32 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12224a36 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12224a3d:;
  /* 12224a3d push 1 */
  push32((uint32_t)(0x1u));
  /* 12224a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12224a41 push 3 */
  push32((uint32_t)(0x3u));
  /* 12224a43 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12224a46 push edx */
  push32((uint32_t)(EDX));
  /* 12224a47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12224a4a push eax */
  push32((uint32_t)(EAX));
  /* 12224a4b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12224a4e push ecx */
  push32((uint32_t)(ECX));
  /* 12224a4f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12224a54 mov edx, dword ptr [0x122407d0] */
  EDX = (r32((uint32_t)(0x122407d0)));
  /* 12224a5a push edx */
  push32((uint32_t)(EDX));
  /* 12224a5b call 0x1221d520 */
  push32(0x12224a60u); f_1221d520();
  /* 12224a60 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224a63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12224a66 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224a6a jne 0x12224a71 */
  if (!C.zf) goto L_12224a71;
  /* 12224a6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224a6f jmp 0x12224a97 */
  goto L_12224a97;
L_12224a71:;
  /* 12224a71 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224a75 jne 0x12224a81 */
  if (!C.zf) goto L_12224a81;
  /* 12224a77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12224a7a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12224a7f jmp 0x12224a97 */
  goto L_12224a97;
L_12224a81:;
  /* 12224a81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12224a84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12224a89 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12224a8c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12224a92 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12224a95 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12224a97:;
  /* 12224a97 mov esp, ebp */
  ESP = (EBP);
  /* 12224a99 pop ebp */
  EBP = (pop32());
  /* 12224a9a ret  */
  ESPCHK(0x12224970u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12224aa0 (52 bytes, 19 insns) */
void f_12224aa0(void) {
  FTRACE(0x12224aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12224aa0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12224aa4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12224aa8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12224aaa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12224aae jne 0x12224ab9 */
  if (!C.zf) goto L_12224ab9;
  /* 12224ab0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12224ab4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12224ab6 ret 0x10 */
  ESPCHK(0x12224aa0u, _esp0);
  ESP += 20; return;
L_12224ab9:;
  /* 12224ab9 push ebx */
  push32((uint32_t)(EBX));
  /* 12224aba mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12224abc mov ebx, eax */
  EBX = (EAX);
  /* 12224abe mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12224ac2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12224ac6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12224ac8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12224acc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12224ace add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12224ad0 pop ebx */
  EBX = (pop32());
  /* 12224ad1 ret 0x10 */
  ESPCHK(0x12224aa0u, _esp0);
  ESP += 20; return;
}

/* FUN_10014ae0 @ 0x12224ae0 (46 bytes, 18 insns) */
void f_12224ae0(void) {
  FTRACE(0x12224ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12224ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12224ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12224ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12224ae4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12224ae6 call 0x12218b30 */
  push32(0x12224aebu); f_12218b30();
  /* 12224aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224aee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224af1 push eax */
  push32((uint32_t)(EAX));
  /* 12224af2 call 0x12224b10 */
  push32(0x12224af7u); f_12224b10();
  /* 12224af7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224afa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12224afd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12224aff call 0x12218bd0 */
  push32(0x12224b04u); f_12218bd0();
  /* 12224b04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224b07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12224b0a mov esp, ebp */
  ESP = (EBP);
  /* 12224b0c pop ebp */
  EBP = (pop32());
  /* 12224b0d ret  */
  ESPCHK(0x12224ae0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12224b10 (198 bytes, 69 insns) */
void f_12224b10(void) {
  FTRACE(0x12224b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12224b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12224b11 mov ebp, esp */
  EBP = (ESP);
  /* 12224b13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12224b16 mov eax, dword ptr [0x122405ec] */
  EAX = (r32((uint32_t)(0x122405ec)));
  /* 12224b1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12224b1e cmp dword ptr [0x122420e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122420e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224b25 jne 0x12224b2e */
  if (!C.zf) goto L_12224b2e;
  /* 12224b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224b29 jmp 0x12224bd2 */
  goto L_12224bd2;
L_12224b2e:;
  /* 12224b2e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224b32 jne 0x12224b56 */
  if (!C.zf) goto L_12224b56;
  /* 12224b34 cmp dword ptr [0x122405f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122405f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224b3b je 0x12224b56 */
  if (C.zf) goto L_12224b56;
  /* 12224b3d call 0x12224c30 */
  push32(0x12224b42u); f_12224c30();
  /* 12224b42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12224b44 je 0x12224b4d */
  if (C.zf) goto L_12224b4d;
  /* 12224b46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224b48 jmp 0x12224bd2 */
  goto L_12224bd2;
L_12224b4d:;
  /* 12224b4d mov ecx, dword ptr [0x122405ec] */
  ECX = (r32((uint32_t)(0x122405ec)));
  /* 12224b53 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12224b56:;
  /* 12224b56 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224b5a je 0x12224bd0 */
  if (C.zf) goto L_12224bd0;
  /* 12224b5c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224b60 je 0x12224bd0 */
  if (C.zf) goto L_12224bd0;
  /* 12224b62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224b65 push edx */
  push32((uint32_t)(EDX));
  /* 12224b66 call 0x12217f60 */
  push32(0x12224b6bu); f_12217f60();
  /* 12224b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224b6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12224b71:;
  /* 12224b71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12224b74 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224b77 je 0x12224bd0 */
  if (C.zf) goto L_12224bd0;
  /* 12224b79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12224b7c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12224b7e push edx */
  push32((uint32_t)(EDX));
  /* 12224b7f call 0x12217f60 */
  push32(0x12224b84u); f_12217f60();
  /* 12224b84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224b87 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224b8a jbe 0x12224bc5 */
  if ((C.cf||C.zf)) goto L_12224bc5;
  /* 12224b8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12224b8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12224b91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12224b94 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12224b98 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224b9b jne 0x12224bc5 */
  if (!C.zf) goto L_12224bc5;
  /* 12224b9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12224ba0 push ecx */
  push32((uint32_t)(ECX));
  /* 12224ba1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224ba4 push edx */
  push32((uint32_t)(EDX));
  /* 12224ba5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12224ba8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12224baa push ecx */
  push32((uint32_t)(ECX));
  /* 12224bab call 0x12224be0 */
  push32(0x12224bb0u); f_12224be0();
  /* 12224bb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224bb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12224bb5 jne 0x12224bc5 */
  if (!C.zf) goto L_12224bc5;
  /* 12224bb7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12224bba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12224bbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12224bbf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12224bc3 jmp 0x12224bd2 */
  goto L_12224bd2;
L_12224bc5:;
  /* 12224bc5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12224bc8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12224bcb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12224bce jmp 0x12224b71 */
  goto L_12224b71;
L_12224bd0:;
  /* 12224bd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12224bd2:;
  /* 12224bd2 mov esp, ebp */
  ESP = (EBP);
  /* 12224bd4 pop ebp */
  EBP = (pop32());
  /* 12224bd5 ret  */
  ESPCHK(0x12224b10u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12224be0 (79 bytes, 32 insns) */
void f_12224be0(void) {
  FTRACE(0x12224be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12224be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12224be1 mov ebp, esp */
  EBP = (ESP);
  /* 12224be3 push ecx */
  push32((uint32_t)(ECX));
  /* 12224be4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224be8 jne 0x12224bee */
  if (!C.zf) goto L_12224bee;
  /* 12224bea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224bec jmp 0x12224c2b */
  goto L_12224c2b;
L_12224bee:;
  /* 12224bee mov eax, dword ptr [0x12241ca4] */
  EAX = (r32((uint32_t)(0x12241ca4)));
  /* 12224bf3 push eax */
  push32((uint32_t)(EAX));
  /* 12224bf4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12224bf7 push ecx */
  push32((uint32_t)(ECX));
  /* 12224bf8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12224bfb push edx */
  push32((uint32_t)(EDX));
  /* 12224bfc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12224bff push eax */
  push32((uint32_t)(EAX));
  /* 12224c00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224c03 push ecx */
  push32((uint32_t)(ECX));
  /* 12224c04 push 1 */
  push32((uint32_t)(0x1u));
  /* 12224c06 mov edx, dword ptr [0x12241f44] */
  EDX = (r32((uint32_t)(0x12241f44)));
  /* 12224c0c push edx */
  push32((uint32_t)(EDX));
  /* 12224c0d call 0x12224ce0 */
  push32(0x12224c12u); f_12224ce0();
  /* 12224c12 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224c15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12224c18 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224c1c jne 0x12224c25 */
  if (!C.zf) goto L_12224c25;
  /* 12224c1e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12224c23 jmp 0x12224c2b */
  goto L_12224c2b;
L_12224c25:;
  /* 12224c25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12224c28 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12224c2b:;
  /* 12224c2b mov esp, ebp */
  ESP = (EBP);
  /* 12224c2d pop ebp */
  EBP = (pop32());
  /* 12224c2e ret  */
  ESPCHK(0x12224be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c30 @ 0x12224c30 (174 bytes, 66 insns) */
void f_12224c30(void) {
  FTRACE(0x12224c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12224c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12224c31 mov ebp, esp */
  EBP = (ESP);
  /* 12224c33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12224c36 mov eax, dword ptr [0x122405f4] */
  EAX = (r32((uint32_t)(0x122405f4)));
  /* 12224c3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12224c3e:;
  /* 12224c3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12224c41 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224c44 je 0x12224cd8 */
  if (C.zf) goto L_12224cd8;
  /* 12224c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12224c4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12224c4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12224c50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224c52 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12224c54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12224c57 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12224c59 push eax */
  push32((uint32_t)(EAX));
  /* 12224c5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12224c5c push 1 */
  push32((uint32_t)(0x1u));
  /* 12224c5e call dword ptr [0x1224335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224335c))), 0x12224c64u);
  /* 12224c64 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12224c67 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224c6b jne 0x12224c72 */
  if (!C.zf) goto L_12224c72;
  /* 12224c6d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12224c70 jmp 0x12224cda */
  goto L_12224cda;
L_12224c72:;
  /* 12224c72 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12224c74 push 0x1223cb3c */
  push32((uint32_t)(0x1223cb3cu));
  /* 12224c79 push 2 */
  push32((uint32_t)(0x2u));
  /* 12224c7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12224c7e push ecx */
  push32((uint32_t)(ECX));
  /* 12224c7f call 0x12215130 */
  push32(0x12224c84u); f_12215130();
  /* 12224c84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224c87 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12224c8a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224c8e jne 0x12224c95 */
  if (!C.zf) goto L_12224c95;
  /* 12224c90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12224c93 jmp 0x12224cda */
  goto L_12224cda;
L_12224c95:;
  /* 12224c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224c99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12224c9c push edx */
  push32((uint32_t)(EDX));
  /* 12224c9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12224ca0 push eax */
  push32((uint32_t)(EAX));
  /* 12224ca1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12224ca3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12224ca6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12224ca8 push edx */
  push32((uint32_t)(EDX));
  /* 12224ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224cab push 1 */
  push32((uint32_t)(0x1u));
  /* 12224cad call dword ptr [0x1224335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224335c))), 0x12224cb3u);
  /* 12224cb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12224cb5 jne 0x12224cbc */
  if (!C.zf) goto L_12224cbc;
  /* 12224cb7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12224cba jmp 0x12224cda */
  goto L_12224cda;
L_12224cbc:;
  /* 12224cbc push 0 */
  push32((uint32_t)(0x0u));
  /* 12224cbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12224cc1 push eax */
  push32((uint32_t)(EAX));
  /* 12224cc2 call 0x12225130 */
  push32(0x12224cc7u); f_12225130();
  /* 12224cc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224cca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12224ccd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12224cd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12224cd3 jmp 0x12224c3e */
  goto L_12224c3e;
L_12224cd8:;
  /* 12224cd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12224cda:;
  /* 12224cda mov esp, ebp */
  ESP = (EBP);
  /* 12224cdc pop ebp */
  EBP = (pop32());
  /* 12224cdd ret  */
  ESPCHK(0x12224c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ce0 @ 0x12224ce0 (970 bytes, 340 insns) */
void f_12224ce0(void) {
  FTRACE(0x12224ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12224ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12224ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12224ce3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12224ce5 push 0x1223cb90 */
  push32((uint32_t)(0x1223cb90u));
  /* 12224cea push 0x1221e238 */
  push32((uint32_t)(0x1221e238u));
  /* 12224cef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12224cf5 push eax */
  push32((uint32_t)(EAX));
  /* 12224cf6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12224cfd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224d00 push ebx */
  push32((uint32_t)(EBX));
  /* 12224d01 push esi */
  push32((uint32_t)(ESI));
  /* 12224d02 push edi */
  push32((uint32_t)(EDI));
  /* 12224d03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12224d06 cmp dword ptr [0x12240934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224d0d jne 0x12224d66 */
  if (!C.zf) goto L_12224d66;
  /* 12224d0f push 1 */
  push32((uint32_t)(0x1u));
  /* 12224d11 push 0x1223c1e8 */
  push32((uint32_t)(0x1223c1e8u));
  /* 12224d16 push 1 */
  push32((uint32_t)(0x1u));
  /* 12224d18 push 0x1223c1e8 */
  push32((uint32_t)(0x1223c1e8u));
  /* 12224d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12224d1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12224d21 call dword ptr [0x122432c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432c4))), 0x12224d27u);
  /* 12224d27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12224d29 je 0x12224d37 */
  if (C.zf) goto L_12224d37;
  /* 12224d2b mov dword ptr [0x12240934], 1 */
  w32((uint32_t)(0x12240934), (0x1u));
  /* 12224d35 jmp 0x12224d66 */
  goto L_12224d66;
L_12224d37:;
  /* 12224d37 push 1 */
  push32((uint32_t)(0x1u));
  /* 12224d39 push 0x1223c1e4 */
  push32((uint32_t)(0x1223c1e4u));
  /* 12224d3e push 1 */
  push32((uint32_t)(0x1u));
  /* 12224d40 push 0x1223c1e4 */
  push32((uint32_t)(0x1223c1e4u));
  /* 12224d45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224d49 call dword ptr [0x122432d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432d0))), 0x12224d4fu);
  /* 12224d4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12224d51 je 0x12224d5f */
  if (C.zf) goto L_12224d5f;
  /* 12224d53 mov dword ptr [0x12240934], 2 */
  w32((uint32_t)(0x12240934), (0x2u));
  /* 12224d5d jmp 0x12224d66 */
  goto L_12224d66;
L_12224d5f:;
  /* 12224d5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224d61 jmp 0x122250c4 */
  goto L_122250c4;
L_12224d66:;
  /* 12224d66 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224d6a jle 0x12224d7f */
  if ((C.zf||C.sf!=C.of)) goto L_12224d7f;
  /* 12224d6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12224d6f push eax */
  push32((uint32_t)(EAX));
  /* 12224d70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12224d73 push ecx */
  push32((uint32_t)(ECX));
  /* 12224d74 call 0x122250e0 */
  push32(0x12224d79u); f_122250e0();
  /* 12224d79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224d7c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12224d7f:;
  /* 12224d7f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224d83 jle 0x12224d98 */
  if ((C.zf||C.sf!=C.of)) goto L_12224d98;
  /* 12224d85 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12224d88 push edx */
  push32((uint32_t)(EDX));
  /* 12224d89 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12224d8c push eax */
  push32((uint32_t)(EAX));
  /* 12224d8d call 0x122250e0 */
  push32(0x12224d92u); f_122250e0();
  /* 12224d92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224d95 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12224d98:;
  /* 12224d98 cmp dword ptr [0x12240934], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12240934))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224d9f jne 0x12224dc4 */
  if (!C.zf) goto L_12224dc4;
  /* 12224da1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12224da4 push ecx */
  push32((uint32_t)(ECX));
  /* 12224da5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12224da8 push edx */
  push32((uint32_t)(EDX));
  /* 12224da9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12224dac push eax */
  push32((uint32_t)(EAX));
  /* 12224dad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12224db0 push ecx */
  push32((uint32_t)(ECX));
  /* 12224db1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12224db4 push edx */
  push32((uint32_t)(EDX));
  /* 12224db5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12224db8 push eax */
  push32((uint32_t)(EAX));
  /* 12224db9 call dword ptr [0x122432d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432d0))), 0x12224dbfu);
  /* 12224dbf jmp 0x122250c4 */
  goto L_122250c4;
L_12224dc4:;
  /* 12224dc4 cmp dword ptr [0x12240934], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12240934))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224dcb jne 0x122250c2 */
  if (!C.zf) goto L_122250c2;
  /* 12224dd1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224dd5 jne 0x12224de0 */
  if (!C.zf) goto L_12224de0;
  /* 12224dd7 mov ecx, dword ptr [0x122407e0] */
  ECX = (r32((uint32_t)(0x122407e0)));
  /* 12224ddd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12224de0:;
  /* 12224de0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224de4 je 0x12224df0 */
  if (C.zf) goto L_12224df0;
  /* 12224de6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224dea jne 0x12224f6c */
  if (!C.zf) goto L_12224f6c;
L_12224df0:;
  /* 12224df0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12224df3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224df6 jne 0x12224e02 */
  if (!C.zf) goto L_12224e02;
  /* 12224df8 mov eax, 2 */
  EAX = (0x2u);
  /* 12224dfd jmp 0x122250c4 */
  goto L_122250c4;
L_12224e02:;
  /* 12224e02 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224e06 jle 0x12224e12 */
  if ((C.zf||C.sf!=C.of)) goto L_12224e12;
  /* 12224e08 mov eax, 1 */
  EAX = (0x1u);
  /* 12224e0d jmp 0x122250c4 */
  goto L_122250c4;
L_12224e12:;
  /* 12224e12 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224e16 jle 0x12224e22 */
  if ((C.zf||C.sf!=C.of)) goto L_12224e22;
  /* 12224e18 mov eax, 3 */
  EAX = (0x3u);
  /* 12224e1d jmp 0x122250c4 */
  goto L_122250c4;
L_12224e22:;
  /* 12224e22 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12224e25 push eax */
  push32((uint32_t)(EAX));
  /* 12224e26 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12224e29 push ecx */
  push32((uint32_t)(ECX));
  /* 12224e2a call dword ptr [0x1224331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224331c))), 0x12224e30u);
  /* 12224e30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12224e32 jne 0x12224e3b */
  if (!C.zf) goto L_12224e3b;
  /* 12224e34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224e36 jmp 0x122250c4 */
  goto L_122250c4;
L_12224e3b:;
  /* 12224e3b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224e3f jne 0x12224e47 */
  if (!C.zf) goto L_12224e47;
  /* 12224e41 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224e45 je 0x12224e74 */
  if (C.zf) goto L_12224e74;
L_12224e47:;
  /* 12224e47 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224e4b jne 0x12224e53 */
  if (!C.zf) goto L_12224e53;
  /* 12224e4d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224e51 je 0x12224e74 */
  if (C.zf) goto L_12224e74;
L_12224e53:;
  /* 12224e53 push 0x1223cb50 */
  push32((uint32_t)(0x1223cb50u));
  /* 12224e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12224e5a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12224e5f push 0x1223cb48 */
  push32((uint32_t)(0x1223cb48u));
  /* 12224e64 push 2 */
  push32((uint32_t)(0x2u));
  /* 12224e66 call 0x122141f0 */
  push32(0x12224e6bu); f_122141f0();
  /* 12224e6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12224e6e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224e71 jne 0x12224e74 */
  if (!C.zf) goto L_12224e74;
  /* 12224e73 int3  */
  x86_unimpl("int3 @ 0x12224e73");
L_12224e74:;
  /* 12224e74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12224e76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12224e78 jne 0x12224e3b */
  if (!C.zf) goto L_12224e3b;
  /* 12224e7a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224e7e jle 0x12224ef3 */
  if ((C.zf||C.sf!=C.of)) goto L_12224ef3;
  /* 12224e80 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224e84 jae 0x12224e90 */
  if (!C.cf) goto L_12224e90;
  /* 12224e86 mov eax, 3 */
  EAX = (0x3u);
  /* 12224e8b jmp 0x122250c4 */
  goto L_122250c4;
L_12224e90:;
  /* 12224e90 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12224e93 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12224e96 jmp 0x12224ea1 */
  goto L_12224ea1;
L_12224e98:;
  /* 12224e98 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12224e9b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12224e9e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12224ea1:;
  /* 12224ea1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12224ea4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224ea6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12224ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12224eaa je 0x12224ee9 */
  if (C.zf) goto L_12224ee9;
  /* 12224eac mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12224eaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12224eb1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12224eb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12224eb6 je 0x12224ee9 */
  if (C.zf) goto L_12224ee9;
  /* 12224eb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12224ebb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12224ebd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12224ebf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12224ec2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224ec4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12224ec6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224ec8 jl 0x12224ee7 */
  if ((C.sf!=C.of)) goto L_12224ee7;
  /* 12224eca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12224ecd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12224ecf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12224ed1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12224ed4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12224ed6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12224ed9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224edb jg 0x12224ee7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12224ee7;
  /* 12224edd mov eax, 2 */
  EAX = (0x2u);
  /* 12224ee2 jmp 0x122250c4 */
  goto L_122250c4;
L_12224ee7:;
  /* 12224ee7 jmp 0x12224e98 */
  goto L_12224e98;
L_12224ee9:;
  /* 12224ee9 mov eax, 3 */
  EAX = (0x3u);
  /* 12224eee jmp 0x122250c4 */
  goto L_122250c4;
L_12224ef3:;
  /* 12224ef3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224ef7 jle 0x12224f6c */
  if ((C.zf||C.sf!=C.of)) goto L_12224f6c;
  /* 12224ef9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224efd jae 0x12224f09 */
  if (!C.cf) goto L_12224f09;
  /* 12224eff mov eax, 1 */
  EAX = (0x1u);
  /* 12224f04 jmp 0x122250c4 */
  goto L_122250c4;
L_12224f09:;
  /* 12224f09 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12224f0c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12224f0f jmp 0x12224f1a */
  goto L_12224f1a;
L_12224f11:;
  /* 12224f11 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12224f14 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12224f17 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12224f1a:;
  /* 12224f1a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12224f1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12224f1f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12224f21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12224f23 je 0x12224f62 */
  if (C.zf) goto L_12224f62;
  /* 12224f25 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12224f28 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12224f2a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12224f2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12224f2f je 0x12224f62 */
  if (C.zf) goto L_12224f62;
  /* 12224f31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12224f34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224f36 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12224f38 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12224f3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12224f3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12224f3f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224f41 jl 0x12224f60 */
  if ((C.sf!=C.of)) goto L_12224f60;
  /* 12224f43 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12224f46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12224f48 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12224f4a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12224f4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224f4f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12224f52 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224f54 jg 0x12224f60 */
  if ((!C.zf&&C.sf==C.of)) goto L_12224f60;
  /* 12224f56 mov eax, 2 */
  EAX = (0x2u);
  /* 12224f5b jmp 0x122250c4 */
  goto L_122250c4;
L_12224f60:;
  /* 12224f60 jmp 0x12224f11 */
  goto L_12224f11;
L_12224f62:;
  /* 12224f62 mov eax, 1 */
  EAX = (0x1u);
  /* 12224f67 jmp 0x122250c4 */
  goto L_122250c4;
L_12224f6c:;
  /* 12224f6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12224f6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12224f70 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12224f73 push ecx */
  push32((uint32_t)(ECX));
  /* 12224f74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12224f77 push edx */
  push32((uint32_t)(EDX));
  /* 12224f78 push 9 */
  push32((uint32_t)(0x9u));
  /* 12224f7a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12224f7d push eax */
  push32((uint32_t)(EAX));
  /* 12224f7e call dword ptr [0x12243310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243310))), 0x12224f84u);
  /* 12224f84 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12224f87 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224f8b jne 0x12224f94 */
  if (!C.zf) goto L_12224f94;
  /* 12224f8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224f8f jmp 0x122250c4 */
  goto L_122250c4;
L_12224f94:;
  /* 12224f94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12224f9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12224f9e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12224fa0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12224fa3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12224fa5 call 0x122182d0 */
  push32(0x12224faau); f_122182d0();
  /* 12224faa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12224fad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12224fb0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12224fb3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12224fb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12224fbd jmp 0x12224fd6 */
  goto L_12224fd6;
  /* 12224fbf mov eax, 1 */
  EAX = (0x1u);
  /* 12224fc4 ret  */
  ESPCHK(0x12224ce0u, _esp0);
  ESP += 4; return;
  /* 12224fc5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12224fc8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12224fcf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12224fd6:;
  /* 12224fd6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12224fda jne 0x12224fe3 */
  if (!C.zf) goto L_12224fe3;
  /* 12224fdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12224fde jmp 0x122250c4 */
  goto L_122250c4;
L_12224fe3:;
  /* 12224fe3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12224fe6 push edx */
  push32((uint32_t)(EDX));
  /* 12224fe7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12224fea push eax */
  push32((uint32_t)(EAX));
  /* 12224feb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12224fee push ecx */
  push32((uint32_t)(ECX));
  /* 12224fef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12224ff2 push edx */
  push32((uint32_t)(EDX));
  /* 12224ff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12224ff5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12224ff8 push eax */
  push32((uint32_t)(EAX));
  /* 12224ff9 call dword ptr [0x12243310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243310))), 0x12224fffu);
  /* 12224fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12225001 jne 0x1222500a */
  if (!C.zf) goto L_1222500a;
  /* 12225003 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12225005 jmp 0x122250c4 */
  goto L_122250c4;
L_1222500a:;
  /* 1222500a push 0 */
  push32((uint32_t)(0x0u));
  /* 1222500c push 0 */
  push32((uint32_t)(0x0u));
  /* 1222500e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12225011 push ecx */
  push32((uint32_t)(ECX));
  /* 12225012 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12225015 push edx */
  push32((uint32_t)(EDX));
  /* 12225016 push 9 */
  push32((uint32_t)(0x9u));
  /* 12225018 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1222501b push eax */
  push32((uint32_t)(EAX));
  /* 1222501c call dword ptr [0x12243310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243310))), 0x12225022u);
  /* 12225022 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12225025 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12225029 jne 0x12225032 */
  if (!C.zf) goto L_12225032;
  /* 1222502b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1222502d jmp 0x122250c4 */
  goto L_122250c4;
L_12225032:;
  /* 12225032 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12225039 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1222503c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1222503e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12225041 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12225043 call 0x122182d0 */
  push32(0x12225048u); f_122182d0();
  /* 12225048 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1222504b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1222504e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12225051 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12225054 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1222505b jmp 0x12225074 */
  goto L_12225074;
  /* 1222505d mov eax, 1 */
  EAX = (0x1u);
  /* 12225062 ret  */
  ESPCHK(0x12224ce0u, _esp0);
  ESP += 4; return;
  /* 12225063 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12225066 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1222506d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12225074:;
  /* 12225074 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12225078 jne 0x1222507e */
  if (!C.zf) goto L_1222507e;
  /* 1222507a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1222507c jmp 0x122250c4 */
  goto L_122250c4;
L_1222507e:;
  /* 1222507e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12225081 push edx */
  push32((uint32_t)(EDX));
  /* 12225082 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12225085 push eax */
  push32((uint32_t)(EAX));
  /* 12225086 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12225089 push ecx */
  push32((uint32_t)(ECX));
  /* 1222508a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1222508d push edx */
  push32((uint32_t)(EDX));
  /* 1222508e push 1 */
  push32((uint32_t)(0x1u));
  /* 12225090 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12225093 push eax */
  push32((uint32_t)(EAX));
  /* 12225094 call dword ptr [0x12243310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243310))), 0x1222509au);
  /* 1222509a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1222509c jne 0x122250a2 */
  if (!C.zf) goto L_122250a2;
  /* 1222509e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122250a0 jmp 0x122250c4 */
  goto L_122250c4;
L_122250a2:;
  /* 122250a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122250a5 push ecx */
  push32((uint32_t)(ECX));
  /* 122250a6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122250a9 push edx */
  push32((uint32_t)(EDX));
  /* 122250aa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122250ad push eax */
  push32((uint32_t)(EAX));
  /* 122250ae mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122250b1 push ecx */
  push32((uint32_t)(ECX));
  /* 122250b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122250b5 push edx */
  push32((uint32_t)(EDX));
  /* 122250b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122250b9 push eax */
  push32((uint32_t)(EAX));
  /* 122250ba call dword ptr [0x122432c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432c4))), 0x122250c0u);
  /* 122250c0 jmp 0x122250c4 */
  goto L_122250c4;
L_122250c2:;
  /* 122250c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122250c4:;
  /* 122250c4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 122250c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122250ca mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 122250d1 pop edi */
  EDI = (pop32());
  /* 122250d2 pop esi */
  ESI = (pop32());
  /* 122250d3 pop ebx */
  EBX = (pop32());
  /* 122250d4 mov esp, ebp */
  ESP = (EBP);
  /* 122250d6 pop ebp */
  EBP = (pop32());
  /* 122250d7 ret  */
  ESPCHK(0x12224ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_100150e0 @ 0x122250e0 (80 bytes, 32 insns) */
void f_122250e0(void) {
  FTRACE(0x122250e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122250e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122250e1 mov ebp, esp */
  EBP = (ESP);
  /* 122250e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122250e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122250e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122250ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122250ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122250f2:;
  /* 122250f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122250f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122250f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122250fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122250fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12225100 je 0x12225117 */
  if (C.zf) goto L_12225117;
  /* 12225102 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12225105 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12225108 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1222510a je 0x12225117 */
  if (C.zf) goto L_12225117;
  /* 1222510c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222510f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12225112 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12225115 jmp 0x122250f2 */
  goto L_122250f2;
L_12225117:;
  /* 12225117 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222511a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1222511d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1222511f jne 0x12225129 */
  if (!C.zf) goto L_12225129;
  /* 12225121 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12225124 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12225127 jmp 0x1222512c */
  goto L_1222512c;
L_12225129:;
  /* 12225129 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1222512c:;
  /* 1222512c mov esp, ebp */
  ESP = (EBP);
  /* 1222512e pop ebp */
  EBP = (pop32());
  /* 1222512f ret  */
  ESPCHK(0x122250e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015130 @ 0x12225130 (736 bytes, 224 insns) */
void f_12225130(void) {
  FTRACE(0x12225130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12225130 push ebp */
  push32((uint32_t)(EBP));
  /* 12225131 mov ebp, esp */
  EBP = (ESP);
  /* 12225133 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12225136 push esi */
  push32((uint32_t)(ESI));
  /* 12225137 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222513b je 0x1222515c */
  if (C.zf) goto L_1222515c;
  /* 1222513d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1222513f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12225142 push eax */
  push32((uint32_t)(EAX));
  /* 12225143 call 0x12225580 */
  push32(0x12225148u); f_12225580();
  /* 12225148 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222514b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1222514e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12225152 je 0x1222515c */
  if (C.zf) goto L_1222515c;
  /* 12225154 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12225157 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222515a jne 0x12225164 */
  if (!C.zf) goto L_12225164;
L_1222515c:;
  /* 1222515c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1222515f jmp 0x1222540b */
  goto L_1222540b;
L_12225164:;
  /* 12225164 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12225167 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1222516b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1222516d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1222516f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12225170 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12225173 mov ecx, dword ptr [0x122405ec] */
  ECX = (r32((uint32_t)(0x122405ec)));
  /* 12225179 cmp ecx, dword ptr [0x122405f0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x122405f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222517f jne 0x12225195 */
  if (!C.zf) goto L_12225195;
  /* 12225181 mov edx, dword ptr [0x122405ec] */
  EDX = (r32((uint32_t)(0x122405ec)));
  /* 12225187 push edx */
  push32((uint32_t)(EDX));
  /* 12225188 call 0x12225490 */
  push32(0x1222518du); f_12225490();
  /* 1222518d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12225190 mov dword ptr [0x122405ec], eax */
  w32((uint32_t)(0x122405ec), (EAX));
L_12225195:;
  /* 12225195 cmp dword ptr [0x122405ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122405ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222519c jne 0x12225255 */
  if (!C.zf) goto L_12225255;
  /* 122251a2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122251a6 je 0x122251c7 */
  if (C.zf) goto L_122251c7;
  /* 122251a8 cmp dword ptr [0x122405f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122405f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122251af je 0x122251c7 */
  if (C.zf) goto L_122251c7;
  /* 122251b1 call 0x12224c30 */
  push32(0x122251b6u); f_12224c30();
  /* 122251b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122251b8 je 0x122251c2 */
  if (C.zf) goto L_122251c2;
  /* 122251ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122251bd jmp 0x1222540b */
  goto L_1222540b;
L_122251c2:;
  /* 122251c2 jmp 0x12225255 */
  goto L_12225255;
L_122251c7:;
  /* 122251c7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122251cb je 0x122251d4 */
  if (C.zf) goto L_122251d4;
  /* 122251cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122251cf jmp 0x1222540b */
  goto L_1222540b;
L_122251d4:;
  /* 122251d4 cmp dword ptr [0x122405ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122405ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122251db jne 0x12225214 */
  if (!C.zf) goto L_12225214;
  /* 122251dd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 122251e2 push 0x1223cba8 */
  push32((uint32_t)(0x1223cba8u));
  /* 122251e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 122251e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 122251eb call 0x12215130 */
  push32(0x122251f0u); f_12215130();
  /* 122251f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122251f3 mov dword ptr [0x122405ec], eax */
  w32((uint32_t)(0x122405ec), (EAX));
  /* 122251f8 cmp dword ptr [0x122405ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122405ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122251ff jne 0x12225209 */
  if (!C.zf) goto L_12225209;
  /* 12225201 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12225204 jmp 0x1222540b */
  goto L_1222540b;
L_12225209:;
  /* 12225209 mov eax, dword ptr [0x122405ec] */
  EAX = (r32((uint32_t)(0x122405ec)));
  /* 1222520e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12225214:;
  /* 12225214 cmp dword ptr [0x122405f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122405f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222521b jne 0x12225255 */
  if (!C.zf) goto L_12225255;
  /* 1222521d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12225222 push 0x1223cba8 */
  push32((uint32_t)(0x1223cba8u));
  /* 12225227 push 2 */
  push32((uint32_t)(0x2u));
  /* 12225229 push 4 */
  push32((uint32_t)(0x4u));
  /* 1222522b call 0x12215130 */
  push32(0x12225230u); f_12215130();
  /* 12225230 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12225233 mov dword ptr [0x122405f4], eax */
  w32((uint32_t)(0x122405f4), (EAX));
  /* 12225238 cmp dword ptr [0x122405f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122405f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222523f jne 0x12225249 */
  if (!C.zf) goto L_12225249;
  /* 12225241 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12225244 jmp 0x1222540b */
  goto L_1222540b;
L_12225249:;
  /* 12225249 mov ecx, dword ptr [0x122405f4] */
  ECX = (r32((uint32_t)(0x122405f4)));
  /* 1222524f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12225255:;
  /* 12225255 mov edx, dword ptr [0x122405ec] */
  EDX = (r32((uint32_t)(0x122405ec)));
  /* 1222525b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1222525e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12225261 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12225264 push eax */
  push32((uint32_t)(EAX));
  /* 12225265 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12225268 push ecx */
  push32((uint32_t)(ECX));
  /* 12225269 call 0x12225410 */
  push32(0x1222526eu); f_12225410();
  /* 1222526e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12225271 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12225274 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12225278 jl 0x12225311 */
  if ((C.sf!=C.of)) goto L_12225311;
  /* 1222527e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12225281 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12225284 je 0x12225311 */
  if (C.zf) goto L_12225311;
  /* 1222528a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222528e je 0x12225303 */
  if (C.zf) goto L_12225303;
  /* 12225290 push 2 */
  push32((uint32_t)(0x2u));
  /* 12225292 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12225295 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12225298 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1222529b push edx */
  push32((uint32_t)(EDX));
  /* 1222529c call 0x12215bc0 */
  push32(0x122252a1u); f_12215bc0();
  /* 122252a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122252a4 jmp 0x122252af */
  goto L_122252af;
L_122252a6:;
  /* 122252a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122252a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122252ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122252af:;
  /* 122252af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122252b2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122252b5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122252b9 je 0x122252d0 */
  if (C.zf) goto L_122252d0;
  /* 122252bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122252be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122252c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122252c4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 122252c7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 122252cb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 122252ce jmp 0x122252a6 */
  goto L_122252a6;
L_122252d0:;
  /* 122252d0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 122252d5 push 0x1223cba8 */
  push32((uint32_t)(0x1223cba8u));
  /* 122252da push 2 */
  push32((uint32_t)(0x2u));
  /* 122252dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122252df shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 122252e2 push eax */
  push32((uint32_t)(EAX));
  /* 122252e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122252e6 push ecx */
  push32((uint32_t)(ECX));
  /* 122252e7 call 0x122155c0 */
  push32(0x122252ecu); f_122155c0();
  /* 122252ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122252ef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122252f2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122252f6 je 0x12225301 */
  if (C.zf) goto L_12225301;
  /* 122252f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122252fb mov dword ptr [0x122405ec], edx */
  w32((uint32_t)(0x122405ec), (EDX));
L_12225301:;
  /* 12225301 jmp 0x1222530f */
  goto L_1222530f;
L_12225303:;
  /* 12225303 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12225306 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12225309 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222530c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1222530f:;
  /* 1222530f jmp 0x12225384 */
  goto L_12225384;
L_12225311:;
  /* 12225311 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12225315 jne 0x1222537d */
  if (!C.zf) goto L_1222537d;
  /* 12225317 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222531b jge 0x12225325 */
  if ((C.sf==C.of)) goto L_12225325;
  /* 1222531d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12225320 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12225322 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12225325:;
  /* 12225325 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1222532a push 0x1223cba8 */
  push32((uint32_t)(0x1223cba8u));
  /* 1222532f push 2 */
  push32((uint32_t)(0x2u));
  /* 12225331 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12225334 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1222533b push edx */
  push32((uint32_t)(EDX));
  /* 1222533c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1222533f push eax */
  push32((uint32_t)(EAX));
  /* 12225340 call 0x122155c0 */
  push32(0x12225345u); f_122155c0();
  /* 12225345 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12225348 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1222534b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222534f jne 0x12225359 */
  if (!C.zf) goto L_12225359;
  /* 12225351 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12225354 jmp 0x1222540b */
  goto L_1222540b;
L_12225359:;
  /* 12225359 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1222535c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1222535f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12225362 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12225365 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12225368 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1222536b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12225373 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12225376 mov dword ptr [0x122405ec], eax */
  w32((uint32_t)(0x122405ec), (EAX));
  /* 1222537b jmp 0x12225384 */
  goto L_12225384;
L_1222537d:;
  /* 1222537d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1222537f jmp 0x1222540b */
  goto L_1222540b;
L_12225384:;
  /* 12225384 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12225388 je 0x12225409 */
  if (C.zf) goto L_12225409;
  /* 1222538a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1222538f push 0x1223cba8 */
  push32((uint32_t)(0x1223cba8u));
  /* 12225394 push 2 */
  push32((uint32_t)(0x2u));
  /* 12225396 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12225399 push ecx */
  push32((uint32_t)(ECX));
  /* 1222539a call 0x12217f60 */
  push32(0x1222539fu); f_12217f60();
  /* 1222539f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122253a2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122253a5 push eax */
  push32((uint32_t)(EAX));
  /* 122253a6 call 0x12215130 */
  push32(0x122253abu); f_12215130();
  /* 122253ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122253ae mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122253b1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122253b5 je 0x12225409 */
  if (C.zf) goto L_12225409;
  /* 122253b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122253ba push edx */
  push32((uint32_t)(EDX));
  /* 122253bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122253be push eax */
  push32((uint32_t)(EAX));
  /* 122253bf call 0x122180e0 */
  push32(0x122253c4u); f_122180e0();
  /* 122253c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122253c7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122253ca sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122253cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122253d0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122253d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122253d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122253d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 122253db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122253de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122253e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122253e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122253e7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122253e9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122253eb not edx */
  EDX = (~(EDX));
  /* 122253ed and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 122253f0 push edx */
  push32((uint32_t)(EDX));
  /* 122253f1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122253f4 push eax */
  push32((uint32_t)(EAX));
  /* 122253f5 call dword ptr [0x122432c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432c0))), 0x122253fbu);
  /* 122253fb push 2 */
  push32((uint32_t)(0x2u));
  /* 122253fd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12225400 push ecx */
  push32((uint32_t)(ECX));
  /* 12225401 call 0x12215bc0 */
  push32(0x12225406u); f_12215bc0();
  /* 12225406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12225409:;
  /* 12225409 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1222540b:;
  /* 1222540b pop esi */
  ESI = (pop32());
  /* 1222540c mov esp, ebp */
  ESP = (EBP);
  /* 1222540e pop ebp */
  EBP = (pop32());
  /* 1222540f ret  */
  ESPCHK(0x12225130u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12225410 (124 bytes, 47 insns) */
void f_12225410(void) {
  FTRACE(0x12225410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12225410 push ebp */
  push32((uint32_t)(EBP));
  /* 12225411 mov ebp, esp */
  EBP = (ESP);
  /* 12225413 push ecx */
  push32((uint32_t)(ECX));
  /* 12225414 mov eax, dword ptr [0x122405ec] */
  EAX = (r32((uint32_t)(0x122405ec)));
  /* 12225419 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1222541c jmp 0x12225427 */
  goto L_12225427;
L_1222541e:;
  /* 1222541e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12225421 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12225424 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12225427:;
  /* 12225427 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222542a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222542d je 0x1222547a */
  if (C.zf) goto L_1222547a;
  /* 1222542f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12225432 push eax */
  push32((uint32_t)(EAX));
  /* 12225433 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12225436 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12225438 push edx */
  push32((uint32_t)(EDX));
  /* 12225439 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222543c push eax */
  push32((uint32_t)(EAX));
  /* 1222543d call 0x12224be0 */
  push32(0x12225442u); f_12224be0();
  /* 12225442 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12225445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12225447 jne 0x12225478 */
  if (!C.zf) goto L_12225478;
  /* 12225449 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222544c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1222544e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12225451 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12225455 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12225458 je 0x1222546a */
  if (C.zf) goto L_1222546a;
  /* 1222545a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222545d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1222545f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12225462 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12225466 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12225468 jne 0x12225478 */
  if (!C.zf) goto L_12225478;
L_1222546a:;
  /* 1222546a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222546d sub eax, dword ptr [0x122405ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122405ec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12225473 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12225476 jmp 0x12225488 */
  goto L_12225488;
L_12225478:;
  /* 12225478 jmp 0x1222541e */
  goto L_1222541e;
L_1222547a:;
  /* 1222547a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222547d sub eax, dword ptr [0x122405ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122405ec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12225483 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12225486 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12225488:;
  /* 12225488 mov esp, ebp */
  ESP = (EBP);
  /* 1222548a pop ebp */
  EBP = (pop32());
  /* 1222548b ret  */
  ESPCHK(0x12225410u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12225490 (238 bytes, 80 insns) */
void f_12225490(void) {
  FTRACE(0x12225490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12225490 push ebp */
  push32((uint32_t)(EBP));
  /* 12225491 mov ebp, esp */
  EBP = (ESP);
  /* 12225493 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12225496 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1222549d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122254a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122254a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122254a7 jne 0x122254b0 */
  if (!C.zf) goto L_122254b0;
  /* 122254a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122254ab jmp 0x1222557a */
  goto L_1222557a;
L_122254b0:;
  /* 122254b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122254b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122254b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122254b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122254bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122254be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122254c0 je 0x122254cd */
  if (C.zf) goto L_122254cd;
  /* 122254c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122254c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122254c8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122254cb jmp 0x122254b0 */
  goto L_122254b0;
L_122254cd:;
  /* 122254cd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 122254d2 push 0x1223cba8 */
  push32((uint32_t)(0x1223cba8u));
  /* 122254d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 122254d9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122254dc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 122254e3 push eax */
  push32((uint32_t)(EAX));
  /* 122254e4 call 0x12215130 */
  push32(0x122254e9u); f_12215130();
  /* 122254e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122254ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122254ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122254f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122254f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122254f9 jne 0x12225505 */
  if (!C.zf) goto L_12225505;
  /* 122254fb push 9 */
  push32((uint32_t)(0x9u));
  /* 122254fd call 0x122140a0 */
  push32(0x12225502u); f_122140a0();
  /* 12225502 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12225505:;
  /* 12225505 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12225508 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1222550b:;
  /* 1222550b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1222550e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12225511 je 0x1222556e */
  if (C.zf) goto L_1222556e;
  /* 12225513 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12225518 push 0x1223cba8 */
  push32((uint32_t)(0x1223cba8u));
  /* 1222551d push 2 */
  push32((uint32_t)(0x2u));
  /* 1222551f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12225522 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12225524 push edx */
  push32((uint32_t)(EDX));
  /* 12225525 call 0x12217f60 */
  push32(0x1222552au); f_12217f60();
  /* 1222552a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222552d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12225530 push eax */
  push32((uint32_t)(EAX));
  /* 12225531 call 0x12215130 */
  push32(0x12225536u); f_12215130();
  /* 12225536 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12225539 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1222553c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1222553e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12225541 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12225544 je 0x1222555a */
  if (C.zf) goto L_1222555a;
  /* 12225546 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12225549 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1222554b push ecx */
  push32((uint32_t)(ECX));
  /* 1222554c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1222554f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12225551 push eax */
  push32((uint32_t)(EAX));
  /* 12225552 call 0x122180e0 */
  push32(0x12225557u); f_122180e0();
  /* 12225557 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1222555a:;
  /* 1222555a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1222555d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12225560 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12225563 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12225566 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12225569 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1222556c jmp 0x1222550b */
  goto L_1222550b;
L_1222556e:;
  /* 1222556e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12225571 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12225577 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1222557a:;
  /* 1222557a mov esp, ebp */
  ESP = (EBP);
  /* 1222557c pop ebp */
  EBP = (pop32());
  /* 1222557d ret  */
  ESPCHK(0x12225490u, _esp0);
  ESP += 4; return;
}

/* FUN_10015580 @ 0x12225580 (237 bytes, 81 insns) */
void f_12225580(void) {
  FTRACE(0x12225580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12225580 push ebp */
  push32((uint32_t)(EBP));
  /* 12225581 mov ebp, esp */
  EBP = (ESP);
  /* 12225583 push ecx */
  push32((uint32_t)(ECX));
  /* 12225584 cmp dword ptr [0x12241d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12241d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222558b jne 0x122255a2 */
  if (!C.zf) goto L_122255a2;
  /* 1222558d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12225590 push eax */
  push32((uint32_t)(EAX));
  /* 12225591 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12225594 push ecx */
  push32((uint32_t)(ECX));
  /* 12225595 call 0x12225680 */
  push32(0x1222559au); f_12225680();
  /* 1222559a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222559d jmp 0x12225669 */
  goto L_12225669;
L_122255a2:;
  /* 122255a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122255a4 call 0x12218b30 */
  push32(0x122255a9u); f_12218b30();
  /* 122255a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122255ac jmp 0x122255b7 */
  goto L_122255b7;
L_122255ae:;
  /* 122255ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122255b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122255b4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_122255b7:;
  /* 122255b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122255ba movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 122255be mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 122255c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122255c5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122255cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122255cd je 0x1222564b */
  if (C.zf) goto L_1222564b;
  /* 122255cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122255d2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122255d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122255d9 mov cl, byte ptr [eax + 0x12241e41] */
  CL = (r8((uint32_t)(EAX + 0x12241e41)));
  /* 122255df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 122255e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122255e4 je 0x12225636 */
  if (C.zf) goto L_12225636;
  /* 122255e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122255e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122255ec mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 122255ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122255f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122255f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122255f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122255f8 jne 0x12225608 */
  if (!C.zf) goto L_12225608;
  /* 122255fa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122255fc call 0x12218bd0 */
  push32(0x12225601u); f_12218bd0();
  /* 12225601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12225604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12225606 jmp 0x12225669 */
  goto L_12225669;
L_12225608:;
  /* 12225608 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222560b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12225611 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12225614 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12225617 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12225619 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1222561b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1222561d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12225620 jne 0x12225634 */
  if (!C.zf) goto L_12225634;
  /* 12225622 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12225624 call 0x12218bd0 */
  push32(0x12225629u); f_12218bd0();
  /* 12225629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222562c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222562f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12225632 jmp 0x12225669 */
  goto L_12225669;
L_12225634:;
  /* 12225634 jmp 0x12225646 */
  goto L_12225646;
L_12225636:;
  /* 12225636 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12225639 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1222563f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12225642 jne 0x12225646 */
  if (!C.zf) goto L_12225646;
  /* 12225644 jmp 0x1222564b */
  goto L_1222564b;
L_12225646:;
  /* 12225646 jmp 0x122255ae */
  goto L_122255ae;
L_1222564b:;
  /* 1222564b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1222564d call 0x12218bd0 */
  push32(0x12225652u); f_12218bd0();
  /* 12225652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12225655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12225658 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1222565d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12225660 jne 0x12225667 */
  if (!C.zf) goto L_12225667;
  /* 12225662 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12225665 jmp 0x12225669 */
  goto L_12225669;
L_12225667:;
  /* 12225667 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12225669:;
  /* 12225669 mov esp, ebp */
  ESP = (EBP);
  /* 1222566b pop ebp */
  EBP = (pop32());
  /* 1222566c ret  */
  ESPCHK(0x12225580u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12225680 (193 bytes, 87 insns) */
void f_12225680(void) {
  FTRACE(0x12225680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12225680 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12225682 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12225686 push ebx */
  push32((uint32_t)(EBX));
  /* 12225687 mov ebx, eax */
  EBX = (EAX);
  /* 12225689 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1222568c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12225690 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12225696 je 0x122256ab */
  if (C.zf) goto L_122256ab;
L_12225698:;
  /* 12225698 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1222569a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1222569b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1222569d je 0x12225670 */
  if (C.zf) { jmp_ind(0x12225670u); return; }
  /* 1222569f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 122256a1 je 0x122256f4 */
  if (C.zf) goto L_122256f4;
  /* 122256a3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 122256a9 jne 0x12225698 */
  if (!C.zf) goto L_12225698;
L_122256ab:;
  /* 122256ab or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 122256ad push edi */
  push32((uint32_t)(EDI));
  /* 122256ae mov eax, ebx */
  EAX = (EBX);
  /* 122256b0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 122256b3 push esi */
  push32((uint32_t)(ESI));
  /* 122256b4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_122256b6:;
  /* 122256b6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 122256b8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 122256bd mov eax, ecx */
  EAX = (ECX);
  /* 122256bf mov esi, edi */
  ESI = (EDI);
  /* 122256c1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 122256c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122256c5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 122256c7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 122256ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122256cd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 122256cf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 122256d1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122256d4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 122256da jne 0x122256f8 */
  if (!C.zf) goto L_122256f8;
  /* 122256dc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 122256e1 je 0x122256b6 */
  if (C.zf) goto L_122256b6;
  /* 122256e3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 122256e8 jne 0x122256f2 */
  if (!C.zf) goto L_122256f2;
  /* 122256ea and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 122256f0 jne 0x122256b6 */
  if (!C.zf) goto L_122256b6;
L_122256f2:;
  /* 122256f2 pop esi */
  ESI = (pop32());
  /* 122256f3 pop edi */
  EDI = (pop32());
L_122256f4:;
  /* 122256f4 pop ebx */
  EBX = (pop32());
  /* 122256f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122256f7 ret  */
  ESPCHK(0x12225680u, _esp0);
  ESP += 4; return;
L_122256f8:;
  /* 122256f8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 122256fb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122256fd je 0x12225735 */
  if (C.zf) goto L_12225735;
  /* 122256ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12225701 je 0x122256f2 */
  if (C.zf) goto L_122256f2;
  /* 12225703 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12225705 je 0x1222572e */
  if (C.zf) goto L_1222572e;
  /* 12225707 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12225709 je 0x122256f2 */
  if (C.zf) goto L_122256f2;
  /* 1222570b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1222570e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12225710 je 0x12225727 */
  if (C.zf) goto L_12225727;
  /* 12225712 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12225714 je 0x122256f2 */
  if (C.zf) goto L_122256f2;
  /* 12225716 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12225718 je 0x12225720 */
  if (C.zf) goto L_12225720;
  /* 1222571a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1222571c je 0x122256f2 */
  if (C.zf) goto L_122256f2;
  /* 1222571e jmp 0x122256b6 */
  goto L_122256b6;
L_12225720:;
  /* 12225720 pop esi */
  ESI = (pop32());
  /* 12225721 pop edi */
  EDI = (pop32());
  /* 12225722 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12225725 pop ebx */
  EBX = (pop32());
  /* 12225726 ret  */
  ESPCHK(0x12225680u, _esp0);
  ESP += 4; return;
L_12225727:;
  /* 12225727 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1222572a pop esi */
  ESI = (pop32());
  /* 1222572b pop edi */
  EDI = (pop32());
  /* 1222572c pop ebx */
  EBX = (pop32());
  /* 1222572d ret  */
  ESPCHK(0x12225680u, _esp0);
  ESP += 4; return;
L_1222572e:;
  /* 1222572e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12225731 pop esi */
  ESI = (pop32());
  /* 12225732 pop edi */
  EDI = (pop32());
  /* 12225733 pop ebx */
  EBX = (pop32());
  /* 12225734 ret  */
  ESPCHK(0x12225680u, _esp0);
  ESP += 4; return;
L_12225735:;
  /* 12225735 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12225738 pop esi */
  ESI = (pop32());
  /* 12225739 pop edi */
  EDI = (pop32());
  /* 1222573a pop ebx */
  EBX = (pop32());
  /* 1222573b ret  */
  ESPCHK(0x12225680u, _esp0);
  ESP += 4; return;
  /* 1222573c jmp dword ptr [0x12243364] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12243364)))); return;
}

/* RtlUnwind @ 0x1222588c (6 bytes, 1 insns) */
void f_1222588c(void) {
  FTRACE(0x1222588cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1222588c jmp dword ptr [0x122432f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x122432f8)))); return;
}

