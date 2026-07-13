#include "recomp.h"

/* FUN_10014540 @ 0x118a4540 (393 bytes, 123 insns) */
void f_118a4540(void) {
  FTRACE(0x118a4540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a4540 push ebp */
  push32((uint32_t)(EBP));
  /* 118a4541 mov ebp, esp */
  EBP = (ESP);
  /* 118a4543 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4546 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a454a jne 0x118a4556 */
  if (!C.zf) goto L_118a4556;
  /* 118a454c mov eax, dword ptr [0x118c2c98] */
  EAX = (r32((uint32_t)(0x118c2c98)));
  /* 118a4551 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118a4554 jmp 0x118a455c */
  goto L_118a455c;
L_118a4556:;
  /* 118a4556 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a4559 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_118a455c:;
  /* 118a455c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a455f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118a4562 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4565 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a4568 push 0x118c3b44 */
  push32((uint32_t)(0x118c3b44u));
  /* 118a456d call dword ptr [0x118c63ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63ac))), 0x118a4573u);
  /* 118a4573 cmp dword ptr [0x118c3b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a457a je 0x118a459a */
  if (C.zf) goto L_118a459a;
  /* 118a457c push 0x118c3b44 */
  push32((uint32_t)(0x118c3b44u));
  /* 118a4581 call dword ptr [0x118c639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c639c))), 0x118a4587u);
  /* 118a4587 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118a4589 call 0x1189ac00 */
  push32(0x118a458eu); f_1189ac00();
  /* 118a458e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4591 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 118a4598 jmp 0x118a45a1 */
  goto L_118a45a1;
L_118a459a:;
  /* 118a459a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_118a45a1:;
  /* 118a45a1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a45a5 jbe 0x118a4692 */
  if ((C.cf||C.zf)) goto L_118a4692;
  /* 118a45ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a45ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118a45b0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 118a45b3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a45b7 je 0x118a45c1 */
  if (C.zf) goto L_118a45c1;
  /* 118a45b9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a45bd je 0x118a45c6 */
  if (C.zf) goto L_118a45c6;
  /* 118a45bf jmp 0x118a4620 */
  goto L_118a4620;
L_118a45c1:;
  /* 118a45c1 jmp 0x118a4692 */
  goto L_118a4692;
L_118a45c6:;
  /* 118a45c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a45c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a45cc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 118a45cf mov dword ptr [0x118c3b20], 0 */
  w32((uint32_t)(0x118c3b20), (0x0u));
  /* 118a45d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a45dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118a45df cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a45e2 jne 0x118a45f7 */
  if (!C.zf) goto L_118a45f7;
  /* 118a45e4 mov dword ptr [0x118c3b20], 1 */
  w32((uint32_t)(0x118c3b20), (0x1u));
  /* 118a45ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a45f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a45f4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_118a45f7:;
  /* 118a45f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a45fa push ecx */
  push32((uint32_t)(ECX));
  /* 118a45fb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 118a45fe push edx */
  push32((uint32_t)(EDX));
  /* 118a45ff lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 118a4602 push eax */
  push32((uint32_t)(EAX));
  /* 118a4603 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4606 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4607 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a460a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a460c push eax */
  push32((uint32_t)(EAX));
  /* 118a460d call 0x118a46d0 */
  push32(0x118a4612u); f_118a46d0();
  /* 118a4612 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4615 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4618 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a461b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 118a461e jmp 0x118a468d */
  goto L_118a468d;
L_118a4620:;
  /* 118a4620 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4623 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a4625 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a4627 mov ecx, dword ptr [0x118c1c98] */
  ECX = (r32((uint32_t)(0x118c1c98)));
  /* 118a462d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a462f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 118a4633 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 118a4639 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a463b je 0x118a4668 */
  if (C.zf) goto L_118a4668;
  /* 118a463d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4641 jbe 0x118a4668 */
  if ((C.cf||C.zf)) goto L_118a4668;
  /* 118a4643 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4646 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4649 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118a464b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 118a464d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4650 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4653 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118a4656 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4659 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a465c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 118a465f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4662 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4665 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_118a4668:;
  /* 118a4668 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a466b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a466e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118a4670 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 118a4672 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4675 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4678 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118a467b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a467e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4681 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 118a4684 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4687 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a468a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_118a468d:;
  /* 118a468d jmp 0x118a45a1 */
  goto L_118a45a1;
L_118a4692:;
  /* 118a4692 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4696 je 0x118a46a4 */
  if (C.zf) goto L_118a46a4;
  /* 118a4698 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118a469a call 0x1189aca0 */
  push32(0x118a469fu); f_1189aca0();
  /* 118a469f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a46a2 jmp 0x118a46af */
  goto L_118a46af;
L_118a46a4:;
  /* 118a46a4 push 0x118c3b44 */
  push32((uint32_t)(0x118c3b44u));
  /* 118a46a9 call dword ptr [0x118c639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c639c))), 0x118a46afu);
L_118a46af:;
  /* 118a46af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a46b3 jbe 0x118a46c3 */
  if ((C.cf||C.zf)) goto L_118a46c3;
  /* 118a46b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a46b8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 118a46bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a46be sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a46c1 jmp 0x118a46c5 */
  goto L_118a46c5;
L_118a46c3:;
  /* 118a46c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a46c5:;
  /* 118a46c5 mov esp, ebp */
  ESP = (EBP);
  /* 118a46c7 pop ebp */
  EBP = (pop32());
  /* 118a46c8 ret  */
  ESPCHK(0x118a4540u, _esp0);
  ESP += 4; return;
}

/* FUN_100146d0 @ 0x118a46d0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_118a46d0(void) {
  FTRACE(0x118a46d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a46d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a46d1 mov ebp, esp */
  EBP = (ESP);
  /* 118a46d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a46d6 push esi */
  push32((uint32_t)(ESI));
  /* 118a46d7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 118a46db mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a46de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a46e1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a46e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a46e7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a46eb ja 0x118a4c38 */
  if ((!C.cf&&!C.zf)) goto L_118a4c38;
  /* 118a46f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a46f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a46f6 mov dl, byte ptr [eax + 0x118a4c99] */
  DL = (r8((uint32_t)(EAX + 0x118a4c99)));
  /* 118a46fc jmp dword ptr [edx*4 + 0x118a4c3d] */
  switch (EDX) {
    case 0: goto L_118a4c16;
    case 1: goto L_118a4725;
    case 2: goto L_118a476b;
    case 3: goto L_118a48b8;
    case 4: goto L_118a48e0;
    case 5: goto L_118a497f;
    case 6: goto L_118a49eb;
    case 7: goto L_118a4a14;
    case 8: goto L_118a4a55;
    case 9: goto L_118a4b37;
    case 10: goto L_118a4b9e;
    case 11: goto L_118a4beb;
    case 12: goto L_118a4703;
    case 13: goto L_118a4748;
    case 14: goto L_118a478e;
    case 15: goto L_118a488e;
    case 16: goto L_118a4925;
    case 17: goto L_118a4952;
    case 18: goto L_118a49a7;
    case 19: goto L_118a4a2b;
    case 20: goto L_118a4ad9;
    case 21: goto L_118a4b68;
    case 22: goto L_118a4c38;
    default: x86_unimpl("switch@0x118a46fc out of table"); return;
  }
L_118a4703:;
  /* 118a4703 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4706 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4707 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a470a push edx */
  push32((uint32_t)(EDX));
  /* 118a470b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a470e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 118a4711 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a4714 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 118a4717 push eax */
  push32((uint32_t)(EAX));
  /* 118a4718 call 0x118a4cf0 */
  push32(0x118a471du); f_118a4cf0();
  /* 118a471d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4720 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a4725:;
  /* 118a4725 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4728 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4729 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a472c push edx */
  push32((uint32_t)(EDX));
  /* 118a472d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4730 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 118a4733 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a4736 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 118a473a push eax */
  push32((uint32_t)(EAX));
  /* 118a473b call 0x118a4cf0 */
  push32(0x118a4740u); f_118a4cf0();
  /* 118a4740 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4743 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a4748:;
  /* 118a4748 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a474b push ecx */
  push32((uint32_t)(ECX));
  /* 118a474c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a474f push edx */
  push32((uint32_t)(EDX));
  /* 118a4750 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4753 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 118a4756 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a4759 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 118a475d push eax */
  push32((uint32_t)(EAX));
  /* 118a475e call 0x118a4cf0 */
  push32(0x118a4763u); f_118a4cf0();
  /* 118a4763 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4766 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a476b:;
  /* 118a476b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a476e push ecx */
  push32((uint32_t)(ECX));
  /* 118a476f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4772 push edx */
  push32((uint32_t)(EDX));
  /* 118a4773 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4776 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 118a4779 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a477c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 118a4780 push eax */
  push32((uint32_t)(EAX));
  /* 118a4781 call 0x118a4cf0 */
  push32(0x118a4786u); f_118a4cf0();
  /* 118a4786 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4789 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a478e:;
  /* 118a478e cmp dword ptr [0x118c3b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4795 je 0x118a4816 */
  if (C.zf) goto L_118a4816;
  /* 118a4797 mov dword ptr [0x118c3b20], 0 */
  w32((uint32_t)(0x118c3b20), (0x0u));
  /* 118a47a1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a47a4 push ecx */
  push32((uint32_t)(ECX));
  /* 118a47a5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a47a8 push edx */
  push32((uint32_t)(EDX));
  /* 118a47a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a47ac push eax */
  push32((uint32_t)(EAX));
  /* 118a47ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a47b0 push ecx */
  push32((uint32_t)(ECX));
  /* 118a47b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a47b4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 118a47ba push eax */
  push32((uint32_t)(EAX));
  /* 118a47bb call 0x118a4ea0 */
  push32(0x118a47c0u); f_118a4ea0();
  /* 118a47c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a47c3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a47c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a47c9 jne 0x118a47d0 */
  if (!C.zf) goto L_118a47d0;
  /* 118a47cb jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a47d0:;
  /* 118a47d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a47d3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a47d5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 118a47d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a47db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a47dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a47e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a47e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118a47e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a47e8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a47ea sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a47ed mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a47f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118a47f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a47f5 push ecx */
  push32((uint32_t)(ECX));
  /* 118a47f6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a47f9 push edx */
  push32((uint32_t)(EDX));
  /* 118a47fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a47fd push eax */
  push32((uint32_t)(EAX));
  /* 118a47fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4801 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4802 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a4805 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 118a480b push eax */
  push32((uint32_t)(EAX));
  /* 118a480c call 0x118a4ea0 */
  push32(0x118a4811u); f_118a4ea0();
  /* 118a4811 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4814 jmp 0x118a4889 */
  goto L_118a4889;
L_118a4816:;
  /* 118a4816 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a4819 push ecx */
  push32((uint32_t)(ECX));
  /* 118a481a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a481d push edx */
  push32((uint32_t)(EDX));
  /* 118a481e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4821 push eax */
  push32((uint32_t)(EAX));
  /* 118a4822 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4825 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4826 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a4829 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 118a482f push eax */
  push32((uint32_t)(EAX));
  /* 118a4830 call 0x118a4ea0 */
  push32(0x118a4835u); f_118a4ea0();
  /* 118a4835 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4838 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a483b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a483e jne 0x118a4845 */
  if (!C.zf) goto L_118a4845;
  /* 118a4840 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a4845:;
  /* 118a4845 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4848 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a484a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 118a484d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4850 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a4852 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4855 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4858 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118a485a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a485d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a485f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4862 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4865 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118a4867 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a486a push ecx */
  push32((uint32_t)(ECX));
  /* 118a486b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a486e push edx */
  push32((uint32_t)(EDX));
  /* 118a486f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4872 push eax */
  push32((uint32_t)(EAX));
  /* 118a4873 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4876 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4877 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a487a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 118a4880 push eax */
  push32((uint32_t)(EAX));
  /* 118a4881 call 0x118a4ea0 */
  push32(0x118a4886u); f_118a4ea0();
  /* 118a4886 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a4889:;
  /* 118a4889 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a488e:;
  /* 118a488e mov ecx, dword ptr [0x118c3b20] */
  ECX = (r32((uint32_t)(0x118c3b20)));
  /* 118a4894 mov dword ptr [0x118c3b30], ecx */
  w32((uint32_t)(0x118c3b30), (ECX));
  /* 118a489a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a489d push edx */
  push32((uint32_t)(EDX));
  /* 118a489e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a48a1 push eax */
  push32((uint32_t)(EAX));
  /* 118a48a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a48a4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a48a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118a48aa push edx */
  push32((uint32_t)(EDX));
  /* 118a48ab call 0x118a4d40 */
  push32(0x118a48b0u); f_118a4d40();
  /* 118a48b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a48b3 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a48b8:;
  /* 118a48b8 mov eax, dword ptr [0x118c3b20] */
  EAX = (r32((uint32_t)(0x118c3b20)));
  /* 118a48bd mov dword ptr [0x118c3b30], eax */
  w32((uint32_t)(0x118c3b30), (EAX));
  /* 118a48c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a48c5 push ecx */
  push32((uint32_t)(ECX));
  /* 118a48c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a48c9 push edx */
  push32((uint32_t)(EDX));
  /* 118a48ca push 2 */
  push32((uint32_t)(0x2u));
  /* 118a48cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a48cf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 118a48d2 push ecx */
  push32((uint32_t)(ECX));
  /* 118a48d3 call 0x118a4d40 */
  push32(0x118a48d8u); f_118a4d40();
  /* 118a48d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a48db jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a48e0:;
  /* 118a48e0 mov edx, dword ptr [0x118c3b20] */
  EDX = (r32((uint32_t)(0x118c3b20)));
  /* 118a48e6 mov dword ptr [0x118c3b30], edx */
  w32((uint32_t)(0x118c3b30), (EDX));
  /* 118a48ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a48ef mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 118a48f2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118a48f3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 118a48f8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118a48fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118a48fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4901 jne 0x118a490a */
  if (!C.zf) goto L_118a490a;
  /* 118a4903 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_118a490a:;
  /* 118a490a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a490d push edx */
  push32((uint32_t)(EDX));
  /* 118a490e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4911 push eax */
  push32((uint32_t)(EAX));
  /* 118a4912 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a4914 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4917 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4918 call 0x118a4d40 */
  push32(0x118a491du); f_118a4d40();
  /* 118a491d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4920 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a4925:;
  /* 118a4925 mov edx, dword ptr [0x118c3b20] */
  EDX = (r32((uint32_t)(0x118c3b20)));
  /* 118a492b mov dword ptr [0x118c3b30], edx */
  w32((uint32_t)(0x118c3b30), (EDX));
  /* 118a4931 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4934 push eax */
  push32((uint32_t)(EAX));
  /* 118a4935 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4938 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4939 push 3 */
  push32((uint32_t)(0x3u));
  /* 118a493b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a493e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 118a4941 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4944 push eax */
  push32((uint32_t)(EAX));
  /* 118a4945 call 0x118a4d40 */
  push32(0x118a494au); f_118a4d40();
  /* 118a494a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a494d jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a4952:;
  /* 118a4952 mov ecx, dword ptr [0x118c3b20] */
  ECX = (r32((uint32_t)(0x118c3b20)));
  /* 118a4958 mov dword ptr [0x118c3b30], ecx */
  w32((uint32_t)(0x118c3b30), (ECX));
  /* 118a495e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4961 push edx */
  push32((uint32_t)(EDX));
  /* 118a4962 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4965 push eax */
  push32((uint32_t)(EAX));
  /* 118a4966 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a4968 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a496b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 118a496e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4971 push edx */
  push32((uint32_t)(EDX));
  /* 118a4972 call 0x118a4d40 */
  push32(0x118a4977u); f_118a4d40();
  /* 118a4977 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a497a jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a497f:;
  /* 118a497f mov eax, dword ptr [0x118c3b20] */
  EAX = (r32((uint32_t)(0x118c3b20)));
  /* 118a4984 mov dword ptr [0x118c3b30], eax */
  w32((uint32_t)(0x118c3b30), (EAX));
  /* 118a4989 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a498c push ecx */
  push32((uint32_t)(ECX));
  /* 118a498d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4990 push edx */
  push32((uint32_t)(EDX));
  /* 118a4991 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a4993 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4996 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 118a4999 push ecx */
  push32((uint32_t)(ECX));
  /* 118a499a call 0x118a4d40 */
  push32(0x118a499fu); f_118a4d40();
  /* 118a499f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a49a2 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a49a7:;
  /* 118a49a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a49aa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a49ae jg 0x118a49cc */
  if ((!C.zf&&C.sf==C.of)) goto L_118a49cc;
  /* 118a49b0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a49b3 push eax */
  push32((uint32_t)(EAX));
  /* 118a49b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a49b7 push ecx */
  push32((uint32_t)(ECX));
  /* 118a49b8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a49bb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 118a49c1 push eax */
  push32((uint32_t)(EAX));
  /* 118a49c2 call 0x118a4cf0 */
  push32(0x118a49c7u); f_118a4cf0();
  /* 118a49c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a49ca jmp 0x118a49e6 */
  goto L_118a49e6;
L_118a49cc:;
  /* 118a49cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a49cf push ecx */
  push32((uint32_t)(ECX));
  /* 118a49d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a49d3 push edx */
  push32((uint32_t)(EDX));
  /* 118a49d4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a49d7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 118a49dd push ecx */
  push32((uint32_t)(ECX));
  /* 118a49de call 0x118a4cf0 */
  push32(0x118a49e3u); f_118a4cf0();
  /* 118a49e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a49e6:;
  /* 118a49e6 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a49eb:;
  /* 118a49eb mov edx, dword ptr [0x118c3b20] */
  EDX = (r32((uint32_t)(0x118c3b20)));
  /* 118a49f1 mov dword ptr [0x118c3b30], edx */
  w32((uint32_t)(0x118c3b30), (EDX));
  /* 118a49f7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a49fa push eax */
  push32((uint32_t)(EAX));
  /* 118a49fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a49fe push ecx */
  push32((uint32_t)(ECX));
  /* 118a49ff push 2 */
  push32((uint32_t)(0x2u));
  /* 118a4a01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4a04 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a4a06 push eax */
  push32((uint32_t)(EAX));
  /* 118a4a07 call 0x118a4d40 */
  push32(0x118a4a0cu); f_118a4d40();
  /* 118a4a0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4a0f jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a4a14:;
  /* 118a4a14 mov ecx, dword ptr [0x118c3b20] */
  ECX = (r32((uint32_t)(0x118c3b20)));
  /* 118a4a1a mov dword ptr [0x118c3b30], ecx */
  w32((uint32_t)(0x118c3b30), (ECX));
  /* 118a4a20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4a23 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 118a4a26 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a4a29 jmp 0x118a4a7d */
  goto L_118a4a7d;
L_118a4a2b:;
  /* 118a4a2b mov ecx, dword ptr [0x118c3b20] */
  ECX = (r32((uint32_t)(0x118c3b20)));
  /* 118a4a31 mov dword ptr [0x118c3b30], ecx */
  w32((uint32_t)(0x118c3b30), (ECX));
  /* 118a4a37 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4a3a push edx */
  push32((uint32_t)(EDX));
  /* 118a4a3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4a3e push eax */
  push32((uint32_t)(EAX));
  /* 118a4a3f push 1 */
  push32((uint32_t)(0x1u));
  /* 118a4a41 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4a44 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 118a4a47 push edx */
  push32((uint32_t)(EDX));
  /* 118a4a48 call 0x118a4d40 */
  push32(0x118a4a4du); f_118a4d40();
  /* 118a4a4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4a50 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a4a55:;
  /* 118a4a55 mov eax, dword ptr [0x118c3b20] */
  EAX = (r32((uint32_t)(0x118c3b20)));
  /* 118a4a5a mov dword ptr [0x118c3b30], eax */
  w32((uint32_t)(0x118c3b30), (EAX));
  /* 118a4a5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4a62 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4a66 jne 0x118a4a71 */
  if (!C.zf) goto L_118a4a71;
  /* 118a4a68 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 118a4a6f jmp 0x118a4a7d */
  goto L_118a4a7d;
L_118a4a71:;
  /* 118a4a71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4a74 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 118a4a77 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4a7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118a4a7d:;
  /* 118a4a7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4a80 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 118a4a83 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4a86 jge 0x118a4a91 */
  if ((C.sf==C.of)) goto L_118a4a91;
  /* 118a4a88 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118a4a8f jmp 0x118a4abe */
  goto L_118a4abe;
L_118a4a91:;
  /* 118a4a91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4a94 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 118a4a97 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118a4a98 mov ecx, 7 */
  ECX = (0x7u);
  /* 118a4a9d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118a4a9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a4aa2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4aa5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 118a4aa8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118a4aa9 mov ecx, 7 */
  ECX = (0x7u);
  /* 118a4aae idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118a4ab0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4ab3 jl 0x118a4abe */
  if ((C.sf!=C.of)) goto L_118a4abe;
  /* 118a4ab5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4ab8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4abb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_118a4abe:;
  /* 118a4abe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4ac1 push eax */
  push32((uint32_t)(EAX));
  /* 118a4ac2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4ac5 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4ac6 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a4ac8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4acb push edx */
  push32((uint32_t)(EDX));
  /* 118a4acc call 0x118a4d40 */
  push32(0x118a4ad1u); f_118a4d40();
  /* 118a4ad1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4ad4 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a4ad9:;
  /* 118a4ad9 cmp dword ptr [0x118c3b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4ae0 je 0x118a4b10 */
  if (C.zf) goto L_118a4b10;
  /* 118a4ae2 mov dword ptr [0x118c3b20], 0 */
  w32((uint32_t)(0x118c3b20), (0x0u));
  /* 118a4aec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a4aef push eax */
  push32((uint32_t)(EAX));
  /* 118a4af0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4af3 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4af4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4af7 push edx */
  push32((uint32_t)(EDX));
  /* 118a4af8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4afb push eax */
  push32((uint32_t)(EAX));
  /* 118a4afc mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a4aff mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 118a4b05 push edx */
  push32((uint32_t)(EDX));
  /* 118a4b06 call 0x118a4ea0 */
  push32(0x118a4b0bu); f_118a4ea0();
  /* 118a4b0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4b0e jmp 0x118a4b32 */
  goto L_118a4b32;
L_118a4b10:;
  /* 118a4b10 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a4b13 push eax */
  push32((uint32_t)(EAX));
  /* 118a4b14 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4b17 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4b18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4b1b push edx */
  push32((uint32_t)(EDX));
  /* 118a4b1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4b1f push eax */
  push32((uint32_t)(EAX));
  /* 118a4b20 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a4b23 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 118a4b29 push edx */
  push32((uint32_t)(EDX));
  /* 118a4b2a call 0x118a4ea0 */
  push32(0x118a4b2fu); f_118a4ea0();
  /* 118a4b2f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a4b32:;
  /* 118a4b32 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a4b37:;
  /* 118a4b37 mov dword ptr [0x118c3b20], 0 */
  w32((uint32_t)(0x118c3b20), (0x0u));
  /* 118a4b41 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a4b44 push eax */
  push32((uint32_t)(EAX));
  /* 118a4b45 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4b48 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4b49 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4b4c push edx */
  push32((uint32_t)(EDX));
  /* 118a4b4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4b50 push eax */
  push32((uint32_t)(EAX));
  /* 118a4b51 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a4b54 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 118a4b5a push edx */
  push32((uint32_t)(EDX));
  /* 118a4b5b call 0x118a4ea0 */
  push32(0x118a4b60u); f_118a4ea0();
  /* 118a4b60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4b63 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a4b68:;
  /* 118a4b68 mov eax, dword ptr [0x118c3b20] */
  EAX = (r32((uint32_t)(0x118c3b20)));
  /* 118a4b6d mov dword ptr [0x118c3b30], eax */
  w32((uint32_t)(0x118c3b30), (EAX));
  /* 118a4b72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4b75 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 118a4b78 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118a4b79 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 118a4b7e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118a4b80 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118a4b83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4b86 push edx */
  push32((uint32_t)(EDX));
  /* 118a4b87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4b8a push eax */
  push32((uint32_t)(EAX));
  /* 118a4b8b push 2 */
  push32((uint32_t)(0x2u));
  /* 118a4b8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4b90 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4b91 call 0x118a4d40 */
  push32(0x118a4b96u); f_118a4d40();
  /* 118a4b96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4b99 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a4b9e:;
  /* 118a4b9e mov edx, dword ptr [0x118c3b20] */
  EDX = (r32((uint32_t)(0x118c3b20)));
  /* 118a4ba4 mov dword ptr [0x118c3b30], edx */
  w32((uint32_t)(0x118c3b30), (EDX));
  /* 118a4baa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4bad mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 118a4bb0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118a4bb1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 118a4bb6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118a4bb8 mov ecx, eax */
  ECX = (EAX);
  /* 118a4bba add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4bbd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a4bc0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4bc3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 118a4bc6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118a4bc7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 118a4bcc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118a4bce add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4bd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118a4bd3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4bd6 push eax */
  push32((uint32_t)(EAX));
  /* 118a4bd7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4bda push ecx */
  push32((uint32_t)(ECX));
  /* 118a4bdb push 4 */
  push32((uint32_t)(0x4u));
  /* 118a4bdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4be0 push edx */
  push32((uint32_t)(EDX));
  /* 118a4be1 call 0x118a4d40 */
  push32(0x118a4be6u); f_118a4d40();
  /* 118a4be6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4be9 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a4beb:;
  /* 118a4beb call 0x118a5d00 */
  push32(0x118a4bf0u); f_118a5d00();
  /* 118a4bf0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4bf3 push eax */
  push32((uint32_t)(EAX));
  /* 118a4bf4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4bf7 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4bf8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4bfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a4bfd cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4c01 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 118a4c04 mov ecx, dword ptr [eax*4 + 0x118c2e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x118c2e1c)));
  /* 118a4c0b push ecx */
  push32((uint32_t)(ECX));
  /* 118a4c0c call 0x118a4cf0 */
  push32(0x118a4c11u); f_118a4cf0();
  /* 118a4c11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4c14 jmp 0x118a4c38 */
  goto L_118a4c38;
L_118a4c16:;
  /* 118a4c16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4c19 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a4c1b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 118a4c1e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4c21 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a4c23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4c26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4c29 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118a4c2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4c2e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a4c30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4c33 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4c36 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_118a4c38:;
  /* 118a4c38 pop esi */
  ESI = (pop32());
  /* 118a4c39 mov esp, ebp */
  ESP = (EBP);
  /* 118a4c3b pop ebp */
  EBP = (pop32());
  /* 118a4c3c ret  */
  ESPCHK(0x118a46d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x118a4cf0 (72 bytes, 30 insns) */
void f_118a4cf0(void) {
  FTRACE(0x118a4cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a4cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a4cf1 mov ebp, esp */
  EBP = (ESP);
L_118a4cf3:;
  /* 118a4cf3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4cf6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4cf9 je 0x118a4d36 */
  if (C.zf) goto L_118a4d36;
  /* 118a4cfb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4cfe movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118a4d01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a4d03 je 0x118a4d36 */
  if (C.zf) goto L_118a4d36;
  /* 118a4d05 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4d08 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a4d0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4d0d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a4d0f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 118a4d11 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4d14 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a4d16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4d19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4d1c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118a4d1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4d21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4d24 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 118a4d27 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4d2a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a4d2c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4d2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4d32 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118a4d34 jmp 0x118a4cf3 */
  goto L_118a4cf3;
L_118a4d36:;
  /* 118a4d36 pop ebp */
  EBP = (pop32());
  /* 118a4d37 ret  */
  ESPCHK(0x118a4cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d40 @ 0x118a4d40 (173 bytes, 64 insns) */
void f_118a4d40(void) {
  FTRACE(0x118a4d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a4d40 push ebp */
  push32((uint32_t)(EBP));
  /* 118a4d41 mov ebp, esp */
  EBP = (ESP);
  /* 118a4d43 push ecx */
  push32((uint32_t)(ECX));
  /* 118a4d44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118a4d4b cmp dword ptr [0x118c3b30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4d52 je 0x118a4d6a */
  if (C.zf) goto L_118a4d6a;
  /* 118a4d54 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4d57 push eax */
  push32((uint32_t)(EAX));
  /* 118a4d58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4d5b push ecx */
  push32((uint32_t)(ECX));
  /* 118a4d5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4d5f push edx */
  push32((uint32_t)(EDX));
  /* 118a4d60 call 0x118a4df0 */
  push32(0x118a4d65u); f_118a4df0();
  /* 118a4d65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4d68 jmp 0x118a4de9 */
  goto L_118a4de9;
L_118a4d6a:;
  /* 118a4d6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4d6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4d70 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4d72 jae 0x118a4de0 */
  if (!C.cf) goto L_118a4de0;
  /* 118a4d74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4d77 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4d7a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 118a4d7d jmp 0x118a4d88 */
  goto L_118a4d88;
L_118a4d7f:;
  /* 118a4d7f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4d82 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4d85 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_118a4d88:;
  /* 118a4d88 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4d8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4d8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a4d90 je 0x118a4dc4 */
  if (C.zf) goto L_118a4dc4;
  /* 118a4d92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4d95 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118a4d96 mov ecx, 0xa */
  ECX = (0xau);
  /* 118a4d9b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118a4d9d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4da0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4da3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a4da5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4da8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 118a4dab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4dae cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118a4daf mov ecx, 0xa */
  ECX = (0xau);
  /* 118a4db4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118a4db6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118a4db9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4dbc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4dbf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118a4dc2 jmp 0x118a4d7f */
  goto L_118a4d7f;
L_118a4dc4:;
  /* 118a4dc4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4dc7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a4dc9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4dcc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4dcf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118a4dd1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4dd4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a4dd6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4dd9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4ddc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118a4dde jmp 0x118a4de9 */
  goto L_118a4de9;
L_118a4de0:;
  /* 118a4de0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4de3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_118a4de9:;
  /* 118a4de9 mov esp, ebp */
  ESP = (EBP);
  /* 118a4deb pop ebp */
  EBP = (pop32());
  /* 118a4dec ret  */
  ESPCHK(0x118a4d40u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x118a4df0 (172 bytes, 65 insns) */
void f_118a4df0(void) {
  FTRACE(0x118a4df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a4df0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a4df1 mov ebp, esp */
  EBP = (ESP);
  /* 118a4df3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4df6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4df9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a4dfb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118a4dfe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4e01 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4e04 jbe 0x118a4e4b */
  if ((C.cf||C.zf)) goto L_118a4e4b;
L_118a4e06:;
  /* 118a4e06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4e09 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118a4e0a mov ecx, 0xa */
  ECX = (0xau);
  /* 118a4e0f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118a4e11 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4e14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4e17 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 118a4e19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4e1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4e1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118a4e22 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4e25 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a4e27 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4e2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4e2d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118a4e2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4e32 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118a4e33 mov ecx, 0xa */
  ECX = (0xau);
  /* 118a4e38 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118a4e3a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118a4e3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4e41 jle 0x118a4e4b */
  if ((C.zf||C.sf!=C.of)) goto L_118a4e4b;
  /* 118a4e43 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a4e46 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4e49 ja 0x118a4e06 */
  if ((!C.cf&&!C.zf)) goto L_118a4e06;
L_118a4e4b:;
  /* 118a4e4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4e4e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a4e50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a4e53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a4e56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4e59 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 118a4e5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4e5e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4e61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_118a4e64:;
  /* 118a4e64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4e67 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a4e69 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 118a4e6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4e6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a4e72 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a4e74 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 118a4e76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4e79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4e7c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118a4e7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a4e82 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 118a4e85 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 118a4e87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a4e8a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4e8d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a4e90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a4e93 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4e96 jb 0x118a4e64 */
  if (C.cf) goto L_118a4e64;
  /* 118a4e98 mov esp, ebp */
  ESP = (EBP);
  /* 118a4e9a pop ebp */
  EBP = (pop32());
  /* 118a4e9b ret  */
  ESPCHK(0x118a4df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ea0 @ 0x118a4ea0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_118a4ea0(void) {
  FTRACE(0x118a4ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a4ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a4ea1 mov ebp, esp */
  EBP = (ESP);
  /* 118a4ea3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_118a4ea6:;
  /* 118a4ea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4ea9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a4eac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a4eae je 0x118a531c */
  if (C.zf) goto L_118a531c;
  /* 118a4eb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a4eb7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4eba je 0x118a531c */
  if (C.zf) goto L_118a531c;
  /* 118a4ec0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 118a4ec4 mov dword ptr [0x118c3b30], 0 */
  w32((uint32_t)(0x118c3b30), (0x0u));
  /* 118a4ece mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 118a4ed5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4ed8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a4edb jmp 0x118a4ee6 */
  goto L_118a4ee6;
L_118a4edd:;
  /* 118a4edd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4ee0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4ee3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_118a4ee6:;
  /* 118a4ee6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4ee9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118a4eec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4eef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118a4ef2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4ef5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a4ef8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118a4efb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4efd jne 0x118a4f01 */
  if (!C.zf) goto L_118a4f01;
  /* 118a4eff jmp 0x118a4edd */
  goto L_118a4edd;
L_118a4f01:;
  /* 118a4f01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a4f04 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4f07 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118a4f0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a4f0d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a4f10 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 118a4f13 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4f16 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4f19 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 118a4f1c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4f20 ja 0x118a5270 */
  if ((!C.cf&&!C.zf)) goto L_118a5270;
  /* 118a4f26 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a4f29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a4f2b mov al, byte ptr [ecx + 0x118a534c] */
  AL = (r8((uint32_t)(ECX + 0x118a534c)));
  /* 118a4f31 jmp dword ptr [eax*4 + 0x118a5320] */
  switch (EAX) {
    case 0: goto L_118a518f;
    case 1: goto L_118a5073;
    case 2: goto L_118a4ffe;
    case 3: goto L_118a4f38;
    case 4: goto L_118a4f76;
    case 5: goto L_118a4fd7;
    case 6: goto L_118a5025;
    case 7: goto L_118a504c;
    case 8: goto L_118a50ba;
    case 9: goto L_118a4fb4;
    case 10: goto L_118a5270;
    default: x86_unimpl("switch@0x118a4f31 out of table"); return;
  }
L_118a4f38:;
  /* 118a4f38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4f3b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 118a4f3e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a4f41 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4f44 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 118a4f47 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4f4b ja 0x118a4f71 */
  if ((!C.cf&&!C.zf)) goto L_118a4f71;
  /* 118a4f4d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a4f50 jmp dword ptr [ecx*4 + 0x118a539f] */
  switch (ECX) {
    case 0: goto L_118a4f57;
    case 1: goto L_118a4f61;
    case 2: goto L_118a4f67;
    case 3: goto L_118a4f6d;
    case 4: goto L_118a4f95;
    case 5: goto L_118a4f9f;
    case 6: goto L_118a4fa5;
    case 7: goto L_118a4fab;
    default: x86_unimpl("switch@0x118a4f50 out of table"); return;
  }
L_118a4f57:;
  /* 118a4f57 mov dword ptr [0x118c3b30], 1 */
  w32((uint32_t)(0x118c3b30), (0x1u));
L_118a4f61:;
  /* 118a4f61 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 118a4f65 jmp 0x118a4f71 */
  goto L_118a4f71;
L_118a4f67:;
  /* 118a4f67 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 118a4f6b jmp 0x118a4f71 */
  goto L_118a4f71;
L_118a4f6d:;
  /* 118a4f6d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_118a4f71:;
  /* 118a4f71 jmp 0x118a5270 */
  goto L_118a5270;
L_118a4f76:;
  /* 118a4f76 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4f79 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 118a4f7c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118a4f7f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a4f82 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118a4f85 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4f89 ja 0x118a4faf */
  if ((!C.cf&&!C.zf)) goto L_118a4faf;
  /* 118a4f8b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118a4f8e jmp dword ptr [ecx*4 + 0x118a53af] */
  switch (ECX) {
    case 0: goto L_118a4f95;
    case 1: goto L_118a4f9f;
    case 2: goto L_118a4fa5;
    case 3: goto L_118a4fab;
    default: x86_unimpl("switch@0x118a4f8e out of table"); return;
  }
L_118a4f95:;
  /* 118a4f95 mov dword ptr [0x118c3b30], 1 */
  w32((uint32_t)(0x118c3b30), (0x1u));
L_118a4f9f:;
  /* 118a4f9f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 118a4fa3 jmp 0x118a4faf */
  goto L_118a4faf;
L_118a4fa5:;
  /* 118a4fa5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 118a4fa9 jmp 0x118a4faf */
  goto L_118a4faf;
L_118a4fab:;
  /* 118a4fab mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_118a4faf:;
  /* 118a4faf jmp 0x118a5270 */
  goto L_118a5270;
L_118a4fb4:;
  /* 118a4fb4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4fb7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 118a4fba cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4fbe je 0x118a4fc8 */
  if (C.zf) goto L_118a4fc8;
  /* 118a4fc0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4fc4 je 0x118a4fce */
  if (C.zf) goto L_118a4fce;
  /* 118a4fc6 jmp 0x118a4fd2 */
  goto L_118a4fd2;
L_118a4fc8:;
  /* 118a4fc8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 118a4fcc jmp 0x118a4fd2 */
  goto L_118a4fd2;
L_118a4fce:;
  /* 118a4fce mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_118a4fd2:;
  /* 118a4fd2 jmp 0x118a5270 */
  goto L_118a5270;
L_118a4fd7:;
  /* 118a4fd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a4fda mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118a4fdd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4fe1 je 0x118a4feb */
  if (C.zf) goto L_118a4feb;
  /* 118a4fe3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a4fe7 je 0x118a4ff5 */
  if (C.zf) goto L_118a4ff5;
  /* 118a4fe9 jmp 0x118a4ff9 */
  goto L_118a4ff9;
L_118a4feb:;
  /* 118a4feb mov dword ptr [0x118c3b30], 1 */
  w32((uint32_t)(0x118c3b30), (0x1u));
L_118a4ff5:;
  /* 118a4ff5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_118a4ff9:;
  /* 118a4ff9 jmp 0x118a5270 */
  goto L_118a5270;
L_118a4ffe:;
  /* 118a4ffe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5001 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 118a5004 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5008 je 0x118a5012 */
  if (C.zf) goto L_118a5012;
  /* 118a500a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a500e je 0x118a501c */
  if (C.zf) goto L_118a501c;
  /* 118a5010 jmp 0x118a5020 */
  goto L_118a5020;
L_118a5012:;
  /* 118a5012 mov dword ptr [0x118c3b30], 1 */
  w32((uint32_t)(0x118c3b30), (0x1u));
L_118a501c:;
  /* 118a501c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_118a5020:;
  /* 118a5020 jmp 0x118a5270 */
  goto L_118a5270;
L_118a5025:;
  /* 118a5025 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5028 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 118a502b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a502f je 0x118a5039 */
  if (C.zf) goto L_118a5039;
  /* 118a5031 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5035 je 0x118a5043 */
  if (C.zf) goto L_118a5043;
  /* 118a5037 jmp 0x118a5047 */
  goto L_118a5047;
L_118a5039:;
  /* 118a5039 mov dword ptr [0x118c3b30], 1 */
  w32((uint32_t)(0x118c3b30), (0x1u));
L_118a5043:;
  /* 118a5043 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_118a5047:;
  /* 118a5047 jmp 0x118a5270 */
  goto L_118a5270;
L_118a504c:;
  /* 118a504c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a504f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 118a5052 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5056 je 0x118a5060 */
  if (C.zf) goto L_118a5060;
  /* 118a5058 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a505c je 0x118a506a */
  if (C.zf) goto L_118a506a;
  /* 118a505e jmp 0x118a506e */
  goto L_118a506e;
L_118a5060:;
  /* 118a5060 mov dword ptr [0x118c3b30], 1 */
  w32((uint32_t)(0x118c3b30), (0x1u));
L_118a506a:;
  /* 118a506a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_118a506e:;
  /* 118a506e jmp 0x118a5270 */
  goto L_118a5270;
L_118a5073:;
  /* 118a5073 push 0x118c03ec */
  push32((uint32_t)(0x118c03ecu));
  /* 118a5078 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a507b push ecx */
  push32((uint32_t)(ECX));
  /* 118a507c call 0x118a58d0 */
  push32(0x118a5081u); f_118a58d0();
  /* 118a5081 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a5086 jne 0x118a5093 */
  if (!C.zf) goto L_118a5093;
  /* 118a5088 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a508b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a508e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118a5091 jmp 0x118a50b1 */
  goto L_118a50b1;
L_118a5093:;
  /* 118a5093 push 0x118c03e8 */
  push32((uint32_t)(0x118c03e8u));
  /* 118a5098 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a509b push eax */
  push32((uint32_t)(EAX));
  /* 118a509c call 0x118a58d0 */
  push32(0x118a50a1u); f_118a58d0();
  /* 118a50a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a50a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a50a6 jne 0x118a50b1 */
  if (!C.zf) goto L_118a50b1;
  /* 118a50a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a50ab add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a50ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_118a50b1:;
  /* 118a50b1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 118a50b5 jmp 0x118a5270 */
  goto L_118a5270;
L_118a50ba:;
  /* 118a50ba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a50bd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a50c1 jg 0x118a50d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a50d1;
  /* 118a50c3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a50c6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 118a50cc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 118a50cf jmp 0x118a50dd */
  goto L_118a50dd;
L_118a50d1:;
  /* 118a50d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a50d4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 118a50da mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_118a50dd:;
  /* 118a50dd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a50e1 jle 0x118a5184 */
  if ((C.zf||C.sf!=C.of)) goto L_118a5184;
  /* 118a50e7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a50ea cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a50ed jbe 0x118a5184 */
  if ((C.cf||C.zf)) goto L_118a5184;
  /* 118a50f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a50f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a50f8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a50fa mov ecx, dword ptr [0x118c1c98] */
  ECX = (r32((uint32_t)(0x118c1c98)));
  /* 118a5100 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a5102 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 118a5106 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 118a510c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a510e je 0x118a5147 */
  if (C.zf) goto L_118a5147;
  /* 118a5110 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a5113 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5116 jbe 0x118a5147 */
  if ((C.cf||C.zf)) goto L_118a5147;
  /* 118a5118 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a511b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a511d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a5120 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118a5122 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 118a5124 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a5127 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a5129 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a512c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a512f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118a5131 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a5134 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5137 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 118a513a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a513d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a513f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a5142 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a5145 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_118a5147:;
  /* 118a5147 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a514a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a514c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a514f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a5151 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 118a5153 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a5156 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a5158 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a515b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a515e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118a5160 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a5163 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5166 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 118a5169 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a516c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a516e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a5171 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a5174 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118a5176 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5179 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a517c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 118a517f jmp 0x118a50dd */
  goto L_118a50dd;
L_118a5184:;
  /* 118a5184 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a5187 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118a518a jmp 0x118a4ea6 */
  goto L_118a4ea6;
L_118a518f:;
  /* 118a518f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5192 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 118a5195 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a5197 je 0x118a5262 */
  if (C.zf) goto L_118a5262;
  /* 118a519d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a51a0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a51a3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_118a51a6:;
  /* 118a51a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a51a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a51ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a51ae je 0x118a5260 */
  if (C.zf) goto L_118a5260;
  /* 118a51b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a51b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a51ba je 0x118a5260 */
  if (C.zf) goto L_118a5260;
  /* 118a51c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a51c3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a51c6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a51c9 jne 0x118a51d9 */
  if (!C.zf) goto L_118a51d9;
  /* 118a51cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a51ce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a51d1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 118a51d4 jmp 0x118a5260 */
  goto L_118a5260;
L_118a51d9:;
  /* 118a51d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a51dc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a51de mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118a51e0 mov edx, dword ptr [0x118c1c98] */
  EDX = (r32((uint32_t)(0x118c1c98)));
  /* 118a51e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a51e8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 118a51ec and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 118a51f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a51f3 je 0x118a522c */
  if (C.zf) goto L_118a522c;
  /* 118a51f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a51f8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a51fb jbe 0x118a522c */
  if ((C.cf||C.zf)) goto L_118a522c;
  /* 118a51fd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a5200 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a5202 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5205 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118a5207 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 118a5209 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a520c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a520e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5211 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a5214 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118a5216 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5219 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a521c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118a521f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a5222 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a5224 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a5227 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a522a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_118a522c:;
  /* 118a522c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a522f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a5231 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5234 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118a5236 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 118a5238 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a523b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a523d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5240 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a5243 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118a5245 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5248 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a524b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 118a524e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a5251 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a5253 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a5256 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a5259 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118a525b jmp 0x118a51a6 */
  goto L_118a51a6;
L_118a5260:;
  /* 118a5260 jmp 0x118a526b */
  goto L_118a526b;
L_118a5262:;
  /* 118a5262 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5265 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5268 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_118a526b:;
  /* 118a526b jmp 0x118a4ea6 */
  goto L_118a4ea6;
L_118a5270:;
  /* 118a5270 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118a5274 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a5276 je 0x118a529c */
  if (C.zf) goto L_118a529c;
  /* 118a5278 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a527b push edx */
  push32((uint32_t)(EDX));
  /* 118a527c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a527f push eax */
  push32((uint32_t)(EAX));
  /* 118a5280 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a5283 push ecx */
  push32((uint32_t)(ECX));
  /* 118a5284 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a5287 push edx */
  push32((uint32_t)(EDX));
  /* 118a5288 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 118a528b push eax */
  push32((uint32_t)(EAX));
  /* 118a528c call 0x118a46d0 */
  push32(0x118a5291u); f_118a46d0();
  /* 118a5291 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5294 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a5297 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 118a529a jmp 0x118a5317 */
  goto L_118a5317;
L_118a529c:;
  /* 118a529c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a529f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a52a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a52a3 mov ecx, dword ptr [0x118c1c98] */
  ECX = (r32((uint32_t)(0x118c1c98)));
  /* 118a52a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a52ab mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 118a52af and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 118a52b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a52b7 je 0x118a52e8 */
  if (C.zf) goto L_118a52e8;
  /* 118a52b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a52bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a52be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a52c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a52c3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 118a52c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a52c8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a52ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a52cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a52d0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118a52d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a52d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a52d8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 118a52db mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a52de mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a52e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a52e3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a52e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_118a52e8:;
  /* 118a52e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a52eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a52ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a52f0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118a52f2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 118a52f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a52f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a52f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a52fc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a52ff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118a5301 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5304 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5307 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118a530a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a530d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a530f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a5312 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a5315 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_118a5317:;
  /* 118a5317 jmp 0x118a4ea6 */
  goto L_118a4ea6;
L_118a531c:;
  /* 118a531c mov esp, ebp */
  ESP = (EBP);
  /* 118a531e pop ebp */
  EBP = (pop32());
  /* 118a531f ret  */
  ESPCHK(0x118a4ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_100153c0 @ 0x118a53c0 (650 bytes, 178 insns) */
void f_118a53c0(void) {
  FTRACE(0x118a53c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a53c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a53c1 mov ebp, esp */
  EBP = (ESP);
  /* 118a53c3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a53c9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a53cd jne 0x118a5529 */
  if (!C.zf) goto L_118a5529;
  /* 118a53d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a53d6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 118a53dc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 118a53e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a53e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118a53ec mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 118a53f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a53f8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 118a53fe push edx */
  push32((uint32_t)(EDX));
  /* 118a53ff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5402 push eax */
  push32((uint32_t)(EAX));
  /* 118a5403 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a5406 push ecx */
  push32((uint32_t)(ECX));
  /* 118a5407 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a540a push edx */
  push32((uint32_t)(EDX));
  /* 118a540b call 0x118a67e0 */
  push32(0x118a5410u); f_118a67e0();
  /* 118a5410 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5413 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a5416 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a541a jne 0x118a54af */
  if (!C.zf) goto L_118a54af;
  /* 118a5420 call dword ptr [0x118c63d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63d8))), 0x118a5426u);
  /* 118a5426 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5429 je 0x118a5430 */
  if (C.zf) goto L_118a5430;
  /* 118a542b jmp 0x118a550d */
  goto L_118a550d;
L_118a5430:;
  /* 118a5430 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a5432 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a5434 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a5436 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a5439 push eax */
  push32((uint32_t)(EAX));
  /* 118a543a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a543d push ecx */
  push32((uint32_t)(ECX));
  /* 118a543e call 0x118a67e0 */
  push32(0x118a5443u); f_118a67e0();
  /* 118a5443 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5446 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 118a544c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5453 jne 0x118a545a */
  if (!C.zf) goto L_118a545a;
  /* 118a5455 jmp 0x118a550d */
  goto L_118a550d;
L_118a545a:;
  /* 118a545a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 118a545c push 0x118c03f4 */
  push32((uint32_t)(0x118c03f4u));
  /* 118a5461 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a5463 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 118a5469 push edx */
  push32((uint32_t)(EDX));
  /* 118a546a call 0x11897200 */
  push32(0x118a546fu); f_11897200();
  /* 118a546f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5472 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a5475 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5479 jne 0x118a5480 */
  if (!C.zf) goto L_118a5480;
  /* 118a547b jmp 0x118a550d */
  goto L_118a550d;
L_118a5480:;
  /* 118a5480 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118a5487 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a5489 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 118a548f push eax */
  push32((uint32_t)(EAX));
  /* 118a5490 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5493 push ecx */
  push32((uint32_t)(ECX));
  /* 118a5494 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a5497 push edx */
  push32((uint32_t)(EDX));
  /* 118a5498 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a549b push eax */
  push32((uint32_t)(EAX));
  /* 118a549c call 0x118a67e0 */
  push32(0x118a54a1u); f_118a67e0();
  /* 118a54a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a54a4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a54a7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a54ab jne 0x118a54af */
  if (!C.zf) goto L_118a54af;
  /* 118a54ad jmp 0x118a550d */
  goto L_118a550d;
L_118a54af:;
  /* 118a54af push 0x63 */
  push32((uint32_t)(0x63u));
  /* 118a54b1 push 0x118c03f4 */
  push32((uint32_t)(0x118c03f4u));
  /* 118a54b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a54b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a54bb push ecx */
  push32((uint32_t)(ECX));
  /* 118a54bc call 0x11897200 */
  push32(0x118a54c1u); f_11897200();
  /* 118a54c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a54c4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 118a54ca mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 118a54cc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 118a54d2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a54d5 jne 0x118a54d9 */
  if (!C.zf) goto L_118a54d9;
  /* 118a54d7 jmp 0x118a550d */
  goto L_118a550d;
L_118a54d9:;
  /* 118a54d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a54dc push ecx */
  push32((uint32_t)(ECX));
  /* 118a54dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a54e0 push edx */
  push32((uint32_t)(EDX));
  /* 118a54e1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 118a54e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a54e9 push ecx */
  push32((uint32_t)(ECX));
  /* 118a54ea call 0x1189aa20 */
  push32(0x118a54efu); f_1189aa20();
  /* 118a54ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a54f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a54f6 je 0x118a5506 */
  if (C.zf) goto L_118a5506;
  /* 118a54f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a54fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a54fd push edx */
  push32((uint32_t)(EDX));
  /* 118a54fe call 0x11897c90 */
  push32(0x118a5503u); f_11897c90();
  /* 118a5503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a5506:;
  /* 118a5506 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a5508 jmp 0x118a5646 */
  goto L_118a5646;
L_118a550d:;
  /* 118a550d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5511 je 0x118a5521 */
  if (C.zf) goto L_118a5521;
  /* 118a5513 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a5515 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5518 push eax */
  push32((uint32_t)(EAX));
  /* 118a5519 call 0x11897c90 */
  push32(0x118a551eu); f_11897c90();
  /* 118a551e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a5521:;
  /* 118a5521 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a5524 jmp 0x118a5646 */
  goto L_118a5646;
L_118a5529:;
  /* 118a5529 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a552d jne 0x118a5643 */
  if (!C.zf) goto L_118a5643;
  /* 118a5533 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 118a553d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a5540 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 118a5546 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a5548 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 118a554e push edx */
  push32((uint32_t)(EDX));
  /* 118a554f push 0x118c3a48 */
  push32((uint32_t)(0x118c3a48u));
  /* 118a5554 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a5557 push eax */
  push32((uint32_t)(EAX));
  /* 118a5558 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a555b push ecx */
  push32((uint32_t)(ECX));
  /* 118a555c call 0x118a6640 */
  push32(0x118a5561u); f_118a6640();
  /* 118a5561 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a5566 jne 0x118a5570 */
  if (!C.zf) goto L_118a5570;
  /* 118a5568 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a556b jmp 0x118a5646 */
  goto L_118a5646;
L_118a5570:;
  /* 118a5570 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 118a5576 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 118a5579 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 118a5583 jmp 0x118a5594 */
  goto L_118a5594;
L_118a5585:;
  /* 118a5585 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118a558b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a558e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_118a5594:;
  /* 118a5594 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a559b jge 0x118a563f */
  if ((C.sf==C.of)) goto L_118a563f;
  /* 118a55a1 cmp dword ptr [0x118c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a55a8 jle 0x118a55db */
  if ((C.zf||C.sf!=C.of)) goto L_118a55db;
  /* 118a55aa push 4 */
  push32((uint32_t)(0x4u));
  /* 118a55ac mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118a55b2 mov dl, byte ptr [ecx*2 + 0x118c3a48] */
  DL = (r8((uint32_t)(ECX*2 + 0x118c3a48)));
  /* 118a55b9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 118a55bf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 118a55c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a55ca push eax */
  push32((uint32_t)(EAX));
  /* 118a55cb call 0x1189d210 */
  push32(0x118a55d0u); f_1189d210();
  /* 118a55d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a55d3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 118a55d9 jmp 0x118a560e */
  goto L_118a560e;
L_118a55db:;
  /* 118a55db mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118a55e1 mov dl, byte ptr [ecx*2 + 0x118c3a48] */
  DL = (r8((uint32_t)(ECX*2 + 0x118c3a48)));
  /* 118a55e8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 118a55ee mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 118a55f4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a55f9 mov ecx, dword ptr [0x118c1c98] */
  ECX = (r32((uint32_t)(0x118c1c98)));
  /* 118a55ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a5601 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 118a5605 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 118a5608 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_118a560e:;
  /* 118a560e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5615 je 0x118a5638 */
  if (C.zf) goto L_118a5638;
  /* 118a5617 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 118a561d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a5620 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a5623 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 118a562a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 118a562e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 118a5634 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 118a5636 jmp 0x118a563a */
  goto L_118a563a;
L_118a5638:;
  /* 118a5638 jmp 0x118a563f */
  goto L_118a563f;
L_118a563a:;
  /* 118a563a jmp 0x118a5585 */
  goto L_118a5585;
L_118a563f:;
  /* 118a563f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a5641 jmp 0x118a5646 */
  goto L_118a5646;
L_118a5643:;
  /* 118a5643 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_118a5646:;
  /* 118a5646 mov esp, ebp */
  ESP = (EBP);
  /* 118a5648 pop ebp */
  EBP = (pop32());
  /* 118a5649 ret  */
  ESPCHK(0x118a53c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015650 @ 0x118a5650 (10 bytes, 5 insns) */
void f_118a5650(void) {
  FTRACE(0x118a5650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a5650 push ebp */
  push32((uint32_t)(EBP));
  /* 118a5651 mov ebp, esp */
  EBP = (ESP);
  /* 118a5653 mov eax, dword ptr [0x118c2d88] */
  EAX = (r32((uint32_t)(0x118c2d88)));
  /* 118a5658 pop ebp */
  EBP = (pop32());
  /* 118a5659 ret  */
  ESPCHK(0x118a5650u, _esp0);
  ESP += 4; return;
}

/* FUN_10015660 @ 0x118a5660 (575 bytes, 196 insns) */
void f_118a5660(void) {
  FTRACE(0x118a5660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a5660 push ebp */
  push32((uint32_t)(EBP));
  /* 118a5661 mov ebp, esp */
  EBP = (ESP);
  /* 118a5663 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118a5665 push 0x118c0400 */
  push32((uint32_t)(0x118c0400u));
  /* 118a566a push 0x118a0308 */
  push32((uint32_t)(0x118a0308u));
  /* 118a566f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118a5675 push eax */
  push32((uint32_t)(EAX));
  /* 118a5676 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118a567d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5680 push ebx */
  push32((uint32_t)(EBX));
  /* 118a5681 push esi */
  push32((uint32_t)(ESI));
  /* 118a5682 push edi */
  push32((uint32_t)(EDI));
  /* 118a5683 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118a5686 cmp dword ptr [0x118c3a54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a568d jne 0x118a56de */
  if (!C.zf) goto L_118a56de;
  /* 118a568f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 118a5692 push eax */
  push32((uint32_t)(EAX));
  /* 118a5693 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a5695 push 0x118bfb34 */
  push32((uint32_t)(0x118bfb34u));
  /* 118a569a push 1 */
  push32((uint32_t)(0x1u));
  /* 118a569c call dword ptr [0x118c631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c631c))), 0x118a56a2u);
  /* 118a56a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a56a4 je 0x118a56b2 */
  if (C.zf) goto L_118a56b2;
  /* 118a56a6 mov dword ptr [0x118c3a54], 1 */
  w32((uint32_t)(0x118c3a54), (0x1u));
  /* 118a56b0 jmp 0x118a56de */
  goto L_118a56de;
L_118a56b2:;
  /* 118a56b2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 118a56b5 push ecx */
  push32((uint32_t)(ECX));
  /* 118a56b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a56b8 push 0x118bfb30 */
  push32((uint32_t)(0x118bfb30u));
  /* 118a56bd push 1 */
  push32((uint32_t)(0x1u));
  /* 118a56bf push 0 */
  push32((uint32_t)(0x0u));
  /* 118a56c1 call dword ptr [0x118c632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c632c))), 0x118a56c7u);
  /* 118a56c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a56c9 je 0x118a56d7 */
  if (C.zf) goto L_118a56d7;
  /* 118a56cb mov dword ptr [0x118c3a54], 2 */
  w32((uint32_t)(0x118c3a54), (0x2u));
  /* 118a56d5 jmp 0x118a56de */
  goto L_118a56de;
L_118a56d7:;
  /* 118a56d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a56d9 jmp 0x118a58b9 */
  goto L_118a58b9;
L_118a56de:;
  /* 118a56de cmp dword ptr [0x118c3a54], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a54))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a56e5 jne 0x118a5702 */
  if (!C.zf) goto L_118a5702;
  /* 118a56e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a56ea push edx */
  push32((uint32_t)(EDX));
  /* 118a56eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a56ee push eax */
  push32((uint32_t)(EAX));
  /* 118a56ef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a56f2 push ecx */
  push32((uint32_t)(ECX));
  /* 118a56f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a56f6 push edx */
  push32((uint32_t)(EDX));
  /* 118a56f7 call dword ptr [0x118c631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c631c))), 0x118a56fdu);
  /* 118a56fd jmp 0x118a58b9 */
  goto L_118a58b9;
L_118a5702:;
  /* 118a5702 cmp dword ptr [0x118c3a54], 2 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a54))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5709 jne 0x118a58b7 */
  if (!C.zf) goto L_118a58b7;
  /* 118a570f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5713 jne 0x118a571d */
  if (!C.zf) goto L_118a571d;
  /* 118a5715 mov eax, dword ptr [0x118c39c8] */
  EAX = (r32((uint32_t)(0x118c39c8)));
  /* 118a571a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_118a571d:;
  /* 118a571d push 0 */
  push32((uint32_t)(0x0u));
  /* 118a571f push 0 */
  push32((uint32_t)(0x0u));
  /* 118a5721 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a5723 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a5725 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a5728 push ecx */
  push32((uint32_t)(ECX));
  /* 118a5729 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a572c push edx */
  push32((uint32_t)(EDX));
  /* 118a572d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 118a5732 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a5735 push eax */
  push32((uint32_t)(EAX));
  /* 118a5736 call dword ptr [0x118c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6370))), 0x118a573cu);
  /* 118a573c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 118a573f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5743 jne 0x118a574c */
  if (!C.zf) goto L_118a574c;
  /* 118a5745 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a5747 jmp 0x118a58b9 */
  goto L_118a58b9;
L_118a574c:;
  /* 118a574c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118a5753 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 118a5756 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5759 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118a575b call 0x1189a3a0 */
  push32(0x118a5760u); f_1189a3a0();
  /* 118a5760 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 118a5763 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118a5766 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 118a5769 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 118a576c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 118a576f push edx */
  push32((uint32_t)(EDX));
  /* 118a5770 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a5772 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 118a5775 push eax */
  push32((uint32_t)(EAX));
  /* 118a5776 call 0x1189af70 */
  push32(0x118a577bu); f_1189af70();
  /* 118a577b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a577e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 118a5785 jmp 0x118a579e */
  goto L_118a579e;
  /* 118a5787 mov eax, 1 */
  EAX = (0x1u);
  /* 118a578c ret  */
  ESPCHK(0x118a5660u, _esp0);
  ESP += 4; return;
  /* 118a578d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118a5790 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 118a5797 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_118a579e:;
  /* 118a579e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a57a2 jne 0x118a57ab */
  if (!C.zf) goto L_118a57ab;
  /* 118a57a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a57a6 jmp 0x118a58b9 */
  goto L_118a58b9;
L_118a57ab:;
  /* 118a57ab push 0 */
  push32((uint32_t)(0x0u));
  /* 118a57ad push 0 */
  push32((uint32_t)(0x0u));
  /* 118a57af mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 118a57b2 push ecx */
  push32((uint32_t)(ECX));
  /* 118a57b3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 118a57b6 push edx */
  push32((uint32_t)(EDX));
  /* 118a57b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a57ba push eax */
  push32((uint32_t)(EAX));
  /* 118a57bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a57be push ecx */
  push32((uint32_t)(ECX));
  /* 118a57bf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 118a57c4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a57c7 push edx */
  push32((uint32_t)(EDX));
  /* 118a57c8 call dword ptr [0x118c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6370))), 0x118a57ceu);
  /* 118a57ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a57d0 jne 0x118a57d9 */
  if (!C.zf) goto L_118a57d9;
  /* 118a57d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a57d4 jmp 0x118a58b9 */
  goto L_118a58b9;
L_118a57d9:;
  /* 118a57d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118a57e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 118a57e3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 118a57e7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a57ea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118a57ec call 0x1189a3a0 */
  push32(0x118a57f1u); f_1189a3a0();
  /* 118a57f1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 118a57f4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118a57f7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 118a57fa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 118a57fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 118a5804 jmp 0x118a581d */
  goto L_118a581d;
  /* 118a5806 mov eax, 1 */
  EAX = (0x1u);
  /* 118a580b ret  */
  ESPCHK(0x118a5660u, _esp0);
  ESP += 4; return;
  /* 118a580c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118a580f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 118a5816 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_118a581d:;
  /* 118a581d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5821 jne 0x118a582a */
  if (!C.zf) goto L_118a582a;
  /* 118a5823 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a5825 jmp 0x118a58b9 */
  goto L_118a58b9;
L_118a582a:;
  /* 118a582a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a582e jne 0x118a5839 */
  if (!C.zf) goto L_118a5839;
  /* 118a5830 mov edx, dword ptr [0x118c39b8] */
  EDX = (r32((uint32_t)(0x118c39b8)));
  /* 118a5836 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_118a5839:;
  /* 118a5839 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a583c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 118a583f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 118a5845 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a5848 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 118a584b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 118a5852 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 118a5855 push ecx */
  push32((uint32_t)(ECX));
  /* 118a5856 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 118a5859 push edx */
  push32((uint32_t)(EDX));
  /* 118a585a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 118a585d push eax */
  push32((uint32_t)(EAX));
  /* 118a585e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5861 push ecx */
  push32((uint32_t)(ECX));
  /* 118a5862 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118a5865 push edx */
  push32((uint32_t)(EDX));
  /* 118a5866 call dword ptr [0x118c632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c632c))), 0x118a586cu);
  /* 118a586c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118a586f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a5872 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 118a5875 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a5877 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 118a587c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5882 je 0x118a5898 */
  if (C.zf) goto L_118a5898;
  /* 118a5884 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a5887 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 118a588a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a588c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 118a5890 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5896 je 0x118a589c */
  if (C.zf) goto L_118a589c;
L_118a5898:;
  /* 118a5898 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a589a jmp 0x118a58b9 */
  goto L_118a58b9;
L_118a589c:;
  /* 118a589c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a589f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118a58a1 push eax */
  push32((uint32_t)(EAX));
  /* 118a58a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 118a58a5 push ecx */
  push32((uint32_t)(ECX));
  /* 118a58a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a58a9 push edx */
  push32((uint32_t)(EDX));
  /* 118a58aa call 0x1189f0f0 */
  push32(0x118a58afu); f_1189f0f0();
  /* 118a58af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a58b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 118a58b5 jmp 0x118a58b9 */
  goto L_118a58b9;
L_118a58b7:;
  /* 118a58b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a58b9:;
  /* 118a58b9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 118a58bc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a58bf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118a58c6 pop edi */
  EDI = (pop32());
  /* 118a58c7 pop esi */
  ESI = (pop32());
  /* 118a58c8 pop ebx */
  EBX = (pop32());
  /* 118a58c9 mov esp, ebp */
  ESP = (EBP);
  /* 118a58cb pop ebp */
  EBP = (pop32());
  /* 118a58cc ret  */
  ESPCHK(0x118a5660u, _esp0);
  ESP += 4; return;
}

/* FUN_100158d0 @ 0x118a58d0 (208 bytes, 85 insns) */
void f_118a58d0(void) {
  FTRACE(0x118a58d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a58d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a58d1 mov ebp, esp */
  EBP = (ESP);
  /* 118a58d3 push edi */
  push32((uint32_t)(EDI));
  /* 118a58d4 push esi */
  push32((uint32_t)(ESI));
  /* 118a58d5 push ebx */
  push32((uint32_t)(EBX));
  /* 118a58d6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118a58d9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118a58dc lea eax, [0x118c39b0] */
  EAX = ((uint32_t)(0x118c39b0));
  /* 118a58e2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a58e6 jne 0x118a5923 */
  if (!C.zf) goto L_118a5923;
  /* 118a58e8 mov al, 0xff */
  AL = (0xffu);
  /* 118a58ea mov edi, edi */
  EDI = (EDI);
L_118a58ec:;
  /* 118a58ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118a58ee je 0x118a591e */
  if (C.zf) goto L_118a591e;
  /* 118a58f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118a58f2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118a58f3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 118a58f5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118a58f6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a58f8 je 0x118a58ec */
  if (C.zf) goto L_118a58ec;
  /* 118a58fa sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118a58fc cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a58fe sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118a5900 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 118a5903 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118a5905 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118a5907 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 118a5909 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118a590b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a590d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118a590f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 118a5912 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118a5914 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118a5916 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a5918 je 0x118a58ec */
  if (C.zf) goto L_118a58ec;
  /* 118a591a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118a591c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_118a591e:;
  /* 118a591e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 118a5921 jmp 0x118a599b */
  goto L_118a599b;
L_118a5923:;
  /* 118a5923 lock inc dword ptr [0x118c3b44] */
  x86_unimpl("lock inc @ 0x118a5923");
  /* 118a592a cmp dword ptr [0x118c3b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5931 jg 0x118a5937 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a5937;
  /* 118a5933 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a5935 jmp 0x118a594c */
  goto L_118a594c;
L_118a5937:;
  /* 118a5937 lock dec dword ptr [0x118c3b44] */
  x86_unimpl("lock dec @ 0x118a5937");
  /* 118a593e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118a5940 call 0x1189ac00 */
  push32(0x118a5945u); f_1189ac00();
  /* 118a5945 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_118a594c:;
  /* 118a594c mov eax, 0xff */
  EAX = (0xffu);
  /* 118a5951 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118a5953 nop  */
  /* nop */
L_118a5954:;
  /* 118a5954 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118a5956 je 0x118a597f */
  if (C.zf) goto L_118a597f;
  /* 118a5958 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118a595a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118a595b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118a595d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118a595e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a5960 je 0x118a5954 */
  if (C.zf) goto L_118a5954;
  /* 118a5962 push eax */
  push32((uint32_t)(EAX));
  /* 118a5963 push ebx */
  push32((uint32_t)(EBX));
  /* 118a5964 call 0x118a6a40 */
  push32(0x118a5969u); f_118a6a40();
  /* 118a5969 mov ebx, eax */
  EBX = (EAX);
  /* 118a596b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a596e call 0x118a6a40 */
  push32(0x118a5973u); f_118a6a40();
  /* 118a5973 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5976 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a5978 je 0x118a5954 */
  if (C.zf) goto L_118a5954;
  /* 118a597a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a597c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_118a597f:;
  /* 118a597f mov ebx, eax */
  EBX = (EAX);
  /* 118a5981 pop eax */
  EAX = (pop32());
  /* 118a5982 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a5984 jne 0x118a598f */
  if (!C.zf) goto L_118a598f;
  /* 118a5986 lock dec dword ptr [0x118c3b44] */
  x86_unimpl("lock dec @ 0x118a5986");
  /* 118a598d jmp 0x118a5999 */
  goto L_118a5999;
L_118a598f:;
  /* 118a598f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118a5991 call 0x1189aca0 */
  push32(0x118a5996u); f_1189aca0();
  /* 118a5996 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a5999:;
  /* 118a5999 mov eax, ebx */
  EAX = (EBX);
L_118a599b:;
  /* 118a599b pop ebx */
  EBX = (pop32());
  /* 118a599c pop esi */
  ESI = (pop32());
  /* 118a599d pop edi */
  EDI = (pop32());
  /* 118a599e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118a599f ret  */
  ESPCHK(0x118a58d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100159a0 @ 0x118a59a0 (257 bytes, 103 insns) */
void f_118a59a0(void) {
  FTRACE(0x118a59a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a59a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a59a1 mov ebp, esp */
  EBP = (ESP);
  /* 118a59a3 push edi */
  push32((uint32_t)(EDI));
  /* 118a59a4 push esi */
  push32((uint32_t)(ESI));
  /* 118a59a5 push ebx */
  push32((uint32_t)(EBX));
  /* 118a59a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a59a9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a59ab je 0x118a5a9a */
  if (C.zf) goto L_118a5a9a;
  /* 118a59b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118a59b4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 118a59b7 lea eax, [0x118c39b0] */
  EAX = ((uint32_t)(0x118c39b0));
  /* 118a59bd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a59c1 jne 0x118a5a11 */
  if (!C.zf) goto L_118a5a11;
  /* 118a59c3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 118a59c5 mov bl, 0x5a */
  BL = (0x5au);
  /* 118a59c7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 118a59c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118a59cc:;
  /* 118a59cc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 118a59ce or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 118a59d0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 118a59d2 je 0x118a59f5 */
  if (C.zf) goto L_118a59f5;
  /* 118a59d4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118a59d6 je 0x118a59f5 */
  if (C.zf) goto L_118a59f5;
  /* 118a59d8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118a59d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118a59da cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a59dc jb 0x118a59e4 */
  if (C.cf) goto L_118a59e4;
  /* 118a59de cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a59e0 ja 0x118a59e4 */
  if ((!C.cf&&!C.zf)) goto L_118a59e4;
  /* 118a59e2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_118a59e4:;
  /* 118a59e4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a59e6 jb 0x118a59ee */
  if (C.cf) goto L_118a59ee;
  /* 118a59e8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a59ea ja 0x118a59ee */
  if ((!C.cf&&!C.zf)) goto L_118a59ee;
  /* 118a59ec add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_118a59ee:;
  /* 118a59ee cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a59f0 jne 0x118a59ff */
  if (!C.zf) goto L_118a59ff;
  /* 118a59f2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118a59f3 jne 0x118a59cc */
  if (!C.zf) goto L_118a59cc;
L_118a59f5:;
  /* 118a59f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a59f7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a59f9 je 0x118a5a9a */
  if (C.zf) goto L_118a5a9a;
L_118a59ff:;
  /* 118a59ff mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 118a5a04 jb 0x118a5a9a */
  if (C.cf) goto L_118a5a9a;
  /* 118a5a0a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a5a0c jmp 0x118a5a9a */
  goto L_118a5a9a;
L_118a5a11:;
  /* 118a5a11 lock inc dword ptr [0x118c3b44] */
  x86_unimpl("lock inc @ 0x118a5a11");
  /* 118a5a18 cmp dword ptr [0x118c3b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5a1f jg 0x118a5a25 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a5a25;
  /* 118a5a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a5a23 jmp 0x118a5a3e */
  goto L_118a5a3e;
L_118a5a25:;
  /* 118a5a25 lock dec dword ptr [0x118c3b44] */
  x86_unimpl("lock dec @ 0x118a5a25");
  /* 118a5a2c mov ebx, ecx */
  EBX = (ECX);
  /* 118a5a2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118a5a30 call 0x1189ac00 */
  push32(0x118a5a35u); f_1189ac00();
  /* 118a5a35 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 118a5a3c mov ecx, ebx */
  ECX = (EBX);
L_118a5a3e:;
  /* 118a5a3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a5a40 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118a5a42 mov edi, edi */
  EDI = (EDI);
L_118a5a44:;
  /* 118a5a44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118a5a46 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a5a48 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118a5a4a je 0x118a5a6f */
  if (C.zf) goto L_118a5a6f;
  /* 118a5a4c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118a5a4e je 0x118a5a6f */
  if (C.zf) goto L_118a5a6f;
  /* 118a5a50 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118a5a51 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118a5a52 push ecx */
  push32((uint32_t)(ECX));
  /* 118a5a53 push eax */
  push32((uint32_t)(EAX));
  /* 118a5a54 push ebx */
  push32((uint32_t)(EBX));
  /* 118a5a55 call 0x118a6a40 */
  push32(0x118a5a5au); f_118a6a40();
  /* 118a5a5a mov ebx, eax */
  EBX = (EAX);
  /* 118a5a5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5a5f call 0x118a6a40 */
  push32(0x118a5a64u); f_118a6a40();
  /* 118a5a64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5a67 pop ecx */
  ECX = (pop32());
  /* 118a5a68 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5a6a jne 0x118a5a75 */
  if (!C.zf) goto L_118a5a75;
  /* 118a5a6c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118a5a6d jne 0x118a5a44 */
  if (!C.zf) goto L_118a5a44;
L_118a5a6f:;
  /* 118a5a6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a5a71 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5a73 je 0x118a5a7e */
  if (C.zf) goto L_118a5a7e;
L_118a5a75:;
  /* 118a5a75 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 118a5a7a jb 0x118a5a7e */
  if (C.cf) goto L_118a5a7e;
  /* 118a5a7c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_118a5a7e:;
  /* 118a5a7e pop eax */
  EAX = (pop32());
  /* 118a5a7f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a5a81 jne 0x118a5a8c */
  if (!C.zf) goto L_118a5a8c;
  /* 118a5a83 lock dec dword ptr [0x118c3b44] */
  x86_unimpl("lock dec @ 0x118a5a83");
  /* 118a5a8a jmp 0x118a5a9a */
  goto L_118a5a9a;
L_118a5a8c:;
  /* 118a5a8c mov ebx, ecx */
  EBX = (ECX);
  /* 118a5a8e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118a5a90 call 0x1189aca0 */
  push32(0x118a5a95u); f_1189aca0();
  /* 118a5a95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5a98 mov ecx, ebx */
  ECX = (EBX);
L_118a5a9a:;
  /* 118a5a9a mov eax, ecx */
  EAX = (ECX);
  /* 118a5a9c pop ebx */
  EBX = (pop32());
  /* 118a5a9d pop esi */
  ESI = (pop32());
  /* 118a5a9e pop edi */
  EDI = (pop32());
  /* 118a5a9f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118a5aa0 ret  */
  ESPCHK(0x118a59a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ab0 @ 0x118a5ab0 (255 bytes, 88 insns) */
void f_118a5ab0(void) {
  FTRACE(0x118a5ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a5ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a5ab1 mov ebp, esp */
  EBP = (ESP);
  /* 118a5ab3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_118a5ab6:;
  /* 118a5ab6 cmp dword ptr [0x118c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5abd jle 0x118a5ad6 */
  if ((C.zf||C.sf!=C.of)) goto L_118a5ad6;
  /* 118a5abf push 8 */
  push32((uint32_t)(0x8u));
  /* 118a5ac1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5ac4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a5ac6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118a5ac8 push ecx */
  push32((uint32_t)(ECX));
  /* 118a5ac9 call 0x1189d210 */
  push32(0x118a5aceu); f_1189d210();
  /* 118a5ace add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5ad1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118a5ad4 jmp 0x118a5aef */
  goto L_118a5aef;
L_118a5ad6:;
  /* 118a5ad6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5ad9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a5adb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a5add mov ecx, dword ptr [0x118c1c98] */
  ECX = (r32((uint32_t)(0x118c1c98)));
  /* 118a5ae3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a5ae5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 118a5ae9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 118a5aec mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_118a5aef:;
  /* 118a5aef cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5af3 je 0x118a5b00 */
  if (C.zf) goto L_118a5b00;
  /* 118a5af5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5af8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5afb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118a5afe jmp 0x118a5ab6 */
  goto L_118a5ab6;
L_118a5b00:;
  /* 118a5b00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5b03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a5b05 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118a5b07 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118a5b0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5b0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5b10 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118a5b13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a5b16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a5b19 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5b1d je 0x118a5b25 */
  if (C.zf) goto L_118a5b25;
  /* 118a5b1f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5b23 jne 0x118a5b38 */
  if (!C.zf) goto L_118a5b38;
L_118a5b25:;
  /* 118a5b25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5b28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a5b2a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a5b2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a5b2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5b32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5b35 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_118a5b38:;
  /* 118a5b38 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_118a5b3f:;
  /* 118a5b3f cmp dword ptr [0x118c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5b46 jle 0x118a5b5b */
  if ((C.zf||C.sf!=C.of)) goto L_118a5b5b;
  /* 118a5b48 push 4 */
  push32((uint32_t)(0x4u));
  /* 118a5b4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a5b4d push edx */
  push32((uint32_t)(EDX));
  /* 118a5b4e call 0x1189d210 */
  push32(0x118a5b53u); f_1189d210();
  /* 118a5b53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5b56 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118a5b59 jmp 0x118a5b70 */
  goto L_118a5b70;
L_118a5b5b:;
  /* 118a5b5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a5b5e mov ecx, dword ptr [0x118c1c98] */
  ECX = (r32((uint32_t)(0x118c1c98)));
  /* 118a5b64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a5b66 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 118a5b6a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 118a5b6d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_118a5b70:;
  /* 118a5b70 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5b74 je 0x118a5b9b */
  if (C.zf) goto L_118a5b9b;
  /* 118a5b76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a5b79 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a5b7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a5b7f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 118a5b83 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118a5b86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5b89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a5b8b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118a5b8d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118a5b90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5b93 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5b96 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 118a5b99 jmp 0x118a5b3f */
  goto L_118a5b3f;
L_118a5b9b:;
  /* 118a5b9b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5b9f jne 0x118a5ba8 */
  if (!C.zf) goto L_118a5ba8;
  /* 118a5ba1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a5ba4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a5ba6 jmp 0x118a5bab */
  goto L_118a5bab;
L_118a5ba8:;
  /* 118a5ba8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_118a5bab:;
  /* 118a5bab mov esp, ebp */
  ESP = (EBP);
  /* 118a5bad pop ebp */
  EBP = (pop32());
  /* 118a5bae ret  */
  ESPCHK(0x118a5ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015bb0 @ 0x118a5bb0 (17 bytes, 8 insns) */
void f_118a5bb0(void) {
  FTRACE(0x118a5bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a5bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a5bb1 mov ebp, esp */
  EBP = (ESP);
  /* 118a5bb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5bb6 push eax */
  push32((uint32_t)(EAX));
  /* 118a5bb7 call 0x118a5ab0 */
  push32(0x118a5bbcu); f_118a5ab0();
  /* 118a5bbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5bbf pop ebp */
  EBP = (pop32());
  /* 118a5bc0 ret  */
  ESPCHK(0x118a5bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015bd0 @ 0x118a5bd0 (297 bytes, 106 insns) */
void f_118a5bd0(void) {
  FTRACE(0x118a5bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a5bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a5bd1 mov ebp, esp */
  EBP = (ESP);
  /* 118a5bd3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a5bd6 push esi */
  push32((uint32_t)(ESI));
L_118a5bd7:;
  /* 118a5bd7 cmp dword ptr [0x118c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5bde jle 0x118a5bf7 */
  if ((C.zf||C.sf!=C.of)) goto L_118a5bf7;
  /* 118a5be0 push 8 */
  push32((uint32_t)(0x8u));
  /* 118a5be2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5be5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a5be7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118a5be9 push ecx */
  push32((uint32_t)(ECX));
  /* 118a5bea call 0x1189d210 */
  push32(0x118a5befu); f_1189d210();
  /* 118a5bef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5bf2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118a5bf5 jmp 0x118a5c10 */
  goto L_118a5c10;
L_118a5bf7:;
  /* 118a5bf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a5bfc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a5bfe mov ecx, dword ptr [0x118c1c98] */
  ECX = (r32((uint32_t)(0x118c1c98)));
  /* 118a5c04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a5c06 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 118a5c0a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 118a5c0d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_118a5c10:;
  /* 118a5c10 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5c14 je 0x118a5c21 */
  if (C.zf) goto L_118a5c21;
  /* 118a5c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5c19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5c1c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118a5c1f jmp 0x118a5bd7 */
  goto L_118a5bd7;
L_118a5c21:;
  /* 118a5c21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5c24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a5c26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118a5c28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118a5c2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5c2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5c31 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118a5c34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a5c37 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 118a5c3a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5c3e je 0x118a5c46 */
  if (C.zf) goto L_118a5c46;
  /* 118a5c40 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5c44 jne 0x118a5c59 */
  if (!C.zf) goto L_118a5c59;
L_118a5c46:;
  /* 118a5c46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5c49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a5c4b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a5c4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a5c50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5c53 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5c56 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_118a5c59:;
  /* 118a5c59 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 118a5c60 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_118a5c67:;
  /* 118a5c67 cmp dword ptr [0x118c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5c6e jle 0x118a5c83 */
  if ((C.zf||C.sf!=C.of)) goto L_118a5c83;
  /* 118a5c70 push 4 */
  push32((uint32_t)(0x4u));
  /* 118a5c72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a5c75 push edx */
  push32((uint32_t)(EDX));
  /* 118a5c76 call 0x1189d210 */
  push32(0x118a5c7bu); f_1189d210();
  /* 118a5c7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5c7e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 118a5c81 jmp 0x118a5c98 */
  goto L_118a5c98;
L_118a5c83:;
  /* 118a5c83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a5c86 mov ecx, dword ptr [0x118c1c98] */
  ECX = (r32((uint32_t)(0x118c1c98)));
  /* 118a5c8c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a5c8e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 118a5c92 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 118a5c95 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_118a5c98:;
  /* 118a5c98 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5c9c je 0x118a5cd9 */
  if (C.zf) goto L_118a5cd9;
  /* 118a5c9e push 0 */
  push32((uint32_t)(0x0u));
  /* 118a5ca0 push 0xa */
  push32((uint32_t)(0xau));
  /* 118a5ca2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a5ca5 push eax */
  push32((uint32_t)(EAX));
  /* 118a5ca6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5ca9 push ecx */
  push32((uint32_t)(ECX));
  /* 118a5caa call 0x118a6b70 */
  push32(0x118a5cafu); f_118a6b70();
  /* 118a5caf mov ecx, eax */
  ECX = (EAX);
  /* 118a5cb1 mov esi, edx */
  ESI = (EDX);
  /* 118a5cb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a5cb6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a5cb9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118a5cba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5cbc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5cbe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a5cc1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 118a5cc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5cc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a5cc9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a5ccb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a5cce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a5cd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5cd4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 118a5cd7 jmp 0x118a5c67 */
  goto L_118a5c67;
L_118a5cd9:;
  /* 118a5cd9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5cdd jne 0x118a5cee */
  if (!C.zf) goto L_118a5cee;
  /* 118a5cdf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5ce2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a5ce4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a5ce7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5cea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a5cec jmp 0x118a5cf4 */
  goto L_118a5cf4;
L_118a5cee:;
  /* 118a5cee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5cf1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_118a5cf4:;
  /* 118a5cf4 pop esi */
  ESI = (pop32());
  /* 118a5cf5 mov esp, ebp */
  ESP = (EBP);
  /* 118a5cf7 pop ebp */
  EBP = (pop32());
  /* 118a5cf8 ret  */
  ESPCHK(0x118a5bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d00 @ 0x118a5d00 (61 bytes, 18 insns) */
void f_118a5d00(void) {
  FTRACE(0x118a5d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a5d00 push ebp */
  push32((uint32_t)(EBP));
  /* 118a5d01 mov ebp, esp */
  EBP = (ESP);
  /* 118a5d03 cmp dword ptr [0x118c3b10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5d0a jne 0x118a5d3b */
  if (!C.zf) goto L_118a5d3b;
  /* 118a5d0c push 0xb */
  push32((uint32_t)(0xbu));
  /* 118a5d0e call 0x1189ac00 */
  push32(0x118a5d13u); f_1189ac00();
  /* 118a5d13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5d16 cmp dword ptr [0x118c3b10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5d1d jne 0x118a5d31 */
  if (!C.zf) goto L_118a5d31;
  /* 118a5d1f call 0x118a5d60 */
  push32(0x118a5d24u); f_118a5d60();
  /* 118a5d24 mov eax, dword ptr [0x118c3b10] */
  EAX = (r32((uint32_t)(0x118c3b10)));
  /* 118a5d29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5d2c mov dword ptr [0x118c3b10], eax */
  w32((uint32_t)(0x118c3b10), (EAX));
L_118a5d31:;
  /* 118a5d31 push 0xb */
  push32((uint32_t)(0xbu));
  /* 118a5d33 call 0x1189aca0 */
  push32(0x118a5d38u); f_1189aca0();
  /* 118a5d38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a5d3b:;
  /* 118a5d3b pop ebp */
  EBP = (pop32());
  /* 118a5d3c ret  */
  ESPCHK(0x118a5d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d40 @ 0x118a5d40 (30 bytes, 11 insns) */
void f_118a5d40(void) {
  FTRACE(0x118a5d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a5d40 push ebp */
  push32((uint32_t)(EBP));
  /* 118a5d41 mov ebp, esp */
  EBP = (ESP);
  /* 118a5d43 push 0xb */
  push32((uint32_t)(0xbu));
  /* 118a5d45 call 0x1189ac00 */
  push32(0x118a5d4au); f_1189ac00();
  /* 118a5d4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5d4d call 0x118a5d60 */
  push32(0x118a5d52u); f_118a5d60();
  /* 118a5d52 push 0xb */
  push32((uint32_t)(0xbu));
  /* 118a5d54 call 0x1189aca0 */
  push32(0x118a5d59u); f_1189aca0();
  /* 118a5d59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5d5c pop ebp */
  EBP = (pop32());
  /* 118a5d5d ret  */
  ESPCHK(0x118a5d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10015d60 @ 0x118a5d60 (939 bytes, 266 insns) */
void f_118a5d60(void) {
  FTRACE(0x118a5d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a5d60 push ebp */
  push32((uint32_t)(EBP));
  /* 118a5d61 mov ebp, esp */
  EBP = (ESP);
  /* 118a5d63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a5d66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118a5d6d push 0xc */
  push32((uint32_t)(0xcu));
  /* 118a5d6f call 0x1189ac00 */
  push32(0x118a5d74u); f_1189ac00();
  /* 118a5d74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5d77 mov dword ptr [0x118c3a58], 0 */
  w32((uint32_t)(0x118c3a58), (0x0u));
  /* 118a5d81 mov dword ptr [0x118c2e38], 0xffffffff */
  w32((uint32_t)(0x118c2e38), (0xffffffffu));
  /* 118a5d8b mov eax, dword ptr [0x118c2e38] */
  EAX = (r32((uint32_t)(0x118c2e38)));
  /* 118a5d90 mov dword ptr [0x118c2e28], eax */
  w32((uint32_t)(0x118c2e28), (EAX));
  /* 118a5d95 push 0x118c0460 */
  push32((uint32_t)(0x118c0460u));
  /* 118a5d9a call 0x118a6be0 */
  push32(0x118a5d9fu); f_118a6be0();
  /* 118a5d9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5da2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a5da5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5da9 jne 0x118a5ee3 */
  if (!C.zf) goto L_118a5ee3;
  /* 118a5daf push 0xc */
  push32((uint32_t)(0xcu));
  /* 118a5db1 call 0x1189aca0 */
  push32(0x118a5db6u); f_1189aca0();
  /* 118a5db6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5db9 push 0x118c3a60 */
  push32((uint32_t)(0x118c3a60u));
  /* 118a5dbe call dword ptr [0x118c62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62e0))), 0x118a5dc4u);
  /* 118a5dc4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5dc7 je 0x118a5ede */
  if (C.zf) goto L_118a5ede;
  /* 118a5dcd mov dword ptr [0x118c3a58], 1 */
  w32((uint32_t)(0x118c3a58), (0x1u));
  /* 118a5dd7 mov ecx, dword ptr [0x118c3a60] */
  ECX = (r32((uint32_t)(0x118c3a60)));
  /* 118a5ddd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a5de0 mov dword ptr [0x118c2d90], ecx */
  w32((uint32_t)(0x118c2d90), (ECX));
  /* 118a5de6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a5de8 mov dx, word ptr [0x118c3aa6] */
  DX = (r16((uint32_t)(0x118c3aa6)));
  /* 118a5def test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a5df1 je 0x118a5e09 */
  if (C.zf) goto L_118a5e09;
  /* 118a5df3 mov eax, dword ptr [0x118c3ab4] */
  EAX = (r32((uint32_t)(0x118c3ab4)));
  /* 118a5df8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a5dfb mov ecx, dword ptr [0x118c2d90] */
  ECX = (r32((uint32_t)(0x118c2d90)));
  /* 118a5e01 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5e03 mov dword ptr [0x118c2d90], ecx */
  w32((uint32_t)(0x118c2d90), (ECX));
L_118a5e09:;
  /* 118a5e09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a5e0b mov dx, word ptr [0x118c3afa] */
  DX = (r16((uint32_t)(0x118c3afa)));
  /* 118a5e12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a5e14 je 0x118a5e3e */
  if (C.zf) goto L_118a5e3e;
  /* 118a5e16 cmp dword ptr [0x118c3b08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5e1d je 0x118a5e3e */
  if (C.zf) goto L_118a5e3e;
  /* 118a5e1f mov dword ptr [0x118c2d94], 1 */
  w32((uint32_t)(0x118c2d94), (0x1u));
  /* 118a5e29 mov eax, dword ptr [0x118c3b08] */
  EAX = (r32((uint32_t)(0x118c3b08)));
  /* 118a5e2e sub eax, dword ptr [0x118c3ab4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c3ab4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a5e34 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a5e37 mov dword ptr [0x118c2d98], eax */
  w32((uint32_t)(0x118c2d98), (EAX));
  /* 118a5e3c jmp 0x118a5e52 */
  goto L_118a5e52;
L_118a5e3e:;
  /* 118a5e3e mov dword ptr [0x118c2d94], 0 */
  w32((uint32_t)(0x118c2d94), (0x0u));
  /* 118a5e48 mov dword ptr [0x118c2d98], 0 */
  w32((uint32_t)(0x118c2d98), (0x0u));
L_118a5e52:;
  /* 118a5e52 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 118a5e55 push ecx */
  push32((uint32_t)(ECX));
  /* 118a5e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a5e58 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118a5e5a mov edx, dword ptr [0x118c2e1c] */
  EDX = (r32((uint32_t)(0x118c2e1c)));
  /* 118a5e60 push edx */
  push32((uint32_t)(EDX));
  /* 118a5e61 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118a5e63 push 0x118c3a64 */
  push32((uint32_t)(0x118c3a64u));
  /* 118a5e68 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 118a5e6d mov eax, dword ptr [0x118c39c8] */
  EAX = (r32((uint32_t)(0x118c39c8)));
  /* 118a5e72 push eax */
  push32((uint32_t)(EAX));
  /* 118a5e73 call dword ptr [0x118c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6370))), 0x118a5e79u);
  /* 118a5e79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a5e7b je 0x118a5e8f */
  if (C.zf) goto L_118a5e8f;
  /* 118a5e7d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5e81 jne 0x118a5e8f */
  if (!C.zf) goto L_118a5e8f;
  /* 118a5e83 mov ecx, dword ptr [0x118c2e1c] */
  ECX = (r32((uint32_t)(0x118c2e1c)));
  /* 118a5e89 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 118a5e8d jmp 0x118a5e98 */
  goto L_118a5e98;
L_118a5e8f:;
  /* 118a5e8f mov edx, dword ptr [0x118c2e1c] */
  EDX = (r32((uint32_t)(0x118c2e1c)));
  /* 118a5e95 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_118a5e98:;
  /* 118a5e98 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 118a5e9b push eax */
  push32((uint32_t)(EAX));
  /* 118a5e9c push 0 */
  push32((uint32_t)(0x0u));
  /* 118a5e9e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118a5ea0 mov ecx, dword ptr [0x118c2e20] */
  ECX = (r32((uint32_t)(0x118c2e20)));
  /* 118a5ea6 push ecx */
  push32((uint32_t)(ECX));
  /* 118a5ea7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118a5ea9 push 0x118c3ab8 */
  push32((uint32_t)(0x118c3ab8u));
  /* 118a5eae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 118a5eb3 mov edx, dword ptr [0x118c39c8] */
  EDX = (r32((uint32_t)(0x118c39c8)));
  /* 118a5eb9 push edx */
  push32((uint32_t)(EDX));
  /* 118a5eba call dword ptr [0x118c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6370))), 0x118a5ec0u);
  /* 118a5ec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a5ec2 je 0x118a5ed5 */
  if (C.zf) goto L_118a5ed5;
  /* 118a5ec4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5ec8 jne 0x118a5ed5 */
  if (!C.zf) goto L_118a5ed5;
  /* 118a5eca mov eax, dword ptr [0x118c2e20] */
  EAX = (r32((uint32_t)(0x118c2e20)));
  /* 118a5ecf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 118a5ed3 jmp 0x118a5ede */
  goto L_118a5ede;
L_118a5ed5:;
  /* 118a5ed5 mov ecx, dword ptr [0x118c2e20] */
  ECX = (r32((uint32_t)(0x118c2e20)));
  /* 118a5edb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_118a5ede:;
  /* 118a5ede jmp 0x118a6107 */
  goto L_118a6107;
L_118a5ee3:;
  /* 118a5ee3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5ee6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118a5ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a5eeb je 0x118a5f0d */
  if (C.zf) goto L_118a5f0d;
  /* 118a5eed cmp dword ptr [0x118c3b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5ef4 je 0x118a5f1c */
  if (C.zf) goto L_118a5f1c;
  /* 118a5ef6 mov ecx, dword ptr [0x118c3b0c] */
  ECX = (r32((uint32_t)(0x118c3b0c)));
  /* 118a5efc push ecx */
  push32((uint32_t)(ECX));
  /* 118a5efd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5f00 push edx */
  push32((uint32_t)(EDX));
  /* 118a5f01 call 0x118a2e90 */
  push32(0x118a5f06u); f_118a2e90();
  /* 118a5f06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5f09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a5f0b jne 0x118a5f1c */
  if (!C.zf) goto L_118a5f1c;
L_118a5f0d:;
  /* 118a5f0d push 0xc */
  push32((uint32_t)(0xcu));
  /* 118a5f0f call 0x1189aca0 */
  push32(0x118a5f14u); f_1189aca0();
  /* 118a5f14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5f17 jmp 0x118a6107 */
  goto L_118a6107;
L_118a5f1c:;
  /* 118a5f1c push 2 */
  push32((uint32_t)(0x2u));
  /* 118a5f1e mov eax, dword ptr [0x118c3b0c] */
  EAX = (r32((uint32_t)(0x118c3b0c)));
  /* 118a5f23 push eax */
  push32((uint32_t)(EAX));
  /* 118a5f24 call 0x11897c90 */
  push32(0x118a5f29u); f_11897c90();
  /* 118a5f29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5f2c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 118a5f31 push 0x118c0458 */
  push32((uint32_t)(0x118c0458u));
  /* 118a5f36 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a5f38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5f3b push ecx */
  push32((uint32_t)(ECX));
  /* 118a5f3c call 0x1189a030 */
  push32(0x118a5f41u); f_1189a030();
  /* 118a5f41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5f44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5f47 push eax */
  push32((uint32_t)(EAX));
  /* 118a5f48 call 0x11897200 */
  push32(0x118a5f4du); f_11897200();
  /* 118a5f4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5f50 mov dword ptr [0x118c3b0c], eax */
  w32((uint32_t)(0x118c3b0c), (EAX));
  /* 118a5f55 cmp dword ptr [0x118c3b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5f5c jne 0x118a5f6d */
  if (!C.zf) goto L_118a5f6d;
  /* 118a5f5e push 0xc */
  push32((uint32_t)(0xcu));
  /* 118a5f60 call 0x1189aca0 */
  push32(0x118a5f65u); f_1189aca0();
  /* 118a5f65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5f68 jmp 0x118a6107 */
  goto L_118a6107;
L_118a5f6d:;
  /* 118a5f6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5f70 push edx */
  push32((uint32_t)(EDX));
  /* 118a5f71 mov eax, dword ptr [0x118c3b0c] */
  EAX = (r32((uint32_t)(0x118c3b0c)));
  /* 118a5f76 push eax */
  push32((uint32_t)(EAX));
  /* 118a5f77 call 0x1189a1b0 */
  push32(0x118a5f7cu); f_1189a1b0();
  /* 118a5f7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5f7f push 0xc */
  push32((uint32_t)(0xcu));
  /* 118a5f81 call 0x1189aca0 */
  push32(0x118a5f86u); f_1189aca0();
  /* 118a5f86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5f89 push 3 */
  push32((uint32_t)(0x3u));
  /* 118a5f8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5f8e push ecx */
  push32((uint32_t)(ECX));
  /* 118a5f8f mov edx, dword ptr [0x118c2e1c] */
  EDX = (r32((uint32_t)(0x118c2e1c)));
  /* 118a5f95 push edx */
  push32((uint32_t)(EDX));
  /* 118a5f96 call 0x1189aa20 */
  push32(0x118a5f9bu); f_1189aa20();
  /* 118a5f9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5f9e mov eax, dword ptr [0x118c2e1c] */
  EAX = (r32((uint32_t)(0x118c2e1c)));
  /* 118a5fa3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 118a5fa7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5faa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5fad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a5fb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5fb3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118a5fb6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5fb9 jne 0x118a5fcd */
  if (!C.zf) goto L_118a5fcd;
  /* 118a5fbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a5fbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5fc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118a5fc4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5fc7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5fca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_118a5fcd:;
  /* 118a5fcd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5fd0 push eax */
  push32((uint32_t)(EAX));
  /* 118a5fd1 call 0x118a5ab0 */
  push32(0x118a5fd6u); f_118a5ab0();
  /* 118a5fd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a5fd9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a5fdf mov dword ptr [0x118c2d90], eax */
  w32((uint32_t)(0x118c2d90), (EAX));
L_118a5fe4:;
  /* 118a5fe4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5fe7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118a5fea cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5fed je 0x118a6005 */
  if (C.zf) goto L_118a6005;
  /* 118a5fef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5ff2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a5ff5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a5ff8 jl 0x118a6010 */
  if ((C.sf!=C.of)) goto L_118a6010;
  /* 118a5ffa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a5ffd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118a6000 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6003 jg 0x118a6010 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a6010;
L_118a6005:;
  /* 118a6005 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a6008 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a600b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a600e jmp 0x118a5fe4 */
  goto L_118a5fe4;
L_118a6010:;
  /* 118a6010 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a6013 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118a6016 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6019 jne 0x118a60b5 */
  if (!C.zf) goto L_118a60b5;
  /* 118a601f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a6022 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6025 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a6028 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a602b push edx */
  push32((uint32_t)(EDX));
  /* 118a602c call 0x118a5ab0 */
  push32(0x118a6031u); f_118a5ab0();
  /* 118a6031 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6034 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a6037 mov ecx, dword ptr [0x118c2d90] */
  ECX = (r32((uint32_t)(0x118c2d90)));
  /* 118a603d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a603f mov dword ptr [0x118c2d90], ecx */
  w32((uint32_t)(0x118c2d90), (ECX));
L_118a6045:;
  /* 118a6045 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a6048 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118a604b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a604e jl 0x118a6066 */
  if ((C.sf!=C.of)) goto L_118a6066;
  /* 118a6050 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a6053 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118a6056 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6059 jg 0x118a6066 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a6066;
  /* 118a605b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a605e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6061 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a6064 jmp 0x118a6045 */
  goto L_118a6045;
L_118a6066:;
  /* 118a6066 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a6069 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118a606c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a606f jne 0x118a60b5 */
  if (!C.zf) goto L_118a60b5;
  /* 118a6071 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a6074 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6077 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a607a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a607d push ecx */
  push32((uint32_t)(ECX));
  /* 118a607e call 0x118a5ab0 */
  push32(0x118a6083u); f_118a5ab0();
  /* 118a6083 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6086 mov edx, dword ptr [0x118c2d90] */
  EDX = (r32((uint32_t)(0x118c2d90)));
  /* 118a608c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a608e mov dword ptr [0x118c2d90], edx */
  w32((uint32_t)(0x118c2d90), (EDX));
L_118a6094:;
  /* 118a6094 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a6097 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a609a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a609d jl 0x118a60b5 */
  if ((C.sf!=C.of)) goto L_118a60b5;
  /* 118a609f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a60a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118a60a5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a60a8 jg 0x118a60b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a60b5;
  /* 118a60aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a60ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a60b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a60b3 jmp 0x118a6094 */
  goto L_118a6094;
L_118a60b5:;
  /* 118a60b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a60b9 je 0x118a60c9 */
  if (C.zf) goto L_118a60c9;
  /* 118a60bb mov edx, dword ptr [0x118c2d90] */
  EDX = (r32((uint32_t)(0x118c2d90)));
  /* 118a60c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a60c3 mov dword ptr [0x118c2d90], edx */
  w32((uint32_t)(0x118c2d90), (EDX));
L_118a60c9:;
  /* 118a60c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a60cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118a60cf mov dword ptr [0x118c2d94], ecx */
  w32((uint32_t)(0x118c2d94), (ECX));
  /* 118a60d5 cmp dword ptr [0x118c2d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c2d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a60dc je 0x118a60fe */
  if (C.zf) goto L_118a60fe;
  /* 118a60de push 3 */
  push32((uint32_t)(0x3u));
  /* 118a60e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a60e3 push edx */
  push32((uint32_t)(EDX));
  /* 118a60e4 mov eax, dword ptr [0x118c2e20] */
  EAX = (r32((uint32_t)(0x118c2e20)));
  /* 118a60e9 push eax */
  push32((uint32_t)(EAX));
  /* 118a60ea call 0x1189aa20 */
  push32(0x118a60efu); f_1189aa20();
  /* 118a60ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a60f2 mov ecx, dword ptr [0x118c2e20] */
  ECX = (r32((uint32_t)(0x118c2e20)));
  /* 118a60f8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 118a60fc jmp 0x118a6107 */
  goto L_118a6107;
L_118a60fe:;
  /* 118a60fe mov edx, dword ptr [0x118c2e20] */
  EDX = (r32((uint32_t)(0x118c2e20)));
  /* 118a6104 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_118a6107:;
  /* 118a6107 mov esp, ebp */
  ESP = (EBP);
  /* 118a6109 pop ebp */
  EBP = (pop32());
  /* 118a610a ret  */
  ESPCHK(0x118a5d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10016110 @ 0x118a6110 (46 bytes, 18 insns) */
void f_118a6110(void) {
  FTRACE(0x118a6110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a6110 push ebp */
  push32((uint32_t)(EBP));
  /* 118a6111 mov ebp, esp */
  EBP = (ESP);
  /* 118a6113 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6114 push 0xb */
  push32((uint32_t)(0xbu));
  /* 118a6116 call 0x1189ac00 */
  push32(0x118a611bu); f_1189ac00();
  /* 118a611b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a611e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6121 push eax */
  push32((uint32_t)(EAX));
  /* 118a6122 call 0x118a6140 */
  push32(0x118a6127u); f_118a6140();
  /* 118a6127 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a612a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a612d push 0xb */
  push32((uint32_t)(0xbu));
  /* 118a612f call 0x1189aca0 */
  push32(0x118a6134u); f_1189aca0();
  /* 118a6134 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6137 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a613a mov esp, ebp */
  ESP = (EBP);
  /* 118a613c pop ebp */
  EBP = (pop32());
  /* 118a613d ret  */
  ESPCHK(0x118a6110u, _esp0);
  ESP += 4; return;
}

/* FUN_10016140 @ 0x118a6140 (762 bytes, 246 insns) */
void f_118a6140(void) {
  FTRACE(0x118a6140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a6140 push ebp */
  push32((uint32_t)(EBP));
  /* 118a6141 mov ebp, esp */
  EBP = (ESP);
  /* 118a6143 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6144 cmp dword ptr [0x118c2d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c2d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a614b jne 0x118a6154 */
  if (!C.zf) goto L_118a6154;
  /* 118a614d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a614f jmp 0x118a6436 */
  goto L_118a6436;
L_118a6154:;
  /* 118a6154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6157 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 118a615a cmp ecx, dword ptr [0x118c2e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c2e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6160 jne 0x118a6174 */
  if (!C.zf) goto L_118a6174;
  /* 118a6162 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6165 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 118a6168 cmp eax, dword ptr [0x118c2e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c2e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a616e je 0x118a633b */
  if (C.zf) goto L_118a633b;
L_118a6174:;
  /* 118a6174 cmp dword ptr [0x118c3a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a617b je 0x118a62f5 */
  if (C.zf) goto L_118a62f5;
  /* 118a6181 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a6183 mov cx, word ptr [0x118c3af8] */
  CX = (r16((uint32_t)(0x118c3af8)));
  /* 118a618a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a618c jne 0x118a61e9 */
  if (!C.zf) goto L_118a61e9;
  /* 118a618e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a6190 mov dx, word ptr [0x118c3b06] */
  DX = (r16((uint32_t)(0x118c3b06)));
  /* 118a6197 push edx */
  push32((uint32_t)(EDX));
  /* 118a6198 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a619a mov ax, word ptr [0x118c3b04] */
  AX = (r16((uint32_t)(0x118c3b04)));
  /* 118a61a0 push eax */
  push32((uint32_t)(EAX));
  /* 118a61a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a61a3 mov cx, word ptr [0x118c3b02] */
  CX = (r16((uint32_t)(0x118c3b02)));
  /* 118a61aa push ecx */
  push32((uint32_t)(ECX));
  /* 118a61ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a61ad mov dx, word ptr [0x118c3b00] */
  DX = (r16((uint32_t)(0x118c3b00)));
  /* 118a61b4 push edx */
  push32((uint32_t)(EDX));
  /* 118a61b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a61b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a61b9 mov ax, word ptr [0x118c3afc] */
  AX = (r16((uint32_t)(0x118c3afc)));
  /* 118a61bf push eax */
  push32((uint32_t)(EAX));
  /* 118a61c0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a61c2 mov cx, word ptr [0x118c3afe] */
  CX = (r16((uint32_t)(0x118c3afe)));
  /* 118a61c9 push ecx */
  push32((uint32_t)(ECX));
  /* 118a61ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a61cc mov dx, word ptr [0x118c3afa] */
  DX = (r16((uint32_t)(0x118c3afa)));
  /* 118a61d3 push edx */
  push32((uint32_t)(EDX));
  /* 118a61d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a61d7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 118a61da push ecx */
  push32((uint32_t)(ECX));
  /* 118a61db push 1 */
  push32((uint32_t)(0x1u));
  /* 118a61dd push 1 */
  push32((uint32_t)(0x1u));
  /* 118a61df call 0x118a6440 */
  push32(0x118a61e4u); f_118a6440();
  /* 118a61e4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a61e7 jmp 0x118a623a */
  goto L_118a623a;
L_118a61e9:;
  /* 118a61e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a61eb mov dx, word ptr [0x118c3b06] */
  DX = (r16((uint32_t)(0x118c3b06)));
  /* 118a61f2 push edx */
  push32((uint32_t)(EDX));
  /* 118a61f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a61f5 mov ax, word ptr [0x118c3b04] */
  AX = (r16((uint32_t)(0x118c3b04)));
  /* 118a61fb push eax */
  push32((uint32_t)(EAX));
  /* 118a61fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a61fe mov cx, word ptr [0x118c3b02] */
  CX = (r16((uint32_t)(0x118c3b02)));
  /* 118a6205 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6206 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a6208 mov dx, word ptr [0x118c3b00] */
  DX = (r16((uint32_t)(0x118c3b00)));
  /* 118a620f push edx */
  push32((uint32_t)(EDX));
  /* 118a6210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a6212 mov ax, word ptr [0x118c3afe] */
  AX = (r16((uint32_t)(0x118c3afe)));
  /* 118a6218 push eax */
  push32((uint32_t)(EAX));
  /* 118a6219 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a621b push 0 */
  push32((uint32_t)(0x0u));
  /* 118a621d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a621f mov cx, word ptr [0x118c3afa] */
  CX = (r16((uint32_t)(0x118c3afa)));
  /* 118a6226 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6227 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a622a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 118a622d push eax */
  push32((uint32_t)(EAX));
  /* 118a622e push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6230 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6232 call 0x118a6440 */
  push32(0x118a6237u); f_118a6440();
  /* 118a6237 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a623a:;
  /* 118a623a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a623c mov cx, word ptr [0x118c3aa4] */
  CX = (r16((uint32_t)(0x118c3aa4)));
  /* 118a6243 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a6245 jne 0x118a62a2 */
  if (!C.zf) goto L_118a62a2;
  /* 118a6247 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a6249 mov dx, word ptr [0x118c3ab2] */
  DX = (r16((uint32_t)(0x118c3ab2)));
  /* 118a6250 push edx */
  push32((uint32_t)(EDX));
  /* 118a6251 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a6253 mov ax, word ptr [0x118c3ab0] */
  AX = (r16((uint32_t)(0x118c3ab0)));
  /* 118a6259 push eax */
  push32((uint32_t)(EAX));
  /* 118a625a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a625c mov cx, word ptr [0x118c3aae] */
  CX = (r16((uint32_t)(0x118c3aae)));
  /* 118a6263 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6264 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a6266 mov dx, word ptr [0x118c3aac] */
  DX = (r16((uint32_t)(0x118c3aac)));
  /* 118a626d push edx */
  push32((uint32_t)(EDX));
  /* 118a626e push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6270 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a6272 mov ax, word ptr [0x118c3aa8] */
  AX = (r16((uint32_t)(0x118c3aa8)));
  /* 118a6278 push eax */
  push32((uint32_t)(EAX));
  /* 118a6279 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a627b mov cx, word ptr [0x118c3aaa] */
  CX = (r16((uint32_t)(0x118c3aaa)));
  /* 118a6282 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6283 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a6285 mov dx, word ptr [0x118c3aa6] */
  DX = (r16((uint32_t)(0x118c3aa6)));
  /* 118a628c push edx */
  push32((uint32_t)(EDX));
  /* 118a628d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6290 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 118a6293 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6294 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6296 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6298 call 0x118a6440 */
  push32(0x118a629du); f_118a6440();
  /* 118a629d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a62a0 jmp 0x118a62f3 */
  goto L_118a62f3;
L_118a62a2:;
  /* 118a62a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a62a4 mov dx, word ptr [0x118c3ab2] */
  DX = (r16((uint32_t)(0x118c3ab2)));
  /* 118a62ab push edx */
  push32((uint32_t)(EDX));
  /* 118a62ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a62ae mov ax, word ptr [0x118c3ab0] */
  AX = (r16((uint32_t)(0x118c3ab0)));
  /* 118a62b4 push eax */
  push32((uint32_t)(EAX));
  /* 118a62b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a62b7 mov cx, word ptr [0x118c3aae] */
  CX = (r16((uint32_t)(0x118c3aae)));
  /* 118a62be push ecx */
  push32((uint32_t)(ECX));
  /* 118a62bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a62c1 mov dx, word ptr [0x118c3aac] */
  DX = (r16((uint32_t)(0x118c3aac)));
  /* 118a62c8 push edx */
  push32((uint32_t)(EDX));
  /* 118a62c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a62cb mov ax, word ptr [0x118c3aaa] */
  AX = (r16((uint32_t)(0x118c3aaa)));
  /* 118a62d1 push eax */
  push32((uint32_t)(EAX));
  /* 118a62d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a62d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a62d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a62d8 mov cx, word ptr [0x118c3aa6] */
  CX = (r16((uint32_t)(0x118c3aa6)));
  /* 118a62df push ecx */
  push32((uint32_t)(ECX));
  /* 118a62e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a62e3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 118a62e6 push eax */
  push32((uint32_t)(EAX));
  /* 118a62e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a62e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a62eb call 0x118a6440 */
  push32(0x118a62f0u); f_118a6440();
  /* 118a62f0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a62f3:;
  /* 118a62f3 jmp 0x118a633b */
  goto L_118a633b;
L_118a62f5:;
  /* 118a62f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a62f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a62f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a62fb push 2 */
  push32((uint32_t)(0x2u));
  /* 118a62fd push 0 */
  push32((uint32_t)(0x0u));
  /* 118a62ff push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6301 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6303 push 4 */
  push32((uint32_t)(0x4u));
  /* 118a6305 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6308 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 118a630b push edx */
  push32((uint32_t)(EDX));
  /* 118a630c push 1 */
  push32((uint32_t)(0x1u));
  /* 118a630e push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6310 call 0x118a6440 */
  push32(0x118a6315u); f_118a6440();
  /* 118a6315 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6318 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a631a push 0 */
  push32((uint32_t)(0x0u));
  /* 118a631c push 0 */
  push32((uint32_t)(0x0u));
  /* 118a631e push 2 */
  push32((uint32_t)(0x2u));
  /* 118a6320 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6322 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6324 push 5 */
  push32((uint32_t)(0x5u));
  /* 118a6326 push 0xa */
  push32((uint32_t)(0xau));
  /* 118a6328 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a632b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 118a632e push ecx */
  push32((uint32_t)(ECX));
  /* 118a632f push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6331 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6333 call 0x118a6440 */
  push32(0x118a6338u); f_118a6440();
  /* 118a6338 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a633b:;
  /* 118a633b mov edx, dword ptr [0x118c2e2c] */
  EDX = (r32((uint32_t)(0x118c2e2c)));
  /* 118a6341 cmp edx, dword ptr [0x118c2e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x118c2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6347 jge 0x118a6394 */
  if ((C.sf==C.of)) goto L_118a6394;
  /* 118a6349 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a634c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 118a634f cmp ecx, dword ptr [0x118c2e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6355 jl 0x118a6365 */
  if ((C.sf!=C.of)) goto L_118a6365;
  /* 118a6357 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a635a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 118a635d cmp eax, dword ptr [0x118c2e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6363 jle 0x118a636c */
  if ((C.zf||C.sf!=C.of)) goto L_118a636c;
L_118a6365:;
  /* 118a6365 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a6367 jmp 0x118a6436 */
  goto L_118a6436;
L_118a636c:;
  /* 118a636c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a636f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 118a6372 cmp edx, dword ptr [0x118c2e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x118c2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6378 jle 0x118a6392 */
  if ((C.zf||C.sf!=C.of)) goto L_118a6392;
  /* 118a637a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a637d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 118a6380 cmp ecx, dword ptr [0x118c2e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6386 jge 0x118a6392 */
  if ((C.sf==C.of)) goto L_118a6392;
  /* 118a6388 mov eax, 1 */
  EAX = (0x1u);
  /* 118a638d jmp 0x118a6436 */
  goto L_118a6436;
L_118a6392:;
  /* 118a6392 jmp 0x118a63d7 */
  goto L_118a63d7;
L_118a6394:;
  /* 118a6394 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6397 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 118a639a cmp eax, dword ptr [0x118c2e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a63a0 jl 0x118a63b0 */
  if ((C.sf!=C.of)) goto L_118a63b0;
  /* 118a63a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a63a5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 118a63a8 cmp edx, dword ptr [0x118c2e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x118c2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a63ae jle 0x118a63b7 */
  if ((C.zf||C.sf!=C.of)) goto L_118a63b7;
L_118a63b0:;
  /* 118a63b0 mov eax, 1 */
  EAX = (0x1u);
  /* 118a63b5 jmp 0x118a6436 */
  goto L_118a6436;
L_118a63b7:;
  /* 118a63b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a63ba mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 118a63bd cmp ecx, dword ptr [0x118c2e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a63c3 jle 0x118a63d7 */
  if ((C.zf||C.sf!=C.of)) goto L_118a63d7;
  /* 118a63c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a63c8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 118a63cb cmp eax, dword ptr [0x118c2e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a63d1 jge 0x118a63d7 */
  if ((C.sf==C.of)) goto L_118a63d7;
  /* 118a63d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a63d5 jmp 0x118a6436 */
  goto L_118a6436;
L_118a63d7:;
  /* 118a63d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a63da mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 118a63dd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a63e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a63e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a63e5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a63e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a63ea mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 118a63ed imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a63f3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a63f5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a63fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118a63fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6401 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 118a6404 cmp edx, dword ptr [0x118c2e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x118c2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a640a jne 0x118a6422 */
  if (!C.zf) goto L_118a6422;
  /* 118a640c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a640f cmp eax, dword ptr [0x118c2e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c2e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6415 jl 0x118a641e */
  if ((C.sf!=C.of)) goto L_118a641e;
  /* 118a6417 mov eax, 1 */
  EAX = (0x1u);
  /* 118a641c jmp 0x118a6436 */
  goto L_118a6436;
L_118a641e:;
  /* 118a641e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a6420 jmp 0x118a6436 */
  goto L_118a6436;
L_118a6422:;
  /* 118a6422 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a6425 cmp ecx, dword ptr [0x118c2e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c2e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a642b jge 0x118a6434 */
  if ((C.sf==C.of)) goto L_118a6434;
  /* 118a642d mov eax, 1 */
  EAX = (0x1u);
  /* 118a6432 jmp 0x118a6436 */
  goto L_118a6436;
L_118a6434:;
  /* 118a6434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a6436:;
  /* 118a6436 mov esp, ebp */
  ESP = (EBP);
  /* 118a6438 pop ebp */
  EBP = (pop32());
  /* 118a6439 ret  */
  ESPCHK(0x118a6140u, _esp0);
  ESP += 4; return;
}

/* FUN_10016440 @ 0x118a6440 (504 bytes, 145 insns) */
void f_118a6440(void) {
  FTRACE(0x118a6440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a6440 push ebp */
  push32((uint32_t)(EBP));
  /* 118a6441 mov ebp, esp */
  EBP = (ESP);
  /* 118a6443 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a6446 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a644a jne 0x118a651c */
  if (!C.zf) goto L_118a651c;
  /* 118a6450 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a6453 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 118a6456 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a6458 jne 0x118a6469 */
  if (!C.zf) goto L_118a6469;
  /* 118a645a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a645d mov edx, dword ptr [ecx*4 + 0x118c2e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x118c2e4c)));
  /* 118a6464 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 118a6467 jmp 0x118a6476 */
  goto L_118a6476;
L_118a6469:;
  /* 118a6469 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a646c mov ecx, dword ptr [eax*4 + 0x118c2e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x118c2e80)));
  /* 118a6473 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_118a6476:;
  /* 118a6476 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a6479 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a647c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118a647f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a6482 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a6485 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a648b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a648e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6490 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a6493 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a6496 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 118a6499 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 118a649d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118a649e mov ecx, 7 */
  ECX = (0x7u);
  /* 118a64a3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118a64a5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118a64a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a64ab cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a64ae jge 0x118a64c9 */
  if ((C.sf==C.of)) goto L_118a64c9;
  /* 118a64b0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118a64b3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a64b6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a64b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a64bc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a64bf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a64c2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a64c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a64c7 jmp 0x118a64dd */
  goto L_118a64dd;
L_118a64c9:;
  /* 118a64c9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118a64cc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a64cf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a64d2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a64d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a64d8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a64da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118a64dd:;
  /* 118a64dd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a64e1 jne 0x118a651a */
  if (!C.zf) goto L_118a651a;
  /* 118a64e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a64e6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 118a64e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a64eb jne 0x118a64fc */
  if (!C.zf) goto L_118a64fc;
  /* 118a64ed mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a64f0 mov eax, dword ptr [edx*4 + 0x118c2e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x118c2e50)));
  /* 118a64f7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118a64fa jmp 0x118a6509 */
  goto L_118a6509;
L_118a64fc:;
  /* 118a64fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a64ff mov edx, dword ptr [ecx*4 + 0x118c2e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x118c2e84)));
  /* 118a6506 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_118a6509:;
  /* 118a6509 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a650c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a650f jle 0x118a651a */
  if ((C.zf||C.sf!=C.of)) goto L_118a651a;
  /* 118a6511 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a6514 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a6517 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_118a651a:;
  /* 118a651a jmp 0x118a6551 */
  goto L_118a6551;
L_118a651c:;
  /* 118a651c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a651f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 118a6522 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a6524 jne 0x118a6535 */
  if (!C.zf) goto L_118a6535;
  /* 118a6526 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a6529 mov ecx, dword ptr [eax*4 + 0x118c2e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x118c2e4c)));
  /* 118a6530 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 118a6533 jmp 0x118a6542 */
  goto L_118a6542;
L_118a6535:;
  /* 118a6535 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a6538 mov eax, dword ptr [edx*4 + 0x118c2e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x118c2e80)));
  /* 118a653f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_118a6542:;
  /* 118a6542 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a6545 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118a6548 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a654b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a654e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_118a6551:;
  /* 118a6551 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6555 jne 0x118a6591 */
  if (!C.zf) goto L_118a6591;
  /* 118a6557 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a655a mov dword ptr [0x118c2e2c], eax */
  w32((uint32_t)(0x118c2e2c), (EAX));
  /* 118a655f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 118a6562 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a6565 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 118a6568 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a656a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a656d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 118a6570 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6572 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a6578 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 118a657b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a657d mov dword ptr [0x118c2e30], ecx */
  w32((uint32_t)(0x118c2e30), (ECX));
  /* 118a6583 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a6586 mov dword ptr [0x118c2e28], edx */
  w32((uint32_t)(0x118c2e28), (EDX));
  /* 118a658c jmp 0x118a6634 */
  goto L_118a6634;
L_118a6591:;
  /* 118a6591 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a6594 mov dword ptr [0x118c2e3c], eax */
  w32((uint32_t)(0x118c2e3c), (EAX));
  /* 118a6599 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 118a659c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a659f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 118a65a2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a65a4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a65a7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 118a65aa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a65ac imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a65b2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 118a65b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a65b7 mov dword ptr [0x118c2e40], ecx */
  w32((uint32_t)(0x118c2e40), (ECX));
  /* 118a65bd mov edx, dword ptr [0x118c2d98] */
  EDX = (r32((uint32_t)(0x118c2d98)));
  /* 118a65c3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118a65c9 mov eax, dword ptr [0x118c2e40] */
  EAX = (r32((uint32_t)(0x118c2e40)));
  /* 118a65ce add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a65d0 mov dword ptr [0x118c2e40], eax */
  w32((uint32_t)(0x118c2e40), (EAX));
  /* 118a65d5 cmp dword ptr [0x118c2e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c2e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a65dc jge 0x118a6601 */
  if ((C.sf==C.of)) goto L_118a6601;
  /* 118a65de mov ecx, dword ptr [0x118c2e40] */
  ECX = (r32((uint32_t)(0x118c2e40)));
  /* 118a65e4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a65ea mov dword ptr [0x118c2e40], ecx */
  w32((uint32_t)(0x118c2e40), (ECX));
  /* 118a65f0 mov edx, dword ptr [0x118c2e3c] */
  EDX = (r32((uint32_t)(0x118c2e3c)));
  /* 118a65f6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a65f9 mov dword ptr [0x118c2e3c], edx */
  w32((uint32_t)(0x118c2e3c), (EDX));
  /* 118a65ff jmp 0x118a662b */
  goto L_118a662b;
L_118a6601:;
  /* 118a6601 cmp dword ptr [0x118c2e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x118c2e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a660b jl 0x118a662b */
  if ((C.sf!=C.of)) goto L_118a662b;
  /* 118a660d mov eax, dword ptr [0x118c2e40] */
  EAX = (r32((uint32_t)(0x118c2e40)));
  /* 118a6612 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a6617 mov dword ptr [0x118c2e40], eax */
  w32((uint32_t)(0x118c2e40), (EAX));
  /* 118a661c mov ecx, dword ptr [0x118c2e3c] */
  ECX = (r32((uint32_t)(0x118c2e3c)));
  /* 118a6622 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6625 mov dword ptr [0x118c2e3c], ecx */
  w32((uint32_t)(0x118c2e3c), (ECX));
L_118a662b:;
  /* 118a662b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a662e mov dword ptr [0x118c2e38], edx */
  w32((uint32_t)(0x118c2e38), (EDX));
L_118a6634:;
  /* 118a6634 mov esp, ebp */
  ESP = (EBP);
  /* 118a6636 pop ebp */
  EBP = (pop32());
  /* 118a6637 ret  */
  ESPCHK(0x118a6440u, _esp0);
  ESP += 4; return;
}

/* FUN_10016640 @ 0x118a6640 (382 bytes, 135 insns) */
void f_118a6640(void) {
  FTRACE(0x118a6640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a6640 push ebp */
  push32((uint32_t)(EBP));
  /* 118a6641 mov ebp, esp */
  EBP = (ESP);
  /* 118a6643 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118a6645 push 0x118c0468 */
  push32((uint32_t)(0x118c0468u));
  /* 118a664a push 0x118a0308 */
  push32((uint32_t)(0x118a0308u));
  /* 118a664f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118a6655 push eax */
  push32((uint32_t)(EAX));
  /* 118a6656 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118a665d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6660 push ebx */
  push32((uint32_t)(EBX));
  /* 118a6661 push esi */
  push32((uint32_t)(ESI));
  /* 118a6662 push edi */
  push32((uint32_t)(EDI));
  /* 118a6663 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118a6666 cmp dword ptr [0x118c3b14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a666d jne 0x118a66b2 */
  if (!C.zf) goto L_118a66b2;
  /* 118a666f push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6671 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6673 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6675 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6677 call dword ptr [0x118c62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62dc))), 0x118a667du);
  /* 118a667d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a667f je 0x118a668d */
  if (C.zf) goto L_118a668d;
  /* 118a6681 mov dword ptr [0x118c3b14], 1 */
  w32((uint32_t)(0x118c3b14), (0x1u));
  /* 118a668b jmp 0x118a66b2 */
  goto L_118a66b2;
L_118a668d:;
  /* 118a668d push 0 */
  push32((uint32_t)(0x0u));
  /* 118a668f push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6691 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6693 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6695 call dword ptr [0x118c62f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62f4))), 0x118a669bu);
  /* 118a669b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a669d je 0x118a66ab */
  if (C.zf) goto L_118a66ab;
  /* 118a669f mov dword ptr [0x118c3b14], 2 */
  w32((uint32_t)(0x118c3b14), (0x2u));
  /* 118a66a9 jmp 0x118a66b2 */
  goto L_118a66b2;
L_118a66ab:;
  /* 118a66ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a66ad jmp 0x118a67c1 */
  goto L_118a67c1;
L_118a66b2:;
  /* 118a66b2 cmp dword ptr [0x118c3b14], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a66b9 jne 0x118a66d6 */
  if (!C.zf) goto L_118a66d6;
  /* 118a66bb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a66be push eax */
  push32((uint32_t)(EAX));
  /* 118a66bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a66c2 push ecx */
  push32((uint32_t)(ECX));
  /* 118a66c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a66c6 push edx */
  push32((uint32_t)(EDX));
  /* 118a66c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a66ca push eax */
  push32((uint32_t)(EAX));
  /* 118a66cb call dword ptr [0x118c62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62dc))), 0x118a66d1u);
  /* 118a66d1 jmp 0x118a67c1 */
  goto L_118a67c1;
L_118a66d6:;
  /* 118a66d6 cmp dword ptr [0x118c3b14], 2 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a66dd jne 0x118a67bf */
  if (!C.zf) goto L_118a67bf;
  /* 118a66e3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a66e7 jne 0x118a66f2 */
  if (!C.zf) goto L_118a66f2;
  /* 118a66e9 mov ecx, dword ptr [0x118c39c8] */
  ECX = (r32((uint32_t)(0x118c39c8)));
  /* 118a66ef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_118a66f2:;
  /* 118a66f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a66f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a66f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a66f9 push edx */
  push32((uint32_t)(EDX));
  /* 118a66fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a66fd push eax */
  push32((uint32_t)(EAX));
  /* 118a66fe call dword ptr [0x118c62f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62f4))), 0x118a6704u);
  /* 118a6704 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118a6707 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a670b jne 0x118a6714 */
  if (!C.zf) goto L_118a6714;
  /* 118a670d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a670f jmp 0x118a67c1 */
  goto L_118a67c1;
L_118a6714:;
  /* 118a6714 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118a671b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118a671e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6721 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118a6723 call 0x1189a3a0 */
  push32(0x118a6728u); f_1189a3a0();
  /* 118a6728 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 118a672b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118a672e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 118a6731 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 118a6734 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 118a673b jmp 0x118a6754 */
  goto L_118a6754;
  /* 118a673d mov eax, 1 */
  EAX = (0x1u);
  /* 118a6742 ret  */
  ESPCHK(0x118a6640u, _esp0);
  ESP += 4; return;
  /* 118a6743 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118a6746 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 118a674d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_118a6754:;
  /* 118a6754 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6758 jne 0x118a675e */
  if (!C.zf) goto L_118a675e;
  /* 118a675a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a675c jmp 0x118a67c1 */
  goto L_118a67c1;
L_118a675e:;
  /* 118a675e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118a6761 push edx */
  push32((uint32_t)(EDX));
  /* 118a6762 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 118a6765 push eax */
  push32((uint32_t)(EAX));
  /* 118a6766 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a6769 push ecx */
  push32((uint32_t)(ECX));
  /* 118a676a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a676d push edx */
  push32((uint32_t)(EDX));
  /* 118a676e call dword ptr [0x118c62f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62f4))), 0x118a6774u);
  /* 118a6774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a6776 jne 0x118a677c */
  if (!C.zf) goto L_118a677c;
  /* 118a6778 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a677a jmp 0x118a67c1 */
  goto L_118a67c1;
L_118a677c:;
  /* 118a677c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6780 jne 0x118a679d */
  if (!C.zf) goto L_118a679d;
  /* 118a6782 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6784 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6786 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118a6788 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 118a678b push eax */
  push32((uint32_t)(EAX));
  /* 118a678c push 1 */
  push32((uint32_t)(0x1u));
  /* 118a678e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a6791 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6792 call dword ptr [0x118c6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6324))), 0x118a6798u);
  /* 118a6798 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118a679b jmp 0x118a67ba */
  goto L_118a67ba;
L_118a679d:;
  /* 118a679d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a67a0 push edx */
  push32((uint32_t)(EDX));
  /* 118a67a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a67a4 push eax */
  push32((uint32_t)(EAX));
  /* 118a67a5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118a67a7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 118a67aa push ecx */
  push32((uint32_t)(ECX));
  /* 118a67ab push 1 */
  push32((uint32_t)(0x1u));
  /* 118a67ad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a67b0 push edx */
  push32((uint32_t)(EDX));
  /* 118a67b1 call dword ptr [0x118c6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6324))), 0x118a67b7u);
  /* 118a67b7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_118a67ba:;
  /* 118a67ba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 118a67bd jmp 0x118a67c1 */
  goto L_118a67c1;
L_118a67bf:;
  /* 118a67bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a67c1:;
  /* 118a67c1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 118a67c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a67c7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118a67ce pop edi */
  EDI = (pop32());
  /* 118a67cf pop esi */
  ESI = (pop32());
  /* 118a67d0 pop ebx */
  EBX = (pop32());
  /* 118a67d1 mov esp, ebp */
  ESP = (EBP);
  /* 118a67d3 pop ebp */
  EBP = (pop32());
  /* 118a67d4 ret  */
  ESPCHK(0x118a6640u, _esp0);
  ESP += 4; return;
}

/* FUN_100167e0 @ 0x118a67e0 (398 bytes, 140 insns) */
void f_118a67e0(void) {
  FTRACE(0x118a67e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a67e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a67e1 mov ebp, esp */
  EBP = (ESP);
  /* 118a67e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118a67e5 push 0x118c0478 */
  push32((uint32_t)(0x118c0478u));
  /* 118a67ea push 0x118a0308 */
  push32((uint32_t)(0x118a0308u));
  /* 118a67ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118a67f5 push eax */
  push32((uint32_t)(EAX));
  /* 118a67f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118a67fd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6800 push ebx */
  push32((uint32_t)(EBX));
  /* 118a6801 push esi */
  push32((uint32_t)(ESI));
  /* 118a6802 push edi */
  push32((uint32_t)(EDI));
  /* 118a6803 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118a6806 cmp dword ptr [0x118c3b18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a680d jne 0x118a6852 */
  if (!C.zf) goto L_118a6852;
  /* 118a680f push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6811 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6813 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6815 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6817 call dword ptr [0x118c62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62dc))), 0x118a681du);
  /* 118a681d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a681f je 0x118a682d */
  if (C.zf) goto L_118a682d;
  /* 118a6821 mov dword ptr [0x118c3b18], 1 */
  w32((uint32_t)(0x118c3b18), (0x1u));
  /* 118a682b jmp 0x118a6852 */
  goto L_118a6852;
L_118a682d:;
  /* 118a682d push 0 */
  push32((uint32_t)(0x0u));
  /* 118a682f push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6831 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6833 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6835 call dword ptr [0x118c62f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62f4))), 0x118a683bu);
  /* 118a683b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a683d je 0x118a684b */
  if (C.zf) goto L_118a684b;
  /* 118a683f mov dword ptr [0x118c3b18], 2 */
  w32((uint32_t)(0x118c3b18), (0x2u));
  /* 118a6849 jmp 0x118a6852 */
  goto L_118a6852;
L_118a684b:;
  /* 118a684b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a684d jmp 0x118a6971 */
  goto L_118a6971;
L_118a6852:;
  /* 118a6852 cmp dword ptr [0x118c3b18], 2 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6859 jne 0x118a6876 */
  if (!C.zf) goto L_118a6876;
  /* 118a685b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a685e push eax */
  push32((uint32_t)(EAX));
  /* 118a685f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a6862 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6863 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a6866 push edx */
  push32((uint32_t)(EDX));
  /* 118a6867 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a686a push eax */
  push32((uint32_t)(EAX));
  /* 118a686b call dword ptr [0x118c62f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62f4))), 0x118a6871u);
  /* 118a6871 jmp 0x118a6971 */
  goto L_118a6971;
L_118a6876:;
  /* 118a6876 cmp dword ptr [0x118c3b18], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a687d jne 0x118a696f */
  if (!C.zf) goto L_118a696f;
  /* 118a6883 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6887 jne 0x118a6892 */
  if (!C.zf) goto L_118a6892;
  /* 118a6889 mov ecx, dword ptr [0x118c39c8] */
  ECX = (r32((uint32_t)(0x118c39c8)));
  /* 118a688f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_118a6892:;
  /* 118a6892 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6894 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6896 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a6899 push edx */
  push32((uint32_t)(EDX));
  /* 118a689a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a689d push eax */
  push32((uint32_t)(EAX));
  /* 118a689e call dword ptr [0x118c62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62dc))), 0x118a68a4u);
  /* 118a68a4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118a68a7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a68ab jne 0x118a68b4 */
  if (!C.zf) goto L_118a68b4;
  /* 118a68ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a68af jmp 0x118a6971 */
  goto L_118a6971;
L_118a68b4:;
  /* 118a68b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118a68bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118a68be shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118a68c0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a68c3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118a68c5 call 0x1189a3a0 */
  push32(0x118a68cau); f_1189a3a0();
  /* 118a68ca mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 118a68cd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118a68d0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 118a68d3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 118a68d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 118a68dd jmp 0x118a68f6 */
  goto L_118a68f6;
  /* 118a68df mov eax, 1 */
  EAX = (0x1u);
  /* 118a68e4 ret  */
  ESPCHK(0x118a67e0u, _esp0);
  ESP += 4; return;
  /* 118a68e5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118a68e8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 118a68ef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_118a68f6:;
  /* 118a68f6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a68fa jne 0x118a6900 */
  if (!C.zf) goto L_118a6900;
  /* 118a68fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a68fe jmp 0x118a6971 */
  goto L_118a6971;
L_118a6900:;
  /* 118a6900 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118a6903 push edx */
  push32((uint32_t)(EDX));
  /* 118a6904 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 118a6907 push eax */
  push32((uint32_t)(EAX));
  /* 118a6908 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a690b push ecx */
  push32((uint32_t)(ECX));
  /* 118a690c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a690f push edx */
  push32((uint32_t)(EDX));
  /* 118a6910 call dword ptr [0x118c62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62dc))), 0x118a6916u);
  /* 118a6916 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a6918 jne 0x118a691e */
  if (!C.zf) goto L_118a691e;
  /* 118a691a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a691c jmp 0x118a6971 */
  goto L_118a6971;
L_118a691e:;
  /* 118a691e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6922 jne 0x118a6946 */
  if (!C.zf) goto L_118a6946;
  /* 118a6924 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6926 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6928 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a692a push 0 */
  push32((uint32_t)(0x0u));
  /* 118a692c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118a692e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 118a6931 push eax */
  push32((uint32_t)(EAX));
  /* 118a6932 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 118a6937 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a693a push ecx */
  push32((uint32_t)(ECX));
  /* 118a693b call dword ptr [0x118c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6370))), 0x118a6941u);
  /* 118a6941 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118a6944 jmp 0x118a696a */
  goto L_118a696a;
L_118a6946:;
  /* 118a6946 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6948 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a694a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a694d push edx */
  push32((uint32_t)(EDX));
  /* 118a694e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a6951 push eax */
  push32((uint32_t)(EAX));
  /* 118a6952 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118a6954 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 118a6957 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6958 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 118a695d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a6960 push edx */
  push32((uint32_t)(EDX));
  /* 118a6961 call dword ptr [0x118c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6370))), 0x118a6967u);
  /* 118a6967 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_118a696a:;
  /* 118a696a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 118a696d jmp 0x118a6971 */
  goto L_118a6971;
L_118a696f:;
  /* 118a696f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a6971:;
  /* 118a6971 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 118a6974 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a6977 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118a697e pop edi */
  EDI = (pop32());
  /* 118a697f pop esi */
  ESI = (pop32());
  /* 118a6980 pop ebx */
  EBX = (pop32());
  /* 118a6981 mov esp, ebp */
  ESP = (EBP);
  /* 118a6983 pop ebp */
  EBP = (pop32());
  /* 118a6984 ret  */
  ESPCHK(0x118a67e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016990 @ 0x118a6990 (11 bytes, 6 insns) */
void f_118a6990(void) {
  FTRACE(0x118a6990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a6990 push ebp */
  push32((uint32_t)(EBP));
  /* 118a6991 mov ebp, esp */
  EBP = (ESP);
  /* 118a6993 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6996 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6999 pop ebp */
  EBP = (pop32());
  /* 118a699a ret  */
  ESPCHK(0x118a6990u, _esp0);
  ESP += 4; return;
}

/* FUN_100169a0 @ 0x118a69a0 (147 bytes, 43 insns) */
void f_118a69a0(void) {
  FTRACE(0x118a69a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a69a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a69a1 mov ebp, esp */
  EBP = (ESP);
  /* 118a69a3 push ecx */
  push32((uint32_t)(ECX));
  /* 118a69a4 cmp dword ptr [0x118c39b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c39b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a69ab jne 0x118a69c7 */
  if (!C.zf) goto L_118a69c7;
  /* 118a69ad cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a69b1 jl 0x118a69c2 */
  if ((C.sf!=C.of)) goto L_118a69c2;
  /* 118a69b3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a69b7 jg 0x118a69c2 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a69c2;
  /* 118a69b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a69bc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a69bf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_118a69c2:;
  /* 118a69c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a69c5 jmp 0x118a6a2f */
  goto L_118a6a2f;
L_118a69c7:;
  /* 118a69c7 push 0x118c3b44 */
  push32((uint32_t)(0x118c3b44u));
  /* 118a69cc call dword ptr [0x118c63ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c63ac))), 0x118a69d2u);
  /* 118a69d2 cmp dword ptr [0x118c3b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a69d9 je 0x118a69f9 */
  if (C.zf) goto L_118a69f9;
  /* 118a69db push 0x118c3b44 */
  push32((uint32_t)(0x118c3b44u));
  /* 118a69e0 call dword ptr [0x118c639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c639c))), 0x118a69e6u);
  /* 118a69e6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118a69e8 call 0x1189ac00 */
  push32(0x118a69edu); f_1189ac00();
  /* 118a69ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a69f0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118a69f7 jmp 0x118a6a00 */
  goto L_118a6a00;
L_118a69f9:;
  /* 118a69f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_118a6a00:;
  /* 118a6a00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6a03 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6a04 call 0x118a6a40 */
  push32(0x118a6a09u); f_118a6a40();
  /* 118a6a09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6a0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 118a6a0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6a13 je 0x118a6a21 */
  if (C.zf) goto L_118a6a21;
  /* 118a6a15 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118a6a17 call 0x1189aca0 */
  push32(0x118a6a1cu); f_1189aca0();
  /* 118a6a1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6a1f jmp 0x118a6a2c */
  goto L_118a6a2c;
L_118a6a21:;
  /* 118a6a21 push 0x118c3b44 */
  push32((uint32_t)(0x118c3b44u));
  /* 118a6a26 call dword ptr [0x118c639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c639c))), 0x118a6a2cu);
L_118a6a2c:;
  /* 118a6a2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_118a6a2f:;
  /* 118a6a2f mov esp, ebp */
  ESP = (EBP);
  /* 118a6a31 pop ebp */
  EBP = (pop32());
  /* 118a6a32 ret  */
  ESPCHK(0x118a69a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a40 @ 0x118a6a40 (299 bytes, 91 insns) */
void f_118a6a40(void) {
  FTRACE(0x118a6a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a6a40 push ebp */
  push32((uint32_t)(EBP));
  /* 118a6a41 mov ebp, esp */
  EBP = (ESP);
  /* 118a6a43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a6a46 cmp dword ptr [0x118c39b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c39b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6a4d jne 0x118a6a6c */
  if (!C.zf) goto L_118a6a6c;
  /* 118a6a4f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6a53 jl 0x118a6a64 */
  if ((C.sf!=C.of)) goto L_118a6a64;
  /* 118a6a55 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6a59 jg 0x118a6a64 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a6a64;
  /* 118a6a5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6a5e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6a61 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_118a6a64:;
  /* 118a6a64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6a67 jmp 0x118a6b67 */
  goto L_118a6b67;
L_118a6a6c:;
  /* 118a6a6c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6a73 jge 0x118a6ab3 */
  if ((C.sf==C.of)) goto L_118a6ab3;
  /* 118a6a75 cmp dword ptr [0x118c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6a7c jle 0x118a6a91 */
  if ((C.zf||C.sf!=C.of)) goto L_118a6a91;
  /* 118a6a7e push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6a80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6a83 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6a84 call 0x1189d210 */
  push32(0x118a6a89u); f_1189d210();
  /* 118a6a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6a8c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118a6a8f jmp 0x118a6aa5 */
  goto L_118a6aa5;
L_118a6a91:;
  /* 118a6a91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6a94 mov eax, dword ptr [0x118c1c98] */
  EAX = (r32((uint32_t)(0x118c1c98)));
  /* 118a6a99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a6a9b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 118a6a9f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 118a6aa2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_118a6aa5:;
  /* 118a6aa5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6aa9 jne 0x118a6ab3 */
  if (!C.zf) goto L_118a6ab3;
  /* 118a6aab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6aae jmp 0x118a6b67 */
  goto L_118a6b67;
L_118a6ab3:;
  /* 118a6ab3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6ab6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 118a6ab9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 118a6abf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 118a6ac5 mov eax, dword ptr [0x118c1c98] */
  EAX = (r32((uint32_t)(0x118c1c98)));
  /* 118a6aca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a6acc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 118a6ad0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 118a6ad6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a6ad8 je 0x118a6afc */
  if (C.zf) goto L_118a6afc;
  /* 118a6ada mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6add sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 118a6ae0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 118a6ae6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 118a6ae9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 118a6aec mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 118a6aef mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 118a6af3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 118a6afa jmp 0x118a6b0d */
  goto L_118a6b0d;
L_118a6afc:;
  /* 118a6afc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 118a6aff mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 118a6b02 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 118a6b06 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_118a6b0d:;
  /* 118a6b0d push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6b0f push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6b11 push 3 */
  push32((uint32_t)(0x3u));
  /* 118a6b13 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 118a6b16 push edx */
  push32((uint32_t)(EDX));
  /* 118a6b17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a6b1a push eax */
  push32((uint32_t)(EAX));
  /* 118a6b1b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 118a6b1e push ecx */
  push32((uint32_t)(ECX));
  /* 118a6b1f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 118a6b24 mov edx, dword ptr [0x118c39b8] */
  EDX = (r32((uint32_t)(0x118c39b8)));
  /* 118a6b2a push edx */
  push32((uint32_t)(EDX));
  /* 118a6b2b call 0x1189f5f0 */
  push32(0x118a6b30u); f_1189f5f0();
  /* 118a6b30 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6b33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a6b36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6b3a jne 0x118a6b41 */
  if (!C.zf) goto L_118a6b41;
  /* 118a6b3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6b3f jmp 0x118a6b67 */
  goto L_118a6b67;
L_118a6b41:;
  /* 118a6b41 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6b45 jne 0x118a6b51 */
  if (!C.zf) goto L_118a6b51;
  /* 118a6b47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a6b4a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a6b4f jmp 0x118a6b67 */
  goto L_118a6b67;
L_118a6b51:;
  /* 118a6b51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a6b54 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a6b59 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 118a6b5c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 118a6b62 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 118a6b65 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_118a6b67:;
  /* 118a6b67 mov esp, ebp */
  ESP = (EBP);
  /* 118a6b69 pop ebp */
  EBP = (pop32());
  /* 118a6b6a ret  */
  ESPCHK(0x118a6a40u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x118a6b70 (52 bytes, 19 insns) */
void f_118a6b70(void) {
  FTRACE(0x118a6b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a6b70 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118a6b74 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 118a6b78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118a6b7a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 118a6b7e jne 0x118a6b89 */
  if (!C.zf) goto L_118a6b89;
  /* 118a6b80 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118a6b84 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 118a6b86 ret 0x10 */
  ESPCHK(0x118a6b70u, _esp0);
  ESP += 20; return;
L_118a6b89:;
  /* 118a6b89 push ebx */
  push32((uint32_t)(EBX));
  /* 118a6b8a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 118a6b8c mov ebx, eax */
  EBX = (EAX);
  /* 118a6b8e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118a6b92 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 118a6b96 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6b98 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118a6b9c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 118a6b9e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6ba0 pop ebx */
  EBX = (pop32());
  /* 118a6ba1 ret 0x10 */
  ESPCHK(0x118a6b70u, _esp0);
  ESP += 20; return;
}

/* FUN_10016bb0 @ 0x118a6bb0 (46 bytes, 18 insns) */
void f_118a6bb0(void) {
  FTRACE(0x118a6bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a6bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a6bb1 mov ebp, esp */
  EBP = (ESP);
  /* 118a6bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6bb4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 118a6bb6 call 0x1189ac00 */
  push32(0x118a6bbbu); f_1189ac00();
  /* 118a6bbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6bbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6bc1 push eax */
  push32((uint32_t)(EAX));
  /* 118a6bc2 call 0x118a6be0 */
  push32(0x118a6bc7u); f_118a6be0();
  /* 118a6bc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6bca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a6bcd push 0xc */
  push32((uint32_t)(0xcu));
  /* 118a6bcf call 0x1189aca0 */
  push32(0x118a6bd4u); f_1189aca0();
  /* 118a6bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6bd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a6bda mov esp, ebp */
  ESP = (EBP);
  /* 118a6bdc pop ebp */
  EBP = (pop32());
  /* 118a6bdd ret  */
  ESPCHK(0x118a6bb0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x118a6be0 (198 bytes, 69 insns) */
void f_118a6be0(void) {
  FTRACE(0x118a6be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a6be0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a6be1 mov ebp, esp */
  EBP = (ESP);
  /* 118a6be3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a6be6 mov eax, dword ptr [0x118c37d4] */
  EAX = (r32((uint32_t)(0x118c37d4)));
  /* 118a6beb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a6bee cmp dword ptr [0x118c52e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c52e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6bf5 jne 0x118a6bfe */
  if (!C.zf) goto L_118a6bfe;
  /* 118a6bf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a6bf9 jmp 0x118a6ca2 */
  goto L_118a6ca2;
L_118a6bfe:;
  /* 118a6bfe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6c02 jne 0x118a6c26 */
  if (!C.zf) goto L_118a6c26;
  /* 118a6c04 cmp dword ptr [0x118c37dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c37dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6c0b je 0x118a6c26 */
  if (C.zf) goto L_118a6c26;
  /* 118a6c0d call 0x118a6d00 */
  push32(0x118a6c12u); f_118a6d00();
  /* 118a6c12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a6c14 je 0x118a6c1d */
  if (C.zf) goto L_118a6c1d;
  /* 118a6c16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a6c18 jmp 0x118a6ca2 */
  goto L_118a6ca2;
L_118a6c1d:;
  /* 118a6c1d mov ecx, dword ptr [0x118c37d4] */
  ECX = (r32((uint32_t)(0x118c37d4)));
  /* 118a6c23 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_118a6c26:;
  /* 118a6c26 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6c2a je 0x118a6ca0 */
  if (C.zf) goto L_118a6ca0;
  /* 118a6c2c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6c30 je 0x118a6ca0 */
  if (C.zf) goto L_118a6ca0;
  /* 118a6c32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6c35 push edx */
  push32((uint32_t)(EDX));
  /* 118a6c36 call 0x1189a030 */
  push32(0x118a6c3bu); f_1189a030();
  /* 118a6c3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6c3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118a6c41:;
  /* 118a6c41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a6c44 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6c47 je 0x118a6ca0 */
  if (C.zf) goto L_118a6ca0;
  /* 118a6c49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a6c4c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a6c4e push edx */
  push32((uint32_t)(EDX));
  /* 118a6c4f call 0x1189a030 */
  push32(0x118a6c54u); f_1189a030();
  /* 118a6c54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6c57 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6c5a jbe 0x118a6c95 */
  if ((C.cf||C.zf)) goto L_118a6c95;
  /* 118a6c5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a6c5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a6c61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a6c64 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 118a6c68 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6c6b jne 0x118a6c95 */
  if (!C.zf) goto L_118a6c95;
  /* 118a6c6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a6c70 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6c71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6c74 push edx */
  push32((uint32_t)(EDX));
  /* 118a6c75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a6c78 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a6c7a push ecx */
  push32((uint32_t)(ECX));
  /* 118a6c7b call 0x118a6cb0 */
  push32(0x118a6c80u); f_118a6cb0();
  /* 118a6c80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6c83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a6c85 jne 0x118a6c95 */
  if (!C.zf) goto L_118a6c95;
  /* 118a6c87 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a6c8a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a6c8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a6c8f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 118a6c93 jmp 0x118a6ca2 */
  goto L_118a6ca2;
L_118a6c95:;
  /* 118a6c95 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a6c98 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6c9b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118a6c9e jmp 0x118a6c41 */
  goto L_118a6c41;
L_118a6ca0:;
  /* 118a6ca0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a6ca2:;
  /* 118a6ca2 mov esp, ebp */
  ESP = (EBP);
  /* 118a6ca4 pop ebp */
  EBP = (pop32());
  /* 118a6ca5 ret  */
  ESPCHK(0x118a6be0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x118a6cb0 (79 bytes, 32 insns) */
void f_118a6cb0(void) {
  FTRACE(0x118a6cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a6cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a6cb1 mov ebp, esp */
  EBP = (ESP);
  /* 118a6cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6cb4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6cb8 jne 0x118a6cbe */
  if (!C.zf) goto L_118a6cbe;
  /* 118a6cba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a6cbc jmp 0x118a6cfb */
  goto L_118a6cfb;
L_118a6cbe:;
  /* 118a6cbe mov eax, dword ptr [0x118c4ea4] */
  EAX = (r32((uint32_t)(0x118c4ea4)));
  /* 118a6cc3 push eax */
  push32((uint32_t)(EAX));
  /* 118a6cc4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a6cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6cc8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a6ccb push edx */
  push32((uint32_t)(EDX));
  /* 118a6ccc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a6ccf push eax */
  push32((uint32_t)(EAX));
  /* 118a6cd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6cd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6cd6 mov edx, dword ptr [0x118c5144] */
  EDX = (r32((uint32_t)(0x118c5144)));
  /* 118a6cdc push edx */
  push32((uint32_t)(EDX));
  /* 118a6cdd call 0x118a6db0 */
  push32(0x118a6ce2u); f_118a6db0();
  /* 118a6ce2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6ce5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a6ce8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6cec jne 0x118a6cf5 */
  if (!C.zf) goto L_118a6cf5;
  /* 118a6cee mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 118a6cf3 jmp 0x118a6cfb */
  goto L_118a6cfb;
L_118a6cf5:;
  /* 118a6cf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a6cf8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_118a6cfb:;
  /* 118a6cfb mov esp, ebp */
  ESP = (EBP);
  /* 118a6cfd pop ebp */
  EBP = (pop32());
  /* 118a6cfe ret  */
  ESPCHK(0x118a6cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d00 @ 0x118a6d00 (174 bytes, 66 insns) */
void f_118a6d00(void) {
  FTRACE(0x118a6d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a6d00 push ebp */
  push32((uint32_t)(EBP));
  /* 118a6d01 mov ebp, esp */
  EBP = (ESP);
  /* 118a6d03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a6d06 mov eax, dword ptr [0x118c37dc] */
  EAX = (r32((uint32_t)(0x118c37dc)));
  /* 118a6d0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118a6d0e:;
  /* 118a6d0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a6d11 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6d14 je 0x118a6da8 */
  if (C.zf) goto L_118a6da8;
  /* 118a6d1a push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6d1c push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6d20 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6d22 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118a6d24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a6d27 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a6d29 push eax */
  push32((uint32_t)(EAX));
  /* 118a6d2a push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6d2c push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6d2e call dword ptr [0x118c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6370))), 0x118a6d34u);
  /* 118a6d34 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a6d37 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6d3b jne 0x118a6d42 */
  if (!C.zf) goto L_118a6d42;
  /* 118a6d3d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a6d40 jmp 0x118a6daa */
  goto L_118a6daa;
L_118a6d42:;
  /* 118a6d42 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 118a6d44 push 0x118c0484 */
  push32((uint32_t)(0x118c0484u));
  /* 118a6d49 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a6d4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a6d4e push ecx */
  push32((uint32_t)(ECX));
  /* 118a6d4f call 0x11897200 */
  push32(0x118a6d54u); f_11897200();
  /* 118a6d54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6d57 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a6d5a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6d5e jne 0x118a6d65 */
  if (!C.zf) goto L_118a6d65;
  /* 118a6d60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a6d63 jmp 0x118a6daa */
  goto L_118a6daa;
L_118a6d65:;
  /* 118a6d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6d69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a6d6c push edx */
  push32((uint32_t)(EDX));
  /* 118a6d6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a6d70 push eax */
  push32((uint32_t)(EAX));
  /* 118a6d71 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118a6d73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a6d76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a6d78 push edx */
  push32((uint32_t)(EDX));
  /* 118a6d79 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6d7b push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6d7d call dword ptr [0x118c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6370))), 0x118a6d83u);
  /* 118a6d83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a6d85 jne 0x118a6d8c */
  if (!C.zf) goto L_118a6d8c;
  /* 118a6d87 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a6d8a jmp 0x118a6daa */
  goto L_118a6daa;
L_118a6d8c:;
  /* 118a6d8c push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6d8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a6d91 push eax */
  push32((uint32_t)(EAX));
  /* 118a6d92 call 0x118a7200 */
  push32(0x118a6d97u); f_118a7200();
  /* 118a6d97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6d9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a6d9d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6da0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118a6da3 jmp 0x118a6d0e */
  goto L_118a6d0e;
L_118a6da8:;
  /* 118a6da8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a6daa:;
  /* 118a6daa mov esp, ebp */
  ESP = (EBP);
  /* 118a6dac pop ebp */
  EBP = (pop32());
  /* 118a6dad ret  */
  ESPCHK(0x118a6d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10016db0 @ 0x118a6db0 (970 bytes, 340 insns) */
void f_118a6db0(void) {
  FTRACE(0x118a6db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a6db0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a6db1 mov ebp, esp */
  EBP = (ESP);
  /* 118a6db3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118a6db5 push 0x118c04d8 */
  push32((uint32_t)(0x118c04d8u));
  /* 118a6dba push 0x118a0308 */
  push32((uint32_t)(0x118a0308u));
  /* 118a6dbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118a6dc5 push eax */
  push32((uint32_t)(EAX));
  /* 118a6dc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118a6dcd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6dd0 push ebx */
  push32((uint32_t)(EBX));
  /* 118a6dd1 push esi */
  push32((uint32_t)(ESI));
  /* 118a6dd2 push edi */
  push32((uint32_t)(EDI));
  /* 118a6dd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118a6dd6 cmp dword ptr [0x118c3b1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6ddd jne 0x118a6e36 */
  if (!C.zf) goto L_118a6e36;
  /* 118a6ddf push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6de1 push 0x118bfb34 */
  push32((uint32_t)(0x118bfb34u));
  /* 118a6de6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6de8 push 0x118bfb34 */
  push32((uint32_t)(0x118bfb34u));
  /* 118a6ded push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6def push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6df1 call dword ptr [0x118c62d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62d8))), 0x118a6df7u);
  /* 118a6df7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a6df9 je 0x118a6e07 */
  if (C.zf) goto L_118a6e07;
  /* 118a6dfb mov dword ptr [0x118c3b1c], 1 */
  w32((uint32_t)(0x118c3b1c), (0x1u));
  /* 118a6e05 jmp 0x118a6e36 */
  goto L_118a6e36;
L_118a6e07:;
  /* 118a6e07 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6e09 push 0x118bfb30 */
  push32((uint32_t)(0x118bfb30u));
  /* 118a6e0e push 1 */
  push32((uint32_t)(0x1u));
  /* 118a6e10 push 0x118bfb30 */
  push32((uint32_t)(0x118bfb30u));
  /* 118a6e15 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6e19 call dword ptr [0x118c62e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62e4))), 0x118a6e1fu);
  /* 118a6e1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a6e21 je 0x118a6e2f */
  if (C.zf) goto L_118a6e2f;
  /* 118a6e23 mov dword ptr [0x118c3b1c], 2 */
  w32((uint32_t)(0x118c3b1c), (0x2u));
  /* 118a6e2d jmp 0x118a6e36 */
  goto L_118a6e36;
L_118a6e2f:;
  /* 118a6e2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a6e31 jmp 0x118a7194 */
  goto L_118a7194;
L_118a6e36:;
  /* 118a6e36 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6e3a jle 0x118a6e4f */
  if ((C.zf||C.sf!=C.of)) goto L_118a6e4f;
  /* 118a6e3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a6e3f push eax */
  push32((uint32_t)(EAX));
  /* 118a6e40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a6e43 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6e44 call 0x118a71b0 */
  push32(0x118a6e49u); f_118a71b0();
  /* 118a6e49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6e4c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_118a6e4f:;
  /* 118a6e4f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6e53 jle 0x118a6e68 */
  if ((C.zf||C.sf!=C.of)) goto L_118a6e68;
  /* 118a6e55 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118a6e58 push edx */
  push32((uint32_t)(EDX));
  /* 118a6e59 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a6e5c push eax */
  push32((uint32_t)(EAX));
  /* 118a6e5d call 0x118a71b0 */
  push32(0x118a6e62u); f_118a71b0();
  /* 118a6e62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6e65 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_118a6e68:;
  /* 118a6e68 cmp dword ptr [0x118c3b1c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b1c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6e6f jne 0x118a6e94 */
  if (!C.zf) goto L_118a6e94;
  /* 118a6e71 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118a6e74 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6e75 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a6e78 push edx */
  push32((uint32_t)(EDX));
  /* 118a6e79 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a6e7c push eax */
  push32((uint32_t)(EAX));
  /* 118a6e7d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a6e80 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6e81 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a6e84 push edx */
  push32((uint32_t)(EDX));
  /* 118a6e85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a6e88 push eax */
  push32((uint32_t)(EAX));
  /* 118a6e89 call dword ptr [0x118c62e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62e4))), 0x118a6e8fu);
  /* 118a6e8f jmp 0x118a7194 */
  goto L_118a7194;
L_118a6e94:;
  /* 118a6e94 cmp dword ptr [0x118c3b1c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118c3b1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6e9b jne 0x118a7192 */
  if (!C.zf) goto L_118a7192;
  /* 118a6ea1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6ea5 jne 0x118a6eb0 */
  if (!C.zf) goto L_118a6eb0;
  /* 118a6ea7 mov ecx, dword ptr [0x118c39c8] */
  ECX = (r32((uint32_t)(0x118c39c8)));
  /* 118a6ead mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_118a6eb0:;
  /* 118a6eb0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6eb4 je 0x118a6ec0 */
  if (C.zf) goto L_118a6ec0;
  /* 118a6eb6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6eba jne 0x118a703c */
  if (!C.zf) goto L_118a703c;
L_118a6ec0:;
  /* 118a6ec0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a6ec3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6ec6 jne 0x118a6ed2 */
  if (!C.zf) goto L_118a6ed2;
  /* 118a6ec8 mov eax, 2 */
  EAX = (0x2u);
  /* 118a6ecd jmp 0x118a7194 */
  goto L_118a7194;
L_118a6ed2:;
  /* 118a6ed2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6ed6 jle 0x118a6ee2 */
  if ((C.zf||C.sf!=C.of)) goto L_118a6ee2;
  /* 118a6ed8 mov eax, 1 */
  EAX = (0x1u);
  /* 118a6edd jmp 0x118a7194 */
  goto L_118a7194;
L_118a6ee2:;
  /* 118a6ee2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6ee6 jle 0x118a6ef2 */
  if ((C.zf||C.sf!=C.of)) goto L_118a6ef2;
  /* 118a6ee8 mov eax, 3 */
  EAX = (0x3u);
  /* 118a6eed jmp 0x118a7194 */
  goto L_118a7194;
L_118a6ef2:;
  /* 118a6ef2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 118a6ef5 push eax */
  push32((uint32_t)(EAX));
  /* 118a6ef6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 118a6ef9 push ecx */
  push32((uint32_t)(ECX));
  /* 118a6efa call dword ptr [0x118c6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6330))), 0x118a6f00u);
  /* 118a6f00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a6f02 jne 0x118a6f0b */
  if (!C.zf) goto L_118a6f0b;
  /* 118a6f04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a6f06 jmp 0x118a7194 */
  goto L_118a7194;
L_118a6f0b:;
  /* 118a6f0b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6f0f jne 0x118a6f17 */
  if (!C.zf) goto L_118a6f17;
  /* 118a6f11 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6f15 je 0x118a6f44 */
  if (C.zf) goto L_118a6f44;
L_118a6f17:;
  /* 118a6f17 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6f1b jne 0x118a6f23 */
  if (!C.zf) goto L_118a6f23;
  /* 118a6f1d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6f21 je 0x118a6f44 */
  if (C.zf) goto L_118a6f44;
L_118a6f23:;
  /* 118a6f23 push 0x118c0498 */
  push32((uint32_t)(0x118c0498u));
  /* 118a6f28 push 0 */
  push32((uint32_t)(0x0u));
  /* 118a6f2a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 118a6f2f push 0x118c0490 */
  push32((uint32_t)(0x118c0490u));
  /* 118a6f34 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a6f36 call 0x118962c0 */
  push32(0x118a6f3bu); f_118962c0();
  /* 118a6f3b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6f3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6f41 jne 0x118a6f44 */
  if (!C.zf) goto L_118a6f44;
  /* 118a6f43 int3  */
  x86_unimpl("int3 @ 0x118a6f43");
L_118a6f44:;
  /* 118a6f44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a6f46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a6f48 jne 0x118a6f0b */
  if (!C.zf) goto L_118a6f0b;
  /* 118a6f4a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6f4e jle 0x118a6fc3 */
  if ((C.zf||C.sf!=C.of)) goto L_118a6fc3;
  /* 118a6f50 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6f54 jae 0x118a6f60 */
  if (!C.cf) goto L_118a6f60;
  /* 118a6f56 mov eax, 3 */
  EAX = (0x3u);
  /* 118a6f5b jmp 0x118a7194 */
  goto L_118a7194;
L_118a6f60:;
  /* 118a6f60 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 118a6f63 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 118a6f66 jmp 0x118a6f71 */
  goto L_118a6f71;
L_118a6f68:;
  /* 118a6f68 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 118a6f6b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6f6e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_118a6f71:;
  /* 118a6f71 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 118a6f74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a6f76 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a6f78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a6f7a je 0x118a6fb9 */
  if (C.zf) goto L_118a6fb9;
  /* 118a6f7c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 118a6f7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a6f81 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 118a6f84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a6f86 je 0x118a6fb9 */
  if (C.zf) goto L_118a6fb9;
  /* 118a6f88 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a6f8b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a6f8d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118a6f8f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 118a6f92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a6f94 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a6f96 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6f98 jl 0x118a6fb7 */
  if ((C.sf!=C.of)) goto L_118a6fb7;
  /* 118a6f9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a6f9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a6f9f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118a6fa1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 118a6fa4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a6fa6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 118a6fa9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6fab jg 0x118a6fb7 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a6fb7;
  /* 118a6fad mov eax, 2 */
  EAX = (0x2u);
  /* 118a6fb2 jmp 0x118a7194 */
  goto L_118a7194;
L_118a6fb7:;
  /* 118a6fb7 jmp 0x118a6f68 */
  goto L_118a6f68;
L_118a6fb9:;
  /* 118a6fb9 mov eax, 3 */
  EAX = (0x3u);
  /* 118a6fbe jmp 0x118a7194 */
  goto L_118a7194;
L_118a6fc3:;
  /* 118a6fc3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6fc7 jle 0x118a703c */
  if ((C.zf||C.sf!=C.of)) goto L_118a703c;
  /* 118a6fc9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a6fcd jae 0x118a6fd9 */
  if (!C.cf) goto L_118a6fd9;
  /* 118a6fcf mov eax, 1 */
  EAX = (0x1u);
  /* 118a6fd4 jmp 0x118a7194 */
  goto L_118a7194;
L_118a6fd9:;
  /* 118a6fd9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 118a6fdc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 118a6fdf jmp 0x118a6fea */
  goto L_118a6fea;
L_118a6fe1:;
  /* 118a6fe1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 118a6fe4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a6fe7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_118a6fea:;
  /* 118a6fea mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 118a6fed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a6fef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118a6ff1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a6ff3 je 0x118a7032 */
  if (C.zf) goto L_118a7032;
  /* 118a6ff5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 118a6ff8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a6ffa mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 118a6ffd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a6fff je 0x118a7032 */
  if (C.zf) goto L_118a7032;
  /* 118a7001 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a7004 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a7006 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118a7008 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 118a700b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118a700d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118a700f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a7011 jl 0x118a7030 */
  if ((C.sf!=C.of)) goto L_118a7030;
  /* 118a7013 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a7016 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a7018 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118a701a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 118a701d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a701f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 118a7022 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a7024 jg 0x118a7030 */
  if ((!C.zf&&C.sf==C.of)) goto L_118a7030;
  /* 118a7026 mov eax, 2 */
  EAX = (0x2u);
  /* 118a702b jmp 0x118a7194 */
  goto L_118a7194;
L_118a7030:;
  /* 118a7030 jmp 0x118a6fe1 */
  goto L_118a6fe1;
L_118a7032:;
  /* 118a7032 mov eax, 1 */
  EAX = (0x1u);
  /* 118a7037 jmp 0x118a7194 */
  goto L_118a7194;
L_118a703c:;
  /* 118a703c push 0 */
  push32((uint32_t)(0x0u));
  /* 118a703e push 0 */
  push32((uint32_t)(0x0u));
  /* 118a7040 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a7043 push ecx */
  push32((uint32_t)(ECX));
  /* 118a7044 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a7047 push edx */
  push32((uint32_t)(EDX));
  /* 118a7048 push 9 */
  push32((uint32_t)(0x9u));
  /* 118a704a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 118a704d push eax */
  push32((uint32_t)(EAX));
  /* 118a704e call dword ptr [0x118c6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6324))), 0x118a7054u);
  /* 118a7054 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118a7057 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a705b jne 0x118a7064 */
  if (!C.zf) goto L_118a7064;
  /* 118a705d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a705f jmp 0x118a7194 */
  goto L_118a7194;
L_118a7064:;
  /* 118a7064 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118a706b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118a706e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118a7070 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7073 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118a7075 call 0x1189a3a0 */
  push32(0x118a707au); f_1189a3a0();
  /* 118a707a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 118a707d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118a7080 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 118a7083 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 118a7086 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 118a708d jmp 0x118a70a6 */
  goto L_118a70a6;
  /* 118a708f mov eax, 1 */
  EAX = (0x1u);
  /* 118a7094 ret  */
  ESPCHK(0x118a6db0u, _esp0);
  ESP += 4; return;
  /* 118a7095 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118a7098 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 118a709f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_118a70a6:;
  /* 118a70a6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a70aa jne 0x118a70b3 */
  if (!C.zf) goto L_118a70b3;
  /* 118a70ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a70ae jmp 0x118a7194 */
  goto L_118a7194;
L_118a70b3:;
  /* 118a70b3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118a70b6 push edx */
  push32((uint32_t)(EDX));
  /* 118a70b7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 118a70ba push eax */
  push32((uint32_t)(EAX));
  /* 118a70bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118a70be push ecx */
  push32((uint32_t)(ECX));
  /* 118a70bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118a70c2 push edx */
  push32((uint32_t)(EDX));
  /* 118a70c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118a70c5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 118a70c8 push eax */
  push32((uint32_t)(EAX));
  /* 118a70c9 call dword ptr [0x118c6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6324))), 0x118a70cfu);
  /* 118a70cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a70d1 jne 0x118a70da */
  if (!C.zf) goto L_118a70da;
  /* 118a70d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a70d5 jmp 0x118a7194 */
  goto L_118a7194;
L_118a70da:;
  /* 118a70da push 0 */
  push32((uint32_t)(0x0u));
  /* 118a70dc push 0 */
  push32((uint32_t)(0x0u));
  /* 118a70de mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118a70e1 push ecx */
  push32((uint32_t)(ECX));
  /* 118a70e2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a70e5 push edx */
  push32((uint32_t)(EDX));
  /* 118a70e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 118a70e8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 118a70eb push eax */
  push32((uint32_t)(EAX));
  /* 118a70ec call dword ptr [0x118c6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6324))), 0x118a70f2u);
  /* 118a70f2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118a70f5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a70f9 jne 0x118a7102 */
  if (!C.zf) goto L_118a7102;
  /* 118a70fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a70fd jmp 0x118a7194 */
  goto L_118a7194;
L_118a7102:;
  /* 118a7102 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118a7109 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 118a710c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118a710e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7111 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118a7113 call 0x1189a3a0 */
  push32(0x118a7118u); f_1189a3a0();
  /* 118a7118 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 118a711b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118a711e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 118a7121 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 118a7124 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 118a712b jmp 0x118a7144 */
  goto L_118a7144;
  /* 118a712d mov eax, 1 */
  EAX = (0x1u);
  /* 118a7132 ret  */
  ESPCHK(0x118a6db0u, _esp0);
  ESP += 4; return;
  /* 118a7133 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118a7136 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 118a713d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_118a7144:;
  /* 118a7144 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a7148 jne 0x118a714e */
  if (!C.zf) goto L_118a714e;
  /* 118a714a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a714c jmp 0x118a7194 */
  goto L_118a7194;
L_118a714e:;
  /* 118a714e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 118a7151 push edx */
  push32((uint32_t)(EDX));
  /* 118a7152 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 118a7155 push eax */
  push32((uint32_t)(EAX));
  /* 118a7156 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118a7159 push ecx */
  push32((uint32_t)(ECX));
  /* 118a715a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 118a715d push edx */
  push32((uint32_t)(EDX));
  /* 118a715e push 1 */
  push32((uint32_t)(0x1u));
  /* 118a7160 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 118a7163 push eax */
  push32((uint32_t)(EAX));
  /* 118a7164 call dword ptr [0x118c6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c6324))), 0x118a716au);
  /* 118a716a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a716c jne 0x118a7172 */
  if (!C.zf) goto L_118a7172;
  /* 118a716e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a7170 jmp 0x118a7194 */
  goto L_118a7194;
L_118a7172:;
  /* 118a7172 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 118a7175 push ecx */
  push32((uint32_t)(ECX));
  /* 118a7176 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 118a7179 push edx */
  push32((uint32_t)(EDX));
  /* 118a717a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118a717d push eax */
  push32((uint32_t)(EAX));
  /* 118a717e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 118a7181 push ecx */
  push32((uint32_t)(ECX));
  /* 118a7182 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a7185 push edx */
  push32((uint32_t)(EDX));
  /* 118a7186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a7189 push eax */
  push32((uint32_t)(EAX));
  /* 118a718a call dword ptr [0x118c62d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62d8))), 0x118a7190u);
  /* 118a7190 jmp 0x118a7194 */
  goto L_118a7194;
L_118a7192:;
  /* 118a7192 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a7194:;
  /* 118a7194 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 118a7197 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a719a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118a71a1 pop edi */
  EDI = (pop32());
  /* 118a71a2 pop esi */
  ESI = (pop32());
  /* 118a71a3 pop ebx */
  EBX = (pop32());
  /* 118a71a4 mov esp, ebp */
  ESP = (EBP);
  /* 118a71a6 pop ebp */
  EBP = (pop32());
  /* 118a71a7 ret  */
  ESPCHK(0x118a6db0u, _esp0);
  ESP += 4; return;
}

/* FUN_100171b0 @ 0x118a71b0 (80 bytes, 32 insns) */
void f_118a71b0(void) {
  FTRACE(0x118a71b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a71b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a71b1 mov ebp, esp */
  EBP = (ESP);
  /* 118a71b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a71b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a71b9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a71bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a71bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_118a71c2:;
  /* 118a71c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a71c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a71c8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a71cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a71ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a71d0 je 0x118a71e7 */
  if (C.zf) goto L_118a71e7;
  /* 118a71d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a71d5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118a71d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a71da je 0x118a71e7 */
  if (C.zf) goto L_118a71e7;
  /* 118a71dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a71df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a71e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a71e5 jmp 0x118a71c2 */
  goto L_118a71c2;
L_118a71e7:;
  /* 118a71e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a71ea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 118a71ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a71ef jne 0x118a71f9 */
  if (!C.zf) goto L_118a71f9;
  /* 118a71f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a71f4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a71f7 jmp 0x118a71fc */
  goto L_118a71fc;
L_118a71f9:;
  /* 118a71f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_118a71fc:;
  /* 118a71fc mov esp, ebp */
  ESP = (EBP);
  /* 118a71fe pop ebp */
  EBP = (pop32());
  /* 118a71ff ret  */
  ESPCHK(0x118a71b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017200 @ 0x118a7200 (736 bytes, 224 insns) */
void f_118a7200(void) {
  FTRACE(0x118a7200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a7200 push ebp */
  push32((uint32_t)(EBP));
  /* 118a7201 mov ebp, esp */
  EBP = (ESP);
  /* 118a7203 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a7206 push esi */
  push32((uint32_t)(ESI));
  /* 118a7207 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a720b je 0x118a722c */
  if (C.zf) goto L_118a722c;
  /* 118a720d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 118a720f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a7212 push eax */
  push32((uint32_t)(EAX));
  /* 118a7213 call 0x118a7650 */
  push32(0x118a7218u); f_118a7650();
  /* 118a7218 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a721b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 118a721e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a7222 je 0x118a722c */
  if (C.zf) goto L_118a722c;
  /* 118a7224 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a7227 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a722a jne 0x118a7234 */
  if (!C.zf) goto L_118a7234;
L_118a722c:;
  /* 118a722c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a722f jmp 0x118a74db */
  goto L_118a74db;
L_118a7234:;
  /* 118a7234 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a7237 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 118a723b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a723d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a723f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118a7240 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118a7243 mov ecx, dword ptr [0x118c37d4] */
  ECX = (r32((uint32_t)(0x118c37d4)));
  /* 118a7249 cmp ecx, dword ptr [0x118c37d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x118c37d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a724f jne 0x118a7265 */
  if (!C.zf) goto L_118a7265;
  /* 118a7251 mov edx, dword ptr [0x118c37d4] */
  EDX = (r32((uint32_t)(0x118c37d4)));
  /* 118a7257 push edx */
  push32((uint32_t)(EDX));
  /* 118a7258 call 0x118a7560 */
  push32(0x118a725du); f_118a7560();
  /* 118a725d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7260 mov dword ptr [0x118c37d4], eax */
  w32((uint32_t)(0x118c37d4), (EAX));
L_118a7265:;
  /* 118a7265 cmp dword ptr [0x118c37d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c37d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a726c jne 0x118a7325 */
  if (!C.zf) goto L_118a7325;
  /* 118a7272 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a7276 je 0x118a7297 */
  if (C.zf) goto L_118a7297;
  /* 118a7278 cmp dword ptr [0x118c37dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c37dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a727f je 0x118a7297 */
  if (C.zf) goto L_118a7297;
  /* 118a7281 call 0x118a6d00 */
  push32(0x118a7286u); f_118a6d00();
  /* 118a7286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a7288 je 0x118a7292 */
  if (C.zf) goto L_118a7292;
  /* 118a728a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a728d jmp 0x118a74db */
  goto L_118a74db;
L_118a7292:;
  /* 118a7292 jmp 0x118a7325 */
  goto L_118a7325;
L_118a7297:;
  /* 118a7297 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a729b je 0x118a72a4 */
  if (C.zf) goto L_118a72a4;
  /* 118a729d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a729f jmp 0x118a74db */
  goto L_118a74db;
L_118a72a4:;
  /* 118a72a4 cmp dword ptr [0x118c37d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c37d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a72ab jne 0x118a72e4 */
  if (!C.zf) goto L_118a72e4;
  /* 118a72ad push 0x87 */
  push32((uint32_t)(0x87u));
  /* 118a72b2 push 0x118c04f0 */
  push32((uint32_t)(0x118c04f0u));
  /* 118a72b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a72b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 118a72bb call 0x11897200 */
  push32(0x118a72c0u); f_11897200();
  /* 118a72c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a72c3 mov dword ptr [0x118c37d4], eax */
  w32((uint32_t)(0x118c37d4), (EAX));
  /* 118a72c8 cmp dword ptr [0x118c37d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c37d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a72cf jne 0x118a72d9 */
  if (!C.zf) goto L_118a72d9;
  /* 118a72d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a72d4 jmp 0x118a74db */
  goto L_118a74db;
L_118a72d9:;
  /* 118a72d9 mov eax, dword ptr [0x118c37d4] */
  EAX = (r32((uint32_t)(0x118c37d4)));
  /* 118a72de mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_118a72e4:;
  /* 118a72e4 cmp dword ptr [0x118c37dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c37dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a72eb jne 0x118a7325 */
  if (!C.zf) goto L_118a7325;
  /* 118a72ed push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 118a72f2 push 0x118c04f0 */
  push32((uint32_t)(0x118c04f0u));
  /* 118a72f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a72f9 push 4 */
  push32((uint32_t)(0x4u));
  /* 118a72fb call 0x11897200 */
  push32(0x118a7300u); f_11897200();
  /* 118a7300 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7303 mov dword ptr [0x118c37dc], eax */
  w32((uint32_t)(0x118c37dc), (EAX));
  /* 118a7308 cmp dword ptr [0x118c37dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c37dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a730f jne 0x118a7319 */
  if (!C.zf) goto L_118a7319;
  /* 118a7311 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a7314 jmp 0x118a74db */
  goto L_118a74db;
L_118a7319:;
  /* 118a7319 mov ecx, dword ptr [0x118c37dc] */
  ECX = (r32((uint32_t)(0x118c37dc)));
  /* 118a731f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_118a7325:;
  /* 118a7325 mov edx, dword ptr [0x118c37d4] */
  EDX = (r32((uint32_t)(0x118c37d4)));
  /* 118a732b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 118a732e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a7331 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a7334 push eax */
  push32((uint32_t)(EAX));
  /* 118a7335 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a7338 push ecx */
  push32((uint32_t)(ECX));
  /* 118a7339 call 0x118a74e0 */
  push32(0x118a733eu); f_118a74e0();
  /* 118a733e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7341 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a7344 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a7348 jl 0x118a73e1 */
  if ((C.sf!=C.of)) goto L_118a73e1;
  /* 118a734e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a7351 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a7354 je 0x118a73e1 */
  if (C.zf) goto L_118a73e1;
  /* 118a735a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a735e je 0x118a73d3 */
  if (C.zf) goto L_118a73d3;
  /* 118a7360 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a7362 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a7365 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a7368 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 118a736b push edx */
  push32((uint32_t)(EDX));
  /* 118a736c call 0x11897c90 */
  push32(0x118a7371u); f_11897c90();
  /* 118a7371 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7374 jmp 0x118a737f */
  goto L_118a737f;
L_118a7376:;
  /* 118a7376 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a7379 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a737c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118a737f:;
  /* 118a737f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a7382 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a7385 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a7389 je 0x118a73a0 */
  if (C.zf) goto L_118a73a0;
  /* 118a738b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a738e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a7391 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a7394 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 118a7397 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 118a739b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 118a739e jmp 0x118a7376 */
  goto L_118a7376;
L_118a73a0:;
  /* 118a73a0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 118a73a5 push 0x118c04f0 */
  push32((uint32_t)(0x118c04f0u));
  /* 118a73aa push 2 */
  push32((uint32_t)(0x2u));
  /* 118a73ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a73af shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 118a73b2 push eax */
  push32((uint32_t)(EAX));
  /* 118a73b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a73b6 push ecx */
  push32((uint32_t)(ECX));
  /* 118a73b7 call 0x11897690 */
  push32(0x118a73bcu); f_11897690();
  /* 118a73bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a73bf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a73c2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a73c6 je 0x118a73d1 */
  if (C.zf) goto L_118a73d1;
  /* 118a73c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a73cb mov dword ptr [0x118c37d4], edx */
  w32((uint32_t)(0x118c37d4), (EDX));
L_118a73d1:;
  /* 118a73d1 jmp 0x118a73df */
  goto L_118a73df;
L_118a73d3:;
  /* 118a73d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a73d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a73d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a73dc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_118a73df:;
  /* 118a73df jmp 0x118a7454 */
  goto L_118a7454;
L_118a73e1:;
  /* 118a73e1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a73e5 jne 0x118a744d */
  if (!C.zf) goto L_118a744d;
  /* 118a73e7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a73eb jge 0x118a73f5 */
  if ((C.sf==C.of)) goto L_118a73f5;
  /* 118a73ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a73f0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a73f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118a73f5:;
  /* 118a73f5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 118a73fa push 0x118c04f0 */
  push32((uint32_t)(0x118c04f0u));
  /* 118a73ff push 2 */
  push32((uint32_t)(0x2u));
  /* 118a7401 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a7404 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 118a740b push edx */
  push32((uint32_t)(EDX));
  /* 118a740c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a740f push eax */
  push32((uint32_t)(EAX));
  /* 118a7410 call 0x11897690 */
  push32(0x118a7415u); f_11897690();
  /* 118a7415 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7418 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a741b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a741f jne 0x118a7429 */
  if (!C.zf) goto L_118a7429;
  /* 118a7421 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a7424 jmp 0x118a74db */
  goto L_118a74db;
L_118a7429:;
  /* 118a7429 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a742c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a742f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a7432 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 118a7435 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a7438 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a743b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 118a7443 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a7446 mov dword ptr [0x118c37d4], eax */
  w32((uint32_t)(0x118c37d4), (EAX));
  /* 118a744b jmp 0x118a7454 */
  goto L_118a7454;
L_118a744d:;
  /* 118a744d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a744f jmp 0x118a74db */
  goto L_118a74db;
L_118a7454:;
  /* 118a7454 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a7458 je 0x118a74d9 */
  if (C.zf) goto L_118a74d9;
  /* 118a745a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 118a745f push 0x118c04f0 */
  push32((uint32_t)(0x118c04f0u));
  /* 118a7464 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a7466 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a7469 push ecx */
  push32((uint32_t)(ECX));
  /* 118a746a call 0x1189a030 */
  push32(0x118a746fu); f_1189a030();
  /* 118a746f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7472 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7475 push eax */
  push32((uint32_t)(EAX));
  /* 118a7476 call 0x11897200 */
  push32(0x118a747bu); f_11897200();
  /* 118a747b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a747e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118a7481 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a7485 je 0x118a74d9 */
  if (C.zf) goto L_118a74d9;
  /* 118a7487 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a748a push edx */
  push32((uint32_t)(EDX));
  /* 118a748b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a748e push eax */
  push32((uint32_t)(EAX));
  /* 118a748f call 0x1189a1b0 */
  push32(0x118a7494u); f_1189a1b0();
  /* 118a7494 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7497 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118a749a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a749d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a74a0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a74a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118a74a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a74a8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 118a74ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a74ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a74b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118a74b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118a74b7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 118a74b9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a74bb not edx */
  EDX = (~(EDX));
  /* 118a74bd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 118a74c0 push edx */
  push32((uint32_t)(EDX));
  /* 118a74c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a74c4 push eax */
  push32((uint32_t)(EAX));
  /* 118a74c5 call dword ptr [0x118c62d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118c62d4))), 0x118a74cbu);
  /* 118a74cb push 2 */
  push32((uint32_t)(0x2u));
  /* 118a74cd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a74d0 push ecx */
  push32((uint32_t)(ECX));
  /* 118a74d1 call 0x11897c90 */
  push32(0x118a74d6u); f_11897c90();
  /* 118a74d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a74d9:;
  /* 118a74d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a74db:;
  /* 118a74db pop esi */
  ESI = (pop32());
  /* 118a74dc mov esp, ebp */
  ESP = (EBP);
  /* 118a74de pop ebp */
  EBP = (pop32());
  /* 118a74df ret  */
  ESPCHK(0x118a7200u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x118a74e0 (124 bytes, 47 insns) */
void f_118a74e0(void) {
  FTRACE(0x118a74e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a74e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118a74e1 mov ebp, esp */
  EBP = (ESP);
  /* 118a74e3 push ecx */
  push32((uint32_t)(ECX));
  /* 118a74e4 mov eax, dword ptr [0x118c37d4] */
  EAX = (r32((uint32_t)(0x118c37d4)));
  /* 118a74e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118a74ec jmp 0x118a74f7 */
  goto L_118a74f7;
L_118a74ee:;
  /* 118a74ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a74f1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a74f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_118a74f7:;
  /* 118a74f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a74fa cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a74fd je 0x118a754a */
  if (C.zf) goto L_118a754a;
  /* 118a74ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a7502 push eax */
  push32((uint32_t)(EAX));
  /* 118a7503 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a7506 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a7508 push edx */
  push32((uint32_t)(EDX));
  /* 118a7509 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a750c push eax */
  push32((uint32_t)(EAX));
  /* 118a750d call 0x118a6cb0 */
  push32(0x118a7512u); f_118a6cb0();
  /* 118a7512 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7515 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118a7517 jne 0x118a7548 */
  if (!C.zf) goto L_118a7548;
  /* 118a7519 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a751c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a751e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a7521 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 118a7525 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a7528 je 0x118a753a */
  if (C.zf) goto L_118a753a;
  /* 118a752a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a752d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a752f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a7532 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 118a7536 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a7538 jne 0x118a7548 */
  if (!C.zf) goto L_118a7548;
L_118a753a:;
  /* 118a753a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a753d sub eax, dword ptr [0x118c37d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c37d4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a7543 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 118a7546 jmp 0x118a7558 */
  goto L_118a7558;
L_118a7548:;
  /* 118a7548 jmp 0x118a74ee */
  goto L_118a74ee;
L_118a754a:;
  /* 118a754a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a754d sub eax, dword ptr [0x118c37d4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118c37d4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a7553 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 118a7556 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_118a7558:;
  /* 118a7558 mov esp, ebp */
  ESP = (EBP);
  /* 118a755a pop ebp */
  EBP = (pop32());
  /* 118a755b ret  */
  ESPCHK(0x118a74e0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x118a7560 (238 bytes, 80 insns) */
void f_118a7560(void) {
  FTRACE(0x118a7560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a7560 push ebp */
  push32((uint32_t)(EBP));
  /* 118a7561 mov ebp, esp */
  EBP = (ESP);
  /* 118a7563 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a7566 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118a756d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a7570 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a7573 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a7577 jne 0x118a7580 */
  if (!C.zf) goto L_118a7580;
  /* 118a7579 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a757b jmp 0x118a764a */
  goto L_118a764a;
L_118a7580:;
  /* 118a7580 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a7583 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a7585 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a7588 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a758b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118a758e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a7590 je 0x118a759d */
  if (C.zf) goto L_118a759d;
  /* 118a7592 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a7595 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7598 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 118a759b jmp 0x118a7580 */
  goto L_118a7580;
L_118a759d:;
  /* 118a759d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 118a75a2 push 0x118c04f0 */
  push32((uint32_t)(0x118c04f0u));
  /* 118a75a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118a75a9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118a75ac lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 118a75b3 push eax */
  push32((uint32_t)(EAX));
  /* 118a75b4 call 0x11897200 */
  push32(0x118a75b9u); f_11897200();
  /* 118a75b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a75bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118a75bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a75c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118a75c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a75c9 jne 0x118a75d5 */
  if (!C.zf) goto L_118a75d5;
  /* 118a75cb push 9 */
  push32((uint32_t)(0x9u));
  /* 118a75cd call 0x11896170 */
  push32(0x118a75d2u); f_11896170();
  /* 118a75d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a75d5:;
  /* 118a75d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a75d8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_118a75db:;
  /* 118a75db mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a75de cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a75e1 je 0x118a763e */
  if (C.zf) goto L_118a763e;
  /* 118a75e3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 118a75e8 push 0x118c04f0 */
  push32((uint32_t)(0x118c04f0u));
  /* 118a75ed push 2 */
  push32((uint32_t)(0x2u));
  /* 118a75ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a75f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118a75f4 push edx */
  push32((uint32_t)(EDX));
  /* 118a75f5 call 0x1189a030 */
  push32(0x118a75fau); f_1189a030();
  /* 118a75fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a75fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7600 push eax */
  push32((uint32_t)(EAX));
  /* 118a7601 call 0x11897200 */
  push32(0x118a7606u); f_11897200();
  /* 118a7606 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7609 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a760c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118a760e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a7611 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a7614 je 0x118a762a */
  if (C.zf) goto L_118a762a;
  /* 118a7616 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a7619 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118a761b push ecx */
  push32((uint32_t)(ECX));
  /* 118a761c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a761f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118a7621 push eax */
  push32((uint32_t)(EAX));
  /* 118a7622 call 0x1189a1b0 */
  push32(0x118a7627u); f_1189a1b0();
  /* 118a7627 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118a762a:;
  /* 118a762a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118a762d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7630 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118a7633 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a7636 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7639 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118a763c jmp 0x118a75db */
  goto L_118a75db;
L_118a763e:;
  /* 118a763e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118a7641 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 118a7647 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_118a764a:;
  /* 118a764a mov esp, ebp */
  ESP = (EBP);
  /* 118a764c pop ebp */
  EBP = (pop32());
  /* 118a764d ret  */
  ESPCHK(0x118a7560u, _esp0);
  ESP += 4; return;
}

/* FUN_10017650 @ 0x118a7650 (237 bytes, 81 insns) */
void f_118a7650(void) {
  FTRACE(0x118a7650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a7650 push ebp */
  push32((uint32_t)(EBP));
  /* 118a7651 mov ebp, esp */
  EBP = (ESP);
  /* 118a7653 push ecx */
  push32((uint32_t)(ECX));
  /* 118a7654 cmp dword ptr [0x118c4f2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118c4f2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a765b jne 0x118a7672 */
  if (!C.zf) goto L_118a7672;
  /* 118a765d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118a7660 push eax */
  push32((uint32_t)(EAX));
  /* 118a7661 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a7664 push ecx */
  push32((uint32_t)(ECX));
  /* 118a7665 call 0x118a7750 */
  push32(0x118a766au); f_118a7750();
  /* 118a766a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a766d jmp 0x118a7739 */
  goto L_118a7739;
L_118a7672:;
  /* 118a7672 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 118a7674 call 0x1189ac00 */
  push32(0x118a7679u); f_1189ac00();
  /* 118a7679 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a767c jmp 0x118a7687 */
  goto L_118a7687;
L_118a767e:;
  /* 118a767e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a7681 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7684 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_118a7687:;
  /* 118a7687 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a768a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 118a768e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 118a7692 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a7695 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 118a769b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118a769d je 0x118a771b */
  if (C.zf) goto L_118a771b;
  /* 118a769f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a76a2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a76a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a76a9 mov cl, byte ptr [eax + 0x118c5041] */
  CL = (r8((uint32_t)(EAX + 0x118c5041)));
  /* 118a76af and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 118a76b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a76b4 je 0x118a7706 */
  if (C.zf) goto L_118a7706;
  /* 118a76b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a76b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a76bc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 118a76bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a76c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a76c4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118a76c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118a76c8 jne 0x118a76d8 */
  if (!C.zf) goto L_118a76d8;
  /* 118a76ca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 118a76cc call 0x1189aca0 */
  push32(0x118a76d1u); f_1189aca0();
  /* 118a76d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a76d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a76d6 jmp 0x118a7739 */
  goto L_118a7739;
L_118a76d8:;
  /* 118a76d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a76db and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 118a76e1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 118a76e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a76e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118a76e9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118a76eb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118a76ed cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a76f0 jne 0x118a7704 */
  if (!C.zf) goto L_118a7704;
  /* 118a76f2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 118a76f4 call 0x1189aca0 */
  push32(0x118a76f9u); f_1189aca0();
  /* 118a76f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a76fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a76ff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118a7702 jmp 0x118a7739 */
  goto L_118a7739;
L_118a7704:;
  /* 118a7704 jmp 0x118a7716 */
  goto L_118a7716;
L_118a7706:;
  /* 118a7706 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a7709 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 118a770f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a7712 jne 0x118a7716 */
  if (!C.zf) goto L_118a7716;
  /* 118a7714 jmp 0x118a771b */
  goto L_118a771b;
L_118a7716:;
  /* 118a7716 jmp 0x118a767e */
  goto L_118a767e;
L_118a771b:;
  /* 118a771b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 118a771d call 0x1189aca0 */
  push32(0x118a7722u); f_1189aca0();
  /* 118a7722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7725 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118a7728 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a772d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118a7730 jne 0x118a7737 */
  if (!C.zf) goto L_118a7737;
  /* 118a7732 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118a7735 jmp 0x118a7739 */
  goto L_118a7739;
L_118a7737:;
  /* 118a7737 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118a7739:;
  /* 118a7739 mov esp, ebp */
  ESP = (EBP);
  /* 118a773b pop ebp */
  EBP = (pop32());
  /* 118a773c ret  */
  ESPCHK(0x118a7650u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x118a7750 (193 bytes, 87 insns) */
void f_118a7750(void) {
  FTRACE(0x118a7750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a7750 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a7752 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 118a7756 push ebx */
  push32((uint32_t)(EBX));
  /* 118a7757 mov ebx, eax */
  EBX = (EAX);
  /* 118a7759 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118a775c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 118a7760 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 118a7766 je 0x118a777b */
  if (C.zf) goto L_118a777b;
L_118a7768:;
  /* 118a7768 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 118a776a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118a776b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a776d je 0x118a7740 */
  if (C.zf) { jmp_ind(0x118a7740u); return; }
  /* 118a776f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 118a7771 je 0x118a77c4 */
  if (C.zf) goto L_118a77c4;
  /* 118a7773 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 118a7779 jne 0x118a7768 */
  if (!C.zf) goto L_118a7768;
L_118a777b:;
  /* 118a777b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 118a777d push edi */
  push32((uint32_t)(EDI));
  /* 118a777e mov eax, ebx */
  EAX = (EBX);
  /* 118a7780 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 118a7783 push esi */
  push32((uint32_t)(ESI));
  /* 118a7784 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_118a7786:;
  /* 118a7786 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 118a7788 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 118a778d mov eax, ecx */
  EAX = (ECX);
  /* 118a778f mov esi, edi */
  ESI = (EDI);
  /* 118a7791 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 118a7793 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7795 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118a7797 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 118a779a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118a779d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118a779f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 118a77a1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118a77a4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 118a77aa jne 0x118a77c8 */
  if (!C.zf) goto L_118a77c8;
  /* 118a77ac and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 118a77b1 je 0x118a7786 */
  if (C.zf) goto L_118a7786;
  /* 118a77b3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 118a77b8 jne 0x118a77c2 */
  if (!C.zf) goto L_118a77c2;
  /* 118a77ba and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 118a77c0 jne 0x118a7786 */
  if (!C.zf) goto L_118a7786;
L_118a77c2:;
  /* 118a77c2 pop esi */
  ESI = (pop32());
  /* 118a77c3 pop edi */
  EDI = (pop32());
L_118a77c4:;
  /* 118a77c4 pop ebx */
  EBX = (pop32());
  /* 118a77c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118a77c7 ret  */
  ESPCHK(0x118a7750u, _esp0);
  ESP += 4; return;
L_118a77c8:;
  /* 118a77c8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 118a77cb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a77cd je 0x118a7805 */
  if (C.zf) goto L_118a7805;
  /* 118a77cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118a77d1 je 0x118a77c2 */
  if (C.zf) goto L_118a77c2;
  /* 118a77d3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a77d5 je 0x118a77fe */
  if (C.zf) goto L_118a77fe;
  /* 118a77d7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 118a77d9 je 0x118a77c2 */
  if (C.zf) goto L_118a77c2;
  /* 118a77db shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 118a77de cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a77e0 je 0x118a77f7 */
  if (C.zf) goto L_118a77f7;
  /* 118a77e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118a77e4 je 0x118a77c2 */
  if (C.zf) goto L_118a77c2;
  /* 118a77e6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118a77e8 je 0x118a77f0 */
  if (C.zf) goto L_118a77f0;
  /* 118a77ea test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 118a77ec je 0x118a77c2 */
  if (C.zf) goto L_118a77c2;
  /* 118a77ee jmp 0x118a7786 */
  goto L_118a7786;
L_118a77f0:;
  /* 118a77f0 pop esi */
  ESI = (pop32());
  /* 118a77f1 pop edi */
  EDI = (pop32());
  /* 118a77f2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 118a77f5 pop ebx */
  EBX = (pop32());
  /* 118a77f6 ret  */
  ESPCHK(0x118a7750u, _esp0);
  ESP += 4; return;
L_118a77f7:;
  /* 118a77f7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 118a77fa pop esi */
  ESI = (pop32());
  /* 118a77fb pop edi */
  EDI = (pop32());
  /* 118a77fc pop ebx */
  EBX = (pop32());
  /* 118a77fd ret  */
  ESPCHK(0x118a7750u, _esp0);
  ESP += 4; return;
L_118a77fe:;
  /* 118a77fe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 118a7801 pop esi */
  ESI = (pop32());
  /* 118a7802 pop edi */
  EDI = (pop32());
  /* 118a7803 pop ebx */
  EBX = (pop32());
  /* 118a7804 ret  */
  ESPCHK(0x118a7750u, _esp0);
  ESP += 4; return;
L_118a7805:;
  /* 118a7805 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 118a7808 pop esi */
  ESI = (pop32());
  /* 118a7809 pop edi */
  EDI = (pop32());
  /* 118a780a pop ebx */
  EBX = (pop32());
  /* 118a780b ret  */
  ESPCHK(0x118a7750u, _esp0);
  ESP += 4; return;
  /* 118a780c jmp dword ptr [0x118c6388] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x118c6388)))); return;
}

/* RtlUnwind @ 0x118a795c (6 bytes, 1 insns) */
void f_118a795c(void) {
  FTRACE(0x118a795cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118a795c jmp dword ptr [0x118c630c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x118c630c)))); return;
}

