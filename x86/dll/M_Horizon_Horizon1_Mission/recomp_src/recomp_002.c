#include "recomp.h"

/* FUN_100114f0 @ 0x12cc14f0 (393 bytes, 123 insns) */
void f_12cc14f0(void) {
  FTRACE(0x12cc14f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc14f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc14f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc14f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc14f6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc14fa jne 0x12cc1506 */
  if (!C.zf) goto L_12cc1506;
  /* 12cc14fc mov eax, dword ptr [0x12cdfc98] */
  EAX = (r32((uint32_t)(0x12cdfc98)));
  /* 12cc1501 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cc1504 jmp 0x12cc150c */
  goto L_12cc150c;
L_12cc1506:;
  /* 12cc1506 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc1509 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12cc150c:;
  /* 12cc150c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc150f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cc1512 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1515 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cc1518 push 0x12ce08a4 */
  push32((uint32_t)(0x12ce08a4u));
  /* 12cc151d call dword ptr [0x12ce331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce331c))), 0x12cc1523u);
  /* 12cc1523 cmp dword ptr [0x12ce0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc152a je 0x12cc154a */
  if (C.zf) goto L_12cc154a;
  /* 12cc152c push 0x12ce08a4 */
  push32((uint32_t)(0x12ce08a4u));
  /* 12cc1531 call dword ptr [0x12ce330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce330c))), 0x12cc1537u);
  /* 12cc1537 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cc1539 call 0x12cb7bb0 */
  push32(0x12cc153eu); f_12cb7bb0();
  /* 12cc153e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1541 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12cc1548 jmp 0x12cc1551 */
  goto L_12cc1551;
L_12cc154a:;
  /* 12cc154a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12cc1551:;
  /* 12cc1551 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1555 jbe 0x12cc1642 */
  if ((C.cf||C.zf)) goto L_12cc1642;
  /* 12cc155b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc155e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cc1560 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12cc1563 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc1567 je 0x12cc1571 */
  if (C.zf) goto L_12cc1571;
  /* 12cc1569 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc156d je 0x12cc1576 */
  if (C.zf) goto L_12cc1576;
  /* 12cc156f jmp 0x12cc15d0 */
  goto L_12cc15d0;
L_12cc1571:;
  /* 12cc1571 jmp 0x12cc1642 */
  goto L_12cc1642;
L_12cc1576:;
  /* 12cc1576 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1579 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc157c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12cc157f mov dword ptr [0x12ce0880], 0 */
  w32((uint32_t)(0x12ce0880), (0x0u));
  /* 12cc1589 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc158c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cc158f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1592 jne 0x12cc15a7 */
  if (!C.zf) goto L_12cc15a7;
  /* 12cc1594 mov dword ptr [0x12ce0880], 1 */
  w32((uint32_t)(0x12ce0880), (0x1u));
  /* 12cc159e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc15a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc15a4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12cc15a7:;
  /* 12cc15a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc15aa push ecx */
  push32((uint32_t)(ECX));
  /* 12cc15ab lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12cc15ae push edx */
  push32((uint32_t)(EDX));
  /* 12cc15af lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12cc15b2 push eax */
  push32((uint32_t)(EAX));
  /* 12cc15b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc15b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc15b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc15ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc15bc push eax */
  push32((uint32_t)(EAX));
  /* 12cc15bd call 0x12cc1680 */
  push32(0x12cc15c2u); f_12cc1680();
  /* 12cc15c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc15c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc15c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc15cb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12cc15ce jmp 0x12cc163d */
  goto L_12cc163d;
L_12cc15d0:;
  /* 12cc15d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc15d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc15d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc15d7 mov ecx, dword ptr [0x12cdec98] */
  ECX = (r32((uint32_t)(0x12cdec98)));
  /* 12cc15dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc15df mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12cc15e3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc15e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc15eb je 0x12cc1618 */
  if (C.zf) goto L_12cc1618;
  /* 12cc15ed cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc15f1 jbe 0x12cc1618 */
  if ((C.cf||C.zf)) goto L_12cc1618;
  /* 12cc15f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc15f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc15f9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cc15fb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cc15fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc1600 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1603 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cc1606 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1609 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc160c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12cc160f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1612 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1615 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12cc1618:;
  /* 12cc1618 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc161b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc161e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cc1620 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cc1622 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc1625 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1628 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cc162b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc162e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1631 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12cc1634 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1637 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc163a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12cc163d:;
  /* 12cc163d jmp 0x12cc1551 */
  goto L_12cc1551;
L_12cc1642:;
  /* 12cc1642 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1646 je 0x12cc1654 */
  if (C.zf) goto L_12cc1654;
  /* 12cc1648 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cc164a call 0x12cb7c50 */
  push32(0x12cc164fu); f_12cb7c50();
  /* 12cc164f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1652 jmp 0x12cc165f */
  goto L_12cc165f;
L_12cc1654:;
  /* 12cc1654 push 0x12ce08a4 */
  push32((uint32_t)(0x12ce08a4u));
  /* 12cc1659 call dword ptr [0x12ce330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce330c))), 0x12cc165fu);
L_12cc165f:;
  /* 12cc165f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1663 jbe 0x12cc1673 */
  if ((C.cf||C.zf)) goto L_12cc1673;
  /* 12cc1665 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc1668 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12cc166b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc166e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1671 jmp 0x12cc1675 */
  goto L_12cc1675;
L_12cc1673:;
  /* 12cc1673 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cc1675:;
  /* 12cc1675 mov esp, ebp */
  ESP = (EBP);
  /* 12cc1677 pop ebp */
  EBP = (pop32());
  /* 12cc1678 ret  */
  ESPCHK(0x12cc14f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011680 @ 0x12cc1680 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12cc1680(void) {
  FTRACE(0x12cc1680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc1680 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc1681 mov ebp, esp */
  EBP = (ESP);
  /* 12cc1683 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1686 push esi */
  push32((uint32_t)(ESI));
  /* 12cc1687 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12cc168b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cc168e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1691 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1694 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cc1697 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc169b ja 0x12cc1be8 */
  if ((!C.cf&&!C.zf)) goto L_12cc1be8;
  /* 12cc16a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc16a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc16a6 mov dl, byte ptr [eax + 0x12cc1c49] */
  DL = (r8((uint32_t)(EAX + 0x12cc1c49)));
  /* 12cc16ac jmp dword ptr [edx*4 + 0x12cc1bed] */
  switch (EDX) {
    case 0: goto L_12cc1bc6;
    case 1: goto L_12cc16d5;
    case 2: goto L_12cc171b;
    case 3: goto L_12cc1868;
    case 4: goto L_12cc1890;
    case 5: goto L_12cc192f;
    case 6: goto L_12cc199b;
    case 7: goto L_12cc19c4;
    case 8: goto L_12cc1a05;
    case 9: goto L_12cc1ae7;
    case 10: goto L_12cc1b4e;
    case 11: goto L_12cc1b9b;
    case 12: goto L_12cc16b3;
    case 13: goto L_12cc16f8;
    case 14: goto L_12cc173e;
    case 15: goto L_12cc183e;
    case 16: goto L_12cc18d5;
    case 17: goto L_12cc1902;
    case 18: goto L_12cc1957;
    case 19: goto L_12cc19db;
    case 20: goto L_12cc1a89;
    case 21: goto L_12cc1b18;
    case 22: goto L_12cc1be8;
    default: x86_unimpl("switch@0x12cc16ac out of table"); return;
  }
L_12cc16b3:;
  /* 12cc16b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc16b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc16b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc16ba push edx */
  push32((uint32_t)(EDX));
  /* 12cc16bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc16be mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12cc16c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc16c4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12cc16c7 push eax */
  push32((uint32_t)(EAX));
  /* 12cc16c8 call 0x12cc1ca0 */
  push32(0x12cc16cdu); f_12cc1ca0();
  /* 12cc16cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc16d0 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc16d5:;
  /* 12cc16d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc16d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc16d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc16dc push edx */
  push32((uint32_t)(EDX));
  /* 12cc16dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc16e0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12cc16e3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc16e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12cc16ea push eax */
  push32((uint32_t)(EAX));
  /* 12cc16eb call 0x12cc1ca0 */
  push32(0x12cc16f0u); f_12cc1ca0();
  /* 12cc16f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc16f3 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc16f8:;
  /* 12cc16f8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc16fb push ecx */
  push32((uint32_t)(ECX));
  /* 12cc16fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc16ff push edx */
  push32((uint32_t)(EDX));
  /* 12cc1700 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1703 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cc1706 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc1709 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12cc170d push eax */
  push32((uint32_t)(EAX));
  /* 12cc170e call 0x12cc1ca0 */
  push32(0x12cc1713u); f_12cc1ca0();
  /* 12cc1713 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1716 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc171b:;
  /* 12cc171b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc171e push ecx */
  push32((uint32_t)(ECX));
  /* 12cc171f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1722 push edx */
  push32((uint32_t)(EDX));
  /* 12cc1723 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1726 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cc1729 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc172c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12cc1730 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1731 call 0x12cc1ca0 */
  push32(0x12cc1736u); f_12cc1ca0();
  /* 12cc1736 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1739 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc173e:;
  /* 12cc173e cmp dword ptr [0x12ce0880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1745 je 0x12cc17c6 */
  if (C.zf) goto L_12cc17c6;
  /* 12cc1747 mov dword ptr [0x12ce0880], 0 */
  w32((uint32_t)(0x12ce0880), (0x0u));
  /* 12cc1751 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc1754 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1755 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1758 push edx */
  push32((uint32_t)(EDX));
  /* 12cc1759 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc175c push eax */
  push32((uint32_t)(EAX));
  /* 12cc175d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1760 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1761 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc1764 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12cc176a push eax */
  push32((uint32_t)(EAX));
  /* 12cc176b call 0x12cc1e50 */
  push32(0x12cc1770u); f_12cc1e50();
  /* 12cc1770 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1773 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1776 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1779 jne 0x12cc1780 */
  if (!C.zf) goto L_12cc1780;
  /* 12cc177b jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc1780:;
  /* 12cc1780 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1783 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc1785 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12cc1788 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc178b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc178d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1790 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1793 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cc1795 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1798 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc179a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc179d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc17a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cc17a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc17a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc17a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc17a9 push edx */
  push32((uint32_t)(EDX));
  /* 12cc17aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc17ad push eax */
  push32((uint32_t)(EAX));
  /* 12cc17ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc17b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc17b2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc17b5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12cc17bb push eax */
  push32((uint32_t)(EAX));
  /* 12cc17bc call 0x12cc1e50 */
  push32(0x12cc17c1u); f_12cc1e50();
  /* 12cc17c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc17c4 jmp 0x12cc1839 */
  goto L_12cc1839;
L_12cc17c6:;
  /* 12cc17c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc17c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc17ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc17cd push edx */
  push32((uint32_t)(EDX));
  /* 12cc17ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc17d1 push eax */
  push32((uint32_t)(EAX));
  /* 12cc17d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc17d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc17d6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc17d9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12cc17df push eax */
  push32((uint32_t)(EAX));
  /* 12cc17e0 call 0x12cc1e50 */
  push32(0x12cc17e5u); f_12cc1e50();
  /* 12cc17e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc17e8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc17eb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc17ee jne 0x12cc17f5 */
  if (!C.zf) goto L_12cc17f5;
  /* 12cc17f0 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc17f5:;
  /* 12cc17f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc17f8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc17fa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12cc17fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1800 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc1802 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1805 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1808 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cc180a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc180d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc180f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1812 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1815 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cc1817 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc181a push ecx */
  push32((uint32_t)(ECX));
  /* 12cc181b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc181e push edx */
  push32((uint32_t)(EDX));
  /* 12cc181f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1822 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1823 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1826 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1827 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc182a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12cc1830 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1831 call 0x12cc1e50 */
  push32(0x12cc1836u); f_12cc1e50();
  /* 12cc1836 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc1839:;
  /* 12cc1839 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc183e:;
  /* 12cc183e mov ecx, dword ptr [0x12ce0880] */
  ECX = (r32((uint32_t)(0x12ce0880)));
  /* 12cc1844 mov dword ptr [0x12ce0890], ecx */
  w32((uint32_t)(0x12ce0890), (ECX));
  /* 12cc184a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc184d push edx */
  push32((uint32_t)(EDX));
  /* 12cc184e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1851 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1852 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc1854 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1857 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cc185a push edx */
  push32((uint32_t)(EDX));
  /* 12cc185b call 0x12cc1cf0 */
  push32(0x12cc1860u); f_12cc1cf0();
  /* 12cc1860 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1863 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc1868:;
  /* 12cc1868 mov eax, dword ptr [0x12ce0880] */
  EAX = (r32((uint32_t)(0x12ce0880)));
  /* 12cc186d mov dword ptr [0x12ce0890], eax */
  w32((uint32_t)(0x12ce0890), (EAX));
  /* 12cc1872 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1875 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1876 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1879 push edx */
  push32((uint32_t)(EDX));
  /* 12cc187a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc187c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc187f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cc1882 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1883 call 0x12cc1cf0 */
  push32(0x12cc1888u); f_12cc1cf0();
  /* 12cc1888 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc188b jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc1890:;
  /* 12cc1890 mov edx, dword ptr [0x12ce0880] */
  EDX = (r32((uint32_t)(0x12ce0880)));
  /* 12cc1896 mov dword ptr [0x12ce0890], edx */
  w32((uint32_t)(0x12ce0890), (EDX));
  /* 12cc189c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc189f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cc18a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cc18a3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12cc18a8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cc18aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cc18ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc18b1 jne 0x12cc18ba */
  if (!C.zf) goto L_12cc18ba;
  /* 12cc18b3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12cc18ba:;
  /* 12cc18ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc18bd push edx */
  push32((uint32_t)(EDX));
  /* 12cc18be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc18c1 push eax */
  push32((uint32_t)(EAX));
  /* 12cc18c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc18c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc18c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc18c8 call 0x12cc1cf0 */
  push32(0x12cc18cdu); f_12cc1cf0();
  /* 12cc18cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc18d0 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc18d5:;
  /* 12cc18d5 mov edx, dword ptr [0x12ce0880] */
  EDX = (r32((uint32_t)(0x12ce0880)));
  /* 12cc18db mov dword ptr [0x12ce0890], edx */
  w32((uint32_t)(0x12ce0890), (EDX));
  /* 12cc18e1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc18e4 push eax */
  push32((uint32_t)(EAX));
  /* 12cc18e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc18e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc18e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12cc18eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc18ee mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12cc18f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc18f4 push eax */
  push32((uint32_t)(EAX));
  /* 12cc18f5 call 0x12cc1cf0 */
  push32(0x12cc18fau); f_12cc1cf0();
  /* 12cc18fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc18fd jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc1902:;
  /* 12cc1902 mov ecx, dword ptr [0x12ce0880] */
  ECX = (r32((uint32_t)(0x12ce0880)));
  /* 12cc1908 mov dword ptr [0x12ce0890], ecx */
  w32((uint32_t)(0x12ce0890), (ECX));
  /* 12cc190e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1911 push edx */
  push32((uint32_t)(EDX));
  /* 12cc1912 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1915 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1916 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc1918 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc191b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12cc191e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1921 push edx */
  push32((uint32_t)(EDX));
  /* 12cc1922 call 0x12cc1cf0 */
  push32(0x12cc1927u); f_12cc1cf0();
  /* 12cc1927 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc192a jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc192f:;
  /* 12cc192f mov eax, dword ptr [0x12ce0880] */
  EAX = (r32((uint32_t)(0x12ce0880)));
  /* 12cc1934 mov dword ptr [0x12ce0890], eax */
  w32((uint32_t)(0x12ce0890), (EAX));
  /* 12cc1939 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc193c push ecx */
  push32((uint32_t)(ECX));
  /* 12cc193d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1940 push edx */
  push32((uint32_t)(EDX));
  /* 12cc1941 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc1943 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1946 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cc1949 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc194a call 0x12cc1cf0 */
  push32(0x12cc194fu); f_12cc1cf0();
  /* 12cc194f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1952 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc1957:;
  /* 12cc1957 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc195a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc195e jg 0x12cc197c */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc197c;
  /* 12cc1960 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1963 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1964 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1967 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1968 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc196b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12cc1971 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1972 call 0x12cc1ca0 */
  push32(0x12cc1977u); f_12cc1ca0();
  /* 12cc1977 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc197a jmp 0x12cc1996 */
  goto L_12cc1996;
L_12cc197c:;
  /* 12cc197c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc197f push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1980 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1983 push edx */
  push32((uint32_t)(EDX));
  /* 12cc1984 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc1987 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12cc198d push ecx */
  push32((uint32_t)(ECX));
  /* 12cc198e call 0x12cc1ca0 */
  push32(0x12cc1993u); f_12cc1ca0();
  /* 12cc1993 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc1996:;
  /* 12cc1996 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc199b:;
  /* 12cc199b mov edx, dword ptr [0x12ce0880] */
  EDX = (r32((uint32_t)(0x12ce0880)));
  /* 12cc19a1 mov dword ptr [0x12ce0890], edx */
  w32((uint32_t)(0x12ce0890), (EDX));
  /* 12cc19a7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc19aa push eax */
  push32((uint32_t)(EAX));
  /* 12cc19ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc19ae push ecx */
  push32((uint32_t)(ECX));
  /* 12cc19af push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc19b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc19b4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc19b6 push eax */
  push32((uint32_t)(EAX));
  /* 12cc19b7 call 0x12cc1cf0 */
  push32(0x12cc19bcu); f_12cc1cf0();
  /* 12cc19bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc19bf jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc19c4:;
  /* 12cc19c4 mov ecx, dword ptr [0x12ce0880] */
  ECX = (r32((uint32_t)(0x12ce0880)));
  /* 12cc19ca mov dword ptr [0x12ce0890], ecx */
  w32((uint32_t)(0x12ce0890), (ECX));
  /* 12cc19d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc19d3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12cc19d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cc19d9 jmp 0x12cc1a2d */
  goto L_12cc1a2d;
L_12cc19db:;
  /* 12cc19db mov ecx, dword ptr [0x12ce0880] */
  ECX = (r32((uint32_t)(0x12ce0880)));
  /* 12cc19e1 mov dword ptr [0x12ce0890], ecx */
  w32((uint32_t)(0x12ce0890), (ECX));
  /* 12cc19e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc19ea push edx */
  push32((uint32_t)(EDX));
  /* 12cc19eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc19ee push eax */
  push32((uint32_t)(EAX));
  /* 12cc19ef push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc19f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc19f4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cc19f7 push edx */
  push32((uint32_t)(EDX));
  /* 12cc19f8 call 0x12cc1cf0 */
  push32(0x12cc19fdu); f_12cc1cf0();
  /* 12cc19fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1a00 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc1a05:;
  /* 12cc1a05 mov eax, dword ptr [0x12ce0880] */
  EAX = (r32((uint32_t)(0x12ce0880)));
  /* 12cc1a0a mov dword ptr [0x12ce0890], eax */
  w32((uint32_t)(0x12ce0890), (EAX));
  /* 12cc1a0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1a12 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1a16 jne 0x12cc1a21 */
  if (!C.zf) goto L_12cc1a21;
  /* 12cc1a18 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12cc1a1f jmp 0x12cc1a2d */
  goto L_12cc1a2d;
L_12cc1a21:;
  /* 12cc1a21 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1a24 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12cc1a27 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1a2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cc1a2d:;
  /* 12cc1a2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1a30 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12cc1a33 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1a36 jge 0x12cc1a41 */
  if ((C.sf==C.of)) goto L_12cc1a41;
  /* 12cc1a38 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cc1a3f jmp 0x12cc1a6e */
  goto L_12cc1a6e;
L_12cc1a41:;
  /* 12cc1a41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1a44 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12cc1a47 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cc1a48 mov ecx, 7 */
  ECX = (0x7u);
  /* 12cc1a4d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cc1a4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc1a52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1a55 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12cc1a58 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cc1a59 mov ecx, 7 */
  ECX = (0x7u);
  /* 12cc1a5e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cc1a60 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1a63 jl 0x12cc1a6e */
  if ((C.sf!=C.of)) goto L_12cc1a6e;
  /* 12cc1a65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc1a68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1a6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cc1a6e:;
  /* 12cc1a6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1a71 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1a72 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1a75 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1a76 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc1a78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc1a7b push edx */
  push32((uint32_t)(EDX));
  /* 12cc1a7c call 0x12cc1cf0 */
  push32(0x12cc1a81u); f_12cc1cf0();
  /* 12cc1a81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1a84 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc1a89:;
  /* 12cc1a89 cmp dword ptr [0x12ce0880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1a90 je 0x12cc1ac0 */
  if (C.zf) goto L_12cc1ac0;
  /* 12cc1a92 mov dword ptr [0x12ce0880], 0 */
  w32((uint32_t)(0x12ce0880), (0x0u));
  /* 12cc1a9c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc1a9f push eax */
  push32((uint32_t)(EAX));
  /* 12cc1aa0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1aa4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1aa7 push edx */
  push32((uint32_t)(EDX));
  /* 12cc1aa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1aab push eax */
  push32((uint32_t)(EAX));
  /* 12cc1aac mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc1aaf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12cc1ab5 push edx */
  push32((uint32_t)(EDX));
  /* 12cc1ab6 call 0x12cc1e50 */
  push32(0x12cc1abbu); f_12cc1e50();
  /* 12cc1abb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1abe jmp 0x12cc1ae2 */
  goto L_12cc1ae2;
L_12cc1ac0:;
  /* 12cc1ac0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc1ac3 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1ac4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1ac8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1acb push edx */
  push32((uint32_t)(EDX));
  /* 12cc1acc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1acf push eax */
  push32((uint32_t)(EAX));
  /* 12cc1ad0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc1ad3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12cc1ad9 push edx */
  push32((uint32_t)(EDX));
  /* 12cc1ada call 0x12cc1e50 */
  push32(0x12cc1adfu); f_12cc1e50();
  /* 12cc1adf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc1ae2:;
  /* 12cc1ae2 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc1ae7:;
  /* 12cc1ae7 mov dword ptr [0x12ce0880], 0 */
  w32((uint32_t)(0x12ce0880), (0x0u));
  /* 12cc1af1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc1af4 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1af5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1af8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1af9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1afc push edx */
  push32((uint32_t)(EDX));
  /* 12cc1afd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1b00 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1b01 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc1b04 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12cc1b0a push edx */
  push32((uint32_t)(EDX));
  /* 12cc1b0b call 0x12cc1e50 */
  push32(0x12cc1b10u); f_12cc1e50();
  /* 12cc1b10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1b13 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc1b18:;
  /* 12cc1b18 mov eax, dword ptr [0x12ce0880] */
  EAX = (r32((uint32_t)(0x12ce0880)));
  /* 12cc1b1d mov dword ptr [0x12ce0890], eax */
  w32((uint32_t)(0x12ce0890), (EAX));
  /* 12cc1b22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1b25 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cc1b28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cc1b29 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12cc1b2e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cc1b30 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cc1b33 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1b36 push edx */
  push32((uint32_t)(EDX));
  /* 12cc1b37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1b3a push eax */
  push32((uint32_t)(EAX));
  /* 12cc1b3b push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc1b3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc1b40 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1b41 call 0x12cc1cf0 */
  push32(0x12cc1b46u); f_12cc1cf0();
  /* 12cc1b46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1b49 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc1b4e:;
  /* 12cc1b4e mov edx, dword ptr [0x12ce0880] */
  EDX = (r32((uint32_t)(0x12ce0880)));
  /* 12cc1b54 mov dword ptr [0x12ce0890], edx */
  w32((uint32_t)(0x12ce0890), (EDX));
  /* 12cc1b5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1b5d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cc1b60 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cc1b61 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12cc1b66 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cc1b68 mov ecx, eax */
  ECX = (EAX);
  /* 12cc1b6a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1b6d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc1b70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1b73 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cc1b76 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cc1b77 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12cc1b7c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cc1b7e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1b80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cc1b83 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1b86 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1b87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1b8a push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1b8b push 4 */
  push32((uint32_t)(0x4u));
  /* 12cc1b8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc1b90 push edx */
  push32((uint32_t)(EDX));
  /* 12cc1b91 call 0x12cc1cf0 */
  push32(0x12cc1b96u); f_12cc1cf0();
  /* 12cc1b96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1b99 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc1b9b:;
  /* 12cc1b9b call 0x12cc2cb0 */
  push32(0x12cc1ba0u); f_12cc2cb0();
  /* 12cc1ba0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1ba3 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1ba4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1ba8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1bab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc1bad cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1bb1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12cc1bb4 mov ecx, dword ptr [eax*4 + 0x12cdfe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12cdfe1c)));
  /* 12cc1bbb push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1bbc call 0x12cc1ca0 */
  push32(0x12cc1bc1u); f_12cc1ca0();
  /* 12cc1bc1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1bc4 jmp 0x12cc1be8 */
  goto L_12cc1be8;
L_12cc1bc6:;
  /* 12cc1bc6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1bc9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc1bcb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12cc1bce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1bd1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc1bd3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1bd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1bd9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cc1bdb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1bde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc1be0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1be3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1be6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12cc1be8:;
  /* 12cc1be8 pop esi */
  ESI = (pop32());
  /* 12cc1be9 mov esp, ebp */
  ESP = (EBP);
  /* 12cc1beb pop ebp */
  EBP = (pop32());
  /* 12cc1bec ret  */
  ESPCHK(0x12cc1680u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12cc1ca0 (72 bytes, 30 insns) */
void f_12cc1ca0(void) {
  FTRACE(0x12cc1ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc1ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc1ca1 mov ebp, esp */
  EBP = (ESP);
L_12cc1ca3:;
  /* 12cc1ca3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1ca6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1ca9 je 0x12cc1ce6 */
  if (C.zf) goto L_12cc1ce6;
  /* 12cc1cab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc1cae movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cc1cb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc1cb3 je 0x12cc1ce6 */
  if (C.zf) goto L_12cc1ce6;
  /* 12cc1cb5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1cb8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc1cba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc1cbd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc1cbf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12cc1cc1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1cc4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc1cc6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1cc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1ccc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cc1cce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc1cd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1cd4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12cc1cd7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1cda mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc1cdc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1cdf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1ce2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cc1ce4 jmp 0x12cc1ca3 */
  goto L_12cc1ca3;
L_12cc1ce6:;
  /* 12cc1ce6 pop ebp */
  EBP = (pop32());
  /* 12cc1ce7 ret  */
  ESPCHK(0x12cc1ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cf0 @ 0x12cc1cf0 (173 bytes, 64 insns) */
void f_12cc1cf0(void) {
  FTRACE(0x12cc1cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc1cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc1cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc1cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1cf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cc1cfb cmp dword ptr [0x12ce0890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1d02 je 0x12cc1d1a */
  if (C.zf) goto L_12cc1d1a;
  /* 12cc1d04 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1d07 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1d08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1d0b push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1d0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc1d0f push edx */
  push32((uint32_t)(EDX));
  /* 12cc1d10 call 0x12cc1da0 */
  push32(0x12cc1d15u); f_12cc1da0();
  /* 12cc1d15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1d18 jmp 0x12cc1d99 */
  goto L_12cc1d99;
L_12cc1d1a:;
  /* 12cc1d1a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1d1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1d20 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1d22 jae 0x12cc1d90 */
  if (!C.cf) goto L_12cc1d90;
  /* 12cc1d24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1d27 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1d2a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12cc1d2d jmp 0x12cc1d38 */
  goto L_12cc1d38;
L_12cc1d2f:;
  /* 12cc1d2f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1d32 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1d35 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12cc1d38:;
  /* 12cc1d38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1d3b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1d3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc1d40 je 0x12cc1d74 */
  if (C.zf) goto L_12cc1d74;
  /* 12cc1d42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc1d45 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cc1d46 mov ecx, 0xa */
  ECX = (0xau);
  /* 12cc1d4b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cc1d4d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1d50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1d53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc1d55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1d58 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12cc1d5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc1d5e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cc1d5f mov ecx, 0xa */
  ECX = (0xau);
  /* 12cc1d64 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cc1d66 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cc1d69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc1d6c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1d6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cc1d72 jmp 0x12cc1d2f */
  goto L_12cc1d2f;
L_12cc1d74:;
  /* 12cc1d74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1d77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc1d79 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1d7c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1d7f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cc1d81 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1d84 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc1d86 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1d89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1d8c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cc1d8e jmp 0x12cc1d99 */
  goto L_12cc1d99;
L_12cc1d90:;
  /* 12cc1d90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1d93 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12cc1d99:;
  /* 12cc1d99 mov esp, ebp */
  ESP = (EBP);
  /* 12cc1d9b pop ebp */
  EBP = (pop32());
  /* 12cc1d9c ret  */
  ESPCHK(0x12cc1cf0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12cc1da0 (172 bytes, 65 insns) */
void f_12cc1da0(void) {
  FTRACE(0x12cc1da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc1da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc1da1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc1da3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1da6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1da9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc1dab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cc1dae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1db1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1db4 jbe 0x12cc1dfb */
  if ((C.cf||C.zf)) goto L_12cc1dfb;
L_12cc1db6:;
  /* 12cc1db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc1db9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cc1dba mov ecx, 0xa */
  ECX = (0xau);
  /* 12cc1dbf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cc1dc1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1dc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc1dc7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cc1dc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc1dcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1dcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cc1dd2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1dd5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc1dd7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1dda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1ddd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cc1ddf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc1de2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cc1de3 mov ecx, 0xa */
  ECX = (0xau);
  /* 12cc1de8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cc1dea mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cc1ded cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1df1 jle 0x12cc1dfb */
  if ((C.zf||C.sf!=C.of)) goto L_12cc1dfb;
  /* 12cc1df3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc1df6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1df9 ja 0x12cc1db6 */
  if ((!C.cf&&!C.zf)) goto L_12cc1db6;
L_12cc1dfb:;
  /* 12cc1dfb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1dfe mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc1e00 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cc1e03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc1e06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc1e09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12cc1e0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc1e0e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1e11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cc1e14:;
  /* 12cc1e14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc1e17 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc1e19 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12cc1e1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc1e1f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc1e22 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc1e24 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12cc1e26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc1e29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1e2c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cc1e2f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc1e32 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12cc1e35 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12cc1e37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc1e3a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1e3d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cc1e40 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc1e43 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1e46 jb 0x12cc1e14 */
  if (C.cf) goto L_12cc1e14;
  /* 12cc1e48 mov esp, ebp */
  ESP = (EBP);
  /* 12cc1e4a pop ebp */
  EBP = (pop32());
  /* 12cc1e4b ret  */
  ESPCHK(0x12cc1da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e50 @ 0x12cc1e50 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12cc1e50(void) {
  FTRACE(0x12cc1e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc1e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc1e51 mov ebp, esp */
  EBP = (ESP);
  /* 12cc1e53 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12cc1e56:;
  /* 12cc1e56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc1e59 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cc1e5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc1e5e je 0x12cc22cc */
  if (C.zf) goto L_12cc22cc;
  /* 12cc1e64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc1e67 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1e6a je 0x12cc22cc */
  if (C.zf) goto L_12cc22cc;
  /* 12cc1e70 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cc1e74 mov dword ptr [0x12ce0890], 0 */
  w32((uint32_t)(0x12ce0890), (0x0u));
  /* 12cc1e7e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cc1e85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc1e88 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc1e8b jmp 0x12cc1e96 */
  goto L_12cc1e96;
L_12cc1e8d:;
  /* 12cc1e8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1e90 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1e93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12cc1e96:;
  /* 12cc1e96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc1e99 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cc1e9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc1e9f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cc1ea2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc1ea5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1ea8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cc1eab cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1ead jne 0x12cc1eb1 */
  if (!C.zf) goto L_12cc1eb1;
  /* 12cc1eaf jmp 0x12cc1e8d */
  goto L_12cc1e8d;
L_12cc1eb1:;
  /* 12cc1eb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc1eb4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1eb7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cc1eba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc1ebd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cc1ec0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cc1ec3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1ec6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1ec9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cc1ecc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1ed0 ja 0x12cc2220 */
  if ((!C.cf&&!C.zf)) goto L_12cc2220;
  /* 12cc1ed6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1ed9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc1edb mov al, byte ptr [ecx + 0x12cc22fc] */
  AL = (r8((uint32_t)(ECX + 0x12cc22fc)));
  /* 12cc1ee1 jmp dword ptr [eax*4 + 0x12cc22d0] */
  switch (EAX) {
    case 0: goto L_12cc213f;
    case 1: goto L_12cc2023;
    case 2: goto L_12cc1fae;
    case 3: goto L_12cc1ee8;
    case 4: goto L_12cc1f26;
    case 5: goto L_12cc1f87;
    case 6: goto L_12cc1fd5;
    case 7: goto L_12cc1ffc;
    case 8: goto L_12cc206a;
    case 9: goto L_12cc1f64;
    case 10: goto L_12cc2220;
    default: x86_unimpl("switch@0x12cc1ee1 out of table"); return;
  }
L_12cc1ee8:;
  /* 12cc1ee8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1eeb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12cc1eee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc1ef1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1ef4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cc1ef7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1efb ja 0x12cc1f21 */
  if ((!C.cf&&!C.zf)) goto L_12cc1f21;
  /* 12cc1efd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc1f00 jmp dword ptr [ecx*4 + 0x12cc234f] */
  switch (ECX) {
    case 0: goto L_12cc1f07;
    case 1: goto L_12cc1f11;
    case 2: goto L_12cc1f17;
    case 3: goto L_12cc1f1d;
    case 4: goto L_12cc1f45;
    case 5: goto L_12cc1f4f;
    case 6: goto L_12cc1f55;
    case 7: goto L_12cc1f5b;
    default: x86_unimpl("switch@0x12cc1f00 out of table"); return;
  }
L_12cc1f07:;
  /* 12cc1f07 mov dword ptr [0x12ce0890], 1 */
  w32((uint32_t)(0x12ce0890), (0x1u));
L_12cc1f11:;
  /* 12cc1f11 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12cc1f15 jmp 0x12cc1f21 */
  goto L_12cc1f21;
L_12cc1f17:;
  /* 12cc1f17 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12cc1f1b jmp 0x12cc1f21 */
  goto L_12cc1f21;
L_12cc1f1d:;
  /* 12cc1f1d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12cc1f21:;
  /* 12cc1f21 jmp 0x12cc2220 */
  goto L_12cc2220;
L_12cc1f26:;
  /* 12cc1f26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1f29 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12cc1f2c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cc1f2f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1f32 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12cc1f35 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1f39 ja 0x12cc1f5f */
  if ((!C.cf&&!C.zf)) goto L_12cc1f5f;
  /* 12cc1f3b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cc1f3e jmp dword ptr [ecx*4 + 0x12cc235f] */
  switch (ECX) {
    case 0: goto L_12cc1f45;
    case 1: goto L_12cc1f4f;
    case 2: goto L_12cc1f55;
    case 3: goto L_12cc1f5b;
    default: x86_unimpl("switch@0x12cc1f3e out of table"); return;
  }
L_12cc1f45:;
  /* 12cc1f45 mov dword ptr [0x12ce0890], 1 */
  w32((uint32_t)(0x12ce0890), (0x1u));
L_12cc1f4f:;
  /* 12cc1f4f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12cc1f53 jmp 0x12cc1f5f */
  goto L_12cc1f5f;
L_12cc1f55:;
  /* 12cc1f55 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12cc1f59 jmp 0x12cc1f5f */
  goto L_12cc1f5f;
L_12cc1f5b:;
  /* 12cc1f5b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12cc1f5f:;
  /* 12cc1f5f jmp 0x12cc2220 */
  goto L_12cc2220;
L_12cc1f64:;
  /* 12cc1f64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1f67 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12cc1f6a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1f6e je 0x12cc1f78 */
  if (C.zf) goto L_12cc1f78;
  /* 12cc1f70 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1f74 je 0x12cc1f7e */
  if (C.zf) goto L_12cc1f7e;
  /* 12cc1f76 jmp 0x12cc1f82 */
  goto L_12cc1f82;
L_12cc1f78:;
  /* 12cc1f78 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12cc1f7c jmp 0x12cc1f82 */
  goto L_12cc1f82;
L_12cc1f7e:;
  /* 12cc1f7e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12cc1f82:;
  /* 12cc1f82 jmp 0x12cc2220 */
  goto L_12cc2220;
L_12cc1f87:;
  /* 12cc1f87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1f8a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cc1f8d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1f91 je 0x12cc1f9b */
  if (C.zf) goto L_12cc1f9b;
  /* 12cc1f93 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1f97 je 0x12cc1fa5 */
  if (C.zf) goto L_12cc1fa5;
  /* 12cc1f99 jmp 0x12cc1fa9 */
  goto L_12cc1fa9;
L_12cc1f9b:;
  /* 12cc1f9b mov dword ptr [0x12ce0890], 1 */
  w32((uint32_t)(0x12ce0890), (0x1u));
L_12cc1fa5:;
  /* 12cc1fa5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12cc1fa9:;
  /* 12cc1fa9 jmp 0x12cc2220 */
  goto L_12cc2220;
L_12cc1fae:;
  /* 12cc1fae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1fb1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12cc1fb4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1fb8 je 0x12cc1fc2 */
  if (C.zf) goto L_12cc1fc2;
  /* 12cc1fba cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1fbe je 0x12cc1fcc */
  if (C.zf) goto L_12cc1fcc;
  /* 12cc1fc0 jmp 0x12cc1fd0 */
  goto L_12cc1fd0;
L_12cc1fc2:;
  /* 12cc1fc2 mov dword ptr [0x12ce0890], 1 */
  w32((uint32_t)(0x12ce0890), (0x1u));
L_12cc1fcc:;
  /* 12cc1fcc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12cc1fd0:;
  /* 12cc1fd0 jmp 0x12cc2220 */
  goto L_12cc2220;
L_12cc1fd5:;
  /* 12cc1fd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1fd8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12cc1fdb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1fdf je 0x12cc1fe9 */
  if (C.zf) goto L_12cc1fe9;
  /* 12cc1fe1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1fe5 je 0x12cc1ff3 */
  if (C.zf) goto L_12cc1ff3;
  /* 12cc1fe7 jmp 0x12cc1ff7 */
  goto L_12cc1ff7;
L_12cc1fe9:;
  /* 12cc1fe9 mov dword ptr [0x12ce0890], 1 */
  w32((uint32_t)(0x12ce0890), (0x1u));
L_12cc1ff3:;
  /* 12cc1ff3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12cc1ff7:;
  /* 12cc1ff7 jmp 0x12cc2220 */
  goto L_12cc2220;
L_12cc1ffc:;
  /* 12cc1ffc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1fff mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12cc2002 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2006 je 0x12cc2010 */
  if (C.zf) goto L_12cc2010;
  /* 12cc2008 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc200c je 0x12cc201a */
  if (C.zf) goto L_12cc201a;
  /* 12cc200e jmp 0x12cc201e */
  goto L_12cc201e;
L_12cc2010:;
  /* 12cc2010 mov dword ptr [0x12ce0890], 1 */
  w32((uint32_t)(0x12ce0890), (0x1u));
L_12cc201a:;
  /* 12cc201a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12cc201e:;
  /* 12cc201e jmp 0x12cc2220 */
  goto L_12cc2220;
L_12cc2023:;
  /* 12cc2023 push 0x12cdcc4c */
  push32((uint32_t)(0x12cdcc4cu));
  /* 12cc2028 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc202b push ecx */
  push32((uint32_t)(ECX));
  /* 12cc202c call 0x12cc2880 */
  push32(0x12cc2031u); f_12cc2880();
  /* 12cc2031 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc2036 jne 0x12cc2043 */
  if (!C.zf) goto L_12cc2043;
  /* 12cc2038 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc203b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc203e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cc2041 jmp 0x12cc2061 */
  goto L_12cc2061;
L_12cc2043:;
  /* 12cc2043 push 0x12cdcc48 */
  push32((uint32_t)(0x12cdcc48u));
  /* 12cc2048 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc204b push eax */
  push32((uint32_t)(EAX));
  /* 12cc204c call 0x12cc2880 */
  push32(0x12cc2051u); f_12cc2880();
  /* 12cc2051 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc2056 jne 0x12cc2061 */
  if (!C.zf) goto L_12cc2061;
  /* 12cc2058 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc205b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc205e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cc2061:;
  /* 12cc2061 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12cc2065 jmp 0x12cc2220 */
  goto L_12cc2220;
L_12cc206a:;
  /* 12cc206a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc206d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2071 jg 0x12cc2081 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc2081;
  /* 12cc2073 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc2076 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12cc207c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cc207f jmp 0x12cc208d */
  goto L_12cc208d;
L_12cc2081:;
  /* 12cc2081 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc2084 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12cc208a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12cc208d:;
  /* 12cc208d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2091 jle 0x12cc2134 */
  if ((C.zf||C.sf!=C.of)) goto L_12cc2134;
  /* 12cc2097 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc209a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc209d jbe 0x12cc2134 */
  if ((C.cf||C.zf)) goto L_12cc2134;
  /* 12cc20a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc20a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc20a8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc20aa mov ecx, dword ptr [0x12cdec98] */
  ECX = (r32((uint32_t)(0x12cdec98)));
  /* 12cc20b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc20b2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12cc20b6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc20bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc20be je 0x12cc20f7 */
  if (C.zf) goto L_12cc20f7;
  /* 12cc20c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc20c3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc20c6 jbe 0x12cc20f7 */
  if ((C.cf||C.zf)) goto L_12cc20f7;
  /* 12cc20c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc20cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc20cd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc20d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cc20d2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12cc20d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc20d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc20d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc20dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc20df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cc20e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc20e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc20e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12cc20ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc20ed mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc20ef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc20f2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc20f5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cc20f7:;
  /* 12cc20f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc20fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc20fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc20ff mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc2101 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12cc2103 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc2106 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc2108 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc210b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc210e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cc2110 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc2113 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2116 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cc2119 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc211c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc211e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc2121 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc2124 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cc2126 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2129 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc212c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cc212f jmp 0x12cc208d */
  goto L_12cc208d;
L_12cc2134:;
  /* 12cc2134 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc2137 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cc213a jmp 0x12cc1e56 */
  goto L_12cc1e56;
L_12cc213f:;
  /* 12cc213f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2142 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cc2145 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc2147 je 0x12cc2212 */
  if (C.zf) goto L_12cc2212;
  /* 12cc214d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2150 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2153 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12cc2156:;
  /* 12cc2156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2159 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cc215c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc215e je 0x12cc2210 */
  if (C.zf) goto L_12cc2210;
  /* 12cc2164 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc2167 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc216a je 0x12cc2210 */
  if (C.zf) goto L_12cc2210;
  /* 12cc2170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2173 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cc2176 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2179 jne 0x12cc2189 */
  if (!C.zf) goto L_12cc2189;
  /* 12cc217b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc217e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2181 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12cc2184 jmp 0x12cc2210 */
  goto L_12cc2210;
L_12cc2189:;
  /* 12cc2189 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc218c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc218e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cc2190 mov edx, dword ptr [0x12cdec98] */
  EDX = (r32((uint32_t)(0x12cdec98)));
  /* 12cc2196 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc2198 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12cc219c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12cc21a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc21a3 je 0x12cc21dc */
  if (C.zf) goto L_12cc21dc;
  /* 12cc21a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc21a8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc21ab jbe 0x12cc21dc */
  if ((C.cf||C.zf)) goto L_12cc21dc;
  /* 12cc21ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc21b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc21b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc21b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cc21b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cc21b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc21bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc21be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc21c1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc21c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cc21c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc21c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc21cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cc21cf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc21d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc21d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc21d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc21da mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12cc21dc:;
  /* 12cc21dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc21df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc21e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc21e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cc21e6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12cc21e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc21eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc21ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc21f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc21f3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cc21f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc21f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc21fb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12cc21fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc2201 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc2203 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc2206 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc2209 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cc220b jmp 0x12cc2156 */
  goto L_12cc2156;
L_12cc2210:;
  /* 12cc2210 jmp 0x12cc221b */
  goto L_12cc221b;
L_12cc2212:;
  /* 12cc2212 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2215 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2218 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12cc221b:;
  /* 12cc221b jmp 0x12cc1e56 */
  goto L_12cc1e56;
L_12cc2220:;
  /* 12cc2220 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cc2224 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc2226 je 0x12cc224c */
  if (C.zf) goto L_12cc224c;
  /* 12cc2228 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc222b push edx */
  push32((uint32_t)(EDX));
  /* 12cc222c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc222f push eax */
  push32((uint32_t)(EAX));
  /* 12cc2230 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc2233 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2234 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc2237 push edx */
  push32((uint32_t)(EDX));
  /* 12cc2238 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12cc223b push eax */
  push32((uint32_t)(EAX));
  /* 12cc223c call 0x12cc1680 */
  push32(0x12cc2241u); f_12cc1680();
  /* 12cc2241 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2244 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc2247 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12cc224a jmp 0x12cc22c7 */
  goto L_12cc22c7;
L_12cc224c:;
  /* 12cc224c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc224f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc2251 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc2253 mov ecx, dword ptr [0x12cdec98] */
  ECX = (r32((uint32_t)(0x12cdec98)));
  /* 12cc2259 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc225b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12cc225f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc2265 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc2267 je 0x12cc2298 */
  if (C.zf) goto L_12cc2298;
  /* 12cc2269 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc226c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc226e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2271 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc2273 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12cc2275 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc2278 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc227a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc227d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc2280 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cc2282 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2285 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2288 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12cc228b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc228e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc2290 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc2293 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc2296 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12cc2298:;
  /* 12cc2298 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc229b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc229d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc22a0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cc22a2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12cc22a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc22a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc22a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc22ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc22af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cc22b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc22b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc22b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cc22ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc22bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc22bf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc22c2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc22c5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12cc22c7:;
  /* 12cc22c7 jmp 0x12cc1e56 */
  goto L_12cc1e56;
L_12cc22cc:;
  /* 12cc22cc mov esp, ebp */
  ESP = (EBP);
  /* 12cc22ce pop ebp */
  EBP = (pop32());
  /* 12cc22cf ret  */
  ESPCHK(0x12cc1e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012370 @ 0x12cc2370 (650 bytes, 178 insns) */
void f_12cc2370(void) {
  FTRACE(0x12cc2370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc2370 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc2371 mov ebp, esp */
  EBP = (ESP);
  /* 12cc2373 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc2379 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc237d jne 0x12cc24d9 */
  if (!C.zf) goto L_12cc24d9;
  /* 12cc2383 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc2386 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12cc238c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12cc2392 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cc2395 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cc239c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12cc23a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc23a8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12cc23ae push edx */
  push32((uint32_t)(EDX));
  /* 12cc23af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc23b2 push eax */
  push32((uint32_t)(EAX));
  /* 12cc23b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc23b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc23b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc23ba push edx */
  push32((uint32_t)(EDX));
  /* 12cc23bb call 0x12cc3790 */
  push32(0x12cc23c0u); f_12cc3790();
  /* 12cc23c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc23c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cc23c6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc23ca jne 0x12cc245f */
  if (!C.zf) goto L_12cc245f;
  /* 12cc23d0 call dword ptr [0x12ce3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3348))), 0x12cc23d6u);
  /* 12cc23d6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc23d9 je 0x12cc23e0 */
  if (C.zf) goto L_12cc23e0;
  /* 12cc23db jmp 0x12cc24bd */
  goto L_12cc24bd;
L_12cc23e0:;
  /* 12cc23e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc23e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc23e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc23e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc23e9 push eax */
  push32((uint32_t)(EAX));
  /* 12cc23ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc23ed push ecx */
  push32((uint32_t)(ECX));
  /* 12cc23ee call 0x12cc3790 */
  push32(0x12cc23f3u); f_12cc3790();
  /* 12cc23f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc23f6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12cc23fc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2403 jne 0x12cc240a */
  if (!C.zf) goto L_12cc240a;
  /* 12cc2405 jmp 0x12cc24bd */
  goto L_12cc24bd;
L_12cc240a:;
  /* 12cc240a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12cc240c push 0x12cdcc54 */
  push32((uint32_t)(0x12cdcc54u));
  /* 12cc2411 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc2413 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12cc2419 push edx */
  push32((uint32_t)(EDX));
  /* 12cc241a call 0x12cb41b0 */
  push32(0x12cc241fu); f_12cb41b0();
  /* 12cc241f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2422 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cc2425 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2429 jne 0x12cc2430 */
  if (!C.zf) goto L_12cc2430;
  /* 12cc242b jmp 0x12cc24bd */
  goto L_12cc24bd;
L_12cc2430:;
  /* 12cc2430 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cc2437 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc2439 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12cc243f push eax */
  push32((uint32_t)(EAX));
  /* 12cc2440 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2443 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2444 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc2447 push edx */
  push32((uint32_t)(EDX));
  /* 12cc2448 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc244b push eax */
  push32((uint32_t)(EAX));
  /* 12cc244c call 0x12cc3790 */
  push32(0x12cc2451u); f_12cc3790();
  /* 12cc2451 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2454 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cc2457 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc245b jne 0x12cc245f */
  if (!C.zf) goto L_12cc245f;
  /* 12cc245d jmp 0x12cc24bd */
  goto L_12cc24bd;
L_12cc245f:;
  /* 12cc245f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12cc2461 push 0x12cdcc54 */
  push32((uint32_t)(0x12cdcc54u));
  /* 12cc2466 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc2468 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc246b push ecx */
  push32((uint32_t)(ECX));
  /* 12cc246c call 0x12cb41b0 */
  push32(0x12cc2471u); f_12cb41b0();
  /* 12cc2471 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2474 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12cc247a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12cc247c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12cc2482 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2485 jne 0x12cc2489 */
  if (!C.zf) goto L_12cc2489;
  /* 12cc2487 jmp 0x12cc24bd */
  goto L_12cc24bd;
L_12cc2489:;
  /* 12cc2489 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc248c push ecx */
  push32((uint32_t)(ECX));
  /* 12cc248d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2490 push edx */
  push32((uint32_t)(EDX));
  /* 12cc2491 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12cc2497 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc2499 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc249a call 0x12cb79d0 */
  push32(0x12cc249fu); f_12cb79d0();
  /* 12cc249f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc24a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc24a6 je 0x12cc24b6 */
  if (C.zf) goto L_12cc24b6;
  /* 12cc24a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc24aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc24ad push edx */
  push32((uint32_t)(EDX));
  /* 12cc24ae call 0x12cb4c40 */
  push32(0x12cc24b3u); f_12cb4c40();
  /* 12cc24b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc24b6:;
  /* 12cc24b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc24b8 jmp 0x12cc25f6 */
  goto L_12cc25f6;
L_12cc24bd:;
  /* 12cc24bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc24c1 je 0x12cc24d1 */
  if (C.zf) goto L_12cc24d1;
  /* 12cc24c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc24c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc24c8 push eax */
  push32((uint32_t)(EAX));
  /* 12cc24c9 call 0x12cb4c40 */
  push32(0x12cc24ceu); f_12cb4c40();
  /* 12cc24ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc24d1:;
  /* 12cc24d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc24d4 jmp 0x12cc25f6 */
  goto L_12cc25f6;
L_12cc24d9:;
  /* 12cc24d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc24dd jne 0x12cc25f3 */
  if (!C.zf) goto L_12cc25f3;
  /* 12cc24e3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12cc24ed mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc24f0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12cc24f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc24f8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12cc24fe push edx */
  push32((uint32_t)(EDX));
  /* 12cc24ff push 0x12ce07a8 */
  push32((uint32_t)(0x12ce07a8u));
  /* 12cc2504 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc2507 push eax */
  push32((uint32_t)(EAX));
  /* 12cc2508 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc250b push ecx */
  push32((uint32_t)(ECX));
  /* 12cc250c call 0x12cc35f0 */
  push32(0x12cc2511u); f_12cc35f0();
  /* 12cc2511 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc2516 jne 0x12cc2520 */
  if (!C.zf) goto L_12cc2520;
  /* 12cc2518 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc251b jmp 0x12cc25f6 */
  goto L_12cc25f6;
L_12cc2520:;
  /* 12cc2520 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12cc2526 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12cc2529 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12cc2533 jmp 0x12cc2544 */
  goto L_12cc2544;
L_12cc2535:;
  /* 12cc2535 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cc253b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc253e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12cc2544:;
  /* 12cc2544 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc254b jge 0x12cc25ef */
  if ((C.sf==C.of)) goto L_12cc25ef;
  /* 12cc2551 cmp dword ptr [0x12cdeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12cdeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2558 jle 0x12cc258b */
  if ((C.zf||C.sf!=C.of)) goto L_12cc258b;
  /* 12cc255a push 4 */
  push32((uint32_t)(0x4u));
  /* 12cc255c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cc2562 mov dl, byte ptr [ecx*2 + 0x12ce07a8] */
  DL = (r8((uint32_t)(ECX*2 + 0x12ce07a8)));
  /* 12cc2569 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12cc256f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12cc2575 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc257a push eax */
  push32((uint32_t)(EAX));
  /* 12cc257b call 0x12cba1c0 */
  push32(0x12cc2580u); f_12cba1c0();
  /* 12cc2580 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2583 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12cc2589 jmp 0x12cc25be */
  goto L_12cc25be;
L_12cc258b:;
  /* 12cc258b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cc2591 mov dl, byte ptr [ecx*2 + 0x12ce07a8] */
  DL = (r8((uint32_t)(ECX*2 + 0x12ce07a8)));
  /* 12cc2598 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12cc259e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12cc25a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc25a9 mov ecx, dword ptr [0x12cdec98] */
  ECX = (r32((uint32_t)(0x12cdec98)));
  /* 12cc25af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc25b1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12cc25b5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc25b8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12cc25be:;
  /* 12cc25be cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc25c5 je 0x12cc25e8 */
  if (C.zf) goto L_12cc25e8;
  /* 12cc25c7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12cc25cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cc25d0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc25d3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12cc25da lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12cc25de mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12cc25e4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12cc25e6 jmp 0x12cc25ea */
  goto L_12cc25ea;
L_12cc25e8:;
  /* 12cc25e8 jmp 0x12cc25ef */
  goto L_12cc25ef;
L_12cc25ea:;
  /* 12cc25ea jmp 0x12cc2535 */
  goto L_12cc2535;
L_12cc25ef:;
  /* 12cc25ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc25f1 jmp 0x12cc25f6 */
  goto L_12cc25f6;
L_12cc25f3:;
  /* 12cc25f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12cc25f6:;
  /* 12cc25f6 mov esp, ebp */
  ESP = (EBP);
  /* 12cc25f8 pop ebp */
  EBP = (pop32());
  /* 12cc25f9 ret  */
  ESPCHK(0x12cc2370u, _esp0);
  ESP += 4; return;
}

/* FUN_10012600 @ 0x12cc2600 (10 bytes, 5 insns) */
void f_12cc2600(void) {
  FTRACE(0x12cc2600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc2600 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc2601 mov ebp, esp */
  EBP = (ESP);
  /* 12cc2603 mov eax, dword ptr [0x12cdfd88] */
  EAX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cc2608 pop ebp */
  EBP = (pop32());
  /* 12cc2609 ret  */
  ESPCHK(0x12cc2600u, _esp0);
  ESP += 4; return;
}

/* FUN_10012610 @ 0x12cc2610 (575 bytes, 196 insns) */
void f_12cc2610(void) {
  FTRACE(0x12cc2610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc2610 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc2611 mov ebp, esp */
  EBP = (ESP);
  /* 12cc2613 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cc2615 push 0x12cdcc60 */
  push32((uint32_t)(0x12cdcc60u));
  /* 12cc261a push 0x12cbd2b8 */
  push32((uint32_t)(0x12cbd2b8u));
  /* 12cc261f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12cc2625 push eax */
  push32((uint32_t)(EAX));
  /* 12cc2626 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12cc262d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2630 push ebx */
  push32((uint32_t)(EBX));
  /* 12cc2631 push esi */
  push32((uint32_t)(ESI));
  /* 12cc2632 push edi */
  push32((uint32_t)(EDI));
  /* 12cc2633 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cc2636 cmp dword ptr [0x12ce07b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce07b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc263d jne 0x12cc268e */
  if (!C.zf) goto L_12cc268e;
  /* 12cc263f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12cc2642 push eax */
  push32((uint32_t)(EAX));
  /* 12cc2643 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc2645 push 0x12cdc394 */
  push32((uint32_t)(0x12cdc394u));
  /* 12cc264a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc264c call dword ptr [0x12ce32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32cc))), 0x12cc2652u);
  /* 12cc2652 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc2654 je 0x12cc2662 */
  if (C.zf) goto L_12cc2662;
  /* 12cc2656 mov dword ptr [0x12ce07b4], 1 */
  w32((uint32_t)(0x12ce07b4), (0x1u));
  /* 12cc2660 jmp 0x12cc268e */
  goto L_12cc268e;
L_12cc2662:;
  /* 12cc2662 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12cc2665 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2666 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc2668 push 0x12cdc390 */
  push32((uint32_t)(0x12cdc390u));
  /* 12cc266d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc266f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc2671 call dword ptr [0x12ce32d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32d0))), 0x12cc2677u);
  /* 12cc2677 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc2679 je 0x12cc2687 */
  if (C.zf) goto L_12cc2687;
  /* 12cc267b mov dword ptr [0x12ce07b4], 2 */
  w32((uint32_t)(0x12ce07b4), (0x2u));
  /* 12cc2685 jmp 0x12cc268e */
  goto L_12cc268e;
L_12cc2687:;
  /* 12cc2687 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc2689 jmp 0x12cc2869 */
  goto L_12cc2869;
L_12cc268e:;
  /* 12cc268e cmp dword ptr [0x12ce07b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce07b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2695 jne 0x12cc26b2 */
  if (!C.zf) goto L_12cc26b2;
  /* 12cc2697 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc269a push edx */
  push32((uint32_t)(EDX));
  /* 12cc269b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc269e push eax */
  push32((uint32_t)(EAX));
  /* 12cc269f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc26a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc26a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc26a6 push edx */
  push32((uint32_t)(EDX));
  /* 12cc26a7 call dword ptr [0x12ce32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32cc))), 0x12cc26adu);
  /* 12cc26ad jmp 0x12cc2869 */
  goto L_12cc2869;
L_12cc26b2:;
  /* 12cc26b2 cmp dword ptr [0x12ce07b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ce07b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc26b9 jne 0x12cc2867 */
  if (!C.zf) goto L_12cc2867;
  /* 12cc26bf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc26c3 jne 0x12cc26cd */
  if (!C.zf) goto L_12cc26cd;
  /* 12cc26c5 mov eax, dword ptr [0x12ce0728] */
  EAX = (r32((uint32_t)(0x12ce0728)));
  /* 12cc26ca mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12cc26cd:;
  /* 12cc26cd push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc26cf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc26d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc26d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc26d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc26d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc26d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc26dc push edx */
  push32((uint32_t)(EDX));
  /* 12cc26dd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12cc26e2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc26e5 push eax */
  push32((uint32_t)(EAX));
  /* 12cc26e6 call dword ptr [0x12ce3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3370))), 0x12cc26ecu);
  /* 12cc26ec mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cc26ef cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc26f3 jne 0x12cc26fc */
  if (!C.zf) goto L_12cc26fc;
  /* 12cc26f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc26f7 jmp 0x12cc2869 */
  goto L_12cc2869;
L_12cc26fc:;
  /* 12cc26fc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cc2703 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cc2706 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2709 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12cc270b call 0x12cb7350 */
  push32(0x12cc2710u); f_12cb7350();
  /* 12cc2710 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12cc2713 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cc2716 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cc2719 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12cc271c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cc271f push edx */
  push32((uint32_t)(EDX));
  /* 12cc2720 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc2722 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cc2725 push eax */
  push32((uint32_t)(EAX));
  /* 12cc2726 call 0x12cb7f20 */
  push32(0x12cc272bu); f_12cb7f20();
  /* 12cc272b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc272e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cc2735 jmp 0x12cc274e */
  goto L_12cc274e;
  /* 12cc2737 mov eax, 1 */
  EAX = (0x1u);
  /* 12cc273c ret  */
  ESPCHK(0x12cc2610u, _esp0);
  ESP += 4; return;
  /* 12cc273d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc2740 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12cc2747 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cc274e:;
  /* 12cc274e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2752 jne 0x12cc275b */
  if (!C.zf) goto L_12cc275b;
  /* 12cc2754 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc2756 jmp 0x12cc2869 */
  goto L_12cc2869;
L_12cc275b:;
  /* 12cc275b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc275d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc275f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cc2762 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2763 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cc2766 push edx */
  push32((uint32_t)(EDX));
  /* 12cc2767 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc276a push eax */
  push32((uint32_t)(EAX));
  /* 12cc276b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc276e push ecx */
  push32((uint32_t)(ECX));
  /* 12cc276f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12cc2774 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc2777 push edx */
  push32((uint32_t)(EDX));
  /* 12cc2778 call dword ptr [0x12ce3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3370))), 0x12cc277eu);
  /* 12cc277e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc2780 jne 0x12cc2789 */
  if (!C.zf) goto L_12cc2789;
  /* 12cc2782 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc2784 jmp 0x12cc2869 */
  goto L_12cc2869;
L_12cc2789:;
  /* 12cc2789 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cc2790 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cc2793 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12cc2797 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc279a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12cc279c call 0x12cb7350 */
  push32(0x12cc27a1u); f_12cb7350();
  /* 12cc27a1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12cc27a4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cc27a7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cc27aa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12cc27ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cc27b4 jmp 0x12cc27cd */
  goto L_12cc27cd;
  /* 12cc27b6 mov eax, 1 */
  EAX = (0x1u);
  /* 12cc27bb ret  */
  ESPCHK(0x12cc2610u, _esp0);
  ESP += 4; return;
  /* 12cc27bc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc27bf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12cc27c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cc27cd:;
  /* 12cc27cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc27d1 jne 0x12cc27da */
  if (!C.zf) goto L_12cc27da;
  /* 12cc27d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc27d5 jmp 0x12cc2869 */
  goto L_12cc2869;
L_12cc27da:;
  /* 12cc27da cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc27de jne 0x12cc27e9 */
  if (!C.zf) goto L_12cc27e9;
  /* 12cc27e0 mov edx, dword ptr [0x12ce0718] */
  EDX = (r32((uint32_t)(0x12ce0718)));
  /* 12cc27e6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12cc27e9:;
  /* 12cc27e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc27ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cc27ef mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12cc27f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc27f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cc27fb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12cc2802 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cc2805 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2806 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cc2809 push edx */
  push32((uint32_t)(EDX));
  /* 12cc280a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cc280d push eax */
  push32((uint32_t)(EAX));
  /* 12cc280e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2811 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2812 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12cc2815 push edx */
  push32((uint32_t)(EDX));
  /* 12cc2816 call dword ptr [0x12ce32d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32d0))), 0x12cc281cu);
  /* 12cc281c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cc281f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc2822 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cc2825 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc2827 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12cc282c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2832 je 0x12cc2848 */
  if (C.zf) goto L_12cc2848;
  /* 12cc2834 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc2837 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cc283a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc283c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12cc2840 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2846 je 0x12cc284c */
  if (C.zf) goto L_12cc284c;
L_12cc2848:;
  /* 12cc2848 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc284a jmp 0x12cc2869 */
  goto L_12cc2869;
L_12cc284c:;
  /* 12cc284c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc284f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cc2851 push eax */
  push32((uint32_t)(EAX));
  /* 12cc2852 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cc2855 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2856 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc2859 push edx */
  push32((uint32_t)(EDX));
  /* 12cc285a call 0x12cbc0a0 */
  push32(0x12cc285fu); f_12cbc0a0();
  /* 12cc285f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2862 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cc2865 jmp 0x12cc2869 */
  goto L_12cc2869;
L_12cc2867:;
  /* 12cc2867 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cc2869:;
  /* 12cc2869 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12cc286c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc286f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12cc2876 pop edi */
  EDI = (pop32());
  /* 12cc2877 pop esi */
  ESI = (pop32());
  /* 12cc2878 pop ebx */
  EBX = (pop32());
  /* 12cc2879 mov esp, ebp */
  ESP = (EBP);
  /* 12cc287b pop ebp */
  EBP = (pop32());
  /* 12cc287c ret  */
  ESPCHK(0x12cc2610u, _esp0);
  ESP += 4; return;
}

/* FUN_10012880 @ 0x12cc2880 (208 bytes, 85 insns) */
void f_12cc2880(void) {
  FTRACE(0x12cc2880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc2880 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc2881 mov ebp, esp */
  EBP = (ESP);
  /* 12cc2883 push edi */
  push32((uint32_t)(EDI));
  /* 12cc2884 push esi */
  push32((uint32_t)(ESI));
  /* 12cc2885 push ebx */
  push32((uint32_t)(EBX));
  /* 12cc2886 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc2889 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc288c lea eax, [0x12ce0710] */
  EAX = ((uint32_t)(0x12ce0710));
  /* 12cc2892 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2896 jne 0x12cc28d3 */
  if (!C.zf) goto L_12cc28d3;
  /* 12cc2898 mov al, 0xff */
  AL = (0xffu);
  /* 12cc289a mov edi, edi */
  EDI = (EDI);
L_12cc289c:;
  /* 12cc289c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cc289e je 0x12cc28ce */
  if (C.zf) goto L_12cc28ce;
  /* 12cc28a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cc28a2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cc28a3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12cc28a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cc28a6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc28a8 je 0x12cc289c */
  if (C.zf) goto L_12cc289c;
  /* 12cc28aa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cc28ac cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc28ae sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cc28b0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12cc28b3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cc28b5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cc28b7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12cc28b9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cc28bb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc28bd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cc28bf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12cc28c2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cc28c4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cc28c6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc28c8 je 0x12cc289c */
  if (C.zf) goto L_12cc289c;
  /* 12cc28ca sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cc28cc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12cc28ce:;
  /* 12cc28ce movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12cc28d1 jmp 0x12cc294b */
  goto L_12cc294b;
L_12cc28d3:;
  /* 12cc28d3 lock inc dword ptr [0x12ce08a4] */
  x86_unimpl("lock inc @ 0x12cc28d3");
  /* 12cc28da cmp dword ptr [0x12ce0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc28e1 jg 0x12cc28e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc28e7;
  /* 12cc28e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc28e5 jmp 0x12cc28fc */
  goto L_12cc28fc;
L_12cc28e7:;
  /* 12cc28e7 lock dec dword ptr [0x12ce08a4] */
  x86_unimpl("lock dec @ 0x12cc28e7");
  /* 12cc28ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cc28f0 call 0x12cb7bb0 */
  push32(0x12cc28f5u); f_12cb7bb0();
  /* 12cc28f5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12cc28fc:;
  /* 12cc28fc mov eax, 0xff */
  EAX = (0xffu);
  /* 12cc2901 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12cc2903 nop  */
  /* nop */
L_12cc2904:;
  /* 12cc2904 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cc2906 je 0x12cc292f */
  if (C.zf) goto L_12cc292f;
  /* 12cc2908 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cc290a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cc290b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12cc290d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cc290e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc2910 je 0x12cc2904 */
  if (C.zf) goto L_12cc2904;
  /* 12cc2912 push eax */
  push32((uint32_t)(EAX));
  /* 12cc2913 push ebx */
  push32((uint32_t)(EBX));
  /* 12cc2914 call 0x12cc39f0 */
  push32(0x12cc2919u); f_12cc39f0();
  /* 12cc2919 mov ebx, eax */
  EBX = (EAX);
  /* 12cc291b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc291e call 0x12cc39f0 */
  push32(0x12cc2923u); f_12cc39f0();
  /* 12cc2923 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2926 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc2928 je 0x12cc2904 */
  if (C.zf) goto L_12cc2904;
  /* 12cc292a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc292c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12cc292f:;
  /* 12cc292f mov ebx, eax */
  EBX = (EAX);
  /* 12cc2931 pop eax */
  EAX = (pop32());
  /* 12cc2932 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc2934 jne 0x12cc293f */
  if (!C.zf) goto L_12cc293f;
  /* 12cc2936 lock dec dword ptr [0x12ce08a4] */
  x86_unimpl("lock dec @ 0x12cc2936");
  /* 12cc293d jmp 0x12cc2949 */
  goto L_12cc2949;
L_12cc293f:;
  /* 12cc293f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cc2941 call 0x12cb7c50 */
  push32(0x12cc2946u); f_12cb7c50();
  /* 12cc2946 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc2949:;
  /* 12cc2949 mov eax, ebx */
  EAX = (EBX);
L_12cc294b:;
  /* 12cc294b pop ebx */
  EBX = (pop32());
  /* 12cc294c pop esi */
  ESI = (pop32());
  /* 12cc294d pop edi */
  EDI = (pop32());
  /* 12cc294e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cc294f ret  */
  ESPCHK(0x12cc2880u, _esp0);
  ESP += 4; return;
}

/* FUN_10012950 @ 0x12cc2950 (257 bytes, 103 insns) */
void f_12cc2950(void) {
  FTRACE(0x12cc2950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc2950 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc2951 mov ebp, esp */
  EBP = (ESP);
  /* 12cc2953 push edi */
  push32((uint32_t)(EDI));
  /* 12cc2954 push esi */
  push32((uint32_t)(ESI));
  /* 12cc2955 push ebx */
  push32((uint32_t)(EBX));
  /* 12cc2956 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc2959 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc295b je 0x12cc2a4a */
  if (C.zf) goto L_12cc2a4a;
  /* 12cc2961 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2964 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc2967 lea eax, [0x12ce0710] */
  EAX = ((uint32_t)(0x12ce0710));
  /* 12cc296d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2971 jne 0x12cc29c1 */
  if (!C.zf) goto L_12cc29c1;
  /* 12cc2973 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12cc2975 mov bl, 0x5a */
  BL = (0x5au);
  /* 12cc2977 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12cc2979 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cc297c:;
  /* 12cc297c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12cc297e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12cc2980 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12cc2982 je 0x12cc29a5 */
  if (C.zf) goto L_12cc29a5;
  /* 12cc2984 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cc2986 je 0x12cc29a5 */
  if (C.zf) goto L_12cc29a5;
  /* 12cc2988 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cc2989 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cc298a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc298c jb 0x12cc2994 */
  if (C.cf) goto L_12cc2994;
  /* 12cc298e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc2990 ja 0x12cc2994 */
  if ((!C.cf&&!C.zf)) goto L_12cc2994;
  /* 12cc2992 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12cc2994:;
  /* 12cc2994 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc2996 jb 0x12cc299e */
  if (C.cf) goto L_12cc299e;
  /* 12cc2998 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc299a ja 0x12cc299e */
  if ((!C.cf&&!C.zf)) goto L_12cc299e;
  /* 12cc299c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12cc299e:;
  /* 12cc299e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc29a0 jne 0x12cc29af */
  if (!C.zf) goto L_12cc29af;
  /* 12cc29a2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cc29a3 jne 0x12cc297c */
  if (!C.zf) goto L_12cc297c;
L_12cc29a5:;
  /* 12cc29a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc29a7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc29a9 je 0x12cc2a4a */
  if (C.zf) goto L_12cc2a4a;
L_12cc29af:;
  /* 12cc29af mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12cc29b4 jb 0x12cc2a4a */
  if (C.cf) goto L_12cc2a4a;
  /* 12cc29ba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc29bc jmp 0x12cc2a4a */
  goto L_12cc2a4a;
L_12cc29c1:;
  /* 12cc29c1 lock inc dword ptr [0x12ce08a4] */
  x86_unimpl("lock inc @ 0x12cc29c1");
  /* 12cc29c8 cmp dword ptr [0x12ce0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc29cf jg 0x12cc29d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc29d5;
  /* 12cc29d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc29d3 jmp 0x12cc29ee */
  goto L_12cc29ee;
L_12cc29d5:;
  /* 12cc29d5 lock dec dword ptr [0x12ce08a4] */
  x86_unimpl("lock dec @ 0x12cc29d5");
  /* 12cc29dc mov ebx, ecx */
  EBX = (ECX);
  /* 12cc29de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cc29e0 call 0x12cb7bb0 */
  push32(0x12cc29e5u); f_12cb7bb0();
  /* 12cc29e5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12cc29ec mov ecx, ebx */
  ECX = (EBX);
L_12cc29ee:;
  /* 12cc29ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc29f0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12cc29f2 mov edi, edi */
  EDI = (EDI);
L_12cc29f4:;
  /* 12cc29f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cc29f6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc29f8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12cc29fa je 0x12cc2a1f */
  if (C.zf) goto L_12cc2a1f;
  /* 12cc29fc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12cc29fe je 0x12cc2a1f */
  if (C.zf) goto L_12cc2a1f;
  /* 12cc2a00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cc2a01 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cc2a02 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2a03 push eax */
  push32((uint32_t)(EAX));
  /* 12cc2a04 push ebx */
  push32((uint32_t)(EBX));
  /* 12cc2a05 call 0x12cc39f0 */
  push32(0x12cc2a0au); f_12cc39f0();
  /* 12cc2a0a mov ebx, eax */
  EBX = (EAX);
  /* 12cc2a0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2a0f call 0x12cc39f0 */
  push32(0x12cc2a14u); f_12cc39f0();
  /* 12cc2a14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2a17 pop ecx */
  ECX = (pop32());
  /* 12cc2a18 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2a1a jne 0x12cc2a25 */
  if (!C.zf) goto L_12cc2a25;
  /* 12cc2a1c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cc2a1d jne 0x12cc29f4 */
  if (!C.zf) goto L_12cc29f4;
L_12cc2a1f:;
  /* 12cc2a1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc2a21 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2a23 je 0x12cc2a2e */
  if (C.zf) goto L_12cc2a2e;
L_12cc2a25:;
  /* 12cc2a25 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12cc2a2a jb 0x12cc2a2e */
  if (C.cf) goto L_12cc2a2e;
  /* 12cc2a2c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12cc2a2e:;
  /* 12cc2a2e pop eax */
  EAX = (pop32());
  /* 12cc2a2f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc2a31 jne 0x12cc2a3c */
  if (!C.zf) goto L_12cc2a3c;
  /* 12cc2a33 lock dec dword ptr [0x12ce08a4] */
  x86_unimpl("lock dec @ 0x12cc2a33");
  /* 12cc2a3a jmp 0x12cc2a4a */
  goto L_12cc2a4a;
L_12cc2a3c:;
  /* 12cc2a3c mov ebx, ecx */
  EBX = (ECX);
  /* 12cc2a3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cc2a40 call 0x12cb7c50 */
  push32(0x12cc2a45u); f_12cb7c50();
  /* 12cc2a45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2a48 mov ecx, ebx */
  ECX = (EBX);
L_12cc2a4a:;
  /* 12cc2a4a mov eax, ecx */
  EAX = (ECX);
  /* 12cc2a4c pop ebx */
  EBX = (pop32());
  /* 12cc2a4d pop esi */
  ESI = (pop32());
  /* 12cc2a4e pop edi */
  EDI = (pop32());
  /* 12cc2a4f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cc2a50 ret  */
  ESPCHK(0x12cc2950u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a60 @ 0x12cc2a60 (255 bytes, 88 insns) */
void f_12cc2a60(void) {
  FTRACE(0x12cc2a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc2a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc2a61 mov ebp, esp */
  EBP = (ESP);
  /* 12cc2a63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12cc2a66:;
  /* 12cc2a66 cmp dword ptr [0x12cdeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12cdeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2a6d jle 0x12cc2a86 */
  if ((C.zf||C.sf!=C.of)) goto L_12cc2a86;
  /* 12cc2a6f push 8 */
  push32((uint32_t)(0x8u));
  /* 12cc2a71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2a74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc2a76 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cc2a78 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2a79 call 0x12cba1c0 */
  push32(0x12cc2a7eu); f_12cba1c0();
  /* 12cc2a7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2a81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cc2a84 jmp 0x12cc2a9f */
  goto L_12cc2a9f;
L_12cc2a86:;
  /* 12cc2a86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2a89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc2a8b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc2a8d mov ecx, dword ptr [0x12cdec98] */
  ECX = (r32((uint32_t)(0x12cdec98)));
  /* 12cc2a93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc2a95 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12cc2a99 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc2a9c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12cc2a9f:;
  /* 12cc2a9f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2aa3 je 0x12cc2ab0 */
  if (C.zf) goto L_12cc2ab0;
  /* 12cc2aa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2aa8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2aab mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cc2aae jmp 0x12cc2a66 */
  goto L_12cc2a66;
L_12cc2ab0:;
  /* 12cc2ab0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2ab3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc2ab5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cc2ab7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cc2aba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2abd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2ac0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cc2ac3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc2ac6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cc2ac9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2acd je 0x12cc2ad5 */
  if (C.zf) goto L_12cc2ad5;
  /* 12cc2acf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2ad3 jne 0x12cc2ae8 */
  if (!C.zf) goto L_12cc2ae8;
L_12cc2ad5:;
  /* 12cc2ad5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2ad8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc2ada mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc2adc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc2adf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2ae2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2ae5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12cc2ae8:;
  /* 12cc2ae8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12cc2aef:;
  /* 12cc2aef cmp dword ptr [0x12cdeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12cdeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2af6 jle 0x12cc2b0b */
  if ((C.zf||C.sf!=C.of)) goto L_12cc2b0b;
  /* 12cc2af8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cc2afa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc2afd push edx */
  push32((uint32_t)(EDX));
  /* 12cc2afe call 0x12cba1c0 */
  push32(0x12cc2b03u); f_12cba1c0();
  /* 12cc2b03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2b06 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cc2b09 jmp 0x12cc2b20 */
  goto L_12cc2b20;
L_12cc2b0b:;
  /* 12cc2b0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc2b0e mov ecx, dword ptr [0x12cdec98] */
  ECX = (r32((uint32_t)(0x12cdec98)));
  /* 12cc2b14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc2b16 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12cc2b1a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc2b1d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12cc2b20:;
  /* 12cc2b20 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2b24 je 0x12cc2b4b */
  if (C.zf) goto L_12cc2b4b;
  /* 12cc2b26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc2b29 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc2b2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc2b2f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12cc2b33 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cc2b36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2b39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc2b3b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cc2b3d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cc2b40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2b43 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2b46 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12cc2b49 jmp 0x12cc2aef */
  goto L_12cc2aef;
L_12cc2b4b:;
  /* 12cc2b4b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2b4f jne 0x12cc2b58 */
  if (!C.zf) goto L_12cc2b58;
  /* 12cc2b51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc2b54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc2b56 jmp 0x12cc2b5b */
  goto L_12cc2b5b;
L_12cc2b58:;
  /* 12cc2b58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12cc2b5b:;
  /* 12cc2b5b mov esp, ebp */
  ESP = (EBP);
  /* 12cc2b5d pop ebp */
  EBP = (pop32());
  /* 12cc2b5e ret  */
  ESPCHK(0x12cc2a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b60 @ 0x12cc2b60 (17 bytes, 8 insns) */
void f_12cc2b60(void) {
  FTRACE(0x12cc2b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc2b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc2b61 mov ebp, esp */
  EBP = (ESP);
  /* 12cc2b63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2b66 push eax */
  push32((uint32_t)(EAX));
  /* 12cc2b67 call 0x12cc2a60 */
  push32(0x12cc2b6cu); f_12cc2a60();
  /* 12cc2b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2b6f pop ebp */
  EBP = (pop32());
  /* 12cc2b70 ret  */
  ESPCHK(0x12cc2b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b80 @ 0x12cc2b80 (297 bytes, 106 insns) */
void f_12cc2b80(void) {
  FTRACE(0x12cc2b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc2b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc2b81 mov ebp, esp */
  EBP = (ESP);
  /* 12cc2b83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc2b86 push esi */
  push32((uint32_t)(ESI));
L_12cc2b87:;
  /* 12cc2b87 cmp dword ptr [0x12cdeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12cdeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2b8e jle 0x12cc2ba7 */
  if ((C.zf||C.sf!=C.of)) goto L_12cc2ba7;
  /* 12cc2b90 push 8 */
  push32((uint32_t)(0x8u));
  /* 12cc2b92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2b95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc2b97 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cc2b99 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2b9a call 0x12cba1c0 */
  push32(0x12cc2b9fu); f_12cba1c0();
  /* 12cc2b9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2ba2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cc2ba5 jmp 0x12cc2bc0 */
  goto L_12cc2bc0;
L_12cc2ba7:;
  /* 12cc2ba7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc2bac mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc2bae mov ecx, dword ptr [0x12cdec98] */
  ECX = (r32((uint32_t)(0x12cdec98)));
  /* 12cc2bb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc2bb6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12cc2bba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc2bbd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12cc2bc0:;
  /* 12cc2bc0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2bc4 je 0x12cc2bd1 */
  if (C.zf) goto L_12cc2bd1;
  /* 12cc2bc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2bc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2bcc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cc2bcf jmp 0x12cc2b87 */
  goto L_12cc2b87;
L_12cc2bd1:;
  /* 12cc2bd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2bd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc2bd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cc2bd8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cc2bdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2bde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2be1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cc2be4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc2be7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cc2bea cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2bee je 0x12cc2bf6 */
  if (C.zf) goto L_12cc2bf6;
  /* 12cc2bf0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2bf4 jne 0x12cc2c09 */
  if (!C.zf) goto L_12cc2c09;
L_12cc2bf6:;
  /* 12cc2bf6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2bf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc2bfb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc2bfd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc2c00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2c03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2c06 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12cc2c09:;
  /* 12cc2c09 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cc2c10 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12cc2c17:;
  /* 12cc2c17 cmp dword ptr [0x12cdeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12cdeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2c1e jle 0x12cc2c33 */
  if ((C.zf||C.sf!=C.of)) goto L_12cc2c33;
  /* 12cc2c20 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cc2c22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc2c25 push edx */
  push32((uint32_t)(EDX));
  /* 12cc2c26 call 0x12cba1c0 */
  push32(0x12cc2c2bu); f_12cba1c0();
  /* 12cc2c2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2c2e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cc2c31 jmp 0x12cc2c48 */
  goto L_12cc2c48;
L_12cc2c33:;
  /* 12cc2c33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc2c36 mov ecx, dword ptr [0x12cdec98] */
  ECX = (r32((uint32_t)(0x12cdec98)));
  /* 12cc2c3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc2c3e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12cc2c42 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc2c45 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12cc2c48:;
  /* 12cc2c48 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2c4c je 0x12cc2c89 */
  if (C.zf) goto L_12cc2c89;
  /* 12cc2c4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc2c50 push 0xa */
  push32((uint32_t)(0xau));
  /* 12cc2c52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc2c55 push eax */
  push32((uint32_t)(EAX));
  /* 12cc2c56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2c59 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2c5a call 0x12cc3b20 */
  push32(0x12cc2c5fu); f_12cc3b20();
  /* 12cc2c5f mov ecx, eax */
  ECX = (EAX);
  /* 12cc2c61 mov esi, edx */
  ESI = (EDX);
  /* 12cc2c63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc2c66 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc2c69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cc2c6a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2c6c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2c6e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cc2c71 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12cc2c74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2c77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc2c79 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc2c7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc2c7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc2c81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2c84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12cc2c87 jmp 0x12cc2c17 */
  goto L_12cc2c17;
L_12cc2c89:;
  /* 12cc2c89 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2c8d jne 0x12cc2c9e */
  if (!C.zf) goto L_12cc2c9e;
  /* 12cc2c8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2c92 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc2c94 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc2c97 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2c9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc2c9c jmp 0x12cc2ca4 */
  goto L_12cc2ca4;
L_12cc2c9e:;
  /* 12cc2c9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2ca1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12cc2ca4:;
  /* 12cc2ca4 pop esi */
  ESI = (pop32());
  /* 12cc2ca5 mov esp, ebp */
  ESP = (EBP);
  /* 12cc2ca7 pop ebp */
  EBP = (pop32());
  /* 12cc2ca8 ret  */
  ESPCHK(0x12cc2b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cb0 @ 0x12cc2cb0 (61 bytes, 18 insns) */
void f_12cc2cb0(void) {
  FTRACE(0x12cc2cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc2cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc2cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc2cb3 cmp dword ptr [0x12ce0870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2cba jne 0x12cc2ceb */
  if (!C.zf) goto L_12cc2ceb;
  /* 12cc2cbc push 0xb */
  push32((uint32_t)(0xbu));
  /* 12cc2cbe call 0x12cb7bb0 */
  push32(0x12cc2cc3u); f_12cb7bb0();
  /* 12cc2cc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2cc6 cmp dword ptr [0x12ce0870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2ccd jne 0x12cc2ce1 */
  if (!C.zf) goto L_12cc2ce1;
  /* 12cc2ccf call 0x12cc2d10 */
  push32(0x12cc2cd4u); f_12cc2d10();
  /* 12cc2cd4 mov eax, dword ptr [0x12ce0870] */
  EAX = (r32((uint32_t)(0x12ce0870)));
  /* 12cc2cd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2cdc mov dword ptr [0x12ce0870], eax */
  w32((uint32_t)(0x12ce0870), (EAX));
L_12cc2ce1:;
  /* 12cc2ce1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12cc2ce3 call 0x12cb7c50 */
  push32(0x12cc2ce8u); f_12cb7c50();
  /* 12cc2ce8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc2ceb:;
  /* 12cc2ceb pop ebp */
  EBP = (pop32());
  /* 12cc2cec ret  */
  ESPCHK(0x12cc2cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cf0 @ 0x12cc2cf0 (30 bytes, 11 insns) */
void f_12cc2cf0(void) {
  FTRACE(0x12cc2cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc2cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc2cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc2cf3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12cc2cf5 call 0x12cb7bb0 */
  push32(0x12cc2cfau); f_12cb7bb0();
  /* 12cc2cfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2cfd call 0x12cc2d10 */
  push32(0x12cc2d02u); f_12cc2d10();
  /* 12cc2d02 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12cc2d04 call 0x12cb7c50 */
  push32(0x12cc2d09u); f_12cb7c50();
  /* 12cc2d09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2d0c pop ebp */
  EBP = (pop32());
  /* 12cc2d0d ret  */
  ESPCHK(0x12cc2cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d10 @ 0x12cc2d10 (939 bytes, 266 insns) */
void f_12cc2d10(void) {
  FTRACE(0x12cc2d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc2d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc2d11 mov ebp, esp */
  EBP = (ESP);
  /* 12cc2d13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc2d16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cc2d1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12cc2d1f call 0x12cb7bb0 */
  push32(0x12cc2d24u); f_12cb7bb0();
  /* 12cc2d24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2d27 mov dword ptr [0x12ce07b8], 0 */
  w32((uint32_t)(0x12ce07b8), (0x0u));
  /* 12cc2d31 mov dword ptr [0x12cdfe38], 0xffffffff */
  w32((uint32_t)(0x12cdfe38), (0xffffffffu));
  /* 12cc2d3b mov eax, dword ptr [0x12cdfe38] */
  EAX = (r32((uint32_t)(0x12cdfe38)));
  /* 12cc2d40 mov dword ptr [0x12cdfe28], eax */
  w32((uint32_t)(0x12cdfe28), (EAX));
  /* 12cc2d45 push 0x12cdccc0 */
  push32((uint32_t)(0x12cdccc0u));
  /* 12cc2d4a call 0x12cc3b90 */
  push32(0x12cc2d4fu); f_12cc3b90();
  /* 12cc2d4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2d52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cc2d55 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2d59 jne 0x12cc2e93 */
  if (!C.zf) goto L_12cc2e93;
  /* 12cc2d5f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12cc2d61 call 0x12cb7c50 */
  push32(0x12cc2d66u); f_12cb7c50();
  /* 12cc2d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2d69 push 0x12ce07c0 */
  push32((uint32_t)(0x12ce07c0u));
  /* 12cc2d6e call dword ptr [0x12ce3290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3290))), 0x12cc2d74u);
  /* 12cc2d74 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2d77 je 0x12cc2e8e */
  if (C.zf) goto L_12cc2e8e;
  /* 12cc2d7d mov dword ptr [0x12ce07b8], 1 */
  w32((uint32_t)(0x12ce07b8), (0x1u));
  /* 12cc2d87 mov ecx, dword ptr [0x12ce07c0] */
  ECX = (r32((uint32_t)(0x12ce07c0)));
  /* 12cc2d8d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc2d90 mov dword ptr [0x12cdfd90], ecx */
  w32((uint32_t)(0x12cdfd90), (ECX));
  /* 12cc2d96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc2d98 mov dx, word ptr [0x12ce0806] */
  DX = (r16((uint32_t)(0x12ce0806)));
  /* 12cc2d9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc2da1 je 0x12cc2db9 */
  if (C.zf) goto L_12cc2db9;
  /* 12cc2da3 mov eax, dword ptr [0x12ce0814] */
  EAX = (r32((uint32_t)(0x12ce0814)));
  /* 12cc2da8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc2dab mov ecx, dword ptr [0x12cdfd90] */
  ECX = (r32((uint32_t)(0x12cdfd90)));
  /* 12cc2db1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2db3 mov dword ptr [0x12cdfd90], ecx */
  w32((uint32_t)(0x12cdfd90), (ECX));
L_12cc2db9:;
  /* 12cc2db9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc2dbb mov dx, word ptr [0x12ce085a] */
  DX = (r16((uint32_t)(0x12ce085a)));
  /* 12cc2dc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc2dc4 je 0x12cc2dee */
  if (C.zf) goto L_12cc2dee;
  /* 12cc2dc6 cmp dword ptr [0x12ce0868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2dcd je 0x12cc2dee */
  if (C.zf) goto L_12cc2dee;
  /* 12cc2dcf mov dword ptr [0x12cdfd94], 1 */
  w32((uint32_t)(0x12cdfd94), (0x1u));
  /* 12cc2dd9 mov eax, dword ptr [0x12ce0868] */
  EAX = (r32((uint32_t)(0x12ce0868)));
  /* 12cc2dde sub eax, dword ptr [0x12ce0814] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ce0814))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc2de4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc2de7 mov dword ptr [0x12cdfd98], eax */
  w32((uint32_t)(0x12cdfd98), (EAX));
  /* 12cc2dec jmp 0x12cc2e02 */
  goto L_12cc2e02;
L_12cc2dee:;
  /* 12cc2dee mov dword ptr [0x12cdfd94], 0 */
  w32((uint32_t)(0x12cdfd94), (0x0u));
  /* 12cc2df8 mov dword ptr [0x12cdfd98], 0 */
  w32((uint32_t)(0x12cdfd98), (0x0u));
L_12cc2e02:;
  /* 12cc2e02 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12cc2e05 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc2e08 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12cc2e0a mov edx, dword ptr [0x12cdfe1c] */
  EDX = (r32((uint32_t)(0x12cdfe1c)));
  /* 12cc2e10 push edx */
  push32((uint32_t)(EDX));
  /* 12cc2e11 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cc2e13 push 0x12ce07c4 */
  push32((uint32_t)(0x12ce07c4u));
  /* 12cc2e18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12cc2e1d mov eax, dword ptr [0x12ce0728] */
  EAX = (r32((uint32_t)(0x12ce0728)));
  /* 12cc2e22 push eax */
  push32((uint32_t)(EAX));
  /* 12cc2e23 call dword ptr [0x12ce3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3370))), 0x12cc2e29u);
  /* 12cc2e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc2e2b je 0x12cc2e3f */
  if (C.zf) goto L_12cc2e3f;
  /* 12cc2e2d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2e31 jne 0x12cc2e3f */
  if (!C.zf) goto L_12cc2e3f;
  /* 12cc2e33 mov ecx, dword ptr [0x12cdfe1c] */
  ECX = (r32((uint32_t)(0x12cdfe1c)));
  /* 12cc2e39 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12cc2e3d jmp 0x12cc2e48 */
  goto L_12cc2e48;
L_12cc2e3f:;
  /* 12cc2e3f mov edx, dword ptr [0x12cdfe1c] */
  EDX = (r32((uint32_t)(0x12cdfe1c)));
  /* 12cc2e45 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12cc2e48:;
  /* 12cc2e48 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12cc2e4b push eax */
  push32((uint32_t)(EAX));
  /* 12cc2e4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc2e4e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12cc2e50 mov ecx, dword ptr [0x12cdfe20] */
  ECX = (r32((uint32_t)(0x12cdfe20)));
  /* 12cc2e56 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2e57 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cc2e59 push 0x12ce0818 */
  push32((uint32_t)(0x12ce0818u));
  /* 12cc2e5e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12cc2e63 mov edx, dword ptr [0x12ce0728] */
  EDX = (r32((uint32_t)(0x12ce0728)));
  /* 12cc2e69 push edx */
  push32((uint32_t)(EDX));
  /* 12cc2e6a call dword ptr [0x12ce3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3370))), 0x12cc2e70u);
  /* 12cc2e70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc2e72 je 0x12cc2e85 */
  if (C.zf) goto L_12cc2e85;
  /* 12cc2e74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2e78 jne 0x12cc2e85 */
  if (!C.zf) goto L_12cc2e85;
  /* 12cc2e7a mov eax, dword ptr [0x12cdfe20] */
  EAX = (r32((uint32_t)(0x12cdfe20)));
  /* 12cc2e7f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12cc2e83 jmp 0x12cc2e8e */
  goto L_12cc2e8e;
L_12cc2e85:;
  /* 12cc2e85 mov ecx, dword ptr [0x12cdfe20] */
  ECX = (r32((uint32_t)(0x12cdfe20)));
  /* 12cc2e8b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12cc2e8e:;
  /* 12cc2e8e jmp 0x12cc30b7 */
  goto L_12cc30b7;
L_12cc2e93:;
  /* 12cc2e93 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2e96 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cc2e99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc2e9b je 0x12cc2ebd */
  if (C.zf) goto L_12cc2ebd;
  /* 12cc2e9d cmp dword ptr [0x12ce086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2ea4 je 0x12cc2ecc */
  if (C.zf) goto L_12cc2ecc;
  /* 12cc2ea6 mov ecx, dword ptr [0x12ce086c] */
  ECX = (r32((uint32_t)(0x12ce086c)));
  /* 12cc2eac push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2ead mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2eb0 push edx */
  push32((uint32_t)(EDX));
  /* 12cc2eb1 call 0x12cbfe40 */
  push32(0x12cc2eb6u); f_12cbfe40();
  /* 12cc2eb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2eb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc2ebb jne 0x12cc2ecc */
  if (!C.zf) goto L_12cc2ecc;
L_12cc2ebd:;
  /* 12cc2ebd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12cc2ebf call 0x12cb7c50 */
  push32(0x12cc2ec4u); f_12cb7c50();
  /* 12cc2ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2ec7 jmp 0x12cc30b7 */
  goto L_12cc30b7;
L_12cc2ecc:;
  /* 12cc2ecc push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc2ece mov eax, dword ptr [0x12ce086c] */
  EAX = (r32((uint32_t)(0x12ce086c)));
  /* 12cc2ed3 push eax */
  push32((uint32_t)(EAX));
  /* 12cc2ed4 call 0x12cb4c40 */
  push32(0x12cc2ed9u); f_12cb4c40();
  /* 12cc2ed9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2edc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12cc2ee1 push 0x12cdccb8 */
  push32((uint32_t)(0x12cdccb8u));
  /* 12cc2ee6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc2ee8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2eeb push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2eec call 0x12cb6fe0 */
  push32(0x12cc2ef1u); f_12cb6fe0();
  /* 12cc2ef1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2ef4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2ef7 push eax */
  push32((uint32_t)(EAX));
  /* 12cc2ef8 call 0x12cb41b0 */
  push32(0x12cc2efdu); f_12cb41b0();
  /* 12cc2efd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2f00 mov dword ptr [0x12ce086c], eax */
  w32((uint32_t)(0x12ce086c), (EAX));
  /* 12cc2f05 cmp dword ptr [0x12ce086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2f0c jne 0x12cc2f1d */
  if (!C.zf) goto L_12cc2f1d;
  /* 12cc2f0e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12cc2f10 call 0x12cb7c50 */
  push32(0x12cc2f15u); f_12cb7c50();
  /* 12cc2f15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2f18 jmp 0x12cc30b7 */
  goto L_12cc30b7;
L_12cc2f1d:;
  /* 12cc2f1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2f20 push edx */
  push32((uint32_t)(EDX));
  /* 12cc2f21 mov eax, dword ptr [0x12ce086c] */
  EAX = (r32((uint32_t)(0x12ce086c)));
  /* 12cc2f26 push eax */
  push32((uint32_t)(EAX));
  /* 12cc2f27 call 0x12cb7160 */
  push32(0x12cc2f2cu); f_12cb7160();
  /* 12cc2f2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2f2f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12cc2f31 call 0x12cb7c50 */
  push32(0x12cc2f36u); f_12cb7c50();
  /* 12cc2f36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2f39 push 3 */
  push32((uint32_t)(0x3u));
  /* 12cc2f3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2f3e push ecx */
  push32((uint32_t)(ECX));
  /* 12cc2f3f mov edx, dword ptr [0x12cdfe1c] */
  EDX = (r32((uint32_t)(0x12cdfe1c)));
  /* 12cc2f45 push edx */
  push32((uint32_t)(EDX));
  /* 12cc2f46 call 0x12cb79d0 */
  push32(0x12cc2f4bu); f_12cb79d0();
  /* 12cc2f4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2f4e mov eax, dword ptr [0x12cdfe1c] */
  EAX = (r32((uint32_t)(0x12cdfe1c)));
  /* 12cc2f53 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12cc2f57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2f5a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2f5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cc2f60 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2f63 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cc2f66 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2f69 jne 0x12cc2f7d */
  if (!C.zf) goto L_12cc2f7d;
  /* 12cc2f6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc2f6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2f71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cc2f74 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2f77 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2f7a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12cc2f7d:;
  /* 12cc2f7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2f80 push eax */
  push32((uint32_t)(EAX));
  /* 12cc2f81 call 0x12cc2a60 */
  push32(0x12cc2f86u); f_12cc2a60();
  /* 12cc2f86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2f89 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc2f8f mov dword ptr [0x12cdfd90], eax */
  w32((uint32_t)(0x12cdfd90), (EAX));
L_12cc2f94:;
  /* 12cc2f94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2f97 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cc2f9a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2f9d je 0x12cc2fb5 */
  if (C.zf) goto L_12cc2fb5;
  /* 12cc2f9f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2fa2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cc2fa5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2fa8 jl 0x12cc2fc0 */
  if ((C.sf!=C.of)) goto L_12cc2fc0;
  /* 12cc2faa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2fad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cc2fb0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2fb3 jg 0x12cc2fc0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc2fc0;
L_12cc2fb5:;
  /* 12cc2fb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2fb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2fbb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cc2fbe jmp 0x12cc2f94 */
  goto L_12cc2f94;
L_12cc2fc0:;
  /* 12cc2fc0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2fc3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cc2fc6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2fc9 jne 0x12cc3065 */
  if (!C.zf) goto L_12cc3065;
  /* 12cc2fcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2fd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2fd5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cc2fd8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2fdb push edx */
  push32((uint32_t)(EDX));
  /* 12cc2fdc call 0x12cc2a60 */
  push32(0x12cc2fe1u); f_12cc2a60();
  /* 12cc2fe1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2fe4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc2fe7 mov ecx, dword ptr [0x12cdfd90] */
  ECX = (r32((uint32_t)(0x12cdfd90)));
  /* 12cc2fed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc2fef mov dword ptr [0x12cdfd90], ecx */
  w32((uint32_t)(0x12cdfd90), (ECX));
L_12cc2ff5:;
  /* 12cc2ff5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc2ff8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cc2ffb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc2ffe jl 0x12cc3016 */
  if ((C.sf!=C.of)) goto L_12cc3016;
  /* 12cc3000 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc3003 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cc3006 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3009 jg 0x12cc3016 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc3016;
  /* 12cc300b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc300e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3011 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cc3014 jmp 0x12cc2ff5 */
  goto L_12cc2ff5;
L_12cc3016:;
  /* 12cc3016 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc3019 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cc301c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc301f jne 0x12cc3065 */
  if (!C.zf) goto L_12cc3065;
  /* 12cc3021 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc3024 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3027 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cc302a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc302d push ecx */
  push32((uint32_t)(ECX));
  /* 12cc302e call 0x12cc2a60 */
  push32(0x12cc3033u); f_12cc2a60();
  /* 12cc3033 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3036 mov edx, dword ptr [0x12cdfd90] */
  EDX = (r32((uint32_t)(0x12cdfd90)));
  /* 12cc303c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc303e mov dword ptr [0x12cdfd90], edx */
  w32((uint32_t)(0x12cdfd90), (EDX));
L_12cc3044:;
  /* 12cc3044 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc3047 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cc304a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc304d jl 0x12cc3065 */
  if ((C.sf!=C.of)) goto L_12cc3065;
  /* 12cc304f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc3052 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cc3055 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3058 jg 0x12cc3065 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc3065;
  /* 12cc305a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc305d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3060 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cc3063 jmp 0x12cc3044 */
  goto L_12cc3044;
L_12cc3065:;
  /* 12cc3065 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3069 je 0x12cc3079 */
  if (C.zf) goto L_12cc3079;
  /* 12cc306b mov edx, dword ptr [0x12cdfd90] */
  EDX = (r32((uint32_t)(0x12cdfd90)));
  /* 12cc3071 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc3073 mov dword ptr [0x12cdfd90], edx */
  w32((uint32_t)(0x12cdfd90), (EDX));
L_12cc3079:;
  /* 12cc3079 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc307c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cc307f mov dword ptr [0x12cdfd94], ecx */
  w32((uint32_t)(0x12cdfd94), (ECX));
  /* 12cc3085 cmp dword ptr [0x12cdfd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12cdfd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc308c je 0x12cc30ae */
  if (C.zf) goto L_12cc30ae;
  /* 12cc308e push 3 */
  push32((uint32_t)(0x3u));
  /* 12cc3090 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc3093 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3094 mov eax, dword ptr [0x12cdfe20] */
  EAX = (r32((uint32_t)(0x12cdfe20)));
  /* 12cc3099 push eax */
  push32((uint32_t)(EAX));
  /* 12cc309a call 0x12cb79d0 */
  push32(0x12cc309fu); f_12cb79d0();
  /* 12cc309f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc30a2 mov ecx, dword ptr [0x12cdfe20] */
  ECX = (r32((uint32_t)(0x12cdfe20)));
  /* 12cc30a8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12cc30ac jmp 0x12cc30b7 */
  goto L_12cc30b7;
L_12cc30ae:;
  /* 12cc30ae mov edx, dword ptr [0x12cdfe20] */
  EDX = (r32((uint32_t)(0x12cdfe20)));
  /* 12cc30b4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12cc30b7:;
  /* 12cc30b7 mov esp, ebp */
  ESP = (EBP);
  /* 12cc30b9 pop ebp */
  EBP = (pop32());
  /* 12cc30ba ret  */
  ESPCHK(0x12cc2d10u, _esp0);
  ESP += 4; return;
}

/* FUN_100130c0 @ 0x12cc30c0 (46 bytes, 18 insns) */
void f_12cc30c0(void) {
  FTRACE(0x12cc30c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc30c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc30c1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc30c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc30c4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12cc30c6 call 0x12cb7bb0 */
  push32(0x12cc30cbu); f_12cb7bb0();
  /* 12cc30cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc30ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc30d1 push eax */
  push32((uint32_t)(EAX));
  /* 12cc30d2 call 0x12cc30f0 */
  push32(0x12cc30d7u); f_12cc30f0();
  /* 12cc30d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc30da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc30dd push 0xb */
  push32((uint32_t)(0xbu));
  /* 12cc30df call 0x12cb7c50 */
  push32(0x12cc30e4u); f_12cb7c50();
  /* 12cc30e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc30e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc30ea mov esp, ebp */
  ESP = (EBP);
  /* 12cc30ec pop ebp */
  EBP = (pop32());
  /* 12cc30ed ret  */
  ESPCHK(0x12cc30c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100130f0 @ 0x12cc30f0 (762 bytes, 246 insns) */
void f_12cc30f0(void) {
  FTRACE(0x12cc30f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc30f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc30f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc30f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc30f4 cmp dword ptr [0x12cdfd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12cdfd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc30fb jne 0x12cc3104 */
  if (!C.zf) goto L_12cc3104;
  /* 12cc30fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc30ff jmp 0x12cc33e6 */
  goto L_12cc33e6;
L_12cc3104:;
  /* 12cc3104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3107 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cc310a cmp ecx, dword ptr [0x12cdfe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12cdfe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3110 jne 0x12cc3124 */
  if (!C.zf) goto L_12cc3124;
  /* 12cc3112 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3115 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cc3118 cmp eax, dword ptr [0x12cdfe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12cdfe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc311e je 0x12cc32eb */
  if (C.zf) goto L_12cc32eb;
L_12cc3124:;
  /* 12cc3124 cmp dword ptr [0x12ce07b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce07b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc312b je 0x12cc32a5 */
  if (C.zf) goto L_12cc32a5;
  /* 12cc3131 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3133 mov cx, word ptr [0x12ce0858] */
  CX = (r16((uint32_t)(0x12ce0858)));
  /* 12cc313a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc313c jne 0x12cc3199 */
  if (!C.zf) goto L_12cc3199;
  /* 12cc313e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc3140 mov dx, word ptr [0x12ce0866] */
  DX = (r16((uint32_t)(0x12ce0866)));
  /* 12cc3147 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3148 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc314a mov ax, word ptr [0x12ce0864] */
  AX = (r16((uint32_t)(0x12ce0864)));
  /* 12cc3150 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3151 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3153 mov cx, word ptr [0x12ce0862] */
  CX = (r16((uint32_t)(0x12ce0862)));
  /* 12cc315a push ecx */
  push32((uint32_t)(ECX));
  /* 12cc315b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc315d mov dx, word ptr [0x12ce0860] */
  DX = (r16((uint32_t)(0x12ce0860)));
  /* 12cc3164 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3165 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3167 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3169 mov ax, word ptr [0x12ce085c] */
  AX = (r16((uint32_t)(0x12ce085c)));
  /* 12cc316f push eax */
  push32((uint32_t)(EAX));
  /* 12cc3170 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3172 mov cx, word ptr [0x12ce085e] */
  CX = (r16((uint32_t)(0x12ce085e)));
  /* 12cc3179 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc317a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc317c mov dx, word ptr [0x12ce085a] */
  DX = (r16((uint32_t)(0x12ce085a)));
  /* 12cc3183 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3187 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cc318a push ecx */
  push32((uint32_t)(ECX));
  /* 12cc318b push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc318d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc318f call 0x12cc33f0 */
  push32(0x12cc3194u); f_12cc33f0();
  /* 12cc3194 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3197 jmp 0x12cc31ea */
  goto L_12cc31ea;
L_12cc3199:;
  /* 12cc3199 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc319b mov dx, word ptr [0x12ce0866] */
  DX = (r16((uint32_t)(0x12ce0866)));
  /* 12cc31a2 push edx */
  push32((uint32_t)(EDX));
  /* 12cc31a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc31a5 mov ax, word ptr [0x12ce0864] */
  AX = (r16((uint32_t)(0x12ce0864)));
  /* 12cc31ab push eax */
  push32((uint32_t)(EAX));
  /* 12cc31ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc31ae mov cx, word ptr [0x12ce0862] */
  CX = (r16((uint32_t)(0x12ce0862)));
  /* 12cc31b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc31b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc31b8 mov dx, word ptr [0x12ce0860] */
  DX = (r16((uint32_t)(0x12ce0860)));
  /* 12cc31bf push edx */
  push32((uint32_t)(EDX));
  /* 12cc31c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc31c2 mov ax, word ptr [0x12ce085e] */
  AX = (r16((uint32_t)(0x12ce085e)));
  /* 12cc31c8 push eax */
  push32((uint32_t)(EAX));
  /* 12cc31c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc31cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc31cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc31cf mov cx, word ptr [0x12ce085a] */
  CX = (r16((uint32_t)(0x12ce085a)));
  /* 12cc31d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc31d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc31da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cc31dd push eax */
  push32((uint32_t)(EAX));
  /* 12cc31de push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc31e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc31e2 call 0x12cc33f0 */
  push32(0x12cc31e7u); f_12cc33f0();
  /* 12cc31e7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc31ea:;
  /* 12cc31ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc31ec mov cx, word ptr [0x12ce0804] */
  CX = (r16((uint32_t)(0x12ce0804)));
  /* 12cc31f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc31f5 jne 0x12cc3252 */
  if (!C.zf) goto L_12cc3252;
  /* 12cc31f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc31f9 mov dx, word ptr [0x12ce0812] */
  DX = (r16((uint32_t)(0x12ce0812)));
  /* 12cc3200 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3201 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3203 mov ax, word ptr [0x12ce0810] */
  AX = (r16((uint32_t)(0x12ce0810)));
  /* 12cc3209 push eax */
  push32((uint32_t)(EAX));
  /* 12cc320a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc320c mov cx, word ptr [0x12ce080e] */
  CX = (r16((uint32_t)(0x12ce080e)));
  /* 12cc3213 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3214 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc3216 mov dx, word ptr [0x12ce080c] */
  DX = (r16((uint32_t)(0x12ce080c)));
  /* 12cc321d push edx */
  push32((uint32_t)(EDX));
  /* 12cc321e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3220 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3222 mov ax, word ptr [0x12ce0808] */
  AX = (r16((uint32_t)(0x12ce0808)));
  /* 12cc3228 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3229 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc322b mov cx, word ptr [0x12ce080a] */
  CX = (r16((uint32_t)(0x12ce080a)));
  /* 12cc3232 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3233 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc3235 mov dx, word ptr [0x12ce0806] */
  DX = (r16((uint32_t)(0x12ce0806)));
  /* 12cc323c push edx */
  push32((uint32_t)(EDX));
  /* 12cc323d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3240 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cc3243 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3244 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc3246 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3248 call 0x12cc33f0 */
  push32(0x12cc324du); f_12cc33f0();
  /* 12cc324d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3250 jmp 0x12cc32a3 */
  goto L_12cc32a3;
L_12cc3252:;
  /* 12cc3252 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc3254 mov dx, word ptr [0x12ce0812] */
  DX = (r16((uint32_t)(0x12ce0812)));
  /* 12cc325b push edx */
  push32((uint32_t)(EDX));
  /* 12cc325c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc325e mov ax, word ptr [0x12ce0810] */
  AX = (r16((uint32_t)(0x12ce0810)));
  /* 12cc3264 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3265 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3267 mov cx, word ptr [0x12ce080e] */
  CX = (r16((uint32_t)(0x12ce080e)));
  /* 12cc326e push ecx */
  push32((uint32_t)(ECX));
  /* 12cc326f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc3271 mov dx, word ptr [0x12ce080c] */
  DX = (r16((uint32_t)(0x12ce080c)));
  /* 12cc3278 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3279 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc327b mov ax, word ptr [0x12ce080a] */
  AX = (r16((uint32_t)(0x12ce080a)));
  /* 12cc3281 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3282 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3284 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3286 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3288 mov cx, word ptr [0x12ce0806] */
  CX = (r16((uint32_t)(0x12ce0806)));
  /* 12cc328f push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3290 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3293 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cc3296 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3297 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3299 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc329b call 0x12cc33f0 */
  push32(0x12cc32a0u); f_12cc33f0();
  /* 12cc32a0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc32a3:;
  /* 12cc32a3 jmp 0x12cc32eb */
  goto L_12cc32eb;
L_12cc32a5:;
  /* 12cc32a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc32a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc32a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc32ab push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc32ad push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc32af push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc32b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc32b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cc32b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc32b8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12cc32bb push edx */
  push32((uint32_t)(EDX));
  /* 12cc32bc push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc32be push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc32c0 call 0x12cc33f0 */
  push32(0x12cc32c5u); f_12cc33f0();
  /* 12cc32c5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc32c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc32ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc32cc push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc32ce push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc32d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc32d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc32d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 12cc32d6 push 0xa */
  push32((uint32_t)(0xau));
  /* 12cc32d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc32db mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12cc32de push ecx */
  push32((uint32_t)(ECX));
  /* 12cc32df push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc32e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc32e3 call 0x12cc33f0 */
  push32(0x12cc32e8u); f_12cc33f0();
  /* 12cc32e8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc32eb:;
  /* 12cc32eb mov edx, dword ptr [0x12cdfe2c] */
  EDX = (r32((uint32_t)(0x12cdfe2c)));
  /* 12cc32f1 cmp edx, dword ptr [0x12cdfe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12cdfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc32f7 jge 0x12cc3344 */
  if ((C.sf==C.of)) goto L_12cc3344;
  /* 12cc32f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc32fc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12cc32ff cmp ecx, dword ptr [0x12cdfe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12cdfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3305 jl 0x12cc3315 */
  if ((C.sf!=C.of)) goto L_12cc3315;
  /* 12cc3307 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc330a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12cc330d cmp eax, dword ptr [0x12cdfe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12cdfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3313 jle 0x12cc331c */
  if ((C.zf||C.sf!=C.of)) goto L_12cc331c;
L_12cc3315:;
  /* 12cc3315 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3317 jmp 0x12cc33e6 */
  goto L_12cc33e6;
L_12cc331c:;
  /* 12cc331c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc331f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12cc3322 cmp edx, dword ptr [0x12cdfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12cdfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3328 jle 0x12cc3342 */
  if ((C.zf||C.sf!=C.of)) goto L_12cc3342;
  /* 12cc332a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc332d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12cc3330 cmp ecx, dword ptr [0x12cdfe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12cdfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3336 jge 0x12cc3342 */
  if ((C.sf==C.of)) goto L_12cc3342;
  /* 12cc3338 mov eax, 1 */
  EAX = (0x1u);
  /* 12cc333d jmp 0x12cc33e6 */
  goto L_12cc33e6;
L_12cc3342:;
  /* 12cc3342 jmp 0x12cc3387 */
  goto L_12cc3387;
L_12cc3344:;
  /* 12cc3344 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3347 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12cc334a cmp eax, dword ptr [0x12cdfe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12cdfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3350 jl 0x12cc3360 */
  if ((C.sf!=C.of)) goto L_12cc3360;
  /* 12cc3352 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3355 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12cc3358 cmp edx, dword ptr [0x12cdfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12cdfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc335e jle 0x12cc3367 */
  if ((C.zf||C.sf!=C.of)) goto L_12cc3367;
L_12cc3360:;
  /* 12cc3360 mov eax, 1 */
  EAX = (0x1u);
  /* 12cc3365 jmp 0x12cc33e6 */
  goto L_12cc33e6;
L_12cc3367:;
  /* 12cc3367 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc336a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12cc336d cmp ecx, dword ptr [0x12cdfe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12cdfe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3373 jle 0x12cc3387 */
  if ((C.zf||C.sf!=C.of)) goto L_12cc3387;
  /* 12cc3375 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3378 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12cc337b cmp eax, dword ptr [0x12cdfe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12cdfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3381 jge 0x12cc3387 */
  if ((C.sf==C.of)) goto L_12cc3387;
  /* 12cc3383 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3385 jmp 0x12cc33e6 */
  goto L_12cc33e6;
L_12cc3387:;
  /* 12cc3387 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc338a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cc338d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc3390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3393 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc3395 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3397 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc339a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cc339d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc33a3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc33a5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc33ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cc33ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc33b1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12cc33b4 cmp edx, dword ptr [0x12cdfe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12cdfe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc33ba jne 0x12cc33d2 */
  if (!C.zf) goto L_12cc33d2;
  /* 12cc33bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc33bf cmp eax, dword ptr [0x12cdfe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12cdfe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc33c5 jl 0x12cc33ce */
  if ((C.sf!=C.of)) goto L_12cc33ce;
  /* 12cc33c7 mov eax, 1 */
  EAX = (0x1u);
  /* 12cc33cc jmp 0x12cc33e6 */
  goto L_12cc33e6;
L_12cc33ce:;
  /* 12cc33ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc33d0 jmp 0x12cc33e6 */
  goto L_12cc33e6;
L_12cc33d2:;
  /* 12cc33d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc33d5 cmp ecx, dword ptr [0x12cdfe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12cdfe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc33db jge 0x12cc33e4 */
  if ((C.sf==C.of)) goto L_12cc33e4;
  /* 12cc33dd mov eax, 1 */
  EAX = (0x1u);
  /* 12cc33e2 jmp 0x12cc33e6 */
  goto L_12cc33e6;
L_12cc33e4:;
  /* 12cc33e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cc33e6:;
  /* 12cc33e6 mov esp, ebp */
  ESP = (EBP);
  /* 12cc33e8 pop ebp */
  EBP = (pop32());
  /* 12cc33e9 ret  */
  ESPCHK(0x12cc30f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133f0 @ 0x12cc33f0 (504 bytes, 145 insns) */
void f_12cc33f0(void) {
  FTRACE(0x12cc33f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc33f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc33f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc33f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc33f6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc33fa jne 0x12cc34cc */
  if (!C.zf) goto L_12cc34cc;
  /* 12cc3400 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3403 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3406 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc3408 jne 0x12cc3419 */
  if (!C.zf) goto L_12cc3419;
  /* 12cc340a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc340d mov edx, dword ptr [ecx*4 + 0x12cdfe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12cdfe4c)));
  /* 12cc3414 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cc3417 jmp 0x12cc3426 */
  goto L_12cc3426;
L_12cc3419:;
  /* 12cc3419 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc341c mov ecx, dword ptr [eax*4 + 0x12cdfe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12cdfe80)));
  /* 12cc3423 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12cc3426:;
  /* 12cc3426 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc3429 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc342c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cc342f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3432 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc3435 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc343b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc343e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3440 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3443 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc3446 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12cc3449 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12cc344d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cc344e mov ecx, 7 */
  ECX = (0x7u);
  /* 12cc3453 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cc3455 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cc3458 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc345b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc345e jge 0x12cc3479 */
  if ((C.sf==C.of)) goto L_12cc3479;
  /* 12cc3460 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12cc3463 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc3466 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc3469 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc346c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc346f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3472 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3474 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cc3477 jmp 0x12cc348d */
  goto L_12cc348d;
L_12cc3479:;
  /* 12cc3479 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12cc347c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc347f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc3482 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc3485 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3488 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc348a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cc348d:;
  /* 12cc348d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3491 jne 0x12cc34ca */
  if (!C.zf) goto L_12cc34ca;
  /* 12cc3493 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3496 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3499 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc349b jne 0x12cc34ac */
  if (!C.zf) goto L_12cc34ac;
  /* 12cc349d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc34a0 mov eax, dword ptr [edx*4 + 0x12cdfe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12cdfe50)));
  /* 12cc34a7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cc34aa jmp 0x12cc34b9 */
  goto L_12cc34b9;
L_12cc34ac:;
  /* 12cc34ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc34af mov edx, dword ptr [ecx*4 + 0x12cdfe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12cdfe84)));
  /* 12cc34b6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12cc34b9:;
  /* 12cc34b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc34bc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc34bf jle 0x12cc34ca */
  if ((C.zf||C.sf!=C.of)) goto L_12cc34ca;
  /* 12cc34c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc34c4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc34c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12cc34ca:;
  /* 12cc34ca jmp 0x12cc3501 */
  goto L_12cc3501;
L_12cc34cc:;
  /* 12cc34cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc34cf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc34d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc34d4 jne 0x12cc34e5 */
  if (!C.zf) goto L_12cc34e5;
  /* 12cc34d6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc34d9 mov ecx, dword ptr [eax*4 + 0x12cdfe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12cdfe4c)));
  /* 12cc34e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cc34e3 jmp 0x12cc34f2 */
  goto L_12cc34f2;
L_12cc34e5:;
  /* 12cc34e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc34e8 mov eax, dword ptr [edx*4 + 0x12cdfe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12cdfe80)));
  /* 12cc34ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12cc34f2:;
  /* 12cc34f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc34f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cc34f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc34fb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc34fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12cc3501:;
  /* 12cc3501 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3505 jne 0x12cc3541 */
  if (!C.zf) goto L_12cc3541;
  /* 12cc3507 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc350a mov dword ptr [0x12cdfe2c], eax */
  w32((uint32_t)(0x12cdfe2c), (EAX));
  /* 12cc350f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12cc3512 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc3515 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12cc3518 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc351a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc351d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12cc3520 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3522 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc3528 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12cc352b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc352d mov dword ptr [0x12cdfe30], ecx */
  w32((uint32_t)(0x12cdfe30), (ECX));
  /* 12cc3533 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3536 mov dword ptr [0x12cdfe28], edx */
  w32((uint32_t)(0x12cdfe28), (EDX));
  /* 12cc353c jmp 0x12cc35e4 */
  goto L_12cc35e4;
L_12cc3541:;
  /* 12cc3541 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc3544 mov dword ptr [0x12cdfe3c], eax */
  w32((uint32_t)(0x12cdfe3c), (EAX));
  /* 12cc3549 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12cc354c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc354f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12cc3552 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3554 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc3557 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12cc355a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc355c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc3562 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12cc3565 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3567 mov dword ptr [0x12cdfe40], ecx */
  w32((uint32_t)(0x12cdfe40), (ECX));
  /* 12cc356d mov edx, dword ptr [0x12cdfd98] */
  EDX = (r32((uint32_t)(0x12cdfd98)));
  /* 12cc3573 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc3579 mov eax, dword ptr [0x12cdfe40] */
  EAX = (r32((uint32_t)(0x12cdfe40)));
  /* 12cc357e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3580 mov dword ptr [0x12cdfe40], eax */
  w32((uint32_t)(0x12cdfe40), (EAX));
  /* 12cc3585 cmp dword ptr [0x12cdfe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12cdfe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc358c jge 0x12cc35b1 */
  if ((C.sf==C.of)) goto L_12cc35b1;
  /* 12cc358e mov ecx, dword ptr [0x12cdfe40] */
  ECX = (r32((uint32_t)(0x12cdfe40)));
  /* 12cc3594 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc359a mov dword ptr [0x12cdfe40], ecx */
  w32((uint32_t)(0x12cdfe40), (ECX));
  /* 12cc35a0 mov edx, dword ptr [0x12cdfe3c] */
  EDX = (r32((uint32_t)(0x12cdfe3c)));
  /* 12cc35a6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc35a9 mov dword ptr [0x12cdfe3c], edx */
  w32((uint32_t)(0x12cdfe3c), (EDX));
  /* 12cc35af jmp 0x12cc35db */
  goto L_12cc35db;
L_12cc35b1:;
  /* 12cc35b1 cmp dword ptr [0x12cdfe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12cdfe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc35bb jl 0x12cc35db */
  if ((C.sf!=C.of)) goto L_12cc35db;
  /* 12cc35bd mov eax, dword ptr [0x12cdfe40] */
  EAX = (r32((uint32_t)(0x12cdfe40)));
  /* 12cc35c2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc35c7 mov dword ptr [0x12cdfe40], eax */
  w32((uint32_t)(0x12cdfe40), (EAX));
  /* 12cc35cc mov ecx, dword ptr [0x12cdfe3c] */
  ECX = (r32((uint32_t)(0x12cdfe3c)));
  /* 12cc35d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc35d5 mov dword ptr [0x12cdfe3c], ecx */
  w32((uint32_t)(0x12cdfe3c), (ECX));
L_12cc35db:;
  /* 12cc35db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc35de mov dword ptr [0x12cdfe38], edx */
  w32((uint32_t)(0x12cdfe38), (EDX));
L_12cc35e4:;
  /* 12cc35e4 mov esp, ebp */
  ESP = (EBP);
  /* 12cc35e6 pop ebp */
  EBP = (pop32());
  /* 12cc35e7 ret  */
  ESPCHK(0x12cc33f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100135f0 @ 0x12cc35f0 (382 bytes, 135 insns) */
void f_12cc35f0(void) {
  FTRACE(0x12cc35f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc35f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc35f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc35f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cc35f5 push 0x12cdccc8 */
  push32((uint32_t)(0x12cdccc8u));
  /* 12cc35fa push 0x12cbd2b8 */
  push32((uint32_t)(0x12cbd2b8u));
  /* 12cc35ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12cc3605 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3606 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12cc360d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3610 push ebx */
  push32((uint32_t)(EBX));
  /* 12cc3611 push esi */
  push32((uint32_t)(ESI));
  /* 12cc3612 push edi */
  push32((uint32_t)(EDI));
  /* 12cc3613 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cc3616 cmp dword ptr [0x12ce0874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc361d jne 0x12cc3662 */
  if (!C.zf) goto L_12cc3662;
  /* 12cc361f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3621 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3623 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc3625 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3627 call dword ptr [0x12ce328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce328c))), 0x12cc362du);
  /* 12cc362d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc362f je 0x12cc363d */
  if (C.zf) goto L_12cc363d;
  /* 12cc3631 mov dword ptr [0x12ce0874], 1 */
  w32((uint32_t)(0x12ce0874), (0x1u));
  /* 12cc363b jmp 0x12cc3662 */
  goto L_12cc3662;
L_12cc363d:;
  /* 12cc363d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc363f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3641 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc3643 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3645 call dword ptr [0x12ce32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32a4))), 0x12cc364bu);
  /* 12cc364b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc364d je 0x12cc365b */
  if (C.zf) goto L_12cc365b;
  /* 12cc364f mov dword ptr [0x12ce0874], 2 */
  w32((uint32_t)(0x12ce0874), (0x2u));
  /* 12cc3659 jmp 0x12cc3662 */
  goto L_12cc3662;
L_12cc365b:;
  /* 12cc365b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc365d jmp 0x12cc3771 */
  goto L_12cc3771;
L_12cc3662:;
  /* 12cc3662 cmp dword ptr [0x12ce0874], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0874))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3669 jne 0x12cc3686 */
  if (!C.zf) goto L_12cc3686;
  /* 12cc366b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc366e push eax */
  push32((uint32_t)(EAX));
  /* 12cc366f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3672 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3673 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc3676 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3677 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc367a push eax */
  push32((uint32_t)(EAX));
  /* 12cc367b call dword ptr [0x12ce328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce328c))), 0x12cc3681u);
  /* 12cc3681 jmp 0x12cc3771 */
  goto L_12cc3771;
L_12cc3686:;
  /* 12cc3686 cmp dword ptr [0x12ce0874], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0874))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc368d jne 0x12cc376f */
  if (!C.zf) goto L_12cc376f;
  /* 12cc3693 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3697 jne 0x12cc36a2 */
  if (!C.zf) goto L_12cc36a2;
  /* 12cc3699 mov ecx, dword ptr [0x12ce0728] */
  ECX = (r32((uint32_t)(0x12ce0728)));
  /* 12cc369f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12cc36a2:;
  /* 12cc36a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc36a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc36a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc36a9 push edx */
  push32((uint32_t)(EDX));
  /* 12cc36aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc36ad push eax */
  push32((uint32_t)(EAX));
  /* 12cc36ae call dword ptr [0x12ce32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32a4))), 0x12cc36b4u);
  /* 12cc36b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12cc36b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc36bb jne 0x12cc36c4 */
  if (!C.zf) goto L_12cc36c4;
  /* 12cc36bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc36bf jmp 0x12cc3771 */
  goto L_12cc3771;
L_12cc36c4:;
  /* 12cc36c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cc36cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cc36ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc36d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12cc36d3 call 0x12cb7350 */
  push32(0x12cc36d8u); f_12cb7350();
  /* 12cc36d8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12cc36db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cc36de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cc36e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12cc36e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cc36eb jmp 0x12cc3704 */
  goto L_12cc3704;
  /* 12cc36ed mov eax, 1 */
  EAX = (0x1u);
  /* 12cc36f2 ret  */
  ESPCHK(0x12cc35f0u, _esp0);
  ESP += 4; return;
  /* 12cc36f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc36f6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12cc36fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cc3704:;
  /* 12cc3704 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3708 jne 0x12cc370e */
  if (!C.zf) goto L_12cc370e;
  /* 12cc370a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc370c jmp 0x12cc3771 */
  goto L_12cc3771;
L_12cc370e:;
  /* 12cc370e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cc3711 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3712 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cc3715 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3716 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc3719 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc371a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc371d push edx */
  push32((uint32_t)(EDX));
  /* 12cc371e call dword ptr [0x12ce32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32a4))), 0x12cc3724u);
  /* 12cc3724 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc3726 jne 0x12cc372c */
  if (!C.zf) goto L_12cc372c;
  /* 12cc3728 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc372a jmp 0x12cc3771 */
  goto L_12cc3771;
L_12cc372c:;
  /* 12cc372c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3730 jne 0x12cc374d */
  if (!C.zf) goto L_12cc374d;
  /* 12cc3732 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3734 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3736 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cc3738 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cc373b push eax */
  push32((uint32_t)(EAX));
  /* 12cc373c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc373e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc3741 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3742 call dword ptr [0x12ce32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32d4))), 0x12cc3748u);
  /* 12cc3748 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cc374b jmp 0x12cc376a */
  goto L_12cc376a;
L_12cc374d:;
  /* 12cc374d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc3750 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3751 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3754 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3755 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cc3757 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cc375a push ecx */
  push32((uint32_t)(ECX));
  /* 12cc375b push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc375d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc3760 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3761 call dword ptr [0x12ce32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32d4))), 0x12cc3767u);
  /* 12cc3767 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12cc376a:;
  /* 12cc376a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cc376d jmp 0x12cc3771 */
  goto L_12cc3771;
L_12cc376f:;
  /* 12cc376f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cc3771:;
  /* 12cc3771 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12cc3774 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc3777 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12cc377e pop edi */
  EDI = (pop32());
  /* 12cc377f pop esi */
  ESI = (pop32());
  /* 12cc3780 pop ebx */
  EBX = (pop32());
  /* 12cc3781 mov esp, ebp */
  ESP = (EBP);
  /* 12cc3783 pop ebp */
  EBP = (pop32());
  /* 12cc3784 ret  */
  ESPCHK(0x12cc35f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013790 @ 0x12cc3790 (398 bytes, 140 insns) */
void f_12cc3790(void) {
  FTRACE(0x12cc3790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc3790 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc3791 mov ebp, esp */
  EBP = (ESP);
  /* 12cc3793 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cc3795 push 0x12cdccd8 */
  push32((uint32_t)(0x12cdccd8u));
  /* 12cc379a push 0x12cbd2b8 */
  push32((uint32_t)(0x12cbd2b8u));
  /* 12cc379f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12cc37a5 push eax */
  push32((uint32_t)(EAX));
  /* 12cc37a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12cc37ad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc37b0 push ebx */
  push32((uint32_t)(EBX));
  /* 12cc37b1 push esi */
  push32((uint32_t)(ESI));
  /* 12cc37b2 push edi */
  push32((uint32_t)(EDI));
  /* 12cc37b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cc37b6 cmp dword ptr [0x12ce0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc37bd jne 0x12cc3802 */
  if (!C.zf) goto L_12cc3802;
  /* 12cc37bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc37c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc37c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc37c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc37c7 call dword ptr [0x12ce328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce328c))), 0x12cc37cdu);
  /* 12cc37cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc37cf je 0x12cc37dd */
  if (C.zf) goto L_12cc37dd;
  /* 12cc37d1 mov dword ptr [0x12ce0878], 1 */
  w32((uint32_t)(0x12ce0878), (0x1u));
  /* 12cc37db jmp 0x12cc3802 */
  goto L_12cc3802;
L_12cc37dd:;
  /* 12cc37dd push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc37df push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc37e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc37e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc37e5 call dword ptr [0x12ce32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32a4))), 0x12cc37ebu);
  /* 12cc37eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc37ed je 0x12cc37fb */
  if (C.zf) goto L_12cc37fb;
  /* 12cc37ef mov dword ptr [0x12ce0878], 2 */
  w32((uint32_t)(0x12ce0878), (0x2u));
  /* 12cc37f9 jmp 0x12cc3802 */
  goto L_12cc3802;
L_12cc37fb:;
  /* 12cc37fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc37fd jmp 0x12cc3921 */
  goto L_12cc3921;
L_12cc3802:;
  /* 12cc3802 cmp dword ptr [0x12ce0878], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0878))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3809 jne 0x12cc3826 */
  if (!C.zf) goto L_12cc3826;
  /* 12cc380b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc380e push eax */
  push32((uint32_t)(EAX));
  /* 12cc380f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3812 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3813 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc3816 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3817 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc381a push eax */
  push32((uint32_t)(EAX));
  /* 12cc381b call dword ptr [0x12ce32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32a4))), 0x12cc3821u);
  /* 12cc3821 jmp 0x12cc3921 */
  goto L_12cc3921;
L_12cc3826:;
  /* 12cc3826 cmp dword ptr [0x12ce0878], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0878))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc382d jne 0x12cc391f */
  if (!C.zf) goto L_12cc391f;
  /* 12cc3833 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3837 jne 0x12cc3842 */
  if (!C.zf) goto L_12cc3842;
  /* 12cc3839 mov ecx, dword ptr [0x12ce0728] */
  ECX = (r32((uint32_t)(0x12ce0728)));
  /* 12cc383f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12cc3842:;
  /* 12cc3842 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3844 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3846 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc3849 push edx */
  push32((uint32_t)(EDX));
  /* 12cc384a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc384d push eax */
  push32((uint32_t)(EAX));
  /* 12cc384e call dword ptr [0x12ce328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce328c))), 0x12cc3854u);
  /* 12cc3854 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12cc3857 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc385b jne 0x12cc3864 */
  if (!C.zf) goto L_12cc3864;
  /* 12cc385d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc385f jmp 0x12cc3921 */
  goto L_12cc3921;
L_12cc3864:;
  /* 12cc3864 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cc386b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cc386e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cc3870 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3873 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12cc3875 call 0x12cb7350 */
  push32(0x12cc387au); f_12cb7350();
  /* 12cc387a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12cc387d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cc3880 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cc3883 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12cc3886 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cc388d jmp 0x12cc38a6 */
  goto L_12cc38a6;
  /* 12cc388f mov eax, 1 */
  EAX = (0x1u);
  /* 12cc3894 ret  */
  ESPCHK(0x12cc3790u, _esp0);
  ESP += 4; return;
  /* 12cc3895 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc3898 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12cc389f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cc38a6:;
  /* 12cc38a6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc38aa jne 0x12cc38b0 */
  if (!C.zf) goto L_12cc38b0;
  /* 12cc38ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc38ae jmp 0x12cc3921 */
  goto L_12cc3921;
L_12cc38b0:;
  /* 12cc38b0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cc38b3 push edx */
  push32((uint32_t)(EDX));
  /* 12cc38b4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cc38b7 push eax */
  push32((uint32_t)(EAX));
  /* 12cc38b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc38bb push ecx */
  push32((uint32_t)(ECX));
  /* 12cc38bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc38bf push edx */
  push32((uint32_t)(EDX));
  /* 12cc38c0 call dword ptr [0x12ce328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce328c))), 0x12cc38c6u);
  /* 12cc38c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc38c8 jne 0x12cc38ce */
  if (!C.zf) goto L_12cc38ce;
  /* 12cc38ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc38cc jmp 0x12cc3921 */
  goto L_12cc3921;
L_12cc38ce:;
  /* 12cc38ce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc38d2 jne 0x12cc38f6 */
  if (!C.zf) goto L_12cc38f6;
  /* 12cc38d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc38d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc38d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc38da push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc38dc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cc38de mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cc38e1 push eax */
  push32((uint32_t)(EAX));
  /* 12cc38e2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12cc38e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc38ea push ecx */
  push32((uint32_t)(ECX));
  /* 12cc38eb call dword ptr [0x12ce3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3370))), 0x12cc38f1u);
  /* 12cc38f1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cc38f4 jmp 0x12cc391a */
  goto L_12cc391a;
L_12cc38f6:;
  /* 12cc38f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc38f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc38fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc38fd push edx */
  push32((uint32_t)(EDX));
  /* 12cc38fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3901 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3902 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cc3904 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cc3907 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3908 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12cc390d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc3910 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3911 call dword ptr [0x12ce3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3370))), 0x12cc3917u);
  /* 12cc3917 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12cc391a:;
  /* 12cc391a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cc391d jmp 0x12cc3921 */
  goto L_12cc3921;
L_12cc391f:;
  /* 12cc391f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cc3921:;
  /* 12cc3921 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12cc3924 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc3927 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12cc392e pop edi */
  EDI = (pop32());
  /* 12cc392f pop esi */
  ESI = (pop32());
  /* 12cc3930 pop ebx */
  EBX = (pop32());
  /* 12cc3931 mov esp, ebp */
  ESP = (EBP);
  /* 12cc3933 pop ebp */
  EBP = (pop32());
  /* 12cc3934 ret  */
  ESPCHK(0x12cc3790u, _esp0);
  ESP += 4; return;
}

/* FUN_10013940 @ 0x12cc3940 (11 bytes, 6 insns) */
void f_12cc3940(void) {
  FTRACE(0x12cc3940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc3940 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc3941 mov ebp, esp */
  EBP = (ESP);
  /* 12cc3943 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3946 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3949 pop ebp */
  EBP = (pop32());
  /* 12cc394a ret  */
  ESPCHK(0x12cc3940u, _esp0);
  ESP += 4; return;
}

/* FUN_10013950 @ 0x12cc3950 (147 bytes, 43 insns) */
void f_12cc3950(void) {
  FTRACE(0x12cc3950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc3950 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc3951 mov ebp, esp */
  EBP = (ESP);
  /* 12cc3953 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3954 cmp dword ptr [0x12ce0718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc395b jne 0x12cc3977 */
  if (!C.zf) goto L_12cc3977;
  /* 12cc395d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3961 jl 0x12cc3972 */
  if ((C.sf!=C.of)) goto L_12cc3972;
  /* 12cc3963 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3967 jg 0x12cc3972 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc3972;
  /* 12cc3969 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc396c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc396f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12cc3972:;
  /* 12cc3972 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3975 jmp 0x12cc39df */
  goto L_12cc39df;
L_12cc3977:;
  /* 12cc3977 push 0x12ce08a4 */
  push32((uint32_t)(0x12ce08a4u));
  /* 12cc397c call dword ptr [0x12ce331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce331c))), 0x12cc3982u);
  /* 12cc3982 cmp dword ptr [0x12ce0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3989 je 0x12cc39a9 */
  if (C.zf) goto L_12cc39a9;
  /* 12cc398b push 0x12ce08a4 */
  push32((uint32_t)(0x12ce08a4u));
  /* 12cc3990 call dword ptr [0x12ce330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce330c))), 0x12cc3996u);
  /* 12cc3996 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cc3998 call 0x12cb7bb0 */
  push32(0x12cc399du); f_12cb7bb0();
  /* 12cc399d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc39a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cc39a7 jmp 0x12cc39b0 */
  goto L_12cc39b0;
L_12cc39a9:;
  /* 12cc39a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cc39b0:;
  /* 12cc39b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc39b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc39b4 call 0x12cc39f0 */
  push32(0x12cc39b9u); f_12cc39f0();
  /* 12cc39b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc39bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cc39bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc39c3 je 0x12cc39d1 */
  if (C.zf) goto L_12cc39d1;
  /* 12cc39c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cc39c7 call 0x12cb7c50 */
  push32(0x12cc39ccu); f_12cb7c50();
  /* 12cc39cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc39cf jmp 0x12cc39dc */
  goto L_12cc39dc;
L_12cc39d1:;
  /* 12cc39d1 push 0x12ce08a4 */
  push32((uint32_t)(0x12ce08a4u));
  /* 12cc39d6 call dword ptr [0x12ce330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce330c))), 0x12cc39dcu);
L_12cc39dc:;
  /* 12cc39dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12cc39df:;
  /* 12cc39df mov esp, ebp */
  ESP = (EBP);
  /* 12cc39e1 pop ebp */
  EBP = (pop32());
  /* 12cc39e2 ret  */
  ESPCHK(0x12cc3950u, _esp0);
  ESP += 4; return;
}

/* FUN_100139f0 @ 0x12cc39f0 (299 bytes, 91 insns) */
void f_12cc39f0(void) {
  FTRACE(0x12cc39f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc39f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc39f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc39f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc39f6 cmp dword ptr [0x12ce0718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc39fd jne 0x12cc3a1c */
  if (!C.zf) goto L_12cc3a1c;
  /* 12cc39ff cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3a03 jl 0x12cc3a14 */
  if ((C.sf!=C.of)) goto L_12cc3a14;
  /* 12cc3a05 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3a09 jg 0x12cc3a14 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc3a14;
  /* 12cc3a0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3a0e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3a11 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12cc3a14:;
  /* 12cc3a14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3a17 jmp 0x12cc3b17 */
  goto L_12cc3b17;
L_12cc3a1c:;
  /* 12cc3a1c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3a23 jge 0x12cc3a63 */
  if ((C.sf==C.of)) goto L_12cc3a63;
  /* 12cc3a25 cmp dword ptr [0x12cdeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12cdeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3a2c jle 0x12cc3a41 */
  if ((C.zf||C.sf!=C.of)) goto L_12cc3a41;
  /* 12cc3a2e push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc3a30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3a33 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3a34 call 0x12cba1c0 */
  push32(0x12cc3a39u); f_12cba1c0();
  /* 12cc3a39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3a3c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cc3a3f jmp 0x12cc3a55 */
  goto L_12cc3a55;
L_12cc3a41:;
  /* 12cc3a41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3a44 mov eax, dword ptr [0x12cdec98] */
  EAX = (r32((uint32_t)(0x12cdec98)));
  /* 12cc3a49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3a4b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12cc3a4f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3a52 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12cc3a55:;
  /* 12cc3a55 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3a59 jne 0x12cc3a63 */
  if (!C.zf) goto L_12cc3a63;
  /* 12cc3a5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3a5e jmp 0x12cc3b17 */
  goto L_12cc3b17;
L_12cc3a63:;
  /* 12cc3a63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3a66 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12cc3a69 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cc3a6f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cc3a75 mov eax, dword ptr [0x12cdec98] */
  EAX = (r32((uint32_t)(0x12cdec98)));
  /* 12cc3a7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3a7c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12cc3a80 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3a86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc3a88 je 0x12cc3aac */
  if (C.zf) goto L_12cc3aac;
  /* 12cc3a8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3a8d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12cc3a90 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cc3a96 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12cc3a99 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12cc3a9c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12cc3a9f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12cc3aa3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12cc3aaa jmp 0x12cc3abd */
  goto L_12cc3abd;
L_12cc3aac:;
  /* 12cc3aac mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12cc3aaf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12cc3ab2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12cc3ab6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12cc3abd:;
  /* 12cc3abd push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc3abf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3ac1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12cc3ac3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12cc3ac6 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3ac7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc3aca push eax */
  push32((uint32_t)(EAX));
  /* 12cc3acb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12cc3ace push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3acf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cc3ad4 mov edx, dword ptr [0x12ce0718] */
  EDX = (r32((uint32_t)(0x12ce0718)));
  /* 12cc3ada push edx */
  push32((uint32_t)(EDX));
  /* 12cc3adb call 0x12cbc5a0 */
  push32(0x12cc3ae0u); f_12cbc5a0();
  /* 12cc3ae0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3ae3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc3ae6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3aea jne 0x12cc3af1 */
  if (!C.zf) goto L_12cc3af1;
  /* 12cc3aec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3aef jmp 0x12cc3b17 */
  goto L_12cc3b17;
L_12cc3af1:;
  /* 12cc3af1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3af5 jne 0x12cc3b01 */
  if (!C.zf) goto L_12cc3b01;
  /* 12cc3af7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc3afa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3aff jmp 0x12cc3b17 */
  goto L_12cc3b17;
L_12cc3b01:;
  /* 12cc3b01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc3b04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3b09 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12cc3b0c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3b12 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12cc3b15 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12cc3b17:;
  /* 12cc3b17 mov esp, ebp */
  ESP = (EBP);
  /* 12cc3b19 pop ebp */
  EBP = (pop32());
  /* 12cc3b1a ret  */
  ESPCHK(0x12cc39f0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12cc3b20 (52 bytes, 19 insns) */
void f_12cc3b20(void) {
  FTRACE(0x12cc3b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc3b20 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cc3b24 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12cc3b28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3b2a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12cc3b2e jne 0x12cc3b39 */
  if (!C.zf) goto L_12cc3b39;
  /* 12cc3b30 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cc3b34 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12cc3b36 ret 0x10 */
  ESPCHK(0x12cc3b20u, _esp0);
  ESP += 20; return;
L_12cc3b39:;
  /* 12cc3b39 push ebx */
  push32((uint32_t)(EBX));
  /* 12cc3b3a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12cc3b3c mov ebx, eax */
  EBX = (EAX);
  /* 12cc3b3e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cc3b42 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12cc3b46 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3b48 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cc3b4c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12cc3b4e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3b50 pop ebx */
  EBX = (pop32());
  /* 12cc3b51 ret 0x10 */
  ESPCHK(0x12cc3b20u, _esp0);
  ESP += 20; return;
}

/* FUN_10013b60 @ 0x12cc3b60 (46 bytes, 18 insns) */
void f_12cc3b60(void) {
  FTRACE(0x12cc3b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc3b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc3b61 mov ebp, esp */
  EBP = (ESP);
  /* 12cc3b63 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3b64 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12cc3b66 call 0x12cb7bb0 */
  push32(0x12cc3b6bu); f_12cb7bb0();
  /* 12cc3b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3b6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3b71 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3b72 call 0x12cc3b90 */
  push32(0x12cc3b77u); f_12cc3b90();
  /* 12cc3b77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3b7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc3b7d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12cc3b7f call 0x12cb7c50 */
  push32(0x12cc3b84u); f_12cb7c50();
  /* 12cc3b84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3b87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc3b8a mov esp, ebp */
  ESP = (EBP);
  /* 12cc3b8c pop ebp */
  EBP = (pop32());
  /* 12cc3b8d ret  */
  ESPCHK(0x12cc3b60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12cc3b90 (198 bytes, 69 insns) */
void f_12cc3b90(void) {
  FTRACE(0x12cc3b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc3b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc3b91 mov ebp, esp */
  EBP = (ESP);
  /* 12cc3b93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc3b96 mov eax, dword ptr [0x12ce0534] */
  EAX = (r32((uint32_t)(0x12ce0534)));
  /* 12cc3b9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cc3b9e cmp dword ptr [0x12ce2040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce2040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3ba5 jne 0x12cc3bae */
  if (!C.zf) goto L_12cc3bae;
  /* 12cc3ba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3ba9 jmp 0x12cc3c52 */
  goto L_12cc3c52;
L_12cc3bae:;
  /* 12cc3bae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3bb2 jne 0x12cc3bd6 */
  if (!C.zf) goto L_12cc3bd6;
  /* 12cc3bb4 cmp dword ptr [0x12ce053c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce053c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3bbb je 0x12cc3bd6 */
  if (C.zf) goto L_12cc3bd6;
  /* 12cc3bbd call 0x12cc3cb0 */
  push32(0x12cc3bc2u); f_12cc3cb0();
  /* 12cc3bc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc3bc4 je 0x12cc3bcd */
  if (C.zf) goto L_12cc3bcd;
  /* 12cc3bc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3bc8 jmp 0x12cc3c52 */
  goto L_12cc3c52;
L_12cc3bcd:;
  /* 12cc3bcd mov ecx, dword ptr [0x12ce0534] */
  ECX = (r32((uint32_t)(0x12ce0534)));
  /* 12cc3bd3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12cc3bd6:;
  /* 12cc3bd6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3bda je 0x12cc3c50 */
  if (C.zf) goto L_12cc3c50;
  /* 12cc3bdc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3be0 je 0x12cc3c50 */
  if (C.zf) goto L_12cc3c50;
  /* 12cc3be2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3be5 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3be6 call 0x12cb6fe0 */
  push32(0x12cc3bebu); f_12cb6fe0();
  /* 12cc3beb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3bee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cc3bf1:;
  /* 12cc3bf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc3bf4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3bf7 je 0x12cc3c50 */
  if (C.zf) goto L_12cc3c50;
  /* 12cc3bf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc3bfc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc3bfe push edx */
  push32((uint32_t)(EDX));
  /* 12cc3bff call 0x12cb6fe0 */
  push32(0x12cc3c04u); f_12cb6fe0();
  /* 12cc3c04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3c07 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3c0a jbe 0x12cc3c45 */
  if ((C.cf||C.zf)) goto L_12cc3c45;
  /* 12cc3c0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc3c0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc3c11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc3c14 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12cc3c18 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3c1b jne 0x12cc3c45 */
  if (!C.zf) goto L_12cc3c45;
  /* 12cc3c1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc3c20 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3c21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3c24 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3c25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc3c28 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc3c2a push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3c2b call 0x12cc3c60 */
  push32(0x12cc3c30u); f_12cc3c60();
  /* 12cc3c30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3c33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc3c35 jne 0x12cc3c45 */
  if (!C.zf) goto L_12cc3c45;
  /* 12cc3c37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc3c3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc3c3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc3c3f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12cc3c43 jmp 0x12cc3c52 */
  goto L_12cc3c52;
L_12cc3c45:;
  /* 12cc3c45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc3c48 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3c4b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cc3c4e jmp 0x12cc3bf1 */
  goto L_12cc3bf1;
L_12cc3c50:;
  /* 12cc3c50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cc3c52:;
  /* 12cc3c52 mov esp, ebp */
  ESP = (EBP);
  /* 12cc3c54 pop ebp */
  EBP = (pop32());
  /* 12cc3c55 ret  */
  ESPCHK(0x12cc3b90u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12cc3c60 (79 bytes, 32 insns) */
void f_12cc3c60(void) {
  FTRACE(0x12cc3c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc3c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc3c61 mov ebp, esp */
  EBP = (ESP);
  /* 12cc3c63 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3c64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3c68 jne 0x12cc3c6e */
  if (!C.zf) goto L_12cc3c6e;
  /* 12cc3c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3c6c jmp 0x12cc3cab */
  goto L_12cc3cab;
L_12cc3c6e:;
  /* 12cc3c6e mov eax, dword ptr [0x12ce1c04] */
  EAX = (r32((uint32_t)(0x12ce1c04)));
  /* 12cc3c73 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3c74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3c77 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3c78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc3c7b push edx */
  push32((uint32_t)(EDX));
  /* 12cc3c7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3c7f push eax */
  push32((uint32_t)(EAX));
  /* 12cc3c80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3c83 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3c84 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc3c86 mov edx, dword ptr [0x12ce1ea4] */
  EDX = (r32((uint32_t)(0x12ce1ea4)));
  /* 12cc3c8c push edx */
  push32((uint32_t)(EDX));
  /* 12cc3c8d call 0x12cc3d60 */
  push32(0x12cc3c92u); f_12cc3d60();
  /* 12cc3c92 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3c95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc3c98 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3c9c jne 0x12cc3ca5 */
  if (!C.zf) goto L_12cc3ca5;
  /* 12cc3c9e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12cc3ca3 jmp 0x12cc3cab */
  goto L_12cc3cab;
L_12cc3ca5:;
  /* 12cc3ca5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc3ca8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12cc3cab:;
  /* 12cc3cab mov esp, ebp */
  ESP = (EBP);
  /* 12cc3cad pop ebp */
  EBP = (pop32());
  /* 12cc3cae ret  */
  ESPCHK(0x12cc3c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013cb0 @ 0x12cc3cb0 (174 bytes, 66 insns) */
void f_12cc3cb0(void) {
  FTRACE(0x12cc3cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc3cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc3cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc3cb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc3cb6 mov eax, dword ptr [0x12ce053c] */
  EAX = (r32((uint32_t)(0x12ce053c)));
  /* 12cc3cbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cc3cbe:;
  /* 12cc3cbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc3cc1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3cc4 je 0x12cc3d58 */
  if (C.zf) goto L_12cc3d58;
  /* 12cc3cca push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3cce push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3cd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3cd2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cc3cd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc3cd7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc3cd9 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3cda push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3cdc push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc3cde call dword ptr [0x12ce3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3370))), 0x12cc3ce4u);
  /* 12cc3ce4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cc3ce7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3ceb jne 0x12cc3cf2 */
  if (!C.zf) goto L_12cc3cf2;
  /* 12cc3ced or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3cf0 jmp 0x12cc3d5a */
  goto L_12cc3d5a;
L_12cc3cf2:;
  /* 12cc3cf2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12cc3cf4 push 0x12cdcce4 */
  push32((uint32_t)(0x12cdcce4u));
  /* 12cc3cf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc3cfb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc3cfe push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3cff call 0x12cb41b0 */
  push32(0x12cc3d04u); f_12cb41b0();
  /* 12cc3d04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3d07 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cc3d0a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3d0e jne 0x12cc3d15 */
  if (!C.zf) goto L_12cc3d15;
  /* 12cc3d10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3d13 jmp 0x12cc3d5a */
  goto L_12cc3d5a;
L_12cc3d15:;
  /* 12cc3d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3d19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc3d1c push edx */
  push32((uint32_t)(EDX));
  /* 12cc3d1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc3d20 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3d21 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cc3d23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc3d26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc3d28 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3d29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3d2b push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc3d2d call dword ptr [0x12ce3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3370))), 0x12cc3d33u);
  /* 12cc3d33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc3d35 jne 0x12cc3d3c */
  if (!C.zf) goto L_12cc3d3c;
  /* 12cc3d37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3d3a jmp 0x12cc3d5a */
  goto L_12cc3d5a;
L_12cc3d3c:;
  /* 12cc3d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3d3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc3d41 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3d42 call 0x12cc41b0 */
  push32(0x12cc3d47u); f_12cc41b0();
  /* 12cc3d47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3d4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc3d4d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3d50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cc3d53 jmp 0x12cc3cbe */
  goto L_12cc3cbe;
L_12cc3d58:;
  /* 12cc3d58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cc3d5a:;
  /* 12cc3d5a mov esp, ebp */
  ESP = (EBP);
  /* 12cc3d5c pop ebp */
  EBP = (pop32());
  /* 12cc3d5d ret  */
  ESPCHK(0x12cc3cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d60 @ 0x12cc3d60 (970 bytes, 340 insns) */
void f_12cc3d60(void) {
  FTRACE(0x12cc3d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc3d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc3d61 mov ebp, esp */
  EBP = (ESP);
  /* 12cc3d63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cc3d65 push 0x12cdcd38 */
  push32((uint32_t)(0x12cdcd38u));
  /* 12cc3d6a push 0x12cbd2b8 */
  push32((uint32_t)(0x12cbd2b8u));
  /* 12cc3d6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12cc3d75 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3d76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12cc3d7d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3d80 push ebx */
  push32((uint32_t)(EBX));
  /* 12cc3d81 push esi */
  push32((uint32_t)(ESI));
  /* 12cc3d82 push edi */
  push32((uint32_t)(EDI));
  /* 12cc3d83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cc3d86 cmp dword ptr [0x12ce087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3d8d jne 0x12cc3de6 */
  if (!C.zf) goto L_12cc3de6;
  /* 12cc3d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc3d91 push 0x12cdc394 */
  push32((uint32_t)(0x12cdc394u));
  /* 12cc3d96 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc3d98 push 0x12cdc394 */
  push32((uint32_t)(0x12cdc394u));
  /* 12cc3d9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3d9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3da1 call dword ptr [0x12ce3284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3284))), 0x12cc3da7u);
  /* 12cc3da7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc3da9 je 0x12cc3db7 */
  if (C.zf) goto L_12cc3db7;
  /* 12cc3dab mov dword ptr [0x12ce087c], 1 */
  w32((uint32_t)(0x12ce087c), (0x1u));
  /* 12cc3db5 jmp 0x12cc3de6 */
  goto L_12cc3de6;
L_12cc3db7:;
  /* 12cc3db7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc3db9 push 0x12cdc390 */
  push32((uint32_t)(0x12cdc390u));
  /* 12cc3dbe push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc3dc0 push 0x12cdc390 */
  push32((uint32_t)(0x12cdc390u));
  /* 12cc3dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3dc9 call dword ptr [0x12ce3288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3288))), 0x12cc3dcfu);
  /* 12cc3dcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc3dd1 je 0x12cc3ddf */
  if (C.zf) goto L_12cc3ddf;
  /* 12cc3dd3 mov dword ptr [0x12ce087c], 2 */
  w32((uint32_t)(0x12ce087c), (0x2u));
  /* 12cc3ddd jmp 0x12cc3de6 */
  goto L_12cc3de6;
L_12cc3ddf:;
  /* 12cc3ddf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3de1 jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc3de6:;
  /* 12cc3de6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3dea jle 0x12cc3dff */
  if ((C.zf||C.sf!=C.of)) goto L_12cc3dff;
  /* 12cc3dec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc3def push eax */
  push32((uint32_t)(EAX));
  /* 12cc3df0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3df3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3df4 call 0x12cc4160 */
  push32(0x12cc3df9u); f_12cc4160();
  /* 12cc3df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3dfc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12cc3dff:;
  /* 12cc3dff cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3e03 jle 0x12cc3e18 */
  if ((C.zf||C.sf!=C.of)) goto L_12cc3e18;
  /* 12cc3e05 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12cc3e08 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3e09 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc3e0c push eax */
  push32((uint32_t)(EAX));
  /* 12cc3e0d call 0x12cc4160 */
  push32(0x12cc3e12u); f_12cc4160();
  /* 12cc3e12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3e15 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12cc3e18:;
  /* 12cc3e18 cmp dword ptr [0x12ce087c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ce087c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3e1f jne 0x12cc3e44 */
  if (!C.zf) goto L_12cc3e44;
  /* 12cc3e21 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12cc3e24 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3e25 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc3e28 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3e29 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc3e2c push eax */
  push32((uint32_t)(EAX));
  /* 12cc3e2d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3e30 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3e31 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc3e34 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3e35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc3e38 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3e39 call dword ptr [0x12ce3288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3288))), 0x12cc3e3fu);
  /* 12cc3e3f jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc3e44:;
  /* 12cc3e44 cmp dword ptr [0x12ce087c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce087c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3e4b jne 0x12cc4142 */
  if (!C.zf) goto L_12cc4142;
  /* 12cc3e51 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3e55 jne 0x12cc3e60 */
  if (!C.zf) goto L_12cc3e60;
  /* 12cc3e57 mov ecx, dword ptr [0x12ce0728] */
  ECX = (r32((uint32_t)(0x12ce0728)));
  /* 12cc3e5d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12cc3e60:;
  /* 12cc3e60 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3e64 je 0x12cc3e70 */
  if (C.zf) goto L_12cc3e70;
  /* 12cc3e66 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3e6a jne 0x12cc3fec */
  if (!C.zf) goto L_12cc3fec;
L_12cc3e70:;
  /* 12cc3e70 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc3e73 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3e76 jne 0x12cc3e82 */
  if (!C.zf) goto L_12cc3e82;
  /* 12cc3e78 mov eax, 2 */
  EAX = (0x2u);
  /* 12cc3e7d jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc3e82:;
  /* 12cc3e82 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3e86 jle 0x12cc3e92 */
  if ((C.zf||C.sf!=C.of)) goto L_12cc3e92;
  /* 12cc3e88 mov eax, 1 */
  EAX = (0x1u);
  /* 12cc3e8d jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc3e92:;
  /* 12cc3e92 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3e96 jle 0x12cc3ea2 */
  if ((C.zf||C.sf!=C.of)) goto L_12cc3ea2;
  /* 12cc3e98 mov eax, 3 */
  EAX = (0x3u);
  /* 12cc3e9d jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc3ea2:;
  /* 12cc3ea2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12cc3ea5 push eax */
  push32((uint32_t)(EAX));
  /* 12cc3ea6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12cc3ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3eaa call dword ptr [0x12ce32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32e0))), 0x12cc3eb0u);
  /* 12cc3eb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc3eb2 jne 0x12cc3ebb */
  if (!C.zf) goto L_12cc3ebb;
  /* 12cc3eb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3eb6 jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc3ebb:;
  /* 12cc3ebb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3ebf jne 0x12cc3ec7 */
  if (!C.zf) goto L_12cc3ec7;
  /* 12cc3ec1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3ec5 je 0x12cc3ef4 */
  if (C.zf) goto L_12cc3ef4;
L_12cc3ec7:;
  /* 12cc3ec7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3ecb jne 0x12cc3ed3 */
  if (!C.zf) goto L_12cc3ed3;
  /* 12cc3ecd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3ed1 je 0x12cc3ef4 */
  if (C.zf) goto L_12cc3ef4;
L_12cc3ed3:;
  /* 12cc3ed3 push 0x12cdccf8 */
  push32((uint32_t)(0x12cdccf8u));
  /* 12cc3ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3eda push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12cc3edf push 0x12cdccf0 */
  push32((uint32_t)(0x12cdccf0u));
  /* 12cc3ee4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc3ee6 call 0x12cb3270 */
  push32(0x12cc3eebu); f_12cb3270();
  /* 12cc3eeb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3eee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3ef1 jne 0x12cc3ef4 */
  if (!C.zf) goto L_12cc3ef4;
  /* 12cc3ef3 int3  */
  x86_unimpl("int3 @ 0x12cc3ef3");
L_12cc3ef4:;
  /* 12cc3ef4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc3ef6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc3ef8 jne 0x12cc3ebb */
  if (!C.zf) goto L_12cc3ebb;
  /* 12cc3efa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3efe jle 0x12cc3f73 */
  if ((C.zf||C.sf!=C.of)) goto L_12cc3f73;
  /* 12cc3f00 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3f04 jae 0x12cc3f10 */
  if (!C.cf) goto L_12cc3f10;
  /* 12cc3f06 mov eax, 3 */
  EAX = (0x3u);
  /* 12cc3f0b jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc3f10:;
  /* 12cc3f10 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12cc3f13 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12cc3f16 jmp 0x12cc3f21 */
  goto L_12cc3f21;
L_12cc3f18:;
  /* 12cc3f18 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12cc3f1b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3f1e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12cc3f21:;
  /* 12cc3f21 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12cc3f24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3f26 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc3f28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc3f2a je 0x12cc3f69 */
  if (C.zf) goto L_12cc3f69;
  /* 12cc3f2c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12cc3f2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc3f31 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12cc3f34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc3f36 je 0x12cc3f69 */
  if (C.zf) goto L_12cc3f69;
  /* 12cc3f38 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3f3b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3f3d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cc3f3f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12cc3f42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3f44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc3f46 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3f48 jl 0x12cc3f67 */
  if ((C.sf!=C.of)) goto L_12cc3f67;
  /* 12cc3f4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3f4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc3f4f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cc3f51 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12cc3f54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3f56 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12cc3f59 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3f5b jg 0x12cc3f67 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc3f67;
  /* 12cc3f5d mov eax, 2 */
  EAX = (0x2u);
  /* 12cc3f62 jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc3f67:;
  /* 12cc3f67 jmp 0x12cc3f18 */
  goto L_12cc3f18;
L_12cc3f69:;
  /* 12cc3f69 mov eax, 3 */
  EAX = (0x3u);
  /* 12cc3f6e jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc3f73:;
  /* 12cc3f73 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3f77 jle 0x12cc3fec */
  if ((C.zf||C.sf!=C.of)) goto L_12cc3fec;
  /* 12cc3f79 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3f7d jae 0x12cc3f89 */
  if (!C.cf) goto L_12cc3f89;
  /* 12cc3f7f mov eax, 1 */
  EAX = (0x1u);
  /* 12cc3f84 jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc3f89:;
  /* 12cc3f89 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12cc3f8c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12cc3f8f jmp 0x12cc3f9a */
  goto L_12cc3f9a;
L_12cc3f91:;
  /* 12cc3f91 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12cc3f94 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc3f97 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12cc3f9a:;
  /* 12cc3f9a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12cc3f9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc3f9f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cc3fa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc3fa3 je 0x12cc3fe2 */
  if (C.zf) goto L_12cc3fe2;
  /* 12cc3fa5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12cc3fa8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3faa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12cc3fad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc3faf je 0x12cc3fe2 */
  if (C.zf) goto L_12cc3fe2;
  /* 12cc3fb1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc3fb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3fb6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc3fb8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12cc3fbb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc3fbd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cc3fbf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3fc1 jl 0x12cc3fe0 */
  if ((C.sf!=C.of)) goto L_12cc3fe0;
  /* 12cc3fc3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc3fc6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc3fc8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cc3fca mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12cc3fcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc3fcf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12cc3fd2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc3fd4 jg 0x12cc3fe0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc3fe0;
  /* 12cc3fd6 mov eax, 2 */
  EAX = (0x2u);
  /* 12cc3fdb jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc3fe0:;
  /* 12cc3fe0 jmp 0x12cc3f91 */
  goto L_12cc3f91;
L_12cc3fe2:;
  /* 12cc3fe2 mov eax, 1 */
  EAX = (0x1u);
  /* 12cc3fe7 jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc3fec:;
  /* 12cc3fec push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3fee push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc3ff0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc3ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc3ff4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc3ff7 push edx */
  push32((uint32_t)(EDX));
  /* 12cc3ff8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cc3ffa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12cc3ffd push eax */
  push32((uint32_t)(EAX));
  /* 12cc3ffe call dword ptr [0x12ce32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32d4))), 0x12cc4004u);
  /* 12cc4004 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12cc4007 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc400b jne 0x12cc4014 */
  if (!C.zf) goto L_12cc4014;
  /* 12cc400d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc400f jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc4014:;
  /* 12cc4014 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cc401b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cc401e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cc4020 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4023 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12cc4025 call 0x12cb7350 */
  push32(0x12cc402au); f_12cb7350();
  /* 12cc402a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12cc402d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cc4030 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12cc4033 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12cc4036 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cc403d jmp 0x12cc4056 */
  goto L_12cc4056;
  /* 12cc403f mov eax, 1 */
  EAX = (0x1u);
  /* 12cc4044 ret  */
  ESPCHK(0x12cc3d60u, _esp0);
  ESP += 4; return;
  /* 12cc4045 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc4048 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12cc404f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cc4056:;
  /* 12cc4056 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc405a jne 0x12cc4063 */
  if (!C.zf) goto L_12cc4063;
  /* 12cc405c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc405e jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc4063:;
  /* 12cc4063 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cc4066 push edx */
  push32((uint32_t)(EDX));
  /* 12cc4067 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cc406a push eax */
  push32((uint32_t)(EAX));
  /* 12cc406b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc406e push ecx */
  push32((uint32_t)(ECX));
  /* 12cc406f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc4072 push edx */
  push32((uint32_t)(EDX));
  /* 12cc4073 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc4075 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12cc4078 push eax */
  push32((uint32_t)(EAX));
  /* 12cc4079 call dword ptr [0x12ce32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32d4))), 0x12cc407fu);
  /* 12cc407f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc4081 jne 0x12cc408a */
  if (!C.zf) goto L_12cc408a;
  /* 12cc4083 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc4085 jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc408a:;
  /* 12cc408a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc408c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc408e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12cc4091 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc4092 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc4095 push edx */
  push32((uint32_t)(EDX));
  /* 12cc4096 push 9 */
  push32((uint32_t)(0x9u));
  /* 12cc4098 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12cc409b push eax */
  push32((uint32_t)(EAX));
  /* 12cc409c call dword ptr [0x12ce32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32d4))), 0x12cc40a2u);
  /* 12cc40a2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cc40a5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc40a9 jne 0x12cc40b2 */
  if (!C.zf) goto L_12cc40b2;
  /* 12cc40ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc40ad jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc40b2:;
  /* 12cc40b2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cc40b9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cc40bc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cc40be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc40c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12cc40c3 call 0x12cb7350 */
  push32(0x12cc40c8u); f_12cb7350();
  /* 12cc40c8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12cc40cb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cc40ce mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12cc40d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12cc40d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cc40db jmp 0x12cc40f4 */
  goto L_12cc40f4;
  /* 12cc40dd mov eax, 1 */
  EAX = (0x1u);
  /* 12cc40e2 ret  */
  ESPCHK(0x12cc3d60u, _esp0);
  ESP += 4; return;
  /* 12cc40e3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc40e6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12cc40ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cc40f4:;
  /* 12cc40f4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc40f8 jne 0x12cc40fe */
  if (!C.zf) goto L_12cc40fe;
  /* 12cc40fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc40fc jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc40fe:;
  /* 12cc40fe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cc4101 push edx */
  push32((uint32_t)(EDX));
  /* 12cc4102 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cc4105 push eax */
  push32((uint32_t)(EAX));
  /* 12cc4106 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12cc4109 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc410a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cc410d push edx */
  push32((uint32_t)(EDX));
  /* 12cc410e push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc4110 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12cc4113 push eax */
  push32((uint32_t)(EAX));
  /* 12cc4114 call dword ptr [0x12ce32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32d4))), 0x12cc411au);
  /* 12cc411a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc411c jne 0x12cc4122 */
  if (!C.zf) goto L_12cc4122;
  /* 12cc411e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc4120 jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc4122:;
  /* 12cc4122 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cc4125 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc4126 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cc4129 push edx */
  push32((uint32_t)(EDX));
  /* 12cc412a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cc412d push eax */
  push32((uint32_t)(EAX));
  /* 12cc412e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cc4131 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc4132 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc4135 push edx */
  push32((uint32_t)(EDX));
  /* 12cc4136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc4139 push eax */
  push32((uint32_t)(EAX));
  /* 12cc413a call dword ptr [0x12ce3284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3284))), 0x12cc4140u);
  /* 12cc4140 jmp 0x12cc4144 */
  goto L_12cc4144;
L_12cc4142:;
  /* 12cc4142 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cc4144:;
  /* 12cc4144 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12cc4147 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc414a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12cc4151 pop edi */
  EDI = (pop32());
  /* 12cc4152 pop esi */
  ESI = (pop32());
  /* 12cc4153 pop ebx */
  EBX = (pop32());
  /* 12cc4154 mov esp, ebp */
  ESP = (EBP);
  /* 12cc4156 pop ebp */
  EBP = (pop32());
  /* 12cc4157 ret  */
  ESPCHK(0x12cc3d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014160 @ 0x12cc4160 (80 bytes, 32 insns) */
void f_12cc4160(void) {
  FTRACE(0x12cc4160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc4160 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc4161 mov ebp, esp */
  EBP = (ESP);
  /* 12cc4163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc4166 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc4169 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cc416c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc416f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cc4172:;
  /* 12cc4172 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc4175 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc4178 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc417b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cc417e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc4180 je 0x12cc4197 */
  if (C.zf) goto L_12cc4197;
  /* 12cc4182 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc4185 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cc4188 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc418a je 0x12cc4197 */
  if (C.zf) goto L_12cc4197;
  /* 12cc418c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc418f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4192 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc4195 jmp 0x12cc4172 */
  goto L_12cc4172;
L_12cc4197:;
  /* 12cc4197 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc419a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cc419d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc419f jne 0x12cc41a9 */
  if (!C.zf) goto L_12cc41a9;
  /* 12cc41a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc41a4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc41a7 jmp 0x12cc41ac */
  goto L_12cc41ac;
L_12cc41a9:;
  /* 12cc41a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12cc41ac:;
  /* 12cc41ac mov esp, ebp */
  ESP = (EBP);
  /* 12cc41ae pop ebp */
  EBP = (pop32());
  /* 12cc41af ret  */
  ESPCHK(0x12cc4160u, _esp0);
  ESP += 4; return;
}

/* FUN_100141b0 @ 0x12cc41b0 (736 bytes, 224 insns) */
void f_12cc41b0(void) {
  FTRACE(0x12cc41b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc41b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc41b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc41b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc41b6 push esi */
  push32((uint32_t)(ESI));
  /* 12cc41b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc41bb je 0x12cc41dc */
  if (C.zf) goto L_12cc41dc;
  /* 12cc41bd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12cc41bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc41c2 push eax */
  push32((uint32_t)(EAX));
  /* 12cc41c3 call 0x12cc4600 */
  push32(0x12cc41c8u); f_12cc4600();
  /* 12cc41c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc41cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cc41ce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc41d2 je 0x12cc41dc */
  if (C.zf) goto L_12cc41dc;
  /* 12cc41d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc41d7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc41da jne 0x12cc41e4 */
  if (!C.zf) goto L_12cc41e4;
L_12cc41dc:;
  /* 12cc41dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc41df jmp 0x12cc448b */
  goto L_12cc448b;
L_12cc41e4:;
  /* 12cc41e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc41e7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12cc41eb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc41ed sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc41ef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12cc41f0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cc41f3 mov ecx, dword ptr [0x12ce0534] */
  ECX = (r32((uint32_t)(0x12ce0534)));
  /* 12cc41f9 cmp ecx, dword ptr [0x12ce0538] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ce0538))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc41ff jne 0x12cc4215 */
  if (!C.zf) goto L_12cc4215;
  /* 12cc4201 mov edx, dword ptr [0x12ce0534] */
  EDX = (r32((uint32_t)(0x12ce0534)));
  /* 12cc4207 push edx */
  push32((uint32_t)(EDX));
  /* 12cc4208 call 0x12cc4510 */
  push32(0x12cc420du); f_12cc4510();
  /* 12cc420d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4210 mov dword ptr [0x12ce0534], eax */
  w32((uint32_t)(0x12ce0534), (EAX));
L_12cc4215:;
  /* 12cc4215 cmp dword ptr [0x12ce0534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc421c jne 0x12cc42d5 */
  if (!C.zf) goto L_12cc42d5;
  /* 12cc4222 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc4226 je 0x12cc4247 */
  if (C.zf) goto L_12cc4247;
  /* 12cc4228 cmp dword ptr [0x12ce053c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce053c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc422f je 0x12cc4247 */
  if (C.zf) goto L_12cc4247;
  /* 12cc4231 call 0x12cc3cb0 */
  push32(0x12cc4236u); f_12cc3cb0();
  /* 12cc4236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc4238 je 0x12cc4242 */
  if (C.zf) goto L_12cc4242;
  /* 12cc423a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc423d jmp 0x12cc448b */
  goto L_12cc448b;
L_12cc4242:;
  /* 12cc4242 jmp 0x12cc42d5 */
  goto L_12cc42d5;
L_12cc4247:;
  /* 12cc4247 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc424b je 0x12cc4254 */
  if (C.zf) goto L_12cc4254;
  /* 12cc424d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc424f jmp 0x12cc448b */
  goto L_12cc448b;
L_12cc4254:;
  /* 12cc4254 cmp dword ptr [0x12ce0534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc425b jne 0x12cc4294 */
  if (!C.zf) goto L_12cc4294;
  /* 12cc425d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12cc4262 push 0x12cdcd50 */
  push32((uint32_t)(0x12cdcd50u));
  /* 12cc4267 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc4269 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cc426b call 0x12cb41b0 */
  push32(0x12cc4270u); f_12cb41b0();
  /* 12cc4270 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4273 mov dword ptr [0x12ce0534], eax */
  w32((uint32_t)(0x12ce0534), (EAX));
  /* 12cc4278 cmp dword ptr [0x12ce0534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc427f jne 0x12cc4289 */
  if (!C.zf) goto L_12cc4289;
  /* 12cc4281 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc4284 jmp 0x12cc448b */
  goto L_12cc448b;
L_12cc4289:;
  /* 12cc4289 mov eax, dword ptr [0x12ce0534] */
  EAX = (r32((uint32_t)(0x12ce0534)));
  /* 12cc428e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12cc4294:;
  /* 12cc4294 cmp dword ptr [0x12ce053c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce053c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc429b jne 0x12cc42d5 */
  if (!C.zf) goto L_12cc42d5;
  /* 12cc429d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12cc42a2 push 0x12cdcd50 */
  push32((uint32_t)(0x12cdcd50u));
  /* 12cc42a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc42a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cc42ab call 0x12cb41b0 */
  push32(0x12cc42b0u); f_12cb41b0();
  /* 12cc42b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc42b3 mov dword ptr [0x12ce053c], eax */
  w32((uint32_t)(0x12ce053c), (EAX));
  /* 12cc42b8 cmp dword ptr [0x12ce053c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce053c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc42bf jne 0x12cc42c9 */
  if (!C.zf) goto L_12cc42c9;
  /* 12cc42c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc42c4 jmp 0x12cc448b */
  goto L_12cc448b;
L_12cc42c9:;
  /* 12cc42c9 mov ecx, dword ptr [0x12ce053c] */
  ECX = (r32((uint32_t)(0x12ce053c)));
  /* 12cc42cf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12cc42d5:;
  /* 12cc42d5 mov edx, dword ptr [0x12ce0534] */
  EDX = (r32((uint32_t)(0x12ce0534)));
  /* 12cc42db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cc42de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc42e1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc42e4 push eax */
  push32((uint32_t)(EAX));
  /* 12cc42e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc42e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc42e9 call 0x12cc4490 */
  push32(0x12cc42eeu); f_12cc4490();
  /* 12cc42ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc42f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cc42f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc42f8 jl 0x12cc4391 */
  if ((C.sf!=C.of)) goto L_12cc4391;
  /* 12cc42fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc4301 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc4304 je 0x12cc4391 */
  if (C.zf) goto L_12cc4391;
  /* 12cc430a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc430e je 0x12cc4383 */
  if (C.zf) goto L_12cc4383;
  /* 12cc4310 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc4312 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc4315 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc4318 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12cc431b push edx */
  push32((uint32_t)(EDX));
  /* 12cc431c call 0x12cb4c40 */
  push32(0x12cc4321u); f_12cb4c40();
  /* 12cc4321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4324 jmp 0x12cc432f */
  goto L_12cc432f;
L_12cc4326:;
  /* 12cc4326 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc4329 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc432c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cc432f:;
  /* 12cc432f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc4332 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc4335 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc4339 je 0x12cc4350 */
  if (C.zf) goto L_12cc4350;
  /* 12cc433b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc433e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc4341 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc4344 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc4347 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12cc434b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12cc434e jmp 0x12cc4326 */
  goto L_12cc4326;
L_12cc4350:;
  /* 12cc4350 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12cc4355 push 0x12cdcd50 */
  push32((uint32_t)(0x12cdcd50u));
  /* 12cc435a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc435c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc435f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12cc4362 push eax */
  push32((uint32_t)(EAX));
  /* 12cc4363 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc4366 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc4367 call 0x12cb4640 */
  push32(0x12cc436cu); f_12cb4640();
  /* 12cc436c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc436f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cc4372 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc4376 je 0x12cc4381 */
  if (C.zf) goto L_12cc4381;
  /* 12cc4378 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc437b mov dword ptr [0x12ce0534], edx */
  w32((uint32_t)(0x12ce0534), (EDX));
L_12cc4381:;
  /* 12cc4381 jmp 0x12cc438f */
  goto L_12cc438f;
L_12cc4383:;
  /* 12cc4383 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc4386 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc4389 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc438c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12cc438f:;
  /* 12cc438f jmp 0x12cc4404 */
  goto L_12cc4404;
L_12cc4391:;
  /* 12cc4391 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc4395 jne 0x12cc43fd */
  if (!C.zf) goto L_12cc43fd;
  /* 12cc4397 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc439b jge 0x12cc43a5 */
  if ((C.sf==C.of)) goto L_12cc43a5;
  /* 12cc439d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc43a0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc43a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cc43a5:;
  /* 12cc43a5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12cc43aa push 0x12cdcd50 */
  push32((uint32_t)(0x12cdcd50u));
  /* 12cc43af push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc43b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc43b4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12cc43bb push edx */
  push32((uint32_t)(EDX));
  /* 12cc43bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc43bf push eax */
  push32((uint32_t)(EAX));
  /* 12cc43c0 call 0x12cb4640 */
  push32(0x12cc43c5u); f_12cb4640();
  /* 12cc43c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc43c8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cc43cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc43cf jne 0x12cc43d9 */
  if (!C.zf) goto L_12cc43d9;
  /* 12cc43d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc43d4 jmp 0x12cc448b */
  goto L_12cc448b;
L_12cc43d9:;
  /* 12cc43d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc43dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc43df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc43e2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12cc43e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc43e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc43eb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12cc43f3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc43f6 mov dword ptr [0x12ce0534], eax */
  w32((uint32_t)(0x12ce0534), (EAX));
  /* 12cc43fb jmp 0x12cc4404 */
  goto L_12cc4404;
L_12cc43fd:;
  /* 12cc43fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc43ff jmp 0x12cc448b */
  goto L_12cc448b;
L_12cc4404:;
  /* 12cc4404 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc4408 je 0x12cc4489 */
  if (C.zf) goto L_12cc4489;
  /* 12cc440a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12cc440f push 0x12cdcd50 */
  push32((uint32_t)(0x12cdcd50u));
  /* 12cc4414 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc4416 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc4419 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc441a call 0x12cb6fe0 */
  push32(0x12cc441fu); f_12cb6fe0();
  /* 12cc441f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4422 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4425 push eax */
  push32((uint32_t)(EAX));
  /* 12cc4426 call 0x12cb41b0 */
  push32(0x12cc442bu); f_12cb41b0();
  /* 12cc442b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc442e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cc4431 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc4435 je 0x12cc4489 */
  if (C.zf) goto L_12cc4489;
  /* 12cc4437 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc443a push edx */
  push32((uint32_t)(EDX));
  /* 12cc443b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc443e push eax */
  push32((uint32_t)(EAX));
  /* 12cc443f call 0x12cb7160 */
  push32(0x12cc4444u); f_12cb7160();
  /* 12cc4444 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4447 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc444a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc444d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc4450 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4452 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cc4455 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc4458 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12cc445b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc445e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4461 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cc4464 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc4467 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc4469 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc446b not edx */
  EDX = (~(EDX));
  /* 12cc446d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12cc4470 push edx */
  push32((uint32_t)(EDX));
  /* 12cc4471 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc4474 push eax */
  push32((uint32_t)(EAX));
  /* 12cc4475 call dword ptr [0x12ce3280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3280))), 0x12cc447bu);
  /* 12cc447b push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc447d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc4480 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc4481 call 0x12cb4c40 */
  push32(0x12cc4486u); f_12cb4c40();
  /* 12cc4486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc4489:;
  /* 12cc4489 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cc448b:;
  /* 12cc448b pop esi */
  ESI = (pop32());
  /* 12cc448c mov esp, ebp */
  ESP = (EBP);
  /* 12cc448e pop ebp */
  EBP = (pop32());
  /* 12cc448f ret  */
  ESPCHK(0x12cc41b0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12cc4490 (124 bytes, 47 insns) */
void f_12cc4490(void) {
  FTRACE(0x12cc4490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc4490 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc4491 mov ebp, esp */
  EBP = (ESP);
  /* 12cc4493 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc4494 mov eax, dword ptr [0x12ce0534] */
  EAX = (r32((uint32_t)(0x12ce0534)));
  /* 12cc4499 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc449c jmp 0x12cc44a7 */
  goto L_12cc44a7;
L_12cc449e:;
  /* 12cc449e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc44a1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc44a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cc44a7:;
  /* 12cc44a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc44aa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc44ad je 0x12cc44fa */
  if (C.zf) goto L_12cc44fa;
  /* 12cc44af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc44b2 push eax */
  push32((uint32_t)(EAX));
  /* 12cc44b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc44b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc44b8 push edx */
  push32((uint32_t)(EDX));
  /* 12cc44b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc44bc push eax */
  push32((uint32_t)(EAX));
  /* 12cc44bd call 0x12cc3c60 */
  push32(0x12cc44c2u); f_12cc3c60();
  /* 12cc44c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc44c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc44c7 jne 0x12cc44f8 */
  if (!C.zf) goto L_12cc44f8;
  /* 12cc44c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc44cc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc44ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc44d1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12cc44d5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc44d8 je 0x12cc44ea */
  if (C.zf) goto L_12cc44ea;
  /* 12cc44da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc44dd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc44df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc44e2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12cc44e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc44e8 jne 0x12cc44f8 */
  if (!C.zf) goto L_12cc44f8;
L_12cc44ea:;
  /* 12cc44ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc44ed sub eax, dword ptr [0x12ce0534] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ce0534))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc44f3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12cc44f6 jmp 0x12cc4508 */
  goto L_12cc4508;
L_12cc44f8:;
  /* 12cc44f8 jmp 0x12cc449e */
  goto L_12cc449e;
L_12cc44fa:;
  /* 12cc44fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc44fd sub eax, dword ptr [0x12ce0534] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ce0534))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc4503 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12cc4506 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12cc4508:;
  /* 12cc4508 mov esp, ebp */
  ESP = (EBP);
  /* 12cc450a pop ebp */
  EBP = (pop32());
  /* 12cc450b ret  */
  ESPCHK(0x12cc4490u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12cc4510 (238 bytes, 80 insns) */
void f_12cc4510(void) {
  FTRACE(0x12cc4510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc4510 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc4511 mov ebp, esp */
  EBP = (ESP);
  /* 12cc4513 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc4516 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12cc451d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc4520 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cc4523 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc4527 jne 0x12cc4530 */
  if (!C.zf) goto L_12cc4530;
  /* 12cc4529 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc452b jmp 0x12cc45fa */
  goto L_12cc45fa;
L_12cc4530:;
  /* 12cc4530 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc4533 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc4535 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc4538 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc453b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cc453e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc4540 je 0x12cc454d */
  if (C.zf) goto L_12cc454d;
  /* 12cc4542 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc4545 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4548 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cc454b jmp 0x12cc4530 */
  goto L_12cc4530;
L_12cc454d:;
  /* 12cc454d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12cc4552 push 0x12cdcd50 */
  push32((uint32_t)(0x12cdcd50u));
  /* 12cc4557 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc4559 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc455c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12cc4563 push eax */
  push32((uint32_t)(EAX));
  /* 12cc4564 call 0x12cb41b0 */
  push32(0x12cc4569u); f_12cb41b0();
  /* 12cc4569 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc456c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cc456f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc4572 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cc4575 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc4579 jne 0x12cc4585 */
  if (!C.zf) goto L_12cc4585;
  /* 12cc457b push 9 */
  push32((uint32_t)(0x9u));
  /* 12cc457d call 0x12cb3120 */
  push32(0x12cc4582u); f_12cb3120();
  /* 12cc4582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc4585:;
  /* 12cc4585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc4588 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12cc458b:;
  /* 12cc458b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc458e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc4591 je 0x12cc45ee */
  if (C.zf) goto L_12cc45ee;
  /* 12cc4593 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12cc4598 push 0x12cdcd50 */
  push32((uint32_t)(0x12cdcd50u));
  /* 12cc459d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc459f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc45a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc45a4 push edx */
  push32((uint32_t)(EDX));
  /* 12cc45a5 call 0x12cb6fe0 */
  push32(0x12cc45aau); f_12cb6fe0();
  /* 12cc45aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc45ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc45b0 push eax */
  push32((uint32_t)(EAX));
  /* 12cc45b1 call 0x12cb41b0 */
  push32(0x12cc45b6u); f_12cb41b0();
  /* 12cc45b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc45b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc45bc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cc45be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc45c1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc45c4 je 0x12cc45da */
  if (C.zf) goto L_12cc45da;
  /* 12cc45c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc45c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cc45cb push ecx */
  push32((uint32_t)(ECX));
  /* 12cc45cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc45cf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cc45d1 push eax */
  push32((uint32_t)(EAX));
  /* 12cc45d2 call 0x12cb7160 */
  push32(0x12cc45d7u); f_12cb7160();
  /* 12cc45d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc45da:;
  /* 12cc45da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc45dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc45e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cc45e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc45e6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc45e9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cc45ec jmp 0x12cc458b */
  goto L_12cc458b;
L_12cc45ee:;
  /* 12cc45ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc45f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cc45f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cc45fa:;
  /* 12cc45fa mov esp, ebp */
  ESP = (EBP);
  /* 12cc45fc pop ebp */
  EBP = (pop32());
  /* 12cc45fd ret  */
  ESPCHK(0x12cc4510u, _esp0);
  ESP += 4; return;
}

/* FUN_10014600 @ 0x12cc4600 (237 bytes, 81 insns) */
void f_12cc4600(void) {
  FTRACE(0x12cc4600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc4600 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc4601 mov ebp, esp */
  EBP = (ESP);
  /* 12cc4603 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc4604 cmp dword ptr [0x12ce1c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce1c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc460b jne 0x12cc4622 */
  if (!C.zf) goto L_12cc4622;
  /* 12cc460d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc4610 push eax */
  push32((uint32_t)(EAX));
  /* 12cc4611 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc4614 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc4615 call 0x12cc4700 */
  push32(0x12cc461au); f_12cc4700();
  /* 12cc461a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc461d jmp 0x12cc46e9 */
  goto L_12cc46e9;
L_12cc4622:;
  /* 12cc4622 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cc4624 call 0x12cb7bb0 */
  push32(0x12cc4629u); f_12cb7bb0();
  /* 12cc4629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc462c jmp 0x12cc4637 */
  goto L_12cc4637;
L_12cc462e:;
  /* 12cc462e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc4631 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4634 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12cc4637:;
  /* 12cc4637 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc463a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12cc463e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12cc4642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc4645 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cc464b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc464d je 0x12cc46cb */
  if (C.zf) goto L_12cc46cb;
  /* 12cc464f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc4652 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc4657 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc4659 mov cl, byte ptr [eax + 0x12ce1da1] */
  CL = (r8((uint32_t)(EAX + 0x12ce1da1)));
  /* 12cc465f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12cc4662 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc4664 je 0x12cc46b6 */
  if (C.zf) goto L_12cc46b6;
  /* 12cc4666 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc4669 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc466c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12cc466f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc4672 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc4674 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cc4676 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc4678 jne 0x12cc4688 */
  if (!C.zf) goto L_12cc4688;
  /* 12cc467a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cc467c call 0x12cb7c50 */
  push32(0x12cc4681u); f_12cb7c50();
  /* 12cc4681 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4684 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc4686 jmp 0x12cc46e9 */
  goto L_12cc46e9;
L_12cc4688:;
  /* 12cc4688 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc468b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cc4691 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12cc4694 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc4697 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc4699 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cc469b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cc469d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc46a0 jne 0x12cc46b4 */
  if (!C.zf) goto L_12cc46b4;
  /* 12cc46a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cc46a4 call 0x12cb7c50 */
  push32(0x12cc46a9u); f_12cb7c50();
  /* 12cc46a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc46ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc46af sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc46b2 jmp 0x12cc46e9 */
  goto L_12cc46e9;
L_12cc46b4:;
  /* 12cc46b4 jmp 0x12cc46c6 */
  goto L_12cc46c6;
L_12cc46b6:;
  /* 12cc46b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc46b9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cc46bf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc46c2 jne 0x12cc46c6 */
  if (!C.zf) goto L_12cc46c6;
  /* 12cc46c4 jmp 0x12cc46cb */
  goto L_12cc46cb;
L_12cc46c6:;
  /* 12cc46c6 jmp 0x12cc462e */
  goto L_12cc462e;
L_12cc46cb:;
  /* 12cc46cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cc46cd call 0x12cb7c50 */
  push32(0x12cc46d2u); f_12cb7c50();
  /* 12cc46d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc46d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc46d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc46dd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc46e0 jne 0x12cc46e7 */
  if (!C.zf) goto L_12cc46e7;
  /* 12cc46e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc46e5 jmp 0x12cc46e9 */
  goto L_12cc46e9;
L_12cc46e7:;
  /* 12cc46e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cc46e9:;
  /* 12cc46e9 mov esp, ebp */
  ESP = (EBP);
  /* 12cc46eb pop ebp */
  EBP = (pop32());
  /* 12cc46ec ret  */
  ESPCHK(0x12cc4600u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12cc4700 (193 bytes, 87 insns) */
void f_12cc4700(void) {
  FTRACE(0x12cc4700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc4700 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc4702 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12cc4706 push ebx */
  push32((uint32_t)(EBX));
  /* 12cc4707 mov ebx, eax */
  EBX = (EAX);
  /* 12cc4709 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12cc470c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cc4710 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12cc4716 je 0x12cc472b */
  if (C.zf) goto L_12cc472b;
L_12cc4718:;
  /* 12cc4718 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12cc471a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12cc471b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc471d je 0x12cc46f0 */
  if (C.zf) { jmp_ind(0x12cc46f0u); return; }
  /* 12cc471f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12cc4721 je 0x12cc4774 */
  if (C.zf) goto L_12cc4774;
  /* 12cc4723 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12cc4729 jne 0x12cc4718 */
  if (!C.zf) goto L_12cc4718;
L_12cc472b:;
  /* 12cc472b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12cc472d push edi */
  push32((uint32_t)(EDI));
  /* 12cc472e mov eax, ebx */
  EAX = (EBX);
  /* 12cc4730 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12cc4733 push esi */
  push32((uint32_t)(ESI));
  /* 12cc4734 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12cc4736:;
  /* 12cc4736 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12cc4738 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12cc473d mov eax, ecx */
  EAX = (ECX);
  /* 12cc473f mov esi, edi */
  ESI = (EDI);
  /* 12cc4741 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc4743 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4745 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4747 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cc474a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc474d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12cc474f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12cc4751 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc4754 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12cc475a jne 0x12cc4778 */
  if (!C.zf) goto L_12cc4778;
  /* 12cc475c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12cc4761 je 0x12cc4736 */
  if (C.zf) goto L_12cc4736;
  /* 12cc4763 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12cc4768 jne 0x12cc4772 */
  if (!C.zf) goto L_12cc4772;
  /* 12cc476a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12cc4770 jne 0x12cc4736 */
  if (!C.zf) goto L_12cc4736;
L_12cc4772:;
  /* 12cc4772 pop esi */
  ESI = (pop32());
  /* 12cc4773 pop edi */
  EDI = (pop32());
L_12cc4774:;
  /* 12cc4774 pop ebx */
  EBX = (pop32());
  /* 12cc4775 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc4777 ret  */
  ESPCHK(0x12cc4700u, _esp0);
  ESP += 4; return;
L_12cc4778:;
  /* 12cc4778 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12cc477b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc477d je 0x12cc47b5 */
  if (C.zf) goto L_12cc47b5;
  /* 12cc477f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12cc4781 je 0x12cc4772 */
  if (C.zf) goto L_12cc4772;
  /* 12cc4783 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc4785 je 0x12cc47ae */
  if (C.zf) goto L_12cc47ae;
  /* 12cc4787 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12cc4789 je 0x12cc4772 */
  if (C.zf) goto L_12cc4772;
  /* 12cc478b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12cc478e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc4790 je 0x12cc47a7 */
  if (C.zf) goto L_12cc47a7;
  /* 12cc4792 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12cc4794 je 0x12cc4772 */
  if (C.zf) goto L_12cc4772;
  /* 12cc4796 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cc4798 je 0x12cc47a0 */
  if (C.zf) goto L_12cc47a0;
  /* 12cc479a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12cc479c je 0x12cc4772 */
  if (C.zf) goto L_12cc4772;
  /* 12cc479e jmp 0x12cc4736 */
  goto L_12cc4736;
L_12cc47a0:;
  /* 12cc47a0 pop esi */
  ESI = (pop32());
  /* 12cc47a1 pop edi */
  EDI = (pop32());
  /* 12cc47a2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12cc47a5 pop ebx */
  EBX = (pop32());
  /* 12cc47a6 ret  */
  ESPCHK(0x12cc4700u, _esp0);
  ESP += 4; return;
L_12cc47a7:;
  /* 12cc47a7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12cc47aa pop esi */
  ESI = (pop32());
  /* 12cc47ab pop edi */
  EDI = (pop32());
  /* 12cc47ac pop ebx */
  EBX = (pop32());
  /* 12cc47ad ret  */
  ESPCHK(0x12cc4700u, _esp0);
  ESP += 4; return;
L_12cc47ae:;
  /* 12cc47ae lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12cc47b1 pop esi */
  ESI = (pop32());
  /* 12cc47b2 pop edi */
  EDI = (pop32());
  /* 12cc47b3 pop ebx */
  EBX = (pop32());
  /* 12cc47b4 ret  */
  ESPCHK(0x12cc4700u, _esp0);
  ESP += 4; return;
L_12cc47b5:;
  /* 12cc47b5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12cc47b8 pop esi */
  ESI = (pop32());
  /* 12cc47b9 pop edi */
  EDI = (pop32());
  /* 12cc47ba pop ebx */
  EBX = (pop32());
  /* 12cc47bb ret  */
  ESPCHK(0x12cc4700u, _esp0);
  ESP += 4; return;
  /* 12cc47bc jmp dword ptr [0x12ce32f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12ce32f8)))); return;
}

/* RtlUnwind @ 0x12cc490c (6 bytes, 1 insns) */
void f_12cc490c(void) {
  FTRACE(0x12cc490cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc490c jmp dword ptr [0x12ce32bc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12ce32bc)))); return;
}

