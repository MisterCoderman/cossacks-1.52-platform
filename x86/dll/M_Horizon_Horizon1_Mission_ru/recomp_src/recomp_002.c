#include "recomp.h"

/* FUN_100114f0 @ 0x12d014f0 (393 bytes, 123 insns) */
void f_12d014f0(void) {
  FTRACE(0x12d014f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d014f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d014f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d014f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d014f6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d014fa jne 0x12d01506 */
  if (!C.zf) goto L_12d01506;
  /* 12d014fc mov eax, dword ptr [0x12d1fc98] */
  EAX = (r32((uint32_t)(0x12d1fc98)));
  /* 12d01501 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d01504 jmp 0x12d0150c */
  goto L_12d0150c;
L_12d01506:;
  /* 12d01506 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d01509 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d0150c:;
  /* 12d0150c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d0150f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d01512 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01515 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d01518 push 0x12d208a4 */
  push32((uint32_t)(0x12d208a4u));
  /* 12d0151d call dword ptr [0x12d2331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2331c))), 0x12d01523u);
  /* 12d01523 cmp dword ptr [0x12d20894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0152a je 0x12d0154a */
  if (C.zf) goto L_12d0154a;
  /* 12d0152c push 0x12d208a4 */
  push32((uint32_t)(0x12d208a4u));
  /* 12d01531 call dword ptr [0x12d2330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2330c))), 0x12d01537u);
  /* 12d01537 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d01539 call 0x12cf7bb0 */
  push32(0x12d0153eu); f_12cf7bb0();
  /* 12d0153e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01541 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d01548 jmp 0x12d01551 */
  goto L_12d01551;
L_12d0154a:;
  /* 12d0154a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d01551:;
  /* 12d01551 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01555 jbe 0x12d01642 */
  if ((C.cf||C.zf)) goto L_12d01642;
  /* 12d0155b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d0155e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d01560 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12d01563 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d01567 je 0x12d01571 */
  if (C.zf) goto L_12d01571;
  /* 12d01569 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d0156d je 0x12d01576 */
  if (C.zf) goto L_12d01576;
  /* 12d0156f jmp 0x12d015d0 */
  goto L_12d015d0;
L_12d01571:;
  /* 12d01571 jmp 0x12d01642 */
  goto L_12d01642;
L_12d01576:;
  /* 12d01576 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01579 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0157c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12d0157f mov dword ptr [0x12d20880], 0 */
  w32((uint32_t)(0x12d20880), (0x0u));
  /* 12d01589 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d0158c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d0158f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01592 jne 0x12d015a7 */
  if (!C.zf) goto L_12d015a7;
  /* 12d01594 mov dword ptr [0x12d20880], 1 */
  w32((uint32_t)(0x12d20880), (0x1u));
  /* 12d0159e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d015a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d015a4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12d015a7:;
  /* 12d015a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d015aa push ecx */
  push32((uint32_t)(ECX));
  /* 12d015ab lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12d015ae push edx */
  push32((uint32_t)(EDX));
  /* 12d015af lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12d015b2 push eax */
  push32((uint32_t)(EAX));
  /* 12d015b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d015b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d015b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d015ba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d015bc push eax */
  push32((uint32_t)(EAX));
  /* 12d015bd call 0x12d01680 */
  push32(0x12d015c2u); f_12d01680();
  /* 12d015c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d015c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d015c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d015cb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d015ce jmp 0x12d0163d */
  goto L_12d0163d;
L_12d015d0:;
  /* 12d015d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d015d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d015d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d015d7 mov ecx, dword ptr [0x12d1ec98] */
  ECX = (r32((uint32_t)(0x12d1ec98)));
  /* 12d015dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d015df mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d015e3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d015e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d015eb je 0x12d01618 */
  if (C.zf) goto L_12d01618;
  /* 12d015ed cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d015f1 jbe 0x12d01618 */
  if ((C.cf||C.zf)) goto L_12d01618;
  /* 12d015f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d015f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d015f9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d015fb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d015fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d01600 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01603 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d01606 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01609 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0160c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d0160f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01612 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01615 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d01618:;
  /* 12d01618 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0161b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d0161e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d01620 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d01622 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d01625 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01628 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d0162b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d0162e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01631 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d01634 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01637 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d0163a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d0163d:;
  /* 12d0163d jmp 0x12d01551 */
  goto L_12d01551;
L_12d01642:;
  /* 12d01642 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01646 je 0x12d01654 */
  if (C.zf) goto L_12d01654;
  /* 12d01648 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d0164a call 0x12cf7c50 */
  push32(0x12d0164fu); f_12cf7c50();
  /* 12d0164f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01652 jmp 0x12d0165f */
  goto L_12d0165f;
L_12d01654:;
  /* 12d01654 push 0x12d208a4 */
  push32((uint32_t)(0x12d208a4u));
  /* 12d01659 call dword ptr [0x12d2330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2330c))), 0x12d0165fu);
L_12d0165f:;
  /* 12d0165f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01663 jbe 0x12d01673 */
  if ((C.cf||C.zf)) goto L_12d01673;
  /* 12d01665 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d01668 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d0166b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d0166e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01671 jmp 0x12d01675 */
  goto L_12d01675;
L_12d01673:;
  /* 12d01673 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d01675:;
  /* 12d01675 mov esp, ebp */
  ESP = (EBP);
  /* 12d01677 pop ebp */
  EBP = (pop32());
  /* 12d01678 ret  */
  ESPCHK(0x12d014f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011680 @ 0x12d01680 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12d01680(void) {
  FTRACE(0x12d01680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d01680 push ebp */
  push32((uint32_t)(EBP));
  /* 12d01681 mov ebp, esp */
  EBP = (ESP);
  /* 12d01683 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01686 push esi */
  push32((uint32_t)(ESI));
  /* 12d01687 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12d0168b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d0168e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01691 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01694 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d01697 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0169b ja 0x12d01be8 */
  if ((!C.cf&&!C.zf)) goto L_12d01be8;
  /* 12d016a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d016a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d016a6 mov dl, byte ptr [eax + 0x12d01c49] */
  DL = (r8((uint32_t)(EAX + 0x12d01c49)));
  /* 12d016ac jmp dword ptr [edx*4 + 0x12d01bed] */
  switch (EDX) {
    case 0: goto L_12d01bc6;
    case 1: goto L_12d016d5;
    case 2: goto L_12d0171b;
    case 3: goto L_12d01868;
    case 4: goto L_12d01890;
    case 5: goto L_12d0192f;
    case 6: goto L_12d0199b;
    case 7: goto L_12d019c4;
    case 8: goto L_12d01a05;
    case 9: goto L_12d01ae7;
    case 10: goto L_12d01b4e;
    case 11: goto L_12d01b9b;
    case 12: goto L_12d016b3;
    case 13: goto L_12d016f8;
    case 14: goto L_12d0173e;
    case 15: goto L_12d0183e;
    case 16: goto L_12d018d5;
    case 17: goto L_12d01902;
    case 18: goto L_12d01957;
    case 19: goto L_12d019db;
    case 20: goto L_12d01a89;
    case 21: goto L_12d01b18;
    case 22: goto L_12d01be8;
    default: x86_unimpl("switch@0x12d016ac out of table"); return;
  }
L_12d016b3:;
  /* 12d016b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d016b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d016b7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d016ba push edx */
  push32((uint32_t)(EDX));
  /* 12d016bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d016be mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12d016c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d016c4 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12d016c7 push eax */
  push32((uint32_t)(EAX));
  /* 12d016c8 call 0x12d01ca0 */
  push32(0x12d016cdu); f_12d01ca0();
  /* 12d016cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d016d0 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d016d5:;
  /* 12d016d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d016d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d016d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d016dc push edx */
  push32((uint32_t)(EDX));
  /* 12d016dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d016e0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12d016e3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d016e6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12d016ea push eax */
  push32((uint32_t)(EAX));
  /* 12d016eb call 0x12d01ca0 */
  push32(0x12d016f0u); f_12d01ca0();
  /* 12d016f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d016f3 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d016f8:;
  /* 12d016f8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d016fb push ecx */
  push32((uint32_t)(ECX));
  /* 12d016fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d016ff push edx */
  push32((uint32_t)(EDX));
  /* 12d01700 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01703 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d01706 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d01709 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12d0170d push eax */
  push32((uint32_t)(EAX));
  /* 12d0170e call 0x12d01ca0 */
  push32(0x12d01713u); f_12d01ca0();
  /* 12d01713 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01716 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d0171b:;
  /* 12d0171b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0171e push ecx */
  push32((uint32_t)(ECX));
  /* 12d0171f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01722 push edx */
  push32((uint32_t)(EDX));
  /* 12d01723 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01726 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d01729 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d0172c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12d01730 push eax */
  push32((uint32_t)(EAX));
  /* 12d01731 call 0x12d01ca0 */
  push32(0x12d01736u); f_12d01ca0();
  /* 12d01736 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01739 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d0173e:;
  /* 12d0173e cmp dword ptr [0x12d20880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01745 je 0x12d017c6 */
  if (C.zf) goto L_12d017c6;
  /* 12d01747 mov dword ptr [0x12d20880], 0 */
  w32((uint32_t)(0x12d20880), (0x0u));
  /* 12d01751 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d01754 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01755 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01758 push edx */
  push32((uint32_t)(EDX));
  /* 12d01759 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d0175c push eax */
  push32((uint32_t)(EAX));
  /* 12d0175d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01760 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01761 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d01764 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12d0176a push eax */
  push32((uint32_t)(EAX));
  /* 12d0176b call 0x12d01e50 */
  push32(0x12d01770u); f_12d01e50();
  /* 12d01770 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01773 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01776 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01779 jne 0x12d01780 */
  if (!C.zf) goto L_12d01780;
  /* 12d0177b jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d01780:;
  /* 12d01780 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01783 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d01785 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12d01788 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d0178b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d0178d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01790 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01793 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d01795 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01798 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d0179a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d0179d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d017a0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d017a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d017a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d017a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d017a9 push edx */
  push32((uint32_t)(EDX));
  /* 12d017aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d017ad push eax */
  push32((uint32_t)(EAX));
  /* 12d017ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d017b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d017b2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d017b5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12d017bb push eax */
  push32((uint32_t)(EAX));
  /* 12d017bc call 0x12d01e50 */
  push32(0x12d017c1u); f_12d01e50();
  /* 12d017c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d017c4 jmp 0x12d01839 */
  goto L_12d01839;
L_12d017c6:;
  /* 12d017c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d017c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d017ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d017cd push edx */
  push32((uint32_t)(EDX));
  /* 12d017ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d017d1 push eax */
  push32((uint32_t)(EAX));
  /* 12d017d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d017d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d017d6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d017d9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12d017df push eax */
  push32((uint32_t)(EAX));
  /* 12d017e0 call 0x12d01e50 */
  push32(0x12d017e5u); f_12d01e50();
  /* 12d017e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d017e8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d017eb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d017ee jne 0x12d017f5 */
  if (!C.zf) goto L_12d017f5;
  /* 12d017f0 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d017f5:;
  /* 12d017f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d017f8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d017fa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12d017fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01800 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d01802 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01805 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01808 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d0180a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0180d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d0180f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01812 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01815 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d01817 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d0181a push ecx */
  push32((uint32_t)(ECX));
  /* 12d0181b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0181e push edx */
  push32((uint32_t)(EDX));
  /* 12d0181f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01822 push eax */
  push32((uint32_t)(EAX));
  /* 12d01823 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01826 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01827 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d0182a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12d01830 push eax */
  push32((uint32_t)(EAX));
  /* 12d01831 call 0x12d01e50 */
  push32(0x12d01836u); f_12d01e50();
  /* 12d01836 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d01839:;
  /* 12d01839 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d0183e:;
  /* 12d0183e mov ecx, dword ptr [0x12d20880] */
  ECX = (r32((uint32_t)(0x12d20880)));
  /* 12d01844 mov dword ptr [0x12d20890], ecx */
  w32((uint32_t)(0x12d20890), (ECX));
  /* 12d0184a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0184d push edx */
  push32((uint32_t)(EDX));
  /* 12d0184e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01851 push eax */
  push32((uint32_t)(EAX));
  /* 12d01852 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d01854 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01857 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d0185a push edx */
  push32((uint32_t)(EDX));
  /* 12d0185b call 0x12d01cf0 */
  push32(0x12d01860u); f_12d01cf0();
  /* 12d01860 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01863 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d01868:;
  /* 12d01868 mov eax, dword ptr [0x12d20880] */
  EAX = (r32((uint32_t)(0x12d20880)));
  /* 12d0186d mov dword ptr [0x12d20890], eax */
  w32((uint32_t)(0x12d20890), (EAX));
  /* 12d01872 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01875 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01876 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01879 push edx */
  push32((uint32_t)(EDX));
  /* 12d0187a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d0187c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d0187f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d01882 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01883 call 0x12d01cf0 */
  push32(0x12d01888u); f_12d01cf0();
  /* 12d01888 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0188b jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d01890:;
  /* 12d01890 mov edx, dword ptr [0x12d20880] */
  EDX = (r32((uint32_t)(0x12d20880)));
  /* 12d01896 mov dword ptr [0x12d20890], edx */
  w32((uint32_t)(0x12d20890), (EDX));
  /* 12d0189c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d0189f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d018a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d018a3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12d018a8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d018aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d018ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d018b1 jne 0x12d018ba */
  if (!C.zf) goto L_12d018ba;
  /* 12d018b3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12d018ba:;
  /* 12d018ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d018bd push edx */
  push32((uint32_t)(EDX));
  /* 12d018be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d018c1 push eax */
  push32((uint32_t)(EAX));
  /* 12d018c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d018c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d018c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d018c8 call 0x12d01cf0 */
  push32(0x12d018cdu); f_12d01cf0();
  /* 12d018cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d018d0 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d018d5:;
  /* 12d018d5 mov edx, dword ptr [0x12d20880] */
  EDX = (r32((uint32_t)(0x12d20880)));
  /* 12d018db mov dword ptr [0x12d20890], edx */
  w32((uint32_t)(0x12d20890), (EDX));
  /* 12d018e1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d018e4 push eax */
  push32((uint32_t)(EAX));
  /* 12d018e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d018e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d018e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d018eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d018ee mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d018f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d018f4 push eax */
  push32((uint32_t)(EAX));
  /* 12d018f5 call 0x12d01cf0 */
  push32(0x12d018fau); f_12d01cf0();
  /* 12d018fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d018fd jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d01902:;
  /* 12d01902 mov ecx, dword ptr [0x12d20880] */
  ECX = (r32((uint32_t)(0x12d20880)));
  /* 12d01908 mov dword ptr [0x12d20890], ecx */
  w32((uint32_t)(0x12d20890), (ECX));
  /* 12d0190e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01911 push edx */
  push32((uint32_t)(EDX));
  /* 12d01912 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01915 push eax */
  push32((uint32_t)(EAX));
  /* 12d01916 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d01918 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d0191b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d0191e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01921 push edx */
  push32((uint32_t)(EDX));
  /* 12d01922 call 0x12d01cf0 */
  push32(0x12d01927u); f_12d01cf0();
  /* 12d01927 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0192a jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d0192f:;
  /* 12d0192f mov eax, dword ptr [0x12d20880] */
  EAX = (r32((uint32_t)(0x12d20880)));
  /* 12d01934 mov dword ptr [0x12d20890], eax */
  w32((uint32_t)(0x12d20890), (EAX));
  /* 12d01939 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0193c push ecx */
  push32((uint32_t)(ECX));
  /* 12d0193d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01940 push edx */
  push32((uint32_t)(EDX));
  /* 12d01941 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d01943 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01946 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d01949 push ecx */
  push32((uint32_t)(ECX));
  /* 12d0194a call 0x12d01cf0 */
  push32(0x12d0194fu); f_12d01cf0();
  /* 12d0194f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01952 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d01957:;
  /* 12d01957 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d0195a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0195e jg 0x12d0197c */
  if ((!C.zf&&C.sf==C.of)) goto L_12d0197c;
  /* 12d01960 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01963 push eax */
  push32((uint32_t)(EAX));
  /* 12d01964 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01967 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01968 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d0196b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12d01971 push eax */
  push32((uint32_t)(EAX));
  /* 12d01972 call 0x12d01ca0 */
  push32(0x12d01977u); f_12d01ca0();
  /* 12d01977 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0197a jmp 0x12d01996 */
  goto L_12d01996;
L_12d0197c:;
  /* 12d0197c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0197f push ecx */
  push32((uint32_t)(ECX));
  /* 12d01980 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01983 push edx */
  push32((uint32_t)(EDX));
  /* 12d01984 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d01987 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12d0198d push ecx */
  push32((uint32_t)(ECX));
  /* 12d0198e call 0x12d01ca0 */
  push32(0x12d01993u); f_12d01ca0();
  /* 12d01993 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d01996:;
  /* 12d01996 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d0199b:;
  /* 12d0199b mov edx, dword ptr [0x12d20880] */
  EDX = (r32((uint32_t)(0x12d20880)));
  /* 12d019a1 mov dword ptr [0x12d20890], edx */
  w32((uint32_t)(0x12d20890), (EDX));
  /* 12d019a7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d019aa push eax */
  push32((uint32_t)(EAX));
  /* 12d019ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d019ae push ecx */
  push32((uint32_t)(ECX));
  /* 12d019af push 2 */
  push32((uint32_t)(0x2u));
  /* 12d019b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d019b4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d019b6 push eax */
  push32((uint32_t)(EAX));
  /* 12d019b7 call 0x12d01cf0 */
  push32(0x12d019bcu); f_12d01cf0();
  /* 12d019bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d019bf jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d019c4:;
  /* 12d019c4 mov ecx, dword ptr [0x12d20880] */
  ECX = (r32((uint32_t)(0x12d20880)));
  /* 12d019ca mov dword ptr [0x12d20890], ecx */
  w32((uint32_t)(0x12d20890), (ECX));
  /* 12d019d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d019d3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12d019d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d019d9 jmp 0x12d01a2d */
  goto L_12d01a2d;
L_12d019db:;
  /* 12d019db mov ecx, dword ptr [0x12d20880] */
  ECX = (r32((uint32_t)(0x12d20880)));
  /* 12d019e1 mov dword ptr [0x12d20890], ecx */
  w32((uint32_t)(0x12d20890), (ECX));
  /* 12d019e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d019ea push edx */
  push32((uint32_t)(EDX));
  /* 12d019eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d019ee push eax */
  push32((uint32_t)(EAX));
  /* 12d019ef push 1 */
  push32((uint32_t)(0x1u));
  /* 12d019f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d019f4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d019f7 push edx */
  push32((uint32_t)(EDX));
  /* 12d019f8 call 0x12d01cf0 */
  push32(0x12d019fdu); f_12d01cf0();
  /* 12d019fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01a00 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d01a05:;
  /* 12d01a05 mov eax, dword ptr [0x12d20880] */
  EAX = (r32((uint32_t)(0x12d20880)));
  /* 12d01a0a mov dword ptr [0x12d20890], eax */
  w32((uint32_t)(0x12d20890), (EAX));
  /* 12d01a0f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01a12 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01a16 jne 0x12d01a21 */
  if (!C.zf) goto L_12d01a21;
  /* 12d01a18 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12d01a1f jmp 0x12d01a2d */
  goto L_12d01a2d;
L_12d01a21:;
  /* 12d01a21 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01a24 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12d01a27 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01a2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d01a2d:;
  /* 12d01a2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01a30 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12d01a33 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01a36 jge 0x12d01a41 */
  if ((C.sf==C.of)) goto L_12d01a41;
  /* 12d01a38 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d01a3f jmp 0x12d01a6e */
  goto L_12d01a6e;
L_12d01a41:;
  /* 12d01a41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01a44 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d01a47 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d01a48 mov ecx, 7 */
  ECX = (0x7u);
  /* 12d01a4d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d01a4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d01a52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01a55 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d01a58 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d01a59 mov ecx, 7 */
  ECX = (0x7u);
  /* 12d01a5e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d01a60 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01a63 jl 0x12d01a6e */
  if ((C.sf!=C.of)) goto L_12d01a6e;
  /* 12d01a65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d01a68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01a6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d01a6e:;
  /* 12d01a6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01a71 push eax */
  push32((uint32_t)(EAX));
  /* 12d01a72 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01a75 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01a76 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d01a78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d01a7b push edx */
  push32((uint32_t)(EDX));
  /* 12d01a7c call 0x12d01cf0 */
  push32(0x12d01a81u); f_12d01cf0();
  /* 12d01a81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01a84 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d01a89:;
  /* 12d01a89 cmp dword ptr [0x12d20880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01a90 je 0x12d01ac0 */
  if (C.zf) goto L_12d01ac0;
  /* 12d01a92 mov dword ptr [0x12d20880], 0 */
  w32((uint32_t)(0x12d20880), (0x0u));
  /* 12d01a9c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d01a9f push eax */
  push32((uint32_t)(EAX));
  /* 12d01aa0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01aa4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01aa7 push edx */
  push32((uint32_t)(EDX));
  /* 12d01aa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01aab push eax */
  push32((uint32_t)(EAX));
  /* 12d01aac mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d01aaf mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12d01ab5 push edx */
  push32((uint32_t)(EDX));
  /* 12d01ab6 call 0x12d01e50 */
  push32(0x12d01abbu); f_12d01e50();
  /* 12d01abb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01abe jmp 0x12d01ae2 */
  goto L_12d01ae2;
L_12d01ac0:;
  /* 12d01ac0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d01ac3 push eax */
  push32((uint32_t)(EAX));
  /* 12d01ac4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01ac8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01acb push edx */
  push32((uint32_t)(EDX));
  /* 12d01acc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01acf push eax */
  push32((uint32_t)(EAX));
  /* 12d01ad0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d01ad3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12d01ad9 push edx */
  push32((uint32_t)(EDX));
  /* 12d01ada call 0x12d01e50 */
  push32(0x12d01adfu); f_12d01e50();
  /* 12d01adf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d01ae2:;
  /* 12d01ae2 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d01ae7:;
  /* 12d01ae7 mov dword ptr [0x12d20880], 0 */
  w32((uint32_t)(0x12d20880), (0x0u));
  /* 12d01af1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d01af4 push eax */
  push32((uint32_t)(EAX));
  /* 12d01af5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01af8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01af9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01afc push edx */
  push32((uint32_t)(EDX));
  /* 12d01afd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01b00 push eax */
  push32((uint32_t)(EAX));
  /* 12d01b01 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d01b04 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12d01b0a push edx */
  push32((uint32_t)(EDX));
  /* 12d01b0b call 0x12d01e50 */
  push32(0x12d01b10u); f_12d01e50();
  /* 12d01b10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01b13 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d01b18:;
  /* 12d01b18 mov eax, dword ptr [0x12d20880] */
  EAX = (r32((uint32_t)(0x12d20880)));
  /* 12d01b1d mov dword ptr [0x12d20890], eax */
  w32((uint32_t)(0x12d20890), (EAX));
  /* 12d01b22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01b25 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d01b28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d01b29 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12d01b2e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d01b30 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d01b33 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01b36 push edx */
  push32((uint32_t)(EDX));
  /* 12d01b37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01b3a push eax */
  push32((uint32_t)(EAX));
  /* 12d01b3b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d01b3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d01b40 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01b41 call 0x12d01cf0 */
  push32(0x12d01b46u); f_12d01cf0();
  /* 12d01b46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01b49 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d01b4e:;
  /* 12d01b4e mov edx, dword ptr [0x12d20880] */
  EDX = (r32((uint32_t)(0x12d20880)));
  /* 12d01b54 mov dword ptr [0x12d20890], edx */
  w32((uint32_t)(0x12d20890), (EDX));
  /* 12d01b5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01b5d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d01b60 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d01b61 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12d01b66 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d01b68 mov ecx, eax */
  ECX = (EAX);
  /* 12d01b6a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01b6d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d01b70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01b73 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d01b76 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d01b77 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12d01b7c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d01b7e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01b80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d01b83 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01b86 push eax */
  push32((uint32_t)(EAX));
  /* 12d01b87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01b8a push ecx */
  push32((uint32_t)(ECX));
  /* 12d01b8b push 4 */
  push32((uint32_t)(0x4u));
  /* 12d01b8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d01b90 push edx */
  push32((uint32_t)(EDX));
  /* 12d01b91 call 0x12d01cf0 */
  push32(0x12d01b96u); f_12d01cf0();
  /* 12d01b96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01b99 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d01b9b:;
  /* 12d01b9b call 0x12d02cb0 */
  push32(0x12d01ba0u); f_12d02cb0();
  /* 12d01ba0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01ba3 push eax */
  push32((uint32_t)(EAX));
  /* 12d01ba4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01ba8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01bab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d01bad cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01bb1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12d01bb4 mov ecx, dword ptr [eax*4 + 0x12d1fe1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d1fe1c)));
  /* 12d01bbb push ecx */
  push32((uint32_t)(ECX));
  /* 12d01bbc call 0x12d01ca0 */
  push32(0x12d01bc1u); f_12d01ca0();
  /* 12d01bc1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01bc4 jmp 0x12d01be8 */
  goto L_12d01be8;
L_12d01bc6:;
  /* 12d01bc6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01bc9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d01bcb mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12d01bce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01bd1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d01bd3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01bd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01bd9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d01bdb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01bde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d01be0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01be3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01be6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d01be8:;
  /* 12d01be8 pop esi */
  ESI = (pop32());
  /* 12d01be9 mov esp, ebp */
  ESP = (EBP);
  /* 12d01beb pop ebp */
  EBP = (pop32());
  /* 12d01bec ret  */
  ESPCHK(0x12d01680u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12d01ca0 (72 bytes, 30 insns) */
void f_12d01ca0(void) {
  FTRACE(0x12d01ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d01ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d01ca1 mov ebp, esp */
  EBP = (ESP);
L_12d01ca3:;
  /* 12d01ca3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01ca6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01ca9 je 0x12d01ce6 */
  if (C.zf) goto L_12d01ce6;
  /* 12d01cab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d01cae movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d01cb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d01cb3 je 0x12d01ce6 */
  if (C.zf) goto L_12d01ce6;
  /* 12d01cb5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01cb8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d01cba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d01cbd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d01cbf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d01cc1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01cc4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d01cc6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01cc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01ccc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d01cce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d01cd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01cd4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d01cd7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01cda mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d01cdc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01cdf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01ce2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d01ce4 jmp 0x12d01ca3 */
  goto L_12d01ca3;
L_12d01ce6:;
  /* 12d01ce6 pop ebp */
  EBP = (pop32());
  /* 12d01ce7 ret  */
  ESPCHK(0x12d01ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cf0 @ 0x12d01cf0 (173 bytes, 64 insns) */
void f_12d01cf0(void) {
  FTRACE(0x12d01cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d01cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d01cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12d01cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01cf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d01cfb cmp dword ptr [0x12d20890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01d02 je 0x12d01d1a */
  if (C.zf) goto L_12d01d1a;
  /* 12d01d04 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01d07 push eax */
  push32((uint32_t)(EAX));
  /* 12d01d08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01d0b push ecx */
  push32((uint32_t)(ECX));
  /* 12d01d0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d01d0f push edx */
  push32((uint32_t)(EDX));
  /* 12d01d10 call 0x12d01da0 */
  push32(0x12d01d15u); f_12d01da0();
  /* 12d01d15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01d18 jmp 0x12d01d99 */
  goto L_12d01d99;
L_12d01d1a:;
  /* 12d01d1a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01d1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01d20 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01d22 jae 0x12d01d90 */
  if (!C.cf) goto L_12d01d90;
  /* 12d01d24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01d27 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01d2a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12d01d2d jmp 0x12d01d38 */
  goto L_12d01d38;
L_12d01d2f:;
  /* 12d01d2f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01d32 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01d35 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12d01d38:;
  /* 12d01d38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01d3b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01d3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d01d40 je 0x12d01d74 */
  if (C.zf) goto L_12d01d74;
  /* 12d01d42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d01d45 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d01d46 mov ecx, 0xa */
  ECX = (0xau);
  /* 12d01d4b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d01d4d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01d50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01d53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d01d55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01d58 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12d01d5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d01d5e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d01d5f mov ecx, 0xa */
  ECX = (0xau);
  /* 12d01d64 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d01d66 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d01d69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d01d6c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01d6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d01d72 jmp 0x12d01d2f */
  goto L_12d01d2f;
L_12d01d74:;
  /* 12d01d74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01d77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d01d79 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01d7c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01d7f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d01d81 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01d84 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d01d86 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01d89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01d8c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d01d8e jmp 0x12d01d99 */
  goto L_12d01d99;
L_12d01d90:;
  /* 12d01d90 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01d93 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12d01d99:;
  /* 12d01d99 mov esp, ebp */
  ESP = (EBP);
  /* 12d01d9b pop ebp */
  EBP = (pop32());
  /* 12d01d9c ret  */
  ESPCHK(0x12d01cf0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12d01da0 (172 bytes, 65 insns) */
void f_12d01da0(void) {
  FTRACE(0x12d01da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d01da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d01da1 mov ebp, esp */
  EBP = (ESP);
  /* 12d01da3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01da6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01da9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d01dab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d01dae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01db1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01db4 jbe 0x12d01dfb */
  if ((C.cf||C.zf)) goto L_12d01dfb;
L_12d01db6:;
  /* 12d01db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d01db9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d01dba mov ecx, 0xa */
  ECX = (0xau);
  /* 12d01dbf idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d01dc1 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01dc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d01dc7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d01dc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d01dcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01dcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d01dd2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01dd5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d01dd7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01dda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01ddd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d01ddf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d01de2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d01de3 mov ecx, 0xa */
  ECX = (0xau);
  /* 12d01de8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d01dea mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d01ded cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01df1 jle 0x12d01dfb */
  if ((C.zf||C.sf!=C.of)) goto L_12d01dfb;
  /* 12d01df3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d01df6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01df9 ja 0x12d01db6 */
  if ((!C.cf&&!C.zf)) goto L_12d01db6;
L_12d01dfb:;
  /* 12d01dfb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01dfe mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d01e00 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d01e03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d01e06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d01e09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d01e0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d01e0e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01e11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d01e14:;
  /* 12d01e14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d01e17 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d01e19 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12d01e1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d01e1f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d01e22 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d01e24 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d01e26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d01e29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01e2c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d01e2f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d01e32 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12d01e35 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12d01e37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d01e3a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01e3d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d01e40 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d01e43 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01e46 jb 0x12d01e14 */
  if (C.cf) goto L_12d01e14;
  /* 12d01e48 mov esp, ebp */
  ESP = (EBP);
  /* 12d01e4a pop ebp */
  EBP = (pop32());
  /* 12d01e4b ret  */
  ESPCHK(0x12d01da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e50 @ 0x12d01e50 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12d01e50(void) {
  FTRACE(0x12d01e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d01e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d01e51 mov ebp, esp */
  EBP = (ESP);
  /* 12d01e53 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12d01e56:;
  /* 12d01e56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d01e59 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d01e5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d01e5e je 0x12d022cc */
  if (C.zf) goto L_12d022cc;
  /* 12d01e64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d01e67 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01e6a je 0x12d022cc */
  if (C.zf) goto L_12d022cc;
  /* 12d01e70 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d01e74 mov dword ptr [0x12d20890], 0 */
  w32((uint32_t)(0x12d20890), (0x0u));
  /* 12d01e7e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d01e85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d01e88 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d01e8b jmp 0x12d01e96 */
  goto L_12d01e96;
L_12d01e8d:;
  /* 12d01e8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01e90 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01e93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12d01e96:;
  /* 12d01e96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d01e99 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d01e9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d01e9f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d01ea2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d01ea5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01ea8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d01eab cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01ead jne 0x12d01eb1 */
  if (!C.zf) goto L_12d01eb1;
  /* 12d01eaf jmp 0x12d01e8d */
  goto L_12d01e8d;
L_12d01eb1:;
  /* 12d01eb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d01eb4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01eb7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d01eba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d01ebd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d01ec0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d01ec3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01ec6 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01ec9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d01ecc cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01ed0 ja 0x12d02220 */
  if ((!C.cf&&!C.zf)) goto L_12d02220;
  /* 12d01ed6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01ed9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d01edb mov al, byte ptr [ecx + 0x12d022fc] */
  AL = (r8((uint32_t)(ECX + 0x12d022fc)));
  /* 12d01ee1 jmp dword ptr [eax*4 + 0x12d022d0] */
  switch (EAX) {
    case 0: goto L_12d0213f;
    case 1: goto L_12d02023;
    case 2: goto L_12d01fae;
    case 3: goto L_12d01ee8;
    case 4: goto L_12d01f26;
    case 5: goto L_12d01f87;
    case 6: goto L_12d01fd5;
    case 7: goto L_12d01ffc;
    case 8: goto L_12d0206a;
    case 9: goto L_12d01f64;
    case 10: goto L_12d02220;
    default: x86_unimpl("switch@0x12d01ee1 out of table"); return;
  }
L_12d01ee8:;
  /* 12d01ee8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01eeb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d01eee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d01ef1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01ef4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d01ef7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01efb ja 0x12d01f21 */
  if ((!C.cf&&!C.zf)) goto L_12d01f21;
  /* 12d01efd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d01f00 jmp dword ptr [ecx*4 + 0x12d0234f] */
  switch (ECX) {
    case 0: goto L_12d01f07;
    case 1: goto L_12d01f11;
    case 2: goto L_12d01f17;
    case 3: goto L_12d01f1d;
    case 4: goto L_12d01f45;
    case 5: goto L_12d01f4f;
    case 6: goto L_12d01f55;
    case 7: goto L_12d01f5b;
    default: x86_unimpl("switch@0x12d01f00 out of table"); return;
  }
L_12d01f07:;
  /* 12d01f07 mov dword ptr [0x12d20890], 1 */
  w32((uint32_t)(0x12d20890), (0x1u));
L_12d01f11:;
  /* 12d01f11 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12d01f15 jmp 0x12d01f21 */
  goto L_12d01f21;
L_12d01f17:;
  /* 12d01f17 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12d01f1b jmp 0x12d01f21 */
  goto L_12d01f21;
L_12d01f1d:;
  /* 12d01f1d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12d01f21:;
  /* 12d01f21 jmp 0x12d02220 */
  goto L_12d02220;
L_12d01f26:;
  /* 12d01f26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01f29 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d01f2c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d01f2f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01f32 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d01f35 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01f39 ja 0x12d01f5f */
  if ((!C.cf&&!C.zf)) goto L_12d01f5f;
  /* 12d01f3b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d01f3e jmp dword ptr [ecx*4 + 0x12d0235f] */
  switch (ECX) {
    case 0: goto L_12d01f45;
    case 1: goto L_12d01f4f;
    case 2: goto L_12d01f55;
    case 3: goto L_12d01f5b;
    default: x86_unimpl("switch@0x12d01f3e out of table"); return;
  }
L_12d01f45:;
  /* 12d01f45 mov dword ptr [0x12d20890], 1 */
  w32((uint32_t)(0x12d20890), (0x1u));
L_12d01f4f:;
  /* 12d01f4f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12d01f53 jmp 0x12d01f5f */
  goto L_12d01f5f;
L_12d01f55:;
  /* 12d01f55 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12d01f59 jmp 0x12d01f5f */
  goto L_12d01f5f;
L_12d01f5b:;
  /* 12d01f5b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12d01f5f:;
  /* 12d01f5f jmp 0x12d02220 */
  goto L_12d02220;
L_12d01f64:;
  /* 12d01f64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01f67 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12d01f6a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01f6e je 0x12d01f78 */
  if (C.zf) goto L_12d01f78;
  /* 12d01f70 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01f74 je 0x12d01f7e */
  if (C.zf) goto L_12d01f7e;
  /* 12d01f76 jmp 0x12d01f82 */
  goto L_12d01f82;
L_12d01f78:;
  /* 12d01f78 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12d01f7c jmp 0x12d01f82 */
  goto L_12d01f82;
L_12d01f7e:;
  /* 12d01f7e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12d01f82:;
  /* 12d01f82 jmp 0x12d02220 */
  goto L_12d02220;
L_12d01f87:;
  /* 12d01f87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01f8a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d01f8d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01f91 je 0x12d01f9b */
  if (C.zf) goto L_12d01f9b;
  /* 12d01f93 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01f97 je 0x12d01fa5 */
  if (C.zf) goto L_12d01fa5;
  /* 12d01f99 jmp 0x12d01fa9 */
  goto L_12d01fa9;
L_12d01f9b:;
  /* 12d01f9b mov dword ptr [0x12d20890], 1 */
  w32((uint32_t)(0x12d20890), (0x1u));
L_12d01fa5:;
  /* 12d01fa5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12d01fa9:;
  /* 12d01fa9 jmp 0x12d02220 */
  goto L_12d02220;
L_12d01fae:;
  /* 12d01fae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01fb1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12d01fb4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01fb8 je 0x12d01fc2 */
  if (C.zf) goto L_12d01fc2;
  /* 12d01fba cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01fbe je 0x12d01fcc */
  if (C.zf) goto L_12d01fcc;
  /* 12d01fc0 jmp 0x12d01fd0 */
  goto L_12d01fd0;
L_12d01fc2:;
  /* 12d01fc2 mov dword ptr [0x12d20890], 1 */
  w32((uint32_t)(0x12d20890), (0x1u));
L_12d01fcc:;
  /* 12d01fcc mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12d01fd0:;
  /* 12d01fd0 jmp 0x12d02220 */
  goto L_12d02220;
L_12d01fd5:;
  /* 12d01fd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01fd8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12d01fdb cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01fdf je 0x12d01fe9 */
  if (C.zf) goto L_12d01fe9;
  /* 12d01fe1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01fe5 je 0x12d01ff3 */
  if (C.zf) goto L_12d01ff3;
  /* 12d01fe7 jmp 0x12d01ff7 */
  goto L_12d01ff7;
L_12d01fe9:;
  /* 12d01fe9 mov dword ptr [0x12d20890], 1 */
  w32((uint32_t)(0x12d20890), (0x1u));
L_12d01ff3:;
  /* 12d01ff3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12d01ff7:;
  /* 12d01ff7 jmp 0x12d02220 */
  goto L_12d02220;
L_12d01ffc:;
  /* 12d01ffc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01fff mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12d02002 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02006 je 0x12d02010 */
  if (C.zf) goto L_12d02010;
  /* 12d02008 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0200c je 0x12d0201a */
  if (C.zf) goto L_12d0201a;
  /* 12d0200e jmp 0x12d0201e */
  goto L_12d0201e;
L_12d02010:;
  /* 12d02010 mov dword ptr [0x12d20890], 1 */
  w32((uint32_t)(0x12d20890), (0x1u));
L_12d0201a:;
  /* 12d0201a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12d0201e:;
  /* 12d0201e jmp 0x12d02220 */
  goto L_12d02220;
L_12d02023:;
  /* 12d02023 push 0x12d1cc4c */
  push32((uint32_t)(0x12d1cc4cu));
  /* 12d02028 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0202b push ecx */
  push32((uint32_t)(ECX));
  /* 12d0202c call 0x12d02880 */
  push32(0x12d02031u); f_12d02880();
  /* 12d02031 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d02036 jne 0x12d02043 */
  if (!C.zf) goto L_12d02043;
  /* 12d02038 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0203b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0203e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d02041 jmp 0x12d02061 */
  goto L_12d02061;
L_12d02043:;
  /* 12d02043 push 0x12d1cc48 */
  push32((uint32_t)(0x12d1cc48u));
  /* 12d02048 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0204b push eax */
  push32((uint32_t)(EAX));
  /* 12d0204c call 0x12d02880 */
  push32(0x12d02051u); f_12d02880();
  /* 12d02051 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d02056 jne 0x12d02061 */
  if (!C.zf) goto L_12d02061;
  /* 12d02058 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0205b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0205e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d02061:;
  /* 12d02061 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12d02065 jmp 0x12d02220 */
  goto L_12d02220;
L_12d0206a:;
  /* 12d0206a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d0206d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02071 jg 0x12d02081 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d02081;
  /* 12d02073 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d02076 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12d0207c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d0207f jmp 0x12d0208d */
  goto L_12d0208d;
L_12d02081:;
  /* 12d02081 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d02084 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12d0208a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d0208d:;
  /* 12d0208d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02091 jle 0x12d02134 */
  if ((C.zf||C.sf!=C.of)) goto L_12d02134;
  /* 12d02097 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0209a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0209d jbe 0x12d02134 */
  if ((C.cf||C.zf)) goto L_12d02134;
  /* 12d020a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d020a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d020a8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d020aa mov ecx, dword ptr [0x12d1ec98] */
  ECX = (r32((uint32_t)(0x12d1ec98)));
  /* 12d020b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d020b2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d020b6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d020bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d020be je 0x12d020f7 */
  if (C.zf) goto L_12d020f7;
  /* 12d020c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d020c3 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d020c6 jbe 0x12d020f7 */
  if ((C.cf||C.zf)) goto L_12d020f7;
  /* 12d020c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d020cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d020cd mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d020d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d020d2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12d020d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d020d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d020d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d020dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d020df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d020e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d020e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d020e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d020ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d020ed mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d020ef sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d020f2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d020f5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d020f7:;
  /* 12d020f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d020fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d020fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d020ff mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d02101 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d02103 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d02106 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d02108 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0210b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d0210e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d02110 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d02113 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02116 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d02119 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0211c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d0211e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d02121 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d02124 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d02126 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02129 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d0212c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d0212f jmp 0x12d0208d */
  goto L_12d0208d;
L_12d02134:;
  /* 12d02134 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d02137 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d0213a jmp 0x12d01e56 */
  goto L_12d01e56;
L_12d0213f:;
  /* 12d0213f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02142 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d02145 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d02147 je 0x12d02212 */
  if (C.zf) goto L_12d02212;
  /* 12d0214d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02150 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02153 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12d02156:;
  /* 12d02156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02159 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d0215c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d0215e je 0x12d02210 */
  if (C.zf) goto L_12d02210;
  /* 12d02164 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d02167 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0216a je 0x12d02210 */
  if (C.zf) goto L_12d02210;
  /* 12d02170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02173 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d02176 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02179 jne 0x12d02189 */
  if (!C.zf) goto L_12d02189;
  /* 12d0217b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0217e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02181 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d02184 jmp 0x12d02210 */
  goto L_12d02210;
L_12d02189:;
  /* 12d02189 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0218c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d0218e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d02190 mov edx, dword ptr [0x12d1ec98] */
  EDX = (r32((uint32_t)(0x12d1ec98)));
  /* 12d02196 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d02198 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12d0219c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12d021a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d021a3 je 0x12d021dc */
  if (C.zf) goto L_12d021dc;
  /* 12d021a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d021a8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d021ab jbe 0x12d021dc */
  if ((C.cf||C.zf)) goto L_12d021dc;
  /* 12d021ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d021b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d021b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d021b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d021b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d021b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d021bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d021be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d021c1 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d021c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d021c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d021c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d021cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d021cf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d021d2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d021d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d021d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d021da mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d021dc:;
  /* 12d021dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d021df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d021e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d021e4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d021e6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12d021e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d021eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d021ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d021f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d021f3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d021f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d021f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d021fb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d021fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d02201 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d02203 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d02206 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d02209 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d0220b jmp 0x12d02156 */
  goto L_12d02156;
L_12d02210:;
  /* 12d02210 jmp 0x12d0221b */
  goto L_12d0221b;
L_12d02212:;
  /* 12d02212 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02215 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02218 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d0221b:;
  /* 12d0221b jmp 0x12d01e56 */
  goto L_12d01e56;
L_12d02220:;
  /* 12d02220 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d02224 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d02226 je 0x12d0224c */
  if (C.zf) goto L_12d0224c;
  /* 12d02228 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d0222b push edx */
  push32((uint32_t)(EDX));
  /* 12d0222c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0222f push eax */
  push32((uint32_t)(EAX));
  /* 12d02230 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d02233 push ecx */
  push32((uint32_t)(ECX));
  /* 12d02234 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d02237 push edx */
  push32((uint32_t)(EDX));
  /* 12d02238 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12d0223b push eax */
  push32((uint32_t)(EAX));
  /* 12d0223c call 0x12d01680 */
  push32(0x12d02241u); f_12d01680();
  /* 12d02241 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02244 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d02247 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d0224a jmp 0x12d022c7 */
  goto L_12d022c7;
L_12d0224c:;
  /* 12d0224c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0224f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d02251 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d02253 mov ecx, dword ptr [0x12d1ec98] */
  ECX = (r32((uint32_t)(0x12d1ec98)));
  /* 12d02259 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d0225b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d0225f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12d02265 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d02267 je 0x12d02298 */
  if (C.zf) goto L_12d02298;
  /* 12d02269 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d0226c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d0226e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02271 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d02273 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d02275 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d02278 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d0227a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0227d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d02280 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d02282 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02285 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02288 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d0228b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0228e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d02290 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d02293 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d02296 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12d02298:;
  /* 12d02298 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d0229b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d0229d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d022a0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d022a2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d022a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d022a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d022a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d022ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d022af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d022b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d022b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d022b7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d022ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d022bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d022bf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d022c2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d022c5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d022c7:;
  /* 12d022c7 jmp 0x12d01e56 */
  goto L_12d01e56;
L_12d022cc:;
  /* 12d022cc mov esp, ebp */
  ESP = (EBP);
  /* 12d022ce pop ebp */
  EBP = (pop32());
  /* 12d022cf ret  */
  ESPCHK(0x12d01e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012370 @ 0x12d02370 (650 bytes, 178 insns) */
void f_12d02370(void) {
  FTRACE(0x12d02370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d02370 push ebp */
  push32((uint32_t)(EBP));
  /* 12d02371 mov ebp, esp */
  EBP = (ESP);
  /* 12d02373 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d02379 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0237d jne 0x12d024d9 */
  if (!C.zf) goto L_12d024d9;
  /* 12d02383 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d02386 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12d0238c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12d02392 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d02395 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d0239c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12d023a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d023a8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12d023ae push edx */
  push32((uint32_t)(EDX));
  /* 12d023af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d023b2 push eax */
  push32((uint32_t)(EAX));
  /* 12d023b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d023b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d023b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d023ba push edx */
  push32((uint32_t)(EDX));
  /* 12d023bb call 0x12d03790 */
  push32(0x12d023c0u); f_12d03790();
  /* 12d023c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d023c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d023c6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d023ca jne 0x12d0245f */
  if (!C.zf) goto L_12d0245f;
  /* 12d023d0 call dword ptr [0x12d23348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23348))), 0x12d023d6u);
  /* 12d023d6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d023d9 je 0x12d023e0 */
  if (C.zf) goto L_12d023e0;
  /* 12d023db jmp 0x12d024bd */
  goto L_12d024bd;
L_12d023e0:;
  /* 12d023e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d023e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d023e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d023e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d023e9 push eax */
  push32((uint32_t)(EAX));
  /* 12d023ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d023ed push ecx */
  push32((uint32_t)(ECX));
  /* 12d023ee call 0x12d03790 */
  push32(0x12d023f3u); f_12d03790();
  /* 12d023f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d023f6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12d023fc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02403 jne 0x12d0240a */
  if (!C.zf) goto L_12d0240a;
  /* 12d02405 jmp 0x12d024bd */
  goto L_12d024bd;
L_12d0240a:;
  /* 12d0240a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12d0240c push 0x12d1cc54 */
  push32((uint32_t)(0x12d1cc54u));
  /* 12d02411 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d02413 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12d02419 push edx */
  push32((uint32_t)(EDX));
  /* 12d0241a call 0x12cf41b0 */
  push32(0x12d0241fu); f_12cf41b0();
  /* 12d0241f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02422 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d02425 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02429 jne 0x12d02430 */
  if (!C.zf) goto L_12d02430;
  /* 12d0242b jmp 0x12d024bd */
  goto L_12d024bd;
L_12d02430:;
  /* 12d02430 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d02437 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d02439 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12d0243f push eax */
  push32((uint32_t)(EAX));
  /* 12d02440 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02443 push ecx */
  push32((uint32_t)(ECX));
  /* 12d02444 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d02447 push edx */
  push32((uint32_t)(EDX));
  /* 12d02448 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d0244b push eax */
  push32((uint32_t)(EAX));
  /* 12d0244c call 0x12d03790 */
  push32(0x12d02451u); f_12d03790();
  /* 12d02451 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02454 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d02457 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0245b jne 0x12d0245f */
  if (!C.zf) goto L_12d0245f;
  /* 12d0245d jmp 0x12d024bd */
  goto L_12d024bd;
L_12d0245f:;
  /* 12d0245f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12d02461 push 0x12d1cc54 */
  push32((uint32_t)(0x12d1cc54u));
  /* 12d02466 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d02468 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d0246b push ecx */
  push32((uint32_t)(ECX));
  /* 12d0246c call 0x12cf41b0 */
  push32(0x12d02471u); f_12cf41b0();
  /* 12d02471 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02474 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12d0247a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d0247c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12d02482 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02485 jne 0x12d02489 */
  if (!C.zf) goto L_12d02489;
  /* 12d02487 jmp 0x12d024bd */
  goto L_12d024bd;
L_12d02489:;
  /* 12d02489 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d0248c push ecx */
  push32((uint32_t)(ECX));
  /* 12d0248d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02490 push edx */
  push32((uint32_t)(EDX));
  /* 12d02491 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12d02497 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d02499 push ecx */
  push32((uint32_t)(ECX));
  /* 12d0249a call 0x12cf79d0 */
  push32(0x12d0249fu); f_12cf79d0();
  /* 12d0249f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d024a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d024a6 je 0x12d024b6 */
  if (C.zf) goto L_12d024b6;
  /* 12d024a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d024aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d024ad push edx */
  push32((uint32_t)(EDX));
  /* 12d024ae call 0x12cf4c40 */
  push32(0x12d024b3u); f_12cf4c40();
  /* 12d024b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d024b6:;
  /* 12d024b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d024b8 jmp 0x12d025f6 */
  goto L_12d025f6;
L_12d024bd:;
  /* 12d024bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d024c1 je 0x12d024d1 */
  if (C.zf) goto L_12d024d1;
  /* 12d024c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d024c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d024c8 push eax */
  push32((uint32_t)(EAX));
  /* 12d024c9 call 0x12cf4c40 */
  push32(0x12d024ceu); f_12cf4c40();
  /* 12d024ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d024d1:;
  /* 12d024d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d024d4 jmp 0x12d025f6 */
  goto L_12d025f6;
L_12d024d9:;
  /* 12d024d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d024dd jne 0x12d025f3 */
  if (!C.zf) goto L_12d025f3;
  /* 12d024e3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12d024ed mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d024f0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12d024f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d024f8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12d024fe push edx */
  push32((uint32_t)(EDX));
  /* 12d024ff push 0x12d207a8 */
  push32((uint32_t)(0x12d207a8u));
  /* 12d02504 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d02507 push eax */
  push32((uint32_t)(EAX));
  /* 12d02508 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d0250b push ecx */
  push32((uint32_t)(ECX));
  /* 12d0250c call 0x12d035f0 */
  push32(0x12d02511u); f_12d035f0();
  /* 12d02511 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d02516 jne 0x12d02520 */
  if (!C.zf) goto L_12d02520;
  /* 12d02518 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d0251b jmp 0x12d025f6 */
  goto L_12d025f6;
L_12d02520:;
  /* 12d02520 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d02526 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d02529 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12d02533 jmp 0x12d02544 */
  goto L_12d02544;
L_12d02535:;
  /* 12d02535 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d0253b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0253e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12d02544:;
  /* 12d02544 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0254b jge 0x12d025ef */
  if ((C.sf==C.of)) goto L_12d025ef;
  /* 12d02551 cmp dword ptr [0x12d1eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d1eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02558 jle 0x12d0258b */
  if ((C.zf||C.sf!=C.of)) goto L_12d0258b;
  /* 12d0255a push 4 */
  push32((uint32_t)(0x4u));
  /* 12d0255c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d02562 mov dl, byte ptr [ecx*2 + 0x12d207a8] */
  DL = (r8((uint32_t)(ECX*2 + 0x12d207a8)));
  /* 12d02569 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12d0256f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12d02575 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d0257a push eax */
  push32((uint32_t)(EAX));
  /* 12d0257b call 0x12cfa1c0 */
  push32(0x12d02580u); f_12cfa1c0();
  /* 12d02580 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02583 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12d02589 jmp 0x12d025be */
  goto L_12d025be;
L_12d0258b:;
  /* 12d0258b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12d02591 mov dl, byte ptr [ecx*2 + 0x12d207a8] */
  DL = (r8((uint32_t)(ECX*2 + 0x12d207a8)));
  /* 12d02598 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12d0259e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12d025a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d025a9 mov ecx, dword ptr [0x12d1ec98] */
  ECX = (r32((uint32_t)(0x12d1ec98)));
  /* 12d025af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d025b1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d025b5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d025b8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12d025be:;
  /* 12d025be cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d025c5 je 0x12d025e8 */
  if (C.zf) goto L_12d025e8;
  /* 12d025c7 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d025cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d025d0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d025d3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12d025da lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12d025de mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12d025e4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d025e6 jmp 0x12d025ea */
  goto L_12d025ea;
L_12d025e8:;
  /* 12d025e8 jmp 0x12d025ef */
  goto L_12d025ef;
L_12d025ea:;
  /* 12d025ea jmp 0x12d02535 */
  goto L_12d02535;
L_12d025ef:;
  /* 12d025ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d025f1 jmp 0x12d025f6 */
  goto L_12d025f6;
L_12d025f3:;
  /* 12d025f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d025f6:;
  /* 12d025f6 mov esp, ebp */
  ESP = (EBP);
  /* 12d025f8 pop ebp */
  EBP = (pop32());
  /* 12d025f9 ret  */
  ESPCHK(0x12d02370u, _esp0);
  ESP += 4; return;
}

/* FUN_10012600 @ 0x12d02600 (10 bytes, 5 insns) */
void f_12d02600(void) {
  FTRACE(0x12d02600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d02600 push ebp */
  push32((uint32_t)(EBP));
  /* 12d02601 mov ebp, esp */
  EBP = (ESP);
  /* 12d02603 mov eax, dword ptr [0x12d1fd88] */
  EAX = (r32((uint32_t)(0x12d1fd88)));
  /* 12d02608 pop ebp */
  EBP = (pop32());
  /* 12d02609 ret  */
  ESPCHK(0x12d02600u, _esp0);
  ESP += 4; return;
}

/* FUN_10012610 @ 0x12d02610 (575 bytes, 196 insns) */
void f_12d02610(void) {
  FTRACE(0x12d02610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d02610 push ebp */
  push32((uint32_t)(EBP));
  /* 12d02611 mov ebp, esp */
  EBP = (ESP);
  /* 12d02613 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d02615 push 0x12d1cc60 */
  push32((uint32_t)(0x12d1cc60u));
  /* 12d0261a push 0x12cfd2b8 */
  push32((uint32_t)(0x12cfd2b8u));
  /* 12d0261f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d02625 push eax */
  push32((uint32_t)(EAX));
  /* 12d02626 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d0262d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02630 push ebx */
  push32((uint32_t)(EBX));
  /* 12d02631 push esi */
  push32((uint32_t)(ESI));
  /* 12d02632 push edi */
  push32((uint32_t)(EDI));
  /* 12d02633 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d02636 cmp dword ptr [0x12d207b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d207b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0263d jne 0x12d0268e */
  if (!C.zf) goto L_12d0268e;
  /* 12d0263f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12d02642 push eax */
  push32((uint32_t)(EAX));
  /* 12d02643 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d02645 push 0x12d1c394 */
  push32((uint32_t)(0x12d1c394u));
  /* 12d0264a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d0264c call dword ptr [0x12d232cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232cc))), 0x12d02652u);
  /* 12d02652 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d02654 je 0x12d02662 */
  if (C.zf) goto L_12d02662;
  /* 12d02656 mov dword ptr [0x12d207b4], 1 */
  w32((uint32_t)(0x12d207b4), (0x1u));
  /* 12d02660 jmp 0x12d0268e */
  goto L_12d0268e;
L_12d02662:;
  /* 12d02662 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12d02665 push ecx */
  push32((uint32_t)(ECX));
  /* 12d02666 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d02668 push 0x12d1c390 */
  push32((uint32_t)(0x12d1c390u));
  /* 12d0266d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d0266f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d02671 call dword ptr [0x12d232d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232d0))), 0x12d02677u);
  /* 12d02677 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d02679 je 0x12d02687 */
  if (C.zf) goto L_12d02687;
  /* 12d0267b mov dword ptr [0x12d207b4], 2 */
  w32((uint32_t)(0x12d207b4), (0x2u));
  /* 12d02685 jmp 0x12d0268e */
  goto L_12d0268e;
L_12d02687:;
  /* 12d02687 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d02689 jmp 0x12d02869 */
  goto L_12d02869;
L_12d0268e:;
  /* 12d0268e cmp dword ptr [0x12d207b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d207b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02695 jne 0x12d026b2 */
  if (!C.zf) goto L_12d026b2;
  /* 12d02697 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0269a push edx */
  push32((uint32_t)(EDX));
  /* 12d0269b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d0269e push eax */
  push32((uint32_t)(EAX));
  /* 12d0269f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d026a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d026a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d026a6 push edx */
  push32((uint32_t)(EDX));
  /* 12d026a7 call dword ptr [0x12d232cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232cc))), 0x12d026adu);
  /* 12d026ad jmp 0x12d02869 */
  goto L_12d02869;
L_12d026b2:;
  /* 12d026b2 cmp dword ptr [0x12d207b4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d207b4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d026b9 jne 0x12d02867 */
  if (!C.zf) goto L_12d02867;
  /* 12d026bf cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d026c3 jne 0x12d026cd */
  if (!C.zf) goto L_12d026cd;
  /* 12d026c5 mov eax, dword ptr [0x12d20728] */
  EAX = (r32((uint32_t)(0x12d20728)));
  /* 12d026ca mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12d026cd:;
  /* 12d026cd push 0 */
  push32((uint32_t)(0x0u));
  /* 12d026cf push 0 */
  push32((uint32_t)(0x0u));
  /* 12d026d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d026d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d026d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d026d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d026d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d026dc push edx */
  push32((uint32_t)(EDX));
  /* 12d026dd push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d026e2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d026e5 push eax */
  push32((uint32_t)(EAX));
  /* 12d026e6 call dword ptr [0x12d23370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23370))), 0x12d026ecu);
  /* 12d026ec mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d026ef cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d026f3 jne 0x12d026fc */
  if (!C.zf) goto L_12d026fc;
  /* 12d026f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d026f7 jmp 0x12d02869 */
  goto L_12d02869;
L_12d026fc:;
  /* 12d026fc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d02703 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d02706 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02709 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d0270b call 0x12cf7350 */
  push32(0x12d02710u); f_12cf7350();
  /* 12d02710 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12d02713 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d02716 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d02719 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d0271c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d0271f push edx */
  push32((uint32_t)(EDX));
  /* 12d02720 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d02722 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d02725 push eax */
  push32((uint32_t)(EAX));
  /* 12d02726 call 0x12cf7f20 */
  push32(0x12d0272bu); f_12cf7f20();
  /* 12d0272b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0272e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d02735 jmp 0x12d0274e */
  goto L_12d0274e;
  /* 12d02737 mov eax, 1 */
  EAX = (0x1u);
  /* 12d0273c ret  */
  ESPCHK(0x12d02610u, _esp0);
  ESP += 4; return;
  /* 12d0273d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d02740 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12d02747 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d0274e:;
  /* 12d0274e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02752 jne 0x12d0275b */
  if (!C.zf) goto L_12d0275b;
  /* 12d02754 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d02756 jmp 0x12d02869 */
  goto L_12d02869;
L_12d0275b:;
  /* 12d0275b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d0275d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d0275f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d02762 push ecx */
  push32((uint32_t)(ECX));
  /* 12d02763 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d02766 push edx */
  push32((uint32_t)(EDX));
  /* 12d02767 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d0276a push eax */
  push32((uint32_t)(EAX));
  /* 12d0276b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d0276e push ecx */
  push32((uint32_t)(ECX));
  /* 12d0276f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d02774 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d02777 push edx */
  push32((uint32_t)(EDX));
  /* 12d02778 call dword ptr [0x12d23370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23370))), 0x12d0277eu);
  /* 12d0277e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d02780 jne 0x12d02789 */
  if (!C.zf) goto L_12d02789;
  /* 12d02782 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d02784 jmp 0x12d02869 */
  goto L_12d02869;
L_12d02789:;
  /* 12d02789 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d02790 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d02793 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12d02797 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0279a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d0279c call 0x12cf7350 */
  push32(0x12d027a1u); f_12cf7350();
  /* 12d027a1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12d027a4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d027a7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12d027aa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d027ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d027b4 jmp 0x12d027cd */
  goto L_12d027cd;
  /* 12d027b6 mov eax, 1 */
  EAX = (0x1u);
  /* 12d027bb ret  */
  ESPCHK(0x12d02610u, _esp0);
  ESP += 4; return;
  /* 12d027bc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d027bf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d027c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d027cd:;
  /* 12d027cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d027d1 jne 0x12d027da */
  if (!C.zf) goto L_12d027da;
  /* 12d027d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d027d5 jmp 0x12d02869 */
  goto L_12d02869;
L_12d027da:;
  /* 12d027da cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d027de jne 0x12d027e9 */
  if (!C.zf) goto L_12d027e9;
  /* 12d027e0 mov edx, dword ptr [0x12d20718] */
  EDX = (r32((uint32_t)(0x12d20718)));
  /* 12d027e6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12d027e9:;
  /* 12d027e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d027ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d027ef mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12d027f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d027f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d027fb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12d02802 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d02805 push ecx */
  push32((uint32_t)(ECX));
  /* 12d02806 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d02809 push edx */
  push32((uint32_t)(EDX));
  /* 12d0280a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d0280d push eax */
  push32((uint32_t)(EAX));
  /* 12d0280e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02811 push ecx */
  push32((uint32_t)(ECX));
  /* 12d02812 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d02815 push edx */
  push32((uint32_t)(EDX));
  /* 12d02816 call dword ptr [0x12d232d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232d0))), 0x12d0281cu);
  /* 12d0281c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d0281f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d02822 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d02825 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d02827 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12d0282c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02832 je 0x12d02848 */
  if (C.zf) goto L_12d02848;
  /* 12d02834 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d02837 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d0283a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d0283c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d02840 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02846 je 0x12d0284c */
  if (C.zf) goto L_12d0284c;
L_12d02848:;
  /* 12d02848 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d0284a jmp 0x12d02869 */
  goto L_12d02869;
L_12d0284c:;
  /* 12d0284c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d0284f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d02851 push eax */
  push32((uint32_t)(EAX));
  /* 12d02852 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d02855 push ecx */
  push32((uint32_t)(ECX));
  /* 12d02856 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d02859 push edx */
  push32((uint32_t)(EDX));
  /* 12d0285a call 0x12cfc0a0 */
  push32(0x12d0285fu); f_12cfc0a0();
  /* 12d0285f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02862 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d02865 jmp 0x12d02869 */
  goto L_12d02869;
L_12d02867:;
  /* 12d02867 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d02869:;
  /* 12d02869 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12d0286c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d0286f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d02876 pop edi */
  EDI = (pop32());
  /* 12d02877 pop esi */
  ESI = (pop32());
  /* 12d02878 pop ebx */
  EBX = (pop32());
  /* 12d02879 mov esp, ebp */
  ESP = (EBP);
  /* 12d0287b pop ebp */
  EBP = (pop32());
  /* 12d0287c ret  */
  ESPCHK(0x12d02610u, _esp0);
  ESP += 4; return;
}

/* FUN_10012880 @ 0x12d02880 (208 bytes, 85 insns) */
void f_12d02880(void) {
  FTRACE(0x12d02880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d02880 push ebp */
  push32((uint32_t)(EBP));
  /* 12d02881 mov ebp, esp */
  EBP = (ESP);
  /* 12d02883 push edi */
  push32((uint32_t)(EDI));
  /* 12d02884 push esi */
  push32((uint32_t)(ESI));
  /* 12d02885 push ebx */
  push32((uint32_t)(EBX));
  /* 12d02886 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d02889 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0288c lea eax, [0x12d20710] */
  EAX = ((uint32_t)(0x12d20710));
  /* 12d02892 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02896 jne 0x12d028d3 */
  if (!C.zf) goto L_12d028d3;
  /* 12d02898 mov al, 0xff */
  AL = (0xffu);
  /* 12d0289a mov edi, edi */
  EDI = (EDI);
L_12d0289c:;
  /* 12d0289c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d0289e je 0x12d028ce */
  if (C.zf) goto L_12d028ce;
  /* 12d028a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d028a2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d028a3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12d028a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d028a6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d028a8 je 0x12d0289c */
  if (C.zf) goto L_12d0289c;
  /* 12d028aa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d028ac cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d028ae sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d028b0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12d028b3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d028b5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d028b7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12d028b9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d028bb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d028bd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d028bf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12d028c2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d028c4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d028c6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d028c8 je 0x12d0289c */
  if (C.zf) goto L_12d0289c;
  /* 12d028ca sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12d028cc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12d028ce:;
  /* 12d028ce movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12d028d1 jmp 0x12d0294b */
  goto L_12d0294b;
L_12d028d3:;
  /* 12d028d3 lock inc dword ptr [0x12d208a4] */
  x86_unimpl("lock inc @ 0x12d028d3");
  /* 12d028da cmp dword ptr [0x12d20894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d028e1 jg 0x12d028e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d028e7;
  /* 12d028e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d028e5 jmp 0x12d028fc */
  goto L_12d028fc;
L_12d028e7:;
  /* 12d028e7 lock dec dword ptr [0x12d208a4] */
  x86_unimpl("lock dec @ 0x12d028e7");
  /* 12d028ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d028f0 call 0x12cf7bb0 */
  push32(0x12d028f5u); f_12cf7bb0();
  /* 12d028f5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12d028fc:;
  /* 12d028fc mov eax, 0xff */
  EAX = (0xffu);
  /* 12d02901 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12d02903 nop  */
  /* nop */
L_12d02904:;
  /* 12d02904 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d02906 je 0x12d0292f */
  if (C.zf) goto L_12d0292f;
  /* 12d02908 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d0290a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d0290b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12d0290d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d0290e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d02910 je 0x12d02904 */
  if (C.zf) goto L_12d02904;
  /* 12d02912 push eax */
  push32((uint32_t)(EAX));
  /* 12d02913 push ebx */
  push32((uint32_t)(EBX));
  /* 12d02914 call 0x12d039f0 */
  push32(0x12d02919u); f_12d039f0();
  /* 12d02919 mov ebx, eax */
  EBX = (EAX);
  /* 12d0291b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0291e call 0x12d039f0 */
  push32(0x12d02923u); f_12d039f0();
  /* 12d02923 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02926 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d02928 je 0x12d02904 */
  if (C.zf) goto L_12d02904;
  /* 12d0292a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d0292c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12d0292f:;
  /* 12d0292f mov ebx, eax */
  EBX = (EAX);
  /* 12d02931 pop eax */
  EAX = (pop32());
  /* 12d02932 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d02934 jne 0x12d0293f */
  if (!C.zf) goto L_12d0293f;
  /* 12d02936 lock dec dword ptr [0x12d208a4] */
  x86_unimpl("lock dec @ 0x12d02936");
  /* 12d0293d jmp 0x12d02949 */
  goto L_12d02949;
L_12d0293f:;
  /* 12d0293f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d02941 call 0x12cf7c50 */
  push32(0x12d02946u); f_12cf7c50();
  /* 12d02946 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d02949:;
  /* 12d02949 mov eax, ebx */
  EAX = (EBX);
L_12d0294b:;
  /* 12d0294b pop ebx */
  EBX = (pop32());
  /* 12d0294c pop esi */
  ESI = (pop32());
  /* 12d0294d pop edi */
  EDI = (pop32());
  /* 12d0294e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d0294f ret  */
  ESPCHK(0x12d02880u, _esp0);
  ESP += 4; return;
}

/* FUN_10012950 @ 0x12d02950 (257 bytes, 103 insns) */
void f_12d02950(void) {
  FTRACE(0x12d02950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d02950 push ebp */
  push32((uint32_t)(EBP));
  /* 12d02951 mov ebp, esp */
  EBP = (ESP);
  /* 12d02953 push edi */
  push32((uint32_t)(EDI));
  /* 12d02954 push esi */
  push32((uint32_t)(ESI));
  /* 12d02955 push ebx */
  push32((uint32_t)(EBX));
  /* 12d02956 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d02959 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d0295b je 0x12d02a4a */
  if (C.zf) goto L_12d02a4a;
  /* 12d02961 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02964 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d02967 lea eax, [0x12d20710] */
  EAX = ((uint32_t)(0x12d20710));
  /* 12d0296d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02971 jne 0x12d029c1 */
  if (!C.zf) goto L_12d029c1;
  /* 12d02973 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12d02975 mov bl, 0x5a */
  BL = (0x5au);
  /* 12d02977 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12d02979 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12d0297c:;
  /* 12d0297c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12d0297e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12d02980 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12d02982 je 0x12d029a5 */
  if (C.zf) goto L_12d029a5;
  /* 12d02984 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12d02986 je 0x12d029a5 */
  if (C.zf) goto L_12d029a5;
  /* 12d02988 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d02989 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d0298a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d0298c jb 0x12d02994 */
  if (C.cf) goto L_12d02994;
  /* 12d0298e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d02990 ja 0x12d02994 */
  if ((!C.cf&&!C.zf)) goto L_12d02994;
  /* 12d02992 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12d02994:;
  /* 12d02994 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d02996 jb 0x12d0299e */
  if (C.cf) goto L_12d0299e;
  /* 12d02998 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d0299a ja 0x12d0299e */
  if ((!C.cf&&!C.zf)) goto L_12d0299e;
  /* 12d0299c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12d0299e:;
  /* 12d0299e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d029a0 jne 0x12d029af */
  if (!C.zf) goto L_12d029af;
  /* 12d029a2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d029a3 jne 0x12d0297c */
  if (!C.zf) goto L_12d0297c;
L_12d029a5:;
  /* 12d029a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d029a7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d029a9 je 0x12d02a4a */
  if (C.zf) goto L_12d02a4a;
L_12d029af:;
  /* 12d029af mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12d029b4 jb 0x12d02a4a */
  if (C.cf) goto L_12d02a4a;
  /* 12d029ba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d029bc jmp 0x12d02a4a */
  goto L_12d02a4a;
L_12d029c1:;
  /* 12d029c1 lock inc dword ptr [0x12d208a4] */
  x86_unimpl("lock inc @ 0x12d029c1");
  /* 12d029c8 cmp dword ptr [0x12d20894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d029cf jg 0x12d029d5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d029d5;
  /* 12d029d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d029d3 jmp 0x12d029ee */
  goto L_12d029ee;
L_12d029d5:;
  /* 12d029d5 lock dec dword ptr [0x12d208a4] */
  x86_unimpl("lock dec @ 0x12d029d5");
  /* 12d029dc mov ebx, ecx */
  EBX = (ECX);
  /* 12d029de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d029e0 call 0x12cf7bb0 */
  push32(0x12d029e5u); f_12cf7bb0();
  /* 12d029e5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12d029ec mov ecx, ebx */
  ECX = (EBX);
L_12d029ee:;
  /* 12d029ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d029f0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12d029f2 mov edi, edi */
  EDI = (EDI);
L_12d029f4:;
  /* 12d029f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d029f6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d029f8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12d029fa je 0x12d02a1f */
  if (C.zf) goto L_12d02a1f;
  /* 12d029fc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12d029fe je 0x12d02a1f */
  if (C.zf) goto L_12d02a1f;
  /* 12d02a00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d02a01 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d02a02 push ecx */
  push32((uint32_t)(ECX));
  /* 12d02a03 push eax */
  push32((uint32_t)(EAX));
  /* 12d02a04 push ebx */
  push32((uint32_t)(EBX));
  /* 12d02a05 call 0x12d039f0 */
  push32(0x12d02a0au); f_12d039f0();
  /* 12d02a0a mov ebx, eax */
  EBX = (EAX);
  /* 12d02a0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02a0f call 0x12d039f0 */
  push32(0x12d02a14u); f_12d039f0();
  /* 12d02a14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02a17 pop ecx */
  ECX = (pop32());
  /* 12d02a18 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02a1a jne 0x12d02a25 */
  if (!C.zf) goto L_12d02a25;
  /* 12d02a1c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d02a1d jne 0x12d029f4 */
  if (!C.zf) goto L_12d029f4;
L_12d02a1f:;
  /* 12d02a1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d02a21 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02a23 je 0x12d02a2e */
  if (C.zf) goto L_12d02a2e;
L_12d02a25:;
  /* 12d02a25 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12d02a2a jb 0x12d02a2e */
  if (C.cf) goto L_12d02a2e;
  /* 12d02a2c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12d02a2e:;
  /* 12d02a2e pop eax */
  EAX = (pop32());
  /* 12d02a2f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d02a31 jne 0x12d02a3c */
  if (!C.zf) goto L_12d02a3c;
  /* 12d02a33 lock dec dword ptr [0x12d208a4] */
  x86_unimpl("lock dec @ 0x12d02a33");
  /* 12d02a3a jmp 0x12d02a4a */
  goto L_12d02a4a;
L_12d02a3c:;
  /* 12d02a3c mov ebx, ecx */
  EBX = (ECX);
  /* 12d02a3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d02a40 call 0x12cf7c50 */
  push32(0x12d02a45u); f_12cf7c50();
  /* 12d02a45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02a48 mov ecx, ebx */
  ECX = (EBX);
L_12d02a4a:;
  /* 12d02a4a mov eax, ecx */
  EAX = (ECX);
  /* 12d02a4c pop ebx */
  EBX = (pop32());
  /* 12d02a4d pop esi */
  ESI = (pop32());
  /* 12d02a4e pop edi */
  EDI = (pop32());
  /* 12d02a4f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12d02a50 ret  */
  ESPCHK(0x12d02950u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a60 @ 0x12d02a60 (255 bytes, 88 insns) */
void f_12d02a60(void) {
  FTRACE(0x12d02a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d02a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d02a61 mov ebp, esp */
  EBP = (ESP);
  /* 12d02a63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12d02a66:;
  /* 12d02a66 cmp dword ptr [0x12d1eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d1eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02a6d jle 0x12d02a86 */
  if ((C.zf||C.sf!=C.of)) goto L_12d02a86;
  /* 12d02a6f push 8 */
  push32((uint32_t)(0x8u));
  /* 12d02a71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02a74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d02a76 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d02a78 push ecx */
  push32((uint32_t)(ECX));
  /* 12d02a79 call 0x12cfa1c0 */
  push32(0x12d02a7eu); f_12cfa1c0();
  /* 12d02a7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02a81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d02a84 jmp 0x12d02a9f */
  goto L_12d02a9f;
L_12d02a86:;
  /* 12d02a86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02a89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d02a8b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d02a8d mov ecx, dword ptr [0x12d1ec98] */
  ECX = (r32((uint32_t)(0x12d1ec98)));
  /* 12d02a93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d02a95 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d02a99 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12d02a9c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d02a9f:;
  /* 12d02a9f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02aa3 je 0x12d02ab0 */
  if (C.zf) goto L_12d02ab0;
  /* 12d02aa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02aa8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02aab mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d02aae jmp 0x12d02a66 */
  goto L_12d02a66;
L_12d02ab0:;
  /* 12d02ab0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02ab3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d02ab5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d02ab7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d02aba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02abd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02ac0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d02ac3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d02ac6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d02ac9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02acd je 0x12d02ad5 */
  if (C.zf) goto L_12d02ad5;
  /* 12d02acf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02ad3 jne 0x12d02ae8 */
  if (!C.zf) goto L_12d02ae8;
L_12d02ad5:;
  /* 12d02ad5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02ad8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d02ada mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d02adc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d02adf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02ae2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02ae5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12d02ae8:;
  /* 12d02ae8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d02aef:;
  /* 12d02aef cmp dword ptr [0x12d1eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d1eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02af6 jle 0x12d02b0b */
  if ((C.zf||C.sf!=C.of)) goto L_12d02b0b;
  /* 12d02af8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d02afa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d02afd push edx */
  push32((uint32_t)(EDX));
  /* 12d02afe call 0x12cfa1c0 */
  push32(0x12d02b03u); f_12cfa1c0();
  /* 12d02b03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02b06 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d02b09 jmp 0x12d02b20 */
  goto L_12d02b20;
L_12d02b0b:;
  /* 12d02b0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d02b0e mov ecx, dword ptr [0x12d1ec98] */
  ECX = (r32((uint32_t)(0x12d1ec98)));
  /* 12d02b14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d02b16 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d02b1a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d02b1d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12d02b20:;
  /* 12d02b20 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02b24 je 0x12d02b4b */
  if (C.zf) goto L_12d02b4b;
  /* 12d02b26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d02b29 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d02b2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d02b2f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12d02b33 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d02b36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02b39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d02b3b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d02b3d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d02b40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02b43 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02b46 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d02b49 jmp 0x12d02aef */
  goto L_12d02aef;
L_12d02b4b:;
  /* 12d02b4b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02b4f jne 0x12d02b58 */
  if (!C.zf) goto L_12d02b58;
  /* 12d02b51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d02b54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d02b56 jmp 0x12d02b5b */
  goto L_12d02b5b;
L_12d02b58:;
  /* 12d02b58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d02b5b:;
  /* 12d02b5b mov esp, ebp */
  ESP = (EBP);
  /* 12d02b5d pop ebp */
  EBP = (pop32());
  /* 12d02b5e ret  */
  ESPCHK(0x12d02a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b60 @ 0x12d02b60 (17 bytes, 8 insns) */
void f_12d02b60(void) {
  FTRACE(0x12d02b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d02b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d02b61 mov ebp, esp */
  EBP = (ESP);
  /* 12d02b63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02b66 push eax */
  push32((uint32_t)(EAX));
  /* 12d02b67 call 0x12d02a60 */
  push32(0x12d02b6cu); f_12d02a60();
  /* 12d02b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02b6f pop ebp */
  EBP = (pop32());
  /* 12d02b70 ret  */
  ESPCHK(0x12d02b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b80 @ 0x12d02b80 (297 bytes, 106 insns) */
void f_12d02b80(void) {
  FTRACE(0x12d02b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d02b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12d02b81 mov ebp, esp */
  EBP = (ESP);
  /* 12d02b83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d02b86 push esi */
  push32((uint32_t)(ESI));
L_12d02b87:;
  /* 12d02b87 cmp dword ptr [0x12d1eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d1eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02b8e jle 0x12d02ba7 */
  if ((C.zf||C.sf!=C.of)) goto L_12d02ba7;
  /* 12d02b90 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d02b92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02b95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d02b97 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d02b99 push ecx */
  push32((uint32_t)(ECX));
  /* 12d02b9a call 0x12cfa1c0 */
  push32(0x12d02b9fu); f_12cfa1c0();
  /* 12d02b9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02ba2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d02ba5 jmp 0x12d02bc0 */
  goto L_12d02bc0;
L_12d02ba7:;
  /* 12d02ba7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d02bac mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d02bae mov ecx, dword ptr [0x12d1ec98] */
  ECX = (r32((uint32_t)(0x12d1ec98)));
  /* 12d02bb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d02bb6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d02bba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12d02bbd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12d02bc0:;
  /* 12d02bc0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02bc4 je 0x12d02bd1 */
  if (C.zf) goto L_12d02bd1;
  /* 12d02bc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02bc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02bcc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d02bcf jmp 0x12d02b87 */
  goto L_12d02b87;
L_12d02bd1:;
  /* 12d02bd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02bd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d02bd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d02bd8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d02bdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02bde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02be1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d02be4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d02be7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d02bea cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02bee je 0x12d02bf6 */
  if (C.zf) goto L_12d02bf6;
  /* 12d02bf0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02bf4 jne 0x12d02c09 */
  if (!C.zf) goto L_12d02c09;
L_12d02bf6:;
  /* 12d02bf6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02bf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d02bfb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d02bfd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d02c00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02c03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02c06 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12d02c09:;
  /* 12d02c09 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d02c10 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d02c17:;
  /* 12d02c17 cmp dword ptr [0x12d1eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d1eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02c1e jle 0x12d02c33 */
  if ((C.zf||C.sf!=C.of)) goto L_12d02c33;
  /* 12d02c20 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d02c22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d02c25 push edx */
  push32((uint32_t)(EDX));
  /* 12d02c26 call 0x12cfa1c0 */
  push32(0x12d02c2bu); f_12cfa1c0();
  /* 12d02c2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02c2e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d02c31 jmp 0x12d02c48 */
  goto L_12d02c48;
L_12d02c33:;
  /* 12d02c33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d02c36 mov ecx, dword ptr [0x12d1ec98] */
  ECX = (r32((uint32_t)(0x12d1ec98)));
  /* 12d02c3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d02c3e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12d02c42 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d02c45 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12d02c48:;
  /* 12d02c48 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02c4c je 0x12d02c89 */
  if (C.zf) goto L_12d02c89;
  /* 12d02c4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d02c50 push 0xa */
  push32((uint32_t)(0xau));
  /* 12d02c52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d02c55 push eax */
  push32((uint32_t)(EAX));
  /* 12d02c56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02c59 push ecx */
  push32((uint32_t)(ECX));
  /* 12d02c5a call 0x12d03b20 */
  push32(0x12d02c5fu); f_12d03b20();
  /* 12d02c5f mov ecx, eax */
  ECX = (EAX);
  /* 12d02c61 mov esi, edx */
  ESI = (EDX);
  /* 12d02c63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d02c66 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d02c69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d02c6a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02c6c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02c6e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d02c71 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12d02c74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02c77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d02c79 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d02c7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d02c7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d02c81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02c84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d02c87 jmp 0x12d02c17 */
  goto L_12d02c17;
L_12d02c89:;
  /* 12d02c89 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02c8d jne 0x12d02c9e */
  if (!C.zf) goto L_12d02c9e;
  /* 12d02c8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02c92 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d02c94 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d02c97 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02c9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d02c9c jmp 0x12d02ca4 */
  goto L_12d02ca4;
L_12d02c9e:;
  /* 12d02c9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02ca1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12d02ca4:;
  /* 12d02ca4 pop esi */
  ESI = (pop32());
  /* 12d02ca5 mov esp, ebp */
  ESP = (EBP);
  /* 12d02ca7 pop ebp */
  EBP = (pop32());
  /* 12d02ca8 ret  */
  ESPCHK(0x12d02b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cb0 @ 0x12d02cb0 (61 bytes, 18 insns) */
void f_12d02cb0(void) {
  FTRACE(0x12d02cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d02cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d02cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d02cb3 cmp dword ptr [0x12d20870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02cba jne 0x12d02ceb */
  if (!C.zf) goto L_12d02ceb;
  /* 12d02cbc push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d02cbe call 0x12cf7bb0 */
  push32(0x12d02cc3u); f_12cf7bb0();
  /* 12d02cc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02cc6 cmp dword ptr [0x12d20870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02ccd jne 0x12d02ce1 */
  if (!C.zf) goto L_12d02ce1;
  /* 12d02ccf call 0x12d02d10 */
  push32(0x12d02cd4u); f_12d02d10();
  /* 12d02cd4 mov eax, dword ptr [0x12d20870] */
  EAX = (r32((uint32_t)(0x12d20870)));
  /* 12d02cd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02cdc mov dword ptr [0x12d20870], eax */
  w32((uint32_t)(0x12d20870), (EAX));
L_12d02ce1:;
  /* 12d02ce1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d02ce3 call 0x12cf7c50 */
  push32(0x12d02ce8u); f_12cf7c50();
  /* 12d02ce8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d02ceb:;
  /* 12d02ceb pop ebp */
  EBP = (pop32());
  /* 12d02cec ret  */
  ESPCHK(0x12d02cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cf0 @ 0x12d02cf0 (30 bytes, 11 insns) */
void f_12d02cf0(void) {
  FTRACE(0x12d02cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d02cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d02cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12d02cf3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d02cf5 call 0x12cf7bb0 */
  push32(0x12d02cfau); f_12cf7bb0();
  /* 12d02cfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02cfd call 0x12d02d10 */
  push32(0x12d02d02u); f_12d02d10();
  /* 12d02d02 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d02d04 call 0x12cf7c50 */
  push32(0x12d02d09u); f_12cf7c50();
  /* 12d02d09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02d0c pop ebp */
  EBP = (pop32());
  /* 12d02d0d ret  */
  ESPCHK(0x12d02cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d10 @ 0x12d02d10 (939 bytes, 266 insns) */
void f_12d02d10(void) {
  FTRACE(0x12d02d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d02d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d02d11 mov ebp, esp */
  EBP = (ESP);
  /* 12d02d13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d02d16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d02d1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d02d1f call 0x12cf7bb0 */
  push32(0x12d02d24u); f_12cf7bb0();
  /* 12d02d24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02d27 mov dword ptr [0x12d207b8], 0 */
  w32((uint32_t)(0x12d207b8), (0x0u));
  /* 12d02d31 mov dword ptr [0x12d1fe38], 0xffffffff */
  w32((uint32_t)(0x12d1fe38), (0xffffffffu));
  /* 12d02d3b mov eax, dword ptr [0x12d1fe38] */
  EAX = (r32((uint32_t)(0x12d1fe38)));
  /* 12d02d40 mov dword ptr [0x12d1fe28], eax */
  w32((uint32_t)(0x12d1fe28), (EAX));
  /* 12d02d45 push 0x12d1ccc0 */
  push32((uint32_t)(0x12d1ccc0u));
  /* 12d02d4a call 0x12d03b90 */
  push32(0x12d02d4fu); f_12d03b90();
  /* 12d02d4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02d52 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d02d55 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02d59 jne 0x12d02e93 */
  if (!C.zf) goto L_12d02e93;
  /* 12d02d5f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d02d61 call 0x12cf7c50 */
  push32(0x12d02d66u); f_12cf7c50();
  /* 12d02d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02d69 push 0x12d207c0 */
  push32((uint32_t)(0x12d207c0u));
  /* 12d02d6e call dword ptr [0x12d23290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23290))), 0x12d02d74u);
  /* 12d02d74 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02d77 je 0x12d02e8e */
  if (C.zf) goto L_12d02e8e;
  /* 12d02d7d mov dword ptr [0x12d207b8], 1 */
  w32((uint32_t)(0x12d207b8), (0x1u));
  /* 12d02d87 mov ecx, dword ptr [0x12d207c0] */
  ECX = (r32((uint32_t)(0x12d207c0)));
  /* 12d02d8d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d02d90 mov dword ptr [0x12d1fd90], ecx */
  w32((uint32_t)(0x12d1fd90), (ECX));
  /* 12d02d96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d02d98 mov dx, word ptr [0x12d20806] */
  DX = (r16((uint32_t)(0x12d20806)));
  /* 12d02d9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d02da1 je 0x12d02db9 */
  if (C.zf) goto L_12d02db9;
  /* 12d02da3 mov eax, dword ptr [0x12d20814] */
  EAX = (r32((uint32_t)(0x12d20814)));
  /* 12d02da8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d02dab mov ecx, dword ptr [0x12d1fd90] */
  ECX = (r32((uint32_t)(0x12d1fd90)));
  /* 12d02db1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02db3 mov dword ptr [0x12d1fd90], ecx */
  w32((uint32_t)(0x12d1fd90), (ECX));
L_12d02db9:;
  /* 12d02db9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d02dbb mov dx, word ptr [0x12d2085a] */
  DX = (r16((uint32_t)(0x12d2085a)));
  /* 12d02dc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d02dc4 je 0x12d02dee */
  if (C.zf) goto L_12d02dee;
  /* 12d02dc6 cmp dword ptr [0x12d20868], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20868))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02dcd je 0x12d02dee */
  if (C.zf) goto L_12d02dee;
  /* 12d02dcf mov dword ptr [0x12d1fd94], 1 */
  w32((uint32_t)(0x12d1fd94), (0x1u));
  /* 12d02dd9 mov eax, dword ptr [0x12d20868] */
  EAX = (r32((uint32_t)(0x12d20868)));
  /* 12d02dde sub eax, dword ptr [0x12d20814] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d20814))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d02de4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d02de7 mov dword ptr [0x12d1fd98], eax */
  w32((uint32_t)(0x12d1fd98), (EAX));
  /* 12d02dec jmp 0x12d02e02 */
  goto L_12d02e02;
L_12d02dee:;
  /* 12d02dee mov dword ptr [0x12d1fd94], 0 */
  w32((uint32_t)(0x12d1fd94), (0x0u));
  /* 12d02df8 mov dword ptr [0x12d1fd98], 0 */
  w32((uint32_t)(0x12d1fd98), (0x0u));
L_12d02e02:;
  /* 12d02e02 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12d02e05 push ecx */
  push32((uint32_t)(ECX));
  /* 12d02e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d02e08 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12d02e0a mov edx, dword ptr [0x12d1fe1c] */
  EDX = (r32((uint32_t)(0x12d1fe1c)));
  /* 12d02e10 push edx */
  push32((uint32_t)(EDX));
  /* 12d02e11 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d02e13 push 0x12d207c4 */
  push32((uint32_t)(0x12d207c4u));
  /* 12d02e18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d02e1d mov eax, dword ptr [0x12d20728] */
  EAX = (r32((uint32_t)(0x12d20728)));
  /* 12d02e22 push eax */
  push32((uint32_t)(EAX));
  /* 12d02e23 call dword ptr [0x12d23370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23370))), 0x12d02e29u);
  /* 12d02e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d02e2b je 0x12d02e3f */
  if (C.zf) goto L_12d02e3f;
  /* 12d02e2d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02e31 jne 0x12d02e3f */
  if (!C.zf) goto L_12d02e3f;
  /* 12d02e33 mov ecx, dword ptr [0x12d1fe1c] */
  ECX = (r32((uint32_t)(0x12d1fe1c)));
  /* 12d02e39 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12d02e3d jmp 0x12d02e48 */
  goto L_12d02e48;
L_12d02e3f:;
  /* 12d02e3f mov edx, dword ptr [0x12d1fe1c] */
  EDX = (r32((uint32_t)(0x12d1fe1c)));
  /* 12d02e45 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12d02e48:;
  /* 12d02e48 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12d02e4b push eax */
  push32((uint32_t)(EAX));
  /* 12d02e4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d02e4e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12d02e50 mov ecx, dword ptr [0x12d1fe20] */
  ECX = (r32((uint32_t)(0x12d1fe20)));
  /* 12d02e56 push ecx */
  push32((uint32_t)(ECX));
  /* 12d02e57 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d02e59 push 0x12d20818 */
  push32((uint32_t)(0x12d20818u));
  /* 12d02e5e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d02e63 mov edx, dword ptr [0x12d20728] */
  EDX = (r32((uint32_t)(0x12d20728)));
  /* 12d02e69 push edx */
  push32((uint32_t)(EDX));
  /* 12d02e6a call dword ptr [0x12d23370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23370))), 0x12d02e70u);
  /* 12d02e70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d02e72 je 0x12d02e85 */
  if (C.zf) goto L_12d02e85;
  /* 12d02e74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02e78 jne 0x12d02e85 */
  if (!C.zf) goto L_12d02e85;
  /* 12d02e7a mov eax, dword ptr [0x12d1fe20] */
  EAX = (r32((uint32_t)(0x12d1fe20)));
  /* 12d02e7f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12d02e83 jmp 0x12d02e8e */
  goto L_12d02e8e;
L_12d02e85:;
  /* 12d02e85 mov ecx, dword ptr [0x12d1fe20] */
  ECX = (r32((uint32_t)(0x12d1fe20)));
  /* 12d02e8b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12d02e8e:;
  /* 12d02e8e jmp 0x12d030b7 */
  goto L_12d030b7;
L_12d02e93:;
  /* 12d02e93 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02e96 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d02e99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d02e9b je 0x12d02ebd */
  if (C.zf) goto L_12d02ebd;
  /* 12d02e9d cmp dword ptr [0x12d2086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02ea4 je 0x12d02ecc */
  if (C.zf) goto L_12d02ecc;
  /* 12d02ea6 mov ecx, dword ptr [0x12d2086c] */
  ECX = (r32((uint32_t)(0x12d2086c)));
  /* 12d02eac push ecx */
  push32((uint32_t)(ECX));
  /* 12d02ead mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02eb0 push edx */
  push32((uint32_t)(EDX));
  /* 12d02eb1 call 0x12cffe40 */
  push32(0x12d02eb6u); f_12cffe40();
  /* 12d02eb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02eb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d02ebb jne 0x12d02ecc */
  if (!C.zf) goto L_12d02ecc;
L_12d02ebd:;
  /* 12d02ebd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d02ebf call 0x12cf7c50 */
  push32(0x12d02ec4u); f_12cf7c50();
  /* 12d02ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02ec7 jmp 0x12d030b7 */
  goto L_12d030b7;
L_12d02ecc:;
  /* 12d02ecc push 2 */
  push32((uint32_t)(0x2u));
  /* 12d02ece mov eax, dword ptr [0x12d2086c] */
  EAX = (r32((uint32_t)(0x12d2086c)));
  /* 12d02ed3 push eax */
  push32((uint32_t)(EAX));
  /* 12d02ed4 call 0x12cf4c40 */
  push32(0x12d02ed9u); f_12cf4c40();
  /* 12d02ed9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02edc push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12d02ee1 push 0x12d1ccb8 */
  push32((uint32_t)(0x12d1ccb8u));
  /* 12d02ee6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d02ee8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02eeb push ecx */
  push32((uint32_t)(ECX));
  /* 12d02eec call 0x12cf6fe0 */
  push32(0x12d02ef1u); f_12cf6fe0();
  /* 12d02ef1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02ef4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02ef7 push eax */
  push32((uint32_t)(EAX));
  /* 12d02ef8 call 0x12cf41b0 */
  push32(0x12d02efdu); f_12cf41b0();
  /* 12d02efd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02f00 mov dword ptr [0x12d2086c], eax */
  w32((uint32_t)(0x12d2086c), (EAX));
  /* 12d02f05 cmp dword ptr [0x12d2086c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2086c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02f0c jne 0x12d02f1d */
  if (!C.zf) goto L_12d02f1d;
  /* 12d02f0e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d02f10 call 0x12cf7c50 */
  push32(0x12d02f15u); f_12cf7c50();
  /* 12d02f15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02f18 jmp 0x12d030b7 */
  goto L_12d030b7;
L_12d02f1d:;
  /* 12d02f1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02f20 push edx */
  push32((uint32_t)(EDX));
  /* 12d02f21 mov eax, dword ptr [0x12d2086c] */
  EAX = (r32((uint32_t)(0x12d2086c)));
  /* 12d02f26 push eax */
  push32((uint32_t)(EAX));
  /* 12d02f27 call 0x12cf7160 */
  push32(0x12d02f2cu); f_12cf7160();
  /* 12d02f2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02f2f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d02f31 call 0x12cf7c50 */
  push32(0x12d02f36u); f_12cf7c50();
  /* 12d02f36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02f39 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d02f3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02f3e push ecx */
  push32((uint32_t)(ECX));
  /* 12d02f3f mov edx, dword ptr [0x12d1fe1c] */
  EDX = (r32((uint32_t)(0x12d1fe1c)));
  /* 12d02f45 push edx */
  push32((uint32_t)(EDX));
  /* 12d02f46 call 0x12cf79d0 */
  push32(0x12d02f4bu); f_12cf79d0();
  /* 12d02f4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02f4e mov eax, dword ptr [0x12d1fe1c] */
  EAX = (r32((uint32_t)(0x12d1fe1c)));
  /* 12d02f53 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12d02f57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02f5a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02f5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d02f60 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02f63 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d02f66 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02f69 jne 0x12d02f7d */
  if (!C.zf) goto L_12d02f7d;
  /* 12d02f6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d02f6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02f71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d02f74 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02f77 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02f7a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d02f7d:;
  /* 12d02f7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02f80 push eax */
  push32((uint32_t)(EAX));
  /* 12d02f81 call 0x12d02a60 */
  push32(0x12d02f86u); f_12d02a60();
  /* 12d02f86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02f89 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d02f8f mov dword ptr [0x12d1fd90], eax */
  w32((uint32_t)(0x12d1fd90), (EAX));
L_12d02f94:;
  /* 12d02f94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02f97 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d02f9a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02f9d je 0x12d02fb5 */
  if (C.zf) goto L_12d02fb5;
  /* 12d02f9f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02fa2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d02fa5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02fa8 jl 0x12d02fc0 */
  if ((C.sf!=C.of)) goto L_12d02fc0;
  /* 12d02faa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02fad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d02fb0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02fb3 jg 0x12d02fc0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d02fc0;
L_12d02fb5:;
  /* 12d02fb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02fb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02fbb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d02fbe jmp 0x12d02f94 */
  goto L_12d02f94;
L_12d02fc0:;
  /* 12d02fc0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02fc3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d02fc6 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02fc9 jne 0x12d03065 */
  if (!C.zf) goto L_12d03065;
  /* 12d02fcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02fd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02fd5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d02fd8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02fdb push edx */
  push32((uint32_t)(EDX));
  /* 12d02fdc call 0x12d02a60 */
  push32(0x12d02fe1u); f_12d02a60();
  /* 12d02fe1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02fe4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d02fe7 mov ecx, dword ptr [0x12d1fd90] */
  ECX = (r32((uint32_t)(0x12d1fd90)));
  /* 12d02fed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d02fef mov dword ptr [0x12d1fd90], ecx */
  w32((uint32_t)(0x12d1fd90), (ECX));
L_12d02ff5:;
  /* 12d02ff5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d02ff8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d02ffb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d02ffe jl 0x12d03016 */
  if ((C.sf!=C.of)) goto L_12d03016;
  /* 12d03000 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d03003 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d03006 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03009 jg 0x12d03016 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d03016;
  /* 12d0300b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d0300e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03011 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d03014 jmp 0x12d02ff5 */
  goto L_12d02ff5;
L_12d03016:;
  /* 12d03016 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d03019 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d0301c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0301f jne 0x12d03065 */
  if (!C.zf) goto L_12d03065;
  /* 12d03021 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d03024 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03027 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d0302a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d0302d push ecx */
  push32((uint32_t)(ECX));
  /* 12d0302e call 0x12d02a60 */
  push32(0x12d03033u); f_12d02a60();
  /* 12d03033 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03036 mov edx, dword ptr [0x12d1fd90] */
  EDX = (r32((uint32_t)(0x12d1fd90)));
  /* 12d0303c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0303e mov dword ptr [0x12d1fd90], edx */
  w32((uint32_t)(0x12d1fd90), (EDX));
L_12d03044:;
  /* 12d03044 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d03047 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d0304a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0304d jl 0x12d03065 */
  if ((C.sf!=C.of)) goto L_12d03065;
  /* 12d0304f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d03052 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d03055 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03058 jg 0x12d03065 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d03065;
  /* 12d0305a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d0305d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03060 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d03063 jmp 0x12d03044 */
  goto L_12d03044;
L_12d03065:;
  /* 12d03065 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03069 je 0x12d03079 */
  if (C.zf) goto L_12d03079;
  /* 12d0306b mov edx, dword ptr [0x12d1fd90] */
  EDX = (r32((uint32_t)(0x12d1fd90)));
  /* 12d03071 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d03073 mov dword ptr [0x12d1fd90], edx */
  w32((uint32_t)(0x12d1fd90), (EDX));
L_12d03079:;
  /* 12d03079 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d0307c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d0307f mov dword ptr [0x12d1fd94], ecx */
  w32((uint32_t)(0x12d1fd94), (ECX));
  /* 12d03085 cmp dword ptr [0x12d1fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d1fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0308c je 0x12d030ae */
  if (C.zf) goto L_12d030ae;
  /* 12d0308e push 3 */
  push32((uint32_t)(0x3u));
  /* 12d03090 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d03093 push edx */
  push32((uint32_t)(EDX));
  /* 12d03094 mov eax, dword ptr [0x12d1fe20] */
  EAX = (r32((uint32_t)(0x12d1fe20)));
  /* 12d03099 push eax */
  push32((uint32_t)(EAX));
  /* 12d0309a call 0x12cf79d0 */
  push32(0x12d0309fu); f_12cf79d0();
  /* 12d0309f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d030a2 mov ecx, dword ptr [0x12d1fe20] */
  ECX = (r32((uint32_t)(0x12d1fe20)));
  /* 12d030a8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12d030ac jmp 0x12d030b7 */
  goto L_12d030b7;
L_12d030ae:;
  /* 12d030ae mov edx, dword ptr [0x12d1fe20] */
  EDX = (r32((uint32_t)(0x12d1fe20)));
  /* 12d030b4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12d030b7:;
  /* 12d030b7 mov esp, ebp */
  ESP = (EBP);
  /* 12d030b9 pop ebp */
  EBP = (pop32());
  /* 12d030ba ret  */
  ESPCHK(0x12d02d10u, _esp0);
  ESP += 4; return;
}

/* FUN_100130c0 @ 0x12d030c0 (46 bytes, 18 insns) */
void f_12d030c0(void) {
  FTRACE(0x12d030c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d030c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d030c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d030c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d030c4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d030c6 call 0x12cf7bb0 */
  push32(0x12d030cbu); f_12cf7bb0();
  /* 12d030cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d030ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d030d1 push eax */
  push32((uint32_t)(EAX));
  /* 12d030d2 call 0x12d030f0 */
  push32(0x12d030d7u); f_12d030f0();
  /* 12d030d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d030da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d030dd push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d030df call 0x12cf7c50 */
  push32(0x12d030e4u); f_12cf7c50();
  /* 12d030e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d030e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d030ea mov esp, ebp */
  ESP = (EBP);
  /* 12d030ec pop ebp */
  EBP = (pop32());
  /* 12d030ed ret  */
  ESPCHK(0x12d030c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100130f0 @ 0x12d030f0 (762 bytes, 246 insns) */
void f_12d030f0(void) {
  FTRACE(0x12d030f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d030f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d030f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d030f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d030f4 cmp dword ptr [0x12d1fd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d1fd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d030fb jne 0x12d03104 */
  if (!C.zf) goto L_12d03104;
  /* 12d030fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d030ff jmp 0x12d033e6 */
  goto L_12d033e6;
L_12d03104:;
  /* 12d03104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03107 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d0310a cmp ecx, dword ptr [0x12d1fe28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d1fe28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03110 jne 0x12d03124 */
  if (!C.zf) goto L_12d03124;
  /* 12d03112 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03115 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d03118 cmp eax, dword ptr [0x12d1fe38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d1fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0311e je 0x12d032eb */
  if (C.zf) goto L_12d032eb;
L_12d03124:;
  /* 12d03124 cmp dword ptr [0x12d207b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d207b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0312b je 0x12d032a5 */
  if (C.zf) goto L_12d032a5;
  /* 12d03131 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d03133 mov cx, word ptr [0x12d20858] */
  CX = (r16((uint32_t)(0x12d20858)));
  /* 12d0313a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d0313c jne 0x12d03199 */
  if (!C.zf) goto L_12d03199;
  /* 12d0313e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d03140 mov dx, word ptr [0x12d20866] */
  DX = (r16((uint32_t)(0x12d20866)));
  /* 12d03147 push edx */
  push32((uint32_t)(EDX));
  /* 12d03148 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d0314a mov ax, word ptr [0x12d20864] */
  AX = (r16((uint32_t)(0x12d20864)));
  /* 12d03150 push eax */
  push32((uint32_t)(EAX));
  /* 12d03151 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d03153 mov cx, word ptr [0x12d20862] */
  CX = (r16((uint32_t)(0x12d20862)));
  /* 12d0315a push ecx */
  push32((uint32_t)(ECX));
  /* 12d0315b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d0315d mov dx, word ptr [0x12d20860] */
  DX = (r16((uint32_t)(0x12d20860)));
  /* 12d03164 push edx */
  push32((uint32_t)(EDX));
  /* 12d03165 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03167 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d03169 mov ax, word ptr [0x12d2085c] */
  AX = (r16((uint32_t)(0x12d2085c)));
  /* 12d0316f push eax */
  push32((uint32_t)(EAX));
  /* 12d03170 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d03172 mov cx, word ptr [0x12d2085e] */
  CX = (r16((uint32_t)(0x12d2085e)));
  /* 12d03179 push ecx */
  push32((uint32_t)(ECX));
  /* 12d0317a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d0317c mov dx, word ptr [0x12d2085a] */
  DX = (r16((uint32_t)(0x12d2085a)));
  /* 12d03183 push edx */
  push32((uint32_t)(EDX));
  /* 12d03184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03187 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d0318a push ecx */
  push32((uint32_t)(ECX));
  /* 12d0318b push 1 */
  push32((uint32_t)(0x1u));
  /* 12d0318d push 1 */
  push32((uint32_t)(0x1u));
  /* 12d0318f call 0x12d033f0 */
  push32(0x12d03194u); f_12d033f0();
  /* 12d03194 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03197 jmp 0x12d031ea */
  goto L_12d031ea;
L_12d03199:;
  /* 12d03199 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d0319b mov dx, word ptr [0x12d20866] */
  DX = (r16((uint32_t)(0x12d20866)));
  /* 12d031a2 push edx */
  push32((uint32_t)(EDX));
  /* 12d031a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d031a5 mov ax, word ptr [0x12d20864] */
  AX = (r16((uint32_t)(0x12d20864)));
  /* 12d031ab push eax */
  push32((uint32_t)(EAX));
  /* 12d031ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d031ae mov cx, word ptr [0x12d20862] */
  CX = (r16((uint32_t)(0x12d20862)));
  /* 12d031b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d031b6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d031b8 mov dx, word ptr [0x12d20860] */
  DX = (r16((uint32_t)(0x12d20860)));
  /* 12d031bf push edx */
  push32((uint32_t)(EDX));
  /* 12d031c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d031c2 mov ax, word ptr [0x12d2085e] */
  AX = (r16((uint32_t)(0x12d2085e)));
  /* 12d031c8 push eax */
  push32((uint32_t)(EAX));
  /* 12d031c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d031cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d031cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d031cf mov cx, word ptr [0x12d2085a] */
  CX = (r16((uint32_t)(0x12d2085a)));
  /* 12d031d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d031d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d031da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d031dd push eax */
  push32((uint32_t)(EAX));
  /* 12d031de push 0 */
  push32((uint32_t)(0x0u));
  /* 12d031e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d031e2 call 0x12d033f0 */
  push32(0x12d031e7u); f_12d033f0();
  /* 12d031e7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d031ea:;
  /* 12d031ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d031ec mov cx, word ptr [0x12d20804] */
  CX = (r16((uint32_t)(0x12d20804)));
  /* 12d031f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d031f5 jne 0x12d03252 */
  if (!C.zf) goto L_12d03252;
  /* 12d031f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d031f9 mov dx, word ptr [0x12d20812] */
  DX = (r16((uint32_t)(0x12d20812)));
  /* 12d03200 push edx */
  push32((uint32_t)(EDX));
  /* 12d03201 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d03203 mov ax, word ptr [0x12d20810] */
  AX = (r16((uint32_t)(0x12d20810)));
  /* 12d03209 push eax */
  push32((uint32_t)(EAX));
  /* 12d0320a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d0320c mov cx, word ptr [0x12d2080e] */
  CX = (r16((uint32_t)(0x12d2080e)));
  /* 12d03213 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03214 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d03216 mov dx, word ptr [0x12d2080c] */
  DX = (r16((uint32_t)(0x12d2080c)));
  /* 12d0321d push edx */
  push32((uint32_t)(EDX));
  /* 12d0321e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03220 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d03222 mov ax, word ptr [0x12d20808] */
  AX = (r16((uint32_t)(0x12d20808)));
  /* 12d03228 push eax */
  push32((uint32_t)(EAX));
  /* 12d03229 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d0322b mov cx, word ptr [0x12d2080a] */
  CX = (r16((uint32_t)(0x12d2080a)));
  /* 12d03232 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03233 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d03235 mov dx, word ptr [0x12d20806] */
  DX = (r16((uint32_t)(0x12d20806)));
  /* 12d0323c push edx */
  push32((uint32_t)(EDX));
  /* 12d0323d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03240 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d03243 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03244 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d03246 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03248 call 0x12d033f0 */
  push32(0x12d0324du); f_12d033f0();
  /* 12d0324d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03250 jmp 0x12d032a3 */
  goto L_12d032a3;
L_12d03252:;
  /* 12d03252 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d03254 mov dx, word ptr [0x12d20812] */
  DX = (r16((uint32_t)(0x12d20812)));
  /* 12d0325b push edx */
  push32((uint32_t)(EDX));
  /* 12d0325c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d0325e mov ax, word ptr [0x12d20810] */
  AX = (r16((uint32_t)(0x12d20810)));
  /* 12d03264 push eax */
  push32((uint32_t)(EAX));
  /* 12d03265 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d03267 mov cx, word ptr [0x12d2080e] */
  CX = (r16((uint32_t)(0x12d2080e)));
  /* 12d0326e push ecx */
  push32((uint32_t)(ECX));
  /* 12d0326f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d03271 mov dx, word ptr [0x12d2080c] */
  DX = (r16((uint32_t)(0x12d2080c)));
  /* 12d03278 push edx */
  push32((uint32_t)(EDX));
  /* 12d03279 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d0327b mov ax, word ptr [0x12d2080a] */
  AX = (r16((uint32_t)(0x12d2080a)));
  /* 12d03281 push eax */
  push32((uint32_t)(EAX));
  /* 12d03282 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03284 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03286 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d03288 mov cx, word ptr [0x12d20806] */
  CX = (r16((uint32_t)(0x12d20806)));
  /* 12d0328f push ecx */
  push32((uint32_t)(ECX));
  /* 12d03290 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03293 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d03296 push eax */
  push32((uint32_t)(EAX));
  /* 12d03297 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03299 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d0329b call 0x12d033f0 */
  push32(0x12d032a0u); f_12d033f0();
  /* 12d032a0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d032a3:;
  /* 12d032a3 jmp 0x12d032eb */
  goto L_12d032eb;
L_12d032a5:;
  /* 12d032a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d032a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d032a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d032ab push 2 */
  push32((uint32_t)(0x2u));
  /* 12d032ad push 0 */
  push32((uint32_t)(0x0u));
  /* 12d032af push 0 */
  push32((uint32_t)(0x0u));
  /* 12d032b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d032b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d032b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d032b8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d032bb push edx */
  push32((uint32_t)(EDX));
  /* 12d032bc push 1 */
  push32((uint32_t)(0x1u));
  /* 12d032be push 1 */
  push32((uint32_t)(0x1u));
  /* 12d032c0 call 0x12d033f0 */
  push32(0x12d032c5u); f_12d033f0();
  /* 12d032c5 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d032c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d032ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12d032cc push 0 */
  push32((uint32_t)(0x0u));
  /* 12d032ce push 2 */
  push32((uint32_t)(0x2u));
  /* 12d032d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d032d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d032d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 12d032d6 push 0xa */
  push32((uint32_t)(0xau));
  /* 12d032d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d032db mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d032de push ecx */
  push32((uint32_t)(ECX));
  /* 12d032df push 1 */
  push32((uint32_t)(0x1u));
  /* 12d032e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d032e3 call 0x12d033f0 */
  push32(0x12d032e8u); f_12d033f0();
  /* 12d032e8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d032eb:;
  /* 12d032eb mov edx, dword ptr [0x12d1fe2c] */
  EDX = (r32((uint32_t)(0x12d1fe2c)));
  /* 12d032f1 cmp edx, dword ptr [0x12d1fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d1fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d032f7 jge 0x12d03344 */
  if ((C.sf==C.of)) goto L_12d03344;
  /* 12d032f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d032fc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d032ff cmp ecx, dword ptr [0x12d1fe2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d1fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03305 jl 0x12d03315 */
  if ((C.sf!=C.of)) goto L_12d03315;
  /* 12d03307 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0330a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d0330d cmp eax, dword ptr [0x12d1fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d1fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03313 jle 0x12d0331c */
  if ((C.zf||C.sf!=C.of)) goto L_12d0331c;
L_12d03315:;
  /* 12d03315 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d03317 jmp 0x12d033e6 */
  goto L_12d033e6;
L_12d0331c:;
  /* 12d0331c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0331f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12d03322 cmp edx, dword ptr [0x12d1fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d1fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03328 jle 0x12d03342 */
  if ((C.zf||C.sf!=C.of)) goto L_12d03342;
  /* 12d0332a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0332d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d03330 cmp ecx, dword ptr [0x12d1fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d1fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03336 jge 0x12d03342 */
  if ((C.sf==C.of)) goto L_12d03342;
  /* 12d03338 mov eax, 1 */
  EAX = (0x1u);
  /* 12d0333d jmp 0x12d033e6 */
  goto L_12d033e6;
L_12d03342:;
  /* 12d03342 jmp 0x12d03387 */
  goto L_12d03387;
L_12d03344:;
  /* 12d03344 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03347 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d0334a cmp eax, dword ptr [0x12d1fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d1fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03350 jl 0x12d03360 */
  if ((C.sf!=C.of)) goto L_12d03360;
  /* 12d03352 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03355 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12d03358 cmp edx, dword ptr [0x12d1fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d1fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0335e jle 0x12d03367 */
  if ((C.zf||C.sf!=C.of)) goto L_12d03367;
L_12d03360:;
  /* 12d03360 mov eax, 1 */
  EAX = (0x1u);
  /* 12d03365 jmp 0x12d033e6 */
  goto L_12d033e6;
L_12d03367:;
  /* 12d03367 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0336a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12d0336d cmp ecx, dword ptr [0x12d1fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d1fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03373 jle 0x12d03387 */
  if ((C.zf||C.sf!=C.of)) goto L_12d03387;
  /* 12d03375 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03378 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12d0337b cmp eax, dword ptr [0x12d1fe2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d1fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03381 jge 0x12d03387 */
  if ((C.sf==C.of)) goto L_12d03387;
  /* 12d03383 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d03385 jmp 0x12d033e6 */
  goto L_12d033e6;
L_12d03387:;
  /* 12d03387 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0338a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d0338d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d03390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03393 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d03395 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03397 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0339a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d0339d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d033a3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d033a5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d033ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d033ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d033b1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12d033b4 cmp edx, dword ptr [0x12d1fe2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d1fe2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d033ba jne 0x12d033d2 */
  if (!C.zf) goto L_12d033d2;
  /* 12d033bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d033bf cmp eax, dword ptr [0x12d1fe30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d1fe30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d033c5 jl 0x12d033ce */
  if ((C.sf!=C.of)) goto L_12d033ce;
  /* 12d033c7 mov eax, 1 */
  EAX = (0x1u);
  /* 12d033cc jmp 0x12d033e6 */
  goto L_12d033e6;
L_12d033ce:;
  /* 12d033ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d033d0 jmp 0x12d033e6 */
  goto L_12d033e6;
L_12d033d2:;
  /* 12d033d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d033d5 cmp ecx, dword ptr [0x12d1fe40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d1fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d033db jge 0x12d033e4 */
  if ((C.sf==C.of)) goto L_12d033e4;
  /* 12d033dd mov eax, 1 */
  EAX = (0x1u);
  /* 12d033e2 jmp 0x12d033e6 */
  goto L_12d033e6;
L_12d033e4:;
  /* 12d033e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d033e6:;
  /* 12d033e6 mov esp, ebp */
  ESP = (EBP);
  /* 12d033e8 pop ebp */
  EBP = (pop32());
  /* 12d033e9 ret  */
  ESPCHK(0x12d030f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133f0 @ 0x12d033f0 (504 bytes, 145 insns) */
void f_12d033f0(void) {
  FTRACE(0x12d033f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d033f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d033f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d033f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d033f6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d033fa jne 0x12d034cc */
  if (!C.zf) goto L_12d034cc;
  /* 12d03400 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03403 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12d03406 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d03408 jne 0x12d03419 */
  if (!C.zf) goto L_12d03419;
  /* 12d0340a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0340d mov edx, dword ptr [ecx*4 + 0x12d1fe4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d1fe4c)));
  /* 12d03414 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d03417 jmp 0x12d03426 */
  goto L_12d03426;
L_12d03419:;
  /* 12d03419 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0341c mov ecx, dword ptr [eax*4 + 0x12d1fe80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d1fe80)));
  /* 12d03423 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12d03426:;
  /* 12d03426 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d03429 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0342c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d0342f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03432 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d03435 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d0343b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d0343e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03440 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03443 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d03446 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12d03449 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12d0344d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d0344e mov ecx, 7 */
  ECX = (0x7u);
  /* 12d03453 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d03455 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d03458 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d0345b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0345e jge 0x12d03479 */
  if ((C.sf==C.of)) goto L_12d03479;
  /* 12d03460 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d03463 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d03466 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d03469 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d0346c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d0346f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03472 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03474 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d03477 jmp 0x12d0348d */
  goto L_12d0348d;
L_12d03479:;
  /* 12d03479 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d0347c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d0347f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d03482 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d03485 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03488 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0348a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d0348d:;
  /* 12d0348d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03491 jne 0x12d034ca */
  if (!C.zf) goto L_12d034ca;
  /* 12d03493 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03496 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12d03499 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d0349b jne 0x12d034ac */
  if (!C.zf) goto L_12d034ac;
  /* 12d0349d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d034a0 mov eax, dword ptr [edx*4 + 0x12d1fe50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d1fe50)));
  /* 12d034a7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d034aa jmp 0x12d034b9 */
  goto L_12d034b9;
L_12d034ac:;
  /* 12d034ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d034af mov edx, dword ptr [ecx*4 + 0x12d1fe84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d1fe84)));
  /* 12d034b6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d034b9:;
  /* 12d034b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d034bc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d034bf jle 0x12d034ca */
  if ((C.zf||C.sf!=C.of)) goto L_12d034ca;
  /* 12d034c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d034c4 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d034c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d034ca:;
  /* 12d034ca jmp 0x12d03501 */
  goto L_12d03501;
L_12d034cc:;
  /* 12d034cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d034cf and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12d034d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d034d4 jne 0x12d034e5 */
  if (!C.zf) goto L_12d034e5;
  /* 12d034d6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d034d9 mov ecx, dword ptr [eax*4 + 0x12d1fe4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12d1fe4c)));
  /* 12d034e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d034e3 jmp 0x12d034f2 */
  goto L_12d034f2;
L_12d034e5:;
  /* 12d034e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d034e8 mov eax, dword ptr [edx*4 + 0x12d1fe80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d1fe80)));
  /* 12d034ef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12d034f2:;
  /* 12d034f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d034f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d034f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d034fb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d034fe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d03501:;
  /* 12d03501 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03505 jne 0x12d03541 */
  if (!C.zf) goto L_12d03541;
  /* 12d03507 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d0350a mov dword ptr [0x12d1fe2c], eax */
  w32((uint32_t)(0x12d1fe2c), (EAX));
  /* 12d0350f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12d03512 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d03515 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12d03518 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0351a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d0351d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12d03520 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03522 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d03528 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12d0352b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0352d mov dword ptr [0x12d1fe30], ecx */
  w32((uint32_t)(0x12d1fe30), (ECX));
  /* 12d03533 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03536 mov dword ptr [0x12d1fe28], edx */
  w32((uint32_t)(0x12d1fe28), (EDX));
  /* 12d0353c jmp 0x12d035e4 */
  goto L_12d035e4;
L_12d03541:;
  /* 12d03541 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d03544 mov dword ptr [0x12d1fe3c], eax */
  w32((uint32_t)(0x12d1fe3c), (EAX));
  /* 12d03549 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12d0354c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d0354f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12d03552 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03554 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d03557 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12d0355a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0355c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d03562 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12d03565 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03567 mov dword ptr [0x12d1fe40], ecx */
  w32((uint32_t)(0x12d1fe40), (ECX));
  /* 12d0356d mov edx, dword ptr [0x12d1fd98] */
  EDX = (r32((uint32_t)(0x12d1fd98)));
  /* 12d03573 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d03579 mov eax, dword ptr [0x12d1fe40] */
  EAX = (r32((uint32_t)(0x12d1fe40)));
  /* 12d0357e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03580 mov dword ptr [0x12d1fe40], eax */
  w32((uint32_t)(0x12d1fe40), (EAX));
  /* 12d03585 cmp dword ptr [0x12d1fe40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d1fe40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0358c jge 0x12d035b1 */
  if ((C.sf==C.of)) goto L_12d035b1;
  /* 12d0358e mov ecx, dword ptr [0x12d1fe40] */
  ECX = (r32((uint32_t)(0x12d1fe40)));
  /* 12d03594 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0359a mov dword ptr [0x12d1fe40], ecx */
  w32((uint32_t)(0x12d1fe40), (ECX));
  /* 12d035a0 mov edx, dword ptr [0x12d1fe3c] */
  EDX = (r32((uint32_t)(0x12d1fe3c)));
  /* 12d035a6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d035a9 mov dword ptr [0x12d1fe3c], edx */
  w32((uint32_t)(0x12d1fe3c), (EDX));
  /* 12d035af jmp 0x12d035db */
  goto L_12d035db;
L_12d035b1:;
  /* 12d035b1 cmp dword ptr [0x12d1fe40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12d1fe40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d035bb jl 0x12d035db */
  if ((C.sf!=C.of)) goto L_12d035db;
  /* 12d035bd mov eax, dword ptr [0x12d1fe40] */
  EAX = (r32((uint32_t)(0x12d1fe40)));
  /* 12d035c2 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d035c7 mov dword ptr [0x12d1fe40], eax */
  w32((uint32_t)(0x12d1fe40), (EAX));
  /* 12d035cc mov ecx, dword ptr [0x12d1fe3c] */
  ECX = (r32((uint32_t)(0x12d1fe3c)));
  /* 12d035d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d035d5 mov dword ptr [0x12d1fe3c], ecx */
  w32((uint32_t)(0x12d1fe3c), (ECX));
L_12d035db:;
  /* 12d035db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d035de mov dword ptr [0x12d1fe38], edx */
  w32((uint32_t)(0x12d1fe38), (EDX));
L_12d035e4:;
  /* 12d035e4 mov esp, ebp */
  ESP = (EBP);
  /* 12d035e6 pop ebp */
  EBP = (pop32());
  /* 12d035e7 ret  */
  ESPCHK(0x12d033f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100135f0 @ 0x12d035f0 (382 bytes, 135 insns) */
void f_12d035f0(void) {
  FTRACE(0x12d035f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d035f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d035f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d035f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d035f5 push 0x12d1ccc8 */
  push32((uint32_t)(0x12d1ccc8u));
  /* 12d035fa push 0x12cfd2b8 */
  push32((uint32_t)(0x12cfd2b8u));
  /* 12d035ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d03605 push eax */
  push32((uint32_t)(EAX));
  /* 12d03606 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d0360d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03610 push ebx */
  push32((uint32_t)(EBX));
  /* 12d03611 push esi */
  push32((uint32_t)(ESI));
  /* 12d03612 push edi */
  push32((uint32_t)(EDI));
  /* 12d03613 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d03616 cmp dword ptr [0x12d20874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0361d jne 0x12d03662 */
  if (!C.zf) goto L_12d03662;
  /* 12d0361f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03621 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03623 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d03625 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03627 call dword ptr [0x12d2328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2328c))), 0x12d0362du);
  /* 12d0362d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d0362f je 0x12d0363d */
  if (C.zf) goto L_12d0363d;
  /* 12d03631 mov dword ptr [0x12d20874], 1 */
  w32((uint32_t)(0x12d20874), (0x1u));
  /* 12d0363b jmp 0x12d03662 */
  goto L_12d03662;
L_12d0363d:;
  /* 12d0363d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d0363f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03641 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d03643 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03645 call dword ptr [0x12d232a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232a4))), 0x12d0364bu);
  /* 12d0364b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d0364d je 0x12d0365b */
  if (C.zf) goto L_12d0365b;
  /* 12d0364f mov dword ptr [0x12d20874], 2 */
  w32((uint32_t)(0x12d20874), (0x2u));
  /* 12d03659 jmp 0x12d03662 */
  goto L_12d03662;
L_12d0365b:;
  /* 12d0365b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d0365d jmp 0x12d03771 */
  goto L_12d03771;
L_12d03662:;
  /* 12d03662 cmp dword ptr [0x12d20874], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d20874))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03669 jne 0x12d03686 */
  if (!C.zf) goto L_12d03686;
  /* 12d0366b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0366e push eax */
  push32((uint32_t)(EAX));
  /* 12d0366f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03672 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03673 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d03676 push edx */
  push32((uint32_t)(EDX));
  /* 12d03677 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0367a push eax */
  push32((uint32_t)(EAX));
  /* 12d0367b call dword ptr [0x12d2328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2328c))), 0x12d03681u);
  /* 12d03681 jmp 0x12d03771 */
  goto L_12d03771;
L_12d03686:;
  /* 12d03686 cmp dword ptr [0x12d20874], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d20874))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0368d jne 0x12d0376f */
  if (!C.zf) goto L_12d0376f;
  /* 12d03693 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03697 jne 0x12d036a2 */
  if (!C.zf) goto L_12d036a2;
  /* 12d03699 mov ecx, dword ptr [0x12d20728] */
  ECX = (r32((uint32_t)(0x12d20728)));
  /* 12d0369f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12d036a2:;
  /* 12d036a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d036a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d036a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d036a9 push edx */
  push32((uint32_t)(EDX));
  /* 12d036aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d036ad push eax */
  push32((uint32_t)(EAX));
  /* 12d036ae call dword ptr [0x12d232a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232a4))), 0x12d036b4u);
  /* 12d036b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d036b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d036bb jne 0x12d036c4 */
  if (!C.zf) goto L_12d036c4;
  /* 12d036bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d036bf jmp 0x12d03771 */
  goto L_12d03771;
L_12d036c4:;
  /* 12d036c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d036cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d036ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d036d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d036d3 call 0x12cf7350 */
  push32(0x12d036d8u); f_12cf7350();
  /* 12d036d8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12d036db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d036de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d036e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d036e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d036eb jmp 0x12d03704 */
  goto L_12d03704;
  /* 12d036ed mov eax, 1 */
  EAX = (0x1u);
  /* 12d036f2 ret  */
  ESPCHK(0x12d035f0u, _esp0);
  ESP += 4; return;
  /* 12d036f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d036f6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d036fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d03704:;
  /* 12d03704 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03708 jne 0x12d0370e */
  if (!C.zf) goto L_12d0370e;
  /* 12d0370a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d0370c jmp 0x12d03771 */
  goto L_12d03771;
L_12d0370e:;
  /* 12d0370e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d03711 push edx */
  push32((uint32_t)(EDX));
  /* 12d03712 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d03715 push eax */
  push32((uint32_t)(EAX));
  /* 12d03716 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d03719 push ecx */
  push32((uint32_t)(ECX));
  /* 12d0371a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0371d push edx */
  push32((uint32_t)(EDX));
  /* 12d0371e call dword ptr [0x12d232a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232a4))), 0x12d03724u);
  /* 12d03724 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d03726 jne 0x12d0372c */
  if (!C.zf) goto L_12d0372c;
  /* 12d03728 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d0372a jmp 0x12d03771 */
  goto L_12d03771;
L_12d0372c:;
  /* 12d0372c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03730 jne 0x12d0374d */
  if (!C.zf) goto L_12d0374d;
  /* 12d03732 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03734 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03736 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d03738 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d0373b push eax */
  push32((uint32_t)(EAX));
  /* 12d0373c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d0373e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d03741 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03742 call dword ptr [0x12d232d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232d4))), 0x12d03748u);
  /* 12d03748 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d0374b jmp 0x12d0376a */
  goto L_12d0376a;
L_12d0374d:;
  /* 12d0374d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d03750 push edx */
  push32((uint32_t)(EDX));
  /* 12d03751 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03754 push eax */
  push32((uint32_t)(EAX));
  /* 12d03755 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d03757 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d0375a push ecx */
  push32((uint32_t)(ECX));
  /* 12d0375b push 1 */
  push32((uint32_t)(0x1u));
  /* 12d0375d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d03760 push edx */
  push32((uint32_t)(EDX));
  /* 12d03761 call dword ptr [0x12d232d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232d4))), 0x12d03767u);
  /* 12d03767 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d0376a:;
  /* 12d0376a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d0376d jmp 0x12d03771 */
  goto L_12d03771;
L_12d0376f:;
  /* 12d0376f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d03771:;
  /* 12d03771 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12d03774 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d03777 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d0377e pop edi */
  EDI = (pop32());
  /* 12d0377f pop esi */
  ESI = (pop32());
  /* 12d03780 pop ebx */
  EBX = (pop32());
  /* 12d03781 mov esp, ebp */
  ESP = (EBP);
  /* 12d03783 pop ebp */
  EBP = (pop32());
  /* 12d03784 ret  */
  ESPCHK(0x12d035f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013790 @ 0x12d03790 (398 bytes, 140 insns) */
void f_12d03790(void) {
  FTRACE(0x12d03790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d03790 push ebp */
  push32((uint32_t)(EBP));
  /* 12d03791 mov ebp, esp */
  EBP = (ESP);
  /* 12d03793 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d03795 push 0x12d1ccd8 */
  push32((uint32_t)(0x12d1ccd8u));
  /* 12d0379a push 0x12cfd2b8 */
  push32((uint32_t)(0x12cfd2b8u));
  /* 12d0379f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d037a5 push eax */
  push32((uint32_t)(EAX));
  /* 12d037a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d037ad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d037b0 push ebx */
  push32((uint32_t)(EBX));
  /* 12d037b1 push esi */
  push32((uint32_t)(ESI));
  /* 12d037b2 push edi */
  push32((uint32_t)(EDI));
  /* 12d037b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d037b6 cmp dword ptr [0x12d20878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d037bd jne 0x12d03802 */
  if (!C.zf) goto L_12d03802;
  /* 12d037bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12d037c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d037c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d037c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d037c7 call dword ptr [0x12d2328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2328c))), 0x12d037cdu);
  /* 12d037cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d037cf je 0x12d037dd */
  if (C.zf) goto L_12d037dd;
  /* 12d037d1 mov dword ptr [0x12d20878], 1 */
  w32((uint32_t)(0x12d20878), (0x1u));
  /* 12d037db jmp 0x12d03802 */
  goto L_12d03802;
L_12d037dd:;
  /* 12d037dd push 0 */
  push32((uint32_t)(0x0u));
  /* 12d037df push 0 */
  push32((uint32_t)(0x0u));
  /* 12d037e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d037e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d037e5 call dword ptr [0x12d232a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232a4))), 0x12d037ebu);
  /* 12d037eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d037ed je 0x12d037fb */
  if (C.zf) goto L_12d037fb;
  /* 12d037ef mov dword ptr [0x12d20878], 2 */
  w32((uint32_t)(0x12d20878), (0x2u));
  /* 12d037f9 jmp 0x12d03802 */
  goto L_12d03802;
L_12d037fb:;
  /* 12d037fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d037fd jmp 0x12d03921 */
  goto L_12d03921;
L_12d03802:;
  /* 12d03802 cmp dword ptr [0x12d20878], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d20878))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03809 jne 0x12d03826 */
  if (!C.zf) goto L_12d03826;
  /* 12d0380b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0380e push eax */
  push32((uint32_t)(EAX));
  /* 12d0380f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03812 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03813 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d03816 push edx */
  push32((uint32_t)(EDX));
  /* 12d03817 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0381a push eax */
  push32((uint32_t)(EAX));
  /* 12d0381b call dword ptr [0x12d232a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232a4))), 0x12d03821u);
  /* 12d03821 jmp 0x12d03921 */
  goto L_12d03921;
L_12d03826:;
  /* 12d03826 cmp dword ptr [0x12d20878], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d20878))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0382d jne 0x12d0391f */
  if (!C.zf) goto L_12d0391f;
  /* 12d03833 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03837 jne 0x12d03842 */
  if (!C.zf) goto L_12d03842;
  /* 12d03839 mov ecx, dword ptr [0x12d20728] */
  ECX = (r32((uint32_t)(0x12d20728)));
  /* 12d0383f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12d03842:;
  /* 12d03842 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03844 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03846 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d03849 push edx */
  push32((uint32_t)(EDX));
  /* 12d0384a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0384d push eax */
  push32((uint32_t)(EAX));
  /* 12d0384e call dword ptr [0x12d2328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2328c))), 0x12d03854u);
  /* 12d03854 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d03857 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0385b jne 0x12d03864 */
  if (!C.zf) goto L_12d03864;
  /* 12d0385d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d0385f jmp 0x12d03921 */
  goto L_12d03921;
L_12d03864:;
  /* 12d03864 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d0386b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d0386e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d03870 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03873 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d03875 call 0x12cf7350 */
  push32(0x12d0387au); f_12cf7350();
  /* 12d0387a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12d0387d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d03880 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d03883 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d03886 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d0388d jmp 0x12d038a6 */
  goto L_12d038a6;
  /* 12d0388f mov eax, 1 */
  EAX = (0x1u);
  /* 12d03894 ret  */
  ESPCHK(0x12d03790u, _esp0);
  ESP += 4; return;
  /* 12d03895 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d03898 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12d0389f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d038a6:;
  /* 12d038a6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d038aa jne 0x12d038b0 */
  if (!C.zf) goto L_12d038b0;
  /* 12d038ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d038ae jmp 0x12d03921 */
  goto L_12d03921;
L_12d038b0:;
  /* 12d038b0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d038b3 push edx */
  push32((uint32_t)(EDX));
  /* 12d038b4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d038b7 push eax */
  push32((uint32_t)(EAX));
  /* 12d038b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d038bb push ecx */
  push32((uint32_t)(ECX));
  /* 12d038bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d038bf push edx */
  push32((uint32_t)(EDX));
  /* 12d038c0 call dword ptr [0x12d2328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2328c))), 0x12d038c6u);
  /* 12d038c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d038c8 jne 0x12d038ce */
  if (!C.zf) goto L_12d038ce;
  /* 12d038ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d038cc jmp 0x12d03921 */
  goto L_12d03921;
L_12d038ce:;
  /* 12d038ce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d038d2 jne 0x12d038f6 */
  if (!C.zf) goto L_12d038f6;
  /* 12d038d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d038d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d038d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d038da push 0 */
  push32((uint32_t)(0x0u));
  /* 12d038dc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d038de mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d038e1 push eax */
  push32((uint32_t)(EAX));
  /* 12d038e2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d038e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d038ea push ecx */
  push32((uint32_t)(ECX));
  /* 12d038eb call dword ptr [0x12d23370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23370))), 0x12d038f1u);
  /* 12d038f1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d038f4 jmp 0x12d0391a */
  goto L_12d0391a;
L_12d038f6:;
  /* 12d038f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d038f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d038fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d038fd push edx */
  push32((uint32_t)(EDX));
  /* 12d038fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03901 push eax */
  push32((uint32_t)(EAX));
  /* 12d03902 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d03904 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d03907 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03908 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12d0390d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d03910 push edx */
  push32((uint32_t)(EDX));
  /* 12d03911 call dword ptr [0x12d23370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23370))), 0x12d03917u);
  /* 12d03917 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d0391a:;
  /* 12d0391a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d0391d jmp 0x12d03921 */
  goto L_12d03921;
L_12d0391f:;
  /* 12d0391f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d03921:;
  /* 12d03921 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12d03924 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d03927 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d0392e pop edi */
  EDI = (pop32());
  /* 12d0392f pop esi */
  ESI = (pop32());
  /* 12d03930 pop ebx */
  EBX = (pop32());
  /* 12d03931 mov esp, ebp */
  ESP = (EBP);
  /* 12d03933 pop ebp */
  EBP = (pop32());
  /* 12d03934 ret  */
  ESPCHK(0x12d03790u, _esp0);
  ESP += 4; return;
}

/* FUN_10013940 @ 0x12d03940 (11 bytes, 6 insns) */
void f_12d03940(void) {
  FTRACE(0x12d03940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d03940 push ebp */
  push32((uint32_t)(EBP));
  /* 12d03941 mov ebp, esp */
  EBP = (ESP);
  /* 12d03943 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03946 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03949 pop ebp */
  EBP = (pop32());
  /* 12d0394a ret  */
  ESPCHK(0x12d03940u, _esp0);
  ESP += 4; return;
}

/* FUN_10013950 @ 0x12d03950 (147 bytes, 43 insns) */
void f_12d03950(void) {
  FTRACE(0x12d03950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d03950 push ebp */
  push32((uint32_t)(EBP));
  /* 12d03951 mov ebp, esp */
  EBP = (ESP);
  /* 12d03953 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03954 cmp dword ptr [0x12d20718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0395b jne 0x12d03977 */
  if (!C.zf) goto L_12d03977;
  /* 12d0395d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03961 jl 0x12d03972 */
  if ((C.sf!=C.of)) goto L_12d03972;
  /* 12d03963 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03967 jg 0x12d03972 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d03972;
  /* 12d03969 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0396c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0396f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d03972:;
  /* 12d03972 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03975 jmp 0x12d039df */
  goto L_12d039df;
L_12d03977:;
  /* 12d03977 push 0x12d208a4 */
  push32((uint32_t)(0x12d208a4u));
  /* 12d0397c call dword ptr [0x12d2331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2331c))), 0x12d03982u);
  /* 12d03982 cmp dword ptr [0x12d20894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03989 je 0x12d039a9 */
  if (C.zf) goto L_12d039a9;
  /* 12d0398b push 0x12d208a4 */
  push32((uint32_t)(0x12d208a4u));
  /* 12d03990 call dword ptr [0x12d2330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2330c))), 0x12d03996u);
  /* 12d03996 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d03998 call 0x12cf7bb0 */
  push32(0x12d0399du); f_12cf7bb0();
  /* 12d0399d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d039a0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d039a7 jmp 0x12d039b0 */
  goto L_12d039b0;
L_12d039a9:;
  /* 12d039a9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d039b0:;
  /* 12d039b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d039b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d039b4 call 0x12d039f0 */
  push32(0x12d039b9u); f_12d039f0();
  /* 12d039b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d039bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d039bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d039c3 je 0x12d039d1 */
  if (C.zf) goto L_12d039d1;
  /* 12d039c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12d039c7 call 0x12cf7c50 */
  push32(0x12d039ccu); f_12cf7c50();
  /* 12d039cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d039cf jmp 0x12d039dc */
  goto L_12d039dc;
L_12d039d1:;
  /* 12d039d1 push 0x12d208a4 */
  push32((uint32_t)(0x12d208a4u));
  /* 12d039d6 call dword ptr [0x12d2330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2330c))), 0x12d039dcu);
L_12d039dc:;
  /* 12d039dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12d039df:;
  /* 12d039df mov esp, ebp */
  ESP = (EBP);
  /* 12d039e1 pop ebp */
  EBP = (pop32());
  /* 12d039e2 ret  */
  ESPCHK(0x12d03950u, _esp0);
  ESP += 4; return;
}

/* FUN_100139f0 @ 0x12d039f0 (299 bytes, 91 insns) */
void f_12d039f0(void) {
  FTRACE(0x12d039f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d039f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d039f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d039f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d039f6 cmp dword ptr [0x12d20718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d039fd jne 0x12d03a1c */
  if (!C.zf) goto L_12d03a1c;
  /* 12d039ff cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03a03 jl 0x12d03a14 */
  if ((C.sf!=C.of)) goto L_12d03a14;
  /* 12d03a05 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03a09 jg 0x12d03a14 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d03a14;
  /* 12d03a0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03a0e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03a11 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d03a14:;
  /* 12d03a14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03a17 jmp 0x12d03b17 */
  goto L_12d03b17;
L_12d03a1c:;
  /* 12d03a1c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03a23 jge 0x12d03a63 */
  if ((C.sf==C.of)) goto L_12d03a63;
  /* 12d03a25 cmp dword ptr [0x12d1eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d1eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03a2c jle 0x12d03a41 */
  if ((C.zf||C.sf!=C.of)) goto L_12d03a41;
  /* 12d03a2e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d03a30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03a33 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03a34 call 0x12cfa1c0 */
  push32(0x12d03a39u); f_12cfa1c0();
  /* 12d03a39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03a3c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d03a3f jmp 0x12d03a55 */
  goto L_12d03a55;
L_12d03a41:;
  /* 12d03a41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03a44 mov eax, dword ptr [0x12d1ec98] */
  EAX = (r32((uint32_t)(0x12d1ec98)));
  /* 12d03a49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d03a4b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12d03a4f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d03a52 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d03a55:;
  /* 12d03a55 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03a59 jne 0x12d03a63 */
  if (!C.zf) goto L_12d03a63;
  /* 12d03a5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03a5e jmp 0x12d03b17 */
  goto L_12d03b17;
L_12d03a63:;
  /* 12d03a63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03a66 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12d03a69 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d03a6f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d03a75 mov eax, dword ptr [0x12d1ec98] */
  EAX = (r32((uint32_t)(0x12d1ec98)));
  /* 12d03a7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d03a7c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12d03a80 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12d03a86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d03a88 je 0x12d03aac */
  if (C.zf) goto L_12d03aac;
  /* 12d03a8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03a8d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12d03a90 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d03a96 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12d03a99 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d03a9c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12d03a9f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12d03aa3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12d03aaa jmp 0x12d03abd */
  goto L_12d03abd;
L_12d03aac:;
  /* 12d03aac mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d03aaf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12d03ab2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12d03ab6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12d03abd:;
  /* 12d03abd push 1 */
  push32((uint32_t)(0x1u));
  /* 12d03abf push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03ac1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d03ac3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12d03ac6 push edx */
  push32((uint32_t)(EDX));
  /* 12d03ac7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d03aca push eax */
  push32((uint32_t)(EAX));
  /* 12d03acb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12d03ace push ecx */
  push32((uint32_t)(ECX));
  /* 12d03acf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12d03ad4 mov edx, dword ptr [0x12d20718] */
  EDX = (r32((uint32_t)(0x12d20718)));
  /* 12d03ada push edx */
  push32((uint32_t)(EDX));
  /* 12d03adb call 0x12cfc5a0 */
  push32(0x12d03ae0u); f_12cfc5a0();
  /* 12d03ae0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03ae3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d03ae6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03aea jne 0x12d03af1 */
  if (!C.zf) goto L_12d03af1;
  /* 12d03aec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03aef jmp 0x12d03b17 */
  goto L_12d03b17;
L_12d03af1:;
  /* 12d03af1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03af5 jne 0x12d03b01 */
  if (!C.zf) goto L_12d03b01;
  /* 12d03af7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d03afa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d03aff jmp 0x12d03b17 */
  goto L_12d03b17;
L_12d03b01:;
  /* 12d03b01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d03b04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d03b09 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12d03b0c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d03b12 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12d03b15 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12d03b17:;
  /* 12d03b17 mov esp, ebp */
  ESP = (EBP);
  /* 12d03b19 pop ebp */
  EBP = (pop32());
  /* 12d03b1a ret  */
  ESPCHK(0x12d039f0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12d03b20 (52 bytes, 19 insns) */
void f_12d03b20(void) {
  FTRACE(0x12d03b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d03b20 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d03b24 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d03b28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12d03b2a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d03b2e jne 0x12d03b39 */
  if (!C.zf) goto L_12d03b39;
  /* 12d03b30 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d03b34 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d03b36 ret 0x10 */
  ESPCHK(0x12d03b20u, _esp0);
  ESP += 20; return;
L_12d03b39:;
  /* 12d03b39 push ebx */
  push32((uint32_t)(EBX));
  /* 12d03b3a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d03b3c mov ebx, eax */
  EBX = (EAX);
  /* 12d03b3e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d03b42 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d03b46 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03b48 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d03b4c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12d03b4e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03b50 pop ebx */
  EBX = (pop32());
  /* 12d03b51 ret 0x10 */
  ESPCHK(0x12d03b20u, _esp0);
  ESP += 20; return;
}

/* FUN_10013b60 @ 0x12d03b60 (46 bytes, 18 insns) */
void f_12d03b60(void) {
  FTRACE(0x12d03b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d03b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d03b61 mov ebp, esp */
  EBP = (ESP);
  /* 12d03b63 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03b64 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d03b66 call 0x12cf7bb0 */
  push32(0x12d03b6bu); f_12cf7bb0();
  /* 12d03b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03b6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03b71 push eax */
  push32((uint32_t)(EAX));
  /* 12d03b72 call 0x12d03b90 */
  push32(0x12d03b77u); f_12d03b90();
  /* 12d03b77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03b7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d03b7d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12d03b7f call 0x12cf7c50 */
  push32(0x12d03b84u); f_12cf7c50();
  /* 12d03b84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03b87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d03b8a mov esp, ebp */
  ESP = (EBP);
  /* 12d03b8c pop ebp */
  EBP = (pop32());
  /* 12d03b8d ret  */
  ESPCHK(0x12d03b60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12d03b90 (198 bytes, 69 insns) */
void f_12d03b90(void) {
  FTRACE(0x12d03b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d03b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d03b91 mov ebp, esp */
  EBP = (ESP);
  /* 12d03b93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d03b96 mov eax, dword ptr [0x12d20534] */
  EAX = (r32((uint32_t)(0x12d20534)));
  /* 12d03b9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d03b9e cmp dword ptr [0x12d22040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d22040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03ba5 jne 0x12d03bae */
  if (!C.zf) goto L_12d03bae;
  /* 12d03ba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d03ba9 jmp 0x12d03c52 */
  goto L_12d03c52;
L_12d03bae:;
  /* 12d03bae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03bb2 jne 0x12d03bd6 */
  if (!C.zf) goto L_12d03bd6;
  /* 12d03bb4 cmp dword ptr [0x12d2053c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2053c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03bbb je 0x12d03bd6 */
  if (C.zf) goto L_12d03bd6;
  /* 12d03bbd call 0x12d03cb0 */
  push32(0x12d03bc2u); f_12d03cb0();
  /* 12d03bc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d03bc4 je 0x12d03bcd */
  if (C.zf) goto L_12d03bcd;
  /* 12d03bc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d03bc8 jmp 0x12d03c52 */
  goto L_12d03c52;
L_12d03bcd:;
  /* 12d03bcd mov ecx, dword ptr [0x12d20534] */
  ECX = (r32((uint32_t)(0x12d20534)));
  /* 12d03bd3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d03bd6:;
  /* 12d03bd6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03bda je 0x12d03c50 */
  if (C.zf) goto L_12d03c50;
  /* 12d03bdc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03be0 je 0x12d03c50 */
  if (C.zf) goto L_12d03c50;
  /* 12d03be2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03be5 push edx */
  push32((uint32_t)(EDX));
  /* 12d03be6 call 0x12cf6fe0 */
  push32(0x12d03bebu); f_12cf6fe0();
  /* 12d03beb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03bee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d03bf1:;
  /* 12d03bf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d03bf4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03bf7 je 0x12d03c50 */
  if (C.zf) goto L_12d03c50;
  /* 12d03bf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d03bfc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d03bfe push edx */
  push32((uint32_t)(EDX));
  /* 12d03bff call 0x12cf6fe0 */
  push32(0x12d03c04u); f_12cf6fe0();
  /* 12d03c04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03c07 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03c0a jbe 0x12d03c45 */
  if ((C.cf||C.zf)) goto L_12d03c45;
  /* 12d03c0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d03c0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d03c11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d03c14 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12d03c18 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03c1b jne 0x12d03c45 */
  if (!C.zf) goto L_12d03c45;
  /* 12d03c1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d03c20 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03c21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03c24 push edx */
  push32((uint32_t)(EDX));
  /* 12d03c25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d03c28 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d03c2a push ecx */
  push32((uint32_t)(ECX));
  /* 12d03c2b call 0x12d03c60 */
  push32(0x12d03c30u); f_12d03c60();
  /* 12d03c30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03c33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d03c35 jne 0x12d03c45 */
  if (!C.zf) goto L_12d03c45;
  /* 12d03c37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d03c3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d03c3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d03c3f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12d03c43 jmp 0x12d03c52 */
  goto L_12d03c52;
L_12d03c45:;
  /* 12d03c45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d03c48 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03c4b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d03c4e jmp 0x12d03bf1 */
  goto L_12d03bf1;
L_12d03c50:;
  /* 12d03c50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d03c52:;
  /* 12d03c52 mov esp, ebp */
  ESP = (EBP);
  /* 12d03c54 pop ebp */
  EBP = (pop32());
  /* 12d03c55 ret  */
  ESPCHK(0x12d03b90u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12d03c60 (79 bytes, 32 insns) */
void f_12d03c60(void) {
  FTRACE(0x12d03c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d03c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d03c61 mov ebp, esp */
  EBP = (ESP);
  /* 12d03c63 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03c64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03c68 jne 0x12d03c6e */
  if (!C.zf) goto L_12d03c6e;
  /* 12d03c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d03c6c jmp 0x12d03cab */
  goto L_12d03cab;
L_12d03c6e:;
  /* 12d03c6e mov eax, dword ptr [0x12d21c04] */
  EAX = (r32((uint32_t)(0x12d21c04)));
  /* 12d03c73 push eax */
  push32((uint32_t)(EAX));
  /* 12d03c74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03c77 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03c78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d03c7b push edx */
  push32((uint32_t)(EDX));
  /* 12d03c7c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03c7f push eax */
  push32((uint32_t)(EAX));
  /* 12d03c80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03c83 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03c84 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d03c86 mov edx, dword ptr [0x12d21ea4] */
  EDX = (r32((uint32_t)(0x12d21ea4)));
  /* 12d03c8c push edx */
  push32((uint32_t)(EDX));
  /* 12d03c8d call 0x12d03d60 */
  push32(0x12d03c92u); f_12d03d60();
  /* 12d03c92 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03c95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d03c98 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03c9c jne 0x12d03ca5 */
  if (!C.zf) goto L_12d03ca5;
  /* 12d03c9e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12d03ca3 jmp 0x12d03cab */
  goto L_12d03cab;
L_12d03ca5:;
  /* 12d03ca5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d03ca8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12d03cab:;
  /* 12d03cab mov esp, ebp */
  ESP = (EBP);
  /* 12d03cad pop ebp */
  EBP = (pop32());
  /* 12d03cae ret  */
  ESPCHK(0x12d03c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013cb0 @ 0x12d03cb0 (174 bytes, 66 insns) */
void f_12d03cb0(void) {
  FTRACE(0x12d03cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d03cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d03cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d03cb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d03cb6 mov eax, dword ptr [0x12d2053c] */
  EAX = (r32((uint32_t)(0x12d2053c)));
  /* 12d03cbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d03cbe:;
  /* 12d03cbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d03cc1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03cc4 je 0x12d03d58 */
  if (C.zf) goto L_12d03d58;
  /* 12d03cca push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03cce push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03cd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03cd2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d03cd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d03cd7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d03cd9 push eax */
  push32((uint32_t)(EAX));
  /* 12d03cda push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03cdc push 1 */
  push32((uint32_t)(0x1u));
  /* 12d03cde call dword ptr [0x12d23370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23370))), 0x12d03ce4u);
  /* 12d03ce4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d03ce7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03ceb jne 0x12d03cf2 */
  if (!C.zf) goto L_12d03cf2;
  /* 12d03ced or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d03cf0 jmp 0x12d03d5a */
  goto L_12d03d5a;
L_12d03cf2:;
  /* 12d03cf2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12d03cf4 push 0x12d1cce4 */
  push32((uint32_t)(0x12d1cce4u));
  /* 12d03cf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d03cfb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d03cfe push ecx */
  push32((uint32_t)(ECX));
  /* 12d03cff call 0x12cf41b0 */
  push32(0x12d03d04u); f_12cf41b0();
  /* 12d03d04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03d07 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d03d0a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03d0e jne 0x12d03d15 */
  if (!C.zf) goto L_12d03d15;
  /* 12d03d10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d03d13 jmp 0x12d03d5a */
  goto L_12d03d5a;
L_12d03d15:;
  /* 12d03d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03d19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d03d1c push edx */
  push32((uint32_t)(EDX));
  /* 12d03d1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d03d20 push eax */
  push32((uint32_t)(EAX));
  /* 12d03d21 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d03d23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d03d26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d03d28 push edx */
  push32((uint32_t)(EDX));
  /* 12d03d29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03d2b push 1 */
  push32((uint32_t)(0x1u));
  /* 12d03d2d call dword ptr [0x12d23370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23370))), 0x12d03d33u);
  /* 12d03d33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d03d35 jne 0x12d03d3c */
  if (!C.zf) goto L_12d03d3c;
  /* 12d03d37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d03d3a jmp 0x12d03d5a */
  goto L_12d03d5a;
L_12d03d3c:;
  /* 12d03d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03d3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d03d41 push eax */
  push32((uint32_t)(EAX));
  /* 12d03d42 call 0x12d041b0 */
  push32(0x12d03d47u); f_12d041b0();
  /* 12d03d47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03d4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d03d4d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03d50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d03d53 jmp 0x12d03cbe */
  goto L_12d03cbe;
L_12d03d58:;
  /* 12d03d58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d03d5a:;
  /* 12d03d5a mov esp, ebp */
  ESP = (EBP);
  /* 12d03d5c pop ebp */
  EBP = (pop32());
  /* 12d03d5d ret  */
  ESPCHK(0x12d03cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d60 @ 0x12d03d60 (970 bytes, 340 insns) */
void f_12d03d60(void) {
  FTRACE(0x12d03d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d03d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d03d61 mov ebp, esp */
  EBP = (ESP);
  /* 12d03d63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d03d65 push 0x12d1cd38 */
  push32((uint32_t)(0x12d1cd38u));
  /* 12d03d6a push 0x12cfd2b8 */
  push32((uint32_t)(0x12cfd2b8u));
  /* 12d03d6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12d03d75 push eax */
  push32((uint32_t)(EAX));
  /* 12d03d76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12d03d7d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03d80 push ebx */
  push32((uint32_t)(EBX));
  /* 12d03d81 push esi */
  push32((uint32_t)(ESI));
  /* 12d03d82 push edi */
  push32((uint32_t)(EDI));
  /* 12d03d83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d03d86 cmp dword ptr [0x12d2087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03d8d jne 0x12d03de6 */
  if (!C.zf) goto L_12d03de6;
  /* 12d03d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d03d91 push 0x12d1c394 */
  push32((uint32_t)(0x12d1c394u));
  /* 12d03d96 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d03d98 push 0x12d1c394 */
  push32((uint32_t)(0x12d1c394u));
  /* 12d03d9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03d9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03da1 call dword ptr [0x12d23284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23284))), 0x12d03da7u);
  /* 12d03da7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d03da9 je 0x12d03db7 */
  if (C.zf) goto L_12d03db7;
  /* 12d03dab mov dword ptr [0x12d2087c], 1 */
  w32((uint32_t)(0x12d2087c), (0x1u));
  /* 12d03db5 jmp 0x12d03de6 */
  goto L_12d03de6;
L_12d03db7:;
  /* 12d03db7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d03db9 push 0x12d1c390 */
  push32((uint32_t)(0x12d1c390u));
  /* 12d03dbe push 1 */
  push32((uint32_t)(0x1u));
  /* 12d03dc0 push 0x12d1c390 */
  push32((uint32_t)(0x12d1c390u));
  /* 12d03dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03dc9 call dword ptr [0x12d23288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23288))), 0x12d03dcfu);
  /* 12d03dcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d03dd1 je 0x12d03ddf */
  if (C.zf) goto L_12d03ddf;
  /* 12d03dd3 mov dword ptr [0x12d2087c], 2 */
  w32((uint32_t)(0x12d2087c), (0x2u));
  /* 12d03ddd jmp 0x12d03de6 */
  goto L_12d03de6;
L_12d03ddf:;
  /* 12d03ddf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d03de1 jmp 0x12d04144 */
  goto L_12d04144;
L_12d03de6:;
  /* 12d03de6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03dea jle 0x12d03dff */
  if ((C.zf||C.sf!=C.of)) goto L_12d03dff;
  /* 12d03dec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d03def push eax */
  push32((uint32_t)(EAX));
  /* 12d03df0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03df3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03df4 call 0x12d04160 */
  push32(0x12d03df9u); f_12d04160();
  /* 12d03df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03dfc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12d03dff:;
  /* 12d03dff cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03e03 jle 0x12d03e18 */
  if ((C.zf||C.sf!=C.of)) goto L_12d03e18;
  /* 12d03e05 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d03e08 push edx */
  push32((uint32_t)(EDX));
  /* 12d03e09 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d03e0c push eax */
  push32((uint32_t)(EAX));
  /* 12d03e0d call 0x12d04160 */
  push32(0x12d03e12u); f_12d04160();
  /* 12d03e12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03e15 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12d03e18:;
  /* 12d03e18 cmp dword ptr [0x12d2087c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d2087c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03e1f jne 0x12d03e44 */
  if (!C.zf) goto L_12d03e44;
  /* 12d03e21 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d03e24 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03e25 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d03e28 push edx */
  push32((uint32_t)(EDX));
  /* 12d03e29 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d03e2c push eax */
  push32((uint32_t)(EAX));
  /* 12d03e2d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03e30 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03e31 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d03e34 push edx */
  push32((uint32_t)(EDX));
  /* 12d03e35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d03e38 push eax */
  push32((uint32_t)(EAX));
  /* 12d03e39 call dword ptr [0x12d23288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23288))), 0x12d03e3fu);
  /* 12d03e3f jmp 0x12d04144 */
  goto L_12d04144;
L_12d03e44:;
  /* 12d03e44 cmp dword ptr [0x12d2087c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d2087c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03e4b jne 0x12d04142 */
  if (!C.zf) goto L_12d04142;
  /* 12d03e51 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03e55 jne 0x12d03e60 */
  if (!C.zf) goto L_12d03e60;
  /* 12d03e57 mov ecx, dword ptr [0x12d20728] */
  ECX = (r32((uint32_t)(0x12d20728)));
  /* 12d03e5d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12d03e60:;
  /* 12d03e60 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03e64 je 0x12d03e70 */
  if (C.zf) goto L_12d03e70;
  /* 12d03e66 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03e6a jne 0x12d03fec */
  if (!C.zf) goto L_12d03fec;
L_12d03e70:;
  /* 12d03e70 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d03e73 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03e76 jne 0x12d03e82 */
  if (!C.zf) goto L_12d03e82;
  /* 12d03e78 mov eax, 2 */
  EAX = (0x2u);
  /* 12d03e7d jmp 0x12d04144 */
  goto L_12d04144;
L_12d03e82:;
  /* 12d03e82 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03e86 jle 0x12d03e92 */
  if ((C.zf||C.sf!=C.of)) goto L_12d03e92;
  /* 12d03e88 mov eax, 1 */
  EAX = (0x1u);
  /* 12d03e8d jmp 0x12d04144 */
  goto L_12d04144;
L_12d03e92:;
  /* 12d03e92 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03e96 jle 0x12d03ea2 */
  if ((C.zf||C.sf!=C.of)) goto L_12d03ea2;
  /* 12d03e98 mov eax, 3 */
  EAX = (0x3u);
  /* 12d03e9d jmp 0x12d04144 */
  goto L_12d04144;
L_12d03ea2:;
  /* 12d03ea2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12d03ea5 push eax */
  push32((uint32_t)(EAX));
  /* 12d03ea6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d03ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03eaa call dword ptr [0x12d232e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232e0))), 0x12d03eb0u);
  /* 12d03eb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d03eb2 jne 0x12d03ebb */
  if (!C.zf) goto L_12d03ebb;
  /* 12d03eb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d03eb6 jmp 0x12d04144 */
  goto L_12d04144;
L_12d03ebb:;
  /* 12d03ebb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03ebf jne 0x12d03ec7 */
  if (!C.zf) goto L_12d03ec7;
  /* 12d03ec1 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03ec5 je 0x12d03ef4 */
  if (C.zf) goto L_12d03ef4;
L_12d03ec7:;
  /* 12d03ec7 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03ecb jne 0x12d03ed3 */
  if (!C.zf) goto L_12d03ed3;
  /* 12d03ecd cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03ed1 je 0x12d03ef4 */
  if (C.zf) goto L_12d03ef4;
L_12d03ed3:;
  /* 12d03ed3 push 0x12d1ccf8 */
  push32((uint32_t)(0x12d1ccf8u));
  /* 12d03ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03eda push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12d03edf push 0x12d1ccf0 */
  push32((uint32_t)(0x12d1ccf0u));
  /* 12d03ee4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d03ee6 call 0x12cf3270 */
  push32(0x12d03eebu); f_12cf3270();
  /* 12d03eeb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03eee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03ef1 jne 0x12d03ef4 */
  if (!C.zf) goto L_12d03ef4;
  /* 12d03ef3 int3  */
  x86_unimpl("int3 @ 0x12d03ef3");
L_12d03ef4:;
  /* 12d03ef4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d03ef6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d03ef8 jne 0x12d03ebb */
  if (!C.zf) goto L_12d03ebb;
  /* 12d03efa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03efe jle 0x12d03f73 */
  if ((C.zf||C.sf!=C.of)) goto L_12d03f73;
  /* 12d03f00 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03f04 jae 0x12d03f10 */
  if (!C.cf) goto L_12d03f10;
  /* 12d03f06 mov eax, 3 */
  EAX = (0x3u);
  /* 12d03f0b jmp 0x12d04144 */
  goto L_12d04144;
L_12d03f10:;
  /* 12d03f10 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12d03f13 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12d03f16 jmp 0x12d03f21 */
  goto L_12d03f21;
L_12d03f18:;
  /* 12d03f18 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d03f1b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03f1e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12d03f21:;
  /* 12d03f21 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d03f24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d03f26 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d03f28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d03f2a je 0x12d03f69 */
  if (C.zf) goto L_12d03f69;
  /* 12d03f2c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d03f2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d03f31 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12d03f34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d03f36 je 0x12d03f69 */
  if (C.zf) goto L_12d03f69;
  /* 12d03f38 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03f3b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d03f3d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d03f3f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d03f42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d03f44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d03f46 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03f48 jl 0x12d03f67 */
  if ((C.sf!=C.of)) goto L_12d03f67;
  /* 12d03f4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03f4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d03f4f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d03f51 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d03f54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d03f56 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12d03f59 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03f5b jg 0x12d03f67 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d03f67;
  /* 12d03f5d mov eax, 2 */
  EAX = (0x2u);
  /* 12d03f62 jmp 0x12d04144 */
  goto L_12d04144;
L_12d03f67:;
  /* 12d03f67 jmp 0x12d03f18 */
  goto L_12d03f18;
L_12d03f69:;
  /* 12d03f69 mov eax, 3 */
  EAX = (0x3u);
  /* 12d03f6e jmp 0x12d04144 */
  goto L_12d04144;
L_12d03f73:;
  /* 12d03f73 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03f77 jle 0x12d03fec */
  if ((C.zf||C.sf!=C.of)) goto L_12d03fec;
  /* 12d03f79 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03f7d jae 0x12d03f89 */
  if (!C.cf) goto L_12d03f89;
  /* 12d03f7f mov eax, 1 */
  EAX = (0x1u);
  /* 12d03f84 jmp 0x12d04144 */
  goto L_12d04144;
L_12d03f89:;
  /* 12d03f89 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12d03f8c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12d03f8f jmp 0x12d03f9a */
  goto L_12d03f9a;
L_12d03f91:;
  /* 12d03f91 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d03f94 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d03f97 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12d03f9a:;
  /* 12d03f9a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d03f9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d03f9f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d03fa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d03fa3 je 0x12d03fe2 */
  if (C.zf) goto L_12d03fe2;
  /* 12d03fa5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d03fa8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d03faa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12d03fad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d03faf je 0x12d03fe2 */
  if (C.zf) goto L_12d03fe2;
  /* 12d03fb1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d03fb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d03fb6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d03fb8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d03fbb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d03fbd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d03fbf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03fc1 jl 0x12d03fe0 */
  if ((C.sf!=C.of)) goto L_12d03fe0;
  /* 12d03fc3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d03fc6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d03fc8 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d03fca mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12d03fcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d03fcf mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12d03fd2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d03fd4 jg 0x12d03fe0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d03fe0;
  /* 12d03fd6 mov eax, 2 */
  EAX = (0x2u);
  /* 12d03fdb jmp 0x12d04144 */
  goto L_12d04144;
L_12d03fe0:;
  /* 12d03fe0 jmp 0x12d03f91 */
  goto L_12d03f91;
L_12d03fe2:;
  /* 12d03fe2 mov eax, 1 */
  EAX = (0x1u);
  /* 12d03fe7 jmp 0x12d04144 */
  goto L_12d04144;
L_12d03fec:;
  /* 12d03fec push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03fee push 0 */
  push32((uint32_t)(0x0u));
  /* 12d03ff0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d03ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d03ff4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d03ff7 push edx */
  push32((uint32_t)(EDX));
  /* 12d03ff8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d03ffa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d03ffd push eax */
  push32((uint32_t)(EAX));
  /* 12d03ffe call dword ptr [0x12d232d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232d4))), 0x12d04004u);
  /* 12d04004 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12d04007 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0400b jne 0x12d04014 */
  if (!C.zf) goto L_12d04014;
  /* 12d0400d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d0400f jmp 0x12d04144 */
  goto L_12d04144;
L_12d04014:;
  /* 12d04014 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d0401b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d0401e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d04020 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04023 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d04025 call 0x12cf7350 */
  push32(0x12d0402au); f_12cf7350();
  /* 12d0402a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12d0402d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d04030 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12d04033 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12d04036 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d0403d jmp 0x12d04056 */
  goto L_12d04056;
  /* 12d0403f mov eax, 1 */
  EAX = (0x1u);
  /* 12d04044 ret  */
  ESPCHK(0x12d03d60u, _esp0);
  ESP += 4; return;
  /* 12d04045 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d04048 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d0404f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d04056:;
  /* 12d04056 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0405a jne 0x12d04063 */
  if (!C.zf) goto L_12d04063;
  /* 12d0405c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d0405e jmp 0x12d04144 */
  goto L_12d04144;
L_12d04063:;
  /* 12d04063 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d04066 push edx */
  push32((uint32_t)(EDX));
  /* 12d04067 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d0406a push eax */
  push32((uint32_t)(EAX));
  /* 12d0406b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d0406e push ecx */
  push32((uint32_t)(ECX));
  /* 12d0406f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d04072 push edx */
  push32((uint32_t)(EDX));
  /* 12d04073 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d04075 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d04078 push eax */
  push32((uint32_t)(EAX));
  /* 12d04079 call dword ptr [0x12d232d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232d4))), 0x12d0407fu);
  /* 12d0407f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d04081 jne 0x12d0408a */
  if (!C.zf) goto L_12d0408a;
  /* 12d04083 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d04085 jmp 0x12d04144 */
  goto L_12d04144;
L_12d0408a:;
  /* 12d0408a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d0408c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d0408e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d04091 push ecx */
  push32((uint32_t)(ECX));
  /* 12d04092 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d04095 push edx */
  push32((uint32_t)(EDX));
  /* 12d04096 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d04098 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d0409b push eax */
  push32((uint32_t)(EAX));
  /* 12d0409c call dword ptr [0x12d232d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232d4))), 0x12d040a2u);
  /* 12d040a2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d040a5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d040a9 jne 0x12d040b2 */
  if (!C.zf) goto L_12d040b2;
  /* 12d040ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d040ad jmp 0x12d04144 */
  goto L_12d04144;
L_12d040b2:;
  /* 12d040b2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d040b9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d040bc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d040be add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d040c1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12d040c3 call 0x12cf7350 */
  push32(0x12d040c8u); f_12cf7350();
  /* 12d040c8 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12d040cb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12d040ce mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12d040d1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12d040d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12d040db jmp 0x12d040f4 */
  goto L_12d040f4;
  /* 12d040dd mov eax, 1 */
  EAX = (0x1u);
  /* 12d040e2 ret  */
  ESPCHK(0x12d03d60u, _esp0);
  ESP += 4; return;
  /* 12d040e3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12d040e6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12d040ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12d040f4:;
  /* 12d040f4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d040f8 jne 0x12d040fe */
  if (!C.zf) goto L_12d040fe;
  /* 12d040fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d040fc jmp 0x12d04144 */
  goto L_12d04144;
L_12d040fe:;
  /* 12d040fe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d04101 push edx */
  push32((uint32_t)(EDX));
  /* 12d04102 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d04105 push eax */
  push32((uint32_t)(EAX));
  /* 12d04106 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12d04109 push ecx */
  push32((uint32_t)(ECX));
  /* 12d0410a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d0410d push edx */
  push32((uint32_t)(EDX));
  /* 12d0410e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d04110 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12d04113 push eax */
  push32((uint32_t)(EAX));
  /* 12d04114 call dword ptr [0x12d232d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232d4))), 0x12d0411au);
  /* 12d0411a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d0411c jne 0x12d04122 */
  if (!C.zf) goto L_12d04122;
  /* 12d0411e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d04120 jmp 0x12d04144 */
  goto L_12d04144;
L_12d04122:;
  /* 12d04122 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d04125 push ecx */
  push32((uint32_t)(ECX));
  /* 12d04126 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d04129 push edx */
  push32((uint32_t)(EDX));
  /* 12d0412a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12d0412d push eax */
  push32((uint32_t)(EAX));
  /* 12d0412e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d04131 push ecx */
  push32((uint32_t)(ECX));
  /* 12d04132 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d04135 push edx */
  push32((uint32_t)(EDX));
  /* 12d04136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d04139 push eax */
  push32((uint32_t)(EAX));
  /* 12d0413a call dword ptr [0x12d23284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23284))), 0x12d04140u);
  /* 12d04140 jmp 0x12d04144 */
  goto L_12d04144;
L_12d04142:;
  /* 12d04142 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d04144:;
  /* 12d04144 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12d04147 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d0414a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12d04151 pop edi */
  EDI = (pop32());
  /* 12d04152 pop esi */
  ESI = (pop32());
  /* 12d04153 pop ebx */
  EBX = (pop32());
  /* 12d04154 mov esp, ebp */
  ESP = (EBP);
  /* 12d04156 pop ebp */
  EBP = (pop32());
  /* 12d04157 ret  */
  ESPCHK(0x12d03d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014160 @ 0x12d04160 (80 bytes, 32 insns) */
void f_12d04160(void) {
  FTRACE(0x12d04160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d04160 push ebp */
  push32((uint32_t)(EBP));
  /* 12d04161 mov ebp, esp */
  EBP = (ESP);
  /* 12d04163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d04166 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d04169 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d0416c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0416f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d04172:;
  /* 12d04172 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d04175 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d04178 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d0417b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d0417e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d04180 je 0x12d04197 */
  if (C.zf) goto L_12d04197;
  /* 12d04182 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d04185 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d04188 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d0418a je 0x12d04197 */
  if (C.zf) goto L_12d04197;
  /* 12d0418c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d0418f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04192 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d04195 jmp 0x12d04172 */
  goto L_12d04172;
L_12d04197:;
  /* 12d04197 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d0419a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d0419d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d0419f jne 0x12d041a9 */
  if (!C.zf) goto L_12d041a9;
  /* 12d041a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d041a4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d041a7 jmp 0x12d041ac */
  goto L_12d041ac;
L_12d041a9:;
  /* 12d041a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12d041ac:;
  /* 12d041ac mov esp, ebp */
  ESP = (EBP);
  /* 12d041ae pop ebp */
  EBP = (pop32());
  /* 12d041af ret  */
  ESPCHK(0x12d04160u, _esp0);
  ESP += 4; return;
}

/* FUN_100141b0 @ 0x12d041b0 (736 bytes, 224 insns) */
void f_12d041b0(void) {
  FTRACE(0x12d041b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d041b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d041b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d041b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d041b6 push esi */
  push32((uint32_t)(ESI));
  /* 12d041b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d041bb je 0x12d041dc */
  if (C.zf) goto L_12d041dc;
  /* 12d041bd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12d041bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d041c2 push eax */
  push32((uint32_t)(EAX));
  /* 12d041c3 call 0x12d04600 */
  push32(0x12d041c8u); f_12d04600();
  /* 12d041c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d041cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d041ce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d041d2 je 0x12d041dc */
  if (C.zf) goto L_12d041dc;
  /* 12d041d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d041d7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d041da jne 0x12d041e4 */
  if (!C.zf) goto L_12d041e4;
L_12d041dc:;
  /* 12d041dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d041df jmp 0x12d0448b */
  goto L_12d0448b;
L_12d041e4:;
  /* 12d041e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d041e7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d041eb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d041ed sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d041ef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12d041f0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d041f3 mov ecx, dword ptr [0x12d20534] */
  ECX = (r32((uint32_t)(0x12d20534)));
  /* 12d041f9 cmp ecx, dword ptr [0x12d20538] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d20538))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d041ff jne 0x12d04215 */
  if (!C.zf) goto L_12d04215;
  /* 12d04201 mov edx, dword ptr [0x12d20534] */
  EDX = (r32((uint32_t)(0x12d20534)));
  /* 12d04207 push edx */
  push32((uint32_t)(EDX));
  /* 12d04208 call 0x12d04510 */
  push32(0x12d0420du); f_12d04510();
  /* 12d0420d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04210 mov dword ptr [0x12d20534], eax */
  w32((uint32_t)(0x12d20534), (EAX));
L_12d04215:;
  /* 12d04215 cmp dword ptr [0x12d20534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0421c jne 0x12d042d5 */
  if (!C.zf) goto L_12d042d5;
  /* 12d04222 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d04226 je 0x12d04247 */
  if (C.zf) goto L_12d04247;
  /* 12d04228 cmp dword ptr [0x12d2053c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2053c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0422f je 0x12d04247 */
  if (C.zf) goto L_12d04247;
  /* 12d04231 call 0x12d03cb0 */
  push32(0x12d04236u); f_12d03cb0();
  /* 12d04236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d04238 je 0x12d04242 */
  if (C.zf) goto L_12d04242;
  /* 12d0423a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d0423d jmp 0x12d0448b */
  goto L_12d0448b;
L_12d04242:;
  /* 12d04242 jmp 0x12d042d5 */
  goto L_12d042d5;
L_12d04247:;
  /* 12d04247 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0424b je 0x12d04254 */
  if (C.zf) goto L_12d04254;
  /* 12d0424d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d0424f jmp 0x12d0448b */
  goto L_12d0448b;
L_12d04254:;
  /* 12d04254 cmp dword ptr [0x12d20534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0425b jne 0x12d04294 */
  if (!C.zf) goto L_12d04294;
  /* 12d0425d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12d04262 push 0x12d1cd50 */
  push32((uint32_t)(0x12d1cd50u));
  /* 12d04267 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d04269 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d0426b call 0x12cf41b0 */
  push32(0x12d04270u); f_12cf41b0();
  /* 12d04270 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04273 mov dword ptr [0x12d20534], eax */
  w32((uint32_t)(0x12d20534), (EAX));
  /* 12d04278 cmp dword ptr [0x12d20534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0427f jne 0x12d04289 */
  if (!C.zf) goto L_12d04289;
  /* 12d04281 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d04284 jmp 0x12d0448b */
  goto L_12d0448b;
L_12d04289:;
  /* 12d04289 mov eax, dword ptr [0x12d20534] */
  EAX = (r32((uint32_t)(0x12d20534)));
  /* 12d0428e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12d04294:;
  /* 12d04294 cmp dword ptr [0x12d2053c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2053c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0429b jne 0x12d042d5 */
  if (!C.zf) goto L_12d042d5;
  /* 12d0429d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12d042a2 push 0x12d1cd50 */
  push32((uint32_t)(0x12d1cd50u));
  /* 12d042a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d042a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d042ab call 0x12cf41b0 */
  push32(0x12d042b0u); f_12cf41b0();
  /* 12d042b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d042b3 mov dword ptr [0x12d2053c], eax */
  w32((uint32_t)(0x12d2053c), (EAX));
  /* 12d042b8 cmp dword ptr [0x12d2053c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2053c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d042bf jne 0x12d042c9 */
  if (!C.zf) goto L_12d042c9;
  /* 12d042c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d042c4 jmp 0x12d0448b */
  goto L_12d0448b;
L_12d042c9:;
  /* 12d042c9 mov ecx, dword ptr [0x12d2053c] */
  ECX = (r32((uint32_t)(0x12d2053c)));
  /* 12d042cf mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12d042d5:;
  /* 12d042d5 mov edx, dword ptr [0x12d20534] */
  EDX = (r32((uint32_t)(0x12d20534)));
  /* 12d042db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d042de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d042e1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d042e4 push eax */
  push32((uint32_t)(EAX));
  /* 12d042e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d042e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d042e9 call 0x12d04490 */
  push32(0x12d042eeu); f_12d04490();
  /* 12d042ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d042f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d042f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d042f8 jl 0x12d04391 */
  if ((C.sf!=C.of)) goto L_12d04391;
  /* 12d042fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d04301 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d04304 je 0x12d04391 */
  if (C.zf) goto L_12d04391;
  /* 12d0430a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0430e je 0x12d04383 */
  if (C.zf) goto L_12d04383;
  /* 12d04310 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d04312 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d04315 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d04318 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d0431b push edx */
  push32((uint32_t)(EDX));
  /* 12d0431c call 0x12cf4c40 */
  push32(0x12d04321u); f_12cf4c40();
  /* 12d04321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04324 jmp 0x12d0432f */
  goto L_12d0432f;
L_12d04326:;
  /* 12d04326 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d04329 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0432c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d0432f:;
  /* 12d0432f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d04332 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d04335 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d04339 je 0x12d04350 */
  if (C.zf) goto L_12d04350;
  /* 12d0433b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d0433e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d04341 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d04344 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12d04347 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12d0434b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12d0434e jmp 0x12d04326 */
  goto L_12d04326;
L_12d04350:;
  /* 12d04350 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12d04355 push 0x12d1cd50 */
  push32((uint32_t)(0x12d1cd50u));
  /* 12d0435a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d0435c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d0435f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12d04362 push eax */
  push32((uint32_t)(EAX));
  /* 12d04363 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d04366 push ecx */
  push32((uint32_t)(ECX));
  /* 12d04367 call 0x12cf4640 */
  push32(0x12d0436cu); f_12cf4640();
  /* 12d0436c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0436f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d04372 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d04376 je 0x12d04381 */
  if (C.zf) goto L_12d04381;
  /* 12d04378 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d0437b mov dword ptr [0x12d20534], edx */
  w32((uint32_t)(0x12d20534), (EDX));
L_12d04381:;
  /* 12d04381 jmp 0x12d0438f */
  goto L_12d0438f;
L_12d04383:;
  /* 12d04383 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d04386 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d04389 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0438c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12d0438f:;
  /* 12d0438f jmp 0x12d04404 */
  goto L_12d04404;
L_12d04391:;
  /* 12d04391 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d04395 jne 0x12d043fd */
  if (!C.zf) goto L_12d043fd;
  /* 12d04397 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0439b jge 0x12d043a5 */
  if ((C.sf==C.of)) goto L_12d043a5;
  /* 12d0439d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d043a0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d043a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d043a5:;
  /* 12d043a5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12d043aa push 0x12d1cd50 */
  push32((uint32_t)(0x12d1cd50u));
  /* 12d043af push 2 */
  push32((uint32_t)(0x2u));
  /* 12d043b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d043b4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12d043bb push edx */
  push32((uint32_t)(EDX));
  /* 12d043bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d043bf push eax */
  push32((uint32_t)(EAX));
  /* 12d043c0 call 0x12cf4640 */
  push32(0x12d043c5u); f_12cf4640();
  /* 12d043c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d043c8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d043cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d043cf jne 0x12d043d9 */
  if (!C.zf) goto L_12d043d9;
  /* 12d043d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d043d4 jmp 0x12d0448b */
  goto L_12d0448b;
L_12d043d9:;
  /* 12d043d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d043dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d043df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d043e2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12d043e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d043e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d043eb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12d043f3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d043f6 mov dword ptr [0x12d20534], eax */
  w32((uint32_t)(0x12d20534), (EAX));
  /* 12d043fb jmp 0x12d04404 */
  goto L_12d04404;
L_12d043fd:;
  /* 12d043fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d043ff jmp 0x12d0448b */
  goto L_12d0448b;
L_12d04404:;
  /* 12d04404 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d04408 je 0x12d04489 */
  if (C.zf) goto L_12d04489;
  /* 12d0440a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12d0440f push 0x12d1cd50 */
  push32((uint32_t)(0x12d1cd50u));
  /* 12d04414 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d04416 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d04419 push ecx */
  push32((uint32_t)(ECX));
  /* 12d0441a call 0x12cf6fe0 */
  push32(0x12d0441fu); f_12cf6fe0();
  /* 12d0441f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04422 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04425 push eax */
  push32((uint32_t)(EAX));
  /* 12d04426 call 0x12cf41b0 */
  push32(0x12d0442bu); f_12cf41b0();
  /* 12d0442b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0442e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d04431 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d04435 je 0x12d04489 */
  if (C.zf) goto L_12d04489;
  /* 12d04437 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0443a push edx */
  push32((uint32_t)(EDX));
  /* 12d0443b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d0443e push eax */
  push32((uint32_t)(EAX));
  /* 12d0443f call 0x12cf7160 */
  push32(0x12d04444u); f_12cf7160();
  /* 12d04444 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04447 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d0444a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d0444d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d04450 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04452 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d04455 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d04458 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d0445b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d0445e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04461 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d04464 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d04467 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d04469 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d0446b not edx */
  EDX = (~(EDX));
  /* 12d0446d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12d04470 push edx */
  push32((uint32_t)(EDX));
  /* 12d04471 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d04474 push eax */
  push32((uint32_t)(EAX));
  /* 12d04475 call dword ptr [0x12d23280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23280))), 0x12d0447bu);
  /* 12d0447b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d0447d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d04480 push ecx */
  push32((uint32_t)(ECX));
  /* 12d04481 call 0x12cf4c40 */
  push32(0x12d04486u); f_12cf4c40();
  /* 12d04486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d04489:;
  /* 12d04489 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d0448b:;
  /* 12d0448b pop esi */
  ESI = (pop32());
  /* 12d0448c mov esp, ebp */
  ESP = (EBP);
  /* 12d0448e pop ebp */
  EBP = (pop32());
  /* 12d0448f ret  */
  ESPCHK(0x12d041b0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12d04490 (124 bytes, 47 insns) */
void f_12d04490(void) {
  FTRACE(0x12d04490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d04490 push ebp */
  push32((uint32_t)(EBP));
  /* 12d04491 mov ebp, esp */
  EBP = (ESP);
  /* 12d04493 push ecx */
  push32((uint32_t)(ECX));
  /* 12d04494 mov eax, dword ptr [0x12d20534] */
  EAX = (r32((uint32_t)(0x12d20534)));
  /* 12d04499 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d0449c jmp 0x12d044a7 */
  goto L_12d044a7;
L_12d0449e:;
  /* 12d0449e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d044a1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d044a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d044a7:;
  /* 12d044a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d044aa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d044ad je 0x12d044fa */
  if (C.zf) goto L_12d044fa;
  /* 12d044af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d044b2 push eax */
  push32((uint32_t)(EAX));
  /* 12d044b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d044b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d044b8 push edx */
  push32((uint32_t)(EDX));
  /* 12d044b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d044bc push eax */
  push32((uint32_t)(EAX));
  /* 12d044bd call 0x12d03c60 */
  push32(0x12d044c2u); f_12d03c60();
  /* 12d044c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d044c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d044c7 jne 0x12d044f8 */
  if (!C.zf) goto L_12d044f8;
  /* 12d044c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d044cc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d044ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d044d1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12d044d5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d044d8 je 0x12d044ea */
  if (C.zf) goto L_12d044ea;
  /* 12d044da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d044dd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d044df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d044e2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12d044e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d044e8 jne 0x12d044f8 */
  if (!C.zf) goto L_12d044f8;
L_12d044ea:;
  /* 12d044ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d044ed sub eax, dword ptr [0x12d20534] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d20534))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d044f3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12d044f6 jmp 0x12d04508 */
  goto L_12d04508;
L_12d044f8:;
  /* 12d044f8 jmp 0x12d0449e */
  goto L_12d0449e;
L_12d044fa:;
  /* 12d044fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d044fd sub eax, dword ptr [0x12d20534] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d20534))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d04503 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12d04506 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12d04508:;
  /* 12d04508 mov esp, ebp */
  ESP = (EBP);
  /* 12d0450a pop ebp */
  EBP = (pop32());
  /* 12d0450b ret  */
  ESPCHK(0x12d04490u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12d04510 (238 bytes, 80 insns) */
void f_12d04510(void) {
  FTRACE(0x12d04510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d04510 push ebp */
  push32((uint32_t)(EBP));
  /* 12d04511 mov ebp, esp */
  EBP = (ESP);
  /* 12d04513 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d04516 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d0451d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d04520 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d04523 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d04527 jne 0x12d04530 */
  if (!C.zf) goto L_12d04530;
  /* 12d04529 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d0452b jmp 0x12d045fa */
  goto L_12d045fa;
L_12d04530:;
  /* 12d04530 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d04533 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d04535 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d04538 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0453b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d0453e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d04540 je 0x12d0454d */
  if (C.zf) goto L_12d0454d;
  /* 12d04542 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d04545 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04548 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d0454b jmp 0x12d04530 */
  goto L_12d04530;
L_12d0454d:;
  /* 12d0454d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12d04552 push 0x12d1cd50 */
  push32((uint32_t)(0x12d1cd50u));
  /* 12d04557 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d04559 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d0455c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12d04563 push eax */
  push32((uint32_t)(EAX));
  /* 12d04564 call 0x12cf41b0 */
  push32(0x12d04569u); f_12cf41b0();
  /* 12d04569 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0456c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d0456f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d04572 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d04575 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d04579 jne 0x12d04585 */
  if (!C.zf) goto L_12d04585;
  /* 12d0457b push 9 */
  push32((uint32_t)(0x9u));
  /* 12d0457d call 0x12cf3120 */
  push32(0x12d04582u); f_12cf3120();
  /* 12d04582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d04585:;
  /* 12d04585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d04588 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d0458b:;
  /* 12d0458b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d0458e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d04591 je 0x12d045ee */
  if (C.zf) goto L_12d045ee;
  /* 12d04593 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12d04598 push 0x12d1cd50 */
  push32((uint32_t)(0x12d1cd50u));
  /* 12d0459d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d0459f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d045a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d045a4 push edx */
  push32((uint32_t)(EDX));
  /* 12d045a5 call 0x12cf6fe0 */
  push32(0x12d045aau); f_12cf6fe0();
  /* 12d045aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d045ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d045b0 push eax */
  push32((uint32_t)(EAX));
  /* 12d045b1 call 0x12cf41b0 */
  push32(0x12d045b6u); f_12cf41b0();
  /* 12d045b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d045b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d045bc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d045be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d045c1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d045c4 je 0x12d045da */
  if (C.zf) goto L_12d045da;
  /* 12d045c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d045c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d045cb push ecx */
  push32((uint32_t)(ECX));
  /* 12d045cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d045cf mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d045d1 push eax */
  push32((uint32_t)(EAX));
  /* 12d045d2 call 0x12cf7160 */
  push32(0x12d045d7u); f_12cf7160();
  /* 12d045d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d045da:;
  /* 12d045da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d045dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d045e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d045e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d045e6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d045e9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d045ec jmp 0x12d0458b */
  goto L_12d0458b;
L_12d045ee:;
  /* 12d045ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d045f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d045f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d045fa:;
  /* 12d045fa mov esp, ebp */
  ESP = (EBP);
  /* 12d045fc pop ebp */
  EBP = (pop32());
  /* 12d045fd ret  */
  ESPCHK(0x12d04510u, _esp0);
  ESP += 4; return;
}

/* FUN_10014600 @ 0x12d04600 (237 bytes, 81 insns) */
void f_12d04600(void) {
  FTRACE(0x12d04600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d04600 push ebp */
  push32((uint32_t)(EBP));
  /* 12d04601 mov ebp, esp */
  EBP = (ESP);
  /* 12d04603 push ecx */
  push32((uint32_t)(ECX));
  /* 12d04604 cmp dword ptr [0x12d21c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d21c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0460b jne 0x12d04622 */
  if (!C.zf) goto L_12d04622;
  /* 12d0460d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d04610 push eax */
  push32((uint32_t)(EAX));
  /* 12d04611 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d04614 push ecx */
  push32((uint32_t)(ECX));
  /* 12d04615 call 0x12d04700 */
  push32(0x12d0461au); f_12d04700();
  /* 12d0461a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0461d jmp 0x12d046e9 */
  goto L_12d046e9;
L_12d04622:;
  /* 12d04622 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d04624 call 0x12cf7bb0 */
  push32(0x12d04629u); f_12cf7bb0();
  /* 12d04629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0462c jmp 0x12d04637 */
  goto L_12d04637;
L_12d0462e:;
  /* 12d0462e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d04631 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04634 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12d04637:;
  /* 12d04637 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0463a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12d0463e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12d04642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d04645 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d0464b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d0464d je 0x12d046cb */
  if (C.zf) goto L_12d046cb;
  /* 12d0464f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d04652 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d04657 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d04659 mov cl, byte ptr [eax + 0x12d21da1] */
  CL = (r8((uint32_t)(EAX + 0x12d21da1)));
  /* 12d0465f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d04662 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d04664 je 0x12d046b6 */
  if (C.zf) goto L_12d046b6;
  /* 12d04666 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d04669 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0466c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d0466f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d04672 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d04674 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d04676 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d04678 jne 0x12d04688 */
  if (!C.zf) goto L_12d04688;
  /* 12d0467a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d0467c call 0x12cf7c50 */
  push32(0x12d04681u); f_12cf7c50();
  /* 12d04681 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04684 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d04686 jmp 0x12d046e9 */
  goto L_12d046e9;
L_12d04688:;
  /* 12d04688 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d0468b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d04691 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12d04694 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d04697 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d04699 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d0469b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12d0469d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d046a0 jne 0x12d046b4 */
  if (!C.zf) goto L_12d046b4;
  /* 12d046a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d046a4 call 0x12cf7c50 */
  push32(0x12d046a9u); f_12cf7c50();
  /* 12d046a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d046ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d046af sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d046b2 jmp 0x12d046e9 */
  goto L_12d046e9;
L_12d046b4:;
  /* 12d046b4 jmp 0x12d046c6 */
  goto L_12d046c6;
L_12d046b6:;
  /* 12d046b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d046b9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d046bf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d046c2 jne 0x12d046c6 */
  if (!C.zf) goto L_12d046c6;
  /* 12d046c4 jmp 0x12d046cb */
  goto L_12d046cb;
L_12d046c6:;
  /* 12d046c6 jmp 0x12d0462e */
  goto L_12d0462e;
L_12d046cb:;
  /* 12d046cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12d046cd call 0x12cf7c50 */
  push32(0x12d046d2u); f_12cf7c50();
  /* 12d046d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d046d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d046d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d046dd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d046e0 jne 0x12d046e7 */
  if (!C.zf) goto L_12d046e7;
  /* 12d046e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d046e5 jmp 0x12d046e9 */
  goto L_12d046e9;
L_12d046e7:;
  /* 12d046e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d046e9:;
  /* 12d046e9 mov esp, ebp */
  ESP = (EBP);
  /* 12d046eb pop ebp */
  EBP = (pop32());
  /* 12d046ec ret  */
  ESPCHK(0x12d04600u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12d04700 (193 bytes, 87 insns) */
void f_12d04700(void) {
  FTRACE(0x12d04700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d04700 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d04702 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12d04706 push ebx */
  push32((uint32_t)(EBX));
  /* 12d04707 mov ebx, eax */
  EBX = (EAX);
  /* 12d04709 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12d0470c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d04710 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12d04716 je 0x12d0472b */
  if (C.zf) goto L_12d0472b;
L_12d04718:;
  /* 12d04718 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12d0471a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12d0471b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d0471d je 0x12d046f0 */
  if (C.zf) { jmp_ind(0x12d046f0u); return; }
  /* 12d0471f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12d04721 je 0x12d04774 */
  if (C.zf) goto L_12d04774;
  /* 12d04723 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12d04729 jne 0x12d04718 */
  if (!C.zf) goto L_12d04718;
L_12d0472b:;
  /* 12d0472b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12d0472d push edi */
  push32((uint32_t)(EDI));
  /* 12d0472e mov eax, ebx */
  EAX = (EBX);
  /* 12d04730 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12d04733 push esi */
  push32((uint32_t)(ESI));
  /* 12d04734 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12d04736:;
  /* 12d04736 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12d04738 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12d0473d mov eax, ecx */
  EAX = (ECX);
  /* 12d0473f mov esi, edi */
  ESI = (EDI);
  /* 12d04741 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12d04743 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04745 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04747 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d0474a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d0474d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12d0474f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12d04751 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d04754 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12d0475a jne 0x12d04778 */
  if (!C.zf) goto L_12d04778;
  /* 12d0475c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12d04761 je 0x12d04736 */
  if (C.zf) goto L_12d04736;
  /* 12d04763 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12d04768 jne 0x12d04772 */
  if (!C.zf) goto L_12d04772;
  /* 12d0476a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12d04770 jne 0x12d04736 */
  if (!C.zf) goto L_12d04736;
L_12d04772:;
  /* 12d04772 pop esi */
  ESI = (pop32());
  /* 12d04773 pop edi */
  EDI = (pop32());
L_12d04774:;
  /* 12d04774 pop ebx */
  EBX = (pop32());
  /* 12d04775 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d04777 ret  */
  ESPCHK(0x12d04700u, _esp0);
  ESP += 4; return;
L_12d04778:;
  /* 12d04778 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12d0477b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d0477d je 0x12d047b5 */
  if (C.zf) goto L_12d047b5;
  /* 12d0477f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d04781 je 0x12d04772 */
  if (C.zf) goto L_12d04772;
  /* 12d04783 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d04785 je 0x12d047ae */
  if (C.zf) goto L_12d047ae;
  /* 12d04787 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12d04789 je 0x12d04772 */
  if (C.zf) goto L_12d04772;
  /* 12d0478b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d0478e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d04790 je 0x12d047a7 */
  if (C.zf) goto L_12d047a7;
  /* 12d04792 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d04794 je 0x12d04772 */
  if (C.zf) goto L_12d04772;
  /* 12d04796 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12d04798 je 0x12d047a0 */
  if (C.zf) goto L_12d047a0;
  /* 12d0479a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12d0479c je 0x12d04772 */
  if (C.zf) goto L_12d04772;
  /* 12d0479e jmp 0x12d04736 */
  goto L_12d04736;
L_12d047a0:;
  /* 12d047a0 pop esi */
  ESI = (pop32());
  /* 12d047a1 pop edi */
  EDI = (pop32());
  /* 12d047a2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12d047a5 pop ebx */
  EBX = (pop32());
  /* 12d047a6 ret  */
  ESPCHK(0x12d04700u, _esp0);
  ESP += 4; return;
L_12d047a7:;
  /* 12d047a7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12d047aa pop esi */
  ESI = (pop32());
  /* 12d047ab pop edi */
  EDI = (pop32());
  /* 12d047ac pop ebx */
  EBX = (pop32());
  /* 12d047ad ret  */
  ESPCHK(0x12d04700u, _esp0);
  ESP += 4; return;
L_12d047ae:;
  /* 12d047ae lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12d047b1 pop esi */
  ESI = (pop32());
  /* 12d047b2 pop edi */
  EDI = (pop32());
  /* 12d047b3 pop ebx */
  EBX = (pop32());
  /* 12d047b4 ret  */
  ESPCHK(0x12d04700u, _esp0);
  ESP += 4; return;
L_12d047b5:;
  /* 12d047b5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12d047b8 pop esi */
  ESI = (pop32());
  /* 12d047b9 pop edi */
  EDI = (pop32());
  /* 12d047ba pop ebx */
  EBX = (pop32());
  /* 12d047bb ret  */
  ESPCHK(0x12d04700u, _esp0);
  ESP += 4; return;
  /* 12d047bc jmp dword ptr [0x12d232f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12d232f8)))); return;
}

/* RtlUnwind @ 0x12d0490c (6 bytes, 1 insns) */
void f_12d0490c(void) {
  FTRACE(0x12d0490cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d0490c jmp dword ptr [0x12d232bc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12d232bc)))); return;
}

