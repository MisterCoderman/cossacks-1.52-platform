#include "recomp.h"

/* FUN_10012470 @ 0x11022470 (393 bytes, 123 insns) */
void f_11022470(void) {
  FTRACE(0x11022470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11022470 push ebp */
  push32((uint32_t)(EBP));
  /* 11022471 mov ebp, esp */
  EBP = (ESP);
  /* 11022473 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022476 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102247a jne 0x11022486 */
  if (!C.zf) goto L_11022486;
  /* 1102247c mov eax, dword ptr [0x1103fc98] */
  EAX = (r32((uint32_t)(0x1103fc98)));
  /* 11022481 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11022484 jmp 0x1102248c */
  goto L_1102248c;
L_11022486:;
  /* 11022486 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022489 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1102248c:;
  /* 1102248c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1102248f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11022492 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022495 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11022498 push 0x1104095c */
  push32((uint32_t)(0x1104095cu));
  /* 1102249d call dword ptr [0x11043388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043388))), 0x110224a3u);
  /* 110224a3 cmp dword ptr [0x1104094c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104094c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110224aa je 0x110224ca */
  if (C.zf) goto L_110224ca;
  /* 110224ac push 0x1104095c */
  push32((uint32_t)(0x1104095cu));
  /* 110224b1 call dword ptr [0x11043378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043378))), 0x110224b7u);
  /* 110224b7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110224b9 call 0x11018b30 */
  push32(0x110224beu); f_11018b30();
  /* 110224be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110224c1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 110224c8 jmp 0x110224d1 */
  goto L_110224d1;
L_110224ca:;
  /* 110224ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_110224d1:;
  /* 110224d1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110224d5 jbe 0x110225c2 */
  if ((C.cf||C.zf)) goto L_110225c2;
  /* 110224db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110224de mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110224e0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 110224e3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110224e7 je 0x110224f1 */
  if (C.zf) goto L_110224f1;
  /* 110224e9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110224ed je 0x110224f6 */
  if (C.zf) goto L_110224f6;
  /* 110224ef jmp 0x11022550 */
  goto L_11022550;
L_110224f1:;
  /* 110224f1 jmp 0x110225c2 */
  goto L_110225c2;
L_110224f6:;
  /* 110224f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110224f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110224fc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 110224ff mov dword ptr [0x11040938], 0 */
  w32((uint32_t)(0x11040938), (0x0u));
  /* 11022509 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102250c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1102250f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022512 jne 0x11022527 */
  if (!C.zf) goto L_11022527;
  /* 11022514 mov dword ptr [0x11040938], 1 */
  w32((uint32_t)(0x11040938), (0x1u));
  /* 1102251e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022521 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022524 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11022527:;
  /* 11022527 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102252a push ecx */
  push32((uint32_t)(ECX));
  /* 1102252b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1102252e push edx */
  push32((uint32_t)(EDX));
  /* 1102252f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11022532 push eax */
  push32((uint32_t)(EAX));
  /* 11022533 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022536 push ecx */
  push32((uint32_t)(ECX));
  /* 11022537 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102253a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1102253c push eax */
  push32((uint32_t)(EAX));
  /* 1102253d call 0x11022600 */
  push32(0x11022542u); f_11022600();
  /* 11022542 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022545 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022548 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102254b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1102254e jmp 0x110225bd */
  goto L_110225bd;
L_11022550:;
  /* 11022550 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11022555 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11022557 mov ecx, dword ptr [0x1103ec98] */
  ECX = (r32((uint32_t)(0x1103ec98)));
  /* 1102255d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1102255f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11022563 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11022569 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1102256b je 0x11022598 */
  if (C.zf) goto L_11022598;
  /* 1102256d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022571 jbe 0x11022598 */
  if ((C.cf||C.zf)) goto L_11022598;
  /* 11022573 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022576 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022579 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1102257b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1102257d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022580 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022583 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11022586 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022589 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102258c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1102258f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022592 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022595 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11022598:;
  /* 11022598 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102259b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102259e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110225a0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 110225a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110225a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110225a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110225ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110225ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110225b1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 110225b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110225b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110225ba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_110225bd:;
  /* 110225bd jmp 0x110224d1 */
  goto L_110224d1;
L_110225c2:;
  /* 110225c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110225c6 je 0x110225d4 */
  if (C.zf) goto L_110225d4;
  /* 110225c8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110225ca call 0x11018bd0 */
  push32(0x110225cfu); f_11018bd0();
  /* 110225cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110225d2 jmp 0x110225df */
  goto L_110225df;
L_110225d4:;
  /* 110225d4 push 0x1104095c */
  push32((uint32_t)(0x1104095cu));
  /* 110225d9 call dword ptr [0x11043378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043378))), 0x110225dfu);
L_110225df:;
  /* 110225df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110225e3 jbe 0x110225f3 */
  if ((C.cf||C.zf)) goto L_110225f3;
  /* 110225e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110225e8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 110225eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110225ee sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110225f1 jmp 0x110225f5 */
  goto L_110225f5;
L_110225f3:;
  /* 110225f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110225f5:;
  /* 110225f5 mov esp, ebp */
  ESP = (EBP);
  /* 110225f7 pop ebp */
  EBP = (pop32());
  /* 110225f8 ret  */
  ESPCHK(0x11022470u, _esp0);
  ESP += 4; return;
}

/* FUN_10012600 @ 0x11022600 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11022600(void) {
  FTRACE(0x11022600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11022600 push ebp */
  push32((uint32_t)(EBP));
  /* 11022601 mov ebp, esp */
  EBP = (ESP);
  /* 11022603 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022606 push esi */
  push32((uint32_t)(ESI));
  /* 11022607 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1102260b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1102260e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022611 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022614 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11022617 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102261b ja 0x11022b68 */
  if ((!C.cf&&!C.zf)) goto L_11022b68;
  /* 11022621 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022624 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11022626 mov dl, byte ptr [eax + 0x11022bc9] */
  DL = (r8((uint32_t)(EAX + 0x11022bc9)));
  /* 1102262c jmp dword ptr [edx*4 + 0x11022b6d] */
  switch (EDX) {
    case 0: goto L_11022b46;
    case 1: goto L_11022655;
    case 2: goto L_1102269b;
    case 3: goto L_110227e8;
    case 4: goto L_11022810;
    case 5: goto L_110228af;
    case 6: goto L_1102291b;
    case 7: goto L_11022944;
    case 8: goto L_11022985;
    case 9: goto L_11022a67;
    case 10: goto L_11022ace;
    case 11: goto L_11022b1b;
    case 12: goto L_11022633;
    case 13: goto L_11022678;
    case 14: goto L_110226be;
    case 15: goto L_110227be;
    case 16: goto L_11022855;
    case 17: goto L_11022882;
    case 18: goto L_110228d7;
    case 19: goto L_1102295b;
    case 20: goto L_11022a09;
    case 21: goto L_11022a98;
    case 22: goto L_11022b68;
    default: x86_unimpl("switch@0x1102262c out of table"); return;
  }
L_11022633:;
  /* 11022633 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022636 push ecx */
  push32((uint32_t)(ECX));
  /* 11022637 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102263a push edx */
  push32((uint32_t)(EDX));
  /* 1102263b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1102263e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11022641 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022644 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11022647 push eax */
  push32((uint32_t)(EAX));
  /* 11022648 call 0x11022c20 */
  push32(0x1102264du); f_11022c20();
  /* 1102264d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022650 jmp 0x11022b68 */
  goto L_11022b68;
L_11022655:;
  /* 11022655 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022658 push ecx */
  push32((uint32_t)(ECX));
  /* 11022659 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102265c push edx */
  push32((uint32_t)(EDX));
  /* 1102265d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022660 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11022663 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022666 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1102266a push eax */
  push32((uint32_t)(EAX));
  /* 1102266b call 0x11022c20 */
  push32(0x11022670u); f_11022c20();
  /* 11022670 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022673 jmp 0x11022b68 */
  goto L_11022b68;
L_11022678:;
  /* 11022678 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102267b push ecx */
  push32((uint32_t)(ECX));
  /* 1102267c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102267f push edx */
  push32((uint32_t)(EDX));
  /* 11022680 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022683 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11022686 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022689 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1102268d push eax */
  push32((uint32_t)(EAX));
  /* 1102268e call 0x11022c20 */
  push32(0x11022693u); f_11022c20();
  /* 11022693 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022696 jmp 0x11022b68 */
  goto L_11022b68;
L_1102269b:;
  /* 1102269b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102269e push ecx */
  push32((uint32_t)(ECX));
  /* 1102269f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110226a2 push edx */
  push32((uint32_t)(EDX));
  /* 110226a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110226a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 110226a9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110226ac mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 110226b0 push eax */
  push32((uint32_t)(EAX));
  /* 110226b1 call 0x11022c20 */
  push32(0x110226b6u); f_11022c20();
  /* 110226b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110226b9 jmp 0x11022b68 */
  goto L_11022b68;
L_110226be:;
  /* 110226be cmp dword ptr [0x11040938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110226c5 je 0x11022746 */
  if (C.zf) goto L_11022746;
  /* 110226c7 mov dword ptr [0x11040938], 0 */
  w32((uint32_t)(0x11040938), (0x0u));
  /* 110226d1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110226d4 push ecx */
  push32((uint32_t)(ECX));
  /* 110226d5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110226d8 push edx */
  push32((uint32_t)(EDX));
  /* 110226d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110226dc push eax */
  push32((uint32_t)(EAX));
  /* 110226dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110226e0 push ecx */
  push32((uint32_t)(ECX));
  /* 110226e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110226e4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 110226ea push eax */
  push32((uint32_t)(EAX));
  /* 110226eb call 0x11022dd0 */
  push32(0x110226f0u); f_11022dd0();
  /* 110226f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110226f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110226f6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110226f9 jne 0x11022700 */
  if (!C.zf) goto L_11022700;
  /* 110226fb jmp 0x11022b68 */
  goto L_11022b68;
L_11022700:;
  /* 11022700 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022703 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11022705 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11022708 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102270b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1102270d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022710 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022713 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11022715 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022718 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1102271a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1102271d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022720 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11022722 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022725 push ecx */
  push32((uint32_t)(ECX));
  /* 11022726 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022729 push edx */
  push32((uint32_t)(EDX));
  /* 1102272a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102272d push eax */
  push32((uint32_t)(EAX));
  /* 1102272e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022731 push ecx */
  push32((uint32_t)(ECX));
  /* 11022732 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022735 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1102273b push eax */
  push32((uint32_t)(EAX));
  /* 1102273c call 0x11022dd0 */
  push32(0x11022741u); f_11022dd0();
  /* 11022741 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022744 jmp 0x110227b9 */
  goto L_110227b9;
L_11022746:;
  /* 11022746 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022749 push ecx */
  push32((uint32_t)(ECX));
  /* 1102274a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102274d push edx */
  push32((uint32_t)(EDX));
  /* 1102274e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022751 push eax */
  push32((uint32_t)(EAX));
  /* 11022752 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022755 push ecx */
  push32((uint32_t)(ECX));
  /* 11022756 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022759 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1102275f push eax */
  push32((uint32_t)(EAX));
  /* 11022760 call 0x11022dd0 */
  push32(0x11022765u); f_11022dd0();
  /* 11022765 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022768 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102276b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102276e jne 0x11022775 */
  if (!C.zf) goto L_11022775;
  /* 11022770 jmp 0x11022b68 */
  goto L_11022b68;
L_11022775:;
  /* 11022775 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022778 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1102277a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1102277d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022780 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11022782 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022785 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022788 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1102278a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102278d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1102278f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022792 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022795 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11022797 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1102279a push ecx */
  push32((uint32_t)(ECX));
  /* 1102279b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102279e push edx */
  push32((uint32_t)(EDX));
  /* 1102279f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110227a2 push eax */
  push32((uint32_t)(EAX));
  /* 110227a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110227a6 push ecx */
  push32((uint32_t)(ECX));
  /* 110227a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110227aa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 110227b0 push eax */
  push32((uint32_t)(EAX));
  /* 110227b1 call 0x11022dd0 */
  push32(0x110227b6u); f_11022dd0();
  /* 110227b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110227b9:;
  /* 110227b9 jmp 0x11022b68 */
  goto L_11022b68;
L_110227be:;
  /* 110227be mov ecx, dword ptr [0x11040938] */
  ECX = (r32((uint32_t)(0x11040938)));
  /* 110227c4 mov dword ptr [0x11040948], ecx */
  w32((uint32_t)(0x11040948), (ECX));
  /* 110227ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110227cd push edx */
  push32((uint32_t)(EDX));
  /* 110227ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110227d1 push eax */
  push32((uint32_t)(EAX));
  /* 110227d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 110227d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110227d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 110227da push edx */
  push32((uint32_t)(EDX));
  /* 110227db call 0x11022c70 */
  push32(0x110227e0u); f_11022c70();
  /* 110227e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110227e3 jmp 0x11022b68 */
  goto L_11022b68;
L_110227e8:;
  /* 110227e8 mov eax, dword ptr [0x11040938] */
  EAX = (r32((uint32_t)(0x11040938)));
  /* 110227ed mov dword ptr [0x11040948], eax */
  w32((uint32_t)(0x11040948), (EAX));
  /* 110227f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110227f5 push ecx */
  push32((uint32_t)(ECX));
  /* 110227f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110227f9 push edx */
  push32((uint32_t)(EDX));
  /* 110227fa push 2 */
  push32((uint32_t)(0x2u));
  /* 110227fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110227ff mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11022802 push ecx */
  push32((uint32_t)(ECX));
  /* 11022803 call 0x11022c70 */
  push32(0x11022808u); f_11022c70();
  /* 11022808 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102280b jmp 0x11022b68 */
  goto L_11022b68;
L_11022810:;
  /* 11022810 mov edx, dword ptr [0x11040938] */
  EDX = (r32((uint32_t)(0x11040938)));
  /* 11022816 mov dword ptr [0x11040948], edx */
  w32((uint32_t)(0x11040948), (EDX));
  /* 1102281c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1102281f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11022822 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11022823 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11022828 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1102282a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1102282d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022831 jne 0x1102283a */
  if (!C.zf) goto L_1102283a;
  /* 11022833 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1102283a:;
  /* 1102283a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102283d push edx */
  push32((uint32_t)(EDX));
  /* 1102283e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022841 push eax */
  push32((uint32_t)(EAX));
  /* 11022842 push 2 */
  push32((uint32_t)(0x2u));
  /* 11022844 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022847 push ecx */
  push32((uint32_t)(ECX));
  /* 11022848 call 0x11022c70 */
  push32(0x1102284du); f_11022c70();
  /* 1102284d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022850 jmp 0x11022b68 */
  goto L_11022b68;
L_11022855:;
  /* 11022855 mov edx, dword ptr [0x11040938] */
  EDX = (r32((uint32_t)(0x11040938)));
  /* 1102285b mov dword ptr [0x11040948], edx */
  w32((uint32_t)(0x11040948), (EDX));
  /* 11022861 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022864 push eax */
  push32((uint32_t)(EAX));
  /* 11022865 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022868 push ecx */
  push32((uint32_t)(ECX));
  /* 11022869 push 3 */
  push32((uint32_t)(0x3u));
  /* 1102286b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1102286e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11022871 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022874 push eax */
  push32((uint32_t)(EAX));
  /* 11022875 call 0x11022c70 */
  push32(0x1102287au); f_11022c70();
  /* 1102287a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102287d jmp 0x11022b68 */
  goto L_11022b68;
L_11022882:;
  /* 11022882 mov ecx, dword ptr [0x11040938] */
  ECX = (r32((uint32_t)(0x11040938)));
  /* 11022888 mov dword ptr [0x11040948], ecx */
  w32((uint32_t)(0x11040948), (ECX));
  /* 1102288e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022891 push edx */
  push32((uint32_t)(EDX));
  /* 11022892 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022895 push eax */
  push32((uint32_t)(EAX));
  /* 11022896 push 2 */
  push32((uint32_t)(0x2u));
  /* 11022898 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1102289b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1102289e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110228a1 push edx */
  push32((uint32_t)(EDX));
  /* 110228a2 call 0x11022c70 */
  push32(0x110228a7u); f_11022c70();
  /* 110228a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110228aa jmp 0x11022b68 */
  goto L_11022b68;
L_110228af:;
  /* 110228af mov eax, dword ptr [0x11040938] */
  EAX = (r32((uint32_t)(0x11040938)));
  /* 110228b4 mov dword ptr [0x11040948], eax */
  w32((uint32_t)(0x11040948), (EAX));
  /* 110228b9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110228bc push ecx */
  push32((uint32_t)(ECX));
  /* 110228bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110228c0 push edx */
  push32((uint32_t)(EDX));
  /* 110228c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 110228c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110228c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 110228c9 push ecx */
  push32((uint32_t)(ECX));
  /* 110228ca call 0x11022c70 */
  push32(0x110228cfu); f_11022c70();
  /* 110228cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110228d2 jmp 0x11022b68 */
  goto L_11022b68;
L_110228d7:;
  /* 110228d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110228da cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110228de jg 0x110228fc */
  if ((!C.zf&&C.sf==C.of)) goto L_110228fc;
  /* 110228e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110228e3 push eax */
  push32((uint32_t)(EAX));
  /* 110228e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110228e7 push ecx */
  push32((uint32_t)(ECX));
  /* 110228e8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110228eb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 110228f1 push eax */
  push32((uint32_t)(EAX));
  /* 110228f2 call 0x11022c20 */
  push32(0x110228f7u); f_11022c20();
  /* 110228f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110228fa jmp 0x11022916 */
  goto L_11022916;
L_110228fc:;
  /* 110228fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110228ff push ecx */
  push32((uint32_t)(ECX));
  /* 11022900 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022903 push edx */
  push32((uint32_t)(EDX));
  /* 11022904 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022907 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1102290d push ecx */
  push32((uint32_t)(ECX));
  /* 1102290e call 0x11022c20 */
  push32(0x11022913u); f_11022c20();
  /* 11022913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11022916:;
  /* 11022916 jmp 0x11022b68 */
  goto L_11022b68;
L_1102291b:;
  /* 1102291b mov edx, dword ptr [0x11040938] */
  EDX = (r32((uint32_t)(0x11040938)));
  /* 11022921 mov dword ptr [0x11040948], edx */
  w32((uint32_t)(0x11040948), (EDX));
  /* 11022927 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102292a push eax */
  push32((uint32_t)(EAX));
  /* 1102292b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102292e push ecx */
  push32((uint32_t)(ECX));
  /* 1102292f push 2 */
  push32((uint32_t)(0x2u));
  /* 11022931 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022934 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11022936 push eax */
  push32((uint32_t)(EAX));
  /* 11022937 call 0x11022c70 */
  push32(0x1102293cu); f_11022c70();
  /* 1102293c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102293f jmp 0x11022b68 */
  goto L_11022b68;
L_11022944:;
  /* 11022944 mov ecx, dword ptr [0x11040938] */
  ECX = (r32((uint32_t)(0x11040938)));
  /* 1102294a mov dword ptr [0x11040948], ecx */
  w32((uint32_t)(0x11040948), (ECX));
  /* 11022950 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022953 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11022956 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11022959 jmp 0x110229ad */
  goto L_110229ad;
L_1102295b:;
  /* 1102295b mov ecx, dword ptr [0x11040938] */
  ECX = (r32((uint32_t)(0x11040938)));
  /* 11022961 mov dword ptr [0x11040948], ecx */
  w32((uint32_t)(0x11040948), (ECX));
  /* 11022967 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102296a push edx */
  push32((uint32_t)(EDX));
  /* 1102296b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102296e push eax */
  push32((uint32_t)(EAX));
  /* 1102296f push 1 */
  push32((uint32_t)(0x1u));
  /* 11022971 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022974 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11022977 push edx */
  push32((uint32_t)(EDX));
  /* 11022978 call 0x11022c70 */
  push32(0x1102297du); f_11022c70();
  /* 1102297d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022980 jmp 0x11022b68 */
  goto L_11022b68;
L_11022985:;
  /* 11022985 mov eax, dword ptr [0x11040938] */
  EAX = (r32((uint32_t)(0x11040938)));
  /* 1102298a mov dword ptr [0x11040948], eax */
  w32((uint32_t)(0x11040948), (EAX));
  /* 1102298f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022992 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022996 jne 0x110229a1 */
  if (!C.zf) goto L_110229a1;
  /* 11022998 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1102299f jmp 0x110229ad */
  goto L_110229ad;
L_110229a1:;
  /* 110229a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110229a4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 110229a7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110229aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_110229ad:;
  /* 110229ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110229b0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 110229b3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110229b6 jge 0x110229c1 */
  if ((C.sf==C.of)) goto L_110229c1;
  /* 110229b8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 110229bf jmp 0x110229ee */
  goto L_110229ee;
L_110229c1:;
  /* 110229c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110229c4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 110229c7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110229c8 mov ecx, 7 */
  ECX = (0x7u);
  /* 110229cd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110229cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110229d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110229d5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 110229d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110229d9 mov ecx, 7 */
  ECX = (0x7u);
  /* 110229de idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110229e0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110229e3 jl 0x110229ee */
  if ((C.sf!=C.of)) goto L_110229ee;
  /* 110229e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110229e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110229eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_110229ee:;
  /* 110229ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110229f1 push eax */
  push32((uint32_t)(EAX));
  /* 110229f2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110229f5 push ecx */
  push32((uint32_t)(ECX));
  /* 110229f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 110229f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110229fb push edx */
  push32((uint32_t)(EDX));
  /* 110229fc call 0x11022c70 */
  push32(0x11022a01u); f_11022c70();
  /* 11022a01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022a04 jmp 0x11022b68 */
  goto L_11022b68;
L_11022a09:;
  /* 11022a09 cmp dword ptr [0x11040938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022a10 je 0x11022a40 */
  if (C.zf) goto L_11022a40;
  /* 11022a12 mov dword ptr [0x11040938], 0 */
  w32((uint32_t)(0x11040938), (0x0u));
  /* 11022a1c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022a1f push eax */
  push32((uint32_t)(EAX));
  /* 11022a20 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022a23 push ecx */
  push32((uint32_t)(ECX));
  /* 11022a24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022a27 push edx */
  push32((uint32_t)(EDX));
  /* 11022a28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022a2b push eax */
  push32((uint32_t)(EAX));
  /* 11022a2c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022a2f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11022a35 push edx */
  push32((uint32_t)(EDX));
  /* 11022a36 call 0x11022dd0 */
  push32(0x11022a3bu); f_11022dd0();
  /* 11022a3b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022a3e jmp 0x11022a62 */
  goto L_11022a62;
L_11022a40:;
  /* 11022a40 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022a43 push eax */
  push32((uint32_t)(EAX));
  /* 11022a44 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022a47 push ecx */
  push32((uint32_t)(ECX));
  /* 11022a48 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022a4b push edx */
  push32((uint32_t)(EDX));
  /* 11022a4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022a4f push eax */
  push32((uint32_t)(EAX));
  /* 11022a50 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022a53 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11022a59 push edx */
  push32((uint32_t)(EDX));
  /* 11022a5a call 0x11022dd0 */
  push32(0x11022a5fu); f_11022dd0();
  /* 11022a5f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11022a62:;
  /* 11022a62 jmp 0x11022b68 */
  goto L_11022b68;
L_11022a67:;
  /* 11022a67 mov dword ptr [0x11040938], 0 */
  w32((uint32_t)(0x11040938), (0x0u));
  /* 11022a71 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022a74 push eax */
  push32((uint32_t)(EAX));
  /* 11022a75 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022a78 push ecx */
  push32((uint32_t)(ECX));
  /* 11022a79 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022a7c push edx */
  push32((uint32_t)(EDX));
  /* 11022a7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022a80 push eax */
  push32((uint32_t)(EAX));
  /* 11022a81 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022a84 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11022a8a push edx */
  push32((uint32_t)(EDX));
  /* 11022a8b call 0x11022dd0 */
  push32(0x11022a90u); f_11022dd0();
  /* 11022a90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022a93 jmp 0x11022b68 */
  goto L_11022b68;
L_11022a98:;
  /* 11022a98 mov eax, dword ptr [0x11040938] */
  EAX = (r32((uint32_t)(0x11040938)));
  /* 11022a9d mov dword ptr [0x11040948], eax */
  w32((uint32_t)(0x11040948), (EAX));
  /* 11022aa2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022aa5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11022aa8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11022aa9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11022aae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11022ab0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11022ab3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022ab6 push edx */
  push32((uint32_t)(EDX));
  /* 11022ab7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022aba push eax */
  push32((uint32_t)(EAX));
  /* 11022abb push 2 */
  push32((uint32_t)(0x2u));
  /* 11022abd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022ac0 push ecx */
  push32((uint32_t)(ECX));
  /* 11022ac1 call 0x11022c70 */
  push32(0x11022ac6u); f_11022c70();
  /* 11022ac6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022ac9 jmp 0x11022b68 */
  goto L_11022b68;
L_11022ace:;
  /* 11022ace mov edx, dword ptr [0x11040938] */
  EDX = (r32((uint32_t)(0x11040938)));
  /* 11022ad4 mov dword ptr [0x11040948], edx */
  w32((uint32_t)(0x11040948), (EDX));
  /* 11022ada mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022add mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11022ae0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11022ae1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11022ae6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11022ae8 mov ecx, eax */
  ECX = (EAX);
  /* 11022aea add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022aed imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11022af0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022af3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11022af6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11022af7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11022afc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11022afe add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022b00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11022b03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022b06 push eax */
  push32((uint32_t)(EAX));
  /* 11022b07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022b0a push ecx */
  push32((uint32_t)(ECX));
  /* 11022b0b push 4 */
  push32((uint32_t)(0x4u));
  /* 11022b0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022b10 push edx */
  push32((uint32_t)(EDX));
  /* 11022b11 call 0x11022c70 */
  push32(0x11022b16u); f_11022c70();
  /* 11022b16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022b19 jmp 0x11022b68 */
  goto L_11022b68;
L_11022b1b:;
  /* 11022b1b call 0x11023c30 */
  push32(0x11022b20u); f_11023c30();
  /* 11022b20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022b23 push eax */
  push32((uint32_t)(EAX));
  /* 11022b24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022b27 push ecx */
  push32((uint32_t)(ECX));
  /* 11022b28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022b2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11022b2d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022b31 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11022b34 mov ecx, dword ptr [eax*4 + 0x1103fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1103fe1c)));
  /* 11022b3b push ecx */
  push32((uint32_t)(ECX));
  /* 11022b3c call 0x11022c20 */
  push32(0x11022b41u); f_11022c20();
  /* 11022b41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022b44 jmp 0x11022b68 */
  goto L_11022b68;
L_11022b46:;
  /* 11022b46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022b49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11022b4b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11022b4e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022b51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11022b53 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022b56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022b59 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11022b5b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022b5e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11022b60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022b63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022b66 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11022b68:;
  /* 11022b68 pop esi */
  ESI = (pop32());
  /* 11022b69 mov esp, ebp */
  ESP = (EBP);
  /* 11022b6b pop ebp */
  EBP = (pop32());
  /* 11022b6c ret  */
  ESPCHK(0x11022600u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11022c20 (72 bytes, 30 insns) */
void f_11022c20(void) {
  FTRACE(0x11022c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11022c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11022c21 mov ebp, esp */
  EBP = (ESP);
L_11022c23:;
  /* 11022c23 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022c26 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022c29 je 0x11022c66 */
  if (C.zf) goto L_11022c66;
  /* 11022c2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022c2e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11022c31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11022c33 je 0x11022c66 */
  if (C.zf) goto L_11022c66;
  /* 11022c35 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022c38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11022c3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022c3d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11022c3f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11022c41 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022c44 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11022c46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022c49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022c4c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11022c4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022c51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022c54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11022c57 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022c5a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11022c5c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022c5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022c62 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11022c64 jmp 0x11022c23 */
  goto L_11022c23;
L_11022c66:;
  /* 11022c66 pop ebp */
  EBP = (pop32());
  /* 11022c67 ret  */
  ESPCHK(0x11022c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c70 @ 0x11022c70 (173 bytes, 64 insns) */
void f_11022c70(void) {
  FTRACE(0x11022c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11022c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11022c71 mov ebp, esp */
  EBP = (ESP);
  /* 11022c73 push ecx */
  push32((uint32_t)(ECX));
  /* 11022c74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11022c7b cmp dword ptr [0x11040948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022c82 je 0x11022c9a */
  if (C.zf) goto L_11022c9a;
  /* 11022c84 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022c87 push eax */
  push32((uint32_t)(EAX));
  /* 11022c88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022c8b push ecx */
  push32((uint32_t)(ECX));
  /* 11022c8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022c8f push edx */
  push32((uint32_t)(EDX));
  /* 11022c90 call 0x11022d20 */
  push32(0x11022c95u); f_11022d20();
  /* 11022c95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022c98 jmp 0x11022d19 */
  goto L_11022d19;
L_11022c9a:;
  /* 11022c9a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022c9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022ca0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022ca2 jae 0x11022d10 */
  if (!C.cf) goto L_11022d10;
  /* 11022ca4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022ca7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022caa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11022cad jmp 0x11022cb8 */
  goto L_11022cb8;
L_11022caf:;
  /* 11022caf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022cb2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022cb5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11022cb8:;
  /* 11022cb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022cbb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022cbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11022cc0 je 0x11022cf4 */
  if (C.zf) goto L_11022cf4;
  /* 11022cc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022cc5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11022cc6 mov ecx, 0xa */
  ECX = (0xau);
  /* 11022ccb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11022ccd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022cd0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022cd3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11022cd5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022cd8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11022cdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022cde cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11022cdf mov ecx, 0xa */
  ECX = (0xau);
  /* 11022ce4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11022ce6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11022ce9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022cec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022cef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11022cf2 jmp 0x11022caf */
  goto L_11022caf;
L_11022cf4:;
  /* 11022cf4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022cf7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11022cf9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022cfc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022cff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11022d01 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022d04 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11022d06 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022d09 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022d0c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11022d0e jmp 0x11022d19 */
  goto L_11022d19;
L_11022d10:;
  /* 11022d10 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022d13 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11022d19:;
  /* 11022d19 mov esp, ebp */
  ESP = (EBP);
  /* 11022d1b pop ebp */
  EBP = (pop32());
  /* 11022d1c ret  */
  ESPCHK(0x11022c70u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11022d20 (172 bytes, 65 insns) */
void f_11022d20(void) {
  FTRACE(0x11022d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11022d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11022d21 mov ebp, esp */
  EBP = (ESP);
  /* 11022d23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022d26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022d29 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11022d2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11022d2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022d31 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022d34 jbe 0x11022d7b */
  if ((C.cf||C.zf)) goto L_11022d7b;
L_11022d36:;
  /* 11022d36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022d39 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11022d3a mov ecx, 0xa */
  ECX = (0xau);
  /* 11022d3f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11022d41 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022d44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022d47 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11022d49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022d4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022d4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11022d52 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022d55 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11022d57 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022d5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022d5d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11022d5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022d62 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11022d63 mov ecx, 0xa */
  ECX = (0xau);
  /* 11022d68 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11022d6a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11022d6d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022d71 jle 0x11022d7b */
  if ((C.zf||C.sf!=C.of)) goto L_11022d7b;
  /* 11022d73 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11022d76 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022d79 ja 0x11022d36 */
  if ((!C.cf&&!C.zf)) goto L_11022d36;
L_11022d7b:;
  /* 11022d7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022d7e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11022d80 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11022d83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022d86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022d89 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11022d8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022d8e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022d91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11022d94:;
  /* 11022d94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022d97 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11022d99 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11022d9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022d9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11022da2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11022da4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11022da6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022da9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022dac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11022daf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11022db2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11022db5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11022db7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11022dba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022dbd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11022dc0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11022dc3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022dc6 jb 0x11022d94 */
  if (C.cf) goto L_11022d94;
  /* 11022dc8 mov esp, ebp */
  ESP = (EBP);
  /* 11022dca pop ebp */
  EBP = (pop32());
  /* 11022dcb ret  */
  ESPCHK(0x11022d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012dd0 @ 0x11022dd0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11022dd0(void) {
  FTRACE(0x11022dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11022dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11022dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11022dd3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11022dd6:;
  /* 11022dd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022dd9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11022ddc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11022dde je 0x1102324c */
  if (C.zf) goto L_1102324c;
  /* 11022de4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022de7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022dea je 0x1102324c */
  if (C.zf) goto L_1102324c;
  /* 11022df0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11022df4 mov dword ptr [0x11040948], 0 */
  w32((uint32_t)(0x11040948), (0x0u));
  /* 11022dfe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11022e05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022e08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11022e0b jmp 0x11022e16 */
  goto L_11022e16;
L_11022e0d:;
  /* 11022e0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022e10 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022e13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11022e16:;
  /* 11022e16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022e19 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11022e1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022e1f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11022e22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022e25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022e28 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11022e2b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022e2d jne 0x11022e31 */
  if (!C.zf) goto L_11022e31;
  /* 11022e2f jmp 0x11022e0d */
  goto L_11022e0d;
L_11022e31:;
  /* 11022e31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022e34 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022e37 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11022e3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022e3d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11022e40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11022e43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11022e46 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022e49 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11022e4c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022e50 ja 0x110231a0 */
  if ((!C.cf&&!C.zf)) goto L_110231a0;
  /* 11022e56 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11022e59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11022e5b mov al, byte ptr [ecx + 0x1102327c] */
  AL = (r8((uint32_t)(ECX + 0x1102327c)));
  /* 11022e61 jmp dword ptr [eax*4 + 0x11023250] */
  switch (EAX) {
    case 0: goto L_110230bf;
    case 1: goto L_11022fa3;
    case 2: goto L_11022f2e;
    case 3: goto L_11022e68;
    case 4: goto L_11022ea6;
    case 5: goto L_11022f07;
    case 6: goto L_11022f55;
    case 7: goto L_11022f7c;
    case 8: goto L_11022fea;
    case 9: goto L_11022ee4;
    case 10: goto L_110231a0;
    default: x86_unimpl("switch@0x11022e61 out of table"); return;
  }
L_11022e68:;
  /* 11022e68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022e6b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11022e6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11022e71 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022e74 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11022e77 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022e7b ja 0x11022ea1 */
  if ((!C.cf&&!C.zf)) goto L_11022ea1;
  /* 11022e7d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11022e80 jmp dword ptr [ecx*4 + 0x110232cf] */
  switch (ECX) {
    case 0: goto L_11022e87;
    case 1: goto L_11022e91;
    case 2: goto L_11022e97;
    case 3: goto L_11022e9d;
    case 4: goto L_11022ec5;
    case 5: goto L_11022ecf;
    case 6: goto L_11022ed5;
    case 7: goto L_11022edb;
    default: x86_unimpl("switch@0x11022e80 out of table"); return;
  }
L_11022e87:;
  /* 11022e87 mov dword ptr [0x11040948], 1 */
  w32((uint32_t)(0x11040948), (0x1u));
L_11022e91:;
  /* 11022e91 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11022e95 jmp 0x11022ea1 */
  goto L_11022ea1;
L_11022e97:;
  /* 11022e97 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11022e9b jmp 0x11022ea1 */
  goto L_11022ea1;
L_11022e9d:;
  /* 11022e9d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11022ea1:;
  /* 11022ea1 jmp 0x110231a0 */
  goto L_110231a0;
L_11022ea6:;
  /* 11022ea6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022ea9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11022eac mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11022eaf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11022eb2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11022eb5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022eb9 ja 0x11022edf */
  if ((!C.cf&&!C.zf)) goto L_11022edf;
  /* 11022ebb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11022ebe jmp dword ptr [ecx*4 + 0x110232df] */
  switch (ECX) {
    case 0: goto L_11022ec5;
    case 1: goto L_11022ecf;
    case 2: goto L_11022ed5;
    case 3: goto L_11022edb;
    default: x86_unimpl("switch@0x11022ebe out of table"); return;
  }
L_11022ec5:;
  /* 11022ec5 mov dword ptr [0x11040948], 1 */
  w32((uint32_t)(0x11040948), (0x1u));
L_11022ecf:;
  /* 11022ecf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11022ed3 jmp 0x11022edf */
  goto L_11022edf;
L_11022ed5:;
  /* 11022ed5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11022ed9 jmp 0x11022edf */
  goto L_11022edf;
L_11022edb:;
  /* 11022edb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11022edf:;
  /* 11022edf jmp 0x110231a0 */
  goto L_110231a0;
L_11022ee4:;
  /* 11022ee4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022ee7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11022eea cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022eee je 0x11022ef8 */
  if (C.zf) goto L_11022ef8;
  /* 11022ef0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022ef4 je 0x11022efe */
  if (C.zf) goto L_11022efe;
  /* 11022ef6 jmp 0x11022f02 */
  goto L_11022f02;
L_11022ef8:;
  /* 11022ef8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11022efc jmp 0x11022f02 */
  goto L_11022f02;
L_11022efe:;
  /* 11022efe mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11022f02:;
  /* 11022f02 jmp 0x110231a0 */
  goto L_110231a0;
L_11022f07:;
  /* 11022f07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022f0a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11022f0d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022f11 je 0x11022f1b */
  if (C.zf) goto L_11022f1b;
  /* 11022f13 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022f17 je 0x11022f25 */
  if (C.zf) goto L_11022f25;
  /* 11022f19 jmp 0x11022f29 */
  goto L_11022f29;
L_11022f1b:;
  /* 11022f1b mov dword ptr [0x11040948], 1 */
  w32((uint32_t)(0x11040948), (0x1u));
L_11022f25:;
  /* 11022f25 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11022f29:;
  /* 11022f29 jmp 0x110231a0 */
  goto L_110231a0;
L_11022f2e:;
  /* 11022f2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022f31 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11022f34 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022f38 je 0x11022f42 */
  if (C.zf) goto L_11022f42;
  /* 11022f3a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022f3e je 0x11022f4c */
  if (C.zf) goto L_11022f4c;
  /* 11022f40 jmp 0x11022f50 */
  goto L_11022f50;
L_11022f42:;
  /* 11022f42 mov dword ptr [0x11040948], 1 */
  w32((uint32_t)(0x11040948), (0x1u));
L_11022f4c:;
  /* 11022f4c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11022f50:;
  /* 11022f50 jmp 0x110231a0 */
  goto L_110231a0;
L_11022f55:;
  /* 11022f55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022f58 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11022f5b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022f5f je 0x11022f69 */
  if (C.zf) goto L_11022f69;
  /* 11022f61 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022f65 je 0x11022f73 */
  if (C.zf) goto L_11022f73;
  /* 11022f67 jmp 0x11022f77 */
  goto L_11022f77;
L_11022f69:;
  /* 11022f69 mov dword ptr [0x11040948], 1 */
  w32((uint32_t)(0x11040948), (0x1u));
L_11022f73:;
  /* 11022f73 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11022f77:;
  /* 11022f77 jmp 0x110231a0 */
  goto L_110231a0;
L_11022f7c:;
  /* 11022f7c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022f7f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11022f82 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022f86 je 0x11022f90 */
  if (C.zf) goto L_11022f90;
  /* 11022f88 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022f8c je 0x11022f9a */
  if (C.zf) goto L_11022f9a;
  /* 11022f8e jmp 0x11022f9e */
  goto L_11022f9e;
L_11022f90:;
  /* 11022f90 mov dword ptr [0x11040948], 1 */
  w32((uint32_t)(0x11040948), (0x1u));
L_11022f9a:;
  /* 11022f9a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11022f9e:;
  /* 11022f9e jmp 0x110231a0 */
  goto L_110231a0;
L_11022fa3:;
  /* 11022fa3 push 0x1103caa4 */
  push32((uint32_t)(0x1103caa4u));
  /* 11022fa8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022fab push ecx */
  push32((uint32_t)(ECX));
  /* 11022fac call 0x11023800 */
  push32(0x11022fb1u); f_11023800();
  /* 11022fb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11022fb6 jne 0x11022fc3 */
  if (!C.zf) goto L_11022fc3;
  /* 11022fb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022fbb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022fbe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11022fc1 jmp 0x11022fe1 */
  goto L_11022fe1;
L_11022fc3:;
  /* 11022fc3 push 0x1103caa0 */
  push32((uint32_t)(0x1103caa0u));
  /* 11022fc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022fcb push eax */
  push32((uint32_t)(EAX));
  /* 11022fcc call 0x11023800 */
  push32(0x11022fd1u); f_11023800();
  /* 11022fd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022fd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11022fd6 jne 0x11022fe1 */
  if (!C.zf) goto L_11022fe1;
  /* 11022fd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022fdb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022fde mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11022fe1:;
  /* 11022fe1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11022fe5 jmp 0x110231a0 */
  goto L_110231a0;
L_11022fea:;
  /* 11022fea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022fed cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022ff1 jg 0x11023001 */
  if ((!C.zf&&C.sf==C.of)) goto L_11023001;
  /* 11022ff3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11022ff6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11022ffc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11022fff jmp 0x1102300d */
  goto L_1102300d;
L_11023001:;
  /* 11023001 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11023004 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 1102300a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1102300d:;
  /* 1102300d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023011 jle 0x110230b4 */
  if ((C.zf||C.sf!=C.of)) goto L_110230b4;
  /* 11023017 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102301a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102301d jbe 0x110230b4 */
  if ((C.cf||C.zf)) goto L_110230b4;
  /* 11023023 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11023026 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11023028 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1102302a mov ecx, dword ptr [0x1103ec98] */
  ECX = (r32((uint32_t)(0x1103ec98)));
  /* 11023030 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11023032 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11023036 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1102303c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1102303e je 0x11023077 */
  if (C.zf) goto L_11023077;
  /* 11023040 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11023043 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023046 jbe 0x11023077 */
  if ((C.cf||C.zf)) goto L_11023077;
  /* 11023048 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102304b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1102304d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11023050 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11023052 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11023054 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11023057 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11023059 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102305c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102305f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11023061 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11023064 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023067 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1102306a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102306d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1102306f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11023072 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11023075 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11023077:;
  /* 11023077 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102307a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1102307c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1102307f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11023081 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11023083 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11023086 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11023088 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102308b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102308e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11023090 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11023093 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023096 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11023099 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102309c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1102309e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110230a1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110230a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110230a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110230a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110230ac mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 110230af jmp 0x1102300d */
  goto L_1102300d;
L_110230b4:;
  /* 110230b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110230b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110230ba jmp 0x11022dd6 */
  goto L_11022dd6;
L_110230bf:;
  /* 110230bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110230c2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 110230c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110230c7 je 0x11023192 */
  if (C.zf) goto L_11023192;
  /* 110230cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110230d0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110230d3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_110230d6:;
  /* 110230d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110230d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110230dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110230de je 0x11023190 */
  if (C.zf) goto L_11023190;
  /* 110230e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110230e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110230ea je 0x11023190 */
  if (C.zf) goto L_11023190;
  /* 110230f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110230f3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110230f6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110230f9 jne 0x11023109 */
  if (!C.zf) goto L_11023109;
  /* 110230fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110230fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023101 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11023104 jmp 0x11023190 */
  goto L_11023190;
L_11023109:;
  /* 11023109 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102310c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1102310e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11023110 mov edx, dword ptr [0x1103ec98] */
  EDX = (r32((uint32_t)(0x1103ec98)));
  /* 11023116 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11023118 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1102311c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11023121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11023123 je 0x1102315c */
  if (C.zf) goto L_1102315c;
  /* 11023125 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11023128 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102312b jbe 0x1102315c */
  if ((C.cf||C.zf)) goto L_1102315c;
  /* 1102312d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11023130 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11023132 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023135 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11023137 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11023139 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102313c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1102313e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023141 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11023144 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11023146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023149 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102314c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1102314f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11023152 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11023154 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11023157 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102315a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1102315c:;
  /* 1102315c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102315f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11023161 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023164 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11023166 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11023168 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102316b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1102316d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023170 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11023173 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11023175 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023178 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102317b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1102317e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11023181 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11023183 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11023186 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11023189 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1102318b jmp 0x110230d6 */
  goto L_110230d6;
L_11023190:;
  /* 11023190 jmp 0x1102319b */
  goto L_1102319b;
L_11023192:;
  /* 11023192 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023195 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023198 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1102319b:;
  /* 1102319b jmp 0x11022dd6 */
  goto L_11022dd6;
L_110231a0:;
  /* 110231a0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 110231a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110231a6 je 0x110231cc */
  if (C.zf) goto L_110231cc;
  /* 110231a8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110231ab push edx */
  push32((uint32_t)(EDX));
  /* 110231ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110231af push eax */
  push32((uint32_t)(EAX));
  /* 110231b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110231b3 push ecx */
  push32((uint32_t)(ECX));
  /* 110231b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110231b7 push edx */
  push32((uint32_t)(EDX));
  /* 110231b8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 110231bb push eax */
  push32((uint32_t)(EAX));
  /* 110231bc call 0x11022600 */
  push32(0x110231c1u); f_11022600();
  /* 110231c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110231c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110231c7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 110231ca jmp 0x11023247 */
  goto L_11023247;
L_110231cc:;
  /* 110231cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110231cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110231d1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110231d3 mov ecx, dword ptr [0x1103ec98] */
  ECX = (r32((uint32_t)(0x1103ec98)));
  /* 110231d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110231db mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 110231df and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 110231e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110231e7 je 0x11023218 */
  if (C.zf) goto L_11023218;
  /* 110231e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110231ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110231ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110231f1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110231f3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 110231f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110231f8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110231fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110231fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11023200 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11023202 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023205 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023208 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1102320b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102320e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11023210 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11023213 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11023216 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11023218:;
  /* 11023218 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102321b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1102321d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023220 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11023222 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11023224 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11023227 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11023229 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102322c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102322f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11023231 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023234 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023237 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1102323a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102323d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1102323f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11023242 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11023245 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11023247:;
  /* 11023247 jmp 0x11022dd6 */
  goto L_11022dd6;
L_1102324c:;
  /* 1102324c mov esp, ebp */
  ESP = (EBP);
  /* 1102324e pop ebp */
  EBP = (pop32());
  /* 1102324f ret  */
  ESPCHK(0x11022dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100132f0 @ 0x110232f0 (650 bytes, 178 insns) */
void f_110232f0(void) {
  FTRACE(0x110232f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110232f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110232f1 mov ebp, esp */
  EBP = (ESP);
  /* 110232f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110232f9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110232fd jne 0x11023459 */
  if (!C.zf) goto L_11023459;
  /* 11023303 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11023306 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1102330c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11023312 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11023315 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1102331c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11023326 push 0 */
  push32((uint32_t)(0x0u));
  /* 11023328 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1102332e push edx */
  push32((uint32_t)(EDX));
  /* 1102332f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023332 push eax */
  push32((uint32_t)(EAX));
  /* 11023333 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11023336 push ecx */
  push32((uint32_t)(ECX));
  /* 11023337 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1102333a push edx */
  push32((uint32_t)(EDX));
  /* 1102333b call 0x11024710 */
  push32(0x11023340u); f_11024710();
  /* 11023340 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023343 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11023346 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102334a jne 0x110233df */
  if (!C.zf) goto L_110233df;
  /* 11023350 call dword ptr [0x110433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433b4))), 0x11023356u);
  /* 11023356 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023359 je 0x11023360 */
  if (C.zf) goto L_11023360;
  /* 1102335b jmp 0x1102343d */
  goto L_1102343d;
L_11023360:;
  /* 11023360 push 0 */
  push32((uint32_t)(0x0u));
  /* 11023362 push 0 */
  push32((uint32_t)(0x0u));
  /* 11023364 push 0 */
  push32((uint32_t)(0x0u));
  /* 11023366 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11023369 push eax */
  push32((uint32_t)(EAX));
  /* 1102336a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1102336d push ecx */
  push32((uint32_t)(ECX));
  /* 1102336e call 0x11024710 */
  push32(0x11023373u); f_11024710();
  /* 11023373 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023376 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1102337c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023383 jne 0x1102338a */
  if (!C.zf) goto L_1102338a;
  /* 11023385 jmp 0x1102343d */
  goto L_1102343d;
L_1102338a:;
  /* 1102338a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1102338c push 0x1103caac */
  push32((uint32_t)(0x1103caacu));
  /* 11023391 push 2 */
  push32((uint32_t)(0x2u));
  /* 11023393 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11023399 push edx */
  push32((uint32_t)(EDX));
  /* 1102339a call 0x11015130 */
  push32(0x1102339fu); f_11015130();
  /* 1102339f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110233a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110233a5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110233a9 jne 0x110233b0 */
  if (!C.zf) goto L_110233b0;
  /* 110233ab jmp 0x1102343d */
  goto L_1102343d;
L_110233b0:;
  /* 110233b0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 110233b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110233b9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 110233bf push eax */
  push32((uint32_t)(EAX));
  /* 110233c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110233c3 push ecx */
  push32((uint32_t)(ECX));
  /* 110233c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110233c7 push edx */
  push32((uint32_t)(EDX));
  /* 110233c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110233cb push eax */
  push32((uint32_t)(EAX));
  /* 110233cc call 0x11024710 */
  push32(0x110233d1u); f_11024710();
  /* 110233d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110233d4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110233d7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110233db jne 0x110233df */
  if (!C.zf) goto L_110233df;
  /* 110233dd jmp 0x1102343d */
  goto L_1102343d;
L_110233df:;
  /* 110233df push 0x63 */
  push32((uint32_t)(0x63u));
  /* 110233e1 push 0x1103caac */
  push32((uint32_t)(0x1103caacu));
  /* 110233e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 110233e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110233eb push ecx */
  push32((uint32_t)(ECX));
  /* 110233ec call 0x11015130 */
  push32(0x110233f1u); f_11015130();
  /* 110233f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110233f4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 110233fa mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 110233fc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11023402 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023405 jne 0x11023409 */
  if (!C.zf) goto L_11023409;
  /* 11023407 jmp 0x1102343d */
  goto L_1102343d;
L_11023409:;
  /* 11023409 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1102340c push ecx */
  push32((uint32_t)(ECX));
  /* 1102340d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023410 push edx */
  push32((uint32_t)(EDX));
  /* 11023411 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11023417 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11023419 push ecx */
  push32((uint32_t)(ECX));
  /* 1102341a call 0x11018950 */
  push32(0x1102341fu); f_11018950();
  /* 1102341f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023422 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023426 je 0x11023436 */
  if (C.zf) goto L_11023436;
  /* 11023428 push 2 */
  push32((uint32_t)(0x2u));
  /* 1102342a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1102342d push edx */
  push32((uint32_t)(EDX));
  /* 1102342e call 0x11015bc0 */
  push32(0x11023433u); f_11015bc0();
  /* 11023433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11023436:;
  /* 11023436 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11023438 jmp 0x11023576 */
  goto L_11023576;
L_1102343d:;
  /* 1102343d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023441 je 0x11023451 */
  if (C.zf) goto L_11023451;
  /* 11023443 push 2 */
  push32((uint32_t)(0x2u));
  /* 11023445 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023448 push eax */
  push32((uint32_t)(EAX));
  /* 11023449 call 0x11015bc0 */
  push32(0x1102344eu); f_11015bc0();
  /* 1102344e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11023451:;
  /* 11023451 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11023454 jmp 0x11023576 */
  goto L_11023576;
L_11023459:;
  /* 11023459 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102345d jne 0x11023573 */
  if (!C.zf) goto L_11023573;
  /* 11023463 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1102346d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11023470 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11023476 push 0 */
  push32((uint32_t)(0x0u));
  /* 11023478 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1102347e push edx */
  push32((uint32_t)(EDX));
  /* 1102347f push 0x11040860 */
  push32((uint32_t)(0x11040860u));
  /* 11023484 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11023487 push eax */
  push32((uint32_t)(EAX));
  /* 11023488 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1102348b push ecx */
  push32((uint32_t)(ECX));
  /* 1102348c call 0x11024570 */
  push32(0x11023491u); f_11024570();
  /* 11023491 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023494 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11023496 jne 0x110234a0 */
  if (!C.zf) goto L_110234a0;
  /* 11023498 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1102349b jmp 0x11023576 */
  goto L_11023576;
L_110234a0:;
  /* 110234a0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 110234a6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 110234a9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 110234b3 jmp 0x110234c4 */
  goto L_110234c4;
L_110234b5:;
  /* 110234b5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 110234bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110234be mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_110234c4:;
  /* 110234c4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110234cb jge 0x1102356f */
  if ((C.sf==C.of)) goto L_1102356f;
  /* 110234d1 cmp dword ptr [0x1103eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1103eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110234d8 jle 0x1102350b */
  if ((C.zf||C.sf!=C.of)) goto L_1102350b;
  /* 110234da push 4 */
  push32((uint32_t)(0x4u));
  /* 110234dc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 110234e2 mov dl, byte ptr [ecx*2 + 0x11040860] */
  DL = (r8((uint32_t)(ECX*2 + 0x11040860)));
  /* 110234e9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 110234ef mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 110234f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110234fa push eax */
  push32((uint32_t)(EAX));
  /* 110234fb call 0x1101b140 */
  push32(0x11023500u); f_1101b140();
  /* 11023500 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023503 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11023509 jmp 0x1102353e */
  goto L_1102353e;
L_1102350b:;
  /* 1102350b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11023511 mov dl, byte ptr [ecx*2 + 0x11040860] */
  DL = (r8((uint32_t)(ECX*2 + 0x11040860)));
  /* 11023518 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1102351e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11023524 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11023529 mov ecx, dword ptr [0x1103ec98] */
  ECX = (r32((uint32_t)(0x1103ec98)));
  /* 1102352f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11023531 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11023535 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11023538 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1102353e:;
  /* 1102353e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023545 je 0x11023568 */
  if (C.zf) goto L_11023568;
  /* 11023547 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1102354d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11023550 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11023553 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1102355a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1102355e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11023564 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11023566 jmp 0x1102356a */
  goto L_1102356a;
L_11023568:;
  /* 11023568 jmp 0x1102356f */
  goto L_1102356f;
L_1102356a:;
  /* 1102356a jmp 0x110234b5 */
  goto L_110234b5;
L_1102356f:;
  /* 1102356f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11023571 jmp 0x11023576 */
  goto L_11023576;
L_11023573:;
  /* 11023573 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11023576:;
  /* 11023576 mov esp, ebp */
  ESP = (EBP);
  /* 11023578 pop ebp */
  EBP = (pop32());
  /* 11023579 ret  */
  ESPCHK(0x110232f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013580 @ 0x11023580 (10 bytes, 5 insns) */
void f_11023580(void) {
  FTRACE(0x11023580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11023580 push ebp */
  push32((uint32_t)(EBP));
  /* 11023581 mov ebp, esp */
  EBP = (ESP);
  /* 11023583 mov eax, dword ptr [0x1103fd88] */
  EAX = (r32((uint32_t)(0x1103fd88)));
  /* 11023588 pop ebp */
  EBP = (pop32());
  /* 11023589 ret  */
  ESPCHK(0x11023580u, _esp0);
  ESP += 4; return;
}

/* FUN_10013590 @ 0x11023590 (575 bytes, 196 insns) */
void f_11023590(void) {
  FTRACE(0x11023590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11023590 push ebp */
  push32((uint32_t)(EBP));
  /* 11023591 mov ebp, esp */
  EBP = (ESP);
  /* 11023593 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11023595 push 0x1103cab8 */
  push32((uint32_t)(0x1103cab8u));
  /* 1102359a push 0x1101e238 */
  push32((uint32_t)(0x1101e238u));
  /* 1102359f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 110235a5 push eax */
  push32((uint32_t)(EAX));
  /* 110235a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 110235ad add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110235b0 push ebx */
  push32((uint32_t)(EBX));
  /* 110235b1 push esi */
  push32((uint32_t)(ESI));
  /* 110235b2 push edi */
  push32((uint32_t)(EDI));
  /* 110235b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110235b6 cmp dword ptr [0x1104086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110235bd jne 0x1102360e */
  if (!C.zf) goto L_1102360e;
  /* 110235bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 110235c2 push eax */
  push32((uint32_t)(EAX));
  /* 110235c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 110235c5 push 0x1103c1e8 */
  push32((uint32_t)(0x1103c1e8u));
  /* 110235ca push 1 */
  push32((uint32_t)(0x1u));
  /* 110235cc call dword ptr [0x11043308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043308))), 0x110235d2u);
  /* 110235d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110235d4 je 0x110235e2 */
  if (C.zf) goto L_110235e2;
  /* 110235d6 mov dword ptr [0x1104086c], 1 */
  w32((uint32_t)(0x1104086c), (0x1u));
  /* 110235e0 jmp 0x1102360e */
  goto L_1102360e;
L_110235e2:;
  /* 110235e2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 110235e5 push ecx */
  push32((uint32_t)(ECX));
  /* 110235e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 110235e8 push 0x1103c1e4 */
  push32((uint32_t)(0x1103c1e4u));
  /* 110235ed push 1 */
  push32((uint32_t)(0x1u));
  /* 110235ef push 0 */
  push32((uint32_t)(0x0u));
  /* 110235f1 call dword ptr [0x11043318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043318))), 0x110235f7u);
  /* 110235f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110235f9 je 0x11023607 */
  if (C.zf) goto L_11023607;
  /* 110235fb mov dword ptr [0x1104086c], 2 */
  w32((uint32_t)(0x1104086c), (0x2u));
  /* 11023605 jmp 0x1102360e */
  goto L_1102360e;
L_11023607:;
  /* 11023607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11023609 jmp 0x110237e9 */
  goto L_110237e9;
L_1102360e:;
  /* 1102360e cmp dword ptr [0x1104086c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1104086c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023615 jne 0x11023632 */
  if (!C.zf) goto L_11023632;
  /* 11023617 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102361a push edx */
  push32((uint32_t)(EDX));
  /* 1102361b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102361e push eax */
  push32((uint32_t)(EAX));
  /* 1102361f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11023622 push ecx */
  push32((uint32_t)(ECX));
  /* 11023623 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023626 push edx */
  push32((uint32_t)(EDX));
  /* 11023627 call dword ptr [0x11043308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043308))), 0x1102362du);
  /* 1102362d jmp 0x110237e9 */
  goto L_110237e9;
L_11023632:;
  /* 11023632 cmp dword ptr [0x1104086c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1104086c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023639 jne 0x110237e7 */
  if (!C.zf) goto L_110237e7;
  /* 1102363f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023643 jne 0x1102364d */
  if (!C.zf) goto L_1102364d;
  /* 11023645 mov eax, dword ptr [0x110407e0] */
  EAX = (r32((uint32_t)(0x110407e0)));
  /* 1102364a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1102364d:;
  /* 1102364d push 0 */
  push32((uint32_t)(0x0u));
  /* 1102364f push 0 */
  push32((uint32_t)(0x0u));
  /* 11023651 push 0 */
  push32((uint32_t)(0x0u));
  /* 11023653 push 0 */
  push32((uint32_t)(0x0u));
  /* 11023655 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11023658 push ecx */
  push32((uint32_t)(ECX));
  /* 11023659 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1102365c push edx */
  push32((uint32_t)(EDX));
  /* 1102365d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11023662 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11023665 push eax */
  push32((uint32_t)(EAX));
  /* 11023666 call dword ptr [0x1104335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104335c))), 0x1102366cu);
  /* 1102366c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1102366f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023673 jne 0x1102367c */
  if (!C.zf) goto L_1102367c;
  /* 11023675 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11023677 jmp 0x110237e9 */
  goto L_110237e9;
L_1102367c:;
  /* 1102367c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11023683 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11023686 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023689 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1102368b call 0x110182d0 */
  push32(0x11023690u); f_110182d0();
  /* 11023690 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11023693 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11023696 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11023699 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1102369c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1102369f push edx */
  push32((uint32_t)(EDX));
  /* 110236a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110236a2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 110236a5 push eax */
  push32((uint32_t)(EAX));
  /* 110236a6 call 0x11018ea0 */
  push32(0x110236abu); f_11018ea0();
  /* 110236ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110236ae mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 110236b5 jmp 0x110236ce */
  goto L_110236ce;
  /* 110236b7 mov eax, 1 */
  EAX = (0x1u);
  /* 110236bc ret  */
  ESPCHK(0x11023590u, _esp0);
  ESP += 4; return;
  /* 110236bd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 110236c0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 110236c7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_110236ce:;
  /* 110236ce cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110236d2 jne 0x110236db */
  if (!C.zf) goto L_110236db;
  /* 110236d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110236d6 jmp 0x110237e9 */
  goto L_110237e9;
L_110236db:;
  /* 110236db push 0 */
  push32((uint32_t)(0x0u));
  /* 110236dd push 0 */
  push32((uint32_t)(0x0u));
  /* 110236df mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 110236e2 push ecx */
  push32((uint32_t)(ECX));
  /* 110236e3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 110236e6 push edx */
  push32((uint32_t)(EDX));
  /* 110236e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110236ea push eax */
  push32((uint32_t)(EAX));
  /* 110236eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110236ee push ecx */
  push32((uint32_t)(ECX));
  /* 110236ef push 0x220 */
  push32((uint32_t)(0x220u));
  /* 110236f4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110236f7 push edx */
  push32((uint32_t)(EDX));
  /* 110236f8 call dword ptr [0x1104335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104335c))), 0x110236feu);
  /* 110236fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11023700 jne 0x11023709 */
  if (!C.zf) goto L_11023709;
  /* 11023702 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11023704 jmp 0x110237e9 */
  goto L_110237e9;
L_11023709:;
  /* 11023709 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11023710 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11023713 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11023717 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102371a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1102371c call 0x110182d0 */
  push32(0x11023721u); f_110182d0();
  /* 11023721 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11023724 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11023727 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1102372a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1102372d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11023734 jmp 0x1102374d */
  goto L_1102374d;
  /* 11023736 mov eax, 1 */
  EAX = (0x1u);
  /* 1102373b ret  */
  ESPCHK(0x11023590u, _esp0);
  ESP += 4; return;
  /* 1102373c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1102373f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11023746 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1102374d:;
  /* 1102374d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023751 jne 0x1102375a */
  if (!C.zf) goto L_1102375a;
  /* 11023753 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11023755 jmp 0x110237e9 */
  goto L_110237e9;
L_1102375a:;
  /* 1102375a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102375e jne 0x11023769 */
  if (!C.zf) goto L_11023769;
  /* 11023760 mov edx, dword ptr [0x110407d0] */
  EDX = (r32((uint32_t)(0x110407d0)));
  /* 11023766 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11023769:;
  /* 11023769 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102376c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1102376f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11023775 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11023778 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1102377b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11023782 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11023785 push ecx */
  push32((uint32_t)(ECX));
  /* 11023786 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11023789 push edx */
  push32((uint32_t)(EDX));
  /* 1102378a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1102378d push eax */
  push32((uint32_t)(EAX));
  /* 1102378e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023791 push ecx */
  push32((uint32_t)(ECX));
  /* 11023792 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11023795 push edx */
  push32((uint32_t)(EDX));
  /* 11023796 call dword ptr [0x11043318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043318))), 0x1102379cu);
  /* 1102379c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1102379f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110237a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110237a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110237a7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 110237ac cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110237b2 je 0x110237c8 */
  if (C.zf) goto L_110237c8;
  /* 110237b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110237b7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110237ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110237bc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 110237c0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110237c6 je 0x110237cc */
  if (C.zf) goto L_110237cc;
L_110237c8:;
  /* 110237c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110237ca jmp 0x110237e9 */
  goto L_110237e9;
L_110237cc:;
  /* 110237cc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110237cf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 110237d1 push eax */
  push32((uint32_t)(EAX));
  /* 110237d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110237d5 push ecx */
  push32((uint32_t)(ECX));
  /* 110237d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110237d9 push edx */
  push32((uint32_t)(EDX));
  /* 110237da call 0x1101d020 */
  push32(0x110237dfu); f_1101d020();
  /* 110237df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110237e2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 110237e5 jmp 0x110237e9 */
  goto L_110237e9;
L_110237e7:;
  /* 110237e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110237e9:;
  /* 110237e9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 110237ec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110237ef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 110237f6 pop edi */
  EDI = (pop32());
  /* 110237f7 pop esi */
  ESI = (pop32());
  /* 110237f8 pop ebx */
  EBX = (pop32());
  /* 110237f9 mov esp, ebp */
  ESP = (EBP);
  /* 110237fb pop ebp */
  EBP = (pop32());
  /* 110237fc ret  */
  ESPCHK(0x11023590u, _esp0);
  ESP += 4; return;
}

/* FUN_10013800 @ 0x11023800 (208 bytes, 85 insns) */
void f_11023800(void) {
  FTRACE(0x11023800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11023800 push ebp */
  push32((uint32_t)(EBP));
  /* 11023801 mov ebp, esp */
  EBP = (ESP);
  /* 11023803 push edi */
  push32((uint32_t)(EDI));
  /* 11023804 push esi */
  push32((uint32_t)(ESI));
  /* 11023805 push ebx */
  push32((uint32_t)(EBX));
  /* 11023806 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11023809 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1102380c lea eax, [0x110407c8] */
  EAX = ((uint32_t)(0x110407c8));
  /* 11023812 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023816 jne 0x11023853 */
  if (!C.zf) goto L_11023853;
  /* 11023818 mov al, 0xff */
  AL = (0xffu);
  /* 1102381a mov edi, edi */
  EDI = (EDI);
L_1102381c:;
  /* 1102381c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1102381e je 0x1102384e */
  if (C.zf) goto L_1102384e;
  /* 11023820 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11023822 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11023823 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11023825 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11023826 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11023828 je 0x1102381c */
  if (C.zf) goto L_1102381c;
  /* 1102382a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1102382c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1102382e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11023830 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11023833 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11023835 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11023837 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11023839 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1102383b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1102383d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1102383f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11023842 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11023844 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11023846 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11023848 je 0x1102381c */
  if (C.zf) goto L_1102381c;
  /* 1102384a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1102384c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1102384e:;
  /* 1102384e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11023851 jmp 0x110238cb */
  goto L_110238cb;
L_11023853:;
  /* 11023853 lock inc dword ptr [0x1104095c] */
  x86_unimpl("lock inc @ 0x11023853");
  /* 1102385a cmp dword ptr [0x1104094c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104094c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023861 jg 0x11023867 */
  if ((!C.zf&&C.sf==C.of)) goto L_11023867;
  /* 11023863 push 0 */
  push32((uint32_t)(0x0u));
  /* 11023865 jmp 0x1102387c */
  goto L_1102387c;
L_11023867:;
  /* 11023867 lock dec dword ptr [0x1104095c] */
  x86_unimpl("lock dec @ 0x11023867");
  /* 1102386e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11023870 call 0x11018b30 */
  push32(0x11023875u); f_11018b30();
  /* 11023875 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1102387c:;
  /* 1102387c mov eax, 0xff */
  EAX = (0xffu);
  /* 11023881 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11023883 nop  */
  /* nop */
L_11023884:;
  /* 11023884 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11023886 je 0x110238af */
  if (C.zf) goto L_110238af;
  /* 11023888 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1102388a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1102388b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1102388d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1102388e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11023890 je 0x11023884 */
  if (C.zf) goto L_11023884;
  /* 11023892 push eax */
  push32((uint32_t)(EAX));
  /* 11023893 push ebx */
  push32((uint32_t)(EBX));
  /* 11023894 call 0x11024970 */
  push32(0x11023899u); f_11024970();
  /* 11023899 mov ebx, eax */
  EBX = (EAX);
  /* 1102389b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102389e call 0x11024970 */
  push32(0x110238a3u); f_11024970();
  /* 110238a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110238a6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110238a8 je 0x11023884 */
  if (C.zf) goto L_11023884;
  /* 110238aa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110238ac sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_110238af:;
  /* 110238af mov ebx, eax */
  EBX = (EAX);
  /* 110238b1 pop eax */
  EAX = (pop32());
  /* 110238b2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110238b4 jne 0x110238bf */
  if (!C.zf) goto L_110238bf;
  /* 110238b6 lock dec dword ptr [0x1104095c] */
  x86_unimpl("lock dec @ 0x110238b6");
  /* 110238bd jmp 0x110238c9 */
  goto L_110238c9;
L_110238bf:;
  /* 110238bf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110238c1 call 0x11018bd0 */
  push32(0x110238c6u); f_11018bd0();
  /* 110238c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110238c9:;
  /* 110238c9 mov eax, ebx */
  EAX = (EBX);
L_110238cb:;
  /* 110238cb pop ebx */
  EBX = (pop32());
  /* 110238cc pop esi */
  ESI = (pop32());
  /* 110238cd pop edi */
  EDI = (pop32());
  /* 110238ce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110238cf ret  */
  ESPCHK(0x11023800u, _esp0);
  ESP += 4; return;
}

/* FUN_100138d0 @ 0x110238d0 (257 bytes, 103 insns) */
void f_110238d0(void) {
  FTRACE(0x110238d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110238d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110238d1 mov ebp, esp */
  EBP = (ESP);
  /* 110238d3 push edi */
  push32((uint32_t)(EDI));
  /* 110238d4 push esi */
  push32((uint32_t)(ESI));
  /* 110238d5 push ebx */
  push32((uint32_t)(EBX));
  /* 110238d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110238d9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110238db je 0x110239ca */
  if (C.zf) goto L_110239ca;
  /* 110238e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 110238e4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 110238e7 lea eax, [0x110407c8] */
  EAX = ((uint32_t)(0x110407c8));
  /* 110238ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110238f1 jne 0x11023941 */
  if (!C.zf) goto L_11023941;
  /* 110238f3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 110238f5 mov bl, 0x5a */
  BL = (0x5au);
  /* 110238f7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 110238f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110238fc:;
  /* 110238fc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 110238fe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11023900 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11023902 je 0x11023925 */
  if (C.zf) goto L_11023925;
  /* 11023904 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11023906 je 0x11023925 */
  if (C.zf) goto L_11023925;
  /* 11023908 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11023909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1102390a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1102390c jb 0x11023914 */
  if (C.cf) goto L_11023914;
  /* 1102390e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11023910 ja 0x11023914 */
  if ((!C.cf&&!C.zf)) goto L_11023914;
  /* 11023912 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11023914:;
  /* 11023914 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11023916 jb 0x1102391e */
  if (C.cf) goto L_1102391e;
  /* 11023918 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1102391a ja 0x1102391e */
  if ((!C.cf&&!C.zf)) goto L_1102391e;
  /* 1102391c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1102391e:;
  /* 1102391e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11023920 jne 0x1102392f */
  if (!C.zf) goto L_1102392f;
  /* 11023922 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11023923 jne 0x110238fc */
  if (!C.zf) goto L_110238fc;
L_11023925:;
  /* 11023925 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11023927 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11023929 je 0x110239ca */
  if (C.zf) goto L_110239ca;
L_1102392f:;
  /* 1102392f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11023934 jb 0x110239ca */
  if (C.cf) goto L_110239ca;
  /* 1102393a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1102393c jmp 0x110239ca */
  goto L_110239ca;
L_11023941:;
  /* 11023941 lock inc dword ptr [0x1104095c] */
  x86_unimpl("lock inc @ 0x11023941");
  /* 11023948 cmp dword ptr [0x1104094c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104094c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102394f jg 0x11023955 */
  if ((!C.zf&&C.sf==C.of)) goto L_11023955;
  /* 11023951 push 0 */
  push32((uint32_t)(0x0u));
  /* 11023953 jmp 0x1102396e */
  goto L_1102396e;
L_11023955:;
  /* 11023955 lock dec dword ptr [0x1104095c] */
  x86_unimpl("lock dec @ 0x11023955");
  /* 1102395c mov ebx, ecx */
  EBX = (ECX);
  /* 1102395e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11023960 call 0x11018b30 */
  push32(0x11023965u); f_11018b30();
  /* 11023965 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1102396c mov ecx, ebx */
  ECX = (EBX);
L_1102396e:;
  /* 1102396e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11023970 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11023972 mov edi, edi */
  EDI = (EDI);
L_11023974:;
  /* 11023974 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11023976 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11023978 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1102397a je 0x1102399f */
  if (C.zf) goto L_1102399f;
  /* 1102397c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1102397e je 0x1102399f */
  if (C.zf) goto L_1102399f;
  /* 11023980 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11023981 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11023982 push ecx */
  push32((uint32_t)(ECX));
  /* 11023983 push eax */
  push32((uint32_t)(EAX));
  /* 11023984 push ebx */
  push32((uint32_t)(EBX));
  /* 11023985 call 0x11024970 */
  push32(0x1102398au); f_11024970();
  /* 1102398a mov ebx, eax */
  EBX = (EAX);
  /* 1102398c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102398f call 0x11024970 */
  push32(0x11023994u); f_11024970();
  /* 11023994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023997 pop ecx */
  ECX = (pop32());
  /* 11023998 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102399a jne 0x110239a5 */
  if (!C.zf) goto L_110239a5;
  /* 1102399c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1102399d jne 0x11023974 */
  if (!C.zf) goto L_11023974;
L_1102399f:;
  /* 1102399f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110239a1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110239a3 je 0x110239ae */
  if (C.zf) goto L_110239ae;
L_110239a5:;
  /* 110239a5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 110239aa jb 0x110239ae */
  if (C.cf) goto L_110239ae;
  /* 110239ac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_110239ae:;
  /* 110239ae pop eax */
  EAX = (pop32());
  /* 110239af or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110239b1 jne 0x110239bc */
  if (!C.zf) goto L_110239bc;
  /* 110239b3 lock dec dword ptr [0x1104095c] */
  x86_unimpl("lock dec @ 0x110239b3");
  /* 110239ba jmp 0x110239ca */
  goto L_110239ca;
L_110239bc:;
  /* 110239bc mov ebx, ecx */
  EBX = (ECX);
  /* 110239be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 110239c0 call 0x11018bd0 */
  push32(0x110239c5u); f_11018bd0();
  /* 110239c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110239c8 mov ecx, ebx */
  ECX = (EBX);
L_110239ca:;
  /* 110239ca mov eax, ecx */
  EAX = (ECX);
  /* 110239cc pop ebx */
  EBX = (pop32());
  /* 110239cd pop esi */
  ESI = (pop32());
  /* 110239ce pop edi */
  EDI = (pop32());
  /* 110239cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110239d0 ret  */
  ESPCHK(0x110238d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139e0 @ 0x110239e0 (255 bytes, 88 insns) */
void f_110239e0(void) {
  FTRACE(0x110239e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110239e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110239e1 mov ebp, esp */
  EBP = (ESP);
  /* 110239e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_110239e6:;
  /* 110239e6 cmp dword ptr [0x1103eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1103eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110239ed jle 0x11023a06 */
  if ((C.zf||C.sf!=C.of)) goto L_11023a06;
  /* 110239ef push 8 */
  push32((uint32_t)(0x8u));
  /* 110239f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110239f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110239f6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110239f8 push ecx */
  push32((uint32_t)(ECX));
  /* 110239f9 call 0x1101b140 */
  push32(0x110239feu); f_1101b140();
  /* 110239fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023a01 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11023a04 jmp 0x11023a1f */
  goto L_11023a1f;
L_11023a06:;
  /* 11023a06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023a09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11023a0b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11023a0d mov ecx, dword ptr [0x1103ec98] */
  ECX = (r32((uint32_t)(0x1103ec98)));
  /* 11023a13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11023a15 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11023a19 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11023a1c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11023a1f:;
  /* 11023a1f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023a23 je 0x11023a30 */
  if (C.zf) goto L_11023a30;
  /* 11023a25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023a28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023a2b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11023a2e jmp 0x110239e6 */
  goto L_110239e6;
L_11023a30:;
  /* 11023a30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023a33 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11023a35 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11023a37 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11023a3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023a3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023a40 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11023a43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11023a46 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11023a49 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023a4d je 0x11023a55 */
  if (C.zf) goto L_11023a55;
  /* 11023a4f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023a53 jne 0x11023a68 */
  if (!C.zf) goto L_11023a68;
L_11023a55:;
  /* 11023a55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023a58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11023a5a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11023a5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11023a5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023a62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023a65 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11023a68:;
  /* 11023a68 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11023a6f:;
  /* 11023a6f cmp dword ptr [0x1103eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1103eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023a76 jle 0x11023a8b */
  if ((C.zf||C.sf!=C.of)) goto L_11023a8b;
  /* 11023a78 push 4 */
  push32((uint32_t)(0x4u));
  /* 11023a7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11023a7d push edx */
  push32((uint32_t)(EDX));
  /* 11023a7e call 0x1101b140 */
  push32(0x11023a83u); f_1101b140();
  /* 11023a83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023a86 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11023a89 jmp 0x11023aa0 */
  goto L_11023aa0;
L_11023a8b:;
  /* 11023a8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11023a8e mov ecx, dword ptr [0x1103ec98] */
  ECX = (r32((uint32_t)(0x1103ec98)));
  /* 11023a94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11023a96 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11023a9a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11023a9d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11023aa0:;
  /* 11023aa0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023aa4 je 0x11023acb */
  if (C.zf) goto L_11023acb;
  /* 11023aa6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11023aa9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11023aac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11023aaf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11023ab3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11023ab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023ab9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11023abb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11023abd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11023ac0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023ac3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023ac6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11023ac9 jmp 0x11023a6f */
  goto L_11023a6f;
L_11023acb:;
  /* 11023acb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023acf jne 0x11023ad8 */
  if (!C.zf) goto L_11023ad8;
  /* 11023ad1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11023ad4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11023ad6 jmp 0x11023adb */
  goto L_11023adb;
L_11023ad8:;
  /* 11023ad8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11023adb:;
  /* 11023adb mov esp, ebp */
  ESP = (EBP);
  /* 11023add pop ebp */
  EBP = (pop32());
  /* 11023ade ret  */
  ESPCHK(0x110239e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ae0 @ 0x11023ae0 (17 bytes, 8 insns) */
void f_11023ae0(void) {
  FTRACE(0x11023ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11023ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11023ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11023ae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023ae6 push eax */
  push32((uint32_t)(EAX));
  /* 11023ae7 call 0x110239e0 */
  push32(0x11023aecu); f_110239e0();
  /* 11023aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023aef pop ebp */
  EBP = (pop32());
  /* 11023af0 ret  */
  ESPCHK(0x11023ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b00 @ 0x11023b00 (297 bytes, 106 insns) */
void f_11023b00(void) {
  FTRACE(0x11023b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11023b00 push ebp */
  push32((uint32_t)(EBP));
  /* 11023b01 mov ebp, esp */
  EBP = (ESP);
  /* 11023b03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11023b06 push esi */
  push32((uint32_t)(ESI));
L_11023b07:;
  /* 11023b07 cmp dword ptr [0x1103eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1103eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023b0e jle 0x11023b27 */
  if ((C.zf||C.sf!=C.of)) goto L_11023b27;
  /* 11023b10 push 8 */
  push32((uint32_t)(0x8u));
  /* 11023b12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023b15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11023b17 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11023b19 push ecx */
  push32((uint32_t)(ECX));
  /* 11023b1a call 0x1101b140 */
  push32(0x11023b1fu); f_1101b140();
  /* 11023b1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023b22 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11023b25 jmp 0x11023b40 */
  goto L_11023b40;
L_11023b27:;
  /* 11023b27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023b2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11023b2c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11023b2e mov ecx, dword ptr [0x1103ec98] */
  ECX = (r32((uint32_t)(0x1103ec98)));
  /* 11023b34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11023b36 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11023b3a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11023b3d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11023b40:;
  /* 11023b40 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023b44 je 0x11023b51 */
  if (C.zf) goto L_11023b51;
  /* 11023b46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023b49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023b4c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11023b4f jmp 0x11023b07 */
  goto L_11023b07;
L_11023b51:;
  /* 11023b51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023b54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11023b56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11023b58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11023b5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023b5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023b61 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11023b64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11023b67 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11023b6a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023b6e je 0x11023b76 */
  if (C.zf) goto L_11023b76;
  /* 11023b70 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023b74 jne 0x11023b89 */
  if (!C.zf) goto L_11023b89;
L_11023b76:;
  /* 11023b76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023b79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11023b7b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11023b7d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11023b80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023b83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023b86 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11023b89:;
  /* 11023b89 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11023b90 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11023b97:;
  /* 11023b97 cmp dword ptr [0x1103eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1103eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023b9e jle 0x11023bb3 */
  if ((C.zf||C.sf!=C.of)) goto L_11023bb3;
  /* 11023ba0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11023ba2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11023ba5 push edx */
  push32((uint32_t)(EDX));
  /* 11023ba6 call 0x1101b140 */
  push32(0x11023babu); f_1101b140();
  /* 11023bab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023bae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11023bb1 jmp 0x11023bc8 */
  goto L_11023bc8;
L_11023bb3:;
  /* 11023bb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11023bb6 mov ecx, dword ptr [0x1103ec98] */
  ECX = (r32((uint32_t)(0x1103ec98)));
  /* 11023bbc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11023bbe mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11023bc2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11023bc5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11023bc8:;
  /* 11023bc8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023bcc je 0x11023c09 */
  if (C.zf) goto L_11023c09;
  /* 11023bce push 0 */
  push32((uint32_t)(0x0u));
  /* 11023bd0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11023bd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11023bd5 push eax */
  push32((uint32_t)(EAX));
  /* 11023bd6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11023bda call 0x11024aa0 */
  push32(0x11023bdfu); f_11024aa0();
  /* 11023bdf mov ecx, eax */
  ECX = (EAX);
  /* 11023be1 mov esi, edx */
  ESI = (EDX);
  /* 11023be3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11023be6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11023be9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11023bea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023bec adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11023bee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11023bf1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11023bf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023bf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11023bf9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11023bfb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11023bfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11023c01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023c04 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11023c07 jmp 0x11023b97 */
  goto L_11023b97;
L_11023c09:;
  /* 11023c09 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023c0d jne 0x11023c1e */
  if (!C.zf) goto L_11023c1e;
  /* 11023c0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023c12 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11023c14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11023c17 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023c1a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11023c1c jmp 0x11023c24 */
  goto L_11023c24;
L_11023c1e:;
  /* 11023c1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023c21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11023c24:;
  /* 11023c24 pop esi */
  ESI = (pop32());
  /* 11023c25 mov esp, ebp */
  ESP = (EBP);
  /* 11023c27 pop ebp */
  EBP = (pop32());
  /* 11023c28 ret  */
  ESPCHK(0x11023b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c30 @ 0x11023c30 (61 bytes, 18 insns) */
void f_11023c30(void) {
  FTRACE(0x11023c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11023c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11023c31 mov ebp, esp */
  EBP = (ESP);
  /* 11023c33 cmp dword ptr [0x11040928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023c3a jne 0x11023c6b */
  if (!C.zf) goto L_11023c6b;
  /* 11023c3c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11023c3e call 0x11018b30 */
  push32(0x11023c43u); f_11018b30();
  /* 11023c43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023c46 cmp dword ptr [0x11040928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023c4d jne 0x11023c61 */
  if (!C.zf) goto L_11023c61;
  /* 11023c4f call 0x11023c90 */
  push32(0x11023c54u); f_11023c90();
  /* 11023c54 mov eax, dword ptr [0x11040928] */
  EAX = (r32((uint32_t)(0x11040928)));
  /* 11023c59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023c5c mov dword ptr [0x11040928], eax */
  w32((uint32_t)(0x11040928), (EAX));
L_11023c61:;
  /* 11023c61 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11023c63 call 0x11018bd0 */
  push32(0x11023c68u); f_11018bd0();
  /* 11023c68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11023c6b:;
  /* 11023c6b pop ebp */
  EBP = (pop32());
  /* 11023c6c ret  */
  ESPCHK(0x11023c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c70 @ 0x11023c70 (30 bytes, 11 insns) */
void f_11023c70(void) {
  FTRACE(0x11023c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11023c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11023c71 mov ebp, esp */
  EBP = (ESP);
  /* 11023c73 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11023c75 call 0x11018b30 */
  push32(0x11023c7au); f_11018b30();
  /* 11023c7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023c7d call 0x11023c90 */
  push32(0x11023c82u); f_11023c90();
  /* 11023c82 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11023c84 call 0x11018bd0 */
  push32(0x11023c89u); f_11018bd0();
  /* 11023c89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023c8c pop ebp */
  EBP = (pop32());
  /* 11023c8d ret  */
  ESPCHK(0x11023c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c90 @ 0x11023c90 (939 bytes, 266 insns) */
void f_11023c90(void) {
  FTRACE(0x11023c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11023c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11023c91 mov ebp, esp */
  EBP = (ESP);
  /* 11023c93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11023c96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11023c9d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11023c9f call 0x11018b30 */
  push32(0x11023ca4u); f_11018b30();
  /* 11023ca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023ca7 mov dword ptr [0x11040870], 0 */
  w32((uint32_t)(0x11040870), (0x0u));
  /* 11023cb1 mov dword ptr [0x1103fe38], 0xffffffff */
  w32((uint32_t)(0x1103fe38), (0xffffffffu));
  /* 11023cbb mov eax, dword ptr [0x1103fe38] */
  EAX = (r32((uint32_t)(0x1103fe38)));
  /* 11023cc0 mov dword ptr [0x1103fe28], eax */
  w32((uint32_t)(0x1103fe28), (EAX));
  /* 11023cc5 push 0x1103cb18 */
  push32((uint32_t)(0x1103cb18u));
  /* 11023cca call 0x11024b10 */
  push32(0x11023ccfu); f_11024b10();
  /* 11023ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023cd2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11023cd5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023cd9 jne 0x11023e13 */
  if (!C.zf) goto L_11023e13;
  /* 11023cdf push 0xc */
  push32((uint32_t)(0xcu));
  /* 11023ce1 call 0x11018bd0 */
  push32(0x11023ce6u); f_11018bd0();
  /* 11023ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023ce9 push 0x11040878 */
  push32((uint32_t)(0x11040878u));
  /* 11023cee call dword ptr [0x110432cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432cc))), 0x11023cf4u);
  /* 11023cf4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023cf7 je 0x11023e0e */
  if (C.zf) goto L_11023e0e;
  /* 11023cfd mov dword ptr [0x11040870], 1 */
  w32((uint32_t)(0x11040870), (0x1u));
  /* 11023d07 mov ecx, dword ptr [0x11040878] */
  ECX = (r32((uint32_t)(0x11040878)));
  /* 11023d0d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11023d10 mov dword ptr [0x1103fd90], ecx */
  w32((uint32_t)(0x1103fd90), (ECX));
  /* 11023d16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11023d18 mov dx, word ptr [0x110408be] */
  DX = (r16((uint32_t)(0x110408be)));
  /* 11023d1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11023d21 je 0x11023d39 */
  if (C.zf) goto L_11023d39;
  /* 11023d23 mov eax, dword ptr [0x110408cc] */
  EAX = (r32((uint32_t)(0x110408cc)));
  /* 11023d28 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11023d2b mov ecx, dword ptr [0x1103fd90] */
  ECX = (r32((uint32_t)(0x1103fd90)));
  /* 11023d31 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023d33 mov dword ptr [0x1103fd90], ecx */
  w32((uint32_t)(0x1103fd90), (ECX));
L_11023d39:;
  /* 11023d39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11023d3b mov dx, word ptr [0x11040912] */
  DX = (r16((uint32_t)(0x11040912)));
  /* 11023d42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11023d44 je 0x11023d6e */
  if (C.zf) goto L_11023d6e;
  /* 11023d46 cmp dword ptr [0x11040920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023d4d je 0x11023d6e */
  if (C.zf) goto L_11023d6e;
  /* 11023d4f mov dword ptr [0x1103fd94], 1 */
  w32((uint32_t)(0x1103fd94), (0x1u));
  /* 11023d59 mov eax, dword ptr [0x11040920] */
  EAX = (r32((uint32_t)(0x11040920)));
  /* 11023d5e sub eax, dword ptr [0x110408cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110408cc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11023d64 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11023d67 mov dword ptr [0x1103fd98], eax */
  w32((uint32_t)(0x1103fd98), (EAX));
  /* 11023d6c jmp 0x11023d82 */
  goto L_11023d82;
L_11023d6e:;
  /* 11023d6e mov dword ptr [0x1103fd94], 0 */
  w32((uint32_t)(0x1103fd94), (0x0u));
  /* 11023d78 mov dword ptr [0x1103fd98], 0 */
  w32((uint32_t)(0x1103fd98), (0x0u));
L_11023d82:;
  /* 11023d82 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11023d85 push ecx */
  push32((uint32_t)(ECX));
  /* 11023d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11023d88 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11023d8a mov edx, dword ptr [0x1103fe1c] */
  EDX = (r32((uint32_t)(0x1103fe1c)));
  /* 11023d90 push edx */
  push32((uint32_t)(EDX));
  /* 11023d91 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11023d93 push 0x1104087c */
  push32((uint32_t)(0x1104087cu));
  /* 11023d98 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11023d9d mov eax, dword ptr [0x110407e0] */
  EAX = (r32((uint32_t)(0x110407e0)));
  /* 11023da2 push eax */
  push32((uint32_t)(EAX));
  /* 11023da3 call dword ptr [0x1104335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104335c))), 0x11023da9u);
  /* 11023da9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11023dab je 0x11023dbf */
  if (C.zf) goto L_11023dbf;
  /* 11023dad cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023db1 jne 0x11023dbf */
  if (!C.zf) goto L_11023dbf;
  /* 11023db3 mov ecx, dword ptr [0x1103fe1c] */
  ECX = (r32((uint32_t)(0x1103fe1c)));
  /* 11023db9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11023dbd jmp 0x11023dc8 */
  goto L_11023dc8;
L_11023dbf:;
  /* 11023dbf mov edx, dword ptr [0x1103fe1c] */
  EDX = (r32((uint32_t)(0x1103fe1c)));
  /* 11023dc5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11023dc8:;
  /* 11023dc8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11023dcb push eax */
  push32((uint32_t)(EAX));
  /* 11023dcc push 0 */
  push32((uint32_t)(0x0u));
  /* 11023dce push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11023dd0 mov ecx, dword ptr [0x1103fe20] */
  ECX = (r32((uint32_t)(0x1103fe20)));
  /* 11023dd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11023dd7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11023dd9 push 0x110408d0 */
  push32((uint32_t)(0x110408d0u));
  /* 11023dde push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11023de3 mov edx, dword ptr [0x110407e0] */
  EDX = (r32((uint32_t)(0x110407e0)));
  /* 11023de9 push edx */
  push32((uint32_t)(EDX));
  /* 11023dea call dword ptr [0x1104335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104335c))), 0x11023df0u);
  /* 11023df0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11023df2 je 0x11023e05 */
  if (C.zf) goto L_11023e05;
  /* 11023df4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023df8 jne 0x11023e05 */
  if (!C.zf) goto L_11023e05;
  /* 11023dfa mov eax, dword ptr [0x1103fe20] */
  EAX = (r32((uint32_t)(0x1103fe20)));
  /* 11023dff mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11023e03 jmp 0x11023e0e */
  goto L_11023e0e;
L_11023e05:;
  /* 11023e05 mov ecx, dword ptr [0x1103fe20] */
  ECX = (r32((uint32_t)(0x1103fe20)));
  /* 11023e0b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11023e0e:;
  /* 11023e0e jmp 0x11024037 */
  goto L_11024037;
L_11023e13:;
  /* 11023e13 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023e16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11023e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11023e1b je 0x11023e3d */
  if (C.zf) goto L_11023e3d;
  /* 11023e1d cmp dword ptr [0x11040924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023e24 je 0x11023e4c */
  if (C.zf) goto L_11023e4c;
  /* 11023e26 mov ecx, dword ptr [0x11040924] */
  ECX = (r32((uint32_t)(0x11040924)));
  /* 11023e2c push ecx */
  push32((uint32_t)(ECX));
  /* 11023e2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023e30 push edx */
  push32((uint32_t)(EDX));
  /* 11023e31 call 0x11020dc0 */
  push32(0x11023e36u); f_11020dc0();
  /* 11023e36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11023e3b jne 0x11023e4c */
  if (!C.zf) goto L_11023e4c;
L_11023e3d:;
  /* 11023e3d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11023e3f call 0x11018bd0 */
  push32(0x11023e44u); f_11018bd0();
  /* 11023e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023e47 jmp 0x11024037 */
  goto L_11024037;
L_11023e4c:;
  /* 11023e4c push 2 */
  push32((uint32_t)(0x2u));
  /* 11023e4e mov eax, dword ptr [0x11040924] */
  EAX = (r32((uint32_t)(0x11040924)));
  /* 11023e53 push eax */
  push32((uint32_t)(EAX));
  /* 11023e54 call 0x11015bc0 */
  push32(0x11023e59u); f_11015bc0();
  /* 11023e59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023e5c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11023e61 push 0x1103cb10 */
  push32((uint32_t)(0x1103cb10u));
  /* 11023e66 push 2 */
  push32((uint32_t)(0x2u));
  /* 11023e68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023e6b push ecx */
  push32((uint32_t)(ECX));
  /* 11023e6c call 0x11017f60 */
  push32(0x11023e71u); f_11017f60();
  /* 11023e71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023e74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023e77 push eax */
  push32((uint32_t)(EAX));
  /* 11023e78 call 0x11015130 */
  push32(0x11023e7du); f_11015130();
  /* 11023e7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023e80 mov dword ptr [0x11040924], eax */
  w32((uint32_t)(0x11040924), (EAX));
  /* 11023e85 cmp dword ptr [0x11040924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023e8c jne 0x11023e9d */
  if (!C.zf) goto L_11023e9d;
  /* 11023e8e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11023e90 call 0x11018bd0 */
  push32(0x11023e95u); f_11018bd0();
  /* 11023e95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023e98 jmp 0x11024037 */
  goto L_11024037;
L_11023e9d:;
  /* 11023e9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023ea0 push edx */
  push32((uint32_t)(EDX));
  /* 11023ea1 mov eax, dword ptr [0x11040924] */
  EAX = (r32((uint32_t)(0x11040924)));
  /* 11023ea6 push eax */
  push32((uint32_t)(EAX));
  /* 11023ea7 call 0x110180e0 */
  push32(0x11023eacu); f_110180e0();
  /* 11023eac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023eaf push 0xc */
  push32((uint32_t)(0xcu));
  /* 11023eb1 call 0x11018bd0 */
  push32(0x11023eb6u); f_11018bd0();
  /* 11023eb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023eb9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11023ebb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023ebe push ecx */
  push32((uint32_t)(ECX));
  /* 11023ebf mov edx, dword ptr [0x1103fe1c] */
  EDX = (r32((uint32_t)(0x1103fe1c)));
  /* 11023ec5 push edx */
  push32((uint32_t)(EDX));
  /* 11023ec6 call 0x11018950 */
  push32(0x11023ecbu); f_11018950();
  /* 11023ecb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023ece mov eax, dword ptr [0x1103fe1c] */
  EAX = (r32((uint32_t)(0x1103fe1c)));
  /* 11023ed3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11023ed7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023eda add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023edd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11023ee0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023ee3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11023ee6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023ee9 jne 0x11023efd */
  if (!C.zf) goto L_11023efd;
  /* 11023eeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11023eee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023ef1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11023ef4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023ef7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023efa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11023efd:;
  /* 11023efd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023f00 push eax */
  push32((uint32_t)(EAX));
  /* 11023f01 call 0x110239e0 */
  push32(0x11023f06u); f_110239e0();
  /* 11023f06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023f09 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11023f0f mov dword ptr [0x1103fd90], eax */
  w32((uint32_t)(0x1103fd90), (EAX));
L_11023f14:;
  /* 11023f14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023f17 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11023f1a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023f1d je 0x11023f35 */
  if (C.zf) goto L_11023f35;
  /* 11023f1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023f22 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11023f25 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023f28 jl 0x11023f40 */
  if ((C.sf!=C.of)) goto L_11023f40;
  /* 11023f2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023f2d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11023f30 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023f33 jg 0x11023f40 */
  if ((!C.zf&&C.sf==C.of)) goto L_11023f40;
L_11023f35:;
  /* 11023f35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023f38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023f3b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11023f3e jmp 0x11023f14 */
  goto L_11023f14;
L_11023f40:;
  /* 11023f40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023f43 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11023f46 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023f49 jne 0x11023fe5 */
  if (!C.zf) goto L_11023fe5;
  /* 11023f4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023f52 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023f55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11023f58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023f5b push edx */
  push32((uint32_t)(EDX));
  /* 11023f5c call 0x110239e0 */
  push32(0x11023f61u); f_110239e0();
  /* 11023f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023f64 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11023f67 mov ecx, dword ptr [0x1103fd90] */
  ECX = (r32((uint32_t)(0x1103fd90)));
  /* 11023f6d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023f6f mov dword ptr [0x1103fd90], ecx */
  w32((uint32_t)(0x1103fd90), (ECX));
L_11023f75:;
  /* 11023f75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023f78 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11023f7b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023f7e jl 0x11023f96 */
  if ((C.sf!=C.of)) goto L_11023f96;
  /* 11023f80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023f83 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11023f86 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023f89 jg 0x11023f96 */
  if ((!C.zf&&C.sf==C.of)) goto L_11023f96;
  /* 11023f8b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023f8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023f91 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11023f94 jmp 0x11023f75 */
  goto L_11023f75;
L_11023f96:;
  /* 11023f96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023f99 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11023f9c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023f9f jne 0x11023fe5 */
  if (!C.zf) goto L_11023fe5;
  /* 11023fa1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023fa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023fa7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11023faa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023fad push ecx */
  push32((uint32_t)(ECX));
  /* 11023fae call 0x110239e0 */
  push32(0x11023fb3u); f_110239e0();
  /* 11023fb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11023fb6 mov edx, dword ptr [0x1103fd90] */
  EDX = (r32((uint32_t)(0x1103fd90)));
  /* 11023fbc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023fbe mov dword ptr [0x1103fd90], edx */
  w32((uint32_t)(0x1103fd90), (EDX));
L_11023fc4:;
  /* 11023fc4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023fc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11023fca cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023fcd jl 0x11023fe5 */
  if ((C.sf!=C.of)) goto L_11023fe5;
  /* 11023fcf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023fd2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11023fd5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023fd8 jg 0x11023fe5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11023fe5;
  /* 11023fda mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023fdd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11023fe0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11023fe3 jmp 0x11023fc4 */
  goto L_11023fc4;
L_11023fe5:;
  /* 11023fe5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11023fe9 je 0x11023ff9 */
  if (C.zf) goto L_11023ff9;
  /* 11023feb mov edx, dword ptr [0x1103fd90] */
  EDX = (r32((uint32_t)(0x1103fd90)));
  /* 11023ff1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11023ff3 mov dword ptr [0x1103fd90], edx */
  w32((uint32_t)(0x1103fd90), (EDX));
L_11023ff9:;
  /* 11023ff9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11023ffc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11023fff mov dword ptr [0x1103fd94], ecx */
  w32((uint32_t)(0x1103fd94), (ECX));
  /* 11024005 cmp dword ptr [0x1103fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1103fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102400c je 0x1102402e */
  if (C.zf) goto L_1102402e;
  /* 1102400e push 3 */
  push32((uint32_t)(0x3u));
  /* 11024010 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11024013 push edx */
  push32((uint32_t)(EDX));
  /* 11024014 mov eax, dword ptr [0x1103fe20] */
  EAX = (r32((uint32_t)(0x1103fe20)));
  /* 11024019 push eax */
  push32((uint32_t)(EAX));
  /* 1102401a call 0x11018950 */
  push32(0x1102401fu); f_11018950();
  /* 1102401f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024022 mov ecx, dword ptr [0x1103fe20] */
  ECX = (r32((uint32_t)(0x1103fe20)));
  /* 11024028 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1102402c jmp 0x11024037 */
  goto L_11024037;
L_1102402e:;
  /* 1102402e mov edx, dword ptr [0x1103fe20] */
  EDX = (r32((uint32_t)(0x1103fe20)));
  /* 11024034 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11024037:;
  /* 11024037 mov esp, ebp */
  ESP = (EBP);
  /* 11024039 pop ebp */
  EBP = (pop32());
  /* 1102403a ret  */
  ESPCHK(0x11023c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10014040 @ 0x11024040 (46 bytes, 18 insns) */
void f_11024040(void) {
  FTRACE(0x11024040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11024040 push ebp */
  push32((uint32_t)(EBP));
  /* 11024041 mov ebp, esp */
  EBP = (ESP);
  /* 11024043 push ecx */
  push32((uint32_t)(ECX));
  /* 11024044 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11024046 call 0x11018b30 */
  push32(0x1102404bu); f_11018b30();
  /* 1102404b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102404e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024051 push eax */
  push32((uint32_t)(EAX));
  /* 11024052 call 0x11024070 */
  push32(0x11024057u); f_11024070();
  /* 11024057 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102405a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1102405d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1102405f call 0x11018bd0 */
  push32(0x11024064u); f_11018bd0();
  /* 11024064 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024067 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102406a mov esp, ebp */
  ESP = (EBP);
  /* 1102406c pop ebp */
  EBP = (pop32());
  /* 1102406d ret  */
  ESPCHK(0x11024040u, _esp0);
  ESP += 4; return;
}

/* FUN_10014070 @ 0x11024070 (762 bytes, 246 insns) */
void f_11024070(void) {
  FTRACE(0x11024070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11024070 push ebp */
  push32((uint32_t)(EBP));
  /* 11024071 mov ebp, esp */
  EBP = (ESP);
  /* 11024073 push ecx */
  push32((uint32_t)(ECX));
  /* 11024074 cmp dword ptr [0x1103fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1103fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102407b jne 0x11024084 */
  if (!C.zf) goto L_11024084;
  /* 1102407d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1102407f jmp 0x11024366 */
  goto L_11024366;
L_11024084:;
  /* 11024084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024087 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1102408a cmp ecx, dword ptr [0x1103fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1103fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024090 jne 0x110240a4 */
  if (!C.zf) goto L_110240a4;
  /* 11024092 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024095 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11024098 cmp eax, dword ptr [0x1103fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1103fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102409e je 0x1102426b */
  if (C.zf) goto L_1102426b;
L_110240a4:;
  /* 110240a4 cmp dword ptr [0x11040870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110240ab je 0x11024225 */
  if (C.zf) goto L_11024225;
  /* 110240b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110240b3 mov cx, word ptr [0x11040910] */
  CX = (r16((uint32_t)(0x11040910)));
  /* 110240ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110240bc jne 0x11024119 */
  if (!C.zf) goto L_11024119;
  /* 110240be xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110240c0 mov dx, word ptr [0x1104091e] */
  DX = (r16((uint32_t)(0x1104091e)));
  /* 110240c7 push edx */
  push32((uint32_t)(EDX));
  /* 110240c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110240ca mov ax, word ptr [0x1104091c] */
  AX = (r16((uint32_t)(0x1104091c)));
  /* 110240d0 push eax */
  push32((uint32_t)(EAX));
  /* 110240d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110240d3 mov cx, word ptr [0x1104091a] */
  CX = (r16((uint32_t)(0x1104091a)));
  /* 110240da push ecx */
  push32((uint32_t)(ECX));
  /* 110240db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110240dd mov dx, word ptr [0x11040918] */
  DX = (r16((uint32_t)(0x11040918)));
  /* 110240e4 push edx */
  push32((uint32_t)(EDX));
  /* 110240e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110240e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110240e9 mov ax, word ptr [0x11040914] */
  AX = (r16((uint32_t)(0x11040914)));
  /* 110240ef push eax */
  push32((uint32_t)(EAX));
  /* 110240f0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110240f2 mov cx, word ptr [0x11040916] */
  CX = (r16((uint32_t)(0x11040916)));
  /* 110240f9 push ecx */
  push32((uint32_t)(ECX));
  /* 110240fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110240fc mov dx, word ptr [0x11040912] */
  DX = (r16((uint32_t)(0x11040912)));
  /* 11024103 push edx */
  push32((uint32_t)(EDX));
  /* 11024104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024107 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1102410a push ecx */
  push32((uint32_t)(ECX));
  /* 1102410b push 1 */
  push32((uint32_t)(0x1u));
  /* 1102410d push 1 */
  push32((uint32_t)(0x1u));
  /* 1102410f call 0x11024370 */
  push32(0x11024114u); f_11024370();
  /* 11024114 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024117 jmp 0x1102416a */
  goto L_1102416a;
L_11024119:;
  /* 11024119 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1102411b mov dx, word ptr [0x1104091e] */
  DX = (r16((uint32_t)(0x1104091e)));
  /* 11024122 push edx */
  push32((uint32_t)(EDX));
  /* 11024123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024125 mov ax, word ptr [0x1104091c] */
  AX = (r16((uint32_t)(0x1104091c)));
  /* 1102412b push eax */
  push32((uint32_t)(EAX));
  /* 1102412c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1102412e mov cx, word ptr [0x1104091a] */
  CX = (r16((uint32_t)(0x1104091a)));
  /* 11024135 push ecx */
  push32((uint32_t)(ECX));
  /* 11024136 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11024138 mov dx, word ptr [0x11040918] */
  DX = (r16((uint32_t)(0x11040918)));
  /* 1102413f push edx */
  push32((uint32_t)(EDX));
  /* 11024140 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024142 mov ax, word ptr [0x11040916] */
  AX = (r16((uint32_t)(0x11040916)));
  /* 11024148 push eax */
  push32((uint32_t)(EAX));
  /* 11024149 push 0 */
  push32((uint32_t)(0x0u));
  /* 1102414b push 0 */
  push32((uint32_t)(0x0u));
  /* 1102414d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1102414f mov cx, word ptr [0x11040912] */
  CX = (r16((uint32_t)(0x11040912)));
  /* 11024156 push ecx */
  push32((uint32_t)(ECX));
  /* 11024157 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102415a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1102415d push eax */
  push32((uint32_t)(EAX));
  /* 1102415e push 0 */
  push32((uint32_t)(0x0u));
  /* 11024160 push 1 */
  push32((uint32_t)(0x1u));
  /* 11024162 call 0x11024370 */
  push32(0x11024167u); f_11024370();
  /* 11024167 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1102416a:;
  /* 1102416a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1102416c mov cx, word ptr [0x110408bc] */
  CX = (r16((uint32_t)(0x110408bc)));
  /* 11024173 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11024175 jne 0x110241d2 */
  if (!C.zf) goto L_110241d2;
  /* 11024177 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11024179 mov dx, word ptr [0x110408ca] */
  DX = (r16((uint32_t)(0x110408ca)));
  /* 11024180 push edx */
  push32((uint32_t)(EDX));
  /* 11024181 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024183 mov ax, word ptr [0x110408c8] */
  AX = (r16((uint32_t)(0x110408c8)));
  /* 11024189 push eax */
  push32((uint32_t)(EAX));
  /* 1102418a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1102418c mov cx, word ptr [0x110408c6] */
  CX = (r16((uint32_t)(0x110408c6)));
  /* 11024193 push ecx */
  push32((uint32_t)(ECX));
  /* 11024194 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11024196 mov dx, word ptr [0x110408c4] */
  DX = (r16((uint32_t)(0x110408c4)));
  /* 1102419d push edx */
  push32((uint32_t)(EDX));
  /* 1102419e push 0 */
  push32((uint32_t)(0x0u));
  /* 110241a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110241a2 mov ax, word ptr [0x110408c0] */
  AX = (r16((uint32_t)(0x110408c0)));
  /* 110241a8 push eax */
  push32((uint32_t)(EAX));
  /* 110241a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110241ab mov cx, word ptr [0x110408c2] */
  CX = (r16((uint32_t)(0x110408c2)));
  /* 110241b2 push ecx */
  push32((uint32_t)(ECX));
  /* 110241b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110241b5 mov dx, word ptr [0x110408be] */
  DX = (r16((uint32_t)(0x110408be)));
  /* 110241bc push edx */
  push32((uint32_t)(EDX));
  /* 110241bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110241c0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 110241c3 push ecx */
  push32((uint32_t)(ECX));
  /* 110241c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 110241c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110241c8 call 0x11024370 */
  push32(0x110241cdu); f_11024370();
  /* 110241cd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110241d0 jmp 0x11024223 */
  goto L_11024223;
L_110241d2:;
  /* 110241d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110241d4 mov dx, word ptr [0x110408ca] */
  DX = (r16((uint32_t)(0x110408ca)));
  /* 110241db push edx */
  push32((uint32_t)(EDX));
  /* 110241dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110241de mov ax, word ptr [0x110408c8] */
  AX = (r16((uint32_t)(0x110408c8)));
  /* 110241e4 push eax */
  push32((uint32_t)(EAX));
  /* 110241e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110241e7 mov cx, word ptr [0x110408c6] */
  CX = (r16((uint32_t)(0x110408c6)));
  /* 110241ee push ecx */
  push32((uint32_t)(ECX));
  /* 110241ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110241f1 mov dx, word ptr [0x110408c4] */
  DX = (r16((uint32_t)(0x110408c4)));
  /* 110241f8 push edx */
  push32((uint32_t)(EDX));
  /* 110241f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110241fb mov ax, word ptr [0x110408c2] */
  AX = (r16((uint32_t)(0x110408c2)));
  /* 11024201 push eax */
  push32((uint32_t)(EAX));
  /* 11024202 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024204 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024206 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11024208 mov cx, word ptr [0x110408be] */
  CX = (r16((uint32_t)(0x110408be)));
  /* 1102420f push ecx */
  push32((uint32_t)(ECX));
  /* 11024210 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024213 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11024216 push eax */
  push32((uint32_t)(EAX));
  /* 11024217 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024219 push 0 */
  push32((uint32_t)(0x0u));
  /* 1102421b call 0x11024370 */
  push32(0x11024220u); f_11024370();
  /* 11024220 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11024223:;
  /* 11024223 jmp 0x1102426b */
  goto L_1102426b;
L_11024225:;
  /* 11024225 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024227 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024229 push 0 */
  push32((uint32_t)(0x0u));
  /* 1102422b push 2 */
  push32((uint32_t)(0x2u));
  /* 1102422d push 0 */
  push32((uint32_t)(0x0u));
  /* 1102422f push 0 */
  push32((uint32_t)(0x0u));
  /* 11024231 push 1 */
  push32((uint32_t)(0x1u));
  /* 11024233 push 4 */
  push32((uint32_t)(0x4u));
  /* 11024235 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024238 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1102423b push edx */
  push32((uint32_t)(EDX));
  /* 1102423c push 1 */
  push32((uint32_t)(0x1u));
  /* 1102423e push 1 */
  push32((uint32_t)(0x1u));
  /* 11024240 call 0x11024370 */
  push32(0x11024245u); f_11024370();
  /* 11024245 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024248 push 0 */
  push32((uint32_t)(0x0u));
  /* 1102424a push 0 */
  push32((uint32_t)(0x0u));
  /* 1102424c push 0 */
  push32((uint32_t)(0x0u));
  /* 1102424e push 2 */
  push32((uint32_t)(0x2u));
  /* 11024250 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024252 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024254 push 5 */
  push32((uint32_t)(0x5u));
  /* 11024256 push 0xa */
  push32((uint32_t)(0xau));
  /* 11024258 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102425b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1102425e push ecx */
  push32((uint32_t)(ECX));
  /* 1102425f push 1 */
  push32((uint32_t)(0x1u));
  /* 11024261 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024263 call 0x11024370 */
  push32(0x11024268u); f_11024370();
  /* 11024268 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1102426b:;
  /* 1102426b mov edx, dword ptr [0x1103fe2c] */
  EDX = (r32((uint32_t)(0x1103fe2c)));
  /* 11024271 cmp edx, dword ptr [0x1103fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1103fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024277 jge 0x110242c4 */
  if ((C.sf==C.of)) goto L_110242c4;
  /* 11024279 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102427c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1102427f cmp ecx, dword ptr [0x1103fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1103fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024285 jl 0x11024295 */
  if ((C.sf!=C.of)) goto L_11024295;
  /* 11024287 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102428a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1102428d cmp eax, dword ptr [0x1103fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1103fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024293 jle 0x1102429c */
  if ((C.zf||C.sf!=C.of)) goto L_1102429c;
L_11024295:;
  /* 11024295 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024297 jmp 0x11024366 */
  goto L_11024366;
L_1102429c:;
  /* 1102429c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102429f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 110242a2 cmp edx, dword ptr [0x1103fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1103fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110242a8 jle 0x110242c2 */
  if ((C.zf||C.sf!=C.of)) goto L_110242c2;
  /* 110242aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110242ad mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 110242b0 cmp ecx, dword ptr [0x1103fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1103fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110242b6 jge 0x110242c2 */
  if ((C.sf==C.of)) goto L_110242c2;
  /* 110242b8 mov eax, 1 */
  EAX = (0x1u);
  /* 110242bd jmp 0x11024366 */
  goto L_11024366;
L_110242c2:;
  /* 110242c2 jmp 0x11024307 */
  goto L_11024307;
L_110242c4:;
  /* 110242c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110242c7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 110242ca cmp eax, dword ptr [0x1103fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1103fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110242d0 jl 0x110242e0 */
  if ((C.sf!=C.of)) goto L_110242e0;
  /* 110242d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110242d5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 110242d8 cmp edx, dword ptr [0x1103fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1103fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110242de jle 0x110242e7 */
  if ((C.zf||C.sf!=C.of)) goto L_110242e7;
L_110242e0:;
  /* 110242e0 mov eax, 1 */
  EAX = (0x1u);
  /* 110242e5 jmp 0x11024366 */
  goto L_11024366;
L_110242e7:;
  /* 110242e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110242ea mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 110242ed cmp ecx, dword ptr [0x1103fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1103fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110242f3 jle 0x11024307 */
  if ((C.zf||C.sf!=C.of)) goto L_11024307;
  /* 110242f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110242f8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 110242fb cmp eax, dword ptr [0x1103fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1103fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024301 jge 0x11024307 */
  if ((C.sf==C.of)) goto L_11024307;
  /* 11024303 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024305 jmp 0x11024366 */
  goto L_11024366;
L_11024307:;
  /* 11024307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102430a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1102430d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11024310 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024313 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11024315 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11024317 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102431a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1102431d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11024323 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11024325 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1102432b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1102432e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024331 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11024334 cmp edx, dword ptr [0x1103fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1103fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102433a jne 0x11024352 */
  if (!C.zf) goto L_11024352;
  /* 1102433c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102433f cmp eax, dword ptr [0x1103fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1103fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024345 jl 0x1102434e */
  if ((C.sf!=C.of)) goto L_1102434e;
  /* 11024347 mov eax, 1 */
  EAX = (0x1u);
  /* 1102434c jmp 0x11024366 */
  goto L_11024366;
L_1102434e:;
  /* 1102434e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024350 jmp 0x11024366 */
  goto L_11024366;
L_11024352:;
  /* 11024352 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11024355 cmp ecx, dword ptr [0x1103fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1103fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102435b jge 0x11024364 */
  if ((C.sf==C.of)) goto L_11024364;
  /* 1102435d mov eax, 1 */
  EAX = (0x1u);
  /* 11024362 jmp 0x11024366 */
  goto L_11024366;
L_11024364:;
  /* 11024364 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11024366:;
  /* 11024366 mov esp, ebp */
  ESP = (EBP);
  /* 11024368 pop ebp */
  EBP = (pop32());
  /* 11024369 ret  */
  ESPCHK(0x11024070u, _esp0);
  ESP += 4; return;
}

/* FUN_10014370 @ 0x11024370 (504 bytes, 145 insns) */
void f_11024370(void) {
  FTRACE(0x11024370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11024370 push ebp */
  push32((uint32_t)(EBP));
  /* 11024371 mov ebp, esp */
  EBP = (ESP);
  /* 11024373 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11024376 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102437a jne 0x1102444c */
  if (!C.zf) goto L_1102444c;
  /* 11024380 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11024383 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11024386 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11024388 jne 0x11024399 */
  if (!C.zf) goto L_11024399;
  /* 1102438a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102438d mov edx, dword ptr [ecx*4 + 0x1103fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1103fe4c)));
  /* 11024394 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11024397 jmp 0x110243a6 */
  goto L_110243a6;
L_11024399:;
  /* 11024399 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102439c mov ecx, dword ptr [eax*4 + 0x1103fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1103fe80)));
  /* 110243a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_110243a6:;
  /* 110243a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110243a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110243ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110243af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110243b2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110243b5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110243bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110243be add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110243c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110243c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110243c6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 110243c9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 110243cd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110243ce mov ecx, 7 */
  ECX = (0x7u);
  /* 110243d3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110243d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110243d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110243db cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110243de jge 0x110243f9 */
  if ((C.sf==C.of)) goto L_110243f9;
  /* 110243e0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 110243e3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110243e6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110243e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110243ec imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110243ef add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110243f2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110243f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110243f7 jmp 0x1102440d */
  goto L_1102440d;
L_110243f9:;
  /* 110243f9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 110243fc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110243ff mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11024402 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11024405 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11024408 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102440a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1102440d:;
  /* 1102440d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024411 jne 0x1102444a */
  if (!C.zf) goto L_1102444a;
  /* 11024413 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11024416 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11024419 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1102441b jne 0x1102442c */
  if (!C.zf) goto L_1102442c;
  /* 1102441d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11024420 mov eax, dword ptr [edx*4 + 0x1103fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1103fe50)));
  /* 11024427 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1102442a jmp 0x11024439 */
  goto L_11024439;
L_1102442c:;
  /* 1102442c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102442f mov edx, dword ptr [ecx*4 + 0x1103fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1103fe84)));
  /* 11024436 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11024439:;
  /* 11024439 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1102443c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102443f jle 0x1102444a */
  if ((C.zf||C.sf!=C.of)) goto L_1102444a;
  /* 11024441 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11024444 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11024447 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1102444a:;
  /* 1102444a jmp 0x11024481 */
  goto L_11024481;
L_1102444c:;
  /* 1102444c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102444f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11024452 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11024454 jne 0x11024465 */
  if (!C.zf) goto L_11024465;
  /* 11024456 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11024459 mov ecx, dword ptr [eax*4 + 0x1103fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1103fe4c)));
  /* 11024460 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11024463 jmp 0x11024472 */
  goto L_11024472;
L_11024465:;
  /* 11024465 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11024468 mov eax, dword ptr [edx*4 + 0x1103fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1103fe80)));
  /* 1102446f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11024472:;
  /* 11024472 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11024475 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11024478 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1102447b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102447e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11024481:;
  /* 11024481 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024485 jne 0x110244c1 */
  if (!C.zf) goto L_110244c1;
  /* 11024487 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1102448a mov dword ptr [0x1103fe2c], eax */
  w32((uint32_t)(0x1103fe2c), (EAX));
  /* 1102448f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11024492 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11024495 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11024498 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102449a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1102449d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 110244a0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110244a2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110244a8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 110244ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110244ad mov dword ptr [0x1103fe30], ecx */
  w32((uint32_t)(0x1103fe30), (ECX));
  /* 110244b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110244b6 mov dword ptr [0x1103fe28], edx */
  w32((uint32_t)(0x1103fe28), (EDX));
  /* 110244bc jmp 0x11024564 */
  goto L_11024564;
L_110244c1:;
  /* 110244c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110244c4 mov dword ptr [0x1103fe3c], eax */
  w32((uint32_t)(0x1103fe3c), (EAX));
  /* 110244c9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 110244cc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110244cf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 110244d2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110244d4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110244d7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 110244da add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110244dc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110244e2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 110244e5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110244e7 mov dword ptr [0x1103fe40], ecx */
  w32((uint32_t)(0x1103fe40), (ECX));
  /* 110244ed mov edx, dword ptr [0x1103fd98] */
  EDX = (r32((uint32_t)(0x1103fd98)));
  /* 110244f3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110244f9 mov eax, dword ptr [0x1103fe40] */
  EAX = (r32((uint32_t)(0x1103fe40)));
  /* 110244fe add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11024500 mov dword ptr [0x1103fe40], eax */
  w32((uint32_t)(0x1103fe40), (EAX));
  /* 11024505 cmp dword ptr [0x1103fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1103fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102450c jge 0x11024531 */
  if ((C.sf==C.of)) goto L_11024531;
  /* 1102450e mov ecx, dword ptr [0x1103fe40] */
  ECX = (r32((uint32_t)(0x1103fe40)));
  /* 11024514 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102451a mov dword ptr [0x1103fe40], ecx */
  w32((uint32_t)(0x1103fe40), (ECX));
  /* 11024520 mov edx, dword ptr [0x1103fe3c] */
  EDX = (r32((uint32_t)(0x1103fe3c)));
  /* 11024526 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11024529 mov dword ptr [0x1103fe3c], edx */
  w32((uint32_t)(0x1103fe3c), (EDX));
  /* 1102452f jmp 0x1102455b */
  goto L_1102455b;
L_11024531:;
  /* 11024531 cmp dword ptr [0x1103fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1103fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102453b jl 0x1102455b */
  if ((C.sf!=C.of)) goto L_1102455b;
  /* 1102453d mov eax, dword ptr [0x1103fe40] */
  EAX = (r32((uint32_t)(0x1103fe40)));
  /* 11024542 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11024547 mov dword ptr [0x1103fe40], eax */
  w32((uint32_t)(0x1103fe40), (EAX));
  /* 1102454c mov ecx, dword ptr [0x1103fe3c] */
  ECX = (r32((uint32_t)(0x1103fe3c)));
  /* 11024552 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11024555 mov dword ptr [0x1103fe3c], ecx */
  w32((uint32_t)(0x1103fe3c), (ECX));
L_1102455b:;
  /* 1102455b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102455e mov dword ptr [0x1103fe38], edx */
  w32((uint32_t)(0x1103fe38), (EDX));
L_11024564:;
  /* 11024564 mov esp, ebp */
  ESP = (EBP);
  /* 11024566 pop ebp */
  EBP = (pop32());
  /* 11024567 ret  */
  ESPCHK(0x11024370u, _esp0);
  ESP += 4; return;
}

/* FUN_10014570 @ 0x11024570 (382 bytes, 135 insns) */
void f_11024570(void) {
  FTRACE(0x11024570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11024570 push ebp */
  push32((uint32_t)(EBP));
  /* 11024571 mov ebp, esp */
  EBP = (ESP);
  /* 11024573 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11024575 push 0x1103cb20 */
  push32((uint32_t)(0x1103cb20u));
  /* 1102457a push 0x1101e238 */
  push32((uint32_t)(0x1101e238u));
  /* 1102457f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11024585 push eax */
  push32((uint32_t)(EAX));
  /* 11024586 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1102458d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024590 push ebx */
  push32((uint32_t)(EBX));
  /* 11024591 push esi */
  push32((uint32_t)(ESI));
  /* 11024592 push edi */
  push32((uint32_t)(EDI));
  /* 11024593 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11024596 cmp dword ptr [0x1104092c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104092c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102459d jne 0x110245e2 */
  if (!C.zf) goto L_110245e2;
  /* 1102459f push 0 */
  push32((uint32_t)(0x0u));
  /* 110245a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110245a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 110245a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110245a7 call dword ptr [0x110432c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432c8))), 0x110245adu);
  /* 110245ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110245af je 0x110245bd */
  if (C.zf) goto L_110245bd;
  /* 110245b1 mov dword ptr [0x1104092c], 1 */
  w32((uint32_t)(0x1104092c), (0x1u));
  /* 110245bb jmp 0x110245e2 */
  goto L_110245e2;
L_110245bd:;
  /* 110245bd push 0 */
  push32((uint32_t)(0x0u));
  /* 110245bf push 0 */
  push32((uint32_t)(0x0u));
  /* 110245c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 110245c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110245c5 call dword ptr [0x110432e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432e0))), 0x110245cbu);
  /* 110245cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110245cd je 0x110245db */
  if (C.zf) goto L_110245db;
  /* 110245cf mov dword ptr [0x1104092c], 2 */
  w32((uint32_t)(0x1104092c), (0x2u));
  /* 110245d9 jmp 0x110245e2 */
  goto L_110245e2;
L_110245db:;
  /* 110245db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110245dd jmp 0x110246f1 */
  goto L_110246f1;
L_110245e2:;
  /* 110245e2 cmp dword ptr [0x1104092c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1104092c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110245e9 jne 0x11024606 */
  if (!C.zf) goto L_11024606;
  /* 110245eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110245ee push eax */
  push32((uint32_t)(EAX));
  /* 110245ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110245f2 push ecx */
  push32((uint32_t)(ECX));
  /* 110245f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110245f6 push edx */
  push32((uint32_t)(EDX));
  /* 110245f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110245fa push eax */
  push32((uint32_t)(EAX));
  /* 110245fb call dword ptr [0x110432c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432c8))), 0x11024601u);
  /* 11024601 jmp 0x110246f1 */
  goto L_110246f1;
L_11024606:;
  /* 11024606 cmp dword ptr [0x1104092c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1104092c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102460d jne 0x110246ef */
  if (!C.zf) goto L_110246ef;
  /* 11024613 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024617 jne 0x11024622 */
  if (!C.zf) goto L_11024622;
  /* 11024619 mov ecx, dword ptr [0x110407e0] */
  ECX = (r32((uint32_t)(0x110407e0)));
  /* 1102461f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11024622:;
  /* 11024622 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024624 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024626 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11024629 push edx */
  push32((uint32_t)(EDX));
  /* 1102462a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102462d push eax */
  push32((uint32_t)(EAX));
  /* 1102462e call dword ptr [0x110432e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432e0))), 0x11024634u);
  /* 11024634 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11024637 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102463b jne 0x11024644 */
  if (!C.zf) goto L_11024644;
  /* 1102463d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1102463f jmp 0x110246f1 */
  goto L_110246f1;
L_11024644:;
  /* 11024644 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1102464b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1102464e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11024651 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11024653 call 0x110182d0 */
  push32(0x11024658u); f_110182d0();
  /* 11024658 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1102465b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1102465e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11024661 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11024664 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1102466b jmp 0x11024684 */
  goto L_11024684;
  /* 1102466d mov eax, 1 */
  EAX = (0x1u);
  /* 11024672 ret  */
  ESPCHK(0x11024570u, _esp0);
  ESP += 4; return;
  /* 11024673 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11024676 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1102467d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11024684:;
  /* 11024684 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024688 jne 0x1102468e */
  if (!C.zf) goto L_1102468e;
  /* 1102468a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1102468c jmp 0x110246f1 */
  goto L_110246f1;
L_1102468e:;
  /* 1102468e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11024691 push edx */
  push32((uint32_t)(EDX));
  /* 11024692 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11024695 push eax */
  push32((uint32_t)(EAX));
  /* 11024696 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11024699 push ecx */
  push32((uint32_t)(ECX));
  /* 1102469a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102469d push edx */
  push32((uint32_t)(EDX));
  /* 1102469e call dword ptr [0x110432e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432e0))), 0x110246a4u);
  /* 110246a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110246a6 jne 0x110246ac */
  if (!C.zf) goto L_110246ac;
  /* 110246a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110246aa jmp 0x110246f1 */
  goto L_110246f1;
L_110246ac:;
  /* 110246ac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110246b0 jne 0x110246cd */
  if (!C.zf) goto L_110246cd;
  /* 110246b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110246b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110246b6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110246b8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 110246bb push eax */
  push32((uint32_t)(EAX));
  /* 110246bc push 1 */
  push32((uint32_t)(0x1u));
  /* 110246be mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110246c1 push ecx */
  push32((uint32_t)(ECX));
  /* 110246c2 call dword ptr [0x11043310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043310))), 0x110246c8u);
  /* 110246c8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 110246cb jmp 0x110246ea */
  goto L_110246ea;
L_110246cd:;
  /* 110246cd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110246d0 push edx */
  push32((uint32_t)(EDX));
  /* 110246d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110246d4 push eax */
  push32((uint32_t)(EAX));
  /* 110246d5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110246d7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 110246da push ecx */
  push32((uint32_t)(ECX));
  /* 110246db push 1 */
  push32((uint32_t)(0x1u));
  /* 110246dd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110246e0 push edx */
  push32((uint32_t)(EDX));
  /* 110246e1 call dword ptr [0x11043310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043310))), 0x110246e7u);
  /* 110246e7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_110246ea:;
  /* 110246ea mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110246ed jmp 0x110246f1 */
  goto L_110246f1;
L_110246ef:;
  /* 110246ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110246f1:;
  /* 110246f1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 110246f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110246f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 110246fe pop edi */
  EDI = (pop32());
  /* 110246ff pop esi */
  ESI = (pop32());
  /* 11024700 pop ebx */
  EBX = (pop32());
  /* 11024701 mov esp, ebp */
  ESP = (EBP);
  /* 11024703 pop ebp */
  EBP = (pop32());
  /* 11024704 ret  */
  ESPCHK(0x11024570u, _esp0);
  ESP += 4; return;
}

/* FUN_10014710 @ 0x11024710 (398 bytes, 140 insns) */
void f_11024710(void) {
  FTRACE(0x11024710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11024710 push ebp */
  push32((uint32_t)(EBP));
  /* 11024711 mov ebp, esp */
  EBP = (ESP);
  /* 11024713 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11024715 push 0x1103cb30 */
  push32((uint32_t)(0x1103cb30u));
  /* 1102471a push 0x1101e238 */
  push32((uint32_t)(0x1101e238u));
  /* 1102471f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11024725 push eax */
  push32((uint32_t)(EAX));
  /* 11024726 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1102472d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024730 push ebx */
  push32((uint32_t)(EBX));
  /* 11024731 push esi */
  push32((uint32_t)(ESI));
  /* 11024732 push edi */
  push32((uint32_t)(EDI));
  /* 11024733 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11024736 cmp dword ptr [0x11040930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102473d jne 0x11024782 */
  if (!C.zf) goto L_11024782;
  /* 1102473f push 0 */
  push32((uint32_t)(0x0u));
  /* 11024741 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024743 push 1 */
  push32((uint32_t)(0x1u));
  /* 11024745 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024747 call dword ptr [0x110432c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432c8))), 0x1102474du);
  /* 1102474d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1102474f je 0x1102475d */
  if (C.zf) goto L_1102475d;
  /* 11024751 mov dword ptr [0x11040930], 1 */
  w32((uint32_t)(0x11040930), (0x1u));
  /* 1102475b jmp 0x11024782 */
  goto L_11024782;
L_1102475d:;
  /* 1102475d push 0 */
  push32((uint32_t)(0x0u));
  /* 1102475f push 0 */
  push32((uint32_t)(0x0u));
  /* 11024761 push 1 */
  push32((uint32_t)(0x1u));
  /* 11024763 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024765 call dword ptr [0x110432e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432e0))), 0x1102476bu);
  /* 1102476b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1102476d je 0x1102477b */
  if (C.zf) goto L_1102477b;
  /* 1102476f mov dword ptr [0x11040930], 2 */
  w32((uint32_t)(0x11040930), (0x2u));
  /* 11024779 jmp 0x11024782 */
  goto L_11024782;
L_1102477b:;
  /* 1102477b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1102477d jmp 0x110248a1 */
  goto L_110248a1;
L_11024782:;
  /* 11024782 cmp dword ptr [0x11040930], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11040930))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024789 jne 0x110247a6 */
  if (!C.zf) goto L_110247a6;
  /* 1102478b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102478e push eax */
  push32((uint32_t)(EAX));
  /* 1102478f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11024792 push ecx */
  push32((uint32_t)(ECX));
  /* 11024793 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11024796 push edx */
  push32((uint32_t)(EDX));
  /* 11024797 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102479a push eax */
  push32((uint32_t)(EAX));
  /* 1102479b call dword ptr [0x110432e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432e0))), 0x110247a1u);
  /* 110247a1 jmp 0x110248a1 */
  goto L_110248a1;
L_110247a6:;
  /* 110247a6 cmp dword ptr [0x11040930], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11040930))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110247ad jne 0x1102489f */
  if (!C.zf) goto L_1102489f;
  /* 110247b3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110247b7 jne 0x110247c2 */
  if (!C.zf) goto L_110247c2;
  /* 110247b9 mov ecx, dword ptr [0x110407e0] */
  ECX = (r32((uint32_t)(0x110407e0)));
  /* 110247bf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_110247c2:;
  /* 110247c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110247c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110247c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110247c9 push edx */
  push32((uint32_t)(EDX));
  /* 110247ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110247cd push eax */
  push32((uint32_t)(EAX));
  /* 110247ce call dword ptr [0x110432c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432c8))), 0x110247d4u);
  /* 110247d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 110247d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110247db jne 0x110247e4 */
  if (!C.zf) goto L_110247e4;
  /* 110247dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110247df jmp 0x110248a1 */
  goto L_110248a1;
L_110247e4:;
  /* 110247e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 110247eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110247ee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 110247f0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110247f3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 110247f5 call 0x110182d0 */
  push32(0x110247fau); f_110182d0();
  /* 110247fa mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 110247fd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11024800 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11024803 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11024806 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1102480d jmp 0x11024826 */
  goto L_11024826;
  /* 1102480f mov eax, 1 */
  EAX = (0x1u);
  /* 11024814 ret  */
  ESPCHK(0x11024710u, _esp0);
  ESP += 4; return;
  /* 11024815 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11024818 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1102481f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11024826:;
  /* 11024826 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102482a jne 0x11024830 */
  if (!C.zf) goto L_11024830;
  /* 1102482c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1102482e jmp 0x110248a1 */
  goto L_110248a1;
L_11024830:;
  /* 11024830 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11024833 push edx */
  push32((uint32_t)(EDX));
  /* 11024834 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11024837 push eax */
  push32((uint32_t)(EAX));
  /* 11024838 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1102483b push ecx */
  push32((uint32_t)(ECX));
  /* 1102483c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102483f push edx */
  push32((uint32_t)(EDX));
  /* 11024840 call dword ptr [0x110432c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432c8))), 0x11024846u);
  /* 11024846 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11024848 jne 0x1102484e */
  if (!C.zf) goto L_1102484e;
  /* 1102484a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1102484c jmp 0x110248a1 */
  goto L_110248a1;
L_1102484e:;
  /* 1102484e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024852 jne 0x11024876 */
  if (!C.zf) goto L_11024876;
  /* 11024854 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024856 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024858 push 0 */
  push32((uint32_t)(0x0u));
  /* 1102485a push 0 */
  push32((uint32_t)(0x0u));
  /* 1102485c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1102485e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11024861 push eax */
  push32((uint32_t)(EAX));
  /* 11024862 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11024867 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1102486a push ecx */
  push32((uint32_t)(ECX));
  /* 1102486b call dword ptr [0x1104335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104335c))), 0x11024871u);
  /* 11024871 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11024874 jmp 0x1102489a */
  goto L_1102489a;
L_11024876:;
  /* 11024876 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024878 push 0 */
  push32((uint32_t)(0x0u));
  /* 1102487a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1102487d push edx */
  push32((uint32_t)(EDX));
  /* 1102487e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11024881 push eax */
  push32((uint32_t)(EAX));
  /* 11024882 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11024884 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11024887 push ecx */
  push32((uint32_t)(ECX));
  /* 11024888 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1102488d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11024890 push edx */
  push32((uint32_t)(EDX));
  /* 11024891 call dword ptr [0x1104335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104335c))), 0x11024897u);
  /* 11024897 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1102489a:;
  /* 1102489a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1102489d jmp 0x110248a1 */
  goto L_110248a1;
L_1102489f:;
  /* 1102489f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110248a1:;
  /* 110248a1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 110248a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110248a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 110248ae pop edi */
  EDI = (pop32());
  /* 110248af pop esi */
  ESI = (pop32());
  /* 110248b0 pop ebx */
  EBX = (pop32());
  /* 110248b1 mov esp, ebp */
  ESP = (EBP);
  /* 110248b3 pop ebp */
  EBP = (pop32());
  /* 110248b4 ret  */
  ESPCHK(0x11024710u, _esp0);
  ESP += 4; return;
}

/* FUN_100148c0 @ 0x110248c0 (11 bytes, 6 insns) */
void f_110248c0(void) {
  FTRACE(0x110248c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110248c0 push ebp */
  push32((uint32_t)(EBP));
  /* 110248c1 mov ebp, esp */
  EBP = (ESP);
  /* 110248c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110248c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110248c9 pop ebp */
  EBP = (pop32());
  /* 110248ca ret  */
  ESPCHK(0x110248c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100148d0 @ 0x110248d0 (147 bytes, 43 insns) */
void f_110248d0(void) {
  FTRACE(0x110248d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110248d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110248d1 mov ebp, esp */
  EBP = (ESP);
  /* 110248d3 push ecx */
  push32((uint32_t)(ECX));
  /* 110248d4 cmp dword ptr [0x110407d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110407d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110248db jne 0x110248f7 */
  if (!C.zf) goto L_110248f7;
  /* 110248dd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110248e1 jl 0x110248f2 */
  if ((C.sf!=C.of)) goto L_110248f2;
  /* 110248e3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110248e7 jg 0x110248f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_110248f2;
  /* 110248e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110248ec add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110248ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_110248f2:;
  /* 110248f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110248f5 jmp 0x1102495f */
  goto L_1102495f;
L_110248f7:;
  /* 110248f7 push 0x1104095c */
  push32((uint32_t)(0x1104095cu));
  /* 110248fc call dword ptr [0x11043388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043388))), 0x11024902u);
  /* 11024902 cmp dword ptr [0x1104094c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104094c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024909 je 0x11024929 */
  if (C.zf) goto L_11024929;
  /* 1102490b push 0x1104095c */
  push32((uint32_t)(0x1104095cu));
  /* 11024910 call dword ptr [0x11043378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043378))), 0x11024916u);
  /* 11024916 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11024918 call 0x11018b30 */
  push32(0x1102491du); f_11018b30();
  /* 1102491d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024920 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11024927 jmp 0x11024930 */
  goto L_11024930;
L_11024929:;
  /* 11024929 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11024930:;
  /* 11024930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024933 push ecx */
  push32((uint32_t)(ECX));
  /* 11024934 call 0x11024970 */
  push32(0x11024939u); f_11024970();
  /* 11024939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102493c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1102493f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024943 je 0x11024951 */
  if (C.zf) goto L_11024951;
  /* 11024945 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11024947 call 0x11018bd0 */
  push32(0x1102494cu); f_11018bd0();
  /* 1102494c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102494f jmp 0x1102495c */
  goto L_1102495c;
L_11024951:;
  /* 11024951 push 0x1104095c */
  push32((uint32_t)(0x1104095cu));
  /* 11024956 call dword ptr [0x11043378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043378))), 0x1102495cu);
L_1102495c:;
  /* 1102495c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1102495f:;
  /* 1102495f mov esp, ebp */
  ESP = (EBP);
  /* 11024961 pop ebp */
  EBP = (pop32());
  /* 11024962 ret  */
  ESPCHK(0x110248d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014970 @ 0x11024970 (299 bytes, 91 insns) */
void f_11024970(void) {
  FTRACE(0x11024970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11024970 push ebp */
  push32((uint32_t)(EBP));
  /* 11024971 mov ebp, esp */
  EBP = (ESP);
  /* 11024973 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11024976 cmp dword ptr [0x110407d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110407d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102497d jne 0x1102499c */
  if (!C.zf) goto L_1102499c;
  /* 1102497f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024983 jl 0x11024994 */
  if ((C.sf!=C.of)) goto L_11024994;
  /* 11024985 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024989 jg 0x11024994 */
  if ((!C.zf&&C.sf==C.of)) goto L_11024994;
  /* 1102498b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102498e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11024991 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11024994:;
  /* 11024994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024997 jmp 0x11024a97 */
  goto L_11024a97;
L_1102499c:;
  /* 1102499c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110249a3 jge 0x110249e3 */
  if ((C.sf==C.of)) goto L_110249e3;
  /* 110249a5 cmp dword ptr [0x1103eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1103eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110249ac jle 0x110249c1 */
  if ((C.zf||C.sf!=C.of)) goto L_110249c1;
  /* 110249ae push 1 */
  push32((uint32_t)(0x1u));
  /* 110249b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110249b3 push ecx */
  push32((uint32_t)(ECX));
  /* 110249b4 call 0x1101b140 */
  push32(0x110249b9u); f_1101b140();
  /* 110249b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110249bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 110249bf jmp 0x110249d5 */
  goto L_110249d5;
L_110249c1:;
  /* 110249c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110249c4 mov eax, dword ptr [0x1103ec98] */
  EAX = (r32((uint32_t)(0x1103ec98)));
  /* 110249c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110249cb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 110249cf and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 110249d2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_110249d5:;
  /* 110249d5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110249d9 jne 0x110249e3 */
  if (!C.zf) goto L_110249e3;
  /* 110249db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110249de jmp 0x11024a97 */
  goto L_11024a97;
L_110249e3:;
  /* 110249e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110249e6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 110249e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 110249ef and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 110249f5 mov eax, dword ptr [0x1103ec98] */
  EAX = (r32((uint32_t)(0x1103ec98)));
  /* 110249fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110249fc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11024a00 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11024a06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11024a08 je 0x11024a2c */
  if (C.zf) goto L_11024a2c;
  /* 11024a0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024a0d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11024a10 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11024a16 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11024a19 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11024a1c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11024a1f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11024a23 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11024a2a jmp 0x11024a3d */
  goto L_11024a3d;
L_11024a2c:;
  /* 11024a2c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11024a2f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11024a32 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11024a36 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11024a3d:;
  /* 11024a3d push 1 */
  push32((uint32_t)(0x1u));
  /* 11024a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11024a41 push 3 */
  push32((uint32_t)(0x3u));
  /* 11024a43 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11024a46 push edx */
  push32((uint32_t)(EDX));
  /* 11024a47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11024a4a push eax */
  push32((uint32_t)(EAX));
  /* 11024a4b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11024a4e push ecx */
  push32((uint32_t)(ECX));
  /* 11024a4f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11024a54 mov edx, dword ptr [0x110407d0] */
  EDX = (r32((uint32_t)(0x110407d0)));
  /* 11024a5a push edx */
  push32((uint32_t)(EDX));
  /* 11024a5b call 0x1101d520 */
  push32(0x11024a60u); f_1101d520();
  /* 11024a60 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024a63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11024a66 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024a6a jne 0x11024a71 */
  if (!C.zf) goto L_11024a71;
  /* 11024a6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024a6f jmp 0x11024a97 */
  goto L_11024a97;
L_11024a71:;
  /* 11024a71 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024a75 jne 0x11024a81 */
  if (!C.zf) goto L_11024a81;
  /* 11024a77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11024a7a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11024a7f jmp 0x11024a97 */
  goto L_11024a97;
L_11024a81:;
  /* 11024a81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11024a84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11024a89 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11024a8c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11024a92 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11024a95 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11024a97:;
  /* 11024a97 mov esp, ebp */
  ESP = (EBP);
  /* 11024a99 pop ebp */
  EBP = (pop32());
  /* 11024a9a ret  */
  ESPCHK(0x11024970u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11024aa0 (52 bytes, 19 insns) */
void f_11024aa0(void) {
  FTRACE(0x11024aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11024aa0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11024aa4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11024aa8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11024aaa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11024aae jne 0x11024ab9 */
  if (!C.zf) goto L_11024ab9;
  /* 11024ab0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11024ab4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11024ab6 ret 0x10 */
  ESPCHK(0x11024aa0u, _esp0);
  ESP += 20; return;
L_11024ab9:;
  /* 11024ab9 push ebx */
  push32((uint32_t)(EBX));
  /* 11024aba mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11024abc mov ebx, eax */
  EBX = (EAX);
  /* 11024abe mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11024ac2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11024ac6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11024ac8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11024acc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11024ace add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11024ad0 pop ebx */
  EBX = (pop32());
  /* 11024ad1 ret 0x10 */
  ESPCHK(0x11024aa0u, _esp0);
  ESP += 20; return;
}

/* FUN_10014ae0 @ 0x11024ae0 (46 bytes, 18 insns) */
void f_11024ae0(void) {
  FTRACE(0x11024ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11024ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11024ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11024ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 11024ae4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11024ae6 call 0x11018b30 */
  push32(0x11024aebu); f_11018b30();
  /* 11024aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024aee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024af1 push eax */
  push32((uint32_t)(EAX));
  /* 11024af2 call 0x11024b10 */
  push32(0x11024af7u); f_11024b10();
  /* 11024af7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024afa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11024afd push 0xc */
  push32((uint32_t)(0xcu));
  /* 11024aff call 0x11018bd0 */
  push32(0x11024b04u); f_11018bd0();
  /* 11024b04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024b07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11024b0a mov esp, ebp */
  ESP = (EBP);
  /* 11024b0c pop ebp */
  EBP = (pop32());
  /* 11024b0d ret  */
  ESPCHK(0x11024ae0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11024b10 (198 bytes, 69 insns) */
void f_11024b10(void) {
  FTRACE(0x11024b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11024b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11024b11 mov ebp, esp */
  EBP = (ESP);
  /* 11024b13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11024b16 mov eax, dword ptr [0x110405ec] */
  EAX = (r32((uint32_t)(0x110405ec)));
  /* 11024b1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11024b1e cmp dword ptr [0x110420e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110420e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024b25 jne 0x11024b2e */
  if (!C.zf) goto L_11024b2e;
  /* 11024b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024b29 jmp 0x11024bd2 */
  goto L_11024bd2;
L_11024b2e:;
  /* 11024b2e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024b32 jne 0x11024b56 */
  if (!C.zf) goto L_11024b56;
  /* 11024b34 cmp dword ptr [0x110405f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110405f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024b3b je 0x11024b56 */
  if (C.zf) goto L_11024b56;
  /* 11024b3d call 0x11024c30 */
  push32(0x11024b42u); f_11024c30();
  /* 11024b42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11024b44 je 0x11024b4d */
  if (C.zf) goto L_11024b4d;
  /* 11024b46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024b48 jmp 0x11024bd2 */
  goto L_11024bd2;
L_11024b4d:;
  /* 11024b4d mov ecx, dword ptr [0x110405ec] */
  ECX = (r32((uint32_t)(0x110405ec)));
  /* 11024b53 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11024b56:;
  /* 11024b56 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024b5a je 0x11024bd0 */
  if (C.zf) goto L_11024bd0;
  /* 11024b5c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024b60 je 0x11024bd0 */
  if (C.zf) goto L_11024bd0;
  /* 11024b62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024b65 push edx */
  push32((uint32_t)(EDX));
  /* 11024b66 call 0x11017f60 */
  push32(0x11024b6bu); f_11017f60();
  /* 11024b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024b6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11024b71:;
  /* 11024b71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11024b74 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024b77 je 0x11024bd0 */
  if (C.zf) goto L_11024bd0;
  /* 11024b79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11024b7c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11024b7e push edx */
  push32((uint32_t)(EDX));
  /* 11024b7f call 0x11017f60 */
  push32(0x11024b84u); f_11017f60();
  /* 11024b84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024b87 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024b8a jbe 0x11024bc5 */
  if ((C.cf||C.zf)) goto L_11024bc5;
  /* 11024b8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11024b8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11024b91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11024b94 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11024b98 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024b9b jne 0x11024bc5 */
  if (!C.zf) goto L_11024bc5;
  /* 11024b9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11024ba0 push ecx */
  push32((uint32_t)(ECX));
  /* 11024ba1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024ba4 push edx */
  push32((uint32_t)(EDX));
  /* 11024ba5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11024ba8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11024baa push ecx */
  push32((uint32_t)(ECX));
  /* 11024bab call 0x11024be0 */
  push32(0x11024bb0u); f_11024be0();
  /* 11024bb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024bb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11024bb5 jne 0x11024bc5 */
  if (!C.zf) goto L_11024bc5;
  /* 11024bb7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11024bba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11024bbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11024bbf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11024bc3 jmp 0x11024bd2 */
  goto L_11024bd2;
L_11024bc5:;
  /* 11024bc5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11024bc8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11024bcb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11024bce jmp 0x11024b71 */
  goto L_11024b71;
L_11024bd0:;
  /* 11024bd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11024bd2:;
  /* 11024bd2 mov esp, ebp */
  ESP = (EBP);
  /* 11024bd4 pop ebp */
  EBP = (pop32());
  /* 11024bd5 ret  */
  ESPCHK(0x11024b10u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11024be0 (79 bytes, 32 insns) */
void f_11024be0(void) {
  FTRACE(0x11024be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11024be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11024be1 mov ebp, esp */
  EBP = (ESP);
  /* 11024be3 push ecx */
  push32((uint32_t)(ECX));
  /* 11024be4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024be8 jne 0x11024bee */
  if (!C.zf) goto L_11024bee;
  /* 11024bea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024bec jmp 0x11024c2b */
  goto L_11024c2b;
L_11024bee:;
  /* 11024bee mov eax, dword ptr [0x11041ca4] */
  EAX = (r32((uint32_t)(0x11041ca4)));
  /* 11024bf3 push eax */
  push32((uint32_t)(EAX));
  /* 11024bf4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11024bf7 push ecx */
  push32((uint32_t)(ECX));
  /* 11024bf8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11024bfb push edx */
  push32((uint32_t)(EDX));
  /* 11024bfc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11024bff push eax */
  push32((uint32_t)(EAX));
  /* 11024c00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024c03 push ecx */
  push32((uint32_t)(ECX));
  /* 11024c04 push 1 */
  push32((uint32_t)(0x1u));
  /* 11024c06 mov edx, dword ptr [0x11041f44] */
  EDX = (r32((uint32_t)(0x11041f44)));
  /* 11024c0c push edx */
  push32((uint32_t)(EDX));
  /* 11024c0d call 0x11024ce0 */
  push32(0x11024c12u); f_11024ce0();
  /* 11024c12 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024c15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11024c18 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024c1c jne 0x11024c25 */
  if (!C.zf) goto L_11024c25;
  /* 11024c1e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11024c23 jmp 0x11024c2b */
  goto L_11024c2b;
L_11024c25:;
  /* 11024c25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11024c28 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11024c2b:;
  /* 11024c2b mov esp, ebp */
  ESP = (EBP);
  /* 11024c2d pop ebp */
  EBP = (pop32());
  /* 11024c2e ret  */
  ESPCHK(0x11024be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c30 @ 0x11024c30 (174 bytes, 66 insns) */
void f_11024c30(void) {
  FTRACE(0x11024c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11024c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11024c31 mov ebp, esp */
  EBP = (ESP);
  /* 11024c33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11024c36 mov eax, dword ptr [0x110405f4] */
  EAX = (r32((uint32_t)(0x110405f4)));
  /* 11024c3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11024c3e:;
  /* 11024c3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11024c41 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024c44 je 0x11024cd8 */
  if (C.zf) goto L_11024cd8;
  /* 11024c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11024c4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11024c4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11024c50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024c52 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11024c54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11024c57 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11024c59 push eax */
  push32((uint32_t)(EAX));
  /* 11024c5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11024c5c push 1 */
  push32((uint32_t)(0x1u));
  /* 11024c5e call dword ptr [0x1104335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104335c))), 0x11024c64u);
  /* 11024c64 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11024c67 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024c6b jne 0x11024c72 */
  if (!C.zf) goto L_11024c72;
  /* 11024c6d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11024c70 jmp 0x11024cda */
  goto L_11024cda;
L_11024c72:;
  /* 11024c72 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11024c74 push 0x1103cb3c */
  push32((uint32_t)(0x1103cb3cu));
  /* 11024c79 push 2 */
  push32((uint32_t)(0x2u));
  /* 11024c7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11024c7e push ecx */
  push32((uint32_t)(ECX));
  /* 11024c7f call 0x11015130 */
  push32(0x11024c84u); f_11015130();
  /* 11024c84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024c87 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11024c8a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024c8e jne 0x11024c95 */
  if (!C.zf) goto L_11024c95;
  /* 11024c90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11024c93 jmp 0x11024cda */
  goto L_11024cda;
L_11024c95:;
  /* 11024c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024c99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11024c9c push edx */
  push32((uint32_t)(EDX));
  /* 11024c9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11024ca0 push eax */
  push32((uint32_t)(EAX));
  /* 11024ca1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11024ca3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11024ca6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11024ca8 push edx */
  push32((uint32_t)(EDX));
  /* 11024ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024cab push 1 */
  push32((uint32_t)(0x1u));
  /* 11024cad call dword ptr [0x1104335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104335c))), 0x11024cb3u);
  /* 11024cb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11024cb5 jne 0x11024cbc */
  if (!C.zf) goto L_11024cbc;
  /* 11024cb7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11024cba jmp 0x11024cda */
  goto L_11024cda;
L_11024cbc:;
  /* 11024cbc push 0 */
  push32((uint32_t)(0x0u));
  /* 11024cbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11024cc1 push eax */
  push32((uint32_t)(EAX));
  /* 11024cc2 call 0x11025130 */
  push32(0x11024cc7u); f_11025130();
  /* 11024cc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024cca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11024ccd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11024cd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11024cd3 jmp 0x11024c3e */
  goto L_11024c3e;
L_11024cd8:;
  /* 11024cd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11024cda:;
  /* 11024cda mov esp, ebp */
  ESP = (EBP);
  /* 11024cdc pop ebp */
  EBP = (pop32());
  /* 11024cdd ret  */
  ESPCHK(0x11024c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ce0 @ 0x11024ce0 (970 bytes, 340 insns) */
void f_11024ce0(void) {
  FTRACE(0x11024ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11024ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11024ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11024ce3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11024ce5 push 0x1103cb90 */
  push32((uint32_t)(0x1103cb90u));
  /* 11024cea push 0x1101e238 */
  push32((uint32_t)(0x1101e238u));
  /* 11024cef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11024cf5 push eax */
  push32((uint32_t)(EAX));
  /* 11024cf6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11024cfd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024d00 push ebx */
  push32((uint32_t)(EBX));
  /* 11024d01 push esi */
  push32((uint32_t)(ESI));
  /* 11024d02 push edi */
  push32((uint32_t)(EDI));
  /* 11024d03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11024d06 cmp dword ptr [0x11040934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024d0d jne 0x11024d66 */
  if (!C.zf) goto L_11024d66;
  /* 11024d0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11024d11 push 0x1103c1e8 */
  push32((uint32_t)(0x1103c1e8u));
  /* 11024d16 push 1 */
  push32((uint32_t)(0x1u));
  /* 11024d18 push 0x1103c1e8 */
  push32((uint32_t)(0x1103c1e8u));
  /* 11024d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11024d1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11024d21 call dword ptr [0x110432c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432c4))), 0x11024d27u);
  /* 11024d27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11024d29 je 0x11024d37 */
  if (C.zf) goto L_11024d37;
  /* 11024d2b mov dword ptr [0x11040934], 1 */
  w32((uint32_t)(0x11040934), (0x1u));
  /* 11024d35 jmp 0x11024d66 */
  goto L_11024d66;
L_11024d37:;
  /* 11024d37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11024d39 push 0x1103c1e4 */
  push32((uint32_t)(0x1103c1e4u));
  /* 11024d3e push 1 */
  push32((uint32_t)(0x1u));
  /* 11024d40 push 0x1103c1e4 */
  push32((uint32_t)(0x1103c1e4u));
  /* 11024d45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024d49 call dword ptr [0x110432d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432d0))), 0x11024d4fu);
  /* 11024d4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11024d51 je 0x11024d5f */
  if (C.zf) goto L_11024d5f;
  /* 11024d53 mov dword ptr [0x11040934], 2 */
  w32((uint32_t)(0x11040934), (0x2u));
  /* 11024d5d jmp 0x11024d66 */
  goto L_11024d66;
L_11024d5f:;
  /* 11024d5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024d61 jmp 0x110250c4 */
  goto L_110250c4;
L_11024d66:;
  /* 11024d66 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024d6a jle 0x11024d7f */
  if ((C.zf||C.sf!=C.of)) goto L_11024d7f;
  /* 11024d6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11024d6f push eax */
  push32((uint32_t)(EAX));
  /* 11024d70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11024d73 push ecx */
  push32((uint32_t)(ECX));
  /* 11024d74 call 0x110250e0 */
  push32(0x11024d79u); f_110250e0();
  /* 11024d79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024d7c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11024d7f:;
  /* 11024d7f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024d83 jle 0x11024d98 */
  if ((C.zf||C.sf!=C.of)) goto L_11024d98;
  /* 11024d85 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11024d88 push edx */
  push32((uint32_t)(EDX));
  /* 11024d89 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11024d8c push eax */
  push32((uint32_t)(EAX));
  /* 11024d8d call 0x110250e0 */
  push32(0x11024d92u); f_110250e0();
  /* 11024d92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024d95 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11024d98:;
  /* 11024d98 cmp dword ptr [0x11040934], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11040934))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024d9f jne 0x11024dc4 */
  if (!C.zf) goto L_11024dc4;
  /* 11024da1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11024da4 push ecx */
  push32((uint32_t)(ECX));
  /* 11024da5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11024da8 push edx */
  push32((uint32_t)(EDX));
  /* 11024da9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11024dac push eax */
  push32((uint32_t)(EAX));
  /* 11024dad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11024db0 push ecx */
  push32((uint32_t)(ECX));
  /* 11024db1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11024db4 push edx */
  push32((uint32_t)(EDX));
  /* 11024db5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11024db8 push eax */
  push32((uint32_t)(EAX));
  /* 11024db9 call dword ptr [0x110432d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432d0))), 0x11024dbfu);
  /* 11024dbf jmp 0x110250c4 */
  goto L_110250c4;
L_11024dc4:;
  /* 11024dc4 cmp dword ptr [0x11040934], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11040934))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024dcb jne 0x110250c2 */
  if (!C.zf) goto L_110250c2;
  /* 11024dd1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024dd5 jne 0x11024de0 */
  if (!C.zf) goto L_11024de0;
  /* 11024dd7 mov ecx, dword ptr [0x110407e0] */
  ECX = (r32((uint32_t)(0x110407e0)));
  /* 11024ddd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11024de0:;
  /* 11024de0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024de4 je 0x11024df0 */
  if (C.zf) goto L_11024df0;
  /* 11024de6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024dea jne 0x11024f6c */
  if (!C.zf) goto L_11024f6c;
L_11024df0:;
  /* 11024df0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11024df3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024df6 jne 0x11024e02 */
  if (!C.zf) goto L_11024e02;
  /* 11024df8 mov eax, 2 */
  EAX = (0x2u);
  /* 11024dfd jmp 0x110250c4 */
  goto L_110250c4;
L_11024e02:;
  /* 11024e02 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024e06 jle 0x11024e12 */
  if ((C.zf||C.sf!=C.of)) goto L_11024e12;
  /* 11024e08 mov eax, 1 */
  EAX = (0x1u);
  /* 11024e0d jmp 0x110250c4 */
  goto L_110250c4;
L_11024e12:;
  /* 11024e12 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024e16 jle 0x11024e22 */
  if ((C.zf||C.sf!=C.of)) goto L_11024e22;
  /* 11024e18 mov eax, 3 */
  EAX = (0x3u);
  /* 11024e1d jmp 0x110250c4 */
  goto L_110250c4;
L_11024e22:;
  /* 11024e22 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11024e25 push eax */
  push32((uint32_t)(EAX));
  /* 11024e26 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11024e29 push ecx */
  push32((uint32_t)(ECX));
  /* 11024e2a call dword ptr [0x1104331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104331c))), 0x11024e30u);
  /* 11024e30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11024e32 jne 0x11024e3b */
  if (!C.zf) goto L_11024e3b;
  /* 11024e34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024e36 jmp 0x110250c4 */
  goto L_110250c4;
L_11024e3b:;
  /* 11024e3b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024e3f jne 0x11024e47 */
  if (!C.zf) goto L_11024e47;
  /* 11024e41 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024e45 je 0x11024e74 */
  if (C.zf) goto L_11024e74;
L_11024e47:;
  /* 11024e47 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024e4b jne 0x11024e53 */
  if (!C.zf) goto L_11024e53;
  /* 11024e4d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024e51 je 0x11024e74 */
  if (C.zf) goto L_11024e74;
L_11024e53:;
  /* 11024e53 push 0x1103cb50 */
  push32((uint32_t)(0x1103cb50u));
  /* 11024e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11024e5a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11024e5f push 0x1103cb48 */
  push32((uint32_t)(0x1103cb48u));
  /* 11024e64 push 2 */
  push32((uint32_t)(0x2u));
  /* 11024e66 call 0x110141f0 */
  push32(0x11024e6bu); f_110141f0();
  /* 11024e6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11024e6e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024e71 jne 0x11024e74 */
  if (!C.zf) goto L_11024e74;
  /* 11024e73 int3  */
  x86_unimpl("int3 @ 0x11024e73");
L_11024e74:;
  /* 11024e74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11024e76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11024e78 jne 0x11024e3b */
  if (!C.zf) goto L_11024e3b;
  /* 11024e7a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024e7e jle 0x11024ef3 */
  if ((C.zf||C.sf!=C.of)) goto L_11024ef3;
  /* 11024e80 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024e84 jae 0x11024e90 */
  if (!C.cf) goto L_11024e90;
  /* 11024e86 mov eax, 3 */
  EAX = (0x3u);
  /* 11024e8b jmp 0x110250c4 */
  goto L_110250c4;
L_11024e90:;
  /* 11024e90 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11024e93 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11024e96 jmp 0x11024ea1 */
  goto L_11024ea1;
L_11024e98:;
  /* 11024e98 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11024e9b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11024e9e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11024ea1:;
  /* 11024ea1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11024ea4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024ea6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11024ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11024eaa je 0x11024ee9 */
  if (C.zf) goto L_11024ee9;
  /* 11024eac mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11024eaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11024eb1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11024eb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11024eb6 je 0x11024ee9 */
  if (C.zf) goto L_11024ee9;
  /* 11024eb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11024ebb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11024ebd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11024ebf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11024ec2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024ec4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11024ec6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024ec8 jl 0x11024ee7 */
  if ((C.sf!=C.of)) goto L_11024ee7;
  /* 11024eca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11024ecd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11024ecf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11024ed1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11024ed4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11024ed6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11024ed9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024edb jg 0x11024ee7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11024ee7;
  /* 11024edd mov eax, 2 */
  EAX = (0x2u);
  /* 11024ee2 jmp 0x110250c4 */
  goto L_110250c4;
L_11024ee7:;
  /* 11024ee7 jmp 0x11024e98 */
  goto L_11024e98;
L_11024ee9:;
  /* 11024ee9 mov eax, 3 */
  EAX = (0x3u);
  /* 11024eee jmp 0x110250c4 */
  goto L_110250c4;
L_11024ef3:;
  /* 11024ef3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024ef7 jle 0x11024f6c */
  if ((C.zf||C.sf!=C.of)) goto L_11024f6c;
  /* 11024ef9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024efd jae 0x11024f09 */
  if (!C.cf) goto L_11024f09;
  /* 11024eff mov eax, 1 */
  EAX = (0x1u);
  /* 11024f04 jmp 0x110250c4 */
  goto L_110250c4;
L_11024f09:;
  /* 11024f09 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11024f0c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11024f0f jmp 0x11024f1a */
  goto L_11024f1a;
L_11024f11:;
  /* 11024f11 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11024f14 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11024f17 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11024f1a:;
  /* 11024f1a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11024f1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11024f1f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11024f21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11024f23 je 0x11024f62 */
  if (C.zf) goto L_11024f62;
  /* 11024f25 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11024f28 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11024f2a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11024f2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11024f2f je 0x11024f62 */
  if (C.zf) goto L_11024f62;
  /* 11024f31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11024f34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024f36 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11024f38 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11024f3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11024f3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11024f3f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024f41 jl 0x11024f60 */
  if ((C.sf!=C.of)) goto L_11024f60;
  /* 11024f43 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11024f46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11024f48 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11024f4a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11024f4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024f4f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11024f52 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024f54 jg 0x11024f60 */
  if ((!C.zf&&C.sf==C.of)) goto L_11024f60;
  /* 11024f56 mov eax, 2 */
  EAX = (0x2u);
  /* 11024f5b jmp 0x110250c4 */
  goto L_110250c4;
L_11024f60:;
  /* 11024f60 jmp 0x11024f11 */
  goto L_11024f11;
L_11024f62:;
  /* 11024f62 mov eax, 1 */
  EAX = (0x1u);
  /* 11024f67 jmp 0x110250c4 */
  goto L_110250c4;
L_11024f6c:;
  /* 11024f6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11024f6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11024f70 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11024f73 push ecx */
  push32((uint32_t)(ECX));
  /* 11024f74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11024f77 push edx */
  push32((uint32_t)(EDX));
  /* 11024f78 push 9 */
  push32((uint32_t)(0x9u));
  /* 11024f7a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11024f7d push eax */
  push32((uint32_t)(EAX));
  /* 11024f7e call dword ptr [0x11043310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043310))), 0x11024f84u);
  /* 11024f84 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11024f87 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024f8b jne 0x11024f94 */
  if (!C.zf) goto L_11024f94;
  /* 11024f8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024f8f jmp 0x110250c4 */
  goto L_110250c4;
L_11024f94:;
  /* 11024f94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11024f9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11024f9e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11024fa0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11024fa3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11024fa5 call 0x110182d0 */
  push32(0x11024faau); f_110182d0();
  /* 11024faa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11024fad mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11024fb0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11024fb3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11024fb6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11024fbd jmp 0x11024fd6 */
  goto L_11024fd6;
  /* 11024fbf mov eax, 1 */
  EAX = (0x1u);
  /* 11024fc4 ret  */
  ESPCHK(0x11024ce0u, _esp0);
  ESP += 4; return;
  /* 11024fc5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11024fc8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11024fcf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11024fd6:;
  /* 11024fd6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11024fda jne 0x11024fe3 */
  if (!C.zf) goto L_11024fe3;
  /* 11024fdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11024fde jmp 0x110250c4 */
  goto L_110250c4;
L_11024fe3:;
  /* 11024fe3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11024fe6 push edx */
  push32((uint32_t)(EDX));
  /* 11024fe7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11024fea push eax */
  push32((uint32_t)(EAX));
  /* 11024feb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11024fee push ecx */
  push32((uint32_t)(ECX));
  /* 11024fef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11024ff2 push edx */
  push32((uint32_t)(EDX));
  /* 11024ff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11024ff5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11024ff8 push eax */
  push32((uint32_t)(EAX));
  /* 11024ff9 call dword ptr [0x11043310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043310))), 0x11024fffu);
  /* 11024fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11025001 jne 0x1102500a */
  if (!C.zf) goto L_1102500a;
  /* 11025003 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11025005 jmp 0x110250c4 */
  goto L_110250c4;
L_1102500a:;
  /* 1102500a push 0 */
  push32((uint32_t)(0x0u));
  /* 1102500c push 0 */
  push32((uint32_t)(0x0u));
  /* 1102500e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11025011 push ecx */
  push32((uint32_t)(ECX));
  /* 11025012 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11025015 push edx */
  push32((uint32_t)(EDX));
  /* 11025016 push 9 */
  push32((uint32_t)(0x9u));
  /* 11025018 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1102501b push eax */
  push32((uint32_t)(EAX));
  /* 1102501c call dword ptr [0x11043310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043310))), 0x11025022u);
  /* 11025022 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11025025 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11025029 jne 0x11025032 */
  if (!C.zf) goto L_11025032;
  /* 1102502b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1102502d jmp 0x110250c4 */
  goto L_110250c4;
L_11025032:;
  /* 11025032 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11025039 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1102503c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1102503e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11025041 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11025043 call 0x110182d0 */
  push32(0x11025048u); f_110182d0();
  /* 11025048 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1102504b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1102504e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11025051 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11025054 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1102505b jmp 0x11025074 */
  goto L_11025074;
  /* 1102505d mov eax, 1 */
  EAX = (0x1u);
  /* 11025062 ret  */
  ESPCHK(0x11024ce0u, _esp0);
  ESP += 4; return;
  /* 11025063 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11025066 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1102506d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11025074:;
  /* 11025074 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11025078 jne 0x1102507e */
  if (!C.zf) goto L_1102507e;
  /* 1102507a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1102507c jmp 0x110250c4 */
  goto L_110250c4;
L_1102507e:;
  /* 1102507e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11025081 push edx */
  push32((uint32_t)(EDX));
  /* 11025082 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11025085 push eax */
  push32((uint32_t)(EAX));
  /* 11025086 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11025089 push ecx */
  push32((uint32_t)(ECX));
  /* 1102508a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1102508d push edx */
  push32((uint32_t)(EDX));
  /* 1102508e push 1 */
  push32((uint32_t)(0x1u));
  /* 11025090 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11025093 push eax */
  push32((uint32_t)(EAX));
  /* 11025094 call dword ptr [0x11043310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043310))), 0x1102509au);
  /* 1102509a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1102509c jne 0x110250a2 */
  if (!C.zf) goto L_110250a2;
  /* 1102509e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110250a0 jmp 0x110250c4 */
  goto L_110250c4;
L_110250a2:;
  /* 110250a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 110250a5 push ecx */
  push32((uint32_t)(ECX));
  /* 110250a6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 110250a9 push edx */
  push32((uint32_t)(EDX));
  /* 110250aa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110250ad push eax */
  push32((uint32_t)(EAX));
  /* 110250ae mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110250b1 push ecx */
  push32((uint32_t)(ECX));
  /* 110250b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110250b5 push edx */
  push32((uint32_t)(EDX));
  /* 110250b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110250b9 push eax */
  push32((uint32_t)(EAX));
  /* 110250ba call dword ptr [0x110432c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432c4))), 0x110250c0u);
  /* 110250c0 jmp 0x110250c4 */
  goto L_110250c4;
L_110250c2:;
  /* 110250c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110250c4:;
  /* 110250c4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 110250c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110250ca mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 110250d1 pop edi */
  EDI = (pop32());
  /* 110250d2 pop esi */
  ESI = (pop32());
  /* 110250d3 pop ebx */
  EBX = (pop32());
  /* 110250d4 mov esp, ebp */
  ESP = (EBP);
  /* 110250d6 pop ebp */
  EBP = (pop32());
  /* 110250d7 ret  */
  ESPCHK(0x11024ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_100150e0 @ 0x110250e0 (80 bytes, 32 insns) */
void f_110250e0(void) {
  FTRACE(0x110250e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110250e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110250e1 mov ebp, esp */
  EBP = (ESP);
  /* 110250e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110250e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110250e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110250ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110250ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_110250f2:;
  /* 110250f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110250f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110250f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110250fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110250fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11025100 je 0x11025117 */
  if (C.zf) goto L_11025117;
  /* 11025102 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11025105 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11025108 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1102510a je 0x11025117 */
  if (C.zf) goto L_11025117;
  /* 1102510c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102510f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11025112 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11025115 jmp 0x110250f2 */
  goto L_110250f2;
L_11025117:;
  /* 11025117 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102511a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1102511d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1102511f jne 0x11025129 */
  if (!C.zf) goto L_11025129;
  /* 11025121 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11025124 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11025127 jmp 0x1102512c */
  goto L_1102512c;
L_11025129:;
  /* 11025129 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1102512c:;
  /* 1102512c mov esp, ebp */
  ESP = (EBP);
  /* 1102512e pop ebp */
  EBP = (pop32());
  /* 1102512f ret  */
  ESPCHK(0x110250e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015130 @ 0x11025130 (736 bytes, 224 insns) */
void f_11025130(void) {
  FTRACE(0x11025130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11025130 push ebp */
  push32((uint32_t)(EBP));
  /* 11025131 mov ebp, esp */
  EBP = (ESP);
  /* 11025133 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11025136 push esi */
  push32((uint32_t)(ESI));
  /* 11025137 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102513b je 0x1102515c */
  if (C.zf) goto L_1102515c;
  /* 1102513d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1102513f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11025142 push eax */
  push32((uint32_t)(EAX));
  /* 11025143 call 0x11025580 */
  push32(0x11025148u); f_11025580();
  /* 11025148 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102514b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1102514e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11025152 je 0x1102515c */
  if (C.zf) goto L_1102515c;
  /* 11025154 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11025157 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102515a jne 0x11025164 */
  if (!C.zf) goto L_11025164;
L_1102515c:;
  /* 1102515c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1102515f jmp 0x1102540b */
  goto L_1102540b;
L_11025164:;
  /* 11025164 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11025167 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1102516b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1102516d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1102516f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11025170 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11025173 mov ecx, dword ptr [0x110405ec] */
  ECX = (r32((uint32_t)(0x110405ec)));
  /* 11025179 cmp ecx, dword ptr [0x110405f0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110405f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102517f jne 0x11025195 */
  if (!C.zf) goto L_11025195;
  /* 11025181 mov edx, dword ptr [0x110405ec] */
  EDX = (r32((uint32_t)(0x110405ec)));
  /* 11025187 push edx */
  push32((uint32_t)(EDX));
  /* 11025188 call 0x11025490 */
  push32(0x1102518du); f_11025490();
  /* 1102518d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11025190 mov dword ptr [0x110405ec], eax */
  w32((uint32_t)(0x110405ec), (EAX));
L_11025195:;
  /* 11025195 cmp dword ptr [0x110405ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110405ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102519c jne 0x11025255 */
  if (!C.zf) goto L_11025255;
  /* 110251a2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110251a6 je 0x110251c7 */
  if (C.zf) goto L_110251c7;
  /* 110251a8 cmp dword ptr [0x110405f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110405f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110251af je 0x110251c7 */
  if (C.zf) goto L_110251c7;
  /* 110251b1 call 0x11024c30 */
  push32(0x110251b6u); f_11024c30();
  /* 110251b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110251b8 je 0x110251c2 */
  if (C.zf) goto L_110251c2;
  /* 110251ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110251bd jmp 0x1102540b */
  goto L_1102540b;
L_110251c2:;
  /* 110251c2 jmp 0x11025255 */
  goto L_11025255;
L_110251c7:;
  /* 110251c7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110251cb je 0x110251d4 */
  if (C.zf) goto L_110251d4;
  /* 110251cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110251cf jmp 0x1102540b */
  goto L_1102540b;
L_110251d4:;
  /* 110251d4 cmp dword ptr [0x110405ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110405ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110251db jne 0x11025214 */
  if (!C.zf) goto L_11025214;
  /* 110251dd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 110251e2 push 0x1103cba8 */
  push32((uint32_t)(0x1103cba8u));
  /* 110251e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 110251e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 110251eb call 0x11015130 */
  push32(0x110251f0u); f_11015130();
  /* 110251f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110251f3 mov dword ptr [0x110405ec], eax */
  w32((uint32_t)(0x110405ec), (EAX));
  /* 110251f8 cmp dword ptr [0x110405ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110405ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110251ff jne 0x11025209 */
  if (!C.zf) goto L_11025209;
  /* 11025201 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11025204 jmp 0x1102540b */
  goto L_1102540b;
L_11025209:;
  /* 11025209 mov eax, dword ptr [0x110405ec] */
  EAX = (r32((uint32_t)(0x110405ec)));
  /* 1102520e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11025214:;
  /* 11025214 cmp dword ptr [0x110405f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110405f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102521b jne 0x11025255 */
  if (!C.zf) goto L_11025255;
  /* 1102521d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11025222 push 0x1103cba8 */
  push32((uint32_t)(0x1103cba8u));
  /* 11025227 push 2 */
  push32((uint32_t)(0x2u));
  /* 11025229 push 4 */
  push32((uint32_t)(0x4u));
  /* 1102522b call 0x11015130 */
  push32(0x11025230u); f_11015130();
  /* 11025230 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11025233 mov dword ptr [0x110405f4], eax */
  w32((uint32_t)(0x110405f4), (EAX));
  /* 11025238 cmp dword ptr [0x110405f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110405f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102523f jne 0x11025249 */
  if (!C.zf) goto L_11025249;
  /* 11025241 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11025244 jmp 0x1102540b */
  goto L_1102540b;
L_11025249:;
  /* 11025249 mov ecx, dword ptr [0x110405f4] */
  ECX = (r32((uint32_t)(0x110405f4)));
  /* 1102524f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11025255:;
  /* 11025255 mov edx, dword ptr [0x110405ec] */
  EDX = (r32((uint32_t)(0x110405ec)));
  /* 1102525b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1102525e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11025261 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11025264 push eax */
  push32((uint32_t)(EAX));
  /* 11025265 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11025268 push ecx */
  push32((uint32_t)(ECX));
  /* 11025269 call 0x11025410 */
  push32(0x1102526eu); f_11025410();
  /* 1102526e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11025271 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11025274 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11025278 jl 0x11025311 */
  if ((C.sf!=C.of)) goto L_11025311;
  /* 1102527e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11025281 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11025284 je 0x11025311 */
  if (C.zf) goto L_11025311;
  /* 1102528a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102528e je 0x11025303 */
  if (C.zf) goto L_11025303;
  /* 11025290 push 2 */
  push32((uint32_t)(0x2u));
  /* 11025292 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11025295 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11025298 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1102529b push edx */
  push32((uint32_t)(EDX));
  /* 1102529c call 0x11015bc0 */
  push32(0x110252a1u); f_11015bc0();
  /* 110252a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110252a4 jmp 0x110252af */
  goto L_110252af;
L_110252a6:;
  /* 110252a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110252a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110252ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_110252af:;
  /* 110252af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110252b2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110252b5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110252b9 je 0x110252d0 */
  if (C.zf) goto L_110252d0;
  /* 110252bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110252be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110252c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110252c4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 110252c7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 110252cb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 110252ce jmp 0x110252a6 */
  goto L_110252a6;
L_110252d0:;
  /* 110252d0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 110252d5 push 0x1103cba8 */
  push32((uint32_t)(0x1103cba8u));
  /* 110252da push 2 */
  push32((uint32_t)(0x2u));
  /* 110252dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110252df shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 110252e2 push eax */
  push32((uint32_t)(EAX));
  /* 110252e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110252e6 push ecx */
  push32((uint32_t)(ECX));
  /* 110252e7 call 0x110155c0 */
  push32(0x110252ecu); f_110155c0();
  /* 110252ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110252ef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110252f2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110252f6 je 0x11025301 */
  if (C.zf) goto L_11025301;
  /* 110252f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110252fb mov dword ptr [0x110405ec], edx */
  w32((uint32_t)(0x110405ec), (EDX));
L_11025301:;
  /* 11025301 jmp 0x1102530f */
  goto L_1102530f;
L_11025303:;
  /* 11025303 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11025306 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11025309 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102530c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1102530f:;
  /* 1102530f jmp 0x11025384 */
  goto L_11025384;
L_11025311:;
  /* 11025311 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11025315 jne 0x1102537d */
  if (!C.zf) goto L_1102537d;
  /* 11025317 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102531b jge 0x11025325 */
  if ((C.sf==C.of)) goto L_11025325;
  /* 1102531d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11025320 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11025322 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11025325:;
  /* 11025325 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1102532a push 0x1103cba8 */
  push32((uint32_t)(0x1103cba8u));
  /* 1102532f push 2 */
  push32((uint32_t)(0x2u));
  /* 11025331 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11025334 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1102533b push edx */
  push32((uint32_t)(EDX));
  /* 1102533c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1102533f push eax */
  push32((uint32_t)(EAX));
  /* 11025340 call 0x110155c0 */
  push32(0x11025345u); f_110155c0();
  /* 11025345 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11025348 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1102534b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102534f jne 0x11025359 */
  if (!C.zf) goto L_11025359;
  /* 11025351 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11025354 jmp 0x1102540b */
  goto L_1102540b;
L_11025359:;
  /* 11025359 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1102535c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1102535f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11025362 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11025365 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11025368 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1102536b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11025373 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11025376 mov dword ptr [0x110405ec], eax */
  w32((uint32_t)(0x110405ec), (EAX));
  /* 1102537b jmp 0x11025384 */
  goto L_11025384;
L_1102537d:;
  /* 1102537d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1102537f jmp 0x1102540b */
  goto L_1102540b;
L_11025384:;
  /* 11025384 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11025388 je 0x11025409 */
  if (C.zf) goto L_11025409;
  /* 1102538a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1102538f push 0x1103cba8 */
  push32((uint32_t)(0x1103cba8u));
  /* 11025394 push 2 */
  push32((uint32_t)(0x2u));
  /* 11025396 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11025399 push ecx */
  push32((uint32_t)(ECX));
  /* 1102539a call 0x11017f60 */
  push32(0x1102539fu); f_11017f60();
  /* 1102539f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110253a2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110253a5 push eax */
  push32((uint32_t)(EAX));
  /* 110253a6 call 0x11015130 */
  push32(0x110253abu); f_11015130();
  /* 110253ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110253ae mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 110253b1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110253b5 je 0x11025409 */
  if (C.zf) goto L_11025409;
  /* 110253b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110253ba push edx */
  push32((uint32_t)(EDX));
  /* 110253bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110253be push eax */
  push32((uint32_t)(EAX));
  /* 110253bf call 0x110180e0 */
  push32(0x110253c4u); f_110180e0();
  /* 110253c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110253c7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110253ca sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110253cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110253d0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110253d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110253d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110253d8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 110253db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110253de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110253e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110253e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110253e7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 110253e9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110253eb not edx */
  EDX = (~(EDX));
  /* 110253ed and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 110253f0 push edx */
  push32((uint32_t)(EDX));
  /* 110253f1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110253f4 push eax */
  push32((uint32_t)(EAX));
  /* 110253f5 call dword ptr [0x110432c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432c0))), 0x110253fbu);
  /* 110253fb push 2 */
  push32((uint32_t)(0x2u));
  /* 110253fd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11025400 push ecx */
  push32((uint32_t)(ECX));
  /* 11025401 call 0x11015bc0 */
  push32(0x11025406u); f_11015bc0();
  /* 11025406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11025409:;
  /* 11025409 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1102540b:;
  /* 1102540b pop esi */
  ESI = (pop32());
  /* 1102540c mov esp, ebp */
  ESP = (EBP);
  /* 1102540e pop ebp */
  EBP = (pop32());
  /* 1102540f ret  */
  ESPCHK(0x11025130u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11025410 (124 bytes, 47 insns) */
void f_11025410(void) {
  FTRACE(0x11025410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11025410 push ebp */
  push32((uint32_t)(EBP));
  /* 11025411 mov ebp, esp */
  EBP = (ESP);
  /* 11025413 push ecx */
  push32((uint32_t)(ECX));
  /* 11025414 mov eax, dword ptr [0x110405ec] */
  EAX = (r32((uint32_t)(0x110405ec)));
  /* 11025419 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1102541c jmp 0x11025427 */
  goto L_11025427;
L_1102541e:;
  /* 1102541e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11025421 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11025424 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11025427:;
  /* 11025427 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102542a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102542d je 0x1102547a */
  if (C.zf) goto L_1102547a;
  /* 1102542f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11025432 push eax */
  push32((uint32_t)(EAX));
  /* 11025433 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11025436 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11025438 push edx */
  push32((uint32_t)(EDX));
  /* 11025439 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102543c push eax */
  push32((uint32_t)(EAX));
  /* 1102543d call 0x11024be0 */
  push32(0x11025442u); f_11024be0();
  /* 11025442 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11025445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11025447 jne 0x11025478 */
  if (!C.zf) goto L_11025478;
  /* 11025449 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102544c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1102544e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11025451 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11025455 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11025458 je 0x1102546a */
  if (C.zf) goto L_1102546a;
  /* 1102545a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102545d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1102545f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11025462 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11025466 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11025468 jne 0x11025478 */
  if (!C.zf) goto L_11025478;
L_1102546a:;
  /* 1102546a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102546d sub eax, dword ptr [0x110405ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110405ec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11025473 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11025476 jmp 0x11025488 */
  goto L_11025488;
L_11025478:;
  /* 11025478 jmp 0x1102541e */
  goto L_1102541e;
L_1102547a:;
  /* 1102547a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102547d sub eax, dword ptr [0x110405ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110405ec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11025483 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11025486 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11025488:;
  /* 11025488 mov esp, ebp */
  ESP = (EBP);
  /* 1102548a pop ebp */
  EBP = (pop32());
  /* 1102548b ret  */
  ESPCHK(0x11025410u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11025490 (238 bytes, 80 insns) */
void f_11025490(void) {
  FTRACE(0x11025490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11025490 push ebp */
  push32((uint32_t)(EBP));
  /* 11025491 mov ebp, esp */
  EBP = (ESP);
  /* 11025493 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11025496 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1102549d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110254a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110254a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110254a7 jne 0x110254b0 */
  if (!C.zf) goto L_110254b0;
  /* 110254a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110254ab jmp 0x1102557a */
  goto L_1102557a;
L_110254b0:;
  /* 110254b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110254b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110254b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110254b8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110254bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110254be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110254c0 je 0x110254cd */
  if (C.zf) goto L_110254cd;
  /* 110254c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110254c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110254c8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 110254cb jmp 0x110254b0 */
  goto L_110254b0;
L_110254cd:;
  /* 110254cd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 110254d2 push 0x1103cba8 */
  push32((uint32_t)(0x1103cba8u));
  /* 110254d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 110254d9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110254dc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 110254e3 push eax */
  push32((uint32_t)(EAX));
  /* 110254e4 call 0x11015130 */
  push32(0x110254e9u); f_11015130();
  /* 110254e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110254ec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110254ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110254f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110254f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110254f9 jne 0x11025505 */
  if (!C.zf) goto L_11025505;
  /* 110254fb push 9 */
  push32((uint32_t)(0x9u));
  /* 110254fd call 0x110140a0 */
  push32(0x11025502u); f_110140a0();
  /* 11025502 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11025505:;
  /* 11025505 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11025508 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1102550b:;
  /* 1102550b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1102550e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11025511 je 0x1102556e */
  if (C.zf) goto L_1102556e;
  /* 11025513 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11025518 push 0x1103cba8 */
  push32((uint32_t)(0x1103cba8u));
  /* 1102551d push 2 */
  push32((uint32_t)(0x2u));
  /* 1102551f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11025522 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11025524 push edx */
  push32((uint32_t)(EDX));
  /* 11025525 call 0x11017f60 */
  push32(0x1102552au); f_11017f60();
  /* 1102552a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102552d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11025530 push eax */
  push32((uint32_t)(EAX));
  /* 11025531 call 0x11015130 */
  push32(0x11025536u); f_11015130();
  /* 11025536 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11025539 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1102553c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1102553e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11025541 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11025544 je 0x1102555a */
  if (C.zf) goto L_1102555a;
  /* 11025546 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11025549 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1102554b push ecx */
  push32((uint32_t)(ECX));
  /* 1102554c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1102554f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11025551 push eax */
  push32((uint32_t)(EAX));
  /* 11025552 call 0x110180e0 */
  push32(0x11025557u); f_110180e0();
  /* 11025557 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1102555a:;
  /* 1102555a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1102555d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11025560 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11025563 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11025566 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11025569 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1102556c jmp 0x1102550b */
  goto L_1102550b;
L_1102556e:;
  /* 1102556e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11025571 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11025577 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1102557a:;
  /* 1102557a mov esp, ebp */
  ESP = (EBP);
  /* 1102557c pop ebp */
  EBP = (pop32());
  /* 1102557d ret  */
  ESPCHK(0x11025490u, _esp0);
  ESP += 4; return;
}

/* FUN_10015580 @ 0x11025580 (237 bytes, 81 insns) */
void f_11025580(void) {
  FTRACE(0x11025580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11025580 push ebp */
  push32((uint32_t)(EBP));
  /* 11025581 mov ebp, esp */
  EBP = (ESP);
  /* 11025583 push ecx */
  push32((uint32_t)(ECX));
  /* 11025584 cmp dword ptr [0x11041d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11041d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102558b jne 0x110255a2 */
  if (!C.zf) goto L_110255a2;
  /* 1102558d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11025590 push eax */
  push32((uint32_t)(EAX));
  /* 11025591 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11025594 push ecx */
  push32((uint32_t)(ECX));
  /* 11025595 call 0x11025680 */
  push32(0x1102559au); f_11025680();
  /* 1102559a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102559d jmp 0x11025669 */
  goto L_11025669;
L_110255a2:;
  /* 110255a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 110255a4 call 0x11018b30 */
  push32(0x110255a9u); f_11018b30();
  /* 110255a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110255ac jmp 0x110255b7 */
  goto L_110255b7;
L_110255ae:;
  /* 110255ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110255b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110255b4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_110255b7:;
  /* 110255b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110255ba movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 110255be mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 110255c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110255c5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 110255cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110255cd je 0x1102564b */
  if (C.zf) goto L_1102564b;
  /* 110255cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110255d2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110255d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110255d9 mov cl, byte ptr [eax + 0x11041e41] */
  CL = (r8((uint32_t)(EAX + 0x11041e41)));
  /* 110255df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 110255e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110255e4 je 0x11025636 */
  if (C.zf) goto L_11025636;
  /* 110255e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110255e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110255ec mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 110255ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110255f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110255f4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 110255f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110255f8 jne 0x11025608 */
  if (!C.zf) goto L_11025608;
  /* 110255fa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 110255fc call 0x11018bd0 */
  push32(0x11025601u); f_11018bd0();
  /* 11025601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11025604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11025606 jmp 0x11025669 */
  goto L_11025669;
L_11025608:;
  /* 11025608 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102560b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11025611 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11025614 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11025617 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11025619 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1102561b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1102561d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11025620 jne 0x11025634 */
  if (!C.zf) goto L_11025634;
  /* 11025622 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11025624 call 0x11018bd0 */
  push32(0x11025629u); f_11018bd0();
  /* 11025629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102562c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102562f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11025632 jmp 0x11025669 */
  goto L_11025669;
L_11025634:;
  /* 11025634 jmp 0x11025646 */
  goto L_11025646;
L_11025636:;
  /* 11025636 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11025639 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1102563f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11025642 jne 0x11025646 */
  if (!C.zf) goto L_11025646;
  /* 11025644 jmp 0x1102564b */
  goto L_1102564b;
L_11025646:;
  /* 11025646 jmp 0x110255ae */
  goto L_110255ae;
L_1102564b:;
  /* 1102564b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1102564d call 0x11018bd0 */
  push32(0x11025652u); f_11018bd0();
  /* 11025652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11025655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11025658 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1102565d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11025660 jne 0x11025667 */
  if (!C.zf) goto L_11025667;
  /* 11025662 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11025665 jmp 0x11025669 */
  goto L_11025669;
L_11025667:;
  /* 11025667 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11025669:;
  /* 11025669 mov esp, ebp */
  ESP = (EBP);
  /* 1102566b pop ebp */
  EBP = (pop32());
  /* 1102566c ret  */
  ESPCHK(0x11025580u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11025680 (193 bytes, 87 insns) */
void f_11025680(void) {
  FTRACE(0x11025680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11025680 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11025682 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11025686 push ebx */
  push32((uint32_t)(EBX));
  /* 11025687 mov ebx, eax */
  EBX = (EAX);
  /* 11025689 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1102568c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11025690 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11025696 je 0x110256ab */
  if (C.zf) goto L_110256ab;
L_11025698:;
  /* 11025698 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1102569a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1102569b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1102569d je 0x11025670 */
  if (C.zf) { jmp_ind(0x11025670u); return; }
  /* 1102569f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 110256a1 je 0x110256f4 */
  if (C.zf) goto L_110256f4;
  /* 110256a3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 110256a9 jne 0x11025698 */
  if (!C.zf) goto L_11025698;
L_110256ab:;
  /* 110256ab or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 110256ad push edi */
  push32((uint32_t)(EDI));
  /* 110256ae mov eax, ebx */
  EAX = (EBX);
  /* 110256b0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 110256b3 push esi */
  push32((uint32_t)(ESI));
  /* 110256b4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_110256b6:;
  /* 110256b6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 110256b8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 110256bd mov eax, ecx */
  EAX = (ECX);
  /* 110256bf mov esi, edi */
  ESI = (EDI);
  /* 110256c1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 110256c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110256c5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110256c7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110256ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110256cd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 110256cf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 110256d1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110256d4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 110256da jne 0x110256f8 */
  if (!C.zf) goto L_110256f8;
  /* 110256dc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 110256e1 je 0x110256b6 */
  if (C.zf) goto L_110256b6;
  /* 110256e3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 110256e8 jne 0x110256f2 */
  if (!C.zf) goto L_110256f2;
  /* 110256ea and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 110256f0 jne 0x110256b6 */
  if (!C.zf) goto L_110256b6;
L_110256f2:;
  /* 110256f2 pop esi */
  ESI = (pop32());
  /* 110256f3 pop edi */
  EDI = (pop32());
L_110256f4:;
  /* 110256f4 pop ebx */
  EBX = (pop32());
  /* 110256f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110256f7 ret  */
  ESPCHK(0x11025680u, _esp0);
  ESP += 4; return;
L_110256f8:;
  /* 110256f8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 110256fb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110256fd je 0x11025735 */
  if (C.zf) goto L_11025735;
  /* 110256ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11025701 je 0x110256f2 */
  if (C.zf) goto L_110256f2;
  /* 11025703 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11025705 je 0x1102572e */
  if (C.zf) goto L_1102572e;
  /* 11025707 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11025709 je 0x110256f2 */
  if (C.zf) goto L_110256f2;
  /* 1102570b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1102570e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11025710 je 0x11025727 */
  if (C.zf) goto L_11025727;
  /* 11025712 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11025714 je 0x110256f2 */
  if (C.zf) goto L_110256f2;
  /* 11025716 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11025718 je 0x11025720 */
  if (C.zf) goto L_11025720;
  /* 1102571a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1102571c je 0x110256f2 */
  if (C.zf) goto L_110256f2;
  /* 1102571e jmp 0x110256b6 */
  goto L_110256b6;
L_11025720:;
  /* 11025720 pop esi */
  ESI = (pop32());
  /* 11025721 pop edi */
  EDI = (pop32());
  /* 11025722 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11025725 pop ebx */
  EBX = (pop32());
  /* 11025726 ret  */
  ESPCHK(0x11025680u, _esp0);
  ESP += 4; return;
L_11025727:;
  /* 11025727 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1102572a pop esi */
  ESI = (pop32());
  /* 1102572b pop edi */
  EDI = (pop32());
  /* 1102572c pop ebx */
  EBX = (pop32());
  /* 1102572d ret  */
  ESPCHK(0x11025680u, _esp0);
  ESP += 4; return;
L_1102572e:;
  /* 1102572e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11025731 pop esi */
  ESI = (pop32());
  /* 11025732 pop edi */
  EDI = (pop32());
  /* 11025733 pop ebx */
  EBX = (pop32());
  /* 11025734 ret  */
  ESPCHK(0x11025680u, _esp0);
  ESP += 4; return;
L_11025735:;
  /* 11025735 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11025738 pop esi */
  ESI = (pop32());
  /* 11025739 pop edi */
  EDI = (pop32());
  /* 1102573a pop ebx */
  EBX = (pop32());
  /* 1102573b ret  */
  ESPCHK(0x11025680u, _esp0);
  ESP += 4; return;
  /* 1102573c jmp dword ptr [0x11043364] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11043364)))); return;
}

/* RtlUnwind @ 0x1102588c (6 bytes, 1 insns) */
void f_1102588c(void) {
  FTRACE(0x1102588cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1102588c jmp dword ptr [0x110432f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x110432f8)))); return;
}

